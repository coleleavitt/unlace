__int64 __fastcall sub_DC3500(_QWORD *a1, const char *a2)
{
  int v3; // eax
  char **v4; // r12
  _QWORD *v5; // rax
  int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 (__fastcall *v20)(_DWORD *, __int64, _QWORD, __int64); // r12
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 *v26; // r15
  __int64 v27; // rax
  __int64 *v28; // rbx
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v33; // rax
  _QWORD *v34; // rdx
  __int64 *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rdi
  __int64 *v42; // rbx
  _DWORD *v43; // rax
  _DWORD *v44; // r14
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 (__fastcall *v47)(__int64, __int64); // rax
  __int64 v48; // r14
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 *v52; // rcx
  unsigned int v53; // r14d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  __int64 *v57; // rbx
  __int64 v58; // rax
  __int64 *v59; // rdx
  __int64 v60; // r12
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 *v63; // rcx
  unsigned int v64; // r15d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r14d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  _QWORD *exception; // rbx
  char **v76; // rbx
  unsigned int v77; // [rsp+8h] [rbp-A0h]
  __int64 (__fastcall *v78)(__int64, __int64); // [rsp+8h] [rbp-A0h]
  __int64 v79; // [rsp+18h] [rbp-90h]
  __int64 v80; // [rsp+20h] [rbp-88h]
  __int64 v82[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v83[11]; // [rsp+50h] [rbp-58h] BYREF

  sub_DC07A0(a1);
  v3 = *((_DWORD *)a1 + 356);
  if ( v3 == 4 )
  {
    v6 = 0;
LABEL_41:
    v40 = sub_DC07A0(a1);
    v41 = *a1;
    v42 = v40;
    v83[0] = *((void **)a1 + 6);
    v43 = (_DWORD *)sub_DF89E0(v41, v83);
    v44 = v43;
    if ( !v43 )
      sub_DBFCB0(v83[0]);
    if ( (unsigned int)(v43[3] - 1) <= 0xFFFFFFFD )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "sort constructor expects parameters");
      goto LABEL_76;
    }
    v45 = *a1;
    v46 = *(_QWORD *)(*a1 + 312LL);
    v47 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 80LL);
    if ( !v46 )
    {
      v78 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 80LL);
      sub_DFBCB0(*a1);
      v46 = *(_QWORD *)(v45 + 312);
      v47 = v78;
    }
    if ( v47 == sub_DC0730 )
      v48 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, _QWORD))(*(_QWORD *)v44 + 64LL))(v44, v46, 0, 0);
    else
      v48 = ((__int64 (__fastcall *)(_DWORD *))v47)(v44);
    if ( !v48 )
    {
LABEL_78:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort application");
      goto LABEL_76;
    }
    if ( *((_DWORD *)a1 + 356) != 9 )
      sub_DC0980(a1);
    v49 = (_QWORD *)v42[1];
    ++*(_DWORD *)(v48 + 8);
    if ( v49 )
    {
      v50 = *((_DWORD *)v49 - 1);
      if ( v50 == *((_DWORD *)v49 - 2) )
      {
        v64 = (3 * v50 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v50 + 8 >= (unsigned int)v65 || v50 >= v64 )
          goto LABEL_79;
        v66 = (unsigned int *)sub_186B300(v49 - 1, v65);
        v67 = v66[1];
        v49 = v66 + 2;
        v42[1] = (__int64)(v66 + 2);
        *v66 = v64;
        LODWORD(v66) = v67;
        v52 = &v49[v67];
        result = (unsigned int)((_DWORD)v66 + 1);
      }
      else
      {
        v51 = v50;
        result = v50 + 1;
        v52 = &v49[v51];
      }
    }
    else
    {
      v73 = (_QWORD *)sub_186B270(0x18u);
      v49 = v73 + 1;
      *v73 = 2;
      result = 1;
      v42[1] = (__int64)v49;
      v52 = v49;
    }
    *v52 = v48;
    *((_DWORD *)v49 - 1) = result;
    goto LABEL_14;
  }
  if ( v3 == 2 )
  {
    v4 = (char **)__cxa_allocate_exception(0x30u);
    sub_DBF430(v82, a2);
    v5 = (_QWORD *)sub_2B3190((__int64)v82, " invalid sort, unexpected ')'");
    goto LABEL_4;
  }
  v6 = 0;
