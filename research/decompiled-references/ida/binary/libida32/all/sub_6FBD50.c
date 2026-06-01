__int64 __fastcall sub_6FBD50(
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
  double v14; // xmm4_8
  double v15; // xmm5_8
  __m128i v16; // xmm0
  __int64 v17; // r12
  __int64 v18; // r14
  __m128i v19; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  double v26; // xmm4_8
  double v27; // xmm5_8
  __m128i v28; // [rsp+0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+10h] [rbp-78h]
  __m128i v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+40h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-30h]

  v12 = *(_QWORD *)(a2 + 40);
  v34 = __readfsqword(0x28u);
  if ( (v12 & 6) != 4
    || (v21 = v12 & 0xFFFFFFFFFFFFFFF8LL,
        v22 = sub_B685F0(v21),
        v23 = sub_A5E330(v22, v21, 0),
        v30.m128i_i32[0] = *(_DWORD *)(a2 + 36),
        v30.m128i_i32[1] = v30.m128i_i32[0],
        (unsigned __int8)sub_6F74E0(a1, v23, (__int64)&v30, v24, v25, a4, a5, a6, a7, v26, v27, a10, a11)) )
  {
    sub_EC6110(&v30, a2);
    v16 = _mm_load_si128(&v30);
    v17 = v32;
    v18 = v33;
    v28 = v16;
    v29 = v31;
    v19 = v16;
LABEL_3:
    if ( v17 == v19.m128i_i64[0] )
    {
LABEL_9:
      if ( v18 == v19.m128i_i64[1] )
        return 1;
    }
    if ( (v19.m128i_i8[8] & 3) != 0 )
      v19.m128i_i64[0] = sub_ECEDF0(&v28);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v19.m128i_i64[0],
                               a3,
                               *(double *)v16.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v14,
                               v15,
                               a10,
                               a11) )
    {
      v19.m128i_i64[1] = v28.m128i_i64[1];
      if ( (v28.m128i_i8[8] & 3) != 0 )
      {
        if ( v28.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v28, 1);
        else
          sub_ECEC20(&v28);
        v19 = v28;
        goto LABEL_3;
      }
      v19.m128i_i64[0] = v28.m128i_i64[0] + 8;
      v28.m128i_i64[0] = v19.m128i_i64[0];
      if ( v17 == v19.m128i_i64[0] )
        goto LABEL_9;
    }
  }
  return 0;
}

