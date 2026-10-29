unsigned __int64 __fastcall sub_AEB60(__m128 *a1, unsigned __int64 a2)
{
  __m128i *v3; // r15
  unsigned __int64 v4; // rax
  __m128i *v5; // r12
  __m128i *v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __m128i si128; // xmm1
  unsigned __int64 v10; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-88h]
  double v13[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  __m128 v15; // [rsp+40h] [rbp-68h] BYREF
  __m128 v16; // [rsp+50h] [rbp-58h]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (__m128i *)a1[3].m128_u64[0];
    v12 = a1[4].m128_u64[0];
    v4 = ((__int64)(v12 - (_QWORD)v3) >> 5) - 1;
    if ( v4 < a2 )
    {
      sub_AEA40(a1, a2 - v4);
      v3 = (__m128i *)a1[3].m128_u64[0];
      v12 = a1[4].m128_u64[0];
    }
    v5 = (__m128i *)v12;
    v6 = v3;
    v10 = a1[3].m128_u64[1];
    v11 = a1[4].m128_u64[1];
    v15 = _mm_loadh_ps((const double *)&v10);
    v16 = _mm_loadh_ps((const double *)&v11);
    sub_9BD90(&v15, a2);
    v7 = v15.m128_u64[0];
    v8 = v11;
    v14 = v15.m128_u64[1];
    v13[0] = *(double *)&v16.m128_u64[1];
    v13[1] = *(double *)v16.m128_u64;
    while ( v6 != (__m128i *)v7 )
    {
      while ( 1 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
        v6->m128i_i32[2] = 0;
        v6->m128i_i32[3] = 0;
        v6[1] = si128;
        v6->m128i_i64[0] = get_nsec_stamp();
        v6 += 2;
        if ( v5 != v6 )
          break;
        v6 = *(__m128i **)(v8 + 8);
        v8 += 8LL;
        v5 = v6 + 32;
        if ( v6 == (__m128i *)v7 )
          goto LABEL_9;
      }
    }
LABEL_9:
    a1[3] = _mm_loadh_ps((const double *)&v14);
    a1[4] = _mm_loadh_ps(v13);
  }
  return v17 - __readfsqword(0x28u);
}

