__int64 __fastcall sub_710240(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  double v9; // xmm4_8
  double v10; // xmm5_8
  __m128i v11; // xmm1
  double v12; // xmm0_8
  __m128i v13; // rax
  __int64 result; // rax
  __m128i v15; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v16; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+128h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_EADB70(&v15);
  v11 = _mm_loadu_si128(&v16);
  *(_QWORD *)&v12 = _mm_load_si128(&v15).m128i_u64[0];
  v13 = v15;
LABEL_2:
  if ( v11.m128i_i64[0] == v13.m128i_i64[0] )
  {
LABEL_12:
    if ( v13.m128i_i64[1] == v11.m128i_i64[1] )
      return 1;
  }
LABEL_3:
  if ( (v13.m128i_i8[8] & 3) != 0 )
    v13.m128i_i64[0] = sub_EF2B30(&v15);
  while ( 1 )
  {
    result = sub_70DBE0(a1, *(_QWORD *)v13.m128i_i64[0], 0, v12, v11, a4, a5, v9, v10, a8, a9);
    if ( !(_BYTE)result )
      return result;
    if ( (v15.m128i_i8[8] & 3) != 0 )
    {
      if ( v15.m128i_i64[1] <= 3uLL )
      {
        sub_EF2750(&v15, 1);
        v13 = v15;
        goto LABEL_2;
      }
      sub_EF2960(&v15);
      v13 = v15;
      if ( v11.m128i_i64[0] != v15.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_12;
    }
    v13.m128i_i64[0] = v15.m128i_i64[0] + 8;
    v15.m128i_i64[0] = v13.m128i_i64[0];
    if ( __PAIR128__(v15.m128i_u64[1], v13.m128i_u64[0]) == *(_OWORD *)&v11 )
      return 1;
  }
}
