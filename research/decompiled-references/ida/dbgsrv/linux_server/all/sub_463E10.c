/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463E10
// Address: 0x0000000000463E10

//----- (0000000000463E10) ----------------------------------------------------
__int64 __fastcall sub_463E10(
        __int64 a1,
        const char *a2,
        int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  void *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // ebp

  v12 = sub_47F560(a2, 0);
  if ( v12 )
  {
    v15 = (void *)v12;
    if ( a3 == 11 )
    {
      v16 = sub_4638C0(a1, v12, *(double *)a4.m128_u64, a5, a6, a7, v13, v14, a10, a11);
    }
    else
    {
      if ( a3 != 18 )
      {
        v17 = 0;
        goto LABEL_6;
      }
      v16 = sub_45E490(a1, v12, a4, a5, a6, a7, v13, v14, a10, a11);
    }
    v17 = v16;
LABEL_6:
    sub_47F680(v15);
    return v17;
  }
  return 0;
}
// 463E3B: variable 'v13' is possibly undefined
// 463E3B: variable 'v14' is possibly undefined
