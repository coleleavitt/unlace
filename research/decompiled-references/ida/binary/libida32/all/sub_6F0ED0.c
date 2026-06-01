__int64 __fastcall sub_6F0ED0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rsi
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v17; // rbx
  __int64 v18; // r14
  double v19; // xmm4_8
  double v20; // xmm5_8
  __m128i v21; // xmm0
  __int64 v22; // rbx
  __int64 v23; // r14
  __m128i v24; // rax
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+10h] [rbp-78h]
  __m128i v27; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v12 = *(_QWORD *)(a2 + 56);
  v31 = __readfsqword(0x28u);
  if ( v12 && !(unsigned __int8)sub_6ED600(a1, v12, 0, a4, a5, a6, a7, a8, a9, a10, a11) )
    return 0;
  v14 = (__int64 *)(a2 + 64);
  v15 = a2 + 8LL * *(unsigned int *)(a2 + 52) + 56;
  if ( a2 + 64 != v15 )
  {
    while ( (unsigned __int8)sub_6ED600(a1, *v14, 0, a4, a5, a6, a7, a8, a9, a10, a11) )
    {
      if ( (__int64 *)v15 == ++v14 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v17 = *(_QWORD *)(a2 + 24);
  v18 = v17 + 8LL * *(_QWORD *)(a2 + 32);
  if ( v17 != v18 )
  {
    while ( (unsigned __int8)sub_6EFC60(a1, a4, *(double *)a5.m128i_i64, a6, a7, a8, a9, a10, a11) )
    {
      v17 += 8;
      if ( v18 == v17 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  sub_EC6110(&v27, a2);
  v21 = _mm_load_si128(&v27);
  v22 = v29;
  v23 = v30;
  v26 = v28;
  v24 = v21;
  v25 = v21;
LABEL_14:
  if ( v22 != v24.m128i_i64[0] )
  {
LABEL_15:
    if ( (v24.m128i_i8[8] & 3) != 0 )
      v24.m128i_i64[0] = sub_ECEDF0(&v25);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v24.m128i_i64[0],
                               a3,
                               *(double *)v21.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v19,
                               v20,
                               a10,
                               a11) )
    {
      v24.m128i_i64[1] = v25.m128i_i64[1];
      if ( (v25.m128i_i8[8] & 3) != 0 )
      {
        if ( v25.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v25, 1);
        else
          sub_ECEC20(&v25);
        v24 = v25;
        goto LABEL_14;
      }
      v24.m128i_i64[0] = v25.m128i_i64[0] + 8;
      v25.m128i_i64[0] = v24.m128i_i64[0];
      if ( v22 == v24.m128i_i64[0] )
        goto LABEL_20;
    }
    return 0;
  }
LABEL_20:
  if ( v23 != v24.m128i_i64[1] )
    goto LABEL_15;
  return 1;
}

