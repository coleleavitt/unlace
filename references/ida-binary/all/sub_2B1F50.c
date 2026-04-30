__int64 __fastcall sub_2B1F50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rbp
  const char *v20; // rsi
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 *v29; // rdi
  char v31; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __m128i v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a1 + 440);
  if ( *(_QWORD *)(v15 + 24) )
  {
    v16 = *(_QWORD *)(a1 + 440);
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v15 + 16);
      v34 = 0;
      v35 = 0;
      v19 = v18 + 24 * v17;
      if ( v16 )
        v16 = *(_QWORD *)(v16 + 8);
      sub_2AE200(
        0.0,
        a5,
        a6,
        a7,
        *(double *)a8.m128_u64,
        *(double *)a9.m128_u64,
        a10,
        a11,
        a1,
        &v34,
        v16,
        (unsigned int)v17,
        a13,
        a14);
      v20 = (const char *)v19;
      v21 = sub_2AEA10(a1, (_QWORD *)v19, &v34);
      v24 = v34;
      if ( !v21 )
      {
        if ( !byte_8CC9E0 )
        {
          sub_169700(
            (int)"WARNING: It appears the graph_viewer_t instance is changing its\n"
                 "WARNING: textual/color data without calling refresh() afterwards.\n"
                 "WARNING: In order to provide backwards-compatibility, IDA will\n"
                 "WARNING: still consider the new data, but later versions of IDA\n"
                 "WARNING: will likely not. Please consider calling refresh_viewer()\n"
                 "WARNING: (or the Refresh() method if you are using IDAPython)\n"
                 "WARNING: after changes occur in the data.\n",
            v19,
            v22,
            v23,
            a13,
            a14,
            (__m128)0LL,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            v31);
          byte_8CC9E0 = 1;
        }
        v24 = *(_QWORD *)v19;
        v25 = _mm_loadu_si128((const __m128i *)(v19 + 8));
        *(_QWORD *)v19 = v34;
        v34 = v24;
        *(__m128i *)(v19 + 8) = v35;
        v35 = v25;
      }
      if ( v24 )
      {
        v26 = v35.m128i_i64[0];
        if ( v35.m128i_i64[0] )
        {
          v27 = 0;
          v28 = 0;
          do
          {
            v29 = (__int64 *)(v27 + v24);
            ++v28;
            v27 += 272;
            sub_174D10(v29, (__int64)v20, v22, v23, a13);
            v24 = v34;
          }
          while ( v26 != v28 );
        }
        v35.m128i_i64[0] = 0;
        qfree(v24, v20);
      }
      if ( (unsigned __int64)++v17 >= *(_QWORD *)(v15 + 24) )
        break;
      v16 = *(_QWORD *)(a1 + 440);
    }
  }
  return sub_2BA890(a1, a2, a3);
}
