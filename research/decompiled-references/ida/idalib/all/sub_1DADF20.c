__int64 __fastcall sub_1DADF20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128i a8,
        __m128i a9,
        double a10,
        double a11,
        __m128 a12,
        __m128i a13)
{
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v17; // r12
  unsigned int *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9

  v13 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v13 == 1 )
    return 1;
  v17 = v13;
  v18 = sub_1DADC30(a1, *(unsigned int **)(a2 + 24), a6, a7, a8, a9, v14, v15, a12, a13);
  if ( v18 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C3AFE0(
             *a1,
             *(unsigned int *)(a2 + 8),
             v17 & 0xFFFFFFFFFFFFFFFELL,
             (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL,
             v19,
             v20);
}
