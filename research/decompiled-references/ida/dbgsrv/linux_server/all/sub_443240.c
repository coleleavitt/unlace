/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443240
// Address: 0x0000000000443240

//----- (0000000000443240) ----------------------------------------------------
__int64 __fastcall sub_443240(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v14; // eax
  unsigned __int8 *v16; // rbp
  unsigned __int8 *v17; // r13
  char *v18; // rdi
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rax
  unsigned __int8 v27[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a4 )
    return a2;
  v14 = a2 + a5 - a3;
  if ( v14 >= 0 && a5 > v14 )
  {
    v16 = (unsigned __int8 *)(a4 + 32LL * v14);
    v17 = (unsigned __int8 *)(32 * ((int)(a2 + a5 - a3) + (unsigned __int64)(a3 - a2)) + a4);
    do
    {
      v27[0] = 2;
      v29 = 0;
      v28 = 0;
      sub_4418C0(v27, v16, 0.0, a7, a8, a9, a10, a11, a12, a13);
      v23 = a1[4];
      v24 = (char *)a1[3];
      if ( a1[5] < (unsigned __int64)(v23 + 1) )
      {
        v25 = (char *)sub_481540((__int64)(a1 + 3), v24, v23 + 1, 0x20u);
        a1[3] = v25;
        v24 = v25;
        v23 = a1[4];
      }
      a7 = 0;
      v18 = &v24[32 * v23];
      *v18 = 2;
      *((_QWORD *)v18 + 3) = 0;
      *(_OWORD *)(v18 + 8) = 0;
      sub_4418C0((unsigned __int8 *)v18, v27, 0.0, (__m128)0LL, a8, a9, v21, v22, a12, a13);
      ++a1[4];
      v16 += 32;
      sub_441540((__int64)v27, 0.0, (__m128)0LL, a8, a9, v19, v20, a12, a13);
    }
    while ( v16 != v17 );
  }
  return a3;
}
// 4432CE: variable 'v21' is possibly undefined
// 4432CE: variable 'v22' is possibly undefined
// 4432DF: variable 'v19' is possibly undefined
// 4432DF: variable 'v20' is possibly undefined
// 443303: variable 'a10' is possibly undefined
// 443303: variable 'a11' is possibly undefined
