__int64 __fastcall sub_26CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 i; // r12
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r15
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rbp
  unsigned __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r12
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // r12
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned __int64 v37; // r15
  __int64 v38; // r13
  unsigned __int64 v39; // r14
  __int64 v40; // rbx
  unsigned __int64 v41; // r13
  __int64 v42; // rbp
  __int64 v43; // r15
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // r15
  __m128i v47; // xmm0
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // r14
  __m128i v53; // [rsp+0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+10h] [rbp-48h]
  unsigned __int64 v55; // [rsp+18h] [rbp-40h]

  v7 = a1;
  v8 = a3;
  if ( a4 == a3 || a2 == a1 )
  {
    v54 = a5;
  }
  else
  {
    for ( i = a5 + 64; ; i += 144 )
    {
      if ( *(_QWORD *)v8 < *(_QWORD *)v7 )
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v8;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v8 + 8);
        v10 = *(_QWORD *)(v8 + 16);
        v11 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v12 = *(_QWORD *)(i - 48);
        if ( v12 )
        {
          *(_QWORD *)(i - 40) = 0;
          v53 = v11;
          qfree(v12);
          v11 = _mm_load_si128(&v53);
        }
        *(_QWORD *)(i - 48) = v10;
        *(__m128i *)(i - 40) = v11;
        v13 = *(_QWORD *)(v8 + 40);
        v14 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        *(_QWORD *)(v8 + 40) = 0;
        *(_OWORD *)(v8 + 48) = 0;
        v15 = *(_QWORD *)(i - 24);
        if ( v15 )
        {
          *(_QWORD *)(i - 16) = 0;
          v53 = v14;
          qfree(v15);
          v14 = _mm_load_si128(&v53);
        }
        *(_QWORD *)(i - 24) = v13;
        v16 = v8 + 64;
        v8 += 144;
        *(__m128i *)(i - 16) = v14;
        copy_tinfo_t(i, v16);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v8 - 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v8 - 56));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v8 - 40));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v8 - 24);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v8 - 16);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v8 - 12);
        *(_BYTE *)(i + 72) = *(_BYTE *)(v8 - 8);
        v17 = *(_DWORD *)(v8 - 4);
      }
      else
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v7;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v7 + 8);
        v18 = *(_QWORD *)(v7 + 16);
        v19 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v20 = *(_QWORD *)(i - 48);
        if ( v20 )
        {
          *(_QWORD *)(i - 40) = 0;
          v53 = v19;
          qfree(v20);
          v19 = _mm_load_si128(&v53);
        }
        *(_QWORD *)(i - 48) = v18;
        *(__m128i *)(i - 40) = v19;
        v21 = *(_QWORD *)(v7 + 40);
        v22 = _mm_loadu_si128((const __m128i *)(v7 + 48));
        *(_QWORD *)(v7 + 40) = 0;
        *(_OWORD *)(v7 + 48) = 0;
        v23 = *(_QWORD *)(i - 24);
        if ( v23 )
        {
          *(_QWORD *)(i - 16) = 0;
          v53 = v22;
          qfree(v23);
          v22 = _mm_load_si128(&v53);
        }
        *(_QWORD *)(i - 24) = v21;
        v24 = v7 + 64;
        v7 += 144;
        *(__m128i *)(i - 16) = v22;
        copy_tinfo_t(i, v24);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v7 - 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v7 - 56));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v7 - 40));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v7 - 24);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v7 - 16);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v7 - 12);
        *(_BYTE *)(i + 72) = *(_BYTE *)(v7 - 8);
        v17 = *(_DWORD *)(v7 - 4);
      }
      *(_DWORD *)(i + 76) = v17;
      if ( a2 == v7 || a4 == v8 )
        break;
    }
    v54 = i + 80;
  }
  v25 = a2 - v7;
  v55 = 0x8E38E38E38E38E39LL * (v25 >> 4);
  if ( v25 > 0 )
  {
    v26 = v7 + 64;
    v27 = 0x8E38E38E38E38E39LL * (v25 >> 4);
    v28 = v54 + 64;
    do
    {
      *(_QWORD *)(v28 - 64) = *(_QWORD *)(v26 - 64);
      *(_QWORD *)(v28 - 56) = *(_QWORD *)(v26 - 56);
      v29 = *(_QWORD *)(v26 - 48);
      v30 = _mm_loadu_si128((const __m128i *)(v26 - 40));
      *(_QWORD *)(v26 - 48) = 0;
      *(_OWORD *)(v26 - 40) = 0;
      v31 = *(_QWORD *)(v28 - 48);
      if ( v31 )
      {
        *(_QWORD *)(v28 - 40) = 0;
        v53 = v30;
        qfree(v31);
        v30 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v28 - 48) = v29;
      *(__m128i *)(v28 - 40) = v30;
      v32 = *(_QWORD *)(v26 - 24);
      v33 = _mm_loadu_si128((const __m128i *)(v26 - 16));
      *(_QWORD *)(v26 - 24) = 0;
      *(_OWORD *)(v26 - 16) = 0;
      v34 = *(_QWORD *)(v28 - 24);
      if ( v34 )
      {
        *(_QWORD *)(v28 - 16) = 0;
        v53 = v33;
        qfree(v34);
        v33 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v28 - 24) = v32;
      v35 = v26;
      v36 = v28;
      v26 += 144;
      *(__m128i *)(v28 - 16) = v33;
      v28 += 144;
      copy_tinfo_t(v36, v35);
      *(__m128i *)(v28 - 136) = _mm_loadu_si128((const __m128i *)(v26 - 136));
      *(__m128i *)(v28 - 120) = _mm_loadu_si128((const __m128i *)(v26 - 120));
      *(__m128i *)(v28 - 104) = _mm_loadu_si128((const __m128i *)(v26 - 104));
      *(_DWORD *)(v28 - 88) = *(_DWORD *)(v26 - 88);
      *(_DWORD *)(v28 - 80) = *(_DWORD *)(v26 - 80);
      *(_DWORD *)(v28 - 76) = *(_DWORD *)(v26 - 76);
      *(_BYTE *)(v28 - 72) = *(_BYTE *)(v26 - 72);
      *(_DWORD *)(v28 - 68) = *(_DWORD *)(v26 - 68);
      --v27;
    }
    while ( v27 );
    v37 = v55 - 1;
    if ( (__int64)(v55 - 1) < 0 )
      v37 = 0;
    v54 += 144 * v37 + 144;
  }
  v38 = a4 - v8;
  v39 = 0x8E38E38E38E38E39LL * (v38 >> 4);
  if ( v38 > 0 )
  {
    v40 = v8 + 64;
    v41 = 0x8E38E38E38E38E39LL * (v38 >> 4);
    v42 = v54 + 64;
    do
    {
      *(_QWORD *)(v42 - 64) = *(_QWORD *)(v40 - 64);
      *(_QWORD *)(v42 - 56) = *(_QWORD *)(v40 - 56);
      v43 = *(_QWORD *)(v40 - 48);
      v44 = _mm_loadu_si128((const __m128i *)(v40 - 40));
      *(_QWORD *)(v40 - 48) = 0;
      *(_OWORD *)(v40 - 40) = 0;
      v45 = *(_QWORD *)(v42 - 48);
      if ( v45 )
      {
        *(_QWORD *)(v42 - 40) = 0;
        v53 = v44;
        qfree(v45);
        v44 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v42 - 48) = v43;
      *(__m128i *)(v42 - 40) = v44;
      v46 = *(_QWORD *)(v40 - 24);
      v47 = _mm_loadu_si128((const __m128i *)(v40 - 16));
      *(_QWORD *)(v40 - 24) = 0;
      *(_OWORD *)(v40 - 16) = 0;
      v48 = *(_QWORD *)(v42 - 24);
      if ( v48 )
      {
        *(_QWORD *)(v42 - 16) = 0;
        v53 = v47;
        qfree(v48);
        v47 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v42 - 24) = v46;
      v49 = v40;
      v50 = v42;
      v40 += 144;
      *(__m128i *)(v42 - 16) = v47;
      v42 += 144;
      copy_tinfo_t(v50, v49);
      *(__m128i *)(v42 - 136) = _mm_loadu_si128((const __m128i *)(v40 - 136));
      *(__m128i *)(v42 - 120) = _mm_loadu_si128((const __m128i *)(v40 - 120));
      *(__m128i *)(v42 - 104) = _mm_loadu_si128((const __m128i *)(v40 - 104));
      *(_DWORD *)(v42 - 88) = *(_DWORD *)(v40 - 88);
      *(_DWORD *)(v42 - 80) = *(_DWORD *)(v40 - 80);
      *(_DWORD *)(v42 - 76) = *(_DWORD *)(v40 - 76);
      *(_BYTE *)(v42 - 72) = *(_BYTE *)(v40 - 72);
      *(_DWORD *)(v42 - 68) = *(_DWORD *)(v40 - 68);
      --v41;
    }
    while ( v41 );
    v51 = v39 - 1;
    if ( v51 < 0 )
      v51 = 0;
    v54 += 16 * (9 * v51 + 9);
  }
  return v54;
}
