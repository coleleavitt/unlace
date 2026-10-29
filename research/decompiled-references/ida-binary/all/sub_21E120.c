unsigned __int64 __fastcall sub_21E120(__m128 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v7; // r15
  unsigned __int64 v8; // rax
  __m128i *v9; // r12
  __m128i *v10; // rbx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  __m128i si128; // xmm1
  unsigned __int64 v14; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+20h] [rbp-88h]
  double v17[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-70h] BYREF
  __m128 v19; // [rsp+40h] [rbp-68h] BYREF
  __m128 v20; // [rsp+50h] [rbp-58h]
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = (__m128i *)a1[3].m128_u64[0];
    v16 = a1[4].m128_u64[0];
    v8 = ((__int64)(v16 - (_QWORD)v7) >> 5) - 1;
    if ( v8 < a2 )
    {
      sub_21E000(a1, a2 - v8, a3, a4, a5, a6);
      v7 = (__m128i *)a1[3].m128_u64[0];
      v16 = a1[4].m128_u64[0];
    }
    v9 = (__m128i *)v16;
    v10 = v7;
    v14 = a1[3].m128_u64[1];
    v15 = a1[4].m128_u64[1];
    v19 = _mm_loadh_ps((const double *)&v14);
    v20 = _mm_loadh_ps((const double *)&v15);
    sub_20AD50(&v19, a2);
    v11 = v19.m128_u64[0];
    v12 = v15;
    v18 = v19.m128_u64[1];
    v17[0] = *(double *)&v20.m128_u64[1];
    v17[1] = *(double *)v20.m128_u64;
    while ( v10 != (__m128i *)v11 )
    {
      while ( 1 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
        v10->m128i_i32[2] = 0;
        v10->m128i_i32[3] = 0;
        v10[1] = si128;
        v10->m128i_i64[0] = get_nsec_stamp();
        v10 += 2;
        if ( v9 != v10 )
          break;
        v10 = *(__m128i **)(v12 + 8);
        v12 += 8LL;
        v9 = v10 + 32;
        if ( v10 == (__m128i *)v11 )
          goto LABEL_9;
      }
    }
LABEL_9:
    a1[3] = _mm_loadh_ps((const double *)&v18);
    a1[4] = _mm_loadh_ps(v17);
  }
  return v21 - __readfsqword(0x28u);
}
