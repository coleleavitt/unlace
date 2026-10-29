__int64 __fastcall sub_5DD990(__int64 a1, const char *a2, __m128i a3, double a4)
{
  __int64 v4; // rdx
  __int64 v6; // rbx
  const char *v7; // r12
  size_t v8; // rbp
  void *v9; // rax
  _BYTE *v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  const char *v15; // r13
  _QWORD *v16; // rax
  const char *v17; // r15
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rbx
  size_t v21; // rax
  size_t v22; // r14
  const char *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rbp
  const char *v26; // rdi
  __int64 v27; // rbx
  size_t v28; // rax
  size_t v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  const void *v34; // rbx
  size_t v35; // rax
  size_t v36; // r12
  unsigned __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r12
  const char *v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rbx
  char *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  void *v47; // rdi
  size_t v48; // rdx
  __int64 v49; // rax
  void *v50; // rdi
  size_t v51; // r14
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  size_t v56; // r12
  __int64 v57; // rax
  size_t v58; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-B8h]
  __int64 v60; // [rsp+18h] [rbp-B0h]
  char v62; // [rsp+2Eh] [rbp-9Ah]
  char v63; // [rsp+2Fh] [rbp-99h]
  __int64 **v64; // [rsp+38h] [rbp-90h]
  __int64 v65; // [rsp+48h] [rbp-80h] BYREF
  __int64 v66; // [rsp+50h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-70h] BYREF
  __int128 v68; // [rsp+60h] [rbp-68h] BYREF
  __int64 v69; // [rsp+70h] [rbp-58h] BYREF
  int v70; // [rsp+78h] [rbp-50h]
  __int16 v71; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+88h] [rbp-40h]

  v62 = (char)a2;
  v72 = __readfsqword(0x28u);
  v60 = *(_QWORD *)(a1 + 144);
  if ( !*(_QWORD *)(v60 + 56) && !(_BYTE)a2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(v4 + 186) & 0xF) != 0xC )
    return set_qerrno(47, a2);
  sub_5C6D00(*(_QWORD *)(v4 + 48));
  *(_DWORD *)(a1 + 208) = 0;
  v6 = sub_5CB650(a1);
  *(_BYTE *)(v6 + 186) = 61;
  v7 = *(const char **)(v60 + 72);
  v8 = strlen(v7);
  v9 = (void *)qalloc_or_throw(v8 + 1, a2);
  v10 = memcpy(v9, v7, v8);
  v10[v8] = 0;
  *(_QWORD *)(v6 + 72) = v10;
  v11 = (char *)qalloc_or_throw(5, v7);
  strcpy(v11, "this");
  *(_QWORD *)v6 = v11;
  v12 = sub_5CB650(a1);
  *(_BYTE *)(v12 + 186) = 10;
  *(_QWORD *)(v12 + 48) = v6;
  *(_QWORD *)(v12 + 40) = 0x1000000;
  if ( !(unsigned __int8)sub_5C5B40(*(_QWORD *)(a1 + 112), v12, 0) )
    return (unsigned int)-1;
  v13 = *(_QWORD *)(a1 + 112);
  v65 = 0;
  if ( !(unsigned __int8)sub_5DD5D0(a1, (const char *)&v65, v13, 1u, 1, a3, a4) )
  {
LABEL_7:
    v14 = -1;
    goto LABEL_8;
  }
  tinfo_property = 0;
  v68 = 0;
  v66 = 0;
  copy_tinfo_t((char *)&v68 + 8);
  v69 = 0;
  copy_tinfo_t(&v69);
  v70 = 0;
  v71 = 0;
  clear_tinfo_t(&v66);
  clear_tinfo_t(&tinfo_property);
  copy_tinfo_t(&v68);
  v63 = create_tinfo(&v65, 10, 10, &v68);
  clear_tinfo_t(&v69);
  clear_tinfo_t((char *)&v68 + 8);
  clear_tinfo_t(&v68);
  if ( !v63 )
  {
    if ( !under_debugger )
      interr(1558);
    BUG();
  }
  v64 = (__int64 **)(v60 + 48);
  v15 = **(const char ***)(a1 + 104);
  v16 = *(_QWORD **)(v60 + 56);
  if ( v16 )
    goto LABEL_12;
  v30 = qalloc_or_throw(24, &byte_9[1]);
  *(_QWORD *)v30 = 0;
  *(_OWORD *)(v30 + 8) = 0;
  *(_QWORD *)(v60 + 56) = v30;
  v31 = *(_QWORD *)(v30 + 8);
  v32 = *(_QWORD *)v30;
  if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v31 + 1) )
  {
    v49 = qvector_reserve(v30, v32, v31 + 1, 88);
    *(_QWORD *)v30 = v49;
    v32 = v49;
    v31 = *(_QWORD *)(v30 + 8);
  }
  v33 = v32 + 88 * v31;
  *(_QWORD *)(v33 + 40) = 0;
  *(_QWORD *)v33 = 0;
  *(_QWORD *)(v33 + 48) = 1;
  *(_QWORD *)(v33 + 56) = 0;
  *(_BYTE *)(v33 + 80) = 0;
  *(_OWORD *)(v33 + 8) = 0;
  *(_OWORD *)(v33 + 24) = 0;
  *(_OWORD *)(v33 + 64) = 0;
  ++*(_QWORD *)(v30 + 8);
  *(_DWORD *)(v33 + 44) = 256;
  v34 = *(const void **)(v60 + 72);
  if ( v34 && (v35 = strlen(*(const char **)(v60 + 72)), (v36 = v35) != 0) )
  {
    v50 = *(void **)(v33 + 56);
    v51 = v35 + 1;
    if ( *(_QWORD *)(v33 + 72) < v35 + 1 )
    {
      v55 = qvector_reserve(v33 + 56, *(_QWORD *)(v33 + 56), v51, 1);
      *(_QWORD *)(v33 + 56) = v55;
      v50 = (void *)v55;
    }
    *(_QWORD *)(v33 + 64) = v51;
    memmove(v50, v34, v36);
    *(_BYTE *)(*(_QWORD *)(v33 + 56) + v36) = 0;
    v52 = *(_QWORD *)(v33 + 64);
    if ( v52 )
    {
      v39 = v52 - 1;
      v38 = v52 + 4;
      v37 = v52 + 5;
      goto LABEL_61;
    }
  }
  else
  {
    *(_QWORD *)(v33 + 64) = 0;
  }
  v37 = 6;
  v38 = 5;
  v39 = 0;
