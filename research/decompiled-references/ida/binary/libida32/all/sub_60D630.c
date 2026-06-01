__int64 __fastcall sub_60D630(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        char *s2,
        __int128 a8,
        __int64 a9,
        char a10,
        __int128 a11,
        __int64 a12)
{
  __int64 v13; // r13
  __int64 i; // rbp
  __int64 v15; // r15
  __int64 v16; // rbx
  __m128i *v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // [rsp+Fh] [rbp-69h]
  __m128i v27; // [rsp+10h] [rbp-68h] BYREF
  __m128i v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]

  v13 = (a3 - 1) / 2;
  if ( a2 >= v13 )
  {
    v15 = a2;
    v16 = a1 + (a2 << 6);
  }
  else
  {
    for ( i = a2; ; i = v15 )
    {
      v15 = 2 * (i + 1);
      v16 = a1 + ((i + 1) << 7);
      if ( strcmp(*(const char **)v16, *(const char **)(v16 - 64)) < 0 )
        v16 = a1 + (--v15 << 6);
      v17 = (__m128i *)(a1 + (i << 6));
      *v17 = _mm_loadu_si128((const __m128i *)v16);
      v17[1] = _mm_loadu_si128((const __m128i *)(v16 + 16));
      v17[2] = _mm_loadu_si128((const __m128i *)(v16 + 32));
      v17[3] = _mm_loadu_si128((const __m128i *)(v16 + 48));
      if ( v15 >= v13 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v15 )
  {
    v24 = v15 + 1;
    v15 = 2 * (v15 + 1) - 1;
    v25 = a1 + (v24 << 7);
    *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)(v25 - 64));
    *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)(v25 - 48));
    *(__m128i *)(v16 + 32) = _mm_loadu_si128((const __m128i *)(v25 - 32));
    *(__m128i *)(v16 + 48) = _mm_loadu_si128((const __m128i *)(v25 - 16));
    v16 = a1 + (v15 << 6);
  }
  v29 = a9;
  v28 = _mm_loadu_si128((const __m128i *)&a8);
  v26 = a10;
  v27 = _mm_loadu_si128((const __m128i *)&a11);
  v30 = a12;
  v18 = (v15 - 1) / 2;
  if ( v15 > a2 )
  {
    while ( 1 )
    {
      v19 = a1 + (v18 << 6);
      v16 = a1 + (v15 << 6);
      if ( strcmp(*(const char **)v19, s2) >= 0 )
        break;
      v15 = v18;
      *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)v19);
      *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)(v19 + 16));
      *(__m128i *)(v16 + 32) = _mm_loadu_si128((const __m128i *)(v19 + 32));
      *(__m128i *)(v16 + 48) = _mm_loadu_si128((const __m128i *)(v19 + 48));
      if ( a2 >= v18 )
      {
        v16 = a1 + (v18 << 6);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
  v20 = v29;
  v21 = _mm_load_si128(&v28);
  *(_QWORD *)v16 = s2;
  v22 = _mm_load_si128(&v27);
  *(_QWORD *)(v16 + 24) = v20;
  *(__m128i *)(v16 + 8) = v21;
  *(_BYTE *)(v16 + 32) = v26;
  result = v30;
  *(__m128i *)(v16 + 40) = v22;
  *(_QWORD *)(v16 + 56) = result;
  return result;
}

