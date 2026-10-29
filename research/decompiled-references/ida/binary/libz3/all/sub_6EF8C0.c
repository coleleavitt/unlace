__int64 __fastcall sub_6EF8C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // r12
  char **v4; // r12
  char **exception; // r12
  char **v6; // r12
  unsigned int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r12
  unsigned int v19; // eax
  unsigned int v20; // r13d
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r15d
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r14
  unsigned int v29; // eax
  _QWORD *v30; // rcx
  __int64 v31; // r12
  unsigned int v32; // eax
  unsigned int v33; // r13d
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int v36; // r15d
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r15
  __int64 v41; // r14
  unsigned int v42; // eax
  _QWORD *v43; // rcx
  __int64 v44; // r12
  unsigned int v45; // eax
  unsigned int v46; // r13d
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int v49; // r15d
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 v54; // r14
  unsigned int v55; // eax
  _QWORD *v56; // rcx
  __int64 v57; // r12
  unsigned int v58; // eax
  unsigned int v60; // r13d
  unsigned int v61; // edx
  size_t v62; // rsi
  unsigned int v63; // r15d
  unsigned int *v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r15
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  void *v72; // [rsp+0h] [rbp-A8h]
  unsigned int v73; // [rsp+14h] [rbp-94h]
  void *v74; // [rsp+18h] [rbp-90h]
  unsigned int v76; // [rsp+30h] [rbp-78h]
  _QWORD *v77; // [rsp+30h] [rbp-78h]
  unsigned int v78; // [rsp+30h] [rbp-78h]
  _QWORD *v79; // [rsp+30h] [rbp-78h]
  unsigned int v80; // [rsp+30h] [rbp-78h]
  _QWORD *v81; // [rsp+30h] [rbp-78h]
  unsigned int v82; // [rsp+30h] [rbp-78h]
  _QWORD *v83; // [rsp+30h] [rbp-78h]
  int v84[2]; // [rsp+50h] [rbp-58h] BYREF

  v9 = *(_DWORD *)(a2 + 712);
  *(_DWORD *)(a2 + 712) = 0;
  v73 = v9;
  v10 = (_QWORD *)sub_186B270(0x30u);
  *v10 = a2;
  v11 = v10;
  v74 = v10 + 1;
  sub_1858590(v10 + 1, a3);
  *(_QWORD *)v84 = 0;
  sub_14B7810((_DWORD)v11 + 16, a2, (int)v84, v12, v13, v14, v72);
  sub_18572D0(v84);
  v11[4] = 0;
  v15 = sub_186B270(0x98u);
  sub_E98EB0(v15, a2);
  v16 = sub_E98AC0(v15);
  v17 = (_QWORD *)v11[4];
  v18 = v16;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    v76 = v19;
    if ( (unsigned int)v18 < v19 )
      goto LABEL_11;
    v20 = v18 + 1;
    if ( v19 >= (int)v18 + 1 )
    {
      *((_DWORD *)v17 - 1) = v20;
      goto LABEL_11;
    }
  }
  else
  {
    v20 = v16 + 1;
    if ( v16 == -1 )
      goto LABEL_11;
    v71 = (_QWORD *)sub_186B270(0x18u);
    v17 = v71 + 1;
    *v71 = 2;
    v11[4] = v71 + 1;
    v76 = 0;
  }
  while ( 1 )
  {
    v25 = *((_DWORD *)v17 - 2);
    if ( v25 >= v20 )
      break;
    v21 = (3 * v25 + 1) >> 1;
    v22 = 8 * v21 + 8;
    v23 = v21;
    if ( 8 * v25 + 8 >= (unsigned int)v22 || v25 >= v21 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v84, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v84);
      sub_233E40((__int64)v84);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v17 - 1, v22);
    v17 = v24 + 2;
    *v24 = v23;
    v11[4] = v24 + 2;
  }
  *((_DWORD *)v17 - 1) = v20;
  v26 = 8LL * v20;
  v27 = 8LL * v76;
  if ( v27 != v26 )
  {
    v77 = v17;
    memset(&v17[(unsigned __int64)v27 / 8], 0, v26 - v27);
    v17 = v77;
  }
LABEL_11:
  v17[v18] = v15;
  v28 = sub_186B270(0x98u);
  sub_ECCA20(v28, a2);
  v29 = sub_ECC6F0(v28);
  v30 = (_QWORD *)v11[4];
  v31 = v29;
  if ( v30 )
  {
    v32 = *((_DWORD *)v30 - 1);
    v78 = v32;
    if ( (unsigned int)v31 < v32 )
      goto LABEL_21;
    v33 = v31 + 1;
    if ( v32 >= (int)v31 + 1 )
    {
      *((_DWORD *)v30 - 1) = v33;
      goto LABEL_21;
    }
  }
  else
  {
    v33 = v29 + 1;
    if ( v29 == -1 )
      goto LABEL_21;
    v68 = (_QWORD *)sub_186B270(0x18u);
    v30 = v68 + 1;
    *v68 = 2;
    v11[4] = v68 + 1;
    v78 = 0;
  }
  while ( 1 )
  {
    v38 = *((_DWORD *)v30 - 2);
    if ( v38 >= v33 )
      break;
    v34 = (3 * v38 + 1) >> 1;
    v35 = 8 * v34 + 8;
    v36 = v34;
    if ( 8 * v38 + 8 >= (unsigned int)v35 || v38 >= v34 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v84, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v84);
      sub_233E40((__int64)v84);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = (unsigned int *)sub_186B300(v30 - 1, v35);
    v30 = v37 + 2;
    *v37 = v36;
    v11[4] = v37 + 2;
  }
  *((_DWORD *)v30 - 1) = v33;
  v39 = 8LL * v33;
  v40 = 8LL * v78;
  if ( v40 != v39 )
  {
    v79 = v30;
    memset(&v30[(unsigned __int64)v40 / 8], 0, v39 - v40);
    v30 = v79;
  }
