__int64 __fastcall sub_893780(_QWORD *a1, unsigned __int64 p_ptr, const char *a3, _QWORD *a4, int a5, int a6)
{
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // rbp
  void *v10; // rax
  _QWORD *v11; // rbx
  size_t v12; // r12
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  const char *v15; // rdi
  _QWORD *v16; // r13
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  int v22; // eax
  const char *v23; // rbp
  __int64 i; // r12
  size_t v25; // r13
  const char *v26; // rcx
  _QWORD *v27; // r12
  _QWORD *v28; // r14
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  const char *v34; // rdi
  __int64 v35; // rax
  size_t v36; // r13
  _QWORD *v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  const char *v40; // rsi
  const char *v41; // rdi
  void *v42; // rdi
  void *v43; // rax
  void *v44; // rsi
  __int64 v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // eax
  char *v58; // rdi
  unsigned int *v59; // rax
  unsigned int v60; // r12d
  unsigned int v61; // ebx
  unsigned int *v62; // r13
  unsigned int v63; // eax
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  const char *v68; // [rsp+0h] [rbp-C8h]
  const char *v69; // [rsp+0h] [rbp-C8h]
  int v70; // [rsp+0h] [rbp-C8h]
  _QWORD *v71; // [rsp+8h] [rbp-C0h]
  char *s2; // [rsp+10h] [rbp-B8h]
  char *s2a; // [rsp+10h] [rbp-B8h]
  char *v74; // [rsp+18h] [rbp-B0h]
  int v75; // [rsp+18h] [rbp-B0h]
  char *s1; // [rsp+20h] [rbp-A8h]
  __int64 s1a; // [rsp+20h] [rbp-A8h]
  const char *v78; // [rsp+28h] [rbp-A0h]
  __int64 v79; // [rsp+30h] [rbp-98h]
  void *v80; // [rsp+38h] [rbp-90h] BYREF
  void *src; // [rsp+40h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-80h]
  int v83; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int128 v85; // [rsp+68h] [rbp-60h]
  __int64 v86; // [rsp+78h] [rbp-50h]
  int v87; // [rsp+80h] [rbp-48h]
  unsigned __int64 v88; // [rsp+88h] [rbp-40h]

  v78 = a3;
  v88 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( p_ptr )
  {
    v7 = strlen((const char *)p_ptr);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(&src, 0, v7 + 1, 1);
    n[0] = v8;
    src = v10;
    memmove(v10, (const void *)p_ptr, v9);
    *((_BYTE *)src + v9) = 0;
    v11 = (_QWORD *)a1[36];
    v71 = a1 + 35;
    v12 = n[0];
    v13 = a1 + 35;
    if ( !v11 )
      goto LABEL_85;
  }
  else
  {
    v11 = (_QWORD *)a1[36];
    v12 = 0;
    v71 = a1 + 35;
    if ( !v11 )
    {
LABEL_38:
      v22 = 1;
      v23 = haystack;
      goto LABEL_28;
    }
  }
  a3 = (const char *)src;
  v13 = v71;
  v14 = v11;
  s2 = (char *)src;
  v74 = (char *)src;
  if ( !v12 )
    a3 = haystack;
  s1 = (char *)haystack;
  v68 = a3;
  while ( 1 )
  {
    v18 = v14[5];
    if ( !v12 )
      break;
    if ( v18 )
      goto LABEL_15;
    p_ptr = (unsigned __int64)s2;
    v15 = haystack;
    v16 = v14;
LABEL_8:
    v17 = strcmp(v15, (const char *)p_ptr);
    a4 = (_QWORD *)v14[2];
    v14 = (_QWORD *)v14[3];
    if ( v17 >= 0 )
    {
      v13 = v16;
      v14 = a4;
    }
    if ( !v14 )
      goto LABEL_17;
  }
  if ( v18 )
  {
LABEL_15:
    v15 = (const char *)v14[4];
    p_ptr = (unsigned __int64)v68;
    v16 = v14;
    goto LABEL_8;
  }
  while ( 1 )
  {
    a4 = (_QWORD *)v14[2];
    if ( !a4 )
      break;
    v13 = v14;
    v14 = (_QWORD *)v14[2];
    if ( a4[5] )
      goto LABEL_15;
  }
  v13 = v14;
LABEL_17:
  if ( v71 == v13 )
  {
LABEL_85:
    v71 = v13;
    if ( v12 )
    {
      s2 = (char *)src;
      goto LABEL_36;
    }
    goto LABEL_38;
  }
  if ( !v13[5] )
  {
    p_ptr = (unsigned __int64)haystack;
    if ( !v12 )
      goto LABEL_20;
LABEL_35:
    if ( strcmp(s2, (const char *)p_ptr) < 0 )
    {
LABEL_36:
      v23 = s2;
      p_ptr = (unsigned __int64)s2;
      v22 = strcmp("Adlam", s2);
      goto LABEL_28;
    }
LABEL_20:
    v19 = v13[7];
    v20 = 0;
    if ( v19 != -1 )
    {
      if ( v19 >= a1[32] )
      {
        if ( !under_debugger )
          interr(1472);
        BUG();
      }
      v20 = *(_QWORD *)(a1[31] + 8 * v19);
    }
    goto LABEL_23;
  }
  p_ptr = v13[4];
  if ( v12 )
    goto LABEL_35;
  v22 = 1;
  v23 = haystack;
  if ( !*(_BYTE *)p_ptr )
    goto LABEL_20;
LABEL_28:
  for ( i = 1; ; v22 = strcmp((const char *)*(&off_2B13460 + i), v23) )
  {
    if ( !v22 )
    {
      p_ptr = (unsigned int)i;
      ptr = nullptr;
      v86 = 0;
      v87 = -1;
      v85 = 0;
      if ( !(unsigned __int8)sub_8932E0((int)&ptr, i, (int)a3, (int)a4, a5, a6) )
      {
        v20 = (__int64)ptr;
        if ( ptr )
        {
LABEL_34:
          *(_QWORD *)&v85 = 0;
          v20 = 0;
          qfree(ptr);
          v11 = (_QWORD *)a1[36];
          s1a = -1;
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      v52 = qalloc_or_throw(40, (const char *)(unsigned int)i);
      *(_QWORD *)v52 = 0;
      v20 = v52;
      *(_QWORD *)(v52 + 24) = 0;
      *(_DWORD *)(v52 + 32) = -1;
      *(_OWORD *)(v52 + 8) = 0;
      v55 = a1[32];
      p_ptr = a1[31];
      v56 = v55 + 1;
      if ( a1[33] < (unsigned __int64)(v55 + 1) )
      {
        v67 = qvector_reserve(a1 + 31, p_ptr, v56, 8);
        a1[31] = v67;
        p_ptr = v67;
        v55 = a1[32];
      }
      *(_QWORD *)(p_ptr + 8 * v55) = v20;
      v57 = v85;
      ++a1[32];
      v58 = (char *)ptr;
      v75 = v57;
      if ( v57 )
      {
        v70 = 0;
        s2a = (char *)&v80;
        do
        {
          v59 = (unsigned int *)&v58[8 * v70];
          v60 = *v59;
          v61 = v59[1];
          if ( *v59 < v61 )
          {
            v62 = &dword_23AA9E0[v60];
            while ( 1 )
            {
              if ( v60 <= 0x7F )
                v63 = *v62;
              else
                v63 = sub_892F90(v60);
              v64 = HIWORD(v63);
              if ( (unsigned __int8)v64 <= 0xBu )
              {
                v65 = 2688;
                if ( _bittest64(&v65, v64) )
                {
                  p_ptr = (unsigned __int64)s2a;
                  LODWORD(v80) = v60;
                  HIDWORD(v80) = v60 + 1;
                  rangeset_t_add(
                    v20,
                    (int)s2a,
                    v56,
                    2688,
                    v53,
                    v54,
                    v70,
                    v71,
                    (__int64)s2a,
                    v75,
                    (int)s1,
                    (int)v78,
                    v79);
                }
              }
              ++v62;
              if ( v60 + 1 >= v61 )
                break;
              ++v60;
            }
            v58 = (char *)ptr;
          }
          ++v70;
        }
        while ( v75 != v70 );
      }
      if ( v58 )
      {
        *(_QWORD *)&v85 = 0;
        qfree(v58);
      }
      goto LABEL_91;
    }
    if ( ++i == 328 )
      break;
    p_ptr = (unsigned __int64)v23;
  }
  if ( !v78 )
  {
    s1a = -1;
    v20 = 0;
    goto LABEL_40;
  }
  p_ptr = (unsigned __int64)v23;
  ptr = nullptr;
  v86 = 0;
  v87 = -1;
  v85 = 0;
  if ( ((unsigned int (__fastcall *)(void **, const char *, const char *, _QWORD *))v78)(&ptr, v23, a3, a4) )
  {
    v20 = (__int64)ptr;
    if ( ptr )
      goto LABEL_34;
LABEL_39:
    s1a = -1;
    v11 = (_QWORD *)a1[36];
    goto LABEL_40;
  }
  v45 = qalloc_or_throw(40, v23);
  *(_QWORD *)v45 = 0;
  v20 = v45;
  *(_QWORD *)(v45 + 24) = 0;
  *(_DWORD *)(v45 + 32) = -1;
  *(_OWORD *)(v45 + 8) = 0;
  v49 = a1[32];
  v50 = a1[31];
  v51 = v49 + 1;
  if ( a1[33] < (unsigned __int64)(v49 + 1) )
  {
    v66 = qvector_reserve(a1 + 31, v50, v51, 8);
    a1[31] = v66;
    v50 = v66;
    v49 = a1[32];
  }
  *(_QWORD *)(v50 + 8 * v49) = v20;
  p_ptr = (unsigned __int64)&ptr;
  ++a1[32];
  rangeset_t_swap(
    v20,
    (int)&ptr,
    v51,
    v46,
    v47,
    v48,
    (int)v68,
    (int)v71,
    (int)s2,
    (int)v74,
    (int)s1,
    (int)v78,
    v79,
    v80,
    (__int64)src,
    n[0],
    n[1],
    v83,
    (__int64)ptr);
  if ( ptr )
  {
    *(_QWORD *)&v85 = 0;
    qfree(ptr);
  }
LABEL_91:
  v11 = (_QWORD *)a1[36];
  if ( v20 )
    s1a = a1[32] - 1LL;
  else
    s1a = -1;
LABEL_40:
  if ( !v11 )
  {
    v27 = v71;
    goto LABEL_61;
  }
  v25 = n[0];
  v26 = (const char *)src;
  v27 = v71;
  v74 = (char *)src;
  if ( !n[0] )
    v26 = haystack;
  v69 = v26;
  while ( 2 )
  {
    v32 = v11[5];
    if ( v25 )
    {
      v28 = v11;
      if ( !v32 )
      {
        p_ptr = (unsigned __int64)v74;
        v29 = haystack;
        goto LABEL_46;
      }
LABEL_54:
      v29 = (const char *)v11[4];
      p_ptr = (unsigned __int64)v69;
LABEL_46:
      v30 = strcmp(v29, (const char *)p_ptr);
      v31 = (_QWORD *)v11[2];
      v11 = (_QWORD *)v11[3];
      if ( v30 >= 0 )
      {
        v27 = v28;
        v11 = v31;
      }
      if ( !v11 )
        goto LABEL_56;
      continue;
    }
    break;
  }
  if ( v32 )
  {
LABEL_53:
    v28 = v11;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v33 = v11[2];
    if ( !v33 )
      break;
    v27 = v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_53;
  }
  v27 = v11;
LABEL_56:
  if ( v27 == v71 )
    goto LABEL_61;
  if ( v27[5] )
  {
    p_ptr = v27[4];
    v34 = haystack;
    if ( v25 )
      goto LABEL_59;
LABEL_60:
    if ( strcmp(v34, (const char *)p_ptr) < 0 )
    {
LABEL_61:
      v35 = operator new(0x40u);
      v36 = n[0];
      *(_QWORD *)(v35 + 32) = 0;
      v37 = (_QWORD *)v35;
      *(_OWORD *)(v35 + 40) = 0;
      if ( v36 )
      {
        v43 = (void *)qalloc_or_throw(v36, (const char *)p_ptr);
        v37[4] = v43;
        v44 = src;
        v37[6] = v36;
        memcpy(v43, v44, v36);
        v37[5] = v36;
      }
      v37[7] = 0;
      v38 = sub_8935C0(a1 + 34, v27, (__int64)(v37 + 4));
      v27 = v38;
      if ( v39 )
      {
        if ( !v38 && v71 != (_QWORD *)v39 )
        {
          v40 = haystack;
          if ( *(_QWORD *)(v39 + 40) )
            v40 = *(const char **)(v39 + 32);
          v41 = haystack;
          if ( v37[5] )
            v41 = (const char *)v37[4];
          strcmp(v41, v40);
        }
        v27 = v37;
        std::_Rb_tree_insert_and_rebalance();
        ++a1[39];
      }
      else if ( v37 )
      {
        v42 = (void *)v37[4];
        if ( v42 )
        {
          v37[5] = 0;
          qfree(v42);
        }
        operator delete(v37, 0x40u);
      }
      v74 = (char *)src;
    }
  }
  else
  {
    p_ptr = (unsigned __int64)haystack;
    if ( v25 )
    {
LABEL_59:
      v34 = v74;
      goto LABEL_60;
    }
  }
  v27[7] = s1a;
LABEL_23:
  if ( v74 )
  {
    n[0] = 0;
    qfree(v74);
  }
  return v20;
}

