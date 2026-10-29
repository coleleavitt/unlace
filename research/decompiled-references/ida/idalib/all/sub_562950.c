__int64 __fastcall sub_562950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 i; // rbx
  __int64 v10; // r15
  __m128i si128; // xmm0
  void *v12; // rdi
  __int64 v13; // r15
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // r15
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // r15
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 result; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r13
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // r13
  __m128i v30; // xmm0
  void *v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // r13
  __m128i v37; // xmm0
  void *v38; // rdi
  __int64 v39; // r13
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // rdi
  __m128i v43[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    if ( a3 == a4 )
      return result;
    v7 = a2 - 144;
    v8 = a4 - 144;
    for ( i = a5 - 80; ; i -= 144 )
    {
      if ( *(_QWORD *)v8 < *(_QWORD *)v7 )
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v7;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v7 + 8);
        v10 = *(_QWORD *)(v7 + 16);
        si128 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(_QWORD *)(v7 + 16) = 0;
        *(_OWORD *)(v7 + 24) = 0;
        v12 = *(void **)(i - 48);
        if ( v12 )
        {
          *(_QWORD *)(i - 40) = 0;
          v43[0] = si128;
          qfree(v12);
          si128 = _mm_load_si128(v43);
        }
        *(_QWORD *)(i - 48) = v10;
        *(__m128i *)(i - 40) = si128;
        v13 = *(_QWORD *)(v7 + 40);
        v14 = _mm_loadu_si128((const __m128i *)(v7 + 48));
        *(_QWORD *)(v7 + 40) = 0;
        *(_OWORD *)(v7 + 48) = 0;
        v15 = *(void **)(i - 24);
        if ( v15 )
        {
          *(_QWORD *)(i - 16) = 0;
          v43[0] = v14;
          qfree(v15);
          v14 = _mm_load_si128(v43);
        }
        *(_QWORD *)(i - 24) = v13;
        *(__m128i *)(i - 16) = v14;
        copy_tinfo_t(i);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v7 + 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v7 + 88));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v7 + 104));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v7 + 120);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v7 + 128);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v7 + 132);
        *(_BYTE *)(i + 72) = *(_BYTE *)(v7 + 136);
        if ( a1 == v7 )
        {
          result = v8 + 144 - a3;
          v23 = 0x8E38E38E38E38E39LL * (result >> 4);
          if ( result > 0 )
          {
            v24 = i - 144;
            v25 = v8 + 64;
            do
            {
              *(_QWORD *)(v24 - 64) = *(_QWORD *)(v25 - 64);
              *(_QWORD *)(v24 - 56) = *(_QWORD *)(v25 - 56);
              v26 = *(_QWORD *)(v25 - 48);
              v27 = _mm_loadu_si128((const __m128i *)(v25 - 40));
              *(_QWORD *)(v25 - 48) = 0;
              *(_OWORD *)(v25 - 40) = 0;
              v28 = *(void **)(v24 - 48);
              if ( v28 )
              {
                *(_QWORD *)(v24 - 40) = 0;
                v43[0] = v27;
                qfree(v28);
                v27 = _mm_load_si128(v43);
              }
              *(_QWORD *)(v24 - 48) = v26;
              *(__m128i *)(v24 - 40) = v27;
              v29 = *(_QWORD *)(v25 - 24);
              v30 = _mm_loadu_si128((const __m128i *)(v25 - 16));
              *(_QWORD *)(v25 - 24) = 0;
              *(_OWORD *)(v25 - 16) = 0;
              v31 = *(void **)(v24 - 24);
              if ( v31 )
              {
                *(_QWORD *)(v24 - 16) = 0;
                v43[0] = v30;
                qfree(v31);
                v30 = _mm_load_si128(v43);
              }
              *(_QWORD *)(v24 - 24) = v29;
              v32 = v24;
              v25 -= 144;
              *(__m128i *)(v24 - 16) = v30;
              v24 -= 144;
              copy_tinfo_t(v32);
              *(__m128i *)(v24 + 152) = _mm_loadu_si128((const __m128i *)(v25 + 152));
              *(__m128i *)(v24 + 168) = _mm_loadu_si128((const __m128i *)(v25 + 168));
              *(__m128i *)(v24 + 184) = _mm_loadu_si128((const __m128i *)(v25 + 184));
              *(_DWORD *)(v24 + 200) = *(_DWORD *)(v25 + 200);
              *(_DWORD *)(v24 + 208) = *(_DWORD *)(v25 + 208);
              *(_DWORD *)(v24 + 212) = *(_DWORD *)(v25 + 212);
              result = *(unsigned __int8 *)(v25 + 216);
              *(_BYTE *)(v24 + 216) = result;
              --v23;
            }
            while ( v23 );
          }
          return result;
        }
        v7 -= 144;
      }
      else
      {
        *(_QWORD *)(i - 64) = *(_QWORD *)v8;
        *(_QWORD *)(i - 56) = *(_QWORD *)(v8 + 8);
        v16 = *(_QWORD *)(v8 + 16);
        v17 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        *(_QWORD *)(v8 + 16) = 0;
        *(_OWORD *)(v8 + 24) = 0;
        v18 = *(void **)(i - 48);
        if ( v18 )
        {
          *(_QWORD *)(i - 40) = 0;
          v43[0] = v17;
          qfree(v18);
          v17 = _mm_load_si128(v43);
        }
        *(_QWORD *)(i - 48) = v16;
        *(__m128i *)(i - 40) = v17;
        v19 = *(_QWORD *)(v8 + 40);
        v20 = _mm_loadu_si128((const __m128i *)(v8 + 48));
        *(_QWORD *)(v8 + 40) = 0;
        *(_OWORD *)(v8 + 48) = 0;
        v21 = *(void **)(i - 24);
        if ( v21 )
        {
          *(_QWORD *)(i - 16) = 0;
          v43[0] = v20;
          qfree(v21);
          v20 = _mm_load_si128(v43);
        }
        *(_QWORD *)(i - 24) = v19;
        *(__m128i *)(i - 16) = v20;
        copy_tinfo_t(i);
        *(__m128i *)(i + 8) = _mm_loadu_si128((const __m128i *)(v8 + 72));
        *(__m128i *)(i + 24) = _mm_loadu_si128((const __m128i *)(v8 + 88));
        *(__m128i *)(i + 40) = _mm_loadu_si128((const __m128i *)(v8 + 104));
        *(_DWORD *)(i + 56) = *(_DWORD *)(v8 + 120);
        *(_DWORD *)(i + 64) = *(_DWORD *)(v8 + 128);
        *(_DWORD *)(i + 68) = *(_DWORD *)(v8 + 132);
        result = *(unsigned __int8 *)(v8 + 136);
        *(_BYTE *)(i + 72) = result;
        if ( a3 == v8 )
          return result;
        v8 -= 144;
      }
    }
  }
  result = a4 - a3;
  v33 = 0x8E38E38E38E38E39LL * ((a4 - a3) >> 4);
  if ( a4 - a3 > 0 )
  {
    v34 = a5 - 80;
    v35 = a4 - 80;
    do
    {
      *(_QWORD *)(v34 - 64) = *(_QWORD *)(v35 - 64);
      *(_QWORD *)(v34 - 56) = *(_QWORD *)(v35 - 56);
      v36 = *(_QWORD *)(v35 - 48);
      v37 = _mm_loadu_si128((const __m128i *)(v35 - 40));
      *(_QWORD *)(v35 - 48) = 0;
      *(_OWORD *)(v35 - 40) = 0;
      v38 = *(void **)(v34 - 48);
      if ( v38 )
      {
        *(_QWORD *)(v34 - 40) = 0;
        v43[0] = v37;
        qfree(v38);
        v37 = _mm_load_si128(v43);
      }
      *(_QWORD *)(v34 - 48) = v36;
      *(__m128i *)(v34 - 40) = v37;
      v39 = *(_QWORD *)(v35 - 24);
      v40 = _mm_loadu_si128((const __m128i *)(v35 - 16));
      *(_QWORD *)(v35 - 24) = 0;
      *(_OWORD *)(v35 - 16) = 0;
      v41 = *(void **)(v34 - 24);
      if ( v41 )
      {
        *(_QWORD *)(v34 - 16) = 0;
        v43[0] = v40;
        qfree(v41);
        v40 = _mm_load_si128(v43);
      }
      *(_QWORD *)(v34 - 24) = v39;
      v42 = v34;
      v35 -= 144;
      *(__m128i *)(v34 - 16) = v40;
      v34 -= 144;
      copy_tinfo_t(v42);
      *(__m128i *)(v34 + 152) = _mm_loadu_si128((const __m128i *)(v35 + 152));
      *(__m128i *)(v34 + 168) = _mm_loadu_si128((const __m128i *)(v35 + 168));
      *(__m128i *)(v34 + 184) = _mm_loadu_si128((const __m128i *)(v35 + 184));
      *(_DWORD *)(v34 + 200) = *(_DWORD *)(v35 + 200);
      *(_DWORD *)(v34 + 208) = *(_DWORD *)(v35 + 208);
      *(_DWORD *)(v34 + 212) = *(_DWORD *)(v35 + 212);
      result = *(unsigned __int8 *)(v35 + 216);
      *(_BYTE *)(v34 + 216) = result;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
