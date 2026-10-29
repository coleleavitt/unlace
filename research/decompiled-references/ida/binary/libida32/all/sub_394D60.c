unsigned __int64 __fastcall sub_394D60(_QWORD *a1)
{
  const char *v1; // rsi
  __int64 v2; // rax
  char *v4; // rax
  size_t v5; // rax
  size_t v6; // r12
  __int64 *v7; // rbp
  size_t v8; // rax
  size_t v9; // rbx
  const char *v11; // rsi
  const char *v12; // rax
  size_t v13; // r8
  __int64 v14; // r9
  const char *v15; // r12
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r15
  size_t v21; // rbx
  __int64 v22; // r12
  const char *v23; // r13
  const char *v24; // rax
  const char *v25; // rbx
  size_t v26; // rax
  size_t v27; // r15
  size_t v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  size_t v31; // r12
  size_t v32; // r13
  size_t v33; // r15
  _BYTE *v34; // rsi
  size_t v35; // r15
  __int64 v36; // r13
  size_t v37; // r8
  char *v38; // rsi
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r14
  size_t v43; // rbx
  char *v44; // r12
  char *v45; // r15
  const char *v46; // rdi
  __int64 v47; // rdx
  void *v48; // rcx
  const char *v49; // r12
  char *v50; // rax
  size_t v51; // rbx
  void *v52; // rax
  void *v53; // r12
  char *v54; // rax
  char *v55; // rdi
  _QWORD *v56; // r14
  const void **v57; // r12
  unsigned __int64 v58; // rbx
  size_t v59; // rbx
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // r8
  size_t v62; // r9
  _BYTE *v63; // rsi
  size_t v64; // rbx
  size_t v65; // r8
  __int64 v66; // r15
  size_t v67; // r9
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  const void *v73; // rax
  size_t v74; // rax
  void *v75; // rdi
  size_t v76; // r13
  const void *v77; // r13
  void *v78; // rdi
  __int64 i; // rbp
  char *v80; // rdx
  void *v81; // rax
  void *v82; // rdi
  int v83; // eax
  __int64 v84; // rax
  void *v85; // rax
  char *v86; // r12
  void *v87; // rdi
  __int64 v88; // rax
  size_t v89; // rax
  size_t v90; // r12
  void *v91; // rdi
  size_t v92; // r13
  void *v93; // r13
  void *v94; // rdi
  __int64 v95; // rax
  void *v96; // rdi
  size_t v97; // r13
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  const char *s1; // [rsp+8h] [rbp-520h]
  char *s1a; // [rsp+8h] [rbp-520h]
  char *s1e; // [rsp+8h] [rbp-520h]
  char *s1d; // [rsp+8h] [rbp-520h]
  char *s1c; // [rsp+8h] [rbp-520h]
  char *s1b; // [rsp+8h] [rbp-520h]
  unsigned __int64 v107; // [rsp+10h] [rbp-518h]
  char *v108; // [rsp+10h] [rbp-518h]
  size_t v109; // [rsp+10h] [rbp-518h]
  unsigned __int64 v110; // [rsp+10h] [rbp-518h]
  size_t v111; // [rsp+18h] [rbp-510h]
  char *v112; // [rsp+20h] [rbp-508h]
  void *dest; // [rsp+40h] [rbp-4E8h] BYREF
  __int128 v114; // [rsp+48h] [rbp-4E0h]
  char *v115; // [rsp+60h] [rbp-4C8h] BYREF
  __int128 v116; // [rsp+68h] [rbp-4C0h]
  void *v117; // [rsp+80h] [rbp-4A8h] BYREF
  size_t v118[3]; // [rsp+88h] [rbp-4A0h]
  void *src; // [rsp+A0h] [rbp-488h] BYREF
  size_t n[3]; // [rsp+A8h] [rbp-480h]
  void *ptr; // [rsp+C0h] [rbp-468h] BYREF
  __int128 v122; // [rsp+C8h] [rbp-460h]
  char s[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v124; // [rsp+4E8h] [rbp-40h]

  v1 = haystack;
  v2 = a1[7];
  v124 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 8) )
    v1 = *(const char **)v2;
  qstrncpy(s, v1, 1024);
  v4 = strchr(s, 58);
  v112 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v5 = strlen(s);
    v6 = v5;
    if ( v5 )
    {
      v75 = (void *)a1[4];
      v76 = v5 + 1;
      if ( a1[6] < v5 + 1 )
      {
        v95 = qvector_reserve(a1 + 4, a1[4], v76, 1);
        a1[4] = v95;
        v75 = (void *)v95;
      }
      a1[5] = v76;
      memmove(v75, s, v6);
      *(_BYTE *)(a1[4] + v6) = 0;
      v7 = (__int64 *)a1[7];
    }
    else
    {
      a1[5] = 0;
      v7 = (__int64 *)a1[7];
    }
    v8 = strlen(v112 + 1);
    v9 = v8;
    if ( v8 )
    {
      v91 = (void *)*v7;
      v92 = v8 + 1;
      if ( v7[2] < v8 + 1 )
      {
        v98 = qvector_reserve(v7, *v7, v8 + 1, 1);
        *v7 = v98;
        v91 = (void *)v98;
      }
      v7[1] = v92;
      memmove(v91, v112 + 1, v9);
      *(_BYTE *)(*v7 + v9) = 0;
    }
    else
    {
      v7[1] = 0;
    }
    return v124 - __readfsqword(0x28u);
  }
  v11 = " ";
  dest = nullptr;
  v114 = 0;
  v12 = (const char *)qstrtok(s, " ");
  v15 = v12;
  if ( a1[8] != 1 )
  {
    v115 = nullptr;
    v116 = 0;
    if ( !v12 )
      goto LABEL_47;
    v16 = strlen(v12);
    v17 = v16 + 1;
    v18 = v16;
    v115 = (char *)qvector_reserve(&v115, 0, v16 + 1, 1);
    *(_QWORD *)&v116 = v17;
    memmove(v115, v15, v18);
    v115[v18] = 0;
    while ( 1 )
    {
      v107 = v116;
      if ( !(_QWORD)v116 )
        break;
      s1 = v115;
      v83 = strlen(v115);
      v20 = a1[7];
      v21 = v83;
      v84 = a1[8];
      v22 = v20 + 56 * v84;
      if ( 56 * v84 )
        goto LABEL_14;
LABEL_21:
      if ( v107 == 1 )
        goto LABEL_22;
      v86 = v115;
      v87 = dest;
      if ( *((_QWORD *)&v114 + 1) < v107 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v107, 1);
        v87 = dest;
      }
      *(_QWORD *)&v114 = v107;
      memmove(v87, v86, v107 - 1);
      *((char *)dest + v107 - 1) = 0;
LABEL_23:
      v24 = (const char *)qstrtok(nullptr, " ");
      v25 = v24;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v24 )
      {
        v26 = strlen(v24);
        v27 = v26 + 1;
        v28 = v26;
        src = (void *)qvector_reserve(&src, 0, v26 + 1, 1);
        n[0] = v27;
        memmove(src, v25, v28);
        *((_BYTE *)src + v28) = 0;
      }
      v11 = nullptr;
      *(_OWORD *)v118 = 0;
      v117 = nullptr;
      v117 = (void *)qvector_reserve(&v117, 0, 2, 1);
      v118[0] = 2;
      *(_BYTE *)v117 = 32;
      *((_BYTE *)v117 + 1) = 0;
      v31 = v118[0];
      ptr = nullptr;
      v122 = 0;
      if ( v118[0] )
      {
        v85 = (void *)qalloc_or_throw(v118[0], 0, v29, v30, v13, v14);
        v11 = (const char *)v117;
        ptr = v85;
        *((_QWORD *)&v122 + 1) = v31;
        memcpy(v85, v117, v31);
        *(_QWORD *)&v122 = v31;
        if ( !n[0] )
          goto LABEL_32;
        v33 = n[0] - 1;
        if ( n[0] == 1 )
          goto LABEL_32;
        --v31;
        v13 = n[0] - 1 + v31;
        v32 = n[0] + v31;
LABEL_29:
        v34 = ptr;
        if ( *((_QWORD *)&v122 + 1) < v32 )
        {
          s1b = (char *)v13;
          ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
          v13 = (size_t)s1b;
          v34 = ptr;
        }
        *(_QWORD *)&v122 = v32;
        v34[v13] = 0;
        v11 = (const char *)src;
        memcpy((char *)ptr + v31, src, v33);
        v31 = v122;
        if ( (_QWORD)v122 )
        {
LABEL_32:
          v35 = v31 - 1;
          if ( v31 != 1 )
          {
            v36 = v116;
            v37 = v31 - 1;
            if ( (_QWORD)v116 )
            {
              v36 = v116 - 1;
              v37 = v35 + v116 - 1;
              v31 += v116 - 1;
            }
            v38 = v115;
            if ( *((_QWORD *)&v116 + 1) < v31 )
            {
              s1c = (char *)v37;
              v115 = (char *)qvector_reserve(&v115, v115, v31, 1);
              v37 = (size_t)s1c;
              v38 = v115;
            }
            *(_QWORD *)&v116 = v31;
            v38[v37] = 0;
            v11 = (const char *)ptr;
            memcpy(&v115[v36], ptr, v35);
          }
        }
LABEL_38:
        if ( ptr )
        {
          *(_QWORD *)&v122 = 0;
          qfree(ptr);
        }
        goto LABEL_40;
      }
      v32 = n[0];
      if ( n[0] )
      {
        v13 = n[0] - 1;
        if ( n[0] != 1 )
        {
          v33 = n[0] - 1;
          goto LABEL_29;
        }
        goto LABEL_38;
      }
