__int64 __fastcall sub_6363E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // r12
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r12
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
  __int64 v54; // r15
  char v55; // al
  __int64 v56; // rax
  unsigned int v57; // r9d
  __int64 *v58; // r8
  __int64 v59; // rsi
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 *v62; // r15
  __int64 v63; // rax
  unsigned int v64; // r9d
  __int64 *v65; // r8
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdi
  int v71; // r9d
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rax
  int v86; // r13d
  int v87; // r12d
  __int64 v88; // rcx
  int v89; // edx
  _QWORD *v90; // rcx
  _QWORD *v91; // rdx
  __int64 v92; // rax
  _DWORD *v93; // rax
  unsigned int v94; // edx
  unsigned int v95; // ebx
  size_t v96; // rsi
  unsigned int *v97; // rdx
  __int64 v98; // rcx
  unsigned int v99; // ebx
  size_t v100; // rsi
  unsigned int *v101; // rax
  _DWORD *v102; // rdx
  __int64 v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdi
  char **v107; // r14
  char **exception; // rbx
  char **v109; // r14
  __int64 *v110; // [rsp+0h] [rbp-F0h]
  __int64 v111; // [rsp+10h] [rbp-E0h]
  __int64 v112; // [rsp+18h] [rbp-D8h]
  __int64 v113; // [rsp+20h] [rbp-D0h]
  __int64 v114; // [rsp+20h] [rbp-D0h]
  unsigned int v115; // [rsp+20h] [rbp-D0h]
  __int64 v116; // [rsp+28h] [rbp-C8h]
  int v117; // [rsp+30h] [rbp-C0h]
  unsigned int v118; // [rsp+34h] [rbp-BCh]
  __int64 *v119; // [rsp+38h] [rbp-B8h]
  unsigned int v120; // [rsp+38h] [rbp-B8h]
  __int64 *v121; // [rsp+38h] [rbp-B8h]
  __int64 v122; // [rsp+40h] [rbp-B0h]
  unsigned int v123; // [rsp+48h] [rbp-A8h]
  __int64 v125; // [rsp+58h] [rbp-98h]
  unsigned int v126; // [rsp+58h] [rbp-98h]
  __int64 *v127; // [rsp+58h] [rbp-98h]
  __int64 *v128; // [rsp+58h] [rbp-98h]
  __int64 *v129; // [rsp+58h] [rbp-98h]
  unsigned __int64 v130; // [rsp+58h] [rbp-98h]
  __int64 v131; // [rsp+58h] [rbp-98h]
  unsigned int v132; // [rsp+60h] [rbp-90h]
  __int64 v133; // [rsp+60h] [rbp-90h]
  __int64 v134; // [rsp+60h] [rbp-90h]
  __int64 v135; // [rsp+60h] [rbp-90h]
  int v136; // [rsp+60h] [rbp-90h]
  __int64 v137; // [rsp+60h] [rbp-90h]
  _QWORD *v138; // [rsp+60h] [rbp-90h]
  __int64 v139; // [rsp+60h] [rbp-90h]
  __int64 v140; // [rsp+60h] [rbp-90h]
  __int64 v141; // [rsp+68h] [rbp-88h]
  unsigned int v142; // [rsp+68h] [rbp-88h]
  __int64 v143; // [rsp+68h] [rbp-88h]
  __int64 v144; // [rsp+78h] [rbp-78h] BYREF
  __int64 v145; // [rsp+80h] [rbp-70h] BYREF
  _DWORD *v146; // [rsp+88h] [rbp-68h]
  __int64 v147; // [rsp+90h] [rbp-60h] BYREF
  _QWORD *v148; // [rsp+98h] [rbp-58h]
  __int64 v149; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-48h]

  v4 = a3;
  v117 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v85 = *(_QWORD **)(a1 + 160);
  if ( v85 )
    v86 = *((_DWORD *)v85 - 1);
  else
    v86 = 0;
  if ( v117 )
  {
    v139 = v4;
    v87 = 0;
    while ( 1 )
    {
      if ( v85 )
      {
        v94 = *((_DWORD *)v85 - 1);
        if ( v94 == *((_DWORD *)v85 - 2) )
        {
          v95 = (3 * v94 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v94 + 8 >= (unsigned int)v96 || v94 >= v95 )
          {
LABEL_127:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v149, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v149);
            sub_233E40((__int64)&v149);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v97 = (unsigned int *)sub_186B300(v85 - 1, v96);
          v85 = v97 + 2;
          v98 = v97[1];
          *v97 = v95;
          *(_QWORD *)(a1 + 160) = v97 + 2;
          LODWORD(v97) = v98;
          v90 = &v85[v98];
          v89 = (_DWORD)v97 + 1;
        }
        else
        {
          v88 = v94;
          v89 = v94 + 1;
          v90 = &v85[v88];
        }
      }
      else
      {
        v104 = (_QWORD *)sub_186B270(0x18u);
        v89 = 1;
        *v104 = 2;
        v85 = v104 + 1;
        *(_QWORD *)(a1 + 160) = v85;
        v90 = v85;
      }
      *v90 = 0;
      *((_DWORD *)v85 - 1) = v89;
      v91 = *(_QWORD **)(a1 + 528);
      if ( !v91 )
        break;
      v92 = *((unsigned int *)v91 - 1);
      if ( (_DWORD)v92 != *((_DWORD *)v91 - 2) )
      {
        v93 = (_DWORD *)v91 + v92;
        goto LABEL_105;
      }
      v99 = (unsigned int)(3 * v92 + 1) >> 1;
      v100 = 4 * v99 + 8;
      if ( 4 * (int)v92 + 8 >= (unsigned int)v100 || (unsigned int)v92 >= v99 )
        goto LABEL_127;
      ++v87;
      v101 = (unsigned int *)sub_186B300(v91 - 1, v100);
      v102 = v101 + 2;
      *v101 = v99;
      v103 = v101[1];
      *(_QWORD *)(a1 + 528) = v102;
      v102[v103] = v86;
      ++*(v102 - 1);
      if ( v87 == v117 )
      {
LABEL_115:
        v4 = v139;
        goto LABEL_116;
      }
LABEL_106:
      v85 = *(_QWORD **)(a1 + 160);
    }
    v105 = (_QWORD *)sub_186B270(0x10u);
    v91 = v105 + 1;
    *v105 = 2;
    *(_QWORD *)(a1 + 528) = v105 + 1;
    v93 = v105 + 1;
LABEL_105:
    ++v87;
    *v93 = v86;
    ++*((_DWORD *)v91 - 1);
    if ( v87 == v117 )
      goto LABEL_115;
    goto LABEL_106;
  }
