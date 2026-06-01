/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BC30
// Address: 0x000000000042BC30

//----- (000000000042BC30) ----------------------------------------------------
__int64 __fastcall sub_42BC30(
        const char *a1,
        _BYTE *a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rax
  __m128i *v12; // rbx
  double v13; // xmm4_8
  double v14; // xmm5_8
  unsigned int v15; // ebp

  v11 = sub_47F560(a1, a3);
  if ( v11 )
  {
    v12 = (__m128i *)v11;
    sub_45A850();
    v15 = sub_42B240(v12, a2, a4, a5, a6, a7, v13, v14, a10, a11);
    sub_45A860();
    sub_47F680(v12);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v15;
}
// 42BC54: variable 'v13' is possibly undefined
// 42BC54: variable 'v14' is possibly undefined
