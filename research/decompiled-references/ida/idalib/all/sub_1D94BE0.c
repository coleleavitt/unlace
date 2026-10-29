__int64 __fastcall sub_1D94BE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rsi

  v7 = *(_QWORD *)(a2 + 16);
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)(v8 + 40);
  return sub_1D8B300(a1, (unsigned __int16 *)v8, a6, a7, a3, a4, a5);
}
