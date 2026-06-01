__int64 __fastcall _pthread_setcancelstate_exit(__int64 result)
{
  unsigned __int16 v1; // w9
  int v2; // w10
  bool v3; // zf

  v1 = *(_WORD *)(result + 166);
  v2 = v1;
  do
  {
    atomic_compare_exchange_strong_explicit(
      (atomic_ushort *volatile)(result + 166),
      (unsigned __int16 *)&v2,
      v1 & 0xFFDC | 0x22,
      memory_order_relaxed,
      memory_order_relaxed);
    v3 = v2 == v1;
    v1 = v2;
  }
  while ( !v3 );
  return result;
}
