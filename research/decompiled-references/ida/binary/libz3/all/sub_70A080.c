__int64 __fastcall sub_70A080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  _DWORD *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // r13
  __int64 v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rsi
  unsigned int v44; // r8d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // r9d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rsi
  __int64 *v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned int v58; // r9d
  __int64 *v59; // r8
  __int64 v60; // rsi
  bool v61; // zf
  __int64 *v62; // rcx
  __int64 v63; // rax
  __int64 *v64; // rdx
  char v65; // al
  __int64 *v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // r9d
  __int64 *v69; // r8
  __int64 v70; // rsi
  _QWORD *v71; // rax
  int v72; // r15d
  int v73; // ebx
  __int64 v74; // rsi
  int v75; // edx
  _QWORD *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // edx
  unsigned int v80; // r8d
  size_t v81; // rsi
  unsigned int v82; // r12d
  unsigned int *v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rax
  _QWORD *v86; // rax
  char **exception; // r14
  char **v88; // r15
  char **v89; // r15
  __int64 v90; // [rsp+10h] [rbp-E0h]
  __int64 v91; // [rsp+18h] [rbp-D8h]
  __int64 v92; // [rsp+20h] [rbp-D0h]
  __int64 v93; // [rsp+28h] [rbp-C8h]
  __int64 v94; // [rsp+30h] [rbp-C0h]
  __int64 *v95; // [rsp+30h] [rbp-C0h]
  int v96; // [rsp+3Ch] [rbp-B4h]
  unsigned int v97; // [rsp+40h] [rbp-B0h]
  __int64 *v98; // [rsp+48h] [rbp-A8h]
  __int64 *v99; // [rsp+48h] [rbp-A8h]
  __int64 v101; // [rsp+58h] [rbp-98h]
  unsigned int v102; // [rsp+60h] [rbp-90h]
  __int64 v103; // [rsp+68h] [rbp-88h]
  unsigned int v104; // [rsp+68h] [rbp-88h]
  __int64 *v105; // [rsp+68h] [rbp-88h]
  __int64 *v106; // [rsp+68h] [rbp-88h]
  unsigned int v107; // [rsp+70h] [rbp-80h]
  __int64 v108; // [rsp+70h] [rbp-80h]
  __int64 v109; // [rsp+70h] [rbp-80h]
  __int64 *v110; // [rsp+70h] [rbp-80h]
  __int64 *v111; // [rsp+70h] [rbp-80h]
  __int64 v113; // [rsp+70h] [rbp-80h]
  unsigned int v114; // [rsp+70h] [rbp-80h]
  unsigned int v115; // [rsp+78h] [rbp-78h]
  __int64 v116; // [rsp+78h] [rbp-78h]
  __int64 v117; // [rsp+78h] [rbp-78h]
  __int64 v118; // [rsp+80h] [rbp-70h] BYREF
  _DWORD *v119; // [rsp+88h] [rbp-68h]
  __int64 v120[2]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v121[10]; // [rsp+A0h] [rbp-50h] BYREF

  v3 = a2;
  v4 = a1;
  v96 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v71 = *(_QWORD **)(a1 + 160);
    if ( v71 )
      v72 = *((_DWORD *)v71 - 1);
    else
      v72 = 0;
    if ( v96 )
    {
      v73 = 0;
      while ( 1 )
      {
        if ( v71 )
        {
          v79 = *((_DWORD *)v71 - 1);
          if ( v79 == *((_DWORD *)v71 - 2) )
          {
            v80 = (3 * v79 + 1) >> 1;
            v81 = 8 * v80 + 8;
            v82 = v80;
            if ( 8 * v79 + 8 >= (unsigned int)v81 || v79 >= v80 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_6FFCA0(v121, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v121);
              sub_233E40((__int64)v121);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v83 = (unsigned int *)sub_186B300(v71 - 1, v81);
            v71 = v83 + 2;
            v84 = v83[1];
            *v83 = v82;
            *(_QWORD *)(a1 + 160) = v83 + 2;
            LODWORD(v83) = v84;
            v76 = &v71[v84];
            v75 = (_DWORD)v83 + 1;
          }
          else
          {
            v74 = v79;
            v75 = v79 + 1;
            v76 = &v71[v74];
          }
        }
        else
        {
          v86 = (_QWORD *)sub_186B270(0x18u);
          v75 = 1;
          *v86 = 2;
          v71 = v86 + 1;
          *(_QWORD *)(a1 + 160) = v71;
          v76 = v71;
        }
        *v76 = 0;
        *((_DWORD *)v71 - 1) = v75;
        v77 = *(_QWORD *)(a1 + 528);
        if ( !v77 || (v78 = *(unsigned int *)(v77 - 4), (_DWORD)v78 == *(_DWORD *)(v77 - 8)) )
        {
          ++v73;
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v85 = *(_QWORD *)(a1 + 528);
          *(_DWORD *)(v85 + 4LL * (unsigned int)(*(_DWORD *)(v85 - 4))++) = v72;
          if ( v73 == v96 )
          {
LABEL_91:
            v4 = a1;
            v3 = a2;
            break;
          }
        }
        else
        {
          ++v73;
          *(_DWORD *)(v77 + 4 * v78) = v72;
          ++*(_DWORD *)(v77 - 4);
          if ( v73 == v96 )
            goto LABEL_91;
        }
        v71 = *(_QWORD **)(a1 + 160);
      }
    }
    *(_DWORD *)(v4 + 128) += v96;
  }
  v5 = *(_DWORD *)(v3 + 76) + *(_DWORD *)(v3 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
      break;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v3 + 72);
      if ( v10 < v9 )
        v11 = v3 + 8LL * (v9 - v10 - 1);
      else
        v11 = v3 + 8LL * (v9 - 1);
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(v3 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_707860(v4, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(v3 + 20);
  v13 = *(_QWORD *)(v4 + 8);
  v98 = (__int64 *)(*(_QWORD *)(v4 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v115 = *(_DWORD *)(v3 + 76);
  v14 = 16 * v12;
  v91 = *v98;
  v93 = v13;
  v102 = *(_DWORD *)(v3 + 72);
  v118 = v13;
  if ( !v102 )
  {
    v120[0] = v13;
    v15 = nullptr;
    v92 = v13;
    if ( !v115 )
    {
      v119 = nullptr;
      sub_39BEE0(&v118, 0);
      v97 = 0;
      v16 = 0;
      LODWORD(v15) = 0;
      goto LABEL_14;
    }
LABEL_40:
    v36 = *(_QWORD *)(v3 + v14 + 80);
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v37 = (_QWORD *)sub_186B270(0x18u);
    v38 = v37 + 1;
    v39 = v3 + v14;
    *v37 = 2;
    v40 = 0;
    v16 = (__int64)(v37 + 1);
    v41 = 1;
    while ( 1 )
    {
      *v38 = v36;
      ++v40;
      *(_DWORD *)(v16 - 4) = v41;
      if ( (unsigned int)v40 >= v115 )
        break;
      v36 = *(_QWORD *)(v39 + 8 * v40 + 80);
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v42 = *(_DWORD *)(v16 - 4);
      if ( v42 == *(_DWORD *)(v16 - 8) )
      {
        v48 = (3 * v42 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v42 + 8 >= (unsigned int)v49 || v42 >= v48 )
        {
          v89 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v121, "Overflow encountered when expanding vector");
          *v89 = (char *)off_1C63128;
          sub_2333C0(v89 + 1, v121);
          sub_233E40((__int64)v121);
          __cxa_throw(v89, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v101 = v39;
        v104 = (3 * v42 + 1) >> 1;
        v108 = v40;
        v50 = (unsigned int *)sub_186B300((void *)(v16 - 8), v49);
        v51 = v50[1];
        v16 = (__int64)(v50 + 2);
        v40 = v108;
        v39 = v101;
        *v50 = v104;
        LODWORD(v50) = v51;
        v38 = (_QWORD *)(v16 + 8 * v51);
        v41 = (_DWORD)v50 + 1;
      }
      else
      {
        v43 = v42;
        v41 = v42 + 1;
        v38 = (_QWORD *)(v16 + 8 * v43);
      }
    }
    v52 = v98 + 1;
    v94 = v102;
    if ( !v102 )
    {
      v119 = v15;
      sub_39BEE0(&v118, 0);
      v97 = 0;
      v62 = v98 + 1;
      v94 = 0;
      goto LABEL_67;
    }
    v53 = *(_QWORD *)(v4 + 8);
    goto LABEL_56;
  }
  v27 = v3 + v14;
  v28 = *(_QWORD *)(v27 + 80);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = (_QWORD *)sub_186B270(0x18u);
  v30 = v29 + 1;
  *v29 = 2;
  v31 = 1;
  v94 = v102;
  v32 = v102 + 2 * v12;
  v15 = v30;
  v33 = v3 + 8 * v32;
  while ( 1 )
  {
    v27 += 8;
    *v30 = v28;
    *(v15 - 1) = v31;
    if ( v33 == v27 )
      break;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v27 + 80);
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      v34 = *(v15 - 1);
      if ( v34 == *(v15 - 2) )
        break;
      v27 += 8;
      *(_QWORD *)&v15[2 * v34] = v28;
      *(v15 - 1) = v34 + 1;
      if ( v33 == v27 )
        goto LABEL_39;
    }
    v44 = (3 * v34 + 1) >> 1;
    v45 = 8 * v44 + 8;
    if ( 8 * v34 + 8 >= (unsigned int)v45 || v34 >= v44 )
    {
      v88 = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v121, "Overflow encountered when expanding vector");
      *v88 = (char *)off_1C63128;
      sub_2333C0(v88 + 1, v121);
      sub_233E40((__int64)v121);
      __cxa_throw(v88, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v103 = v33;
    v107 = (3 * v34 + 1) >> 1;
    v46 = (unsigned int *)sub_186B300(v15 - 2, v45);
    v47 = v46[1];
    v15 = v46 + 2;
    v33 = v103;
    *v46 = v107;
    LODWORD(v46) = v47;
    v30 = &v15[2 * v47];
    v31 = (_DWORD)v46 + 1;
  }
LABEL_39:
  v35 = *(_QWORD *)(v4 + 8);
  v92 = v35;
  v14 = 16LL * *(unsigned int *)(v3 + 20);
  v120[0] = v35;
  if ( v115 )
    goto LABEL_40;
  v53 = v35;
  v16 = 0;
  v52 = v98 + 1;
LABEL_56:
  v97 = 0;
  v54 = 0;
  while ( 1 )
  {
    v109 = v54;
    v105 = v52;
    v55 = sub_15D3190(v53, v52[v54]);
    v56 = v109;
    v52 = v105;
    if ( v55 )
      break;
    v54 = v109 + 1;
    if ( (int)v109 + 1 >= v102 )
      goto LABEL_66;
LABEL_58:
    v53 = *(_QWORD *)(v4 + 8);
  }
  v57 = v105[v109];
  v58 = v97 + 1;
  v59 = (__int64 *)&v15[2 * v97];
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v60 = *v59;
  if ( *v59 )
  {
    v61 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v61 )
    {
      v113 = v57;
      v90 = v56;
      sub_15D7BC0(v93, v60);
      v52 = v105;
      v56 = v90;
      v59 = (__int64 *)&v15[2 * v97];
      v58 = v97 + 1;
      v57 = v113;
    }
  }
  *v59 = v57;
  v54 = v56 + 1;
  v97 = v58;
  if ( (unsigned int)v54 < v102 )
    goto LABEL_58;
LABEL_66:
  v110 = v52;
  v119 = v15;
  sub_39BEE0(&v118, v97);
  v62 = v110;
  if ( v115 )
  {
LABEL_67:
    v63 = v115;
    v115 = 0;
    v64 = &v62[v94];
    v106 = &v62[v94 + v63];
    do
    {
      v111 = v64;
      v65 = sub_15D3190(*(_QWORD *)(v4 + 8), *v64);
      v66 = v111;
      if ( v65 )
      {
        v67 = *v111;
        v68 = v115 + 1;
        v69 = (__int64 *)(v16 + 8LL * v115);
        if ( *v111 )
          ++*(_DWORD *)(v67 + 8);
        v70 = *v69;
        if ( *v69 )
        {
          v61 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v61 )
          {
            v95 = v111;
            v99 = (__int64 *)(v16 + 8LL * v115);
            v114 = v115 + 1;
            v117 = v67;
            sub_15D7BC0(v92, v70);
            v66 = v95;
            v69 = v99;
            v68 = v114;
            v67 = v117;
          }
        }
        *v69 = v67;
        v115 = v68;
      }
      v64 = v66 + 1;
    }
    while ( v106 != v64 );
  }
LABEL_14:
  v120[1] = v16;
  sub_39BEE0(v120, v115);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v17 = sub_15DBA30(*(_QWORD *)(v4 + 8), v3, v97, (_DWORD)v15, v115, v16, v91);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v116 = v17;
    sub_6FFC80(*(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 488));
    v18 = v116;
  }
  else
  {
    ++*(_DWORD *)(v3 + 8);
    sub_6FFC80(*(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 488));
    v18 = v3;
  }
  *(_QWORD *)(v4 + 480) = v18;
  sub_39BEE0((__int64 *)(v4 + 48), *(_DWORD *)(a3 + 12));
  v19 = *(_QWORD *)(v4 + 480);
  v121[0] = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_6FFDF0((_QWORD *)(v4 + 56), v121);
  v20 = *(_QWORD *)(v4 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v96;
  v21 = *(_QWORD *)(v4 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v96;
  sub_15844D0(v4);
  v22 = *(_QWORD *)(v4 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(v4, v3, 0, *(_QWORD *)(v4 + 480));
    v22 = *(_QWORD *)(v4 + 480);
  }
  sub_6FFC80(v22, *(_QWORD *)(v4 + 488));
  v23 = *(_QWORD *)(v4 + 504);
  v24 = *(_QWORD *)(v4 + 496);
  *(_QWORD *)(v4 + 480) = 0;
  sub_6FFC60(v24, v23);
  *(_QWORD *)(v4 + 496) = 0;
  v25 = *(_QWORD *)(v4 + 40);
  v26 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v26 - 1;
  if ( *(_QWORD *)(v4 + 480) != v3 && v26 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
  sub_2334C0(v120);
  return sub_2334C0(&v118);
}

