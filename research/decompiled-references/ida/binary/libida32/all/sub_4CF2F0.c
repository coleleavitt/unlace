char *__fastcall sub_4CF2F0(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6, const __m128i *a7)
{
  __int64 v11; // rax
  char *v12; // rbx
  const char *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  void *v21; // rdx
  size_t v22; // r8
  const void *v23; // r15
  void *v24; // rax
  void *v25; // rax
  int v26; // [rsp+0h] [rbp-48h]

  v26 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a3), 0));
  v11 = operator new(0xD0u);
  *(_QWORD *)v11 = 0;
  v12 = (char *)v11;
  *(_QWORD *)(v11 + 176) = 0;
  memset(
    (void *)((v11 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v11 - (((_DWORD)v11 + 8) & 0xFFFFFFF8) + 184) >> 3));
  *(_OWORD *)(v11 + 192) = 0;
  v13 = haystack;
  *(_QWORD *)(v11 + 184) = 0;
  if ( *(_QWORD *)(a1 + 8) )
    v13 = *(const char **)a1;
  *(_QWORD *)(v11 + 8) = qstrdup(v13);
  v14 = qstrdup(a2);
  *((_QWORD *)v12 + 5) = 0;
  *((_DWORD *)v12 + 36) = a4;
  *((_DWORD *)v12 + 8) = v26;
  *((__m128i *)v12 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
  *((_QWORD *)v12 + 19) = qstrdup(a5);
  if ( v12 + 160 != (char *)(a1 + 24) )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( !v15 || (v22 = v15 - 1, v15 == 1) )
    {
      *((_QWORD *)v12 + 21) = 0;
    }
    else
    {
      v23 = *(const void **)(a1 + 24);
      v24 = *((void **)v12 + 20);
      if ( *((_QWORD *)v12 + 22) < v15 )
      {
        v24 = (void *)qvector_reserve(v12 + 160, *((_QWORD *)v12 + 20), v15, 1);
        v22 = v15 - 1;
        *((_QWORD *)v12 + 20) = v24;
      }
      *((_QWORD *)v12 + 21) = v15;
      memmove(v24, v23, v22);
      *(_BYTE *)(*((_QWORD *)v12 + 20) + v15 - 1) = 0;
    }
  }
  if ( a6 && *(char *)(a6 + 4) >= 0 )
    a6 = a7[5].m128i_i64[0];
  v16 = _mm_loadu_si128(a7);
  v17 = a7[5].m128i_i64[0];
  *((_QWORD *)v12 + 6) = a6;
  *(__m128i *)(v12 + 56) = v16;
  v18 = _mm_loadu_si128(a7 + 1);
  *((_QWORD *)v12 + 17) = v17;
  v19 = (_QWORD *)qword_2CA2078;
  *(__m128i *)(v12 + 72) = v18;
  *(__m128i *)(v12 + 88) = _mm_loadu_si128(a7 + 2);
  *(__m128i *)(v12 + 104) = _mm_loadu_si128(a7 + 3);
  *(__m128i *)(v12 + 120) = _mm_loadu_si128(a7 + 4);
  if ( (a4 & 0x80) != 0 )
  {
    if ( v19 )
    {
      *(_QWORD *)v12 = *v19;
      *v19 = v12;
    }
    else
    {
      v25 = qword_2CA2080;
      qword_2CA2080 = v12;
      *(_QWORD *)v12 = v25;
    }
  }
  else
  {
    v21 = qword_2CA2080;
    qword_2CA2080 = v12;
    *(_QWORD *)v12 = v21;
    if ( !v19 )
      qword_2CA2078 = (__int64)v12;
  }
  return v12;
}