LABEL_61:
  v40 = *(const char **)(v33 + 56);
  if ( *(_QWORD *)(v33 + 72) < v37 )
  {
    v53 = qvector_reserve(v33 + 56, v40, v37, 1);
    *(_QWORD *)(v33 + 56) = v53;
    v40 = (const char *)v53;
  }
  *(_QWORD *)(v33 + 64) = v37;
  v40[v38] = 0;
  v41 = *(_QWORD *)(v33 + 56) + v39;
  *(_DWORD *)v41 = 1651799647;
  *(_BYTE *)(v41 + 4) = 108;
  v42 = sub_5CB650(a1);
  *(_BYTE *)(v42 + 186) = 61;
  v43 = (_QWORD *)v42;
  *(_QWORD *)(v42 + 72) = qstrdup(*(_QWORD *)(v33 + 56));
  v44 = (char *)qalloc_or_throw(10, v40);
  strcpy(v44, "__vftable");
  *v43 = v44;
  v45 = sub_5CB650(a1);
  *(_BYTE *)(v45 + 186) = 10;
  v46 = v45;
  *(_QWORD *)(v45 + 48) = v43;
  sub_5DB5D0(v64, *(_QWORD *)(a1 + 240), v45, 0);
  if ( (unsigned int)sub_5D8F60(a1, v46, 0) )
    goto LABEL_7;
  v16 = *(_QWORD **)(v60 + 56);
LABEL_12:
  if ( !v16[1] )
  {
LABEL_35:
    if ( v62 )
      goto LABEL_51;
    goto LABEL_36;
  }
  v59 = 0;
  while ( 1 )
  {
    v18 = 0;
    v19 = *v16 + 88 * v59;
    if ( *(_QWORD *)(v19 + 8) )
      break;
LABEL_29:
    if ( v62 )
      goto LABEL_21;
LABEL_23:
    ++v59;
    v16 = *(_QWORD **)(v60 + 56);
    if ( v59 >= v16[1] )
      goto LABEL_35;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)v19 + (v18 << 7);
    if ( *(_QWORD *)(v20 + 24) )
    {
      v17 = *(const char **)(v20 + 16);
      if ( (*v17 == 126 || !strncmp(*(const char **)(v20 + 16), "dtr_", 4u))
        && (*v15 == 126 || !strncmp(v15, "dtr_", 4u)) )
      {
        goto LABEL_18;
      }
    }
    else
    {
      v17 = haystack;
    }
    if ( !strcmp(v17, v15) )
      break;
