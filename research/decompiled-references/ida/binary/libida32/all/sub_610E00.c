unsigned __int64 __fastcall sub_610E00(const char *a1)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // rbx
  void *v5; // rax
  void *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  char *v10; // rbx
  size_t v11; // rax
  size_t v12; // rbp
  size_t v13; // rbx
  void *v14; // rax
  const char *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v23; // rax
  size_t v24; // rbp
  size_t v25; // rbx
  void *v26; // rax
  size_t v27; // rbx
  const char *v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  const char *v32; // rsi
  unsigned __int64 i; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  const char *v36; // rsi
  char *v37; // rbx
  char *v38; // rbp
  const char *v39; // rsi
  size_t v40; // rax
  size_t v41; // rbp
  size_t v42; // rbx
  char *v43; // rbx
  char *v44; // rbp
  const char *v45; // rsi
  char *v46; // rbx
  size_t v47; // r13
  size_t v48; // r12
  _BYTE *v49; // rsi
  char *v50; // r8
  size_t v51; // r12
  void *v52; // rsi
  unsigned int v53; // [rsp+10h] [rbp-9C8h]
  char *v54; // [rsp+10h] [rbp-9C8h]
  _BYTE v55[4]; // [rsp+24h] [rbp-9B4h] BYREF
  int v56[2]; // [rsp+28h] [rbp-9B0h] BYREF
  void *v57; // [rsp+30h] [rbp-9A8h] BYREF
  __int128 v58; // [rsp+38h] [rbp-9A0h]
  void *v59; // [rsp+50h] [rbp-988h] BYREF
  __int128 v60; // [rsp+58h] [rbp-980h]
  void *v61; // [rsp+70h] [rbp-968h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-960h]
  void *src; // [rsp+90h] [rbp-948h] BYREF
  size_t v64[3]; // [rsp+98h] [rbp-940h]
  void *ptr[5]; // [rsp+B0h] [rbp-928h] BYREF
  void *v66; // [rsp+D8h] [rbp-900h]
  void *v67; // [rsp+E0h] [rbp-8F8h]
  __int128 v68; // [rsp+E8h] [rbp-8F0h]
  void *v69; // [rsp+F8h] [rbp-8E0h]
  __int128 v70; // [rsp+100h] [rbp-8D8h]
  int v71; // [rsp+110h] [rbp-8C8h] BYREF
  __int128 v72; // [rsp+114h] [rbp-8C4h]
  int v73; // [rsp+524h] [rbp-4B4h]
  __int64 v74; // [rsp+528h] [rbp-4B0h]
  int v75; // [rsp+530h] [rbp-4A8h]
  char v76; // [rsp+534h] [rbp-4A4h]
  __int128 v77; // [rsp+535h] [rbp-4A3h]
  __int64 v78; // [rsp+545h] [rbp-493h]
  int v79; // [rsp+550h] [rbp-488h] BYREF
  __int128 v80; // [rsp+554h] [rbp-484h]
  int v81; // [rsp+964h] [rbp-74h]
  __int64 v82; // [rsp+968h] [rbp-70h]
  int v83; // [rsp+970h] [rbp-68h]
  char v84; // [rsp+974h] [rbp-64h]
  __int128 v85; // [rsp+975h] [rbp-63h]
  __int64 v86; // [rsp+985h] [rbp-53h]
  unsigned __int64 v87; // [rsp+998h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  netnode_check(v55, a1, 0, 0);
  if ( !(unsigned __int8)netnode_exist(v55) )
    return v87 - __readfsqword(0x28u);
  v57 = nullptr;
  v58 = 0;
  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = v2 + 1;
    v4 = v2;
    v5 = (void *)qvector_reserve(&v57, 0, v2 + 1, 1);
    *(_QWORD *)&v58 = v3;
    v57 = v5;
    memmove(v5, a1, v4);
    *((_BYTE *)v57 + v4) = 0;
    v6 = v57;
    v7 = v58 - 1;
    v8 = v58 + 4;
    v9 = v58 + 5;
    if ( !(_QWORD)v58 )
    {
      v7 = 0;
      v9 = 6;
      v8 = 5;
    }
    if ( *((_QWORD *)&v58 + 1) >= v9 )
    {
      *(_QWORD *)&v58 = v9;
      *((_BYTE *)v57 + v8) = 0;
      v10 = (char *)v57 + v7;
      *(_DWORD *)v10 = 2019913262;
      v10[4] = 116;
      v59 = nullptr;
      v60 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = nullptr;
    v8 = 5;
    v7 = 0;
    v9 = 6;
  }
  v57 = (void *)qvector_reserve(&v57, v6, v9, 1);
  *(_QWORD *)&v58 = v9;
  *((_BYTE *)v57 + v8) = 0;
  v46 = (char *)v57 + v7;
  *(_DWORD *)v46 = 2019913262;
  v46[4] = 116;
  v59 = nullptr;
  v60 = 0;
  if ( !a1 )
  {
    v15 = nullptr;
    v17 = 4;
    v18 = 5;
    v16 = 0;
LABEL_66:
    v59 = (void *)qvector_reserve(&v59, v15, v18, 1);
    v15 = (const char *)v59;
    goto LABEL_11;
  }
