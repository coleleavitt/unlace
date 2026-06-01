unsigned __int64 __fastcall sub_449A20(__int64 **a1, __int64 a2, _QWORD *a3)
{
  char *v5; // rdx
  __int64 v6; // rsi
  char v7; // al
  char *v8; // rax
  size_t v9; // rax
  size_t v10; // rbp
  __int64 *v11; // rdx
  const char *v12; // rsi
  const char *v13; // rsi
  __int64 *v14; // rbp
  __int64 v15; // rdx
  char *v16; // rcx
  size_t v17; // r12
  size_t v18; // rax
  size_t v19; // r13
  size_t v20; // r14
  _BYTE *v21; // rsi
  char *v22; // r15
  char *v23; // r13
  size_t v24; // r12
  const char *v25; // rax
  const char *v26; // rdi
  char *v27; // r14
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // r14
  __int64 v32; // r8
  const char *v33; // rsi
  int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  char *v37; // r8
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
  __int64 *v51; // rax
  __int64 v52; // rsi
  char *v53; // rax
  char *v54; // r13
  __int64 v55; // rax
  const char *v56; // rsi
  char *s; // [rsp+8h] [rbp-A0h]
  const char *v58; // [rsp+10h] [rbp-98h]
  int v59; // [rsp+10h] [rbp-98h]
  char *v60; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h]
  char *v62; // [rsp+30h] [rbp-78h]
  int v64; // [rsp+4Bh] [rbp-5Dh] BYREF
  char v65; // [rsp+4Fh] [rbp-59h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v68; // [rsp+68h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 24) )
  {
    v5 = *(char **)(a2 + 16);
    v6 = **a1;
    s = v5;
    LODWORD(src) = -1;
    BYTE4(src) = 0;
    dirtree_resolve_path(&src, v6, v5);
    v7 = BYTE4(src);
    if ( (_DWORD)src == -1 )
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
            for ( i = (const char *)src; ; i = v54 + 1 )
            {
              v53 = strchr(i, 47);
              v54 = v53;
              if ( !v53 )
                break;
              *v53 = 0;
              v51 = *a1;
              v64 = -1;
              v52 = *v51;
              v65 = 0;
              dirtree_resolve_path(&v64, v52, src);
              if ( v64 != -1 && !v65 )
                sub_375320((__int64)"Merge handler label %s contains another label", s);
              *v54 = 47;
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
          sub_446F40(a1, &src, a3);
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
      }
      goto LABEL_10;
    }
LABEL_55:
    v46 = "Duplicate merge handler %s";
    if ( v7 )
      v46 = "Merge handler label %s is a part of another label";
    sub_375320((__int64)v46, s);
  }
  v45 = **a1;
  LODWORD(src) = -1;
  BYTE4(src) = 0;
  dirtree_resolve_path(&src, v45, haystack);
  s = (char *)haystack;
  v7 = BYTE4(src);
  if ( (_DWORD)src != -1 )
    goto LABEL_55;
LABEL_10:
  v13 = nullptr;
  v14 = a1[1];
  *(_OWORD *)n = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  n[0] = 2;
  *(_BYTE *)src = 47;
  *((_BYTE *)src + 1) = 0;
  if ( s )
  {
    v17 = n[0];
    v18 = strlen(s);
    v19 = v18;
    v20 = v18;
    if ( v17 )
    {
      --v17;
      v20 = v18 + v17;
    }
    v21 = src;
    if ( n[1] < v20 + 1 )
    {
      src = (void *)qvector_reserve(&src, src, v20 + 1, 1);
      v21 = src;
    }
    n[0] = v20 + 1;
    v21[v20] = 0;
    v13 = s;
    memmove((char *)src + v17, s, v19);
  }
  v22 = (char *)v14[7];
  v23 = (char *)(v14 + 6);
  v24 = n[0];
  v62 = (char *)(v14 + 6);
  if ( !v22 )
  {
    v23 = (char *)(v14 + 6);
    goto LABEL_40;
  }
  v25 = (const char *)src;
  s2 = (char *)src;
  if ( !n[0] )
    v25 = haystack;
  v58 = v25;
  while ( 1 )
  {
    v29 = *((_QWORD *)v22 + 5);
    if ( !v24 )
      break;
    if ( v29 )
      goto LABEL_29;
    v13 = s2;
    v26 = haystack;
    v27 = v22;
LABEL_22:
    v28 = strcmp(v26, v13);
    v16 = *((char **)v22 + 2);
    v22 = *((char **)v22 + 3);
    if ( v28 >= 0 )
    {
      v23 = v27;
      v22 = v16;
    }
    if ( !v22 )
      goto LABEL_31;
  }
  if ( v29 )
  {
LABEL_29:
    v26 = *((const char **)v22 + 4);
    v13 = v58;
    v27 = v22;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v16 = *((char **)v22 + 2);
    if ( !v16 )
      break;
    v23 = v22;
    v22 = *((char **)v22 + 2);
    if ( *((_QWORD *)v16 + 5) )
      goto LABEL_29;
  }
  v23 = v22;
