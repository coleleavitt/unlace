__int64 *__fastcall sub_21C3B50(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi

  if ( a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v6 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v12 = *a1;
        v13 = *a2;
        v14 = 0;
        do
        {
          *(__m128i *)(v12 + v14) = _mm_loadu_si128((const __m128i *)(v13 + v14));
          *(__m128i *)(v12 + v14 + 16) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 16));
          *(__m128i *)(v12 + v14 + 32) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 32));
          *(__m128i *)(v12 + v14 + 48) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 48));
          *(__m128i *)(v12 + v14 + 64) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 64));
          *(__m128i *)(v12 + v14 + 80) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 80));
          *(__m128i *)(v12 + v14 + 96) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 96));
          *(__m128i *)(v12 + v14 + 112) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 112));
          *(__m128i *)(v12 + v14 + 128) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 128));
          *(__m128i *)(v12 + v14 + 144) = _mm_loadu_si128((const __m128i *)(v13 + v14 + 144));
          *(_QWORD *)(v12 + v14 + 160) = *(_QWORD *)(v13 + v14 + 160);
          v14 += 168;
        }
        while ( 168 * v3 != v14 );
      }
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        sub_2237220(a1, a1 + 2, v3, 168);
        v7 = *a1;
        v8 = *a2;
        v9 = 0;
        v3 = *((unsigned int *)a2 + 2);
        v4 = 0;
      }
      else
      {
        v7 = *a1;
        v8 = *a2;
        v9 = 0;
        if ( v4 )
        {
          v15 = 0;
          v16 = 168 * v4;
          v4 = v16;
          v9 = v16;
          do
          {
            *(__m128i *)(v7 + v15) = _mm_loadu_si128((const __m128i *)(v8 + v15));
            *(__m128i *)(v7 + v15 + 16) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 16));
            *(__m128i *)(v7 + v15 + 32) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 32));
            *(__m128i *)(v7 + v15 + 48) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 48));
            *(__m128i *)(v7 + v15 + 64) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 64));
            *(__m128i *)(v7 + v15 + 80) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 80));
            *(__m128i *)(v7 + v15 + 96) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 96));
            *(__m128i *)(v7 + v15 + 112) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 112));
            *(__m128i *)(v7 + v15 + 128) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 128));
            *(__m128i *)(v7 + v15 + 144) = _mm_loadu_si128((const __m128i *)(v8 + v15 + 144));
            *(_QWORD *)(v7 + v15 + 160) = *(_QWORD *)(v8 + v15 + 160);
            v15 += 168;
          }
          while ( v16 != v15 );
          v3 = *((unsigned int *)a2 + 2);
        }
      }
      v10 = 168 * v3;
      if ( v8 + v4 != v10 + v8 )
        memcpy((void *)(v4 + v7), (const void *)(v8 + v4), v10 - v9);
    }
    *((_DWORD *)a1 + 2) = v6;
  }
  return a1;
}
