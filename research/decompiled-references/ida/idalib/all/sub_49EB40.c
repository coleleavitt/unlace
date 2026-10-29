unsigned __int64 __fastcall sub_49EB40(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i si128; // xmm0
  __int64 v11; // rbx
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdi
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbx
  void *v21; // rax
  const void *v22; // rsi
  __int64 na; // [rsp+8h] [rbp-1C0h]
  __int64 n; // [rsp+8h] [rbp-1C0h]
  __m128i v25[12]; // [rsp+10h] [rbp-1B8h] BYREF
  _QWORD v26[18]; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v27; // [rsp+160h] [rbp-68h]
  __m128i v28; // [rsp+170h] [rbp-58h]
  __int8 v29; // [rsp+180h] [rbp-48h]
  unsigned __int64 v30; // [rsp+188h] [rbp-40h]

  v2 = a1[1];
  v30 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v25, 0, 0xB8u);
    v25[7].m128i_i64[0] = 1;
    v25[7].m128i_i32[2] = -1;
    v25[9].m128i_i64[0] = -1;
    v25[10].m128i_i64[0] = -1;
    v25[10].m128i_i64[1] = -1;
    if ( a2 < v2 )
    {
      v14 = 184 * a2;
      v15 = a2;
      do
      {
        ++v15;
        v16 = (_QWORD *)(v14 + *a1);
        v14 += 184;
        sub_379560(v16);
      }
      while ( v2 != v15 );
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)v25 >= *a1 && (unsigned __int64)v25 < v5 + 184 * v6 )
      {
        sub_495840((__int64)v26, (__int64)v25);
        v27 = v25[9];
        v28 = v25[10];
        v29 = v25[11].m128i_i8[0];
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 184);
        v18 = a1[1];
        if ( v18 < a2 )
        {
          v19 = 184 * v18;
          do
          {
            v20 = v19 + *a1;
            sub_495840(v20, (__int64)v26);
            ++v18;
            v19 += 184;
            *(__m128i *)(v20 + 144) = v27;
            *(__m128i *)(v20 + 160) = v28;
            *(_BYTE *)(v20 + 176) = v29;
          }
          while ( a2 != v18 );
        }
        a1[1] = a2;
        sub_379560(v26);
        goto LABEL_16;
      }
      if ( v6 < a2 )
      {
        *a1 = qvector_reserve(a1, v5, a2, 184);
        v2 = a1[1];
      }
      if ( v2 < a2 )
      {
        v7 = 184 * v2;
        do
        {
          si128 = _mm_load_si128(v25);
          v11 = v7 + *a1;
          *(_QWORD *)(v11 + 16) = 0;
          *(__m128i *)v11 = si128;
          *(_OWORD *)(v11 + 24) = 0;
          if ( v25[1].m128i_i64[1] )
          {
            na = v25[1].m128i_i64[1];
            v12 = (void *)qalloc_or_throw(v25[1].m128i_i64[1]);
            *(_QWORD *)(v11 + 16) = v12;
            v13 = (const void *)v25[1].m128i_i64[0];
            *(_QWORD *)(v11 + 32) = na;
            memcpy(v12, v13, na);
            *(_QWORD *)(v11 + 24) = na;
          }
          *(_QWORD *)(v11 + 40) = 0;
          *(_OWORD *)(v11 + 48) = 0;
          if ( v25[3].m128i_i64[0] )
          {
            n = v25[3].m128i_i64[0];
            v21 = (void *)qalloc_or_throw(v25[3].m128i_i64[0]);
            *(_QWORD *)(v11 + 40) = v21;
            v22 = (const void *)v25[2].m128i_i64[1];
            *(_QWORD *)(v11 + 56) = n;
            memcpy(v21, v22, n);
            *(_QWORD *)(v11 + 48) = n;
          }
          *(_QWORD *)(v11 + 64) = 0;
          copy_tinfo_t(v11 + 64);
          v8 = v25[7].m128i_i64[1];
          ++v2;
          v7 += 184;
          *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)&v25[4].m128i_u64[1]);
          v9 = _mm_loadu_si128((const __m128i *)&v25[5].m128i_u64[1]);
          *(_QWORD *)(v11 + 120) = v8;
          *(__m128i *)(v11 + 88) = v9;
          *(__m128i *)(v11 + 104) = _mm_loadu_si128((const __m128i *)&v25[6].m128i_u64[1]);
          *(_QWORD *)(v11 + 128) = v25[8].m128i_i64[0];
          *(_BYTE *)(v11 + 136) = v25[8].m128i_i8[8];
          *(__m128i *)(v11 + 144) = v25[9];
          *(__m128i *)(v11 + 160) = v25[10];
          *(_BYTE *)(v11 + 176) = v25[11].m128i_i8[0];
        }
        while ( v2 < a2 );
      }
    }
    a1[1] = a2;
LABEL_16:
    sub_379560(v25);
  }
  return v30 - __readfsqword(0x28u);
}