LABEL_116:
  *(_DWORD *)(a1 + 128) += v117;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v4 + 8) >> 6;
    if ( v9 >= v5 )
      break;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      v11 = v9 - 1;
      if ( v10 < v9 )
        v11 = (unsigned int)v11 - v10;
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(v4 + 8) & 0x3F;
    *(_DWORD *)(v4 + 8) = v7;
    result = sub_6358A0((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v23 = *(unsigned int *)(a2 + 20);
  v24 = *(_QWORD *)(a1 + 8);
  v119 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v4 + 12));
  v123 = *(_DWORD *)(a2 + 72);
  v116 = *v119;
  v132 = *(_DWORD *)(a2 + 76);
  v25 = 16 * v23;
  v112 = *(_QWORD *)(a1 + 8);
  v145 = v112;
  if ( !v123 )
  {
    v147 = v24;
    v32 = nullptr;
    v111 = v24;
    if ( !v132 )
    {
      v146 = nullptr;
      sub_39BEE0(&v145, 0);
      v118 = 0;
      v32 = nullptr;
      v41 = nullptr;
      goto LABEL_76;
    }
LABEL_40:
    v35 = a2 + v25;
    v36 = *(_QWORD *)(v35 + 80);
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v141 = v36;
    v37 = (_QWORD *)sub_186B270(0x18u);
    v38 = v37 + 1;
    v39 = v141;
    *v37 = 2;
    v40 = 0;
    v41 = v37 + 1;
    v42 = 1;
    while ( 1 )
    {
      *v38 = v39;
      ++v40;
      *((_DWORD *)v41 - 1) = v42;
      if ( (unsigned int)v40 >= v132 )
        break;
      v39 = *(_QWORD *)(v35 + 8 * v40 + 80);
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v43 = *((_DWORD *)v41 - 1);
      if ( v43 == *((_DWORD *)v41 - 2) )
      {
        v48 = (3 * v43 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v49 || v43 >= v48 )
        {
          v109 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v149, "Overflow encountered when expanding vector");
          *v109 = (char *)off_1C63128;
          sub_2333C0(v109 + 1, &v149);
          sub_233E40((__int64)&v149);
          __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v122 = v40;
        v126 = (3 * v43 + 1) >> 1;
        v143 = v39;
        v50 = (unsigned int *)sub_186B300(v41 - 1, v49);
        v51 = v50[1];
        v41 = v50 + 2;
        v39 = v143;
        v40 = v122;
        *v50 = v126;
        LODWORD(v50) = v51;
        v38 = &v41[v51];
        v42 = (_DWORD)v50 + 1;
      }
      else
      {
        v44 = v43;
        v42 = v43 + 1;
        v38 = &v41[v44];
      }
    }
    v52 = v119 + 1;
    v113 = v123;
    if ( !v123 )
    {
      v146 = v32;
      sub_39BEE0(&v145, 0);
      v118 = 0;
      v60 = v119 + 1;
      v113 = 0;
      goto LABEL_67;
    }
    v53 = *(_QWORD *)(a1 + 8);
    goto LABEL_56;
  }
  v26 = a2 + v25;
  v27 = *(_QWORD *)(v26 + 80);
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v28 = (_QWORD *)sub_186B270(0x18u);
  *v28 = 2;
  v113 = v123;
  v29 = a2 + 8 * (v123 + 2 * v23);
  v30 = v28 + 1;
  v31 = 1;
  v32 = v30;
  while ( 1 )
  {
    v26 += 8;
    *v30 = v27;
    *(v32 - 1) = v31;
    if ( v29 == v26 )
      break;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v26 + 80);
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v33 = *(v32 - 1);
      if ( v33 == *(v32 - 2) )
        break;
      v26 += 8;
      *(_QWORD *)&v32[2 * v33] = v27;
      *(v32 - 1) = v33 + 1;
      if ( v29 == v26 )
        goto LABEL_39;
    }
    v45 = (3 * v33 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v33 + 8 >= (unsigned int)v46 || v33 >= v45 )
    {
      v107 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v149, "Overflow encountered when expanding vector");
      *v107 = (char *)off_1C63128;
      sub_2333C0(v107 + 1, &v149);
      sub_233E40((__int64)&v149);
      __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v125 = v29;
    v142 = (3 * v33 + 1) >> 1;
    v47 = (unsigned int *)sub_186B300(v32 - 2, v46);
    v32 = v47 + 2;
    v29 = v125;
    *v47 = v142;
    LODWORD(v47) = v47[1];
    v30 = &v32[2 * (unsigned int)v47];
    v31 = (_DWORD)v47 + 1;
  }
