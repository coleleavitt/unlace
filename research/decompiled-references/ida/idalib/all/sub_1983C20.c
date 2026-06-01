unsigned __int64 __fastcall sub_1983C20(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi

  v4 = *(_QWORD *)(a2 + 16);
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 40);
  return sub_190CCA0(a1, (unsigned __int16 *)v5, a3, a4);
}
