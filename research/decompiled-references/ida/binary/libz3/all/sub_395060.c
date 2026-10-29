__int64 __fastcall sub_395060(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // r15
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 result; // rax
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // r15d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // r9
  _QWORD *v41; // r8
  void *v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // rcx
  void *v45; // r9
  _QWORD *v46; // r8
  void *v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // r15
  __int64 v50; // r15
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // r15
  __int64 v54; // r15
  unsigned int v55; // eax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r9
  _QWORD *v60; // r8
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // r9
  _QWORD *v65; // r8
  _QWORD *v66; // rdi
  _QWORD *v67; // rdi
  char **v68; // r12
  char **v69; // r12
  _QWORD *exception; // rbx
  unsigned int ptr; // [rsp+8h] [rbp-90h]
  _QWORD *ptra; // [rsp+8h] [rbp-90h]
  void *ptrb; // [rsp+8h] [rbp-90h]
  void *ptrc; // [rsp+8h] [rbp-90h]
  void *ptrd; // [rsp+8h] [rbp-90h]
  void *ptre; // [rsp+8h] [rbp-90h]
  _QWORD *ptrf; // [rsp+8h] [rbp-90h]
  __int64 v78; // [rsp+10h] [rbp-88h]
  __int64 v79; // [rsp+10h] [rbp-88h]
  __int64 v80; // [rsp+10h] [rbp-88h]
  void *v81; // [rsp+10h] [rbp-88h]
  __int64 v82; // [rsp+10h] [rbp-88h]
  void *v83; // [rsp+10h] [rbp-88h]
  __int64 v84; // [rsp+18h] [rbp-80h]
  __int64 v85; // [rsp+18h] [rbp-80h]
  __int64 v86; // [rsp+18h] [rbp-80h]
  __int64 v87; // [rsp+18h] [rbp-80h]
  __int64 v88; // [rsp+18h] [rbp-80h]
  _QWORD *v89; // [rsp+18h] [rbp-80h]
  _QWORD *v90; // [rsp+18h] [rbp-80h]
  __int64 v91; // [rsp+18h] [rbp-80h]
  _QWORD *v92; // [rsp+18h] [rbp-80h]
  __int64 v93; // [rsp+18h] [rbp-80h]
  _QWORD *v94; // [rsp+18h] [rbp-80h]
  _QWORD *v95; // [rsp+18h] [rbp-80h]
  __int64 v96; // [rsp+18h] [rbp-80h]
  _QWORD *v97; // [rsp+18h] [rbp-80h]
  __int64 v98; // [rsp+20h] [rbp-78h]
  __int64 v99; // [rsp+20h] [rbp-78h]
  _QWORD *v100; // [rsp+20h] [rbp-78h]
  __int64 v101; // [rsp+20h] [rbp-78h]
  __int64 v102; // [rsp+20h] [rbp-78h]
  _QWORD *v103; // [rsp+20h] [rbp-78h]
  _QWORD *v104; // [rsp+28h] [rbp-70h]
  _QWORD *v105; // [rsp+28h] [rbp-70h]
  char v106[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v107[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 32) <= 1u )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "at least 2 arguments expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DFBCB0(a2);
  v2 = *(_QWORD *)(a2 + 296);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    v4 = *(unsigned int *)(v3 - 4);
  else
    v4 = 0;
  v5 = sub_15E3510(*(_QWORD *)(a2 + 296), a1 + 40, v4, v3, *(_QWORD *)(v2 + 840), 0);
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  sub_E06850(a2, v5 + 16, v5);
  v7 = *(__int64 **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v10 = v7[7];
  if ( v10 )
  {
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v11 = *(_QWORD **)(v10 + 48);
    if ( v11 )
    {
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v31 = (3 * v12 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v32 || v12 >= v31 )
        {
          v68 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v107, "Overflow encountered when expanding vector");
          *v68 = (char *)off_1C63128;
          sub_2333C0(v68 + 1, v107);
          sub_233E40((__int64)v107);
          __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptr = (3 * v12 + 1) >> 1;
        v33 = (unsigned int *)sub_186B300(v11 - 1, v32);
        v11 = v33 + 2;
        *(_QWORD *)(v10 + 48) = v33 + 2;
        v10 = v7[7];
        *v33 = ptr;
        LODWORD(v33) = v33[1];
        v15 = &v11[(unsigned int)v33];
        v14 = (_DWORD)v33 + 1;
      }
      else
      {
        v13 = v12;
        v14 = v12 + 1;
        v15 = &v11[v13];
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v11 = v57 + 1;
      *v57 = 2;
      v14 = 1;
      *(_QWORD *)(v10 + 48) = v11;
      v15 = v11;
      v10 = v7[7];
    }
    *v15 = v6;
    *((_DWORD *)v11 - 1) = v14;
    v16 = (_QWORD *)sub_180C100(v7 + 13, 16);
    v17 = (_QWORD *)v7[11];
    v18 = v16;
    *v16 = off_1C4DF58;
    v16[1] = v10 + 40;
    if ( v17 )
    {
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v34 = (3 * v19 + 1) >> 1;
        v35 = 8 * v34 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v35 || v19 >= v34 )
        {
          v69 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v107, "Overflow encountered when expanding vector");
          *v69 = (char *)off_1C63128;
          sub_2333C0(v69 + 1, v107);
          sub_233E40((__int64)v107);
          __cxa_throw(v69, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptra = v18;
        v36 = (unsigned int *)sub_186B300(v17 - 1, v35);
        v37 = v36[1];
        v17 = v36 + 2;
        v18 = ptra;
        v7[11] = (__int64)(v36 + 2);
        *v36 = v34;
        LODWORD(v36) = v37;
        v22 = &v17[v37];
        v21 = (_DWORD)v36 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v17[v20];
      }
    }
    else
    {
      ptrf = v16;
      v56 = (_QWORD *)sub_186B270(0x18u);
      v17 = v56 + 1;
      *v56 = 2;
      v18 = ptrf;
      v21 = 1;
      v7[11] = (__int64)v17;
      v22 = v17;
    }
    *v22 = v18;
    *((_DWORD *)v17 - 1) = v21;
  }
  v23 = v7[4];
  sub_DFBCB0(v23);
  v24 = v7[10];
  v25 = *(_QWORD *)(v23 + 296);
  if ( !v24 )
  {
    v43 = sub_186B270(0xBD8u);
    v44 = (_QWORD *)*v7;
    v45 = (void *)v43;
    v46 = v7 + 1;
    if ( !*v7 )
    {
      v93 = v43;
      v82 = sub_186B270(0x2F8u);
      v107[0] = 0;
      sub_2527E0(v82, (__int64)v107);
      v63 = (_QWORD *)*v7;
      v64 = v93;
      v65 = v7 + 1;
      if ( v82 != *v7 )
      {
        if ( v63 )
        {
          v66 = (_QWORD *)v63[17];
          if ( v66 != v63 + 19 )
          {
            v101 = v93;
            v94 = (_QWORD *)*v7;
            operator delete(v66, v63[19] + 1LL);
            v65 = v7 + 1;
            v64 = v101;
            v63 = v94;
          }
          v67 = (_QWORD *)v63[13];
          if ( v67 != v63 + 15 )
          {
            v105 = v65;
            v102 = v64;
            v95 = v63;
            operator delete(v67, v63[15] + 1LL);
            v65 = v105;
            v64 = v102;
            v63 = v95;
          }
          v103 = v65;
          v96 = v64;
          sub_186B220(v63);
          v65 = v103;
          v64 = v96;
        }
        *v7 = v82;
      }
      v97 = v65;
      v83 = (void *)v64;
      sub_18572D0(v107);
      v44 = (_QWORD *)*v7;
      v46 = v97;
      v45 = v83;
    }
    ptrd = v45;
    sub_64C8D0(v45, v25, v7 + 5, v44, v46);
    v24 = (__int64)ptrd;
    v47 = (void *)v7[10];
    if ( ptrd != v47 )
    {
      if ( v47 )
      {
        ptre = (void *)v7[10];
        v79 = v24;
        sub_64D370(v47);
        sub_186B220(ptre);
        v24 = v79;
      }
      v7[10] = v24;
    }
  }
  if ( !v7[9] )
  {
    sub_180C5A0(v107, "datalog_relation");
    v86 = v25 + 560;
    if ( (unsigned __int8)sub_15D1480(v25 + 560, v107) && (v52 = sub_15D1320(v86, v107), sub_15D2690(v25, v52)) )
    {
      v53 = v7[4];
      sub_DFBCB0(v53);
      v54 = *(_QWORD *)(v53 + 296);
      v55 = sub_15DA4C0(v86, v107);
      v7[9] = sub_15D2690(v54, v55);
    }
    else
    {
      v87 = sub_186B270(0xA0u);
      sub_1624E10(v87);
      v7[9] = v87;
      sub_180C5A0(v106, "datalog_relation");
      sub_15DA890(v25, v106, v87);
    }
    v24 = v7[10];
  }
  sub_6511B0(v24, v6, 0);
  v26 = v7[4];
  sub_DFBCB0(v26);
  v27 = v7[10];
  v28 = *(_QWORD *)(v26 + 296);
  if ( !v27 )
  {
    v38 = sub_186B270(0xBD8u);
    v39 = *v7;
    v40 = (void *)v38;
    v41 = v7 + 1;
    if ( !*v7 )
    {
      v88 = v38;
      v80 = sub_186B270(0x2F8u);
      v107[0] = 0;
      sub_2527E0(v80, (__int64)v107);
      v58 = (_QWORD *)*v7;
      v59 = v88;
      v60 = v7 + 1;
      if ( v80 != *v7 )
      {
        if ( v58 )
        {
          v61 = (_QWORD *)v58[17];
          if ( v61 != v58 + 19 )
          {
            v98 = v88;
            v89 = (_QWORD *)*v7;
            operator delete(v61, v58[19] + 1LL);
            v60 = v7 + 1;
            v59 = v98;
            v58 = v89;
          }
          v62 = (_QWORD *)v58[13];
          if ( v62 != v58 + 15 )
          {
            v104 = v60;
            v99 = v59;
            v90 = v58;
            operator delete(v62, v58[15] + 1LL);
            v60 = v104;
            v59 = v99;
            v58 = v90;
          }
          v100 = v60;
          v91 = v59;
          sub_186B220(v58);
          v60 = v100;
          v59 = v91;
        }
        *v7 = v80;
      }
      v92 = v60;
      v81 = (void *)v59;
      sub_18572D0(v107);
      v39 = *v7;
      v41 = v92;
      v40 = v81;
    }
    ptrb = v40;
    sub_64C8D0(v40, v28, v7 + 5, v39, v41);
    v27 = (__int64)ptrb;
    v42 = (void *)v7[10];
    if ( ptrb != v42 )
    {
      if ( v42 )
      {
        ptrc = (void *)v7[10];
        v78 = v27;
        sub_64D370(v42);
        sub_186B220(ptrc);
        v27 = v78;
      }
      v7[10] = v27;
    }
  }
  if ( !v7[9] )
  {
    sub_180C5A0(v106, "datalog_relation");
    v84 = v28 + 560;
    if ( (unsigned __int8)sub_15D1480(v28 + 560, v106) && (v48 = sub_15D1320(v84, v106), sub_15D2690(v28, v48)) )
    {
      v49 = v7[4];
      sub_DFBCB0(v49);
      v50 = *(_QWORD *)(v49 + 296);
      v51 = sub_15DA4C0(v84, v106);
      v7[9] = sub_15D2690(v50, v51);
    }
    else
    {
      v85 = sub_186B270(0xA0u);
      sub_1624E10(v85);
      v7[9] = v85;
      sub_180C5A0(v107, "datalog_relation");
      sub_15DA890(v28, v107, v85);
    }
    v27 = v7[10];
  }
  result = sub_6542D0(v27, v6, v9, v8);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      return sub_15D7BC0(v2, v6);
  }
  return result;
}

