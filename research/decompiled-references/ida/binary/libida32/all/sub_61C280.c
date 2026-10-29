void __fastcall sub_61C280(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rbx
  __int64 i; // r12
  __int64 v10; // r14
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m256i s2; // [rsp+0h] [rbp-B8h]
  __int128 s2_8; // [rsp+8h] [rbp-B0h]
  _BYTE v20[24]; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+28h] [rbp-90h]
  __m128i v22; // [rsp+70h] [rbp-48h]

  v6 = a2 - a1;
  v8 = a2;
  if ( (__int64)(a2 - a1) > 64 )
  {
    for ( i = ((v6 >> 6) - 2) / 2; ; --i )
    {
      v22 = _mm_loadu_si128((const __m128i *)(a1 + (i << 6) + 48));
      *(__m128i *)s2.m256i_i8 = _mm_loadu_si128((const __m128i *)(a1 + (i << 6)));
      *(__m128i *)&s2.m256i_u64[2] = _mm_loadu_si128((const __m128i *)(a1 + (i << 6) + 16));
      *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)(a1 + (i << 6) + 32));
      *(_QWORD *)&v20[16] = v22.m128i_i64[0];
      sub_60D630(
        a1,
        i,
        v6 >> 6,
        a4,
        a5,
        a6,
        (char *)s2.m256i_i64[0],
        *(__int128 *)&s2.m256i_u64[1],
        s2.m256i_i64[3],
        v20[0],
        *(__int128 *)&v20[8],
        v22.m128i_i64[1]);
      if ( !i )
        break;
    }
  }
  v10 = v6 >> 6;
  if ( a2 < a3 )
  {
    do
    {
      while ( strcmp(*(const char **)v8, *(const char **)a1) >= 0 )
      {
        v8 += 64LL;
        if ( v8 >= a3 )
          return;
      }
      v14 = _mm_loadu_si128((const __m128i *)v8);
      v15 = _mm_loadu_si128((const __m128i *)(v8 + 16));
      v16 = _mm_loadu_si128((const __m128i *)(v8 + 32));
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
      v17 = _mm_loadu_si128((const __m128i *)(v8 + 48));
      v8 += 64LL;
      *(__m128i *)(v8 - 48) = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(__m128i *)(v8 - 32) = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)(v8 - 16) = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)&s2_8 = v14.m128i_i64[1];
      *((_QWORD *)&s2_8 + 1) = v15.m128i_i64[0];
      *(_QWORD *)&v21 = v16.m128i_i64[1];
      *((_QWORD *)&v21 + 1) = v17.m128i_i64[0];
      sub_60D630(
        a1,
        0,
        v10,
        v11,
        v12,
        v13,
        (char *)v14.m128i_i64[0],
        s2_8,
        v15.m128i_i64[1],
        v16.m128i_i8[0],
        v21,
        v17.m128i_i64[1]);
    }
    while ( v8 < a3 );
  }
}

