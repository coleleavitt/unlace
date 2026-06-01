__int64 __fastcall sub_3959D0(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // r14
  unsigned int v3; // r13d
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int *v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rbp
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 result; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v38; // r13d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // ebp
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r12d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // rcx
  _QWORD *v58; // r8
  __int64 v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // r12
  __int64 v62; // r12
  unsigned int v63; // eax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // r8
  _QWORD *v69; // rdi
  _QWORD *v70; // rdi
  char **v71; // rbp
  char **v72; // rbp
  char **v73; // rbp
  _QWORD *exception; // rbx
  char **v75; // rbp
  void *ptr; // [rsp+0h] [rbp-98h]
  void *ptrb; // [rsp+0h] [rbp-98h]
  void *ptra; // [rsp+0h] [rbp-98h]
  _QWORD *ptrc; // [rsp+0h] [rbp-98h]
  _QWORD *v80; // [rsp+10h] [rbp-88h]
  _QWORD *v81; // [rsp+10h] [rbp-88h]
  _QWORD *v82; // [rsp+10h] [rbp-88h]
  _QWORD *v83; // [rsp+18h] [rbp-80h]
  _QWORD v84[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v85[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid rule, expected formula");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v2 = *(_QWORD **)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 56);
  v5 = v2[4];
  sub_DFBCB0(v5);
  v6 = v2[10];
  v7 = *(_QWORD *)(v5 + 296);
  if ( !v6 )
  {
    v56 = sub_186B270(0xBD8u);
    v57 = (_QWORD *)*v2;
    v58 = v2 + 1;
    v6 = v56;
    if ( !*v2 )
    {
      v85[0] = 0;
      ptra = (void *)sub_186B270(0x2F8u);
      sub_2527E0((__int64)ptra, (__int64)v85);
      v67 = (_QWORD *)*v2;
      v68 = v2 + 1;
      if ( ptra != (void *)*v2 )
      {
        if ( v67 )
        {
          v69 = (_QWORD *)v67[17];
          if ( v69 != v67 + 19 )
          {
            v80 = (_QWORD *)*v2;
            operator delete(v69, v67[19] + 1LL);
            v68 = v2 + 1;
            v67 = v80;
          }
          v70 = (_QWORD *)v67[13];
          if ( v70 != v67 + 15 )
          {
            v83 = v68;
            v81 = v67;
            operator delete(v70, v67[15] + 1LL);
            v68 = v83;
            v67 = v81;
          }
          v82 = v68;
          sub_186B220(v67);
          v68 = v82;
        }
        *v2 = ptra;
      }
      ptrc = v68;
      sub_18572D0(v85);
      v57 = (_QWORD *)*v2;
      v58 = ptrc;
    }
    sub_64C8D0(v6, v7, v2 + 5, v57, v58);
    v59 = v2[10];
    if ( v6 != v59 )
    {
      if ( v59 )
      {
        ptrb = (void *)v2[10];
        sub_64D370(v59);
        sub_186B220(ptrb);
      }
      v2[10] = v6;
    }
  }
  if ( !v2[9] )
  {
    sub_180C5A0(v84, "datalog_relation");
    ptr = (void *)(v7 + 560);
    if ( (unsigned __int8)sub_15D1480(v7 + 560, v84) && (v60 = sub_15D1320(ptr, v84), sub_15D2690(v7, v60)) )
    {
      v61 = v2[4];
      sub_DFBCB0(v61);
      v62 = *(_QWORD *)(v61 + 296);
      v63 = sub_15DA4C0(ptr, v84);
      v2[9] = sub_15D2690(v62, v63);
    }
    else
    {
      v55 = sub_186B270(0xA0u);
      sub_1624E10(v55);
      v2[9] = v55;
      sub_180C5A0(v85, "datalog_relation");
      sub_15DA890(v7, v85, v55);
    }
    v6 = v2[10];
  }
  if ( !v2[7] )
    return sub_64ECB0(v6, v1, a1 + 48, v3);
  sub_64B4C0(v84, v6, v1, 1);
  v8 = v84[0];
  v9 = v2[7];
  if ( v84[0] )
    ++*(_DWORD *)(v84[0] + 8LL);
  v10 = *(_QWORD **)(v9 + 8);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v38 = (3 * v11 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v39 || v11 >= v38 )
      {
        v71 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v71 = (char *)off_1C63128;
        sub_2333C0(v71 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v71, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v10 - 1, v39);
      v41 = v40[1];
      *(_QWORD *)(v9 + 8) = v40 + 2;
      v9 = v2[7];
      *v40 = v38;
      *(_QWORD *)&v40[2 * v41 + 2] = v8;
      v40[1] = v41 + 1;
      v15 = *(_QWORD **)(v9 + 16);
      if ( v15 )
        goto LABEL_11;
      goto LABEL_25;
    }
    v12 = v11;
    v13 = v11 + 1;
    v14 = &v10[v12];
  }
  else
  {
    v66 = (_QWORD *)sub_186B270(0x18u);
    v10 = v66 + 1;
    *v66 = 2;
    v13 = 1;
    *(_QWORD *)(v9 + 8) = v10;
    v14 = v10;
    v9 = v2[7];
  }
  *v14 = v8;
  *((_DWORD *)v10 - 1) = v13;
  v15 = *(_QWORD **)(v9 + 16);
  if ( v15 )
  {
LABEL_11:
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 == *((_DWORD *)v15 - 2) )
    {
      v51 = (3 * v16 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v52 || v16 >= v51 )
      {
        v75 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v75 = (char *)off_1C63128;
        sub_2333C0(v75 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v75, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v15 - 1, v52);
      v54 = v53[1];
      v15 = v53 + 2;
      *(_QWORD *)(v9 + 16) = v53 + 2;
      v9 = v2[7];
      *v53 = v51;
      v19 = &v53[2 * v54 + 2];
      v18 = v54 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = (unsigned int *)&v15[v17];
    }
    goto LABEL_13;
  }
LABEL_25:
  v42 = (_QWORD *)sub_186B270(0x18u);
  v15 = v42 + 1;
  *v42 = 2;
  v18 = 1;
  *(_QWORD *)(v9 + 16) = v15;
  v19 = (unsigned int *)v15;
  v9 = v2[7];
LABEL_13:
  *(_QWORD *)v19 = *(_QWORD *)(a1 + 48);
  *((_DWORD *)v15 - 1) = v18;
  v20 = (_QWORD *)sub_180C100(v2 + 13, 16);
  v21 = (_QWORD *)v2[11];
  v22 = v20;
  *v20 = off_1C4DF80;
  v20[1] = v9;
  if ( v21 )
  {
    v23 = *((_DWORD *)v21 - 1);
    if ( v23 == *((_DWORD *)v21 - 2) )
    {
      v47 = (3 * v23 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v48 || v23 >= v47 )
      {
        v73 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v73 = (char *)off_1C63128;
        sub_2333C0(v73 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v73, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v49 = (unsigned int *)sub_186B300(v21 - 1, v48);
      v50 = v49[1];
      v21 = v49 + 2;
      v2[11] = v49 + 2;
      *v49 = v47;
      LODWORD(v49) = v50;
      v26 = &v21[v50];
      v25 = (_DWORD)v49 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v21[v24];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    v21 = v64 + 1;
    *v64 = 2;
    v25 = 1;
    v2[11] = v21;
    v26 = v21;
  }
  *v26 = v22;
  *((_DWORD *)v21 - 1) = v25;
  v27 = v2[7] + 16LL;
  v28 = (_QWORD *)sub_180C100(v2 + 13, 16);
  v29 = (_QWORD *)v2[11];
  v30 = v28;
  *v28 = off_1C4DFA8;
  v28[1] = v27;
  if ( v29 )
  {
    v31 = *((_DWORD *)v29 - 1);
    if ( v31 == *((_DWORD *)v29 - 2) )
    {
      v43 = (3 * v31 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v44 || v31 >= v43 )
      {
        v72 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *v72 = (char *)off_1C63128;
        sub_2333C0(v72 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v72, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(v29 - 1, v44);
      v46 = v45[1];
      v29 = v45 + 2;
      v2[11] = v45 + 2;
      *v45 = v43;
      LODWORD(v45) = v46;
      v34 = &v29[v46];
      result = (unsigned int)((_DWORD)v45 + 1);
    }
    else
    {
      v32 = v31;
      result = v31 + 1;
      v34 = &v29[v32];
    }
  }
  else
  {
    v65 = (_QWORD *)sub_186B270(0x18u);
    v29 = v65 + 1;
    *v65 = 2;
    result = 1;
    v2[11] = v29;
    v34 = v29;
  }
  v35 = v84[0];
  *v34 = v30;
  *((_DWORD *)v29 - 1) = result;
  if ( v35 )
  {
    v36 = v84[1];
    if ( (*(_DWORD *)(v35 + 8))-- == 1 )
      return sub_15D7BC0(v36, v35);
  }
  return result;
}

