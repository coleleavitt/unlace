unsigned __int64 __fastcall sub_6D86D0(_QWORD *a1, unsigned __int64 a2, char *a3)
{
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // rbp
  void *v8; // rax
  __int64 v9; // r14
  char *v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r12
  const char *v13; // rsi
  const char *v14; // rdi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r8
  __int64 v19; // rbp
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  unsigned __int64 *v22; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  _QWORD *v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // r14
  char *v32; // rax
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r15
  size_t v36; // rbp
  _QWORD *v37; // r11
  _QWORD *v38; // rdi
  unsigned __int64 v39; // r10
  _QWORD *v40; // rsi
  unsigned __int64 v41; // rdx
  char *v42; // rcx
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  size_t v45; // rax
  __int64 v46; // r15
  size_t v47; // rbp
  void *v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  void *v51; // r13
  __m128i si128; // xmm0
  __int64 v53; // rax
  void *v54; // rdi
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  char *s[2]; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __m128i v62; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+30h] [rbp-40h]

  s[0] = a3;
  v63 = __readfsqword(0x28u);
  v62 = 0;
  ptr = nullptr;
  if ( !a3 )
  {
    v34 = a1[31];
    v9 = a1[30];
    v10 = nullptr;
    v12 = 0;
    v11 = v9 + 24 * v34;
    if ( v11 == v9 )
    {
      v15 = a1[31];
      v16 = v9 + 24 * v34;
      goto LABEL_49;
    }
    while ( 1 )
    {
LABEL_8:
      if ( *(_QWORD *)(v9 + 8) )
      {
        v13 = *(const char **)v9;
        v14 = haystack;
        if ( !v12 )
          goto LABEL_6;
      }
      else
      {
        if ( !v12 )
          goto LABEL_12;
        v13 = haystack;
      }
      v14 = v10;
LABEL_6:
      if ( strcmp(v14, v13) )
      {
        v9 += 24;
        if ( v9 != v11 )
          continue;
      }
      goto LABEL_12;
    }
  }
  v5 = strlen(a3);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
  v62.m128i_i64[0] = v6;
  ptr = v8;
  memmove(v8, a3, v7);
  *((_BYTE *)ptr + v7) = 0;
  v9 = a1[30];
  v10 = (char *)ptr;
  v11 = v9 + 24LL * a1[31];
  if ( v9 != v11 )
  {
    v12 = v62.m128i_i64[0];
    goto LABEL_8;
  }
LABEL_12:
  if ( v10 )
  {
    v62.m128i_i64[0] = 0;
    qfree(v10);
  }
  v15 = a1[31];
  v16 = a1[30];
  if ( v9 != v16 + 24 * v15 )
  {
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v16) >> 3);
    goto LABEL_16;
  }
  ptr = nullptr;
  v62 = 0;
  if ( s[0] )
  {
    v45 = strlen(s[0]);
    v46 = v45 + 1;
    v47 = v45;
    v48 = (void *)qvector_reserve(&ptr, 0, v45 + 1, 1);
    v62.m128i_i64[0] = v46;
    ptr = v48;
    memmove(v48, s[0], v47);
    *((_BYTE *)ptr + v47) = 0;
    v16 = a1[30];
    v34 = a1[31];
  }
  else
  {
    v34 = v15;
  }
LABEL_49:
  v49 = a1[32];
  v50 = v34 + 1;
  if ( (unsigned __int64)&ptr < v16 || (unsigned __int64)&ptr >= v16 + 24 * v49 )
  {
    if ( v49 < v50 )
    {
      v57 = qvector_reserve(a1 + 30, v16, v34 + 1, 24);
      a1[30] = v57;
      v16 = v57;
      v34 = a1[31];
    }
    v55 = _mm_loadu_si128(&v62);
    v56 = v16 + 24 * v34;
    *(_QWORD *)v56 = ptr;
    *(__m128i *)(v56 + 8) = v55;
    ++a1[31];
  }
  else
  {
    v51 = ptr;
    si128 = _mm_loadu_si128(&v62);
    ptr = nullptr;
    v62 = 0;
    if ( v49 < v50 )
    {
      *(__m128i *)s = si128;
      v58 = qvector_reserve(a1 + 30, v16, v34 + 1, 24);
      si128 = _mm_load_si128((const __m128i *)s);
      a1[30] = v58;
      v16 = v58;
      v34 = a1[31];
    }
    v53 = v16 + 24 * v34;
    *(_QWORD *)v53 = v51;
    *(__m128i *)(v53 + 8) = si128;
    v54 = ptr;
    ++a1[31];
    if ( v54 )
    {
      v62.m128i_i64[0] = 0;
      qfree(v54);
    }
  }