LABEL_21:
  v30[v31] = v28;
  v41 = sub_186B270(0x98u);
  sub_EAD0A0(v41, a2);
  v42 = sub_EAC5F0(v41);
  v43 = (_QWORD *)v11[4];
  v44 = v42;
  if ( v43 )
  {
    v45 = *((_DWORD *)v43 - 1);
    v80 = v45;
    if ( (unsigned int)v44 < v45 )
      goto LABEL_31;
    v46 = v44 + 1;
    if ( v45 >= (int)v44 + 1 )
    {
      *((_DWORD *)v43 - 1) = v46;
      goto LABEL_31;
    }
  }
  else
  {
    v46 = v42 + 1;
    if ( v42 == -1 )
      goto LABEL_31;
    v69 = (_QWORD *)sub_186B270(0x18u);
    v43 = v69 + 1;
    *v69 = 2;
    v11[4] = v69 + 1;
    v80 = 0;
  }
  while ( 1 )
  {
    v51 = *((_DWORD *)v43 - 2);
    if ( v51 >= v46 )
      break;
    v47 = (3 * v51 + 1) >> 1;
    v48 = 8 * v47 + 8;
    v49 = v47;
    if ( 8 * v51 + 8 >= (unsigned int)v48 || v51 >= v47 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v84, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v84);
      sub_233E40((__int64)v84);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v50 = (unsigned int *)sub_186B300(v43 - 1, v48);
    v43 = v50 + 2;
    *v50 = v49;
    v11[4] = v50 + 2;
  }
  *((_DWORD *)v43 - 1) = v46;
  v52 = 8LL * v46;
  v53 = 8LL * v80;
  if ( v53 != v52 )
  {
    v81 = v43;
    memset(&v43[(unsigned __int64)v53 / 8], 0, v52 - v53);
    v43 = v81;
  }
LABEL_31:
  v43[v44] = v41;
  v54 = sub_186B270(0xC0u);
  sub_EBFA90(v54, a2);
  v55 = sub_EBF650(v54);
  v56 = (_QWORD *)v11[4];
  v57 = v55;
  if ( v56 )
  {
    v58 = *((_DWORD *)v56 - 1);
    v82 = v58;
    if ( (unsigned int)v57 < v58 )
      goto LABEL_33;
    v60 = v57 + 1;
    if ( v58 >= (int)v57 + 1 )
    {
      *((_DWORD *)v56 - 1) = v60;
      goto LABEL_33;
    }
  }
  else
  {
    v60 = v55 + 1;
    if ( v55 == -1 )
      goto LABEL_33;
    v70 = (_QWORD *)sub_186B270(0x18u);
    v56 = v70 + 1;
    *v70 = 2;
    v11[4] = v70 + 1;
    v82 = 0;
  }
  while ( 1 )
  {
    v65 = *((_DWORD *)v56 - 2);
    if ( v65 >= v60 )
      break;
    v61 = (3 * v65 + 1) >> 1;
    v62 = 8 * v61 + 8;
    v63 = v61;
    if ( 8 * v65 + 8 >= (unsigned int)v62 || v65 >= v61 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v84, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v84);
      sub_233E40((__int64)v84);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v64 = (unsigned int *)sub_186B300(v56 - 1, v62);
    v56 = v64 + 2;
    *v64 = v63;
    v11[4] = v64 + 2;
  }
  *((_DWORD *)v56 - 1) = v60;
  v66 = 8LL * v60;
  v67 = 8LL * v82;
  if ( v67 != v66 )
  {
    v83 = v56;
    memset(&v56[(unsigned __int64)v67 / 8], 0, v66 - v67);
    v56 = v83;
  }
LABEL_33:
  v56[v57] = v54;
  sub_1863170(v74, a3);
  *((_BYTE *)v11 + 40) = sub_1859610(v74, "reduce_all_selects", 0);
  *((_BYTE *)v11 + 41) = sub_1859610(v74, "dont_sub", 0);
  sub_17F9A60(v84, "smt");
  sub_1863170(v74, v84);
  *((_BYTE *)v11 + 42) = sub_1859610(v74, "qsat_use_qel", 1);
  sub_18572D0(v84);
  *a1 = v11;
  *(_DWORD *)(a2 + 712) = v73;
  return v73;
}

