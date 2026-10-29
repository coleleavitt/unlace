/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4571E0
// Address: 0x00000000004571E0

//----- (00000000004571E0) ----------------------------------------------------
_QWORD *__fastcall sub_4571E0(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _QWORD *v11; // rbx
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  char v18; // r14
  double v19; // xmm4_8
  double v20; // xmm5_8
  const char *v21; // r14
  const char *v22; // r15
  unsigned int v23; // eax
  double v24; // xmm4_8
  double v25; // xmm5_8
  double v26; // xmm4_8
  double v27; // xmm5_8
  char v29; // [rsp+10h] [rbp-88h] BYREF
  __int128 v30; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  char v32[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v11 = *(_QWORD **)(a1 + 400);
  if ( !v11 )
    return nullptr;
  v13 = (_QWORD *)(a1 + 392);
  do
  {
    while ( 1 )
    {
      v14 = v11[2];
      v15 = v11[3];
      if ( v11[4] < a3 )
        break;
      v13 = v11;
      v11 = (_QWORD *)v11[2];
      if ( !v14 )
        goto LABEL_6;
    }
    v11 = (_QWORD *)v11[3];
  }
  while ( v15 );
LABEL_6:
  if ( (_QWORD *)(a1 + 392) == v13 || a3 < v13[4] )
    return nullptr;
  v29 = 2;
  v31 = 0;
  v30 = 0;
  sub_485490(v32, 32, "__lc%a", a3);
  sub_45A850();
  sub_45A870(a1, a2);
  if ( !*((_BYTE *)v13 + 464) )
  {
    if ( !(unsigned __int8)sub_43A520(
                             v32,
                             (const char *)v13[6],
                             0,
                             0,
                             1,
                             0.0,
                             *(double *)a5.m128_u64,
                             *(double *)a6.m128_u64,
                             a7,
                             v16,
                             v17,
                             a10,
                             a11) )
    {
      sub_45A860();
      goto LABEL_12;
    }
    *((_BYTE *)v13 + 464) = 1;
  }
  v18 = sub_447320((__m128i *)&v29, v32, nullptr, 0, 0, 0, (__m128)0LL, a5, a6, a7, v16, v17, a10, a11);
  sub_45A860();
  if ( v18 )
  {
    sub_4424F0((__int64)&v29, 0.0, a5, a6, a7, v19, v20, a10, a11);
    v11 = v13 + 5;
    if ( !(_QWORD)v30 )
      goto LABEL_13;
    sub_441540((__int64)&v29, 0.0, a5, a6, a7, v26, v27, a10, a11);
    return nullptr;
  }
LABEL_12:
  v21 = (const char *)sub_47A110(0);
  v22 = (const char *)sub_47A0D0(0);
  v23 = sub_479E90();
  sub_45F190(*(_QWORD *)(a1 + 480), a3, v23, v22, v21, (__m128)0LL, a5, a6, a7, v24, v25, a10, a11);
LABEL_13:
  sub_441540((__int64)&v29, 0.0, a5, a6, a7, v26, v27, a10, a11);
  return v11;
}
// 4572DF: variable 'v16' is possibly undefined
// 4572DF: variable 'v17' is possibly undefined
// 457347: variable 'v24' is possibly undefined
// 457347: variable 'v25' is possibly undefined
// 45734F: variable 'v26' is possibly undefined
// 45734F: variable 'v27' is possibly undefined
// 457363: variable 'v19' is possibly undefined
// 457363: variable 'v20' is possibly undefined
