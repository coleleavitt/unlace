atomic_uint *__fastcall os_unfair_lock_lock_with_options(atomic_uint *result, int a2)
{
  int v2; // w8
  __int64 v3; // x2

  v2 = 0;
  v3 = *(unsigned int *)(_ReadStatusReg(TPIDRRO_EL0) + 24);
  atomic_compare_exchange_strong_explicit(result, (unsigned int *)&v2, v3, memory_order_acquire, memory_order_acquire);
  if ( v2 )
    return (atomic_uint *)_os_unfair_lock_lock_slow((__int64)result, a2, v3);
  return result;
}
