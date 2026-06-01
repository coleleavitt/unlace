__int64 __fastcall sub_CAED80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r14
  __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int *v45; // rax
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rax
  unsigned int v52; // r9d
  __int64 *v53; // r8
  __int64 v54; // rsi
  bool v55; // zf
  __int64 *v56; // r15
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 *v60; // r15
  __int64 v61; // rax
  unsigned int v62; // r9d
  __int64 *v63; // r8
  __int64 v64; // rsi
  _QWORD *v65; // rax
  int v66; // r14d
  int v67; // r13d
  __int64 v68; // rcx
  int v69; // edx
  _QWORD *v70; // rcx
  _QWORD *v71; // rdx
  __int64 v72; // rax
  _DWORD *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // ecx
  size_t v76; // rsi
  unsigned int *v77; // rdx
  __int64 v78; // rcx
  unsigned int v79; // ecx
  size_t v80; // rsi
  unsigned int *v81; // rax
  _DWORD *v82; // rdx
  __int64 v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  char **exception; // r14
  char **v87; // r14
  char **v88; // r15
  __int64 *v89; // [rsp+0h] [rbp-E0h]
  __int64 v90; // [rsp+8h] [rbp-D8h]
  __int64 v91; // [rsp+10h] [rbp-D0h]
  __int64 *v92; // [rsp+18h] [rbp-C8h]
  __int64 *v93; // [rsp+20h] [rbp-C0h]
  unsigned int v94; // [rsp+20h] [rbp-C0h]
  __int64 v95; // [rsp+28h] [rbp-B8h]
  __int64 *v96; // [rsp+28h] [rbp-B8h]
  __int64 v97; // [rsp+30h] [rbp-B0h]
  unsigned int v98; // [rsp+30h] [rbp-B0h]
  int v99; // [rsp+3Ch] [rbp-A4h]
  __int64 v100; // [rsp+40h] [rbp-A0h]
  __int64 v101; // [rsp+48h] [rbp-98h]
  __int64 v102; // [rsp+48h] [rbp-98h]
  __int64 *v103; // [rsp+48h] [rbp-98h]
  unsigned __int64 v104; // [rsp+48h] [rbp-98h]
  __int64 *v105; // [rsp+48h] [rbp-98h]
  unsigned int v107; // [rsp+58h] [rbp-88h]
  __int64 v108; // [rsp+58h] [rbp-88h]
  unsigned int v109; // [rsp+60h] [rbp-80h]
  __int64 v110; // [rsp+60h] [rbp-80h]
  unsigned int v111; // [rsp+68h] [rbp-78h]
  unsigned int v112; // [rsp+68h] [rbp-78h]
  unsigned int v113; // [rsp+68h] [rbp-78h]
  unsigned int v114; // [rsp+68h] [rbp-78h]
  __int64 v115[2]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v116[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v117[10]; // [rsp+90h] [rbp-50h] BYREF

  v99 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v65 = *(_QWORD **)(a1 + 160);
  if ( v65 )
    v66 = *((_DWORD *)v65 - 1);
  else
    v66 = 0;
  if ( v99 )
  {
    v67 = 0;
    while ( 1 )
    {
      if ( v65 )
      {
        v74 = *((_DWORD *)v65 - 1);
        if ( v74 == *((_DWORD *)v65 - 2) )
        {
          v75 = (3 * v74 + 1) >> 1;
          v76 = 8 * v75 + 8;
          v113 = v75;
          if ( 8 * v74 + 8 >= (unsigned int)v76 || v74 >= v75 )
          {
LABEL_111:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C9E960(v117, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v117);
            sub_233E40((__int64)v117);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (unsigned int *)sub_186B300(v65 - 1, v76);
          v65 = v77 + 2;
          v78 = v77[1];
          *v77 = v113;
          *(_QWORD *)(a1 + 160) = v77 + 2;
          LODWORD(v77) = v78;
          v70 = &v65[v78];
          v69 = (_DWORD)v77 + 1;
        }
        else
        {
          v68 = v74;
          v69 = v74 + 1;
          v70 = &v65[v68];
        }
      }
      else
      {
        v85 = (_QWORD *)sub_186B270(0x18u);
        v69 = 1;
        *v85 = 2;
        v65 = v85 + 1;
        *(_QWORD *)(a1 + 160) = v65;
        v70 = v65;
      }
      *v70 = 0;
      *((_DWORD *)v65 - 1) = v69;
      v71 = *(_QWORD **)(a1 + 528);
      if ( !v71 )
        break;
      v72 = *((unsigned int *)v71 - 1);
      if ( (_DWORD)v72 != *((_DWORD *)v71 - 2) )
      {
        v73 = (_DWORD *)v71 + v72;
        goto LABEL_93;
      }
      v79 = (unsigned int)(3 * v72 + 1) >> 1;
      v80 = 4 * v79 + 8;
      v114 = v79;
      if ( 4 * (int)v72 + 8 >= (unsigned int)v80 || (unsigned int)v72 >= v79 )
        goto LABEL_111;
      ++v67;
      v81 = (unsigned int *)sub_186B300(v71 - 1, v80);
      v82 = v81 + 2;
      *v81 = v114;
      v83 = v81[1];
      *(_QWORD *)(a1 + 528) = v82;
      v82[v83] = v66;
      ++*(v82 - 1);
      if ( v67 == v99 )
        goto LABEL_103;
LABEL_94:
      v65 = *(_QWORD **)(a1 + 160);
    }
    v84 = (_QWORD *)sub_186B270(0x10u);
    v71 = v84 + 1;
    *v84 = 2;
    *(_QWORD *)(a1 + 528) = v84 + 1;
    v73 = v84 + 1;
LABEL_93:
    ++v67;
    *v73 = v66;
    ++*((_DWORD *)v71 - 1);
    if ( v67 == v99 )
      goto LABEL_103;
    goto LABEL_94;
  }
LABEL_103:
  *(_DWORD *)(a1 + 128) += v99;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
      break;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      if ( v10 < v9 )
        v11 = a2 + 8LL * (v9 - v10 - 1);
      else
        v11 = a2 + 8LL * (v9 - 1);
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_CAE280((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v13 = *(_QWORD *)(a1 + 8);
  v93 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v109 = *(_DWORD *)(a2 + 76);
  v14 = 16 * v12;
  v90 = *v93;
  v95 = *(_QWORD *)(a1 + 8);
  v107 = *(_DWORD *)(a2 + 72);
  v115[0] = v95;
  if ( v107 )
  {
    v26 = a2 + v14;
    v27 = *(_QWORD *)(v26 + 80);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v28 = (_QWORD *)sub_186B270(0x18u);
    v29 = v28 + 1;
    *v28 = 2;
    v30 = 1;
    v97 = v107;
    v31 = v107 + 2 * v12;
    v15 = (__int64)v29;
    v32 = a2 + 8 * v31;
    while ( 1 )
    {
      v26 += 8;
      *v29 = v27;
      *(_DWORD *)(v15 - 4) = v30;
      if ( v26 == v32 )
        break;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 + 80);
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v33 = *(_DWORD *)(v15 - 4);
        if ( v33 == *(_DWORD *)(v15 - 8) )
          break;
        v26 += 8;
        *(_QWORD *)(v15 + 8LL * v33) = v27;
        *(_DWORD *)(v15 - 4) = v33 + 1;
        if ( v26 == v32 )
          goto LABEL_39;
      }
      v43 = (3 * v33 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v44 || v33 >= v43 )
      {
        v87 = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v117, "Overflow encountered when expanding vector");
        *v87 = (char *)off_1C63128;
        sub_2333C0(v87 + 1, v117);
        sub_233E40((__int64)v117);
        __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = v32;
      v111 = (3 * v33 + 1) >> 1;
      v45 = (unsigned int *)sub_186B300((void *)(v15 - 8), v44);
      v15 = (__int64)(v45 + 2);
      v32 = v101;
      *v45 = v111;
      LODWORD(v45) = v45[1];
      v29 = (_QWORD *)(v15 + 8LL * (unsigned int)v45);
      v30 = (_DWORD)v45 + 1;
    }
LABEL_39:
    v34 = *(_QWORD *)(a1 + 8);
    v91 = v34;
    v14 = 16LL * *(unsigned int *)(a2 + 20);
    v116[0] = v34;
    if ( !v109 )
    {
      v16 = 0;
      v92 = v93 + 1;
      v49 = v107;
      goto LABEL_56;
    }
  }
  else
  {
    v116[0] = v13;
    v15 = 0;
    v91 = v13;
    if ( !v109 )
    {
      v16 = 0;
      goto LABEL_14;
    }
  }
  v35 = *(_QWORD *)(a2 + v14 + 80);
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = (_QWORD *)sub_186B270(0x18u);
  v37 = v36 + 1;
  v38 = a2 + v14;
  *v36 = 2;
  v39 = 0;
  v16 = (__int64)(v36 + 1);
  v40 = 1;
  while ( 1 )
  {
    *v37 = v35;
    ++v39;
    *(_DWORD *)(v16 - 4) = v40;
    if ( (unsigned int)v39 >= v109 )
      break;
    v35 = *(_QWORD *)(v38 + 8 * v39 + 80);
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v41 = *(_DWORD *)(v16 - 4);
    if ( v41 == *(_DWORD *)(v16 - 8) )
    {
      v46 = (3 * v41 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v41 + 8 >= (unsigned int)v47 || v41 >= v46 )
      {
        v88 = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v117, "Overflow encountered when expanding vector");
        *v88 = (char *)off_1C63128;
        sub_2333C0(v88 + 1, v117);
        sub_233E40((__int64)v117);
        __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v100 = v38;
      v102 = v39;
      v112 = (3 * v41 + 1) >> 1;
      v48 = (unsigned int *)sub_186B300((void *)(v16 - 8), v47);
      v16 = (__int64)(v48 + 2);
      v39 = v102;
      v38 = v100;
      *v48 = v112;
      LODWORD(v48) = v48[1];
      v37 = (_QWORD *)(v16 + 8LL * (unsigned int)v48);
      v40 = (_DWORD)v48 + 1;
    }
    else
    {
      v42 = v41;
      v40 = v41 + 1;
      v37 = (_QWORD *)(v16 + 8 * v42);
    }
  }
  v92 = v93 + 1;
  v49 = v107;
  v97 = v107;
  if ( v107 )
  {
    v34 = *(_QWORD *)(a1 + 8);
LABEL_56:
    v50 = v93;
    v107 = 0;
    v103 = &v93[v49];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v34, v50[1]) )
      {
        v51 = v50[1];
        v52 = v107 + 1;
        v53 = (__int64 *)(v15 + 8LL * v107);
        if ( v51 )
          ++*(_DWORD *)(v51 + 8);
        v54 = *v53;
        if ( *v53 )
        {
          v55 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v55 )
          {
            v108 = v51;
            v89 = v53;
            v94 = v52;
            sub_15D7BC0(v95, v54);
            v53 = v89;
            v52 = v94;
            v51 = v108;
          }
        }
        *v53 = v51;
        ++v50;
        v107 = v52;
        if ( v50 == v103 )
        {
LABEL_66:
          if ( v15 )
          {
            v49 = v107;
            goto LABEL_68;
          }
LABEL_75:
          if ( v109 )
            goto LABEL_76;
          goto LABEL_14;
        }
      }
      else if ( ++v50 == v103 )
      {
        goto LABEL_66;
      }
      v34 = *(_QWORD *)(a1 + 8);
    }
  }
  v97 = 0;
  if ( v15 )
  {
LABEL_68:
    v56 = (__int64 *)(v15 + 8 * v49);
    v57 = v15 + 8LL * *(unsigned int *)(v15 - 4);
    if ( (unsigned __int64)v56 < v57 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 )
          {
            v55 = (*(_DWORD *)(v58 + 8))-- == 1;
            if ( v55 )
              break;
          }
          if ( (unsigned __int64)++v56 >= v57 )
            goto LABEL_74;
        }
        v104 = v57;
        sub_15D7BC0(v95, v58);
        v57 = v104;
        ++v56;
      }
      while ( (unsigned __int64)v56 < v104 );
    }
