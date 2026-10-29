unsigned __int64 __fastcall sub_399B40(_QWORD *a1)
{
  const char *v1; // rsi
  __int64 v2; // rax
  char *v4; // rax
  size_t v5; // rax
  size_t v6; // r12
  __int64 *v7; // rbp
  size_t v8; // rax
  size_t v9; // rbx
  const char *v11; // rax
  const char *v12; // r12
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  size_t v18; // rbx
  __int64 v19; // r12
  const char *v20; // r13
  const char *v21; // rax
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // r12
  size_t v26; // r12
  size_t v27; // r13
  size_t v28; // r8
  size_t v29; // r15
  _BYTE *v30; // rsi
  size_t v31; // r15
  __int64 v32; // r13
  size_t v33; // r8
  char *v34; // rsi
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  size_t v39; // rbx
  char *v40; // r12
  char *v41; // r15
  const char *v42; // rsi
  const char *v43; // rdi
  _BYTE *v44; // r12
  char *v45; // rax
  size_t v46; // rbx
  void *v47; // r12
  char *v48; // rax
  char *v49; // rdi
  _QWORD *v50; // r14
  const void **v51; // r12
  unsigned __int64 v52; // rbx
  size_t v53; // rbx
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r8
  size_t v56; // r9
  _BYTE *v57; // rsi
  size_t v58; // rbx
  size_t v59; // r8
  __int64 v60; // r15
  size_t v61; // r9
  __int64 v62; // rsi
  const void *v63; // rax
  size_t v64; // rax
  void *v65; // rdi
  size_t v66; // r13
  const void *v67; // r13
  void *v68; // rdi
  __int64 i; // rbp
  char *v70; // rdx
  void *v71; // rax
  void *v72; // rdi
  int v73; // eax
  __int64 v74; // rax
  char *v75; // r12
  void *v76; // rdi
  __int64 v77; // rax
  size_t v78; // rax
  size_t v79; // r12
  void *v80; // rdi
  size_t v81; // r13
  void *v82; // r13
  void *v83; // rdi
  __int64 v84; // rax
  void *v85; // rdi
  size_t v86; // r13
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  const char *s1; // [rsp+8h] [rbp-520h]
  char *s1a; // [rsp+8h] [rbp-520h]
  char *s1e; // [rsp+8h] [rbp-520h]
  char *s1d; // [rsp+8h] [rbp-520h]
  char *s1c; // [rsp+8h] [rbp-520h]
  char *s1b; // [rsp+8h] [rbp-520h]
  unsigned __int64 v96; // [rsp+10h] [rbp-518h]
  char *v97; // [rsp+10h] [rbp-518h]
  size_t v98; // [rsp+10h] [rbp-518h]
  unsigned __int64 v99; // [rsp+10h] [rbp-518h]
  size_t v100; // [rsp+18h] [rbp-510h]
  char *v101; // [rsp+20h] [rbp-508h]
  void *dest; // [rsp+40h] [rbp-4E8h] BYREF
  __int128 v103; // [rsp+48h] [rbp-4E0h]
  char *v104; // [rsp+60h] [rbp-4C8h] BYREF
  __int128 v105; // [rsp+68h] [rbp-4C0h]
  void *v106; // [rsp+80h] [rbp-4A8h] BYREF
  size_t v107[3]; // [rsp+88h] [rbp-4A0h]
  void *src; // [rsp+A0h] [rbp-488h] BYREF
  size_t n[3]; // [rsp+A8h] [rbp-480h]
  void *ptr; // [rsp+C0h] [rbp-468h] BYREF
  __int128 v111; // [rsp+C8h] [rbp-460h]
  char s[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v113; // [rsp+4E8h] [rbp-40h]

  v1 = haystack;
  v2 = a1[7];
  v113 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 8) )
    v1 = *(const char **)v2;
  qstrncpy(s, v1, 1024);
  v4 = strchr(s, 58);
  v101 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v5 = strlen(s);
    v6 = v5;
    if ( v5 )
    {
      v65 = (void *)a1[4];
      v66 = v5 + 1;
      if ( a1[6] < v5 + 1 )
      {
        v84 = qvector_reserve(a1 + 4, a1[4], v66, 1);
        a1[4] = v84;
        v65 = (void *)v84;
      }
      a1[5] = v66;
      memmove(v65, s, v6);
      *(_BYTE *)(a1[4] + v6) = 0;
      v7 = (__int64 *)a1[7];
    }
    else
    {
      a1[5] = 0;
      v7 = (__int64 *)a1[7];
    }
    v8 = strlen(v101 + 1);
    v9 = v8;
    if ( v8 )
    {
      v80 = (void *)*v7;
      v81 = v8 + 1;
      if ( v7[2] < v8 + 1 )
      {
        v87 = qvector_reserve(v7, *v7, v8 + 1, 1);
        *v7 = v87;
        v80 = (void *)v87;
      }
      v7[1] = v81;
      memmove(v80, v101 + 1, v9);
      *(_BYTE *)(*v7 + v9) = 0;
    }
    else
    {
      v7[1] = 0;
    }
    return v113 - __readfsqword(0x28u);
  }
  dest = nullptr;
  v103 = 0;
  v11 = (const char *)qstrtok(s, " ");
  v12 = v11;
  if ( a1[8] != 1 )
  {
    v104 = nullptr;
    v105 = 0;
    if ( !v11 )
      goto LABEL_47;
    v13 = strlen(v11);
    v14 = v13 + 1;
    v15 = v13;
    v104 = (char *)qvector_reserve(&v104, 0, v13 + 1, 1);
    *(_QWORD *)&v105 = v14;
    memmove(v104, v12, v15);
    v104[v15] = 0;
    while ( 1 )
    {
      v96 = v105;
      if ( !(_QWORD)v105 )
        break;
      s1 = v104;
      v73 = strlen(v104);
      v17 = a1[7];
      v18 = v73;
      v74 = a1[8];
      v19 = v17 + 56 * v74;
      if ( 56 * v74 )
        goto LABEL_14;
LABEL_21:
      if ( v96 == 1 )
        goto LABEL_22;
      v75 = v104;
      v76 = dest;
      if ( *((_QWORD *)&v103 + 1) < v96 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v96, 1);
        v76 = dest;
      }
      *(_QWORD *)&v103 = v96;
      memmove(v76, v75, v96 - 1);
      *((char *)dest + v96 - 1) = 0;
LABEL_23:
      v21 = (const char *)qstrtok(nullptr, " ");
      v22 = v21;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v21 )
      {
        v23 = strlen(v21);
        v24 = v23 + 1;
        v25 = v23;
        src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
        n[0] = v24;
        memmove(src, v22, v25);
        *((_BYTE *)src + v25) = 0;
      }
      *(_OWORD *)v107 = 0;
      v106 = nullptr;
      v106 = (void *)qvector_reserve(&v106, 0, 2, 1);
      v107[0] = 2;
      *(_BYTE *)v106 = 32;
      *((_BYTE *)v106 + 1) = 0;
      v26 = v107[0];
      ptr = nullptr;
      v111 = 0;
      if ( v107[0] )
      {
        ptr = (void *)qalloc_or_throw(v107[0]);
        *((_QWORD *)&v111 + 1) = v26;
        memcpy(ptr, v106, v26);
        *(_QWORD *)&v111 = v26;
        if ( !n[0] )
          goto LABEL_32;
        v29 = n[0] - 1;
        if ( n[0] == 1 )
          goto LABEL_32;
        --v26;
        v28 = n[0] - 1 + v26;
        v27 = n[0] + v26;
LABEL_29:
        v30 = ptr;
        if ( *((_QWORD *)&v111 + 1) < v27 )
        {
          s1b = (char *)v28;
          ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
          v28 = (size_t)s1b;
          v30 = ptr;
        }
        *(_QWORD *)&v111 = v27;
        v30[v28] = 0;
        memcpy((char *)ptr + v26, src, v29);
        v26 = v111;
        if ( (_QWORD)v111 )
        {
LABEL_32:
          v31 = v26 - 1;
          if ( v26 != 1 )
          {
            v32 = v105;
            v33 = v26 - 1;
            if ( (_QWORD)v105 )
            {
              v32 = v105 - 1;
              v33 = v31 + v105 - 1;
              v26 += v105 - 1;
            }
            v34 = v104;
            if ( *((_QWORD *)&v105 + 1) < v26 )
            {
              s1c = (char *)v33;
              v104 = (char *)qvector_reserve(&v104, v104, v26, 1);
              v33 = (size_t)s1c;
              v34 = v104;
            }
            *(_QWORD *)&v105 = v26;
            v34[v33] = 0;
            memcpy(&v104[v32], ptr, v31);
          }
        }
LABEL_38:
        if ( ptr )
        {
          *(_QWORD *)&v111 = 0;
          qfree(ptr);
        }
        goto LABEL_40;
      }
      v27 = n[0];
      if ( n[0] )
      {
        v28 = n[0] - 1;
        if ( n[0] != 1 )
        {
          v29 = n[0] - 1;
          goto LABEL_29;
        }
        goto LABEL_38;
      }
