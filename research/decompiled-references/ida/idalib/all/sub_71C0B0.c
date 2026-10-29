__int64 __fastcall sub_71C0B0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 *v13; // rax
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

  v13 = *(__int64 **)(a2 + 16);
  v28 = __readfsqword(0x28u);
  if ( !v13 || (unsigned __int8)sub_717AC0(a1, *v13, (__int64)(v13 + 1), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
  {
    sub_EE9E50(&v24, a2);
    v17 = _mm_load_si128(&v24);
    v18 = v26;
    v19 = v27;
    v22 = v17;
    v23 = v25;
    v20 = v17;
LABEL_4:
    if ( v18 == v20.m128i_i64[0] )
    {
LABEL_10:
      if ( v19 == v20.m128i_i64[1] )
        return 1;
    }
    if ( (v20.m128i_i8[8] & 3) != 0 )
      v20.m128i_i64[0] = sub_EF2B30(&v22);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v20.m128i_i64[0],
                               a3,
                               *(double *)v17.m128i_i64,
                               a7,
                               a8,
                               a9,
                               v15,
                               v16,
                               a12,
                               a13) )
    {
      v20.m128i_i64[1] = v22.m128i_i64[1];
      if ( (v22.m128i_i8[8] & 3) != 0 )
      {
        if ( v22.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v22, 1);
        else
          sub_EF2960(&v22);
        v20 = v22;
        goto LABEL_4;
      }
      v20.m128i_i64[0] = v22.m128i_i64[0] + 8;
      v22.m128i_i64[0] = v20.m128i_i64[0];
      if ( v18 == v20.m128i_i64[0] )
        goto LABEL_10;
    }
  }
  return 0;
}
