__int64 __fastcall sub_401E80(__int64 a1, char a2)
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
  unsigned __int64 *v22; // r8
  unsigned __int64 *v23; // rdi
  const char *v24; // r9
  const char *v25; // rbx
  unsigned __int64 *i; // r15
  char *v27; // r8
  char *v28; // r9
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  size_t v36; // r15
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  size_t v40; // r14
  _QWORD *v41; // r15
  void **v42; // r9
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rax
  void **v45; // rcx
  char *v46; // rsi
  char *j; // rdi
  __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  void ***v50; // rax
  __int64 v51; // r14
  void ***v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // rdx
  char *v55; // rcx
  unsigned __int64 v56; // rax
  char *k; // rdi
  __int64 v58; // rdx
  _QWORD *v59; // rbx
  _QWORD *v60; // rbp
  void *v61; // rdi
  _QWORD *v62; // rbx
  _QWORD *v63; // rbp
  void *v64; // rdi
  _QWORD *v65; // rdi
  size_t v66; // rdx
  void *v67; // rax
  void *v68; // [rsp+0h] [rbp-A8h]
  void *v69; // [rsp+0h] [rbp-A8h]
  _OWORD *v70; // [rsp+0h] [rbp-A8h]
  unsigned __int64 *v71; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v73; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+10h] [rbp-98h]
  __int64 v75; // [rsp+18h] [rbp-90h]
  unsigned int v76; // [rsp+24h] [rbp-84h]
  _QWORD *s; // [rsp+30h] [rbp-78h]
  unsigned __int64 v78; // [rsp+38h] [rbp-70h]
  void *v79; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+48h] [rbp-60h]
  int v81; // [rsp+50h] [rbp-58h] BYREF
  __int64 v82; // [rsp+58h] [rbp-50h]
  _QWORD v83[9]; // [rsp+60h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v83[1] = __readfsqword(0x28u);
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
  v76 = sub_401980(a1);
  if ( !v76 && a2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    v78 = 1;
    s = v83;
    v81 = 1065353216;
    v79 = nullptr;
    v80 = 0;
    v82 = 0;
    v83[0] = 0;
    v75 = v8 + 56 * v7;
    if ( v8 == v75 )
    {
      v65 = v83;
      v66 = 8;
      goto LABEL_78;
    }
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 <= 1 )
        goto LABEL_63;
      v10 = v80;
      v11 = *(const char **)v8;
      if ( !v80 )
        break;
      v16 = (char *)&v11[v9];
      if ( &v11[v9] != v11 )
        goto LABEL_22;
      v20 = v78;
      v17 = 0xCBF29CE484222325LL;
      v21 = 0xCBF29CE484222325LL % v78;
LABEL_25:
      v22 = (unsigned __int64 *)s[v21];
      if ( v22 )
      {
        v23 = (unsigned __int64 *)*v22;
        v24 = haystack;
        if ( *(_QWORD *)(*v22 + 16) )
        {
          v10 = *v22;
          v29 = (unsigned __int64 *)s[v21];
LABEL_34:
          v22 = v29;
          v24 = *(const char **)(v10 + 8);
          v23 = (unsigned __int64 *)v10;
        }
        v71 = v22;
        v74 = v20;
        v69 = (void *)v17;
        v25 = v11;
        for ( i = v23; ; i = (unsigned __int64 *)*i )
        {
          v10 = (unsigned __int64)v24;
          if ( !strcmp(v25, v24) )
            break;
          v10 = *i;
          if ( !*i )
            goto LABEL_89;
          v27 = *(char **)(v10 + 8);
          v28 = &v27[*(_QWORD *)(v10 + 16)];
          if ( v27 != v28 )
          {
            v29 = i;
            v20 = v74;
            v11 = v25;
            v17 = (unsigned __int64)v69;
            v30 = 0xCBF29CE484222325LL;
            do
            {
              v31 = *v27++;
              v30 = 0x100000001B3LL * (v31 ^ v30);
            }
            while ( v28 != v27 );
            if ( v30 % v74 != v21 )
              goto LABEL_38;
            goto LABEL_34;
          }
          v71 = i;
          v24 = haystack;
          if ( 0xCBF29CE484222325LL % v74 != v21 )
          {
LABEL_89:
            v17 = (unsigned __int64)v69;
            goto LABEL_38;
          }
        }
        v17 = (unsigned __int64)v69;
        if ( v71 )
        {
          if ( *v71 )
            goto LABEL_63;
        }
      }
