void __fastcall sub_548DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r15
  __m128i v10; // xmm0
  void *v11; // rdi
  __int64 v12; // r15
  __m128i v13; // xmm0
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __m128i si128; // xmm0
  void *v18; // rdi
  __int64 v19; // r15
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // r12
  __m128i v26; // xmm0
  void *v27; // rdi
  __int64 v28; // r12
  __m128i v29; // xmm0
  void *v30; // rdi
  __int64 v31; // rdi
  __m128i v32[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( a2 == a1 )
    return;
  v5 = a3;
  v7 = a1;
  if ( a4 == a3 )
    goto LABEL_18;
  v8 = a5 + 64;
  while ( *(_QWORD *)v5 >= *(_QWORD *)v7 )
  {
    *(_QWORD *)(v8 - 64) = *(_QWORD *)v7;
    *(_QWORD *)(v8 - 56) = *(_QWORD *)(v7 + 8);
    v16 = *(_QWORD *)(v7 + 16);
    si128 = _mm_loadu_si128((const __m128i *)(v7 + 24));
    *(_QWORD *)(v7 + 16) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    v18 = *(void **)(v8 - 48);
    if ( v18 )
    {
      *(_QWORD *)(v8 - 40) = 0;
      v32[0] = si128;
      qfree(v18);
      si128 = _mm_load_si128(v32);
    }
    *(_QWORD *)(v8 - 48) = v16;
    *(__m128i *)(v8 - 40) = si128;
    v19 = *(_QWORD *)(v7 + 40);
    v20 = _mm_loadu_si128((const __m128i *)(v7 + 48));
    *(_QWORD *)(v7 + 40) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    v21 = *(void **)(v8 - 24);
    if ( v21 )
    {
      *(_QWORD *)(v8 - 16) = 0;
      v32[0] = v20;
      qfree(v21);
      v20 = _mm_load_si128(v32);
    }
    *(_QWORD *)(v8 - 24) = v19;
    v7 += 128;
    *(__m128i *)(v8 - 16) = v20;
    copy_tinfo_t(v8);
    *(__m128i *)(v8 + 8) = _mm_loadu_si128((const __m128i *)(v7 - 56));
    *(__m128i *)(v8 + 24) = _mm_loadu_si128((const __m128i *)(v7 - 40));
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v7 - 24);
    *(_DWORD *)(v8 + 48) = *(_DWORD *)(v7 - 16);
    *(_DWORD *)(v8 + 52) = *(_DWORD *)(v7 - 12);
    *(_BYTE *)(v8 + 56) = *(_BYTE *)(v7 - 8);
    v15 = v8 + 128;
    if ( a2 == v7 )
      goto LABEL_17;
LABEL_9:
    if ( a4 == v5 )
      goto LABEL_17;
    v8 = v15;
  }
  *(_QWORD *)(v8 - 64) = *(_QWORD *)v5;
  *(_QWORD *)(v8 - 56) = *(_QWORD *)(v5 + 8);
  v9 = *(_QWORD *)(v5 + 16);
  v10 = _mm_loadu_si128((const __m128i *)(v5 + 24));
  *(_QWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  v11 = *(void **)(v8 - 48);
  if ( v11 )
  {
    *(_QWORD *)(v8 - 40) = 0;
    v32[0] = v10;
    qfree(v11);
    v10 = _mm_load_si128(v32);
  }
  *(_QWORD *)(v8 - 48) = v9;
  *(__m128i *)(v8 - 40) = v10;
  v12 = *(_QWORD *)(v5 + 40);
  v13 = _mm_loadu_si128((const __m128i *)(v5 + 48));
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  v14 = *(void **)(v8 - 24);
  if ( v14 )
  {
    *(_QWORD *)(v8 - 16) = 0;
    v32[0] = v13;
    qfree(v14);
    v13 = _mm_load_si128(v32);
  }
  *(_QWORD *)(v8 - 24) = v12;
  v5 += 128;
  *(__m128i *)(v8 - 16) = v13;
  copy_tinfo_t(v8);
  *(__m128i *)(v8 + 8) = _mm_loadu_si128((const __m128i *)(v5 - 56));
  *(__m128i *)(v8 + 24) = _mm_loadu_si128((const __m128i *)(v5 - 40));
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(v5 - 24);
  *(_DWORD *)(v8 + 48) = *(_DWORD *)(v5 - 16);
  *(_DWORD *)(v8 + 52) = *(_DWORD *)(v5 - 12);
  *(_BYTE *)(v8 + 56) = *(_BYTE *)(v5 - 8);
  v15 = v8 + 128;
  if ( a2 != v7 )
    goto LABEL_9;
LABEL_17:
  a5 = v8 + 64;
LABEL_18:
  if ( a2 != v7 )
  {
    v22 = (a2 - v7) >> 7;
    if ( a2 - v7 > 0 )
    {
      v23 = a5 + 64;
      v24 = v7 + 64;
      do
      {
        *(_QWORD *)(v23 - 64) = *(_QWORD *)(v24 - 64);
        *(_QWORD *)(v23 - 56) = *(_QWORD *)(v24 - 56);
        v25 = *(_QWORD *)(v24 - 48);
        v26 = _mm_loadu_si128((const __m128i *)(v24 - 40));
        *(_QWORD *)(v24 - 48) = 0;
        *(_OWORD *)(v24 - 40) = 0;
        v27 = *(void **)(v23 - 48);
        if ( v27 )
        {
          *(_QWORD *)(v23 - 40) = 0;
          v32[0] = v26;
          qfree(v27);
          v26 = _mm_load_si128(v32);
        }
        *(_QWORD *)(v23 - 48) = v25;
        *(__m128i *)(v23 - 40) = v26;
        v28 = *(_QWORD *)(v24 - 24);
        v29 = _mm_loadu_si128((const __m128i *)(v24 - 16));
        *(_QWORD *)(v24 - 24) = 0;
        *(_OWORD *)(v24 - 16) = 0;
        v30 = *(void **)(v23 - 24);
        if ( v30 )
        {
          *(_QWORD *)(v23 - 16) = 0;
          v32[0] = v29;
          qfree(v30);
          v29 = _mm_load_si128(v32);
        }
        *(_QWORD *)(v23 - 24) = v28;
        v31 = v23;
        v24 += 128;
        *(__m128i *)(v23 - 16) = v29;
        v23 += 128;
        copy_tinfo_t(v31);
        *(__m128i *)(v23 - 120) = _mm_loadu_si128((const __m128i *)(v24 - 120));
        *(__m128i *)(v23 - 104) = _mm_loadu_si128((const __m128i *)(v24 - 104));
        *(_DWORD *)(v23 - 88) = *(_DWORD *)(v24 - 88);
        *(_DWORD *)(v23 - 80) = *(_DWORD *)(v24 - 80);
        *(_DWORD *)(v23 - 76) = *(_DWORD *)(v24 - 76);
        *(_BYTE *)(v23 - 72) = *(_BYTE *)(v24 - 72);
        --v22;
      }
      while ( v22 );
    }
  }
}