LABEL_40:
      if ( v106 )
      {
        v107[0] = 0;
        qfree(v106);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( !v22 )
        goto LABEL_45;
    }
    v16 = a1[8];
    v17 = a1[7];
    s1 = haystack;
    v18 = 0;
    v19 = v17 + 56 * v16;
    if ( 56 * v16 )
    {
LABEL_14:
      while ( 1 )
      {
        if ( !*(_BYTE *)(v17 + 48) )
        {
          v20 = haystack;
          if ( *(_QWORD *)(v17 + 8) )
            v20 = *(const char **)v17;
          if ( strncmp(s1, v20, v18) || (v20[v18] & 0xDF) != 0 )
            break;
        }
        v17 += 56;
        if ( v17 == v19 )
        {
          if ( !v96 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
LABEL_45:
      if ( v104 )
      {
        *(_QWORD *)&v105 = 0;
        qfree(v104);
      }
LABEL_47:
      v35 = v103;
LABEL_48:
      if ( v35 > 1 )
      {
        v82 = dest;
        v83 = (void *)a1[4];
        if ( a1[6] < v35 )
        {
          v89 = qvector_reserve(a1 + 4, a1[4], v35, 1);
          a1[4] = v89;
          v83 = (void *)v89;
        }
        a1[5] = v35;
        memmove(v83, v82, v35 - 1);
        *(_BYTE *)(a1[4] + v35 - 1) = 0;
        v72 = dest;
        if ( dest )
          goto LABEL_116;
        return v113 - __readfsqword(0x28u);
      }
      goto LABEL_49;
    }
LABEL_22:
    *(_QWORD *)&v103 = 0;
    goto LABEL_23;
  }
  v78 = strlen(s);
  v79 = v78;
  if ( v78 )
  {
    v85 = dest;
    v86 = v78 + 1;
    if ( *((_QWORD *)&v103 + 1) < v78 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v86, 1);
      v85 = dest;
    }
    *(_QWORD *)&v103 = v86;
    memmove(v85, s, v79);
    *((_BYTE *)dest + v79) = 0;
    v35 = v103;
    goto LABEL_48;
  }
  *(_QWORD *)&v103 = 0;
LABEL_49:
  v36 = a1[8];
  v37 = a1[7];
  v106 = nullptr;
  *(_OWORD *)v107 = 0;
  v38 = v37;
  if ( !(56 * v36) )
  {
    v50 = a1 + 4;
    v51 = (const void **)&qword_18;
LABEL_77:
    v52 = *((_QWORD *)v101 + 1);
    if ( v52 > 1 )
    {
      v67 = *(const void **)v101;
      v68 = (void *)a1[4];
      if ( a1[6] < v52 )
      {
        v88 = qvector_reserve(v50, a1[4], *((_QWORD *)v101 + 1), 1);
        a1[4] = v88;
        v68 = (void *)v88;
      }
      a1[5] = v52;
      memmove(v68, v67, v52 - 1);
      *(_BYTE *)(a1[4] + v52 - 1) = 0;
    }
    else
    {
      a1[5] = 0;
    }
    v53 = v107[0];
    v49 = (char *)v106;
    if ( v51 == (const void **)((char *)v106 + 24 * v107[0]) )
    {
LABEL_126:
      if ( v49 )
        goto LABEL_109;
      goto LABEL_115;
    }
LABEL_98:
    while ( 1 )
    {
      *(_OWORD *)n = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 2, 1);
      n[0] = 2;
      *(_BYTE *)src = 44;
      *((_BYTE *)src + 1) = 0;
      v58 = n[0];
      ptr = nullptr;
      v111 = 0;
      if ( n[0] )
        break;
      v54 = (unsigned __int64)v51[1];
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v54 != 1 )
        {
          v56 = v54 - 1;
          goto LABEL_84;
        }
LABEL_93:
        if ( ptr )
        {
          *(_QWORD *)&v111 = 0;
          qfree(ptr);
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      v53 = v107[0];
      v49 = (char *)v106;
      v51 += 3;
      if ( v51 == (const void **)((char *)v106 + 24 * v107[0]) )
        goto LABEL_126;
    }
    ptr = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v111 + 1) = v58;
    memcpy(ptr, src, v58);
    *(_QWORD *)&v111 = v58;
    v63 = v51[1];
    if ( !v63 )
      goto LABEL_87;
    v64 = (size_t)v63 - 1;
    v56 = v64;
    if ( !v64 )
      goto LABEL_87;
    --v58;
    v55 = v64 + v58;
    v54 = v64 + v58 + 1;
