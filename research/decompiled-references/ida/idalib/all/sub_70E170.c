__int64 __fastcall sub_70E170(
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
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+10h] [rbp-78h]
  __m128i v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v12 = *(_QWORD *)(a2 + 16);
  v27 = __readfsqword(0x28u);
  if ( !v12 || (unsigned __int8)sub_709840(a1, v12, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    sub_EE9E50(&v23, a2);
    v16 = _mm_load_si128(&v23);
    v17 = v25;
    v18 = v26;
    v21 = v16;
    v22 = v24;
    v19 = v16;
LABEL_4:
    if ( v17 == v19.m128i_i64[0] )
    {
LABEL_10:
      if ( v18 == v19.m128i_i64[1] )
        return 1;
    }
    if ( (v19.m128i_i8[8] & 3) != 0 )
      v19.m128i_i64[0] = sub_EF2B30(&v21);
    while ( (unsigned __int8)sub_70DBE0(
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
      v19.m128i_i64[1] = v21.m128i_i64[1];
      if ( (v21.m128i_i8[8] & 3) != 0 )
      {
        if ( v21.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v21, 1);
        else
          sub_EF2960(&v21);
        v19 = v21;
        goto LABEL_4;
      }
      v19.m128i_i64[0] = v21.m128i_i64[0] + 8;
      v21.m128i_i64[0] = v19.m128i_i64[0];
      if ( v17 == v19.m128i_i64[0] )
        goto LABEL_10;
    }
  }
  return 0;
}
