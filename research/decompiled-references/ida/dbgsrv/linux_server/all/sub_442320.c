/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442320
// Address: 0x0000000000442320

//----- (0000000000442320) ----------------------------------------------------
__int64 __fastcall sub_442320(
        char **a1,
        __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char *v12; // rax
  char *v13; // rsi
  char *v14; // rdi
  char *v16; // rax

  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < v12 + 1 )
  {
    v16 = (char *)sub_481540((__int64)a1, v13, (unsigned __int64)(v12 + 1), 0x20u);
    *a1 = v16;
    v13 = v16;
    v12 = a1[1];
  }
  v14 = &v13[32 * (_QWORD)v12];
  *v14 = 2;
  *((_QWORD *)v14 + 3) = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++a1[1];
  return sub_442230((__m128i *)v14, a2, 0.0, a4, a5, a6, a7, a8, a9, a10);
}
// 442366: variable 'a7' is possibly undefined
// 442366: variable 'a8' is possibly undefined
