__int64 __fastcall sub_4E6DD0(__int64 a1, __int64 a2, _BYTE *a3, __int16 a4, int a5, __int64 a6, double a7, __m128 a8)
{
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  __m128 v15; // xmm0
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int16 v20; // ax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  int v23; // eax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  const void *v30; // r15
  void *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax

  v11 = a5;
  v13 = operator new(0xB8u);
  *(_QWORD *)v13 = 0;
  v14 = v13;
  *(_QWORD *)(v13 + 176) = 0;
  memset(
    (void *)((v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 184) >> 3));
  v15 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)(v13 + 152) = *(_QWORD *)(a2 + 152);
  v16 = _mm_movehl_ps(a8, v15).m128_u64[0];
  *(__m128 *)(v13 + 8) = v15;
  if ( a3 && *a3 )
    v16 = (unsigned __int64)a3;
  v17 = qstrdup(v16);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v19 = v14 + 160;
  *(_QWORD *)(v14 + 24) = v17;
  v20 = *(_WORD *)(a2 + 32);
  *(__m128i *)(v14 + 56) = v18;
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(_WORD *)(v14 + 32) = v20;
  if ( a4 )
    v20 = a4;
  *(__m128i *)(v14 + 72) = v21;
  v22 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_WORD *)(v14 + 34) = v20;
  v23 = *(_DWORD *)(a2 + 144);
  *(__m128i *)(v14 + 88) = v22;
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(_DWORD *)(v14 + 144) = v23;
  v25 = *(_QWORD *)(a2 + 136);
  *(__m128i *)(v14 + 104) = v24;
  v26 = _mm_loadu_si128((const __m128i *)(a2 + 120));
  *(_QWORD *)(v14 + 136) = v25;
  *(_QWORD *)(v14 + 40) = v11;
  *(_QWORD *)(v14 + 48) = a6;
  *(__m128i *)(v14 + 120) = v26;
  if ( v19 != a2 + 160 )
  {
    v27 = *(_QWORD *)(a2 + 168);
    if ( v27 > 1 )
    {
      v30 = *(const void **)(a2 + 160);
      v31 = *(void **)(v14 + 160);
      if ( *(_QWORD *)(v14 + 176) < v27 )
      {
        v31 = (void *)qvector_reserve(v19, *(_QWORD *)(v14 + 160), *(_QWORD *)(a2 + 168), 1);
        *(_QWORD *)(v14 + 160) = v31;
      }
      *(_QWORD *)(v14 + 168) = v27;
      memmove(v31, v30, v27 - 1);
      *(_BYTE *)(*(_QWORD *)(v14 + 160) + v27 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 168) = 0;
    }
  }
  v28 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)v14 = v28;
  if ( *(char *)(a2 + 144) >= 0 )
  {
    v32 = *(_QWORD *)(a2 + 192);
    v33 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(a2 + 200) < (unsigned __int64)(v32 + 1) )
    {
      v34 = qvector_reserve(a2 + 184, v33, v32 + 1, 8);
      *(_QWORD *)(a2 + 184) = v34;
      v33 = v34;
      v32 = *(_QWORD *)(a2 + 192);
    }
    *(_QWORD *)(v33 + 8 * v32) = v14;
    ++*(_QWORD *)(a2 + 192);
  }
  return v14;
}
