__int64 __fastcall sub_5F9840(__int64 a1, char a2, __m128i a3, double a4)
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
  unsigned __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rbp
  const char *v27; // rdi
  __int64 v28; // rbx
  size_t v29; // rax
  size_t v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbp
  const void *v35; // rbx
  size_t v36; // rax
  size_t v37; // r12
  unsigned __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rbx
  char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbp
  void *v48; // rdi
  size_t v49; // rdx
  __int64 v50; // rax
  void *v51; // rdi
  size_t v52; // r14
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  size_t v57; // r12
  __int64 v58; // rax
  size_t v59; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v60; // [rsp+10h] [rbp-B8h]
  __int64 v61; // [rsp+18h] [rbp-B0h]
  char v63; // [rsp+2Eh] [rbp-9Ah]
  char v64; // [rsp+2Fh] [rbp-99h]
  __int64 **v65; // [rsp+38h] [rbp-90h]
  unsigned __int64 v66; // [rsp+48h] [rbp-80h] BYREF
  __int64 v67; // [rsp+50h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-70h] BYREF
  __int128 v69; // [rsp+60h] [rbp-68h] BYREF
  __int64 v70; // [rsp+70h] [rbp-58h] BYREF
  int v71; // [rsp+78h] [rbp-50h]
  __int16 v72; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v73; // [rsp+88h] [rbp-40h]

  v63 = a2;
  v73 = __readfsqword(0x28u);
  v61 = *(_QWORD *)(a1 + 152);
  if ( !*(_QWORD *)(v61 + 56) && !a2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(v4 + 186) & 0xF) != 0xC )
    return set_qerrno(47);
  sub_5E2A10(*(_QWORD *)(v4 + 48));
  *(_DWORD *)(a1 + 216) = 0;
  v6 = sub_5E7430(a1);
  *(_BYTE *)(v6 + 186) = 61;
  v7 = *(const char **)(v61 + 72);
  v8 = strlen(v7);
  v9 = (void *)qalloc_or_throw(v8 + 1);
  v10 = memcpy(v9, v7, v8);
  v10[v8] = 0;
  *(_QWORD *)(v6 + 72) = v10;
  v11 = (char *)qalloc_or_throw(5);
  strcpy(v11, "this");
  *(_QWORD *)v6 = v11;
  v12 = sub_5E7430(a1);
  *(_BYTE *)(v12 + 186) = 10;
  *(_QWORD *)(v12 + 48) = v6;
  *(_QWORD *)(v12 + 40) = &loc_1000000;
  if ( !(unsigned __int8)sub_5E1810(*(_QWORD *)(a1 + 120), v12, 0) )
    return (unsigned int)-1;
  v13 = *(_QWORD *)(a1 + 120);
  v66 = 0;
  if ( !(unsigned __int8)sub_5F9490(a1, &v66, v13, 1u, 1, a3, a4) )
  {
LABEL_7:
    v14 = -1;
    goto LABEL_8;
  }
  tinfo_property = 0;
  v69 = 0;
  v67 = 0;
  copy_tinfo_t((char *)&v69 + 8);
  v70 = 0;
  copy_tinfo_t(&v70);
  v71 = 0;
  v72 = 0;
  clear_tinfo_t(&v67);
  clear_tinfo_t(&tinfo_property);
  copy_tinfo_t(&v69);
  v64 = create_tinfo(&v66, 10, 10, &v69);
  clear_tinfo_t(&v70);
  clear_tinfo_t((char *)&v69 + 8);
  clear_tinfo_t(&v69);
  if ( !v64 )
  {
    if ( !under_debugger )
      interr(1558);
    BUG();
  }
  v65 = (__int64 **)(v61 + 48);
  v15 = **(const char ***)(a1 + 112);
  v16 = *(_QWORD **)(v61 + 56);
  if ( v16 )
    goto LABEL_12;
  v31 = qalloc_or_throw(24);
  *(_QWORD *)v31 = 0;
  *(_OWORD *)(v31 + 8) = 0;
  *(_QWORD *)(v61 + 56) = v31;
  v32 = *(_QWORD *)(v31 + 8);
  v33 = *(_QWORD *)v31;
  if ( *(_QWORD *)(v31 + 16) < (unsigned __int64)(v32 + 1) )
  {
    v50 = qvector_reserve(v31, v33, v32 + 1, 88);
    *(_QWORD *)v31 = v50;
    v33 = v50;
    v32 = *(_QWORD *)(v31 + 8);
  }
  v34 = v33 + 88 * v32;
  *(_QWORD *)(v34 + 40) = 0;
  *(_QWORD *)v34 = 0;
  *(_QWORD *)(v34 + 48) = 1;
  *(_QWORD *)(v34 + 56) = 0;
  *(_BYTE *)(v34 + 80) = 0;
  *(_OWORD *)(v34 + 8) = 0;
  *(_OWORD *)(v34 + 24) = 0;
  *(_OWORD *)(v34 + 64) = 0;
  ++*(_QWORD *)(v31 + 8);
  *(_DWORD *)(v34 + 44) = 256;
  v35 = *(const void **)(v61 + 72);
  if ( v35 && (v36 = strlen(*(const char **)(v61 + 72)), (v37 = v36) != 0) )
  {
    v51 = *(void **)(v34 + 56);
    v52 = v36 + 1;
    if ( *(_QWORD *)(v34 + 72) < v36 + 1 )
    {
      v56 = qvector_reserve(v34 + 56, *(_QWORD *)(v34 + 56), v52, 1);
      *(_QWORD *)(v34 + 56) = v56;
      v51 = (void *)v56;
    }
    *(_QWORD *)(v34 + 64) = v52;
    memmove(v51, v35, v37);
    *(_BYTE *)(*(_QWORD *)(v34 + 56) + v37) = 0;
    v53 = *(_QWORD *)(v34 + 64);
    if ( v53 )
    {
      v40 = v53 - 1;
      v39 = v53 + 4;
      v38 = v53 + 5;
      goto LABEL_61;
    }
  }
  else
  {
    *(_QWORD *)(v34 + 64) = 0;
  }
  v38 = 6;
  v39 = 5;
  v40 = 0;
