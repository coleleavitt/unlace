void __cdecl os_unfair_lock_lock(os_unfair_lock_t lock)
{
  int v1; // w8

  v1 = 0;
  atomic_compare_exchange_strong_explicit(
    (atomic_uint *volatile)lock,
    (unsigned int *)&v1,
    *(_DWORD *)(_ReadStatusReg(TPIDRRO_EL0) + 24),
    memory_order_acquire,
    memory_order_acquire);
  if ( v1 )
    _os_unfair_lock_lock_slow();
}
