__int64 __fastcall sub_6F0470(
        __int64 *a1,
        _QWORD *a2,
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
  unsigned int v12; // eax
  unsigned int v13; // r12d
  double v15; // xmm4_8
  double v16; // xmm5_8
  __m128i v17; // xmm0
  __int64 v18; // r13
  __int64 v19; // r15
  __m128i v20; // rax
  __m128i v21; // [rsp+0h] [rbp-98h] BYREF
  __int64 v22; // [rsp+10h] [rbp-88h]
  __m128i v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v12 = sub_6EFE10(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (_BYTE)v12 )
  {
    v13 = v12;
    sub_EC6110(&v23, a2);
    v17 = _mm_load_si128(&v23);
    v18 = v25;
    v19 = v26;
    v21 = v17;
    v22 = v24;
    v20 = v17;
LABEL_5:
    if ( v18 == v20.m128i_i64[0] )
    {
LABEL_11:
      if ( v19 == v20.m128i_i64[1] )
        return v13;
    }
    if ( (v20.m128i_i8[8] & 3) != 0 )
      v20.m128i_i64[0] = sub_ECEDF0(&v21);
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
      v20.m128i_i64[1] = v21.m128i_i64[1];
      if ( (v21.m128i_i8[8] & 3) != 0 )
      {
        if ( v21.m128i_i64[1] <= 3uLL )
          sub_ECEA10(&v21, 1);
        else
          sub_ECEC20(&v21);
        v20 = v21;
        goto LABEL_5;
      }
      v20.m128i_i64[0] = v21.m128i_i64[0] + 8;
      v21.m128i_i64[0] = v20.m128i_i64[0];
      if ( v18 == v20.m128i_i64[0] )
        goto LABEL_11;
    }
  }
  return 0;
}

