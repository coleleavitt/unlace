__int64 __fastcall sub_531370(__int64 *a1, const char *a2, char **a3, char a4)
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
  const char *v16; // rdi
  const char *v17; // rax
  _QWORD *v18; // rax
  __int64 v20; // rax
  char **v21; // rcx
  char *v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // r13
  __int64 v25; // r12
  char *v26; // rbx
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rcx
  size_t v30; // r14
  __int64 v31; // r15
  __m128i *v32; // r12
  void *v33; // rdi
  __m128i si128; // xmm0
  void *v35; // rax
  __int64 v36; // rax
  char *v37; // r14
  unsigned __int64 v38; // r15
  size_t v39; // r12
  void *v40; // r15
  void *v41; // rdi
  __m128i v42; // xmm0
  void *v43; // rax
  __int64 v44; // rdi
  void *v45; // rax
  __int64 v46; // rdi
  void *v47; // rax
  const char *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdx
  void *v51; // rax
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
  v5 = *(__int64 **)(v4 + 1632);
  v86 = __readfsqword(0x28u);
  v7 = sub_5312B0(v5, (unsigned __int64)a2, &v83);
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
    v18 = *(_QWORD **)(v7 + 40);
    src[0] = v18;
    if ( !v18 )
    {
      LODWORD(v8) = 0;
      v20 = 0;
      v10 = 0;
      if ( v81 )
        goto LABEL_24;
      return (unsigned int)v8;
    }
    v10 = v18[1];
    if ( v10 )
    {
      p_ptr = &ptr;
      v52 = (char *)qalloc_or_throw(48 * v10, a2);
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
          v56 = (void *)qalloc_or_throw(n, a2);
          v57 = n;
          *(_QWORD *)v53 = v56;
          *((_QWORD *)v53 + 2) = v57;
          a2 = *(const char **)v55;
          memcpy(v56, *(const void **)v55, v57);
          *((_QWORD *)v53 + 1) = n;
        }
        *((_QWORD *)v53 + 3) = 0;
        *((_OWORD *)v53 + 2) = 0;
        if ( *(_QWORD *)(v55 + 32) )
        {
          n = *(_QWORD *)(v55 + 32);
          v58 = (void *)qalloc_or_throw(n, a2);
          v59 = n;
          *((_QWORD *)v53 + 3) = v58;
          *((_QWORD *)v53 + 5) = v59;
          a2 = *(const char **)(v55 + 24);
          memcpy(v58, a2, v59);
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
        src[0] = (void *)qalloc_or_throw(48 * v10, a2);
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
            v69 = (void *)qalloc_or_throw(n, a2);
            v70 = n;
            *(_QWORD *)v66 = v69;
            *((_QWORD *)v66 + 2) = v70;
            a2 = *(const char **)v68;
            memcpy(v69, *(const void **)v68, v70);
            *((_QWORD *)v66 + 1) = n;
          }
          *((_QWORD *)v66 + 3) = 0;
          *((_OWORD *)v66 + 2) = 0;
          if ( *(_QWORD *)(v68 + 32) )
          {
            n = *(_QWORD *)(v68 + 32);
            v71 = (void *)qalloc_or_throw(n, a2);
            v72 = n;
            *((_QWORD *)v66 + 3) = v71;
            *((_QWORD *)v66 + 5) = v72;
            a2 = *(const char **)(v68 + 24);
            memcpy(v71, a2, v72);
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
        v17 = v15[1];
        if ( v14 )
        {
          a2 = *(const char **)v12;
          v16 = haystack;
          if ( !v17 )
            goto LABEL_11;
        }
        else
        {
          if ( !v17 )
            break;
          a2 = haystack;
        }
        v16 = *v15;
LABEL_11:
        if ( !strcmp(v16, a2) )
          break;
        ++v13;
        v15 += 6;
        if ( (_DWORD)v8 == v13 )
          goto LABEL_44;
      }
    }
    if ( (_DWORD)v8 == v13 )
      break;
    v29 = v13;
    v30 = *(_QWORD *)(v12 + 32);
    v31 = 0;
    v32 = (__m128i *)((char *)src[0] + 48 * v29);
    if ( v30 )
    {
      v44 = *(_QWORD *)(v12 + 32);
      p_ptr = &ptr;
      v45 = (void *)qalloc_or_throw(v44, a2);
      a2 = *(const char **)(v12 + 24);
      v31 = (__int64)v45;
      memcpy(v45, a2, v30);
    }
    v33 = (void *)v32[1].m128i_i64[1];
    si128 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
    if ( v33 )
    {
      v32[2].m128i_i64[0] = 0;
      *(__m128i *)src = si128;
      qfree(v33);
      si128 = _mm_load_si128((const __m128i *)src);
    }
    v35 = ptr;
    v32[1].m128i_i64[1] = v31;
    v12 += 48;
    v32[2] = si128;
    src[0] = v35;
    if ( n == v12 )
      goto LABEL_40;
  }
  while ( 1 )
  {
LABEL_44:
    v36 = v85.m128i_i64[0];
    if ( v85.m128i_i64[1] < (unsigned __int64)(v85.m128i_i64[0] + 1) )
    {
      a2 = (const char *)src[0];
      p_ptr = &ptr;
      src[0] = (void *)qvector_reserve(&ptr, src[0], v85.m128i_i64[0] + 1, 48);
      ptr = src[0];
      v36 = v85.m128i_i64[0];
    }
    v37 = (char *)src[0] + 48 * v36;
    *(_QWORD *)v37 = 0;
    *(_OWORD *)(v37 + 8) = 0;
    *((_QWORD *)v37 + 3) = 0;
    ++v85.m128i_i64[0];
    *((_OWORD *)v37 + 2) = 0;
    if ( v37 != (char *)v12 )
    {
      v38 = *(_QWORD *)(v12 + 8);
      if ( v38 > 1 )
      {
        v48 = *(const char **)v12;
        v49 = *(_QWORD *)v37;
        v50 = *(_QWORD *)(v12 + 8);
        p_ptr = &ptr;
        src[0] = (void *)v48;
        v51 = (void *)qvector_reserve(v37, v49, v50, 1);
        *(_QWORD *)v37 = v51;
        a2 = (const char *)src[0];
        *((_QWORD *)v37 + 1) = v38;
        memmove(v51, a2, v38 - 1);
        *(_BYTE *)(*(_QWORD *)v37 + v38 - 1) = 0;
      }
      else
      {
        *((_QWORD *)v37 + 1) = 0;
      }
    }
    v39 = *(_QWORD *)(v12 + 32);
    v40 = nullptr;
    if ( v39 )
    {
      v46 = *(_QWORD *)(v12 + 32);
      p_ptr = &ptr;
      v47 = (void *)qalloc_or_throw(v46, a2);
      a2 = *(const char **)(v12 + 24);
      v40 = v47;
      memcpy(v47, a2, v39);
    }
    v41 = *((void **)v37 + 3);
    v42 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
    if ( v41 )
    {
      *((_QWORD *)v37 + 4) = 0;
      *(__m128i *)src = v42;
      qfree(v41);
      v42 = _mm_load_si128((const __m128i *)src);
    }
    v43 = ptr;
    *((_QWORD *)v37 + 3) = v40;
    v12 += 48;
    *((__m128i *)v37 + 2) = v42;
    src[0] = v43;
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
  v22 = (char *)src[0];
  if ( v81 )
  {
LABEL_43:
    v20 = v85.m128i_i64[1];
LABEL_24:
    v21 = v81;
    v22 = *v81;
    v23 = _mm_loadu_si128((const __m128i *)(v81 + 1));
    *v81 = (char *)src[0];
    v21[1] = (char *)v10;
    v21[2] = (char *)v20;
    ptr = v22;
    v85 = v23;
  }
  if ( v22 )
  {
    v24 = v85.m128i_i64[0];
    if ( v85.m128i_i64[0] )
    {
      v25 = 0;
      do
      {
        v26 = &v22[48 * v25];
        v27 = *((void **)v26 + 3);
        if ( v27 )
        {
          *((_QWORD *)v26 + 4) = 0;
          qfree(v27);
        }
        v28 = *(void **)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          qfree(v28);
        }
        ++v25;
        v22 = (char *)ptr;
      }
      while ( v24 != v25 );
    }
    v85.m128i_i64[0] = 0;
    qfree(v22);
  }
  return (unsigned int)v8;
}

