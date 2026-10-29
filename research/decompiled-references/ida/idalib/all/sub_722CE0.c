__int64 __fastcall sub_722CE0(
        __int64 *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __m128i v14; // xmm0
  __int64 *v15; // rax
  unsigned int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // r12d
  unsigned int *v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // r14
  double v25; // xmm4_8
  double v26; // xmm5_8
  __m128i v27; // xmm0
  __int64 v28; // rbx
  __int64 v29; // r14
  __m128i v30; // rax
  __m128i v31; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-A8h]
  __m128i v33; // [rsp+40h] [rbp-98h]
  __int64 *v34; // [rsp+50h] [rbp-88h]
  __m128i v35; // [rsp+60h] [rbp-78h] BYREF
  __int64 v36; // [rsp+70h] [rbp-68h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  __int64 v38; // [rsp+80h] [rbp-58h]
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v14 = _mm_loadu_si128(a2 + 2);
  v15 = (__int64 *)a2[3].m128i_i64[0];
  v39 = __readfsqword(0x28u);
  v34 = v15;
  v33 = v14;
  v17 = sub_719170(
          a1,
          *(double *)v14.m128i_i64,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          (__int64)a2,
          a3,
          a4,
          a5,
          a6,
          v14.m128i_i64[0],
          v14.m128i_i32[2],
          v15);
  if ( (_BYTE)v17 )
  {
    v20 = v17;
    v22 = (unsigned int *)a2[1].m128i_i64[1];
    if ( !v22 || (v23 = (__int64 *)(v22 + 4), v24 = (__int64)&v22[2 * *v22 + 4], v22 + 4 == (unsigned int *)v24) )
    {
LABEL_8:
      sub_EE9E50(&v35, a2);
      v27 = _mm_load_si128(&v35);
      v28 = v37;
      v29 = v38;
      v31 = v27;
      v32 = v36;
      v30 = v27;
LABEL_9:
      if ( v30.m128i_i64[0] == v28 )
      {
LABEL_15:
        if ( v29 == v30.m128i_i64[1] )
          return v20;
      }
      if ( (v30.m128i_i8[8] & 3) != 0 )
        v30.m128i_i64[0] = sub_EF2B30(&v31);
      while ( (unsigned __int8)sub_70DBE0(
                                 a1,
                                 *(_QWORD *)v30.m128i_i64[0],
                                 a3,
                                 *(double *)v27.m128i_i64,
                                 a8,
                                 a9,
                                 a10,
                                 v25,
                                 v26,
                                 a13,
                                 a14) )
      {
        v30.m128i_i64[1] = v31.m128i_i64[1];
        if ( (v31.m128i_i8[8] & 3) != 0 )
        {
          if ( v31.m128i_i64[1] <= 3uLL )
            sub_EF2750(&v31, 1);
          else
            sub_EF2960(&v31);
          v30 = v31;
          goto LABEL_9;
        }
        v30.m128i_i64[0] = v31.m128i_i64[0] + 8;
        v31.m128i_i64[0] = v30.m128i_i64[0];
        if ( v28 == v30.m128i_i64[0] )
          goto LABEL_15;
      }
    }
    else
    {
      while ( (unsigned __int8)sub_722170(a1, *v23, *(double *)v14.m128i_i64, a8, a9, a10, v18, v19, a13, a14) )
      {
        if ( (__int64 *)v24 == ++v23 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}
