__int64 __fastcall sub_6F62A0(
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
  double v12; // xmm4_8
  double v13; // xmm5_8
  __m128i v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // r14
  __m128i v17; // rax
  __int64 result; // rax
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h]
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  sub_EC6110(&v21, a2);
  v14 = _mm_load_si128(&v21);
  v15 = v23;
  v16 = v24;
  v19 = v14;
  v20 = v22;
  v17 = v14;
LABEL_2:
  if ( v15 == v17.m128i_i64[0] )
  {
LABEL_8:
    if ( v16 == v17.m128i_i64[1] )
      return 1;
  }
  if ( (v17.m128i_i8[8] & 3) != 0 )
    v17.m128i_i64[0] = sub_ECEDF0(&v19);
  while ( 1 )
  {
    result = sub_6ED600(a1, *(_QWORD *)v17.m128i_i64[0], a3, *(double *)v14.m128i_i64, a5, a6, a7, v12, v13, a10, a11);
    if ( !(_BYTE)result )
      return result;
    v17.m128i_i64[1] = v19.m128i_i64[1];
    if ( (v19.m128i_i8[8] & 3) != 0 )
    {
      if ( v19.m128i_i64[1] <= 3uLL )
        sub_ECEA10(&v19, 1);
      else
        sub_ECEC20(&v19);
      v17 = v19;
      goto LABEL_2;
    }
    v17.m128i_i64[0] = v19.m128i_i64[0] + 8;
    v19.m128i_i64[0] = v17.m128i_i64[0];
    if ( v15 == v17.m128i_i64[0] )
      goto LABEL_8;
  }
}

