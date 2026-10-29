__int64 __fastcall sub_415220(__int64 a1, char a2)
{
  __int64 v2; // rax
  int *v4; // rdx
  __int64 v5; // rcx
  int *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  const char *v11; // r15
  _QWORD *v12; // rbx
  const char *v13; // rsi
  __int64 v14; // rax
  char *v16; // rcx
  unsigned __int64 v17; // rbx
  const char *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  _QWORD *v22; // r8
  _QWORD *v23; // rdi
  const char *v24; // r9
  const char *v25; // rbx
  _QWORD *v26; // r15
  _QWORD *v27; // rsi
  char *v28; // r8
  char *v29; // r9
  _QWORD *v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  size_t v33; // r15
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  size_t v37; // r14
  _QWORD *v38; // r15
  void **v39; // r9
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rax
  void **v42; // rcx
  char *v43; // rsi
  char *i; // rdi
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  void ***v47; // rax
  __int64 v48; // r14
  void ***v49; // rax
  _QWORD *v50; // rdx
  _QWORD *v51; // rdx
  char *v52; // rcx
  unsigned __int64 v53; // rax
  char *j; // rdi
  __int64 v55; // rdx
  const char *v56; // rsi
  _QWORD *v57; // rbx
  _QWORD *v58; // rbp
  void *v59; // rdi
  _QWORD *v60; // rbx
  _QWORD *v61; // rbp
  void *v62; // rdi
  _QWORD *v63; // rdi
  size_t v64; // rdx
  void *v65; // rax
  void *v66; // [rsp+0h] [rbp-A8h]
  void *v67; // [rsp+0h] [rbp-A8h]
  _OWORD *v68; // [rsp+0h] [rbp-A8h]
  _QWORD *v69; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v71; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 v73; // [rsp+18h] [rbp-90h]
  unsigned int v74; // [rsp+24h] [rbp-84h]
  _QWORD *s; // [rsp+30h] [rbp-78h]
  unsigned __int64 v76; // [rsp+38h] [rbp-70h]
  void *v77; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v78; // [rsp+48h] [rbp-60h]
  int v79; // [rsp+50h] [rbp-58h] BYREF
  __int64 v80; // [rsp+58h] [rbp-50h]
  _QWORD v81[9]; // [rsp+60h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v81[1] = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = *(int **)(a1 + 24);
    v5 = 0;
    v6 = &v4[v2];
    if ( v4 == v6 )
    {
LABEL_3:
      if ( *(_QWORD *)(a1 + 8) == v5 )
        goto LABEL_4;
    }
    else
    {
      while ( 1 )
      {
        v14 = *v4;
        if ( !(_DWORD)v14 )
          break;
        ++v4;
        v5 += v14;
        if ( v6 == v4 )
          goto LABEL_3;
      }
    }
    return (unsigned int)-29;
  }
