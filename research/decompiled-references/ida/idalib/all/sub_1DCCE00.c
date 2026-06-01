unsigned __int16 *__fastcall sub_1DCCE00(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi

  v8 = *(_QWORD *)(a2 + 16);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)(v9 + 40);
  return sub_1DC71F0(a1, v9, a3, a4, a5, a6, a7, a8);
}
