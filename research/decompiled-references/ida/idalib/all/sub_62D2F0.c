unsigned __int64 __fastcall sub_62D2F0(const char *a1)
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
  _BYTE *v15; // rsi
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
  unsigned int v53; // [rsp+10h] [rbp-9F8h]
  char *v54; // [rsp+10h] [rbp-9F8h]
  char v55[8]; // [rsp+28h] [rbp-9E0h] BYREF
  int v56[2]; // [rsp+30h] [rbp-9D8h] BYREF
  int v57; // [rsp+38h] [rbp-9D0h]
  void *v58; // [rsp+40h] [rbp-9C8h] BYREF
  __int128 v59; // [rsp+48h] [rbp-9C0h]
  void *v60; // [rsp+60h] [rbp-9A8h] BYREF
  __int128 v61; // [rsp+68h] [rbp-9A0h]
  void *v62; // [rsp+80h] [rbp-988h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-980h]
  void *src; // [rsp+A0h] [rbp-968h] BYREF
  size_t v65[3]; // [rsp+A8h] [rbp-960h]
  void *ptr[5]; // [rsp+C0h] [rbp-948h] BYREF
  void *v67; // [rsp+E8h] [rbp-920h]
  void *v68; // [rsp+F0h] [rbp-918h]
  __int128 v69; // [rsp+F8h] [rbp-910h]
  void *v70; // [rsp+108h] [rbp-900h]
  __int128 v71; // [rsp+110h] [rbp-8F8h]
  int v72[4]; // [rsp+120h] [rbp-8E8h] BYREF
  __int64 v73; // [rsp+130h] [rbp-8D8h]
  __int64 v74; // [rsp+538h] [rbp-4D0h]
  __int64 v75; // [rsp+540h] [rbp-4C8h]
  __int64 v76; // [rsp+548h] [rbp-4C0h]
  char v77; // [rsp+550h] [rbp-4B8h]
  __int128 v78; // [rsp+551h] [rbp-4B7h]
  __int64 v79; // [rsp+561h] [rbp-4A7h]
  int v80[4]; // [rsp+570h] [rbp-498h] BYREF
  __int64 v81; // [rsp+580h] [rbp-488h]
  __int64 v82; // [rsp+988h] [rbp-80h]
  __int64 v83; // [rsp+990h] [rbp-78h]
  __int64 v84; // [rsp+998h] [rbp-70h]
  char v85; // [rsp+9A0h] [rbp-68h]
  __int128 v86; // [rsp+9A1h] [rbp-67h]
  __int64 v87; // [rsp+9B1h] [rbp-57h]
  unsigned __int64 v88; // [rsp+9C8h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  netnode_check(v55, a1, 0, 0);
  if ( !(unsigned __int8)netnode_exist(v55) )
    return v88 - __readfsqword(0x28u);
  v58 = nullptr;
  v59 = 0;
  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = v2 + 1;
    v4 = v2;
    v5 = (void *)qvector_reserve(&v58, 0, v2 + 1, 1);
    *(_QWORD *)&v59 = v3;
    v58 = v5;
    memmove(v5, a1, v4);
    *((_BYTE *)v58 + v4) = 0;
    v6 = v58;
    v7 = v59 - 1;
    v8 = v59 + 4;
    v9 = v59 + 5;
    if ( !(_QWORD)v59 )
    {
      v7 = 0;
      v9 = 6;
      v8 = 5;
    }
    if ( *((_QWORD *)&v59 + 1) >= v9 )
    {
      *(_QWORD *)&v59 = v9;
      *((_BYTE *)v58 + v8) = 0;
      v10 = (char *)v58 + v7;
      *(_DWORD *)v10 = 2019913262;
      v10[4] = 116;
      v60 = nullptr;
      v61 = 0;
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
  v58 = (void *)qvector_reserve(&v58, v6, v9, 1);
  *(_QWORD *)&v59 = v9;
  *((_BYTE *)v58 + v8) = 0;
  v46 = (char *)v58 + v7;
  *(_DWORD *)v46 = 2019913262;
  v46[4] = 116;
  v60 = nullptr;
  v61 = 0;
  if ( !a1 )
  {
    v15 = nullptr;
    v17 = 4;
    v18 = 5;
    v16 = 0;
LABEL_66:
    v60 = (void *)qvector_reserve(&v60, v15, v18, 1);
    v15 = v60;
    goto LABEL_11;
  }
LABEL_8:
  v11 = strlen(a1);
  v12 = v11 + 1;
  v13 = v11;
  v14 = (void *)qvector_reserve(&v60, 0, v11 + 1, 1);
  *(_QWORD *)&v61 = v12;
  v60 = v14;
  memmove(v14, a1, v13);
  *((_BYTE *)v60 + v13) = 0;
  v15 = v60;
  v16 = v61 - 1;
  v17 = v61 + 3;
  v18 = v61 + 4;
  if ( !(_QWORD)v61 )
  {
    v16 = 0;
    v18 = 5;
    v17 = 4;
  }
  if ( *((_QWORD *)&v61 + 1) < v18 )
    goto LABEL_66;
LABEL_11:
  *(_QWORD *)&v61 = v18;
  v15[v17] = 0;
  *(_DWORD *)((char *)v60 + v16) = 1886221358;
  *(_QWORD *)v56 = -1;
  v57 = 0;
  navstack_t_register_live(v56);
  LODWORD(n[0]) = 0;
  v62 = off_2B25850;
  n[1] = -1;
  src = nullptr;
  *(_OWORD *)v65 = 0;
  if ( a1 )
  {
    v23 = strlen(a1);
    v24 = v23 + 1;
    v25 = v23;
    v15 = a1;
    src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
    v65[0] = v24;
    memmove(src, a1, v25);
    *((_BYTE *)src + v25) = 0;
  }
  ptr[3] = (void *)-1LL;
  ptr[4] = nullptr;
  v67 = &v62;
  memset(ptr, 0, 24);
  v26 = (void *)idaplace_t__clone(&v62, v15, v19, v20, v21, v22);
  v27 = v65[0];
  v67 = v26;
  v68 = nullptr;
  v69 = 0;
  if ( v65[0] )
  {
    v68 = (void *)qalloc_or_throw(v65[0]);
    *((_QWORD *)&v69 + 1) = v27;
    memcpy(v68, src, v27);
    *(_QWORD *)&v69 = v27;
  }
  v70 = nullptr;
  v71 = 0;
  if ( src )
  {
    v65[0] = 0;
    qfree(src);
  }
  v28 = haystack;
  if ( (_QWORD)v61 )
    v28 = (const char *)v60;
  navstack_t_init(v56, ptr, v28, 0);
  LOBYTE(src) = 0;
  v65[0] = (size_t)a1;
  v73 = 0;
  v76 = -1;
  v74 = -1;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  *(__m128i *)v72 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v78 = 0;
  sub_4C70A0((__int64)v72, (__int64)a1);
  v29 = (unsigned __int64)sub_4C6A30(v72) >> 2;
  while ( v29 )
  {
    while ( 1 )
    {
      --v29;
      v81 = 0;
      v84 = -1;
      v82 = -1;
      v83 = 0;
      v85 = 0;
      v87 = 0;
      *(__m128i *)v80 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
      v86 = 0;
      if ( (unsigned __int8)sub_4C7330((__int64 *)v72, (__int64)v80, v29) )
        break;
      if ( !v29 )
        goto LABEL_24;
    }
    sub_62D040((__int64)&src, (const char *)v56, (__int64)v80, 0, v30, v31);
  }
LABEL_24:
  sub_62D040((__int64)&src, (const char *)v56, (__int64)v72, 1, v30, v31);
  v53 = navstack_t_stack_index((__int64)v56);
  v32 = haystack;
  v73 = 0;
  v76 = -1;
  v74 = -1;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  *(__m128i *)v72 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  v78 = 0;
  if ( (_QWORD)v59 )
    v32 = (const char *)v58;
  sub_4C70A0((__int64)v72, (__int64)v32);
  for ( i = 0; i < (unsigned __int64)sub_4C6A30(v72) >> 2; ++i )
  {
    v81 = 0;
    v84 = -1;
    v82 = -1;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    *(__m128i *)v80 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v86 = 0;
    if ( (unsigned __int8)sub_4C7330((__int64 *)v72, (__int64)v80, i) )
      sub_62D040((__int64)&src, (const char *)v56, (__int64)v80, 0, v34, v35);
  }
  navstack_t_stack_seek((__int64)v56, nullptr, v53, 1, 1);
  if ( v67 )
  {
    qfree(v67);
    v67 = nullptr;
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
    v68 = nullptr;
    *((_QWORD *)&v69 + 1) = 0;
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v67 )
    qfree(v67);
  navstack_t_deregister_live(v56);
  netnode_check(&src, a1, 0, 0);
  netnode_kill((int)&src);
  v36 = haystack;
  if ( (_QWORD)v59 )
    v36 = (const char *)v58;
  netnode_check(ptr, v36, 0, 0);
  netnode_kill((int)ptr);
  *(_OWORD *)n = 0;
  v62 = nullptr;
  v62 = (void *)qvector_reserve(&v62, 0, 3, 1);
  n[0] = 3;
  strcpy((char *)v62, "$ ");
  v37 = (char *)n[0];
  memset(ptr, 0, 24);
  if ( !n[0] )
  {
    v38 = (char *)v61;
    if ( !(_QWORD)v61 )
      goto LABEL_45;
    v50 = (char *)(v61 - 1);
    if ( (_QWORD)v61 == 1 )
      goto LABEL_45;
    v51 = v61 - 1;
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
    memcpy((char *)ptr[0] + (unsigned __int64)v37, v60, v51);
    if ( ptr[1] )
      goto LABEL_78;
LABEL_45:
    v39 = haystack;
    goto LABEL_46;
  }
  ptr[0] = (void *)qalloc_or_throw(n[0]);
  ptr[2] = v37;
  memcpy(ptr[0], v62, (size_t)v37);
  ptr[1] = v37;
  if ( (_QWORD)v61 )
  {
    v51 = v61 - 1;
    if ( (_QWORD)v61 != 1 )
    {
      --v37;
      v50 = &v37[v61 - 1];
      v38 = &v37[v61];
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
  *(_OWORD *)v65 = 0;
  if ( a1 )
  {
    v40 = strlen(a1);
    v41 = v40 + 1;
    v42 = v40;
    src = (void *)qvector_reserve(&src, 0, v40 + 1, 1);
    v65[0] = v41;
    memmove(src, a1, v42);
    *((_BYTE *)src + v42) = 0;
  }
  v43 = (char *)n[0];
  memset(ptr, 0, 24);
  if ( n[0] )
  {
    ptr[0] = (void *)qalloc_or_throw(n[0]);
    ptr[2] = v43;
    memcpy(ptr[0], v62, (size_t)v43);
    ptr[1] = v43;
    if ( !v65[0] || (v48 = v65[0] - 1, v65[0] == 1) )
    {
LABEL_72:
      v45 = (const char *)ptr[0];
      goto LABEL_53;
    }
    --v43;
    v47 = (size_t)&v43[v65[0] - 1];
    v44 = &v43[v65[0]];
  }
  else
  {
    v44 = (char *)v65[0];
    if ( !v65[0] )
      goto LABEL_52;
    v47 = v65[0] - 1;
    if ( v65[0] == 1 )
      goto LABEL_52;
    v48 = v65[0] - 1;
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
  netnode_rename(*(_QWORD *)v56, v45, 0);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  if ( src )
  {
    v65[0] = 0;
    qfree(src);
  }
  if ( v62 )
  {
    n[0] = 0;
    qfree(v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  return v88 - __readfsqword(0x28u);
}
