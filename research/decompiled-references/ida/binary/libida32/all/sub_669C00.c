bool __fastcall sub_669C00(__int64 *a1, const char *a2, const char *a3, char a4)
{
  int v4; // r13d
  __int64 v7; // rax
  const char *file_ext; // rdi
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rax
  const char *v13; // rdx
  size_t v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  void *v19; // r14
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rdx
  void *v29; // rdi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // rax
  __int64 v34; // rbp
  size_t v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  void *v40; // rbx
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __int64 v43; // rax
  void *v44; // rdi
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // [rsp+0h] [rbp-20B8h]
  __m128i v51; // [rsp+8h] [rbp-20B0h] BYREF
  char v52; // [rsp+1Fh] [rbp-2099h]
  void *v53; // [rsp+20h] [rbp-2098h]
  __m128i v54; // [rsp+28h] [rbp-2090h] BYREF
  __int128 v55; // [rsp+38h] [rbp-2080h]
  void *ptr; // [rsp+50h] [rbp-2068h] BYREF
  __m128i v57; // [rsp+58h] [rbp-2060h] BYREF
  char v58[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1070h] [rbp-1048h] BYREF
  unsigned __int64 v60; // [rsp+2078h] [rbp-40h]

  v4 = (int)a2;
  v52 = a4;
  v60 = __readfsqword(0x28u);
  if ( !(unsigned __int8)qisabspath(a2) )
  {
    v54.m128i_i64[1] = 0;
    v53 = &v54.m128i_u64[1];
    v55 = 0;
    get_ida_subdirs();
    file_ext = (const char *)get_file_ext(a2);
    if ( !file_ext || strcasecmp(file_ext, a3) )
      v4 = qmakefile(v58, 4096, a2, a3);
    v51.m128i_i64[0] = v55;
    if ( (_QWORD)v55 )
    {
      v11 = 0;
      do
      {
        v12 = v54.m128i_i64[1] + 24 * v11;
        v13 = haystack;
        if ( *(_QWORD *)(v12 + 8) )
          v13 = *(const char **)v12;
        qmakepath((int)s, 4096, (int)v13, v4, 0, v10, v50);
        if ( (unsigned __int8)qfileexist(s, 4096) )
        {
          ptr = nullptr;
          v57 = 0;
          v14 = strlen(s);
          v51.m128i_i64[1] = v14 + 1;
          ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
          v57.m128i_i64[0] = v51.m128i_i64[1];
          memmove(ptr, s, v14);
          *((_BYTE *)ptr + v14) = 0;
          v15 = a1[1];
          v16 = *a1;
          v17 = a1[2];
          v18 = v15 + 1;
          if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v16 + 24 * v17 )
          {
            if ( v17 < v18 )
            {
              v32 = qvector_reserve(a1, v16, v15 + 1, 24);
              *a1 = v32;
              v16 = v32;
              v15 = a1[1];
            }
            v30 = _mm_loadu_si128(&v57);
            v31 = v16 + 24 * v15;
            *(_QWORD *)v31 = ptr;
            *(__m128i *)(v31 + 8) = v30;
            ++a1[1];
          }
          else
          {
            v19 = ptr;
            v20 = _mm_loadl_epi64(&v57);
            ptr = nullptr;
            v21 = _mm_loadl_epi64((const __m128i *)&v57.m128i_u64[1]);
            v57 = 0;
            if ( v17 < v18 )
            {
              v54.m128i_i64[0] = v21.m128i_i64[0];
              v51.m128i_i64[1] = v20.m128i_i64[0];
              v47 = qvector_reserve(a1, v16, v15 + 1, 24);
              *a1 = v47;
              v16 = v47;
              v21 = _mm_loadl_epi64(&v54);
              v15 = a1[1];
              v20 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
            }
            v22 = v16 + 24 * v15;
            *(_QWORD *)v22 = v19;
            *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
            v23 = ptr;
            ++a1[1];
            if ( v23 )
            {
              v57.m128i_i64[0] = 0;
              qfree(v23);
            }
          }
          if ( v52 )
            break;
        }
        ++v11;
      }
      while ( v51.m128i_i64[0] != v11 );
      v24 = v54.m128i_i64[1];
      v25 = (void *)v54.m128i_i64[1];
      if ( !v54.m128i_i64[1] )
        goto LABEL_3;
      v26 = v55;
      if ( (_QWORD)v55 )
      {
        v27 = 0;
        do
        {
          v28 = v24 + 24 * v27;
          v29 = *(void **)v28;
          if ( *(_QWORD *)v28 )
          {
            *(_QWORD *)(v28 + 8) = 0;
            qfree(v29);
            v24 = v54.m128i_i64[1];
          }
          ++v27;
          v25 = (void *)v24;
        }
        while ( v26 != v27 );
      }
    }
    else
    {
      v25 = (void *)v54.m128i_i64[1];
      if ( !v54.m128i_i64[1] )
        goto LABEL_3;
    }
    *(_QWORD *)&v55 = 0;
    qfree(v25);
LABEL_3:
    v7 = a1[1];
    return v7 != 0;
  }
  if ( !(unsigned __int8)qfileexist(a2, a2) )
    goto LABEL_3;
  ptr = nullptr;
  v57 = 0;
  if ( a2 )
  {
    v33 = strlen(a2);
    v34 = v33 + 1;
    v35 = v33;
    ptr = (void *)qvector_reserve(&ptr, 0, v33 + 1, 1);
    v57.m128i_i64[0] = v34;
    memmove(ptr, a2, v35);
    *((_BYTE *)ptr + v35) = 0;
  }
  v36 = a1[1];
  v37 = *a1;
  v38 = a1[2];
  v39 = v36 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v37 + 24 * v38 )
  {
    if ( v38 < v39 )
    {
      v48 = qvector_reserve(a1, v37, v36 + 1, 24);
      *a1 = v48;
      v37 = v48;
      v36 = a1[1];
    }
    v45 = _mm_loadu_si128(&v57);
    v46 = v37 + 24 * v36;
    *(_QWORD *)v46 = ptr;
    *(__m128i *)(v46 + 8) = v45;
    v7 = a1[1] + 1;
    a1[1] = v7;
  }
  else
  {
    v40 = ptr;
    v41 = _mm_loadl_epi64(&v57);
    ptr = nullptr;
    v42 = _mm_loadl_epi64((const __m128i *)&v57.m128i_u64[1]);
    v57 = 0;
    if ( v38 < v39 )
    {
      v51.m128i_i64[1] = v42.m128i_i64[0];
      v51.m128i_i64[0] = v41.m128i_i64[0];
      v49 = qvector_reserve(a1, v37, v36 + 1, 24);
      *a1 = v49;
      v37 = v49;
      v42 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
      v36 = a1[1];
      v41 = _mm_loadl_epi64(&v51);
    }
    v43 = v37 + 24 * v36;
    *(_QWORD *)v43 = v40;
    *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v41, v42);
    v44 = ptr;
    v7 = a1[1] + 1;
    a1[1] = v7;
    if ( v44 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v44);
      v7 = a1[1];
    }
  }
  return v7 != 0;
}

