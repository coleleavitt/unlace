atomic_ullong *__fastcall _os_once(atomic_ullong *result)
{
  unsigned __int64 explicit; // x8
  __int64 v2; // x8

  explicit = atomic_load_explicit(result, memory_order_acquire);
  if ( (explicit & 3) == 1 )
  {
    if ( 4LL * MEMORY[0xFFFFFC180] - explicit + 1 >= 0x10 )
      *result = -1;
  }
  else
  {
    v2 = 0;
    atomic_compare_exchange_strong_explicit(
      result,
      (unsigned __int64 *)&v2,
      (unsigned int)*(_QWORD *)(_ReadStatusReg(TPIDRRO_EL0) + 24),
      memory_order_acquire,
      memory_order_acquire);
    if ( v2 )
      return (atomic_ullong *)_os_once_gate_wait();
    else
      return (atomic_ullong *)_os_once_callout();
  }
  return result;
}
