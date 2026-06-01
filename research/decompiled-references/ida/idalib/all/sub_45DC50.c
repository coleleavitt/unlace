unsigned __int64 __fastcall sub_45DC50(__int64 **a1, _QWORD *a2, _QWORD *a3)
{
  char *v5; // rdx
  __int64 v6; // rsi
  char v7; // al
  char *v8; // rax
  size_t v9; // rax
  size_t v10; // rbp
  __int64 *v11; // rdx
  const char *v12; // rsi
  __int64 *v13; // rbp
  size_t v14; // r12
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // r14
  _BYTE *v18; // rsi
  _QWORD *v19; // r15
  _QWORD *v20; // r13
  size_t v21; // r12
  const char *v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  _QWORD *v25; // r14
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // r14
  __int64 v32; // r8
  void *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  char *v36; // r8
  __int64 v37; // rdi
  size_t v38; // r13
  void *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v45; // rsi
  const char *v46; // rdi
  void *v47; // rdi
  size_t v48; // r13
  size_t v49; // rax
  const char *i; // rdi
  __int64 v51; // rsi
  char *v52; // rax
  char *v53; // r13
  __int64 v54; // rax
  const char *v55; // rsi
  unsigned int v56; // eax
  char *s; // [rsp+8h] [rbp-A0h]
  const char *v58; // [rsp+10h] [rbp-98h]
  void *v59; // [rsp+10h] [rbp-98h]
  char *v60; // [rsp+10h] [rbp-98h]
  _QWORD *v61; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h]
  char *s2a; // [rsp+18h] [rbp-90h]
  _QWORD *v64; // [rsp+30h] [rbp-78h]
  __int64 v66; // [rsp+47h] [rbp-61h] BYREF
  char v67; // [rsp+4Fh] [rbp-59h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v70; // [rsp+68h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( a2[3] )
  {
    v5 = (char *)a2[2];
    v6 = **a1;
    s = v5;
    src = (void *)-1LL;
    LOBYTE(n[0]) = 0;
    dirtree_resolve_path(&src, v6, v5);
    v7 = n[0];
    if ( src == (void *)-1LL )
    {
      v8 = strrchr(s, 47);
      if ( v8 )
      {
        src = nullptr;
        v9 = v8 - s;
        *(_OWORD *)n = 0;
        v10 = v9;
        if ( v9 )
        {
          v47 = nullptr;
          v48 = v9 + 1;
          if ( v9 != -1 )
          {
            src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
            v47 = src;
          }
          n[0] = v48;
          memmove(v47, s, v10);
          *((_BYTE *)src + v10) = 0;
          v49 = n[0];
          if ( n[0] > 1 )
          {
            for ( i = (const char *)src; ; i = v53 + 1 )
            {
              v52 = strchr(i, 47);
              v53 = v52;
              if ( !v52 )
                break;
              *v52 = 0;
              v51 = **a1;
              v67 = 0;
              v66 = -1;
              dirtree_resolve_path(&v66, v51, src);
              if ( v66 != -1 && !v67 )
                sub_378C70((__int64)"Merge handler label %s contains another label", s);
              *v53 = 47;
            }
            v49 = n[0];
          }
          v11 = *a1;
          v12 = haystack;
          if ( v49 )
            v12 = (const char *)src;
        }
        else
        {
          v11 = *a1;
          v12 = haystack;
        }
        dirtree_mkdir(*v11, v12);
        if ( a3[1] > 1u )
          sub_45AE00(a1, &src, a3);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
      }
      goto LABEL_10;
    }
LABEL_56:
    v46 = "Duplicate merge handler %s";
    if ( v7 )
      v46 = "Merge handler label %s is a part of another label";
    sub_378C70((__int64)v46, s);
  }
  v45 = **a1;
  LOBYTE(n[0]) = 0;
  src = (void *)-1LL;
  dirtree_resolve_path(&src, v45, haystack);
  s = (char *)haystack;
  v7 = n[0];
  if ( src != (void *)-1LL )
    goto LABEL_56;
