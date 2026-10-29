__int64 __fastcall sub_15F1220(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __m128i *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __m128i *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rsi
  __m128i v18; // xmm0
  char *v19; // rsi
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __int64 v22; // rsi
  __m128i si128; // xmm0
  __m128i v25; // xmm0

  v3 = sub_227D6D0(a1, a2);
  v4 = *(__m128i **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0x1Du )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA850);
    v5 = 0x5320736973796C61LL;
    qmemcpy(&v4[1], "alysis Stats:\n", 14);
    *v4 = si128;
    *(_QWORD *)(v3 + 32) += 30LL;
  }
  else
  {
    a2 = "\n*** Semantic Analysis Stats:\n";
    v5 = v3;
    sub_227BF10(v3, "\n*** Semantic Analysis Stats:\n", 30);
  }
  v6 = sub_227D6D0(v5, a2);
  v7 = sub_227B910(v6, *(unsigned int *)(a1 + 11200));
  v9 = *(__m128i **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v9 > 0x1Cu )
  {
    v25 = _mm_load_si128((const __m128i *)&xmmword_23AA860);
    qmemcpy(&v9[1], "ics trapped.\n", 13);
    *v9 = v25;
    *(_QWORD *)(v7 + 32) += 29LL;
  }
  else
  {
    sub_227BF10(v7, " SFINAE diagnostics trapped.\n", 29);
  }
  v10 = *(_QWORD *)(a1 + 104);
  v11 = v10 + 8LL * *(unsigned int *)(a1 + 112);
  if ( v10 == v11 )
  {
    v13 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 104);
    v13 = 0;
    v8 = 4096;
    do
    {
      while ( 1 )
      {
        v14 = (unsigned int)((v12 - v10) >> 3) >> 7;
        if ( v14 <= 0x1D )
          break;
        v12 += 8;
        v13 += 0x40000000000LL;
        if ( v11 == v12 )
          goto LABEL_9;
      }
      v12 += 8;
      v13 += 4096LL << v14;
    }
    while ( v11 != v12 );
  }
LABEL_9:
  v15 = *(_QWORD **)(a1 + 152);
  v16 = &v15[2 * *(unsigned int *)(a1 + 160)];
  if ( v15 != v16 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    v17 = 16LL * *(unsigned int *)(a1 + 160) - 16;
    v8 = v17 >> 4;
    if ( v17 > 0x40 )
    {
      v18 = 0;
      v19 = (char *)v15 + (v17 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v20 = _mm_loadu_si128((const __m128i *)(v11 + 8));
        v21 = _mm_loadu_si128((const __m128i *)(v11 + 24));
        v11 += 32;
        v18 = _mm_add_epi64(v18, _mm_unpacklo_epi64(v20, v21));
      }
      while ( v19 != (char *)v11 );
      v8 = 16 * (v8 & 0xFFFFFFFFFFFFFFFELL);
      v15 = (_QWORD *)((char *)v15 + v8);
      v13 += _mm_add_epi64(v18, _mm_srli_si128(v18, 8)).m128i_u64[0];
    }
    v13 += v15[1];
    if ( v16 != v15 + 2 )
    {
      v13 += v15[3];
      if ( v16 != v15 + 4 )
      {
        v13 += v15[5];
        if ( v16 != v15 + 6 )
        {
          v13 += v15[7];
          if ( v16 != v15 + 8 )
            v13 += v15[9];
        }
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 168);
  sub_220F8D0(*(unsigned int *)(a1 + 112), v22, v13, v16, v11, v8);
  return sub_15812E0((_DWORD *)(a1 + 352), v22);
}
