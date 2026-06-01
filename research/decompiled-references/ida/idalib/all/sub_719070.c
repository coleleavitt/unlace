__int64 __fastcall sub_719070(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // r8
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 **v19; // r14
  __int64 v20; // rbp

  if ( a2 != *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v14 = 8 * ((4 * ((*(_BYTE *)(a2 + 19) >> 2) + 2 * ((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
    v15 = sub_F6C520(*(_QWORD *)(a2 + 24));
    if ( !(unsigned __int8)sub_717AC0(
                             a1,
                             *(_QWORD *)(a2 + 24),
                             v15 * ((a3 + v14 != 0) + (a3 + v14 - (unsigned __int64)(a3 + v14 != 0)) / v15),
                             v15,
                             v16,
                             a6,
                             a7,
                             a8,
                             a9,
                             v17,
                             v18,
                             a12,
                             a13) )
      return 0;
  }
  if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) != 0 )
  {
    v19 = (__int64 **)(a3 + 24);
    v20 = a3 + 8LL * (((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu) - 1) + 32;
    while ( (unsigned __int8)sub_717AC0(a1, **v19, (__int64)(*v19 + 1), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
    {
      if ( (__int64 **)v20 == ++v19 )
        return 1;
    }
    return 0;
  }
  return 1;
}
