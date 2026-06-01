void __cdecl os_unfair_lock_unlock(os_unfair_lock_t lock)
{
  int v1; // w1

  v1 = *(_DWORD *)(_ReadStatusReg(TPIDRRO_EL0) + 24);
  if ( atomic_exchange_explicit((atomic_uint *volatile)lock, 0, memory_order_release) != v1 )
    _os_unfair_lock_unlock_slow();
}
