void __cdecl os_unfair_lock_assert_not_owner(const os_unfair_lock *lock)
{
  if ( (lock->_os_unfair_lock_opaque | 1) == *(_DWORD *)(_ReadStatusReg(TPIDRRO_EL0) + 24) )
    os_unfair_lock_assert_not_owner_cold_1();
}
