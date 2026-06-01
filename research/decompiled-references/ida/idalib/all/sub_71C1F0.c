__int64 __fastcall sub_71C1F0(
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
  bool v13; // zf
  __int64 *v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __m128i v18; // xmm0
  __int64 v19; // r12
  __int64 v20; // r14
  __m128i v21; // rax
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h]
  __m128i v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v13 = *(_BYTE *)(a2 + 26) == 0;
  v29 = __readfsqword(0x28u);
  if ( !v13
    || (v15 = *(__int64 **)(a2 + 40)) == nullptr
    || (unsigned __int8)sub_717AC0(a1, *v15, (__int64)(v15 + 1), a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
  {
    sub_EE9E50(&v25, a2);
    v18 = _mm_load_si128(&v25);
    v19 = v27;
    v20 = v28;
    v23 = v18;
    v24 = v26;
    v21 = v18;
LABEL_5:
    if ( v19 == v21.m128i_i64[0] )
    {
LABEL_11:
      if ( v20 == v21.m128i_i64[1] )
        return 1;
    }
    if ( (v21.m128i_i8[8] & 3) != 0 )
      v21.m128i_i64[0] = sub_EF2B30(&v23);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v21.m128i_i64[0],
                               a3,
                               *(double *)v18.m128i_i64,
                               a7,
                               a8,
                               a9,
                               v16,
                               v17,
                               a12,
                               a13) )
    {
      v21.m128i_i64[1] = v23.m128i_i64[1];
      if ( (v23.m128i_i8[8] & 3) != 0 )
      {
        if ( v23.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v23, 1);
        else
          sub_EF2960(&v23);
        v21 = v23;
        goto LABEL_5;
      }
      v21.m128i_i64[0] = v23.m128i_i64[0] + 8;
      v23.m128i_i64[0] = v21.m128i_i64[0];
      if ( v19 == v21.m128i_i64[0] )
        goto LABEL_11;
    }
  }
  return 0;
}