LABEL_16:
  v17 = a1[34];
  v18 = *(_QWORD **)(a1[33] + 8 * (a2 % v17));
  v19 = 8 * (a2 % v17);
  if ( !v18 )
    goto LABEL_25;
  v20 = (_QWORD *)*v18;
  if ( a2 != *(_QWORD *)(*v18 + 8LL) )
  {
    while ( 1 )
    {
      v21 = (_QWORD *)*v20;
      if ( !*v20 )
        break;
      v18 = v20;
      if ( a2 % v17 != v21[1] % v17 )
        break;
      v20 = (_QWORD *)*v20;
      if ( a2 == v21[1] )
        goto LABEL_21;
    }
LABEL_25:
    v24 = (_QWORD *)operator new(0x18u);
    v25 = a1[36];
    v26 = a1[34];
    *v24 = 0;
    v27 = v24;
    v24[2] = 0;
    v24[1] = a2;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)(a1 + 37),
                            v26,
                            v25,
                            1u) )
    {
      v35 = v28;
      if ( v28 == 1 )
      {
        v37 = a1 + 39;
        a1[39] = 0;
        v31 = (char *)(a1 + 39);
      }
      else
      {
        if ( v28 >> 60 )
        {
          if ( v28 >> 61 )
            sub_2EBC5E(a1 + 37, v26, v28, v29, v30);
          std::__throw_bad_alloc();
        }
        v36 = 8 * v28;
        v31 = (char *)operator new(8 * v28);
        memset(v31, 0, v36);
        v37 = a1 + 39;
      }
      v38 = (_QWORD *)a1[35];
      v39 = 0;
      a1[35] = 0;
      while ( v38 )
      {
        while ( 1 )
        {
          v40 = v38;
          v38 = (_QWORD *)*v38;
          v41 = v40[1] % v35;
          v42 = &v31[8 * v41];
          if ( !*(_QWORD *)v42 )
            break;
          *v40 = **(_QWORD **)v42;
          **(_QWORD **)v42 = v40;
          if ( !v38 )
            goto LABEL_38;
        }
        *v40 = a1[35];
        a1[35] = v40;
        *(_QWORD *)v42 = a1 + 35;
        if ( *v40 )
          *(_QWORD *)&v31[8 * v39] = v40;
        v39 = v41;
      }
LABEL_38:
      v43 = (_QWORD *)a1[33];
      if ( v43 != v37 )
        operator delete(v43, 8LL * a1[34]);
      a1[34] = v35;
      a1[33] = v31;
      v19 = 8 * (a2 % v35);
      v32 = &v31[v19];
      v33 = *(_QWORD **)&v31[v19];
      if ( v33 )
        goto LABEL_27;
    }
    else
    {
      v31 = (char *)a1[33];
      v32 = &v31[v19];
      v33 = *(_QWORD **)&v31[v19];
      if ( v33 )
      {
LABEL_27:
        *v27 = *v33;
        **(_QWORD **)v32 = v27;
LABEL_28:
        ++a1[36];
        v22 = v27 + 2;
        goto LABEL_24;
      }
    }
    v44 = a1[35];
    a1[35] = v27;
    *v27 = v44;
    if ( v44 )
    {
      *(_QWORD *)&v31[8 * (*(_QWORD *)(v44 + 8) % a1[34])] = v27;
      v32 = (char *)(v19 + a1[33]);
    }
    *(_QWORD *)v32 = a1 + 35;
    goto LABEL_28;
  }
LABEL_21:
  if ( !v18 || !*v18 )
    goto LABEL_25;
  v22 = (unsigned __int64 *)(*v18 + 16LL);
LABEL_24:
  *v22 = v15;
  return v63 - __readfsqword(0x28u);
}