LABEL_8:
  v11 = strlen(a1);
  v12 = v11 + 1;
  v13 = v11;
  v14 = (void *)qvector_reserve(&v59, 0, v11 + 1, 1);
  *(_QWORD *)&v60 = v12;
  v59 = v14;
  memmove(v14, a1, v13);
  *((_BYTE *)v59 + v13) = 0;
  v15 = (const char *)v59;
  v16 = v60 - 1;
  v17 = v60 + 3;
  v18 = v60 + 4;
  if ( !(_QWORD)v60 )
  {
    v16 = 0;
    v18 = 5;
    v17 = 4;
  }
  if ( *((_QWORD *)&v60 + 1) < v18 )
    goto LABEL_66;
LABEL_11:
  *(_QWORD *)&v60 = v18;
  v15[v17] = 0;
  *(_DWORD *)((char *)v59 + v16) = 1886221358;
  *(_QWORD *)v56 = 0xFFFFFFFFLL;
  navstack_t_register_live(v56);
  n[0] = 0xFFFFFFFF00000000LL;
  v61 = off_2AFC770;
  src = nullptr;
  *(_OWORD *)v64 = 0;
  if ( a1 )
  {
    v23 = strlen(a1);
    v24 = v23 + 1;
    v25 = v23;
    v15 = a1;
    src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
    v64[0] = v24;
    memmove(src, a1, v25);
    *((_BYTE *)src + v25) = 0;
  }
  ptr[3] = (void *)-1LL;
  ptr[4] = nullptr;
  v66 = &v61;
  memset(ptr, 0, 24);
  v26 = (void *)idaplace_t__clone(&v61, v15, v19, v20, v21, v22);
  v27 = v64[0];
  v66 = v26;
  v67 = nullptr;
  v68 = 0;
  if ( v64[0] )
  {
    v67 = (void *)qalloc_or_throw(v64[0], v15);
    *((_QWORD *)&v68 + 1) = v27;
    memcpy(v67, src, v27);
    *(_QWORD *)&v68 = v27;
  }
  v69 = nullptr;
  v70 = 0;
  if ( src )
  {
    v64[0] = 0;
    qfree(src);
  }
  v28 = haystack;
  if ( (_QWORD)v60 )
    v28 = (const char *)v59;
  navstack_t_init(v56, ptr, v28, 0);
  LOBYTE(src) = 0;
  v72 = 0;
  v64[0] = (size_t)a1;
  v71 = -1;
  v75 = -1;
  v73 = -1;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v77 = 0;
  sub_4B0440((unsigned int *)&v71, (__int64)a1);
  v29 = (unsigned __int64)sub_4AFDE0(&v71) >> 2;
  while ( v29 )
  {
    while ( 1 )
    {
      --v29;
      v79 = -1;
      v83 = -1;
      v81 = -1;
      v82 = 0;
      v84 = 0;
      v86 = 0;
      v80 = 0;
      v85 = 0;
      if ( (unsigned __int8)sub_4B06C0((unsigned int *)&v71, (__int64)&v79, v29) )
        break;
      if ( !v29 )
        goto LABEL_24;
    }
    sub_610B60((__int64)&src, (const char *)v56, (__int64)&v79, 0, v30, v31);
  }
