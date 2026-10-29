bool __fastcall mutex_seq_atomic_cmpxchgv_release(atomic_ullong *a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // x8
  __int64 v4; // x10

  v3 = *a2;
  v4 = *a2;
  atomic_compare_exchange_strong_explicit(a1, (unsigned __int64 *)&v4, *a3, memory_order_release, memory_order_relaxed);
  *a2 = v4;
  return v4 == v3;
}