LABEL_31:
  if ( v62 != v23 )
  {
    v30 = *((_QWORD *)v23 + 5);
    if ( v24 )
    {
      if ( !v30 )
      {
        if ( *s2 )
        {
          v59 = *((_DWORD *)v14 + 24);
          goto LABEL_36;
        }
LABEL_83:
        sub_365330();
      }
    }
    else
    {
      if ( !v30 )
        goto LABEL_83;
      s2 = (char *)haystack;
    }
    v13 = s2;
    if ( !strcmp(*((const char **)v23 + 4), s2) )
      goto LABEL_83;
  }
LABEL_40:
  v59 = *((_DWORD *)v14 + 24);
  if ( v24 )
  {
LABEL_36:
    v31 = (char *)qalloc_or_throw(v24, v13, v15, v16);
    memcpy(v31, src, v24);
  }
  else
  {
    v31 = nullptr;
  }
  v32 = operator new(0x40u);
  *(_QWORD *)(v32 + 32) = v31;
  v33 = v23;
  *(__m128i *)(v32 + 40) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
  v34 = v59;
  v60 = (char *)v32;
  *(_DWORD *)(v32 + 56) = v34;
  v35 = sub_3D8410(v14 + 5, v23, v32 + 32);
  v37 = v60;
  if ( v36 )
  {
    if ( !v35 && (char *)v36 != v62 )
    {
      v56 = haystack;
      if ( *(_QWORD *)(v36 + 40) )
        v56 = *(const char **)(v36 + 32);
      if ( !v24 )
        v31 = (char *)haystack;
      strcmp(v31, v56);
      v37 = v60;
    }
    v33 = v37;
    std::_Rb_tree_insert_and_rebalance();
    ++v14[10];
LABEL_46:
    v38 = n[0];
    v39 = nullptr;
    if ( !n[0] )
      goto LABEL_47;
LABEL_73:
    v39 = (void *)qalloc_or_throw(v38, v33);
    memcpy(v39, src, v38);
    goto LABEL_47;
  }
  if ( !v60 )
    goto LABEL_46;
  if ( v31 )
  {
    *((_QWORD *)v60 + 5) = 0;
    qfree(v31);
    v37 = v60;
  }
  v33 = (const char *)&dword_40;
  v39 = nullptr;
  operator delete(v37, 0x40u);
  v38 = n[0];
  if ( n[0] )
    goto LABEL_73;
LABEL_47:
  v40 = v14[12];
  v41 = v14[11];
  if ( v14[13] < (unsigned __int64)(v40 + 1) )
  {
    v55 = qvector_reserve(v14 + 11, v41, v40 + 1, 24);
    v14[11] = v55;
    v40 = v14[12];
    v41 = v55;
  }
  v42 = v41 + 24 * v40;
  *(_QWORD *)v42 = v39;
  *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
  ++v14[12];
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  dirtree_link(**a1, s, 1);
  v43 = **a1;
  LODWORD(src) = -1;
  BYTE4(src) = 0;
  dirtree_resolve_path(&src, v43, s);
  if ( (_DWORD)src == -1 || BYTE4(src) )
  {
    if ( !under_debugger )
      interr(1974);
    BUG();
  }
  *(_DWORD *)(a2 + 136) = (_DWORD)src;
  return v68 - __readfsqword(0x28u);
}