LABEL_38:
      v70 = (_OWORD *)operator new(0x20u);
      *v70 = 0;
      v70[1] = 0;
      v36 = *(_QWORD *)(v8 + 8);
      if ( v36 )
      {
        v67 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8), v10, v32, v33, v34, v35);
        *((_QWORD *)v70 + 1) = v67;
        *((_QWORD *)v70 + 3) = v36;
        memcpy(v67, *(const void **)v8, v36);
        *((_QWORD *)v70 + 2) = v36;
      }
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)&v81,
                              v78,
                              v80,
                              1u) )
      {
        v39 = v37;
        if ( v37 == 1 )
        {
          v83[0] = 0;
          v41 = v83;
        }
        else
        {
          if ( v37 >> 60 )
          {
            if ( v37 >> 61 )
              sub_2E883E(&v81, v78, v37, v38, v37 >> 61);
            std::__throw_bad_alloc();
          }
          v40 = 8 * v37;
          v72 = v37;
          v41 = (_QWORD *)operator new(8 * v37);
          memset(v41, 0, v40);
          v39 = v72;
        }
        v42 = (void **)v79;
        v43 = 0;
        v79 = nullptr;
        while ( v42 )
        {
          while ( 1 )
          {
            v44 = 0xCBF29CE484222325LL;
            v45 = v42;
            v42 = (void **)*v42;
            v46 = (char *)v45[1];
            for ( j = (char *)v45[2] + (_QWORD)v46; j != v46; v44 = 0x100000001B3LL * (v48 ^ v44) )
              v48 = *v46++;
            v49 = v44 % v39;
            v50 = (void ***)&v41[v44 % v39];
            if ( !*v50 )
              break;
            *v45 = **v50;
            **v50 = v45;
            if ( !v42 )
              goto LABEL_50;
          }
          *v45 = v79;
          v79 = v45;
          *v50 = &v79;
          if ( *v45 )
            v41[v43] = v45;
          v43 = v49;
        }
LABEL_50:
        if ( s != v83 )
        {
          v73 = v39;
          operator delete(s, 8 * v78);
          v39 = v73;
        }
        v78 = v39;
        s = v41;
        v51 = v17 % v39;
        v52 = (void ***)&v41[v51];
        v53 = (_QWORD *)v41[v51];
        if ( !v53 )
        {
LABEL_53:
          v54 = v79;
          *(_QWORD *)v70 = v79;
          v79 = v70;
          if ( v54 )
          {
            v55 = (char *)v54[1];
            v56 = 0xCBF29CE484222325LL;
            for ( k = &v55[v54[2]]; k != v55; v56 = 0x100000001B3LL * (v58 ^ v56) )
              v58 = *v55++;
            v41[v56 % v78] = v70;
            v52 = (void ***)&s[v51];
          }
          *v52 = &v79;
          goto LABEL_72;
        }
      }
      else
      {
        v41 = s;
        v51 = v21;
        v52 = (void ***)&s[v51];
        v53 = (_QWORD *)s[v51];
        if ( !v53 )
          goto LABEL_53;
      }
      *(_QWORD *)v70 = *v53;
      **v52 = v70;
LABEL_72:
      ++v80;
      v8 += 56;
      if ( v75 == v8 )
      {
        v62 = v79;
        if ( v79 )
        {
          do
          {
            v63 = v62;
            v62 = (_QWORD *)*v62;
            v64 = (void *)v63[1];
            if ( v64 )
            {
              v63[2] = 0;
              qfree(v64);
            }
            operator delete(v63, 0x20u);
          }
          while ( v62 );
        }
        v65 = s;
        v66 = 8 * v78;
LABEL_78:
        memset(v65, 0, v66);
        v80 = 0;
        v79 = nullptr;
        if ( s != v83 )
          operator delete(s, 8 * v78);
        return v76;
      }
    }
    v12 = v79;
    if ( v79 )
    {
      v68 = (void *)v80;
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
          v10 = (unsigned __int64)v68;
          goto LABEL_36;
        }
      }
LABEL_63:
      set_error_string();
      v59 = v79;
      if ( v79 )
      {
        do
        {
          v60 = v59;
          v59 = (_QWORD *)*v59;
          v61 = (void *)v60[1];
          if ( v61 )
          {
            v60[2] = 0;
            qfree(v61);
          }
          operator delete(v60, 0x20u);
        }
        while ( v59 );
      }
      memset(s, 0, 8 * v78);
      v80 = 0;
      v79 = nullptr;
      if ( s != v83 )
        operator delete(s, 8 * v78);
      return (unsigned int)-3;
    }
LABEL_36:
    v16 = (char *)&v11[v9];
    if ( &v11[v9] == v11 )
    {
      v17 = 0xCBF29CE484222325LL;
      v21 = 0xCBF29CE484222325LL % v78;
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
    v20 = v78;
    v21 = v17 % v78;
    if ( !v10 )
      goto LABEL_38;
    goto LABEL_25;
  }
  return v76;
}