LABEL_61:
  v41 = *(_QWORD *)(v34 + 56);
  if ( *(_QWORD *)(v34 + 72) < v38 )
  {
    v54 = qvector_reserve(v34 + 56, v41, v38, 1);
    *(_QWORD *)(v34 + 56) = v54;
    v41 = v54;
  }
  *(_QWORD *)(v34 + 64) = v38;
  *(_BYTE *)(v41 + v39) = 0;
  v42 = *(_QWORD *)(v34 + 56) + v40;
  *(_DWORD *)v42 = 1651799647;
  *(_BYTE *)(v42 + 4) = 108;
  v43 = sub_5E7430(a1);
  *(_BYTE *)(v43 + 186) = 61;
  v44 = (_QWORD *)v43;
  *(_QWORD *)(v43 + 72) = qstrdup(*(_QWORD *)(v34 + 56));
  v45 = (char *)qalloc_or_throw(10);
  strcpy(v45, "__vftable");
  *v44 = v45;
  v46 = sub_5E7430(a1);
  *(_BYTE *)(v46 + 186) = 10;
  v47 = v46;
  *(_QWORD *)(v46 + 48) = v44;
  sub_5F7470(v65, *(_QWORD *)(a1 + 248), v46, 0);
  if ( (unsigned int)sub_5F4DE0(a1, v47, 0) )
    goto LABEL_7;
  v16 = *(_QWORD **)(v61 + 56);
LABEL_12:
  if ( !v16[1] )
  {
LABEL_35:
    if ( v63 )
      goto LABEL_51;
    goto LABEL_36;
  }
  v60 = 0;
  while ( 1 )
  {
    v18 = 0;
    v19 = *v16 + 88 * v60;
    if ( *(_QWORD *)(v19 + 8) )
      break;
LABEL_29:
    if ( v63 )
      goto LABEL_21;
LABEL_23:
    ++v60;
    v16 = *(_QWORD **)(v61 + 56);
    if ( v60 >= v16[1] )
      goto LABEL_35;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)v19 + 144 * v18;
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
  *(_QWORD *)&v69 = 0;
  *(_QWORD *)&v69 = get_tinfo_property(v66, 10);
  if ( !(unsigned __int8)compare_tinfo(tinfo_property, v69, 128) )
  {
    clear_tinfo_t(&v69);
    clear_tinfo_t(&tinfo_property);
    goto LABEL_28;
  }
  clear_tinfo_t(&v69);
  clear_tinfo_t(&tinfo_property);
LABEL_18:
  if ( v63 != 1 && v60 && (getinf(57) & 0xF) == 6 )
  {
LABEL_21:
    if ( (getinf(57) & 0xF) != 6 )
    {
      v63 = v64;
      goto LABEL_23;
    }
LABEL_51:
    sub_5EB430((__int64)v65, v15);
    if ( (getinf(57) & 0xF) == 6 )
    {
      if ( *v15 == 126 || !strncmp(v15, "dtr_", 4u) )
      {
        sub_5EB430((__int64)v65, v15);
        v14 = 0;
      }
      else
      {
        sub_5EB5B0((__int64)v65, *(_QWORD *)(a1 + 248));
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
    v48 = *(void **)(v20 + 16);
    v49 = v21 + 1;
    if ( *(_QWORD *)(v20 + 32) < v21 + 1 )
    {
      v59 = v21 + 1;
      v55 = qvector_reserve(v20 + 16, *(_QWORD *)(v20 + 16), v49, 1);
      *(_QWORD *)(v20 + 16) = v55;
      v49 = v59;
      v48 = (void *)v55;
    }
    *(_QWORD *)(v20 + 24) = v49;
    memmove(v48, v15, v22);
    *(_BYTE *)(*(_QWORD *)(v20 + 16) + v22) = 0;
  }
  else
  {
    *(_QWORD *)(v20 + 24) = 0;
  }
  if ( (getinf(57) & 0xF) != 6 && v60 )
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
  v24 = v18 + 1;
  if ( v24 >= *(_QWORD *)(v19 + 8) )
    goto LABEL_36;
  v25 = 144 * v24;
  v26 = 144 * v24 + *(_QWORD *)v19;
  if ( !*(_QWORD *)(v26 + 24) )
    goto LABEL_36;
  v27 = *(const char **)(v26 + 16);
  if ( *v27 == 126 || !strncmp(v27, "dtr_", 4u) )
  {
    copy_tinfo_t(v26 + 64);
    v28 = *(_QWORD *)v19 + v25;
    if ( v15 && (v29 = strlen(v15), (v30 = v29) != 0) )
    {
      v57 = v29 + 1;
      if ( *(_QWORD *)(v28 + 32) < v29 + 1 )
        *(_QWORD *)(v28 + 16) = qvector_reserve(v28 + 16, *(_QWORD *)(v28 + 16), v29 + 1, 1);
      *(_QWORD *)(v28 + 24) = v57;
      memmove(*(void **)(v28 + 16), v15, v30);
      v58 = *(_QWORD *)(v28 + 16);
      v14 = 0;
      *(_BYTE *)(v58 + v30) = 0;
    }
    else
    {
      *(_QWORD *)(v28 + 24) = 0;
      v14 = 0;
    }
  }
  else
  {
    v14 = 0;
  }
LABEL_8:
  clear_tinfo_t(&v66);
  return v14;
}
