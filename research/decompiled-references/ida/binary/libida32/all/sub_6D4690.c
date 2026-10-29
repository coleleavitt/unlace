unsigned __int64 __fastcall sub_6D4690(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  char **v10; // r9
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // r15
  size_t v14; // rbp
  size_t v15; // r12
  _BYTE *v16; // rsi
  size_t v17; // rdx
  char *v18; // rdi
  char *v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbp
  _BYTE *v23; // rsi
  size_t v24; // rax
  size_t v25; // rbp
  size_t v26; // r15
  void *v27; // rax
  _BYTE *v28; // rsi
  char *v29; // r12
  __int64 v30; // rbp
  const char **v31; // r15
  const char *v32; // rsi
  const char *v33; // rdi
  void *v34; // rax
  const char *v35; // r14
  int v36; // r15d
  bool v37; // bl
  unsigned int *v38; // r13
  size_t v39; // rbp
  const char *v40; // rax
  bool v41; // zf
  char *v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  char *v45; // rax
  void *v46; // rdi
  __int64 v48; // r15
  __int64 v49; // r12
  int v50; // r15d
  __int64 v51; // r13
  __int64 v52; // rbp
  _BYTE *v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rdx
  char *v56; // rsi
  char *v57; // rax
  void *v58; // rdi
  unsigned int *v59; // rbp
  size_t v60; // r15
  void *v61; // rax
  char *v62; // rax
  __int64 v63; // [rsp+0h] [rbp-118h]
  _BYTE *v66; // [rsp+10h] [rbp-108h]
  __int64 v67; // [rsp+18h] [rbp-100h]
  __int64 v68; // [rsp+20h] [rbp-F8h]
  __int64 v69; // [rsp+28h] [rbp-F0h]
  bool v70; // [rsp+3Bh] [rbp-DDh] BYREF
  int v71; // [rsp+3Ch] [rbp-DCh] BYREF
  const char *v72; // [rsp+40h] [rbp-D8h] BYREF
  const char *v73; // [rsp+48h] [rbp-D0h] BYREF
  void *v74; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v75; // [rsp+58h] [rbp-C0h]
  void *v76; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v77; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int128 v79; // [rsp+98h] [rbp-80h]
  char *s[2]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v81[3]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v82; // [rsp+D8h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 480) )
    return v82 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = a1;
  v5 = a2;
  v74 = nullptr;
  v7 = *(_QWORD *)(v3 + 96);
  v75 = 0;
  if ( (*(_BYTE *)(a3 + 36) & 2) != 0 && *(_DWORD *)(a3 + 24) )
  {
    v54 = *(_QWORD *)(a3 + 8);
    do
    {
      v59 = *(unsigned int **)(*(_QWORD *)v54 + 16LL);
      v60 = *v59;
      ptr = nullptr;
      v79 = 0;
      if ( v60 )
      {
        v61 = (void *)qvector_reserve(&ptr, 0, v60 + 1, 1);
        *(_QWORD *)&v79 = v60 + 1;
        ptr = v61;
        memmove(v61, v59 + 4, v60);
        *((_BYTE *)ptr + v60) = 0;
      }
      v55 = v75;
      v56 = (char *)v74;
      if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
      {
        v62 = (char *)qvector_reserve(&v74, v74, v75 + 1, 24);
        v55 = v75;
        v74 = v62;
        v56 = v62;
      }
      v57 = &v56[24 * v55];
      *(_QWORD *)v57 = 0;
      *(_OWORD *)(v57 + 8) = 0;
      *(_QWORD *)&v75 = v75 + 1;
      v58 = *(void **)v57;
      *(_QWORD *)v57 = ptr;
      *(_OWORD *)(v57 + 8) = v79;
      ptr = v58;
      *((_QWORD *)&v79 + 1) = 0;
      if ( v58 )
      {
        *(_QWORD *)&v79 = 0;
        qfree(v58);
      }
      v54 += 8;
    }
    while ( v54 != *(_QWORD *)(a3 + 8) + 8LL * *(unsigned int *)(a3 + 24) );
    v4 = a1;
    v5 = a2;
  }
  v8 = *(unsigned int *)(a3 + 28);
  v9 = *(_QWORD *)(a3 + 16);
  v76 = nullptr;
  v77 = 0;
  v10 = s;
  v11 = 3 * v8;
  if ( v9 + 8 * v11 == v9 )
  {
    v36 = *(_DWORD *)(a3 + 24);
    v35 = haystack;
    v37 = (*(_BYTE *)(a3 + 36) & 2) != 0;
    goto LABEL_34;
  }
  v63 = v9 + 8 * v11;
  v67 = v4;
  v68 = v5;
  v69 = a3;
  while ( 2 )
  {
    if ( (*(_BYTE *)(v9 + 18) & 2) != 0 )
    {
      v20 = v77;
      if ( (_QWORD)v77 )
      {
        v21 = v77 + 1;
        v22 = v77;
        v23 = v76;
        v20 = v77 - 1;
        if ( *((_QWORD *)&v77 + 1) >= (unsigned __int64)(v77 + 1) )
        {
LABEL_18:
          *(_QWORD *)&v77 = v21;
          v23[v20] = 32;
          *((_BYTE *)v76 + v22) = 0;
          goto LABEL_13;
        }
      }
      else
      {
        v23 = v76;
        v22 = 1;
        v21 = 2;
        if ( *((_QWORD *)&v77 + 1) >= 2u )
          goto LABEL_18;
      }
      v76 = (void *)qvector_reserve(&v76, v23, v21, 1);
      v23 = v76;
      goto LABEL_18;
    }
LABEL_13:
    sub_13AF8B0(s, v9, *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 56), 0, v10);
    v19 = s[0];
    if ( *(_WORD *)(v9 + 16) != 5 )
      goto LABEL_14;
    ptr = nullptr;
    v79 = 0;
    if ( !s[0] )
    {
      v28 = v74;
      v30 = 0;
      v29 = (char *)v74 + 24 * v75;
      if ( v74 != v29 )
        goto LABEL_22;
      v18 = nullptr;
LABEL_10:
      operator delete(v18, v81[0] + 1LL);
      goto LABEL_11;
    }
    v24 = strlen(s[0]);
    v25 = v24 + 1;
    v26 = v24;
    v27 = (void *)qvector_reserve(&ptr, 0, v24 + 1, 1);
    *(_QWORD *)&v79 = v25;
    ptr = v27;
    memmove(v27, v19, v26);
    *((_BYTE *)ptr + v26) = 0;
    v28 = v74;
    v19 = (char *)ptr;
    v29 = (char *)v74 + 24 * v75;
    if ( v74 == v29 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v79 = 0;
        qfree(ptr);
        v19 = s[0];
      }
      else
      {
LABEL_58:
        v19 = s[0];
      }
LABEL_14:
      if ( v19 )
      {
        v12 = strlen(v19);
        v13 = v77;
        v14 = v12;
        v15 = v12;
        if ( (_QWORD)v77 )
        {
          v13 = v77 - 1;
          v15 = v12 + v77 - 1;
        }
        v16 = v76;
        v17 = v15 + 1;
        if ( *((_QWORD *)&v77 + 1) < v15 + 1 )
        {
          v34 = (void *)qvector_reserve(&v76, v76, v17, 1);
          v17 = v15 + 1;
          v76 = v34;
          v16 = v34;
        }
        *(_QWORD *)&v77 = v17;
        v16[v15] = 0;
        memmove((char *)v76 + v13, v19, v14);
        v18 = s[0];
        if ( (_QWORD *)s[0] == v81 )
          goto LABEL_11;
      }
      else
      {
        v18 = nullptr;
      }
      goto LABEL_10;
    }
    v30 = v79;