LABEL_4:
  if ( (*(_BYTE *)(a1 + 52) & 7u) > 4 )
    return (unsigned int)-33;
  v74 = sub_414D20(a1);
  if ( !v74 && a2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    v76 = 1;
    s = v81;
    v79 = 1065353216;
    v77 = nullptr;
    v78 = 0;
    v80 = 0;
    v81[0] = 0;
    v73 = v8 + 56 * v7;
    if ( v8 == v73 )
    {
      v63 = v81;
      v64 = 8;
      goto LABEL_79;
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 <= 1 )
      {
        v56 = haystack;
        if ( v9 )
          v56 = *(const char **)v8;
        goto LABEL_64;
      }
      v10 = v78;
      v11 = *(const char **)v8;
      if ( !v78 )
        break;
      v16 = (char *)&v11[v9];
      if ( &v11[v9] != v11 )
        goto LABEL_22;
      v20 = v76;
      v17 = 0xCBF29CE484222325LL;
      v21 = 0xCBF29CE484222325LL % v76;
LABEL_25:
      v22 = (_QWORD *)s[v21];
      if ( v22 )
      {
        v23 = (_QWORD *)*v22;
        v24 = haystack;
        if ( *(_QWORD *)(*v22 + 16LL) )
        {
          v27 = (_QWORD *)*v22;
          v30 = (_QWORD *)s[v21];
LABEL_34:
          v22 = v30;
          v24 = (const char *)v27[1];
          v23 = v27;
        }
        v69 = v22;
        v72 = v20;
        v67 = (void *)v17;
        v25 = v11;
        v26 = v23;
        while ( strcmp(v25, v24) )
        {
          v27 = (_QWORD *)*v26;
          if ( !*v26 )
            goto LABEL_91;
          v28 = (char *)v27[1];
          v29 = &v28[v27[2]];
          if ( v28 != v29 )
          {
            v30 = v26;
            v20 = v72;
            v11 = v25;
            v17 = (unsigned __int64)v67;
            v31 = 0xCBF29CE484222325LL;
            do
            {
              v32 = *v28++;
              v31 = 0x100000001B3LL * (v32 ^ v31);
            }
            while ( v29 != v28 );
            if ( v31 % v72 != v21 )
              goto LABEL_38;
            goto LABEL_34;
          }
          v69 = v26;
          v24 = haystack;
          if ( 0xCBF29CE484222325LL % v72 != v21 )
          {
LABEL_91:
            v17 = (unsigned __int64)v67;
            goto LABEL_38;
          }
          v26 = (_QWORD *)*v26;
        }
        v11 = v25;
        v17 = (unsigned __int64)v67;
        if ( v69 )
        {
          if ( *v69 )
            goto LABEL_63;
        }
      }
LABEL_38:
      v68 = (_OWORD *)operator new(0x20u);
      *v68 = 0;
      v68[1] = 0;
      v33 = *(_QWORD *)(v8 + 8);
      if ( v33 )
      {
        v65 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
        *((_QWORD *)v68 + 1) = v65;
        *((_QWORD *)v68 + 3) = v33;
        memcpy(v65, *(const void **)v8, v33);
        *((_QWORD *)v68 + 2) = v33;
      }
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)&v79,
                              v76,
                              v78,
                              1u) )
      {
        v36 = v34;
        if ( v34 == 1 )
        {
          v81[0] = 0;
          v38 = v81;
        }
        else
        {
          if ( v34 >> 60 )
          {
            if ( v34 >> 61 )
              sub_2EBC5E(&v79, v76, v34, v35, v34 >> 61);
            std::__throw_bad_alloc();
          }
          v37 = 8 * v34;
          v70 = v34;
          v38 = (_QWORD *)operator new(8 * v34);
          memset(v38, 0, v37);
          v36 = v70;
        }
        v39 = (void **)v77;
        v40 = 0;
        v77 = nullptr;
        while ( v39 )
        {
          while ( 1 )
          {
            v41 = 0xCBF29CE484222325LL;
            v42 = v39;
            v39 = (void **)*v39;
            v43 = (char *)v42[1];
            for ( i = (char *)v42[2] + (_QWORD)v43; i != v43; v41 = 0x100000001B3LL * (v45 ^ v41) )
              v45 = *v43++;
            v46 = v41 % v36;
            v47 = (void ***)&v38[v41 % v36];
            if ( !*v47 )
              break;
            *v42 = **v47;
            **v47 = v42;
            if ( !v39 )
              goto LABEL_50;
          }
          *v42 = v77;
          v77 = v42;
          *v47 = &v77;
          if ( *v42 )
            v38[v40] = v42;
          v40 = v46;
        }
LABEL_50:
        if ( s != v81 )
        {
          v71 = v36;
          operator delete(s, 8 * v76);
          v36 = v71;
        }
        v76 = v36;
        s = v38;
        v48 = v17 % v36;
        v49 = (void ***)&v38[v48];
        v50 = (_QWORD *)v38[v48];
        if ( !v50 )
        {
LABEL_53:
          v51 = v77;
          *(_QWORD *)v68 = v77;
          v77 = v68;
          if ( v51 )
          {
            v52 = (char *)v51[1];
            v53 = 0xCBF29CE484222325LL;
            for ( j = &v52[v51[2]]; j != v52; v53 = 0x100000001B3LL * (v55 ^ v53) )
              v55 = *v52++;
            v38[v53 % v76] = v68;
            v49 = (void ***)&s[v48];
          }
          *v49 = &v77;
          goto LABEL_73;
        }
      }
      else
      {
        v38 = s;
        v48 = v21;
        v49 = (void ***)&s[v48];
        v50 = (_QWORD *)s[v48];
        if ( !v50 )
          goto LABEL_53;
      }
      *(_QWORD *)v68 = *v50;
      **v49 = v68;
LABEL_73:
      ++v78;
      v8 += 56;
      if ( v73 == v8 )
      {
        v60 = v77;
        if ( v77 )
        {
          do
          {
            v61 = v60;
            v60 = (_QWORD *)*v60;
            v62 = (void *)v61[1];
            if ( v62 )
            {
              v61[2] = 0;
              qfree(v62);
            }
            operator delete(v61, 0x20u);
          }
          while ( v60 );
        }
        v63 = s;
        v64 = 8 * v76;
LABEL_79:
        memset(v63, 0, v64);
        v78 = 0;
        v77 = nullptr;
        if ( s != v81 )
          operator delete(s, 8 * v76);
        return v74;
      }
    }
    v12 = v77;
    if ( v77 )
    {
      v66 = (void *)v78;
      while ( 1 )
      {
        v13 = haystack;
        if ( v12[2] )
          v13 = (const char *)v12[1];
        if ( !strcmp(v11, v13) )
          break;
        v12 = (_QWORD *)*v12;
        if ( !v12 )
        {
          v10 = (unsigned __int64)v66;
          goto LABEL_36;
        }
      }
LABEL_63:
      v56 = v11;
LABEL_64:
      set_error_string(0, v56);
      v57 = v77;
      if ( v77 )
      {
        do
        {
          v58 = v57;
          v57 = (_QWORD *)*v57;
          v59 = (void *)v58[1];
          if ( v59 )
          {
            v58[2] = 0;
            qfree(v59);
          }
          operator delete(v58, 0x20u);
        }
        while ( v57 );
      }
      memset(s, 0, 8 * v76);
      v78 = 0;
      v77 = nullptr;
      if ( s != v81 )
        operator delete(s, 8 * v76);
      return (unsigned int)-3;
    }
LABEL_36:
    v16 = (char *)&v11[v9];
    if ( &v11[v9] == v11 )
    {
      v17 = 0xCBF29CE484222325LL;
      v21 = 0xCBF29CE484222325LL % v76;
      goto LABEL_38;
    }
LABEL_22:
    v17 = 0xCBF29CE484222325LL;
    v18 = v11;
    do
    {
      v19 = *v18++;
      v17 = 0x100000001B3LL * (v19 ^ v17);
    }
    while ( v16 != v18 );
    v20 = v76;
    v21 = v17 % v76;
    if ( !v10 )
      goto LABEL_38;
    goto LABEL_25;
  }
  return v74;
}
