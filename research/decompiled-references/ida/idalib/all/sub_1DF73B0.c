__int64 __fastcall sub_1DF73B0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  unsigned __int16 *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int16 *v18; // r12
  unsigned int *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9

  v14 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v18 = v14;
  v19 = sub_1DF70C0(a1, *(unsigned int **)(a2 + 24), a7, a8, a9, a10, v15, v16, a13, a14);
  if ( v19 == (unsigned int *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C3AFE0(
             *a1,
             *(unsigned int *)(a2 + 8),
             (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL,
             (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL,
             v20,
             v21);
}
