__int64 __fastcall sub_6F8E70(
        __int64 *a1,
        const __m128i *a2,
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // r12d
  __int64 *v22; // rax
  double v23; // xmm4_8
  double v24; // xmm5_8
  __m128i v25; // xmm0
  __int64 v26; // r13
  __int64 v27; // r15
  __m128i v28; // rax
  __m128i v29; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-A8h]
  __m128i v31; // [rsp+40h] [rbp-98h]
  __int64 *v32; // [rsp+50h] [rbp-88h]
  __m128i v33; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+70h] [rbp-68h]
  __int64 v35; // [rsp+78h] [rbp-60h]
  __int64 v36; // [rsp+80h] [rbp-58h]
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v12 = a2[1].m128i_i64[0];
  v37 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_6F7D60(a1, v12, a2[1].m128i_i64[1], a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    v22 = (__int64 *)a2[3].m128i_i64[0];
    v31 = _mm_loadu_si128(a2 + 2);
    v32 = v22;
    v20 = sub_6F8B90(
            a1,
            *(double *)v31.m128i_i64,
            a5,
            a6,
            a7,
            v18,
            v19,
            a10,
            a11,
            v12,
            v14,
            v15,
            v16,
            v17,
            v31.m128i_i64[0],
            v31.m128i_i32[2],
            v22);
    if ( (_BYTE)v20 )
    {
      sub_EC6110(&v33, a2);
      v25 = _mm_load_si128(&v33);
      v26 = v35;
      v27 = v36;
      v29 = v25;
      v30 = v34;
      v28 = v25;
LABEL_6:
      if ( v26 == v28.m128i_i64[0] )
      {
LABEL_12:
        if ( v27 == v28.m128i_i64[1] )
          return v20;
      }
      if ( (v28.m128i_i8[8] & 3) != 0 )
        v28.m128i_i64[0] = sub_ECEDF0(&v29);
      while ( (unsigned __int8)sub_6ED600(
                                 a1,
                                 *(_QWORD *)v28.m128i_i64[0],
                                 a3,
                                 *(double *)v25.m128i_i64,
                                 a5,
                                 a6,
                                 a7,
                                 v23,
                                 v24,
                                 a10,
                                 a11) )
      {
        v28.m128i_i64[1] = v29.m128i_i64[1];
        if ( (v29.m128i_i8[8] & 3) != 0 )
        {
          if ( v29.m128i_i64[1] <= 3uLL )
            sub_ECEA10(&v29, 1);
          else
            sub_ECEC20(&v29);
          v28 = v29;
          goto LABEL_6;
        }
        v28.m128i_i64[0] = v29.m128i_i64[0] + 8;
        v29.m128i_i64[0] = v28.m128i_i64[0];
        if ( v26 == v28.m128i_i64[0] )
          goto LABEL_12;
      }
    }
  }
  return 0;
}

