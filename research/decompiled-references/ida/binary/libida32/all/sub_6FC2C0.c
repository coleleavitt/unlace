__int64 __fastcall sub_6FC2C0(
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
        __m128 a11,
        __int64 a12,
        __int64 a13)
{
  bool v13; // sf
  double v15; // xmm4_8
  double v16; // xmm5_8
  __m128i v17; // xmm0
  __int64 v18; // r12
  __int64 v19; // r14
  __m128i v20; // rax
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  __m128i v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v13 = *(char *)(a2 + 2) < 0;
  v28 = __readfsqword(0x28u);
  if ( !v13
    || (unsigned __int8)sub_6F74E0(
                          a1,
                          **(_QWORD **)(a2 + 16),
                          *(_QWORD *)(a2 + 16) + 8LL,
                          *(_QWORD *)(a2 + 16) + 8LL,
                          a13,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          a11) )
  {
    sub_EC6110(&v24, a2);
    v17 = _mm_load_si128(&v24);
    v18 = v26;
    v19 = v27;
    v22 = v17;
    v23 = v25;
    v20 = v17;
LABEL_3:
    if ( v18 == v20.m128i_i64[0] )
    {
LABEL_9:
      if ( v19 == v20.m128i_i64[1] )
        return 1;
    }
    if ( (v20.m128i_i8[8] & 3) != 0 )
      v20.m128i_i64[0] = sub_ECEDF0(&v22);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v20.m128i_i64[0],
                               a3,
                               *(double *)v17.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v15,
                               v16,
                               a10,
                               a11) )
    {
      v20.m128i_i64[1] = v22.m128i_i64[1];
      if ( (v22.m128i_i8[8] & 3) != 0 )
      {
        if ( v22.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v22, 1);
        else
          sub_ECEC20(&v22);
        v20 = v22;
        goto LABEL_3;
      }
      v20.m128i_i64[0] = v22.m128i_i64[0] + 8;
      v22.m128i_i64[0] = v20.m128i_i64[0];
      if ( v18 == v20.m128i_i64[0] )
        goto LABEL_9;
    }
  }
  return 0;
}

