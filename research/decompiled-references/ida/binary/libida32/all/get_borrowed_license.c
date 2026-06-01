__int64 __fastcall get_borrowed_license(__int64 a1, __int64 a2, __int64 a3, const char *a4, const char *a5)
{
  const char *v7; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  _WORD *v10; // rbp
  __int64 i; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r15
  const char *v15; // rcx
  unsigned __int64 v16; // r15
  void *v17; // rdi
  __m128i si128; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  char *v21; // rdi
  __int64 v22; // r15
  char *v23; // r12
  void *v24; // rdi
  char *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 j; // rbx
  char *v29; // r14
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  void *v33; // rdi
  size_t v35; // r8
  const char *v36; // r9
  void *v37; // rax
  size_t v38; // r8
  const char *v39; // r9
  void *v40; // rax
  size_t v41; // r8
  const char *v42; // r9
  void *v43; // rax
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rsi
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  const char *v52; // [rsp+10h] [rbp-78h]
  unsigned __int8 v53; // [rsp+1Fh] [rbp-69h]
  _WORD *v54; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v56; // [rsp+38h] [rbp-50h]
  unsigned __int64 v57; // [rsp+48h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v7 = (const char *)&v54;
  ptr = nullptr;
  v56 = 0;
  v8 = sub_881530((__int64)&ptr, &v54, a4, a5);
  v9 = v8;
  if ( v8 )
  {
    if ( a1 )
    {
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(v8 + 3));
      *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(v8 + 5));
      *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(v8 + 7));
      *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(v8 + 9));
      *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(v8 + 11));
      *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)(v8 + 13));
      *(__m128i *)(a1 + 96) = _mm_loadu_si128((const __m128i *)(v8 + 15));
      *(__m128i *)(a1 + 112) = _mm_loadu_si128((const __m128i *)(v8 + 17));
      *(__m128i *)(a1 + 128) = _mm_loadu_si128((const __m128i *)(v8 + 19));
      *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)(v8 + 21));
      *(__m128i *)(a1 + 160) = _mm_loadu_si128((const __m128i *)(v8 + 23));
      *(__m128i *)(a1 + 176) = _mm_loadu_si128((const __m128i *)(v8 + 25));
      *(__m128i *)(a1 + 192) = _mm_loadu_si128((const __m128i *)(v8 + 27));
      *(__m128i *)(a1 + 208) = _mm_loadu_si128((const __m128i *)(v8 + 29));
      *(_QWORD *)(a1 + 222) = *(__int64 *)((char *)v8 + 246);
    }
    if ( a2 )
    {
      v10 = v54;
      *(_WORD *)a2 = *v54;
      for ( i = 2; i != 8; ++i )
        *(_BYTE *)(a2 + i) = *((_BYTE *)v10 + i);
      if ( (_WORD *)(a2 + 8) != v10 + 4 )
      {
        v12 = *((_QWORD *)v10 + 2);
        if ( !v12 || (v41 = v12 - 1, v12 == 1) )
        {
          *(_QWORD *)(a2 + 16) = 0;
        }
        else
        {
          v42 = *((const char **)v10 + 1);
          v43 = *(void **)(a2 + 8);
          if ( *(_QWORD *)(a2 + 24) < v12 )
          {
            v45 = *((_QWORD *)v10 + 2);
            v46 = *(_QWORD *)(a2 + 8);
            v52 = *((const char **)v10 + 1);
            n[0] = v12 - 1;
            v43 = (void *)qvector_reserve(a2 + 8, v46, v45, 1);
            v42 = v52;
            v41 = v12 - 1;
            *(_QWORD *)(a2 + 8) = v43;
          }
          *(_QWORD *)(a2 + 16) = v12;
          v7 = v42;
          memmove(v43, v42, v41);
          *(_BYTE *)(*(_QWORD *)(a2 + 8) + v12 - 1) = 0;
        }
      }
      if ( (_WORD *)(a2 + 32) != v10 + 16 )
      {
        v13 = *((_QWORD *)v10 + 5);
        if ( !v13 || (v38 = v13 - 1, v13 == 1) )
        {
          *(_QWORD *)(a2 + 40) = 0;
        }
        else
        {
          v39 = *((const char **)v10 + 4);
          v40 = *(void **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 48) < v13 )
          {
            v47 = *((_QWORD *)v10 + 5);
            v48 = *(_QWORD *)(a2 + 32);
            v52 = *((const char **)v10 + 4);
            n[0] = v13 - 1;
            v40 = (void *)qvector_reserve(a2 + 32, v48, v47, 1);
            v39 = v52;
            v38 = v13 - 1;
            *(_QWORD *)(a2 + 32) = v40;
          }
          *(_QWORD *)(a2 + 40) = v13;
          v7 = v39;
          memmove(v40, v39, v38);
          *(_BYTE *)(*(_QWORD *)(a2 + 32) + v13 - 1) = 0;
        }
      }
      if ( (_WORD *)(a2 + 56) != v10 + 28 )
      {
        v14 = *((_QWORD *)v10 + 8);
        if ( !v14 || (v35 = v14 - 1, v14 == 1) )
        {
          *(_QWORD *)(a2 + 64) = 0;
        }
        else
        {
          v36 = *((const char **)v10 + 7);
          v37 = *(void **)(a2 + 56);
          if ( *(_QWORD *)(a2 + 72) < v14 )
          {
            v49 = *((_QWORD *)v10 + 8);
            v50 = *(_QWORD *)(a2 + 56);
            v52 = *((const char **)v10 + 7);
            n[0] = v14 - 1;
            v37 = (void *)qvector_reserve(a2 + 56, v50, v49, 1);
            v36 = v52;
            v35 = v14 - 1;
            *(_QWORD *)(a2 + 56) = v37;
          }
          *(_QWORD *)(a2 + 64) = v14;
          v7 = v36;
          memmove(v37, v36, v35);
          *(_BYTE *)(*(_QWORD *)(a2 + 56) + v14 - 1) = 0;
        }
      }
      v15 = nullptr;
      *(_QWORD *)(a2 + 80) = *((_QWORD *)v10 + 10);
      v16 = *((_QWORD *)v10 + 12);
      if ( v16 )
      {
        n[0] = 40 * v16;
        v44 = (void *)qalloc_or_throw(40 * v16, v7, 40 * v16, 0);
        v15 = (const char *)memcpy(v44, *((const void **)v10 + 11), 40 * v16);
      }
      v17 = *(void **)(a2 + 88);
      si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      if ( v17 )
      {
        *(_QWORD *)(a2 + 96) = 0;
        v52 = v15;
        *(__m128i *)n = si128;
        qfree(v17);
        v15 = v52;
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(a2 + 88) = v15;
      *(__m128i *)(a2 + 96) = si128;
    }
    if ( a3 )
    {
      v19 = *(_QWORD *)a3;
      v20 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_QWORD *)a3 = v9[32];
      *(_QWORD *)(a3 + 8) = v9[33];
      *(_QWORD *)(a3 + 16) = v9[34];
      v9[32] = v19;
      *(__m128i *)(v9 + 33) = v20;
    }
    v53 = 1;
  }
  else
  {
    v53 = 0;
  }
  v21 = (char *)ptr;
  if ( ptr )
  {
    v52 = (const char *)v56;
    if ( (_QWORD)v56 )
    {
      n[0] = 0;
      v22 = 0;
      do
      {
        v23 = &v21[v22];
        v24 = *(void **)&v21[v22 + 256];
        if ( v24 )
        {
          *((_QWORD *)v23 + 33) = 0;
          qfree(v24);
        }
        v25 = *(char **)v23;
        if ( *(_QWORD *)v23 )
        {
          v26 = *((_QWORD *)v23 + 1);
          if ( v26 )
          {
            v27 = 0;
            for ( j = 0; j != v26; ++j )
            {
              v29 = &v25[v27];
              v30 = *(void **)&v25[v27 + 88];
              if ( v30 )
              {
                *((_QWORD *)v29 + 12) = 0;
                qfree(v30);
              }
              v31 = *((void **)v29 + 7);
              if ( v31 )
              {
                *((_QWORD *)v29 + 8) = 0;
                qfree(v31);
              }
              v32 = *((void **)v29 + 4);
              if ( v32 )
              {
                *((_QWORD *)v29 + 5) = 0;
                qfree(v32);
              }
              v33 = *((void **)v29 + 1);
              if ( v33 )
              {
                *((_QWORD *)v29 + 2) = 0;
                qfree(v33);
              }
              v25 = *(char **)v23;
              v27 += 112;
            }
          }
          *((_QWORD *)v23 + 1) = 0;
          qfree(v25);
        }
        ++n[0];
        v21 = (char *)ptr;
        v22 += 280;
      }
      while ( v52 != (const char *)n[0] );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v21);
  }
  return v53;
}

