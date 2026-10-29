__int64 __fastcall sub_71B800(
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
  __int64 v13; // rax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __m128i v20; // xmm0
  __int64 v21; // r13
  __int64 v22; // r15
  __m128i v23; // rax
  __m128i v24; // [rsp+0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+10h] [rbp-88h]
  __m128i v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+40h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v13 = *(_QWORD *)(a2 + 24);
  v30 = __readfsqword(0x28u);
  v15 = sub_717AC0(
          a1,
          *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL),
          (v13 & 0xFFFFFFFFFFFFFFF8LL) + 8,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13);
  if ( (_BYTE)v15 )
  {
    v16 = v15;
    sub_EE9E50(&v26, a2);
    v20 = _mm_load_si128(&v26);
    v21 = v28;
    v22 = v29;
    v24 = v20;
    v25 = v27;
    v23 = v20;
LABEL_5:
    if ( v21 == v23.m128i_i64[0] )
    {
LABEL_11:
      if ( v22 == v23.m128i_i64[1] )
        return v16;
    }
    if ( (v23.m128i_i8[8] & 3) != 0 )
      v23.m128i_i64[0] = sub_EF2B30(&v24);
    while ( (unsigned __int8)sub_70DBE0(
                               a1,
                               *(_QWORD *)v23.m128i_i64[0],
                               a3,
                               *(double *)v20.m128i_i64,
                               a7,
                               a8,
                               a9,
                               v18,
                               v19,
                               a12,
                               a13) )
    {
      v23.m128i_i64[1] = v24.m128i_i64[1];
      if ( (v24.m128i_i8[8] & 3) != 0 )
      {
        if ( v24.m128i_i64[1] <= 3uLL )
          sub_EF2750(&v24, 1);
        else
          sub_EF2960(&v24);
        v23 = v24;
        goto LABEL_5;
      }
      v23.m128i_i64[0] = v24.m128i_i64[0] + 8;
      v24.m128i_i64[0] = v23.m128i_i64[0];
      if ( v21 == v23.m128i_i64[0] )
        goto LABEL_11;
    }
  }
  return 0;
}