LABEL_24:
  sub_610B60((__int64)&src, (const char *)v56, (__int64)&v71, 1, v30, v31);
  v53 = navstack_t_stack_index(v56);
  v32 = haystack;
  v72 = 0;
  v71 = -1;
  v75 = -1;
  v73 = -1;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v77 = 0;
  if ( (_QWORD)v58 )
    v32 = (const char *)v57;
  sub_4B0440((unsigned int *)&v71, (__int64)v32);
  for ( i = 0; i < (unsigned __int64)sub_4AFDE0(&v71) >> 2; ++i )
  {
    v79 = -1;
    v83 = -1;
    v81 = -1;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v80 = 0;
    v85 = 0;
    if ( (unsigned __int8)sub_4B06C0((unsigned int *)&v71, (__int64)&v79, i) )
      sub_610B60((__int64)&src, (const char *)v56, (__int64)&v79, 0, v34, v35);
  }
  navstack_t_stack_seek(v56, 0, v53, 1, 1);
  if ( v66 )
  {
    qfree(v66);
    v66 = nullptr;
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
    v67 = nullptr;
    *((_QWORD *)&v68 + 1) = 0;
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  if ( v66 )
    qfree(v66);
  navstack_t_deregister_live(v56);
  netnode_check(&src, a1, 0, 0);
  netnode_kill((int)&src);
  v36 = haystack;
  if ( (_QWORD)v58 )
    v36 = (const char *)v57;
  netnode_check(ptr, v36, 0, 0);
  netnode_kill((int)ptr);
  *(_OWORD *)n = 0;
  v61 = nullptr;
  v61 = (void *)qvector_reserve(&v61, 0, 3, 1);
  n[0] = 3;
  strcpy((char *)v61, "$ ");
  v37 = (char *)n[0];
  memset(ptr, 0, 24);
  if ( !n[0] )
  {
    v38 = (char *)v60;
    if ( !(_QWORD)v60 )
      goto LABEL_45;
    v50 = (char *)(v60 - 1);
    if ( (_QWORD)v60 == 1 )
      goto LABEL_45;
    v51 = v60 - 1;
LABEL_75:
    v52 = ptr[0];
    if ( ptr[2] < v38 )
    {
      v54 = v50;
      ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v38, 1);
      v50 = v54;
      v52 = ptr[0];
    }
    ptr[1] = v38;
    v50[(_QWORD)v52] = 0;
    memcpy((char *)ptr[0] + (unsigned __int64)v37, v59, v51);
    if ( ptr[1] )
      goto LABEL_78;
LABEL_45:
    v39 = haystack;
    goto LABEL_46;
  }
  ptr[0] = (void *)qalloc_or_throw(n[0], nullptr);
  ptr[2] = v37;
  memcpy(ptr[0], v61, (size_t)v37);
  ptr[1] = v37;
  if ( (_QWORD)v60 )
  {
    v51 = v60 - 1;
    if ( (_QWORD)v60 != 1 )
    {
      --v37;
      v50 = &v37[v60 - 1];
      v38 = &v37[v60];
      goto LABEL_75;
    }
  }
LABEL_78:
  v39 = (const char *)ptr[0];
LABEL_46:
  netnode_check(v56, v39, 0, 0);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  src = nullptr;
  *(_OWORD *)v64 = 0;
  if ( a1 )
  {
    v40 = strlen(a1);
    v41 = v40 + 1;
    v42 = v40;
    v39 = a1;
    src = (void *)qvector_reserve(&src, 0, v40 + 1, 1);
    v64[0] = v41;
    memmove(src, a1, v42);
    *((_BYTE *)src + v42) = 0;
  }
  v43 = (char *)n[0];
  memset(ptr, 0, 24);
  if ( n[0] )
  {
    ptr[0] = (void *)qalloc_or_throw(n[0], v39);
    ptr[2] = v43;
    memcpy(ptr[0], v61, (size_t)v43);
    ptr[1] = v43;
    if ( !v64[0] || (v48 = v64[0] - 1, v64[0] == 1) )
    {
LABEL_72:
      v45 = (const char *)ptr[0];
      goto LABEL_53;
    }
    --v43;
    v47 = (size_t)&v43[v64[0] - 1];
    v44 = &v43[v64[0]];
  }
  else
  {
    v44 = (char *)v64[0];
    if ( !v64[0] )
      goto LABEL_52;
    v47 = v64[0] - 1;
    if ( v64[0] == 1 )
      goto LABEL_52;
    v48 = v64[0] - 1;
  }
  v49 = ptr[0];
  if ( ptr[2] < v44 )
  {
    ptr[0] = (void *)qvector_reserve(ptr, ptr[0], v44, 1);
    v49 = ptr[0];
  }
  ptr[1] = v44;
  v49[v47] = 0;
  memcpy((char *)ptr[0] + (unsigned __int64)v43, src, v48);
  if ( ptr[1] )
    goto LABEL_72;
LABEL_52:
  v45 = haystack;
LABEL_53:
  netnode_rename((unsigned int)v56[0], v45, 0);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  if ( src )
  {
    v64[0] = 0;
    qfree(src);
  }
  if ( v61 )
  {
    n[0] = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return v87 - __readfsqword(0x28u);
}

