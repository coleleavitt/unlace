__int64 __fastcall sub_71D860(
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
  __int64 v11; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __m128i v15; // xmm0
  __int64 v16; // r12
  __int64 v17; // r14
  __m128i v18; // rax
  __int64 result; // rax
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h]
  __m128i v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v11 = *(_QWORD *)(a2 + 16);
  v26 = __readfsqword(0x28u);
  if ( v11 && (v11 & 4) != 0 && (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return sub_71D7B0(a1, v11 & 0xFFFFFFFFFFFFFFF8LL, a4, a5, a6, a7, a8, a9, a10, a11);
  sub_EE9E50(&v22, a2);
  v15 = _mm_load_si128(&v22);
  v16 = v24;
  v17 = v25;
  v20 = v15;
  v21 = v23;
  v18 = v15;
LABEL_4:
  if ( v18.m128i_i64[0] == v16 )
  {
LABEL_10:
    if ( v17 == v18.m128i_i64[1] )
      return 1;
  }
  if ( (v18.m128i_i8[8] & 3) != 0 )
    v18.m128i_i64[0] = sub_EF2B30(&v20);
  while ( 1 )
  {
    result = sub_70DBE0(a1, *(_QWORD *)v18.m128i_i64[0], a3, *(double *)v15.m128i_i64, a5, a6, a7, v13, v14, a10, a11);
    if ( !(_BYTE)result )
      return result;
    v18.m128i_i64[1] = v20.m128i_i64[1];
    if ( (v20.m128i_i8[8] & 3) != 0 )
    {
      if ( v20.m128i_i64[1] <= 3uLL )
        sub_EF2750(&v20, 1);
      else
        sub_EF2960(&v20);
      v18 = v20;
      goto LABEL_4;
    }
    v18.m128i_i64[0] = v20.m128i_i64[0] + 8;
    v20.m128i_i64[0] = v18.m128i_i64[0];
    if ( v16 == v18.m128i_i64[0] )
      goto LABEL_10;
  }
}
