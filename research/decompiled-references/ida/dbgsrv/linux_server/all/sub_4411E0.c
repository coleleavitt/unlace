/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4411E0
// Address: 0x00000000004411E0

//----- (00000000004411E0) ----------------------------------------------------
__int64 __fastcall sub_4411E0(
        _QWORD *a1,
        __m128i *a2,
        const char *a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rbp
  char v15; // r12
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rax

  v13 = a1[7];
  v15 = sub_47A1C0(1);
  v18 = sub_43EEA0((__int64)a1, a2, a3, a4, 0.0, a6, a7, a8, v16, v17, a11, a12);
  sub_47A1C0(v15);
  v19 = sub_479E90();
  while ( (unsigned __int64)(int)v13 < a1[7] )
  {
    if ( !(unsigned __int8)sub_443560((__int64)a1, 0.0, a6, a7, a8, v20, v21, a11, a12) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(508);
      BUG();
    }
  }
  v22 = a1[13];
  if ( v22 )
    v22 += 32;
  a1[16] = v22;
  if ( (_BYTE)v18 )
    v19 = 0;
  sub_479EB0(v19);
  return v18;
}
// 441237: variable 'v16' is possibly undefined
// 441237: variable 'v17' is possibly undefined
// 44125B: variable 'v20' is possibly undefined
// 44125B: variable 'v21' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
