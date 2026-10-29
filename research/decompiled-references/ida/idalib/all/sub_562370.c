__int64 __fastcall sub_562370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 i; // r12
  __int64 v9; // r15
  __m128i v10; // xmm0
  void *v11; // rdi
  __int64 v12; // r15
  __m128i v13; // xmm0
  void *v14; // rdi
  char v15; // al
  __int64 v16; // r15
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // r15
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rbp
  unsigned __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // r12
  __m128i v30; // xmm0
  void *v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  __int64 v34; // r13
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // r13
  __int64 v38; // rbp
  __int64 v39; // r15
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // r15
  __m128i v43; // xmm0
  void *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // r14
  __m128i v48; // [rsp+0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+10h] [rbp-48h]
  unsigned __int64 v50; // [rsp+18h] [rbp-40h]

  v6 = a1;
  v7 = a3;
  if ( a2 == a1 || a4 == a3 )
  {
    v49 = a5;
  }
  else
  {
    for ( i = a5 + 64; ; i += 144 )
    {
      if ( *(_QWORD *)v7 < *(_QWORD *)v6 )
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v7;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v7 + 8);
        v9 = *(_QWORD *)(v7 + 16);
        v10 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v11 = *(void **)(i - 48);
        if ( v11 )
        {
          *(_QWORD *)(i - 40) = 0;
          v48 = v10;
          qfree(v11);
          v10 = _mm_load_si128(&v48);
        }
        *(_QWORD *)(i - 48) = v9;
        *(__m128i *)(i - 40) = v10;
        v12 = *(_QWORD *)(v7 + 40);
        v13 = _mm_loadu_si128((const __m128i *)(v7 + 48));
        *(_QWORD *)(v7 + 40) = 0;
        *(_OWORD *)(v7 + 48) = 0;
        v14 = *(void **)(i - 24);
        if ( v14 )
        {
          *(_QWORD *)(i - 16) = 0;
          v48 = v13;
          qfree(v14);
          v13 = _mm_load_si128(&v48);
        }
        *(_QWORD *)(i - 24) = v12;
        v7 += 144;
        *(__m128i *)(i - 16) = v13;
        copy_tinfo_t(i);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v7 - 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v7 - 56));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v7 - 40));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v7 - 24);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v7 - 16);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v7 - 12);
        v15 = *(_BYTE *)(v7 - 8);
      }
      else
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v6;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v6 + 8);
        v16 = *(_QWORD *)(v6 + 16);
        v17 = _mm_loadu_si128((const __m128i *)(v6 + 24));
        *(_QWORD *)(v6 + 16) = 0;
        *(_OWORD *)(v6 + 24) = 0;
        v18 = *(void **)(i - 48);
        if ( v18 )
        {
          *(_QWORD *)(i - 40) = 0;
          v48 = v17;
          qfree(v18);
          v17 = _mm_load_si128(&v48);
        }
        *(_QWORD *)(i - 48) = v16;
        *(__m128i *)(i - 40) = v17;
        v19 = *(_QWORD *)(v6 + 40);
        v20 = _mm_loadu_si128((const __m128i *)(v6 + 48));
        *(_QWORD *)(v6 + 40) = 0;
        *(_OWORD *)(v6 + 48) = 0;
        v21 = *(void **)(i - 24);
        if ( v21 )
        {
          *(_QWORD *)(i - 16) = 0;
          v48 = v20;
          qfree(v21);
          v20 = _mm_load_si128(&v48);
        }
        *(_QWORD *)(i - 24) = v19;
        v6 += 144;
        *(__m128i *)(i - 16) = v20;
        copy_tinfo_t(i);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v6 - 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v6 - 56));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v6 - 40));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v6 - 24);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v6 - 16);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v6 - 12);
        v15 = *(_BYTE *)(v6 - 8);
      }
      *(_BYTE *)(i + 72) = v15;
      if ( a2 == v6 || a4 == v7 )
        break;
    }
    v49 = i + 80;
  }
  v22 = a2 - v6;
  v50 = 0x8E38E38E38E38E39LL * ((a2 - v6) >> 4);
  if ( a2 - v6 > 0 )
  {
    v23 = v6 + 64;
    v24 = 0x8E38E38E38E38E39LL * (v22 >> 4);
    v25 = v49 + 64;
    do
    {
      *(_QWORD *)(v25 - 64) = *(_QWORD *)(v23 - 64);
      *(_QWORD *)(v25 - 56) = *(_QWORD *)(v23 - 56);
      v26 = *(_QWORD *)(v23 - 48);
      v27 = _mm_loadu_si128((const __m128i *)(v23 - 40));
      *(_QWORD *)(v23 - 48) = 0;
      *(_OWORD *)(v23 - 40) = 0;
      v28 = *(void **)(v25 - 48);
      if ( v28 )
      {
        *(_QWORD *)(v25 - 40) = 0;
        v48 = v27;
        qfree(v28);
        v27 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(v25 - 48) = v26;
      *(__m128i *)(v25 - 40) = v27;
      v29 = *(_QWORD *)(v23 - 24);
      v30 = _mm_loadu_si128((const __m128i *)(v23 - 16));
      *(_QWORD *)(v23 - 24) = 0;
      *(_OWORD *)(v23 - 16) = 0;
      v31 = *(void **)(v25 - 24);
      if ( v31 )
      {
        *(_QWORD *)(v25 - 16) = 0;
        v48 = v30;
        qfree(v31);
        v30 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(v25 - 24) = v29;
      v32 = v25;
      v23 += 144;
      *(__m128i *)(v25 - 16) = v30;
      v25 += 144;
      copy_tinfo_t(v32);
      *(__m128i *)(v25 - 136) = _mm_loadu_si128((const __m128i *)(v23 - 136));
      *(__m128i *)(v25 - 120) = _mm_loadu_si128((const __m128i *)(v23 - 120));
      *(__m128i *)(v25 - 104) = _mm_loadu_si128((const __m128i *)(v23 - 104));
      *(_DWORD *)(v25 - 88) = *(_DWORD *)(v23 - 88);
      *(_DWORD *)(v25 - 80) = *(_DWORD *)(v23 - 80);
      *(_DWORD *)(v25 - 76) = *(_DWORD *)(v23 - 76);
      *(_BYTE *)(v25 - 72) = *(_BYTE *)(v23 - 72);
      --v24;
    }
    while ( v24 );
    v33 = v50 - 1;
    if ( (__int64)(v50 - 1) < 0 )
      v33 = 0;
    v49 += 144 * v33 + 144;
  }
  v34 = a4 - v7;
  v35 = 0x8E38E38E38E38E39LL * (v34 >> 4);
  if ( v34 > 0 )
  {
    v36 = v7 + 64;
    v37 = 0x8E38E38E38E38E39LL * (v34 >> 4);
    v38 = v49 + 64;
    do
    {
      *(_QWORD *)(v38 - 64) = *(_QWORD *)(v36 - 64);
      *(_QWORD *)(v38 - 56) = *(_QWORD *)(v36 - 56);
      v39 = *(_QWORD *)(v36 - 48);
      v40 = _mm_loadu_si128((const __m128i *)(v36 - 40));
      *(_QWORD *)(v36 - 48) = 0;
      *(_OWORD *)(v36 - 40) = 0;
      v41 = *(void **)(v38 - 48);
      if ( v41 )
      {
        *(_QWORD *)(v38 - 40) = 0;
        v48 = v40;
        qfree(v41);
        v40 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(v38 - 48) = v39;
      *(__m128i *)(v38 - 40) = v40;
      v42 = *(_QWORD *)(v36 - 24);
      v43 = _mm_loadu_si128((const __m128i *)(v36 - 16));
      *(_QWORD *)(v36 - 24) = 0;
      *(_OWORD *)(v36 - 16) = 0;
      v44 = *(void **)(v38 - 24);
      if ( v44 )
      {
        *(_QWORD *)(v38 - 16) = 0;
        v48 = v43;
        qfree(v44);
        v43 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(v38 - 24) = v42;
      v45 = v38;
      v36 += 144;
      *(__m128i *)(v38 - 16) = v43;
      v38 += 144;
      copy_tinfo_t(v45);
      *(__m128i *)(v38 - 136) = _mm_loadu_si128((const __m128i *)(v36 - 136));
      *(__m128i *)(v38 - 120) = _mm_loadu_si128((const __m128i *)(v36 - 120));
      *(__m128i *)(v38 - 104) = _mm_loadu_si128((const __m128i *)(v36 - 104));
      *(_DWORD *)(v38 - 88) = *(_DWORD *)(v36 - 88);
      *(_DWORD *)(v38 - 80) = *(_DWORD *)(v36 - 80);
      *(_DWORD *)(v38 - 76) = *(_DWORD *)(v36 - 76);
      *(_BYTE *)(v38 - 72) = *(_BYTE *)(v36 - 72);
      --v37;
    }
    while ( v37 );
    v46 = v35 - 1;
    if ( v46 < 0 )
      v46 = 0;
    v49 += 16 * (9 * v46 + 9);
  }
  return v49;
}