LABEL_6:
  sub_DBF660((__int64)a1, "invalid sort, symbol, '_' or '(' expected");
  if ( *((_DWORD *)a1 + 356) != 4 )
  {
    v4 = (char **)__cxa_allocate_exception(0x30u);
    sub_DBF430(v82, a2);
    v5 = (_QWORD *)sub_2B3190((__int64)v82, " invalid sort, symbol or '_' expected");
LABEL_4:
    sub_2333C0((char **)v83, v5);
    *v4 = (char *)off_1C63128;
    sub_2333C0(v4 + 1, v83);
    v4[5] = (char *)-1LL;
    *v4 = (char *)off_1C64218;
    sub_233E40((__int64)v83);
    sub_233E40((__int64)v82);
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( a1[6] == a1[254] )
  {
    v57 = sub_DC07A0(a1);
    v58 = sub_DC3180(a1);
    v59 = (__int64 *)v57[1];
    ++*(_DWORD *)(v58 + 8);
    v60 = v58;
    if ( !v59 )
    {
      v74 = (_QWORD *)sub_186B270(0x18u);
      *v74 = 2;
      result = 1;
      v59 = v74 + 1;
      v57[1] = (__int64)v59;
      v63 = v59;
      goto LABEL_60;
    }
    v61 = *((_DWORD *)v59 - 1);
    if ( v61 != *((_DWORD *)v59 - 2) )
    {
      v62 = v61;
      result = v61 + 1;
      v63 = &v59[v62];
LABEL_60:
      *v63 = v60;
      *((_DWORD *)v59 - 1) = result;
      goto LABEL_14;
    }
    v68 = (3 * v61 + 1) >> 1;
    v69 = 8 * v68 + 8;
    if ( 8 * v61 + 8 < v69 && v61 < v68 )
    {
      v70 = (unsigned int *)sub_186B300(v59 - 1, v69);
      v71 = v70[1];
      v59 = (__int64 *)(v70 + 2);
      v57[1] = (__int64)(v70 + 2);
      *v70 = v68;
      LODWORD(v70) = v71;
      v63 = &v59[v71];
      result = (unsigned int)((_DWORD)v70 + 1);
      goto LABEL_60;
    }
LABEL_79:
    v76 = (char **)__cxa_allocate_exception(0x28u);
    sub_DBF430((__int64 *)v83, "Overflow encountered when expanding vector");
    *v76 = (char *)off_1C63128;
    sub_2333C0(v76 + 1, v83);
    sub_233E40((__int64)v83);
    __cxa_throw(v76, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v7 = *a1;
  v83[0] = *((void **)a1 + 6);
  v8 = sub_DF89E0(v7, v83);
  if ( !v8 )
    sub_DBFCB0(v83[0]);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v9 = sub_1875960(a1 + 180, 16, 0);
  v10 = sub_DC07A0(a1)[1];
  if ( v10 )
    result = *(unsigned int *)(v10 - 4);
  else
    result = 0;
  *(_QWORD *)v9 = v8;
  ++v6;
  *(_DWORD *)(v9 + 8) = result;
LABEL_14:
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = *((_DWORD *)a1 + 356);
      if ( v12 == 4 )
        goto LABEL_41;
      if ( v12 != 2 )
        goto LABEL_6;
      v13 = sub_1875940(a1 + 180);
      v14 = *(_DWORD **)v13;
      v77 = *(_DWORD *)(v13 + 8);
      v15 = sub_DC07A0(a1)[1];
      v16 = v15 ? *(_DWORD *)(v15 - 4) : 0;
      v17 = v16 - v77;
      v18 = v14[3];
      v19 = v17;
      if ( v18 != -1 && v17 != v18 )
        break;
      v20 = *(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, __int64))(*(_QWORD *)v14 + 64LL);
      v21 = sub_DC07A0(a1)[1];
      v22 = 8LL * v77;
      v23 = *(_QWORD *)(*a1 + 312LL);
      v24 = v22 + v21;
      if ( !v23 )
      {
        v80 = v24;
        v79 = *a1;
        sub_DFBCB0(*a1);
        v24 = v80;
        v23 = *(_QWORD *)(v79 + 312);
      }
      v25 = v20(v14, v23, v19, v24);
      if ( !v25 )
        goto LABEL_78;
      v26 = sub_DC07A0(a1);
      v27 = v26[1];
      if ( v27 )
      {
        v28 = (__int64 *)(v27 + v22);
        v29 = v27 + 8LL * *(unsigned int *)(v27 - 4);
        if ( (unsigned __int64)v28 >= v29 )
          goto LABEL_32;
        do
        {
          while ( 1 )
          {
            v30 = *v28;
            if ( *v28 )
            {
              v31 = *v26;
              if ( (*(_DWORD *)(v30 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v28 >= v29 )
              goto LABEL_31;
          }
          sub_15D7BC0(v31, v30);
          ++v28;
        }
        while ( (unsigned __int64)v28 < v29 );
LABEL_31:
        v27 = v26[1];
        if ( v27 )
LABEL_32:
          *(_DWORD *)(v27 - 4) = v77;
      }
      v33 = sub_DC07A0(a1);
      ++*(_DWORD *)(v25 + 8);
      v34 = (_QWORD *)v33[1];
      v35 = v33;
      if ( v34 )
      {
        v36 = *((_DWORD *)v34 - 1);
        if ( v36 == *((_DWORD *)v34 - 2) )
        {
          v53 = (3 * v36 + 1) >> 1;
          v54 = 8 * v53 + 8;
          if ( 8 * v36 + 8 >= (unsigned int)v54 || v36 >= v53 )
            goto LABEL_79;
          v55 = (unsigned int *)sub_186B300(v34 - 1, v54);
          v56 = v55[1];
          v34 = v55 + 2;
          v35[1] = (__int64)(v55 + 2);
          *v55 = v53;
          LODWORD(v55) = v56;
          v39 = &v34[v56];
          v38 = (_DWORD)v55 + 1;
        }
        else
        {
          v37 = v36;
          v38 = v36 + 1;
          v39 = &v34[v37];
        }
      }
      else
      {
        v72 = (_QWORD *)sub_186B270(0x18u);
        v34 = v72 + 1;
        *v72 = 2;
        v38 = 1;
        v35[1] = (__int64)v34;
        v39 = v34;
      }
      *v39 = v25;
      *((_DWORD *)v34 - 1) = v38;
      result = sub_1875B10(a1 + 180);
      if ( *((_DWORD *)a1 + 356) != 9 )
        result = sub_DC0980(a1);
      if ( !--v6 )
        return result;
    }
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid number of parameters to sort constructor");
LABEL_76:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