LABEL_40:
      if ( v117 )
      {
        v118[0] = 0;
        qfree(v117);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( !v25 )
        goto LABEL_45;
    }
    v19 = a1[8];
    v20 = a1[7];
    s1 = haystack;
    v21 = 0;
    v22 = v20 + 56 * v19;
    if ( 56 * v19 )
    {
LABEL_14:
      while ( 1 )
      {
        if ( !*(_BYTE *)(v20 + 48) )
        {
          v23 = haystack;
          if ( *(_QWORD *)(v20 + 8) )
            v23 = *(const char **)v20;
          v11 = v23;
          if ( strncmp(s1, v23, v21) || (v23[v21] & 0xDF) != 0 )
            break;
        }
        v20 += 56;
        if ( v20 == v22 )
        {
          if ( !v107 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
LABEL_45:
      if ( v115 )
      {
        *(_QWORD *)&v116 = 0;
        qfree(v115);
      }
LABEL_47:
      v39 = v114;
LABEL_48:
      if ( v39 > 1 )
      {
        v93 = dest;
        v94 = (void *)a1[4];
        if ( a1[6] < v39 )
        {
          v100 = qvector_reserve(a1 + 4, a1[4], v39, 1);
          a1[4] = v100;
          v94 = (void *)v100;
        }
        a1[5] = v39;
        memmove(v94, v93, v39 - 1);
        *(_BYTE *)(a1[4] + v39 - 1) = 0;
        v82 = dest;
        if ( dest )
          goto LABEL_116;
        return v124 - __readfsqword(0x28u);
      }
      goto LABEL_49;
    }
LABEL_22:
    *(_QWORD *)&v114 = 0;
    goto LABEL_23;
  }
  v89 = strlen(s);
  v90 = v89;
  if ( v89 )
  {
    v96 = dest;
    v97 = v89 + 1;
    if ( *((_QWORD *)&v114 + 1) < v89 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v97, 1);
      v96 = dest;
    }
    v11 = s;
    *(_QWORD *)&v114 = v97;
    memmove(v96, s, v90);
    *((_BYTE *)dest + v90) = 0;
    v39 = v114;
    goto LABEL_48;
  }
  *(_QWORD *)&v114 = 0;
LABEL_49:
  v40 = a1[8];
  v41 = a1[7];
  v117 = nullptr;
  *(_OWORD *)v118 = 0;
  v42 = v41;
  if ( !(56 * v40) )
  {
    v56 = a1 + 4;
    v57 = (const void **)&qword_18;
LABEL_77:
    v58 = *((_QWORD *)v112 + 1);
    if ( v58 > 1 )
    {
      v77 = *(const void **)v112;
      v78 = (void *)a1[4];
      if ( a1[6] < v58 )
      {
        v99 = qvector_reserve(v56, a1[4], *((_QWORD *)v112 + 1), 1);
        a1[4] = v99;
        v78 = (void *)v99;
      }
      a1[5] = v58;
      memmove(v78, v77, v58 - 1);
      *(_BYTE *)(a1[4] + v58 - 1) = 0;
    }
    else
    {
      a1[5] = 0;
    }
    v59 = v118[0];
    v55 = (char *)v117;
    if ( v57 == (const void **)((char *)v117 + 24 * v118[0]) )
    {
LABEL_126:
      if ( v55 )
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
      v64 = n[0];
      ptr = nullptr;
      v122 = 0;
      if ( n[0] )
        break;
      v60 = (unsigned __int64)v57[1];
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v60 != 1 )
        {
          v62 = v60 - 1;
          goto LABEL_84;
        }
LABEL_93:
        if ( ptr )
        {
          *(_QWORD *)&v122 = 0;
          qfree(ptr);
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      v59 = v118[0];
      v55 = (char *)v117;
      v57 += 3;
      if ( v57 == (const void **)((char *)v117 + 24 * v118[0]) )
        goto LABEL_126;
    }
    ptr = (void *)qalloc_or_throw(n[0], 0, v69, v70, v71, v72);
    *((_QWORD *)&v122 + 1) = v64;
    memcpy(ptr, src, v64);
    *(_QWORD *)&v122 = v64;
    v73 = v57[1];
    if ( !v73 )
      goto LABEL_87;
    v74 = (size_t)v73 - 1;
    v62 = v74;
    if ( !v74 )
      goto LABEL_87;
    --v64;
    v61 = v74 + v64;
    v60 = v74 + v64 + 1;
LABEL_84:
    v63 = ptr;
    if ( *((_QWORD *)&v122 + 1) < v60 )
    {
      v110 = v61;
      s1d = (char *)v62;
      ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
      v61 = v110;
      v63 = ptr;
      v62 = (size_t)s1d;
    }
    *(_QWORD *)&v122 = v60;
    v63[v61] = 0;
    memcpy((char *)ptr + v64, *v57, v62);
    v64 = v122;
    if ( (_QWORD)v122 )
    {
LABEL_87:
      v65 = v64 - 1;
      if ( v64 != 1 )
      {
        v66 = a1[5];
        v67 = v64 - 1;
        if ( v66 )
        {
          --v66;
          v67 = v65 + v66;
          v64 += v66;
        }
        v68 = a1[4];
        if ( a1[6] < v64 )
        {
          v109 = v67;
          s1e = (char *)v65;
          v88 = qvector_reserve(v56, v68, v64, 1);
          a1[4] = v88;
          v67 = v109;
          v68 = v88;
          v65 = (size_t)s1e;
        }
        a1[5] = v64;
        *(_BYTE *)(v68 + v67) = 0;
        memcpy((void *)(v66 + a1[4]), ptr, v65);
      }
    }
    goto LABEL_93;
  }
  do
  {
    if ( *(_BYTE *)(v42 + 48) )
      goto LABEL_75;
    if ( !*(_QWORD *)(v42 + 8)
      || (v49 = *(const char **)v42, v11 = (const char *)&qword_20, (v50 = strchr(*(const char **)v42, 32)) == nullptr)
      || (v51 = v50 - v49, v50 - v49 == -1) )
    {
      ptr = nullptr;
      v122 = 0;
      v43 = *(_QWORD *)(v42 + 8);
      if ( v43 )
      {
        ptr = (void *)qalloc_or_throw(*(_QWORD *)(v42 + 8), v11, v40, v41, v13, v14);
        *((_QWORD *)&v122 + 1) = v43;
        v11 = *(const char **)v42;
        memcpy(ptr, *(const void **)v42, v43);
        v48 = v117;
        *(_QWORD *)&v122 = v43;
        v111 = v118[0];
        v108 = (char *)v117;
        v44 = (char *)v117 + 24 * v118[0];
        if ( 24 * v118[0] )
          goto LABEL_55;
LABEL_68:
        v52 = (void *)qalloc_or_throw(v43, v11, v47, v48, v13, v14);
        v11 = (const char *)ptr;
        v53 = v52;
        memcpy(v52, ptr, v43);
        v111 = v118[0];
        v108 = (char *)v117;
        goto LABEL_69;
      }
LABEL_53:
      v108 = (char *)v117;
      v43 = 24 * v118[0];
      v111 = v118[0];
      v44 = (char *)v117 + 24 * v118[0];
      if ( !(24 * v118[0]) )
        goto LABEL_117;
      v43 = 0;
LABEL_55:
      v45 = v108;
      s1a = (char *)ptr;
      while ( *((_QWORD *)v45 + 1) )
      {
        v11 = *(const char **)v45;
        v46 = haystack;
        if ( v43 )
          goto LABEL_62;
LABEL_57:
        if ( !strcmp(v46, v11) )
          goto LABEL_72;
        v45 += 24;
        if ( v45 == v44 )
          goto LABEL_67;
      }
      if ( !v43 )
        goto LABEL_72;
      v11 = haystack;
LABEL_62:
      v46 = s1a;
      goto LABEL_57;
    }
    ptr = nullptr;
    v122 = 0;
    if ( !v51 )
      goto LABEL_53;
    v11 = v49;
    ptr = (void *)qvector_reserve(&ptr, 0, v51 + 1, 1);
    *(_QWORD *)&v122 = v51 + 1;
    memmove(ptr, v49, v51);
    *((_BYTE *)ptr + v51) = 0;
    v48 = v117;
    v43 = v122;
    v111 = v118[0];
    v108 = (char *)v117;
    v44 = (char *)v117 + 24 * v118[0];
    if ( 24 * v118[0] )
      goto LABEL_55;
LABEL_67:
    if ( v43 )
      goto LABEL_68;
LABEL_117:
    v53 = nullptr;
LABEL_69:
    if ( v118[1] < v111 + 1 )
    {
      v11 = v108;
      v108 = (char *)qvector_reserve(&v117, v108, v111 + 1, 24);
      v117 = v108;
      v111 = v118[0];
    }
    v54 = &v108[24 * v111];
    *(_QWORD *)v54 = v53;
    *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64((__m128i)v43, (__m128i)v43);
    ++v118[0];
    s1a = (char *)ptr;
LABEL_72:
    if ( s1a )
    {
      *(_QWORD *)&v122 = 0;
      qfree(s1a);
    }
    v41 = a1[7];
    v40 = a1[8];
LABEL_75:
    v42 += 56;
  }
  while ( v42 != v41 + 56 * v40 );
  v55 = (char *)v117;
  v56 = a1 + 4;
  v112 = (char *)v117;
  v57 = (const void **)((char *)v117 + 24);
  if ( a1 + 4 != v117 )
    goto LABEL_77;
  v59 = v118[0];
  if ( 24 * v118[0] != 24 )
    goto LABEL_98;
LABEL_109:
  if ( v59 )
  {
    for ( i = 0; i != v59; ++i )
    {
      v80 = &v55[24 * i];
      v81 = *(void **)v80;
      if ( *(_QWORD *)v80 )
      {
        *((_QWORD *)v80 + 1) = 0;
        qfree(v81);
        v55 = (char *)v117;
      }
    }
  }
  v118[0] = 0;
  qfree(v55);
LABEL_115:
  v82 = dest;
  if ( dest )
  {
LABEL_116:
    *(_QWORD *)&v114 = 0;
    qfree(v82);
  }
  return v124 - __readfsqword(0x28u);
}