LABEL_74:
    *(_DWORD *)(v15 - 4) = v107;
    goto LABEL_75;
  }
LABEL_76:
  v59 = v109;
  v109 = 0;
  v60 = &v92[v97];
  v105 = &v92[v97 + v59];
  do
  {
    if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v60) )
    {
      v61 = *v60;
      v62 = v109 + 1;
      v63 = (__int64 *)(v16 + 8LL * v109);
      if ( *v60 )
        ++*(_DWORD *)(v61 + 8);
      v64 = *v63;
      if ( *v63 )
      {
        v55 = (*(_DWORD *)(v64 + 8))-- == 1;
        if ( v55 )
        {
          v110 = v61;
          v96 = v63;
          v98 = v62;
          sub_15D7BC0(v91, v64);
          v63 = v96;
          v62 = v98;
          v61 = v110;
        }
      }
      *v63 = v61;
      v109 = v62;
    }
    ++v60;
  }
  while ( v105 != v60 );
LABEL_14:
  v116[1] = v16;
  sub_39BEE0(v116, v109);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v17 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v107, v15, v109, v16, v90);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_C9E940(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C9E940(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v17 = a2;
  }
  *(_QWORD *)(a1 + 480) = v17;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v18 = *(_QWORD *)(a1 + 480);
  v117[0] = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_C9F390((_QWORD *)(a1 + 56), v117);
  v19 = *(_QWORD *)(a1 + 160);
  if ( v19 )
    *(_DWORD *)(v19 - 4) -= v99;
  v20 = *(_QWORD *)(a1 + 528);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v99;
  sub_15844D0(a1);
  v21 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v21 = *(_QWORD *)(a1 + 480);
  }
  sub_C9E940(v21, *(_QWORD *)(a1 + 488));
  v22 = *(_QWORD *)(a1 + 504);
  v23 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_C9E920(v23, v22);
  *(_QWORD *)(a1 + 496) = 0;
  v24 = *(_QWORD *)(a1 + 40);
  v25 = *(_DWORD *)(v24 - 4);
  *(_DWORD *)(v24 - 4) = v25 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v25 != 1 )
    *(_BYTE *)(v24 + 16LL * (unsigned int)(v25 - 2) + 8) |= 2u;
  sub_2334C0(v116);
  v115[1] = v15;
  return sub_2334C0(v115);
}