LABEL_22:
    v66 = v28;
    v31 = (const char **)v28;
    while ( 1 )
    {
      if ( v31[1] )
      {
        v32 = *v31;
        v33 = haystack;
        if ( !v30 )
          goto LABEL_24;
        goto LABEL_29;
      }
      if ( !v30 )
        break;
      v32 = haystack;
LABEL_29:
      v33 = v19;
LABEL_24:
      if ( !strcmp(v33, v32) )
        break;
      v31 += 3;
      if ( v31 == (const char **)v29 )
      {
        if ( v19 )
        {
          *(_QWORD *)&v79 = 0;
          qfree(v19);
        }
        goto LABEL_58;
      }
    }
    v48 = (char *)v31 - v66;
    if ( v19 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(v19);
    }
    if ( v48 == -24 )
      goto LABEL_58;
    v49 = v77;
    v50 = -1431655765 * (v48 >> 3) - 128;
    if ( !(_QWORD)v77 )
    {
      v53 = v76;
      v52 = 1;
      v51 = 2;
      if ( *((_QWORD *)&v77 + 1) >= 2u )
        goto LABEL_54;
LABEL_73:
      v76 = (void *)qvector_reserve(&v76, v53, v51, 1);
      v53 = v76;
      goto LABEL_54;
    }
    v51 = v77 + 1;
    v52 = v77;
    v53 = v76;
    v49 = v77 - 1;
    if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
      goto LABEL_73;
LABEL_54:
    *(_QWORD *)&v77 = v51;
    v53[v49] = v50;
    *((_BYTE *)v76 + v52) = 0;
    v18 = s[0];
    if ( (_QWORD *)s[0] != v81 )
      goto LABEL_10;
LABEL_11:
    v9 += 24;
    if ( v9 != v63 )
      continue;
    break;
  }
  v4 = v67;
  v35 = haystack;
  v5 = v68;
  v36 = *(_DWORD *)(v69 + 24);
  v37 = (*(_BYTE *)(v69 + 36) & 2) != 0;
  if ( (_QWORD)v77 )
    v35 = (const char *)v76;
LABEL_34:
  v38 = *(unsigned int **)(v5 + 16);
  v39 = *v38;
  v79 = 0;
  ptr = nullptr;
  if ( v39
    && (ptr = (void *)qvector_reserve(&ptr, 0, v39 + 1, 1),
        *(_QWORD *)&v79 = v39 + 1,
        memmove(ptr, v38 + 4, v39),
        *((_BYTE *)ptr + v39) = 0,
        (_QWORD)v79) )
  {
    v40 = (const char *)ptr;
  }
  else
  {
    v40 = haystack;
  }
  v41 = *(_QWORD *)(v4 + 480) == 0;
  v72 = v40;
  v73 = v35;
  v71 = v36;
  v70 = v37;
  if ( v41 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, const char **, const char **, int *, bool *))(v4 + 488))(
    v4 + 464,
    &v72,
    &v73,
    &v71,
    &v70);
  if ( ptr )
  {
    *(_QWORD *)&v79 = 0;
    qfree(ptr);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  v42 = (char *)v74;
  if ( v74 )
  {
    v43 = v75;
    if ( (_QWORD)v75 )
    {
      v44 = 0;
      do
      {
        v45 = &v42[24 * v44];
        v46 = *(void **)v45;
        if ( *(_QWORD *)v45 )
        {
          *((_QWORD *)v45 + 1) = 0;
          qfree(v46);
          v42 = (char *)v74;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v75 = 0;
    qfree(v42);
  }
  return v82 - __readfsqword(0x28u);
}