LABEL_39:
  v34 = *(_QWORD *)(a1 + 8);
  v25 = 16LL * *(unsigned int *)(a2 + 20);
  v111 = v34;
  v147 = v34;
  if ( v132 )
    goto LABEL_40;
  v53 = v34;
  v41 = nullptr;
  v52 = v119 + 1;
LABEL_56:
  v54 = 0;
  v118 = 0;
  while ( 1 )
  {
    v127 = v52;
    v55 = sub_15D3190(v53, v52[v54]);
    v52 = v127;
    if ( v55 )
      break;
    if ( (unsigned int)++v54 >= v123 )
      goto LABEL_66;
LABEL_58:
    v53 = *(_QWORD *)(a1 + 8);
  }
  v56 = v127[v54];
  v57 = v118 + 1;
  v58 = (__int64 *)&v32[2 * v118];
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v59 = *v58;
  if ( *v58 )
  {
    v14 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v14 )
    {
      v131 = v56;
      v110 = v52;
      sub_15D7BC0(v112, v59);
      v52 = v110;
      v58 = (__int64 *)&v32[2 * v118];
      v57 = v118 + 1;
      v56 = v131;
    }
  }
  *v58 = v56;
  ++v54;
  v118 = v57;
  if ( (unsigned int)v54 < v123 )
    goto LABEL_58;
LABEL_66:
  v128 = v52;
  v146 = v32;
  sub_39BEE0(&v145, v118);
  v60 = v128;
  if ( v132 )
  {
LABEL_67:
    v61 = v132;
    v132 = 0;
    v62 = &v60[v113];
    v129 = &v60[v113 + v61];
    do
    {
      while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v62) )
      {
        if ( ++v62 == v129 )
          goto LABEL_76;
      }
      v63 = *v62;
      v64 = v132 + 1;
      v65 = &v41[v132];
      if ( *v62 )
        ++*(_DWORD *)(v63 + 8);
      v66 = *v65;
      if ( *v65 )
      {
        v14 = (*(_DWORD *)(v66 + 8))-- == 1;
        if ( v14 )
        {
          v140 = v63;
          v115 = v64;
          v121 = v65;
          sub_15D7BC0(v111, v66);
          v64 = v115;
          v65 = v121;
          v63 = v140;
        }
      }
      *v65 = v63;
      ++v62;
      v132 = v64;
    }
    while ( v62 != v129 );
  }