LABEL_28:
    if ( (unsigned __int64)++v18 >= *(_QWORD *)(v19 + 8) )
      goto LABEL_29;
  }
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v20 + 64), 10);
  *(_QWORD *)&v68 = 0;
  *(_QWORD *)&v68 = get_tinfo_property(v65, 10);
  if ( !(unsigned __int8)compare_tinfo(tinfo_property, v68, 128) )
  {
    clear_tinfo_t(&v68);
    clear_tinfo_t(&tinfo_property);
    goto LABEL_28;
  }
  clear_tinfo_t(&v68);
  clear_tinfo_t(&tinfo_property);
LABEL_18:
  if ( v62 != 1 && v59 && (getinf(57) & 0xF) == 6 )
  {
LABEL_21:
    if ( (getinf(57) & 0xF) != 6 )
    {
      v62 = v63;
      goto LABEL_23;
    }
LABEL_51:
    sub_5CF660((__int64)v64, v15);
    if ( (getinf(57) & 0xF) == 6 )
    {
      if ( *v15 == 126 || !strncmp(v15, "dtr_", 4u) )
      {
        sub_5CF660((__int64)v64, v15);
        v14 = 0;
      }
      else
      {
        sub_5CF7D0((__int64)v64, *(_QWORD *)(a1 + 240));
        v14 = 0;
      }
      goto LABEL_8;
    }
LABEL_36:
    v14 = 0;
    goto LABEL_8;
  }
  if ( v15 && (v21 = strlen(v15), (v22 = v21) != 0) )
  {
    v47 = *(void **)(v20 + 16);
    v48 = v21 + 1;
    if ( *(_QWORD *)(v20 + 32) < v21 + 1 )
    {
      v58 = v21 + 1;
      v54 = qvector_reserve(v20 + 16, *(_QWORD *)(v20 + 16), v48, 1);
      *(_QWORD *)(v20 + 16) = v54;
      v48 = v58;
      v47 = (void *)v54;
    }
    *(_QWORD *)(v20 + 24) = v48;
    memmove(v47, v15, v22);
    *(_BYTE *)(*(_QWORD *)(v20 + 16) + v22) = 0;
  }
  else
  {
    *(_QWORD *)(v20 + 24) = 0;
  }
  if ( (getinf(57) & 0xF) != 6 && v59 )
    goto LABEL_36;
  *(_BYTE *)(v19 + 80) = 1;
  copy_tinfo_t(v20 + 64);
  if ( (getinf(57) & 0xF) != 6 || !*(_QWORD *)(v20 + 24) )
    goto LABEL_36;
  v23 = *(const char **)(v20 + 16);
  if ( *v23 != 126 && strncmp(v23, "dtr_", 4u) )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( (unsigned __int64)(v18 + 1) >= *(_QWORD *)(v19 + 8) )
    goto LABEL_36;
  v24 = (v18 + 1) << 7;
  v25 = v24 + *(_QWORD *)v19;
  if ( !*(_QWORD *)(v25 + 24) )
    goto LABEL_36;
  v26 = *(const char **)(v25 + 16);
  if ( *v26 == 126 || !strncmp(v26, "dtr_", 4u) )
  {
    copy_tinfo_t(v25 + 64);
    v27 = *(_QWORD *)v19 + v24;
    if ( v15 && (v28 = strlen(v15), (v29 = v28) != 0) )
    {
      v56 = v28 + 1;
      if ( *(_QWORD *)(v27 + 32) < v28 + 1 )
        *(_QWORD *)(v27 + 16) = qvector_reserve(v27 + 16, *(_QWORD *)(v27 + 16), v28 + 1, 1);
      *(_QWORD *)(v27 + 24) = v56;
      memmove(*(void **)(v27 + 16), v15, v29);
      v57 = *(_QWORD *)(v27 + 16);
      v14 = 0;
      *(_BYTE *)(v57 + v29) = 0;
    }
    else
    {
      *(_QWORD *)(v27 + 24) = 0;
      v14 = 0;
    }
  }
  else
  {
    v14 = 0;
  }
LABEL_8:
  clear_tinfo_t(&v65);
  return v14;
}