LABEL_84:
    v57 = ptr;
    if ( *((_QWORD *)&v111 + 1) < v54 )
    {
      v99 = v55;
      s1d = (char *)v56;
      ptr = (void *)qvector_reserve(&ptr, ptr, v54, 1);
      v55 = v99;
      v57 = ptr;
      v56 = (size_t)s1d;
    }
    *(_QWORD *)&v111 = v54;
    v57[v55] = 0;
    memcpy((char *)ptr + v58, *v51, v56);
    v58 = v111;
    if ( (_QWORD)v111 )
    {
LABEL_87:
      v59 = v58 - 1;
      if ( v58 != 1 )
      {
        v60 = a1[5];
        v61 = v58 - 1;
        if ( v60 )
        {
          --v60;
          v61 = v59 + v60;
          v58 += v60;
        }
        v62 = a1[4];
        if ( a1[6] < v58 )
        {
          v98 = v61;
          s1e = (char *)v59;
          v77 = qvector_reserve(v50, v62, v58, 1);
          a1[4] = v77;
          v61 = v98;
          v62 = v77;
          v59 = (size_t)s1e;
        }
        a1[5] = v58;
        *(_BYTE *)(v62 + v61) = 0;
        memcpy((void *)(v60 + a1[4]), ptr, v59);
      }
    }
    goto LABEL_93;
  }
  do
  {
    if ( *(_BYTE *)(v38 + 48) )
      goto LABEL_75;
    if ( !*(_QWORD *)(v38 + 8)
      || (v44 = *(_BYTE **)v38, (v45 = strchr(*(const char **)v38, 32)) == nullptr)
      || (v46 = v45 - v44, v45 - v44 == -1) )
    {
      ptr = nullptr;
      v111 = 0;
      v39 = *(_QWORD *)(v38 + 8);
      if ( v39 )
      {
        ptr = (void *)qalloc_or_throw(*(_QWORD *)(v38 + 8));
        *((_QWORD *)&v111 + 1) = v39;
        memcpy(ptr, *(const void **)v38, v39);
        *(_QWORD *)&v111 = v39;
        v100 = v107[0];
        v97 = (char *)v106;
        v40 = (char *)v106 + 24 * v107[0];
        if ( 24 * v107[0] )
          goto LABEL_55;
LABEL_68:
        v47 = (void *)qalloc_or_throw(v39);
        memcpy(v47, ptr, v39);
        v100 = v107[0];
        v97 = (char *)v106;
        goto LABEL_69;
      }
LABEL_53:
      v97 = (char *)v106;
      v39 = 24 * v107[0];
      v100 = v107[0];
      v40 = (char *)v106 + 24 * v107[0];
      if ( !(24 * v107[0]) )
        goto LABEL_117;
      v39 = 0;
LABEL_55:
      v41 = v97;
      s1a = (char *)ptr;
      while ( *((_QWORD *)v41 + 1) )
      {
        v42 = *(const char **)v41;
        v43 = haystack;
        if ( v39 )
          goto LABEL_62;
LABEL_57:
        if ( !strcmp(v43, v42) )
          goto LABEL_72;
        v41 += 24;
        if ( v41 == v40 )
          goto LABEL_67;
      }
      if ( !v39 )
        goto LABEL_72;
      v42 = haystack;
LABEL_62:
      v43 = s1a;
      goto LABEL_57;
    }
    ptr = nullptr;
    v111 = 0;
    if ( !v46 )
      goto LABEL_53;
    ptr = (void *)qvector_reserve(&ptr, 0, v46 + 1, 1);
    *(_QWORD *)&v111 = v46 + 1;
    memmove(ptr, v44, v46);
    *((_BYTE *)ptr + v46) = 0;
    v39 = v111;
    v100 = v107[0];
    v97 = (char *)v106;
    v40 = (char *)v106 + 24 * v107[0];
    if ( 24 * v107[0] )
      goto LABEL_55;
LABEL_67:
    if ( v39 )
      goto LABEL_68;
LABEL_117:
    v47 = nullptr;
LABEL_69:
    if ( v107[1] < v100 + 1 )
    {
      v97 = (char *)qvector_reserve(&v106, v97, v100 + 1, 24);
      v106 = v97;
      v100 = v107[0];
    }
    v48 = &v97[24 * v100];
    *(_QWORD *)v48 = v47;
    *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
    ++v107[0];
    s1a = (char *)ptr;
LABEL_72:
    if ( s1a )
    {
      *(_QWORD *)&v111 = 0;
      qfree(s1a);
    }
    v37 = a1[7];
    v36 = a1[8];
LABEL_75:
    v38 += 56;
  }
  while ( v38 != v37 + 56 * v36 );
  v49 = (char *)v106;
  v50 = a1 + 4;
  v101 = (char *)v106;
  v51 = (const void **)((char *)v106 + 24);
  if ( a1 + 4 != v106 )
    goto LABEL_77;
  v53 = v107[0];
  if ( 24 * v107[0] != 24 )
    goto LABEL_98;
LABEL_109:
  if ( v53 )
  {
    for ( i = 0; i != v53; ++i )
    {
      v70 = &v49[24 * i];
      v71 = *(void **)v70;
      if ( *(_QWORD *)v70 )
      {
        *((_QWORD *)v70 + 1) = 0;
        qfree(v71);
        v49 = (char *)v106;
      }
    }
  }
  v107[0] = 0;
  qfree(v49);
LABEL_115:
  v72 = dest;
  if ( dest )
  {
LABEL_116:
    *(_QWORD *)&v103 = 0;
    qfree(v72);
  }
  return v113 - __readfsqword(0x28u);
}
