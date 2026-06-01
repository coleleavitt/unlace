__int64 __fastcall sub_54A3E0(__int64 *a1, unsigned __int64 a2, char **a3, char a4)
{
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rbx
  int v13; // r15d
  __int64 v14; // r12
  const char **v15; // r14
  const char *v16; // rsi
  const char *v17; // rdi
  const char *v18; // rax
  _QWORD *v19; // rax
  __int64 v21; // rax
  char **v22; // rcx
  char *v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // r13
  __int64 v26; // r12
  char *v27; // rbx
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rcx
  size_t v31; // r14
  void *v32; // r15
  __m128i *v33; // r12
  void *v34; // rdi
  __m128i si128; // xmm0
  void *v36; // rax
  __int64 v37; // rax
  char *v38; // r14
  unsigned __int64 v39; // r15
  size_t v40; // r12
  void *v41; // r15
  void *v42; // rdi
  __m128i v43; // xmm0
  void *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdi
  const char *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  void *v50; // rax
  const void *v51; // rsi
  char *v52; // r15
  char *v53; // rbx
  __int64 i; // rbp
  __int64 v55; // r13
  void *v56; // rax
  size_t v57; // rdx
  void *v58; // rax
  size_t v59; // rdx
  char *v60; // rdi
  __int64 v61; // r13
  __int64 v62; // r14
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  char *v66; // rbx
  __int64 j; // r14
  __int64 v68; // r13
  void *v69; // rax
  size_t v70; // rdx
  void *v71; // rax
  size_t v72; // rdx
  char *v73; // rdi
  __int64 v74; // r14
  __int64 v75; // r13
  char *v76; // rbx
  void *v77; // rdi
  void *v78; // rdi
  void *src[2]; // [rsp+0h] [rbp-98h] BYREF
  size_t n; // [rsp+18h] [rbp-80h]
  char **v81; // [rsp+20h] [rbp-78h]
  void **p_ptr; // [rsp+28h] [rbp-70h]
  __int64 v83; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v85; // [rsp+48h] [rbp-50h]
  unsigned __int64 v86; // [rsp+58h] [rbp-40h]

  v4 = *a1;
  v81 = a3;
  v5 = *(__int64 **)(v4 + 1824);
  v86 = __readfsqword(0x28u);
  v7 = sub_54A320(v5, a2, &v83);
  if ( !v7 )
  {
LABEL_21:
    LODWORD(v8) = 0;
    return (unsigned int)v8;
  }
  ptr = nullptr;
  v8 = v7;
  v85 = 0;
  if ( !a4 )
  {
    v19 = *(_QWORD **)(v7 + 40);
    src[0] = v19;
    if ( !v19 )
    {
      LODWORD(v8) = 0;
      v21 = 0;
      v10 = 0;
      if ( v81 )
        goto LABEL_24;
      return (unsigned int)v8;
    }
    v10 = v19[1];
    if ( v10 )
    {
      p_ptr = &ptr;
      v52 = (char *)qalloc_or_throw(48 * v10);
      v53 = v52;
      for ( i = 0; i != v10; ++i )
      {
        v55 = *(_QWORD *)src[0] + 48 * i;
        *(_QWORD *)v53 = 0;
        *(_OWORD *)(v53 + 8) = 0;
        if ( *(_QWORD *)(v55 + 8) )
        {
          n = *(_QWORD *)(v55 + 8);
          p_ptr = &ptr;
          v56 = (void *)qalloc_or_throw(n);
          v57 = n;
          *(_QWORD *)v53 = v56;
          *((_QWORD *)v53 + 2) = v57;
          memcpy(v56, *(const void **)v55, v57);
          *((_QWORD *)v53 + 1) = n;
        }
        *((_QWORD *)v53 + 3) = 0;
        *((_OWORD *)v53 + 2) = 0;
        if ( *(_QWORD *)(v55 + 32) )
        {
          n = *(_QWORD *)(v55 + 32);
          v58 = (void *)qalloc_or_throw(n);
          v59 = n;
          *((_QWORD *)v53 + 3) = v58;
          *((_QWORD *)v53 + 5) = v59;
          memcpy(v58, *(const void **)(v55 + 24), v59);
          *((_QWORD *)v53 + 4) = n;
        }
        v53 += 48;
      }
      v60 = (char *)ptr;
      if ( ptr )
      {
        v61 = v85.m128i_i64[0];
        if ( v85.m128i_i64[0] )
        {
          v62 = 0;
          do
          {
            v63 = &v60[48 * v62];
            v64 = *((void **)v63 + 3);
            if ( v64 )
            {
              *((_QWORD *)v63 + 4) = 0;
              qfree(v64);
            }
            v65 = *(void **)v63;
            if ( *(_QWORD *)v63 )
            {
              *((_QWORD *)v63 + 1) = 0;
              qfree(v65);
            }
            ++v62;
            v60 = (char *)ptr;
          }
          while ( v61 != v62 );
        }
        v85.m128i_i64[0] = 0;
        qfree(v60);
      }
      ptr = v52;
      LODWORD(v8) = 1;
      src[0] = v52;
      v85 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
      goto LABEL_42;
    }
LABEL_19:
    if ( v81 )
    {
      src[0] = nullptr;
      v10 = 0;
      LODWORD(v8) = 0;
      goto LABEL_43;
    }
    goto LABEL_21;
  }
  if ( v83 )
  {
    v9 = *(_QWORD **)(v83 + 40);
    if ( v9 )
    {
      v10 = v9[1];
      src[0] = nullptr;
      if ( v10 )
      {
        p_ptr = &ptr;
        src[0] = (void *)qalloc_or_throw(48 * v10);
        v66 = (char *)src[0];
        for ( j = 0; j != v10; ++j )
        {
          v68 = *v9 + 48 * j;
          *(_QWORD *)v66 = 0;
          *(_OWORD *)(v66 + 8) = 0;
          if ( *(_QWORD *)(v68 + 8) )
          {
            n = *(_QWORD *)(v68 + 8);
            p_ptr = &ptr;
            v69 = (void *)qalloc_or_throw(n);
            v70 = n;
            *(_QWORD *)v66 = v69;
            *((_QWORD *)v66 + 2) = v70;
            memcpy(v69, *(const void **)v68, v70);
            *((_QWORD *)v66 + 1) = n;
          }
          *((_QWORD *)v66 + 3) = 0;
          *((_OWORD *)v66 + 2) = 0;
          if ( *(_QWORD *)(v68 + 32) )
          {
            n = *(_QWORD *)(v68 + 32);
            v71 = (void *)qalloc_or_throw(n);
            v72 = n;
            *((_QWORD *)v66 + 3) = v71;
            *((_QWORD *)v66 + 5) = v72;
            memcpy(v71, *(const void **)(v68 + 24), v72);
            *((_QWORD *)v66 + 4) = n;
          }
          v66 += 48;
        }
        v73 = (char *)ptr;
        if ( ptr )
        {
          v74 = v85.m128i_i64[0];
          if ( v85.m128i_i64[0] )
          {
            v75 = 0;
            do
            {
              v76 = &v73[48 * v75];
              v77 = *((void **)v76 + 3);
              if ( v77 )
              {
                *((_QWORD *)v76 + 4) = 0;
                qfree(v77);
              }
              v78 = *(void **)v76;
              if ( *(_QWORD *)v76 )
              {
                *((_QWORD *)v76 + 1) = 0;
                qfree(v78);
              }
              ++v75;
              v73 = (char *)ptr;
            }
            while ( v74 != v75 );
          }
          v85.m128i_i64[0] = 0;
          qfree(v73);
        }
      }
      ptr = src[0];
      v11 = *(__int64 **)(v8 + 40);
      v85 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
      if ( !v11 )
        goto LABEL_41;
      goto LABEL_7;
    }
  }
  v11 = *(__int64 **)(v7 + 40);
  src[0] = nullptr;
  v10 = 0;
  if ( !v11 )
    goto LABEL_19;
LABEL_7:
  v12 = *v11;
  LODWORD(v8) = v10;
  n = *v11 + 48 * v11[1];
  if ( v12 == n )
    goto LABEL_41;
  while ( 1 )
  {
    v13 = 0;
    if ( (int)v8 > 0 )
    {
LABEL_9:
      v14 = *(_QWORD *)(v12 + 8);
      v15 = (const char **)src[0];
      v13 = 0;
      while ( 1 )
      {
        v18 = v15[1];
        if ( v14 )
        {
          v16 = *(const char **)v12;
          v17 = haystack;
          if ( !v18 )
            goto LABEL_11;
        }
        else
        {
          if ( !v18 )
            break;
          v16 = haystack;
        }
        v17 = *v15;
LABEL_11:
        if ( !strcmp(v17, v16) )
          break;
        ++v13;
        v15 += 6;
        if ( (_DWORD)v8 == v13 )
          goto LABEL_44;
      }
    }
    if ( (_DWORD)v8 == v13 )
      break;
    v30 = v13;
    v31 = *(_QWORD *)(v12 + 32);
    v32 = nullptr;
    v33 = (__m128i *)((char *)src[0] + 48 * v30);
    if ( v31 )
    {
      v45 = *(_QWORD *)(v12 + 32);
      p_ptr = &ptr;
      v32 = (void *)qalloc_or_throw(v45);
      memcpy(v32, *(const void **)(v12 + 24), v31);
    }
    v34 = (void *)v33[1].m128i_i64[1];
    si128 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
    if ( v34 )
    {
      v33[2].m128i_i64[0] = 0;
      *(__m128i *)src = si128;
      qfree(v34);
      si128 = _mm_load_si128((const __m128i *)src);
    }
    v36 = ptr;
    v33[1].m128i_i64[1] = (__int64)v32;
    v12 += 48;
    v33[2] = si128;
    src[0] = v36;
    if ( n == v12 )
      goto LABEL_40;
  }
  while ( 1 )
  {
LABEL_44:
    v37 = v85.m128i_i64[0];
    if ( v85.m128i_i64[1] < (unsigned __int64)(v85.m128i_i64[0] + 1) )
    {
      p_ptr = &ptr;
      src[0] = (void *)qvector_reserve(&ptr, src[0], v85.m128i_i64[0] + 1, 48);
      ptr = src[0];
      v37 = v85.m128i_i64[0];
    }
    v38 = (char *)src[0] + 48 * v37;
    *(_QWORD *)v38 = 0;
    *(_OWORD *)(v38 + 8) = 0;
    *((_QWORD *)v38 + 3) = 0;
    ++v85.m128i_i64[0];
    *((_OWORD *)v38 + 2) = 0;
    if ( v38 != (char *)v12 )
    {
      v39 = *(_QWORD *)(v12 + 8);
      if ( v39 > 1 )
      {
        v47 = *(const char **)v12;
        v48 = *(_QWORD *)v38;
        v49 = *(_QWORD *)(v12 + 8);
        p_ptr = &ptr;
        src[0] = (void *)v47;
        v50 = (void *)qvector_reserve(v38, v48, v49, 1);
        *(_QWORD *)v38 = v50;
        v51 = src[0];
        *((_QWORD *)v38 + 1) = v39;
        memmove(v50, v51, v39 - 1);
        *(_BYTE *)(*(_QWORD *)v38 + v39 - 1) = 0;
      }
      else
      {
        *((_QWORD *)v38 + 1) = 0;
      }
    }
    v40 = *(_QWORD *)(v12 + 32);
    v41 = nullptr;
    if ( v40 )
    {
      v46 = *(_QWORD *)(v12 + 32);
      p_ptr = &ptr;
      v41 = (void *)qalloc_or_throw(v46);
      memcpy(v41, *(const void **)(v12 + 24), v40);
    }
    v42 = *((void **)v38 + 3);
    v43 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
    if ( v42 )
    {
      *((_QWORD *)v38 + 4) = 0;
      *(__m128i *)src = v43;
      qfree(v42);
      v43 = _mm_load_si128((const __m128i *)src);
    }
    v44 = ptr;
    *((_QWORD *)v38 + 3) = v41;
    v12 += 48;
    *((__m128i *)v38 + 2) = v43;
    src[0] = v44;
    if ( n == v12 )
      break;
    if ( (_DWORD)v8 )
      goto LABEL_9;
  }
LABEL_40:
  v10 = v85.m128i_i64[0];
LABEL_41:
  LOBYTE(v8) = v10 != 0;
LABEL_42:
  v23 = (char *)src[0];
  if ( v81 )
  {
LABEL_43:
    v21 = v85.m128i_i64[1];
LABEL_24:
    v22 = v81;
    v23 = *v81;
    v24 = _mm_loadu_si128((const __m128i *)(v81 + 1));
    *v81 = (char *)src[0];
    v22[1] = (char *)v10;
    v22[2] = (char *)v21;
    ptr = v23;
    v85 = v24;
  }
  if ( v23 )
  {
    v25 = v85.m128i_i64[0];
    if ( v85.m128i_i64[0] )
    {
      v26 = 0;
      do
      {
        v27 = &v23[48 * v26];
        v28 = *((void **)v27 + 3);
        if ( v28 )
        {
          *((_QWORD *)v27 + 4) = 0;
          qfree(v28);
        }
        v29 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v29);
        }
        ++v26;
        v23 = (char *)ptr;
      }
      while ( v25 != v26 );
    }
    v85.m128i_i64[0] = 0;
    qfree(v23);
  }
  return (unsigned int)v8;
}
