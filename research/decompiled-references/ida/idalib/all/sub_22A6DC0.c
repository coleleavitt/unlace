void __fastcall sub_22A6DC0(__int64 a1)
{
  __m128i si128; // xmm0
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned int v4; // eax
  __m128i v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __m128i v9; // xmm2
  __int64 v10; // rcx

  si128 = _mm_load_si128((const __m128i *)&off_2BF0380);
  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 12);
  if ( v3 <= v2 )
  {
    if ( v3 < v2 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v2 + 1, 16);
      v2 = *(unsigned int *)(a1 + 8);
    }
    *(__m128i *)(*(_QWORD *)a1 + 16 * v2) = si128;
    v3 = *(unsigned int *)(a1 + 12);
    v4 = *(_DWORD *)(a1 + 8) + 1;
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    v4 = v2 + 1;
    *(__m128i *)(*(_QWORD *)a1 + 16 * v2) = si128;
    *(_DWORD *)(a1 + 8) = v2 + 1;
  }
  v5 = _mm_loadu_si128((const __m128i *)&off_2BF0398);
  v6 = v4;
  if ( v4 >= v3 )
  {
    if ( v3 < (unsigned __int64)v4 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v4 + 1LL, 16);
      v6 = *(unsigned int *)(a1 + 8);
    }
    *(__m128i *)(*(_QWORD *)a1 + 16 * v6) = v5;
    v3 = *(unsigned int *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8) + 1;
    *(_DWORD *)(a1 + 8) = v8;
  }
  else
  {
    v7 = 16LL * v4;
    v8 = v4 + 1;
    *(__m128i *)(*(_QWORD *)a1 + v7) = v5;
    *(_DWORD *)(a1 + 8) = v8;
  }
  v9 = _mm_load_si128((const __m128i *)&off_2BF03B0);
  v10 = v8;
  if ( v8 >= v3 )
  {
    if ( v3 < (unsigned __int64)v8 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v8 + 1LL, 16);
      v10 = *(unsigned int *)(a1 + 8);
    }
    *(__m128i *)(*(_QWORD *)a1 + 16 * v10) = v9;
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    *(__m128i *)(*(_QWORD *)a1 + 16LL * v8) = v9;
    *(_DWORD *)(a1 + 8) = v8 + 1;
  }
}
