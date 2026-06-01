__int64 __fastcall sub_6FD460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
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
  _QWORD *v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned int v45; // ecx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // r8d
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
  int v72; // r14d
  int v73; // r13d
  __int64 v74; // rcx
  int v75; // edx
  _QWORD *v76; // rcx
  _QWORD *v77; // rdx
  __int64 v78; // rax
  _DWORD *v79; // rax
  unsigned int v80; // edx
  unsigned int v81; // ecx
  size_t v82; // rsi
  unsigned int *v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // ecx
  size_t v86; // rsi
  unsigned int *v87; // rax
  _DWORD *v88; // rdx
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  char **v92; // r15
  char **exception; // r15
  char **v94; // r15
  __int64 v95; // [rsp+10h] [rbp-F0h]
  __int64 v96; // [rsp+18h] [rbp-E8h]
  __int64 v97; // [rsp+20h] [rbp-E0h]
  __int64 v98; // [rsp+28h] [rbp-D8h]
  __int64 v99; // [rsp+30h] [rbp-D0h]
  __int64 *v100; // [rsp+30h] [rbp-D0h]
  int v101; // [rsp+3Ch] [rbp-C4h]
  unsigned int v102; // [rsp+40h] [rbp-C0h]
  __int64 *v103; // [rsp+48h] [rbp-B8h]
  __int64 *v104; // [rsp+48h] [rbp-B8h]
  __int64 v106; // [rsp+58h] [rbp-A8h]
  unsigned int v107; // [rsp+60h] [rbp-A0h]
  __int64 v108; // [rsp+68h] [rbp-98h]
  unsigned int v109; // [rsp+68h] [rbp-98h]
  __int64 *v110; // [rsp+68h] [rbp-98h]
  __int64 *v111; // [rsp+68h] [rbp-98h]
  __int64 v112; // [rsp+70h] [rbp-90h]
  unsigned int v113; // [rsp+70h] [rbp-90h]
  __int64 v114; // [rsp+70h] [rbp-90h]
  __int64 v115; // [rsp+70h] [rbp-90h]
  __int64 *v116; // [rsp+70h] [rbp-90h]
  __int64 *v117; // [rsp+70h] [rbp-90h]
  __int64 v118; // [rsp+70h] [rbp-90h]
  unsigned int v119; // [rsp+70h] [rbp-90h]
  unsigned int v120; // [rsp+78h] [rbp-88h]
  __int64 v121; // [rsp+78h] [rbp-88h]
  unsigned int v122; // [rsp+78h] [rbp-88h]
  unsigned int v123; // [rsp+78h] [rbp-88h]
  __int64 v124; // [rsp+78h] [rbp-88h]
  __int64 v125; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v126; // [rsp+98h] [rbp-68h]
  __int64 v127[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v128[10]; // [rsp+B0h] [rbp-50h] BYREF

  v101 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v71 = *(_QWORD **)(a1 + 160);
  if ( v71 )
    v72 = *((_DWORD *)v71 - 1);
  else
    v72 = 0;
  if ( v101 )
  {
    v73 = 0;
    while ( 1 )
    {
      if ( v71 )
      {
        v80 = *((_DWORD *)v71 - 1);
        if ( v80 == *((_DWORD *)v71 - 2) )
        {
          v81 = (3 * v80 + 1) >> 1;
          v82 = 8 * v81 + 8;
          v122 = v81;
          if ( 8 * v80 + 8 >= (unsigned int)v82 || v80 >= v81 )
          {
LABEL_102:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v128, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v128);
            sub_233E40((__int64)v128);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v83 = (unsigned int *)sub_186B300(v71 - 1, v82);
          v71 = v83 + 2;
          v84 = v83[1];
          *v83 = v122;
          *(_QWORD *)(a1 + 160) = v83 + 2;
          LODWORD(v83) = v84;
          v76 = &v71[v84];
          v75 = (_DWORD)v83 + 1;
        }
        else
        {
          v74 = v80;
          v75 = v80 + 1;
          v76 = &v71[v74];
        }
      }
      else
      {
        v91 = (_QWORD *)sub_186B270(0x18u);
        v75 = 1;
        *v91 = 2;
        v71 = v91 + 1;
        *(_QWORD *)(a1 + 160) = v71;
        v76 = v71;
      }
      *v76 = 0;
      *((_DWORD *)v71 - 1) = v75;
      v77 = *(_QWORD **)(a1 + 528);
      if ( !v77 )
        break;
      v78 = *((unsigned int *)v77 - 1);
      if ( (_DWORD)v78 != *((_DWORD *)v77 - 2) )
      {
        v79 = (_DWORD *)v77 + v78;
        goto LABEL_84;
      }
      v85 = (unsigned int)(3 * v78 + 1) >> 1;
      v86 = 4 * v85 + 8;
      v123 = v85;
      if ( 4 * (int)v78 + 8 >= (unsigned int)v86 || (unsigned int)v78 >= v85 )
        goto LABEL_102;
      ++v73;
      v87 = (unsigned int *)sub_186B300(v77 - 1, v86);
      v88 = v87 + 2;
      *v87 = v123;
      v89 = v87[1];
      *(_QWORD *)(a1 + 528) = v88;
      v88[v89] = v72;
      ++*(v88 - 1);
      if ( v73 == v101 )
        goto LABEL_94;
LABEL_85:
      v71 = *(_QWORD **)(a1 + 160);
    }
    v90 = (_QWORD *)sub_186B270(0x10u);
    v77 = v90 + 1;
    *v90 = 2;
    *(_QWORD *)(a1 + 528) = v90 + 1;
    v79 = v90 + 1;
LABEL_84:
    ++v73;
    *v79 = v72;
    ++*((_DWORD *)v77 - 1);
    if ( v73 == v101 )
      goto LABEL_94;
    goto LABEL_85;
  }
LABEL_94:
  *(_DWORD *)(a1 + 128) += v101;
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
    result = sub_6FC840(a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v103 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v120 = *(_DWORD *)(a2 + 76);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 16 * v12;
  v96 = *v103;
  v98 = v13;
  v107 = *(_DWORD *)(a2 + 72);
  v125 = v13;
  if ( !v107 )
  {
    v127[0] = v13;
    v15 = nullptr;
    v97 = v13;
    if ( !v120 )
    {
      v126 = nullptr;
      sub_39BEE0(&v125, 0);
      v102 = 0;
      LODWORD(v15) = 0;
      v16 = 0;
      goto LABEL_14;
    }
LABEL_40:
    v36 = a2 + v14;
    v37 = *(_QWORD *)(a2 + v14 + 80);
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v112 = v37;
    v38 = (_QWORD *)sub_186B270(0x18u);
    v39 = v38 + 1;
    v40 = v112;
    *v38 = 2;
    v41 = 0;
    v16 = (__int64)(v38 + 1);
    v42 = 1;
    while ( 1 )
    {
      *v39 = v40;
      ++v41;
      *(_DWORD *)(v16 - 4) = v42;
      if ( (unsigned int)v41 >= v120 )
        break;
      v40 = *(_QWORD *)(v36 + 8 * v41 + 80);
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v43 = *(_DWORD *)(v16 - 4);
      if ( v43 == *(_DWORD *)(v16 - 8) )
      {
        v48 = (3 * v43 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v49 || v43 >= v48 )
        {
          v94 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v128, "Overflow encountered when expanding vector");
          *v94 = (char *)off_1C63128;
          sub_2333C0(v94 + 1, v128);
          sub_233E40((__int64)v128);
          __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = v40;
        v109 = (3 * v43 + 1) >> 1;
        v114 = v41;
        v50 = (unsigned int *)sub_186B300((void *)(v16 - 8), v49);
        v51 = v50[1];
        v16 = (__int64)(v50 + 2);
        v41 = v114;
        v40 = v106;
        *v50 = v109;
        LODWORD(v50) = v51;
        v39 = (_QWORD *)(v16 + 8 * v51);
        v42 = (_DWORD)v50 + 1;
      }
      else
      {
        v44 = v43;
        v42 = v43 + 1;
        v39 = (_QWORD *)(v16 + 8 * v44);
      }
    }
    v52 = v103 + 1;
    v99 = v107;
    if ( !v107 )
    {
      v126 = v15;
      sub_39BEE0(&v125, 0);
      v102 = 0;
      v62 = v103 + 1;
      v99 = 0;
      goto LABEL_67;
    }
    v53 = *(_QWORD *)(a1 + 8);
    goto LABEL_56;
  }
  v27 = a2 + v14;
  v28 = *(_QWORD *)(v27 + 80);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = (_QWORD *)sub_186B270(0x18u);
  v30 = v29 + 1;
  *v29 = 2;
  v31 = 1;
  v99 = v107;
  v32 = v107 + 2 * v12;
  v15 = v30;
  v33 = a2 + 8 * v32;
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
    v45 = (3 * v34 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v34 + 8 >= (unsigned int)v46 || v34 >= v45 )
    {
      v92 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v128, "Overflow encountered when expanding vector");
      *v92 = (char *)off_1C63128;
      sub_2333C0(v92 + 1, v128);
      sub_233E40((__int64)v128);
      __cxa_throw(v92, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v108 = v33;
    v113 = (3 * v34 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v15 - 2, v46);
    v15 = v47 + 2;
    v33 = v108;
    *v47 = v113;
    LODWORD(v47) = v47[1];
    v30 = &v15[2 * (unsigned int)v47];
    v31 = (_DWORD)v47 + 1;
  }
LABEL_39:
  v35 = *(_QWORD *)(a1 + 8);
  v97 = v35;
  v14 = 16LL * *(unsigned int *)(a2 + 20);
  v127[0] = v35;
  if ( v120 )
    goto LABEL_40;
  v53 = v35;
  v16 = 0;
  v52 = v103 + 1;
LABEL_56:
  v102 = 0;
  v54 = 0;
  while ( 1 )
  {
    v110 = v52;
    v115 = v54;
    v55 = sub_15D3190(v53, v52[v54]);
    v56 = v115;
    v52 = v110;
    if ( v55 )
      break;
    v54 = v115 + 1;
    if ( (int)v115 + 1 >= v107 )
      goto LABEL_66;
LABEL_58:
    v53 = *(_QWORD *)(a1 + 8);
  }
  v57 = v110[v115];
  v58 = v102 + 1;
  v59 = (__int64 *)&v15[2 * v102];
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v60 = *v59;
  if ( *v59 )
  {
    v61 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v61 )
    {
      v118 = v57;
      v95 = v56;
      sub_15D7BC0(v98, v60);
      v52 = v110;
      v56 = v95;
      v59 = (__int64 *)&v15[2 * v102];
      v58 = v102 + 1;
      v57 = v118;
    }
  }
  *v59 = v57;
  v54 = v56 + 1;
  v102 = v58;
  if ( (unsigned int)v54 < v107 )
    goto LABEL_58;
LABEL_66:
  v126 = v15;
  v116 = v52;
  sub_39BEE0(&v125, v102);
  v62 = v116;
  if ( v120 )
  {
LABEL_67:
    v63 = v120;
    v120 = 0;
    v64 = &v62[v99];
    v111 = &v62[v99 + v63];
    do
    {
      v117 = v64;
      v65 = sub_15D3190(*(_QWORD *)(a1 + 8), *v64);
      v66 = v117;
      if ( v65 )
      {
        v67 = *v117;
        v68 = v120 + 1;
        v69 = (__int64 *)(v16 + 8LL * v120);
        if ( *v117 )
          ++*(_DWORD *)(v67 + 8);
        v70 = *v69;
        if ( *v69 )
        {
          v61 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v61 )
          {
            v100 = v117;
            v104 = (__int64 *)(v16 + 8LL * v120);
            v119 = v120 + 1;
            v124 = v67;
            sub_15D7BC0(v97, v70);
            v66 = v100;
            v69 = v104;
            v68 = v119;
            v67 = v124;
          }
        }
        *v69 = v67;
        v120 = v68;
      }
      v64 = v66 + 1;
    }
    while ( v111 != v64 );
  }
LABEL_14:
  v127[1] = v16;
  sub_39BEE0(v127, v120);
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v17 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v102, (_DWORD)v15, v120, v16, v96);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v121 = v17;
    sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v18 = v121;
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v18 = a2;
  }
  *(_QWORD *)(a1 + 480) = v18;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v19 = *(_QWORD *)(a1 + 480);
  v128[0] = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_6EFE70((_QWORD *)(a1 + 56), v128);
  v20 = *(_QWORD *)(a1 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v101;
  v21 = *(_QWORD *)(a1 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v101;
  sub_15844D0(a1);
  v22 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v22 = *(_QWORD *)(a1 + 480);
  }
  sub_6EF400(v22, *(_QWORD *)(a1 + 488));
  v23 = *(_QWORD *)(a1 + 504);
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_6EF3E0(v24, v23);
  *(_QWORD *)(a1 + 496) = 0;
  v25 = *(_QWORD *)(a1 + 40);
  v26 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v26 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v26 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
  sub_2334C0(v127);
  return sub_2334C0(&v125);
}