LABEL_76:
  v148 = v41;
  sub_39BEE0(&v147, v132);
  v114 = *(_QWORD *)(a1 + 8);
  v67 = sub_15DBA30(v114, a2, v118, (_DWORD)v32, v132, (_DWORD)v41, v116);
  v68 = v67;
  v69 = *(_QWORD *)(a1 + 504);
  v70 = *(_QWORD *)(a1 + 496);
  if ( v67 )
  {
    ++*(_DWORD *)(v67 + 8);
    sub_629F20(v70, v69);
    *(_QWORD *)(a1 + 496) = 0;
    v71 = a1 + 480;
    if ( a2 != v68 )
      goto LABEL_78;
    goto LABEL_85;
  }
  sub_629F20(v70, v69);
  *(_QWORD *)(a1 + 496) = 0;
LABEL_78:
  v72 = *(_QWORD *)(a1 + 504);
  v73 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v4 + 12));
  if ( v73 )
  {
    ++*(_DWORD *)(v73 + 8);
    v133 = v73;
    sub_629F20(0, v72);
    v74 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v133;
    v75 = sub_15DE700(v74);
    if ( v75 )
      ++*(_DWORD *)(v75 + 8);
    v134 = v75;
    sub_629F20(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    v76 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v134;
    v77 = sub_15DE750(v76);
  }
  else
  {
    sub_629F20(0, v72);
    v106 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = 0;
    v77 = sub_15DE370(v106);
  }
  if ( v77 )
    ++*(_DWORD *)(v77 + 8);
  v135 = v77;
  sub_629F20(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
  v71 = a1 + 480;
  *(_QWORD *)(a1 + 496) = v135;
  if ( v68 )
LABEL_85:
    ++*(_DWORD *)(v68 + 8);
  v136 = v71;
  sub_629FE0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v78 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 480) = v68;
  v149 = 0;
  v79 = *(_QWORD *)(a1 + 144);
  v150 = v78;
  if ( (unsigned __int8)sub_6AC390(v79, v68, v116, (_DWORD)v32, (_DWORD)v41, v136, (__int64)&v149) )
  {
    v80 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v149);
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    v137 = v80;
    sub_629F20(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    *(_QWORD *)(a1 + 496) = v137;
  }
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 )
  {
    v81 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    v120 = *(_DWORD *)(v4 + 12);
    v82 = (_QWORD *)(v12 + 8LL * v120);
    if ( (unsigned __int64)v82 >= v81 )
      goto LABEL_11;
    do
    {
      v83 = *v82;
      if ( *v82 )
      {
        v84 = *(_QWORD *)(a1 + 80);
        v14 = (*(_DWORD *)(v83 + 8))-- == 1;
        if ( v14 )
        {
          v130 = v81;
          v138 = v82;
          sub_15D7BC0(v84, v83);
          v81 = v130;
          v82 = v138;
        }
      }
      ++v82;
    }
    while ( (unsigned __int64)v82 < v81 );
    v12 = *(_QWORD *)(a1 + 88);
    if ( v12 )
LABEL_11:
      *(_DWORD *)(v12 - 4) = v120;
  }
  v13 = *(_QWORD *)(a1 + 496);
  v144 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_62BCA0((_QWORD *)(a1 + 88), &v144);
  sub_629F20(v149, v150);
  if ( v68 )
  {
    v14 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v114, v68);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v15 = *(_QWORD *)(a1 + 480);
  v149 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_62BD60((_QWORD *)(a1 + 56), &v149);
  v16 = *(_QWORD *)(a1 + 160);
  if ( v16 )
    *(_DWORD *)(v16 - 4) -= v117;
  v17 = *(_QWORD *)(a1 + 528);
  if ( v17 )
    *(_DWORD *)(v17 - 4) -= v117;
  sub_15844D0(a1);
  v18 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v18 = *(_QWORD *)(a1 + 480);
  }
  sub_629FE0(v18, *(_QWORD *)(a1 + 488));
  v19 = *(_QWORD *)(a1 + 504);
  v20 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_629F20(v20, v19);
  v21 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 496) = 0;
  v22 = *(_DWORD *)(v21 - 4);
  *(_DWORD *)(v21 - 4) = v22 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v22 != 1 )
    *(_BYTE *)(v21 + 16LL * (unsigned int)(v22 - 2) + 8) |= 2u;
  v148 = v41;
  sub_2334C0(&v147);
  v146 = v32;
  return sub_2334C0(&v145);
}