LABEL_10:
  v13 = a1[1];
  *(_OWORD *)n = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  n[0] = 2;
  *(_BYTE *)src = 47;
  *((_BYTE *)src + 1) = 0;
  if ( s )
  {
    v14 = n[0];
    v15 = strlen(s);
    v16 = v15;
    v17 = v15;
    if ( v14 )
    {
      --v14;
      v17 = v15 + v14;
    }
    v18 = src;
    if ( n[1] < v17 + 1 )
    {
      src = (void *)qvector_reserve(&src, src, v17 + 1, 1);
      v18 = src;
    }
    n[0] = v17 + 1;
    v18[v17] = 0;
    memmove((char *)src + v14, s, v16);
  }
  v19 = (_QWORD *)v13[7];
  v20 = v13 + 6;
  v21 = n[0];
  v64 = v13 + 6;
  if ( !v19 )
  {
    v20 = v13 + 6;
    goto LABEL_40;
  }
  v22 = (const char *)src;
  s2 = (char *)src;
  if ( !n[0] )
    v22 = haystack;
  v58 = v22;
  while ( 1 )
  {
    v28 = v19[5];
    if ( !v21 )
      break;
    if ( v28 )
      goto LABEL_29;
    v23 = s2;
    v24 = haystack;
    v25 = v19;
LABEL_22:
    v26 = strcmp(v24, v23);
    v27 = (_QWORD *)v19[2];
    v19 = (_QWORD *)v19[3];
    if ( v26 >= 0 )
    {
      v20 = v25;
      v19 = v27;
    }
    if ( !v19 )
      goto LABEL_31;
  }
  if ( v28 )
  {
LABEL_29:
    v24 = (const char *)v19[4];
    v23 = v58;
    v25 = v19;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v29 = v19[2];
    if ( !v29 )
      break;
    v20 = v19;
    v19 = (_QWORD *)v19[2];
    if ( *(_QWORD *)(v29 + 40) )
      goto LABEL_29;
  }
  v20 = v19;
LABEL_31:
  if ( v64 != v20 )
  {
    v30 = v20[5];
    if ( v21 )
    {
      if ( !v30 )
      {
        if ( *s2 )
        {
          v59 = (void *)v13[12];
          goto LABEL_36;
        }
LABEL_84:
        sub_368890();
      }
    }
    else
    {
      if ( !v30 )
        goto LABEL_84;
      s2 = (char *)haystack;
    }
    if ( !strcmp((const char *)v20[4], s2) )
      goto LABEL_84;
  }
LABEL_40:
  v59 = (void *)v13[12];
  if ( v21 )
  {
LABEL_36:
    v31 = (char *)qalloc_or_throw(v21);
    memcpy(v31, src, v21);
  }
  else
  {
    v31 = nullptr;
  }
  v32 = operator new(0x40u);
  *(_QWORD *)(v32 + 32) = v31;
  *(__m128i *)(v32 + 40) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  v33 = v59;
  v60 = (char *)v32;
  *(_QWORD *)(v32 + 56) = v33;
  v34 = sub_45DA90(v13 + 5, v20, v32 + 32);
  v36 = v60;
  if ( v35 )
  {
    if ( v34 || v35 == v64 )
    {
      v37 = 1;
    }
    else
    {
      v55 = haystack;
      if ( v35[5] )
        v55 = (const char *)v35[4];
      s2a = v60;
      if ( !v21 )
        v31 = (char *)haystack;
      v61 = v35;
      v56 = strcmp(v31, v55);
      v35 = v61;
      v36 = s2a;
      v37 = v56 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v37, v36, v35, v64);
    ++v13[10];
LABEL_47:
    v38 = n[0];
    v39 = nullptr;
    if ( !n[0] )
      goto LABEL_48;
LABEL_74:
    v39 = (void *)qalloc_or_throw(v38);
    memcpy(v39, src, v38);
    goto LABEL_48;
  }
  if ( !v60 )
    goto LABEL_47;
  if ( v31 )
  {
    *((_QWORD *)v60 + 5) = 0;
    qfree(v31);
    v36 = v60;
  }
  v39 = nullptr;
  operator delete(v36, 0x40u);
  v38 = n[0];
  if ( n[0] )
    goto LABEL_74;
LABEL_48:
  v40 = v13[12];
  v41 = v13[11];
  if ( v13[13] < (unsigned __int64)(v40 + 1) )
  {
    v54 = qvector_reserve(v13 + 11, v41, v40 + 1, 24);
    v13[11] = v54;
    v40 = v13[12];
    v41 = v54;
  }
  v42 = v41 + 24 * v40;
  *(_QWORD *)v42 = v39;
  *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
  ++v13[12];
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  dirtree_link(**a1, s, 1);
  v43 = **a1;
  LOBYTE(n[0]) = 0;
  src = (void *)-1LL;
  dirtree_resolve_path(&src, v43, s);
  if ( src == (void *)-1LL || LOBYTE(n[0]) )
  {
    if ( !under_debugger )
      interr(1974);
    BUG();
  }
  a2[17] = src;
  return v70 - __readfsqword(0x28u);
}
