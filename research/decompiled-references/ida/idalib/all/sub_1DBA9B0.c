void __fastcall sub_1DBA9B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, int a8)
{
  char v9; // al
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  const __m128i *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm3
  char v17; // cl
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx

  v9 = *(_BYTE *)(a1 + 12592);
  v10 = *(unsigned int *)(a1 + 11324);
  *(_BYTE *)(a1 + 12592) = 0;
  v11 = *(_QWORD *)(a1 + 11312);
  v12 = (const __m128i *)&a7;
  BYTE4(a7) = v9;
  v13 = *(unsigned int *)(a1 + 11320);
  v14 = v13 + 1;
  v15 = v11 + (v13 << 6);
  if ( v14 > v10 )
  {
    v18 = a1 + 11312;
    v19 = a1 + 11328;
    if ( v11 > (unsigned __int64)&a7 || v15 <= (unsigned __int64)&a7 )
    {
      sub_2237220(v18, v19, v14, 64);
      v12 = (const __m128i *)&a7;
      v15 = *(_QWORD *)(a1 + 11312) + ((unsigned __int64)*(unsigned int *)(a1 + 11320) << 6);
    }
    else
    {
      sub_2237220(v18, v19, v14, 64);
      v20 = *(_QWORD *)(a1 + 11312);
      v12 = (const __m128i *)((char *)&a7 + v20 - v11);
      v15 = v20 + ((unsigned __int64)*(unsigned int *)(a1 + 11320) << 6);
    }
  }
  *(__m128i *)v15 = _mm_loadu_si128(v12);
  *(__m128i *)(v15 + 16) = _mm_loadu_si128(v12 + 1);
  *(__m128i *)(v15 + 32) = _mm_loadu_si128(v12 + 2);
  v16 = _mm_loadu_si128(v12 + 3);
  v17 = a7;
  *(__m128i *)(v15 + 48) = v16;
  ++*(_DWORD *)(a1 + 11320);
  if ( ((1LL << v17) & 0xEFF75A0) != 0 )
    ++*(_DWORD *)(a1 + 12596);
  sub_1029470(a1 + 584, a8);
}
