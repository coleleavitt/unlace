/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4446F0
// Address: 0x00000000004446F0

//----- (00000000004446F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4446F0(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rdx
  __int64 v10; // rbp
  double v11; // xmm4_8
  double v12; // xmm5_8
  char *v14; // rsi
  char *v15; // rsi
  char *v16; // rax

  v9 = a1[4];
  if ( !v9 )
  {
    v14 = (char *)a1[3];
    if ( !a1[5] )
    {
      v16 = (char *)sub_481540((__int64)(a1 + 3), v14, 1u, 0x20u);
      v9 = a1[4];
      a1[3] = v16;
      v14 = v16;
    }
    a2 = 0.0;
    v15 = &v14[32 * v9];
    *v15 = 2;
    *((_QWORD *)v15 + 3) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    v9 = a1[4] + 1LL;
    a1[4] = v9;
  }
  v10 = a1[3] + 32 * v9 - 32;
  sub_444580(v10, a2, a3, a4, a5, a6, a7, a8, a9);
  return sub_444290((__int64)a1, v10, a2, a3, a4, a5, v11, v12, a8, a9);
}
// 444712: variable 'a6' is possibly undefined
// 444712: variable 'a7' is possibly undefined
// 444723: variable 'v11' is possibly undefined
// 444723: variable 'v12' is possibly undefined
