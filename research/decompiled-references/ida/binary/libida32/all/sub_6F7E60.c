__int64 __fastcall sub_6F7E60(
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
  unsigned int v14; // eax
  unsigned int v15; // r12d
  double v17; // xmm4_8
  double v18; // xmm5_8
  __m128i v19; // xmm0
  __int64 v20; // r13
  __int64 v21; // r15
  __m128i v22; // rax
  __m128i v23; // [rsp+0h] [rbp-98h] BYREF
  __int64 v24; // [rsp+10h] [rbp-88h]
  __m128i v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 40);
  v29 = __readfsqword(0x28u);
  v14 = sub_6F7D60(a1, v12, *(_QWORD *)(a2 + 48), a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (_BYTE)v14 )
  {
    v15 = v14;
    sub_EC6110(&v25, a2);
    v19 = _mm_load_si128(&v25);
    v20 = v27;
    v21 = v28;
    v23 = v19;
    v24 = v26;
    v22 = v19;
LABEL_5:
    if ( v20 == v22.m128i_i64[0] )
    {
LABEL_11:
      if ( v21 == v22.m128i_i64[1] )
        return v15;
    }
    if ( (v22.m128i_i8[8] & 3) != 0 )
      v22.m128i_i64[0] = sub_ECEDF0(&v23);
    while ( (unsigned __int8)sub_6ED600(
                               a1,
                               *(_QWORD *)v22.m128i_i64[0],
                               a3,
                               *(double *)v19.m128i_i64,
                               a5,
                               a6,
                               a7,
                               v17,
                               v18,
                               a10,
                               a11) )
    {
      v22.m128i_i64[1] = v23.m128i_i64[1];
      if ( (v23.m128i_i8[8] & 3) != 0 )
      {
        if ( v23.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v23, 1);
        else
          sub_ECEC20(&v23);
        v22 = v23;
        goto LABEL_5;
      }
      v22.m128i_i64[0] = v23.m128i_i64[0] + 8;
      v23.m128i_i64[0] = v22.m128i_i64[0];
      if ( v20 == v22.m128i_i64[0] )
        goto LABEL_11;
    }
  }
  return 0;
}

