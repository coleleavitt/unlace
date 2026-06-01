__int64 __fastcall sub_7085C0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  _DWORD *v32; // r12
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r15
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int *v51; // rax
  _DWORD *v52; // rdi
  __int64 *v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // r13
  char v56; // al
  __int64 v57; // rax
  unsigned int v58; // r9d
  __int64 *v59; // r8
  __int64 v60; // rsi
  __int64 *v61; // rcx
  __int64 v62; // rax
  __int64 *v63; // r13
  __int64 v64; // rdx
  unsigned int v65; // r8d
  __int64 *v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  _QWORD *v81; // rax
  int v82; // r12d
  int v83; // ebx
  __int64 v84; // rsi
  int v85; // edx
  _QWORD *v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // edx
  unsigned int v90; // r8d
  size_t v91; // rsi
  unsigned int *v92; // rdx
  __int64 v93; // rsi
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rdi
  char **exception; // r14
  char **v98; // r14
  char **v99; // r14
  __int64 *v100; // [rsp+0h] [rbp-F0h]
  __int64 v101; // [rsp+10h] [rbp-E0h]
  __int64 v102; // [rsp+18h] [rbp-D8h]
  __int64 v103; // [rsp+20h] [rbp-D0h]
  __int64 v104; // [rsp+28h] [rbp-C8h]
  unsigned int v105; // [rsp+28h] [rbp-C8h]
  int v106; // [rsp+30h] [rbp-C0h]
  unsigned int v107; // [rsp+34h] [rbp-BCh]
  __int64 *v108; // [rsp+38h] [rbp-B8h]
  __int64 v109; // [rsp+38h] [rbp-B8h]
  __int64 *v110; // [rsp+38h] [rbp-B8h]
  unsigned int v112; // [rsp+48h] [rbp-A8h]
  unsigned int v113; // [rsp+50h] [rbp-A0h]
  unsigned int v114; // [rsp+50h] [rbp-A0h]
  __int64 v115; // [rsp+58h] [rbp-98h]
  __int64 v116; // [rsp+58h] [rbp-98h]
  __int64 *v117; // [rsp+58h] [rbp-98h]
  __int64 *v118; // [rsp+58h] [rbp-98h]
  __int64 *v119; // [rsp+58h] [rbp-98h]
  unsigned __int64 v120; // [rsp+58h] [rbp-98h]
  __int64 v121; // [rsp+58h] [rbp-98h]
  unsigned int v122; // [rsp+60h] [rbp-90h]
  __int64 v123; // [rsp+60h] [rbp-90h]
  __int64 v124; // [rsp+60h] [rbp-90h]
  __int64 v125; // [rsp+60h] [rbp-90h]
  _QWORD *v126; // [rsp+60h] [rbp-90h]
  __int64 v127; // [rsp+60h] [rbp-90h]
  unsigned int v128; // [rsp+68h] [rbp-88h]
  _DWORD *v129; // [rsp+68h] [rbp-88h]
  unsigned int v130; // [rsp+68h] [rbp-88h]
  __int64 v131; // [rsp+78h] [rbp-78h] BYREF
  __int64 v132; // [rsp+80h] [rbp-70h] BYREF
  _DWORD *v133; // [rsp+88h] [rbp-68h]
  __int64 v134; // [rsp+90h] [rbp-60h] BYREF
  _DWORD *v135; // [rsp+98h] [rbp-58h]
  __int64 v136[10]; // [rsp+A0h] [rbp-50h] BYREF

  v4 = a1;
  v106 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v81 = *(_QWORD **)(a1 + 160);
    if ( v81 )
      v82 = *((_DWORD *)v81 - 1);
    else
      v82 = 0;
    if ( v106 )
    {
      v83 = 0;
      while ( 1 )
      {
        if ( v81 )
        {
          v89 = *((_DWORD *)v81 - 1);
          if ( v89 == *((_DWORD *)v81 - 2) )
          {
            v90 = (3 * v89 + 1) >> 1;
            v91 = 8 * v90 + 8;
            v130 = v90;
            if ( 8 * v89 + 8 >= (unsigned int)v91 || v89 >= v90 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_6FFCA0(v136, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v136);
              sub_233E40((__int64)v136);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v92 = (unsigned int *)sub_186B300(v81 - 1, v91);
            v81 = v92 + 2;
            v93 = v92[1];
            *v92 = v130;
            *(_QWORD *)(a1 + 160) = v92 + 2;
            LODWORD(v92) = v93;
            v86 = &v81[v93];
            v85 = (_DWORD)v92 + 1;
          }
          else
          {
            v84 = v89;
            v85 = v89 + 1;
            v86 = &v81[v84];
          }
        }
        else
        {
          v95 = (_QWORD *)sub_186B270(0x18u);
          v85 = 1;
          *v95 = 2;
          v81 = v95 + 1;
          *(_QWORD *)(a1 + 160) = v81;
          v86 = v81;
        }
        *v86 = 0;
        *((_DWORD *)v81 - 1) = v85;
        v87 = *(_QWORD *)(a1 + 528);
        if ( !v87 || (v88 = *(unsigned int *)(v87 - 4), (_DWORD)v88 == *(_DWORD *)(v87 - 8)) )
        {
          ++v83;
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v94 = *(_QWORD *)(a1 + 528);
          *(_DWORD *)(v94 + 4LL * (unsigned int)(*(_DWORD *)(v94 - 4))++) = v82;
          if ( v83 == v106 )
          {
LABEL_108:
            v4 = a1;
            break;
          }
        }
        else
        {
          ++v83;
          *(_DWORD *)(v87 + 4 * v88) = v82;
          ++*(_DWORD *)(v87 - 4);
          if ( v83 == v106 )
            goto LABEL_108;
        }
        v81 = *(_QWORD **)(a1 + 160);
      }
    }
    *(_DWORD *)(v4 + 128) += v106;
  }
  v5 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
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
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_7071E0(v4, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v23 = *(unsigned int *)(a2 + 20);
  v108 = (__int64 *)(*(_QWORD *)(v4 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v122 = *(_DWORD *)(a2 + 76);
  v24 = *(_QWORD *)(v4 + 8);
  v25 = 16 * v23;
  v103 = *v108;
  v102 = v24;
  v113 = *(_DWORD *)(a2 + 72);
  v132 = v24;
  if ( !v113 )
  {
    v134 = v24;
    v32 = nullptr;
    v101 = v24;
    if ( !v122 )
    {
      v133 = nullptr;
      sub_39BEE0(&v132, 0);
      v107 = 0;
      v32 = nullptr;
      v129 = nullptr;
      goto LABEL_76;
    }
    goto LABEL_43;
  }
  v26 = a2 + v25;
  v27 = *(_QWORD *)(v26 + 80);
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v28 = (_QWORD *)sub_186B270(0x18u);
  v29 = v28 + 1;
  *v28 = 2;
  v30 = 1;
  v104 = v113;
  v31 = v113 + 2 * v23;
  v32 = v29;
  v33 = a2 + 8 * v31;
  while ( 1 )
  {
    v26 += 8;
    *v29 = v27;
    *(v32 - 1) = v30;
    if ( v33 == v26 )
      break;
    v27 = *(_QWORD *)(v26 + 80);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v34 = *(v32 - 1);
    if ( v34 == *(v32 - 2) )
    {
      v36 = (3 * v34 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v34 + 8 >= (unsigned int)v37 || v34 >= v36 )
      {
        v99 = (char **)__cxa_allocate_exception(0x28u);
        sub_6FFCA0(v136, "Overflow encountered when expanding vector");
        *v99 = (char *)off_1C63128;
        sub_2333C0(v99 + 1, v136);
        sub_233E40((__int64)v136);
        __cxa_throw(v99, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = v33;
      v128 = (3 * v34 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300(v32 - 2, v37);
      v39 = v38[1];
      v32 = v38 + 2;
      v33 = v115;
      *v38 = v128;
      LODWORD(v38) = v39;
      v29 = &v32[2 * v39];
      v30 = (_DWORD)v38 + 1;
    }
    else
    {
      v35 = v34;
      v30 = v34 + 1;
      v29 = &v32[2 * v35];
    }
  }
  v40 = *(_QWORD *)(v4 + 8);
  v101 = v40;
  v25 = 16LL * *(unsigned int *)(a2 + 20);
  v134 = v40;
  if ( v122 )
  {
LABEL_43:
    v41 = a2 + v25;
    v42 = *(_QWORD *)(v41 + 80);
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    v43 = (_QWORD *)sub_186B270(0x18u);
    v44 = v43 + 1;
    *v43 = 2;
    v45 = 0;
    v46 = 1;
    v129 = v44;
    while ( 1 )
    {
      *v44 = v42;
      ++v45;
      *(v129 - 1) = v46;
      if ( (unsigned int)v45 >= v122 )
        break;
      v42 = *(_QWORD *)(v41 + 8 * v45 + 80);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v47 = *(v129 - 1);
      if ( v47 == *(v129 - 2) )
      {
        v49 = (3 * v47 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * v47 + 8 >= (unsigned int)v50 || v47 >= v49 )
        {
          v98 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v136, "Overflow encountered when expanding vector");
          *v98 = (char *)off_1C63128;
          sub_2333C0(v98 + 1, v136);
          sub_233E40((__int64)v136);
          __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v112 = (3 * v47 + 1) >> 1;
        v116 = v45;
        v51 = (unsigned int *)sub_186B300(v129 - 2, v50);
        v52 = v51 + 2;
        v45 = v116;
        v129 = v51 + 2;
        *v51 = v112;
        LODWORD(v51) = v51[1];
        v44 = &v52[2 * (unsigned int)v51];
        v46 = (_DWORD)v51 + 1;
      }
      else
      {
        v48 = v47;
        v46 = v47 + 1;
        v44 = &v129[2 * v48];
      }
    }
    v53 = v108 + 1;
    v104 = v113;
    if ( !v113 )
    {
      v133 = v32;
      sub_39BEE0(&v132, 0);
      v107 = 0;
      v61 = v108 + 1;
      v104 = 0;
      goto LABEL_67;
    }
    v54 = *(_QWORD *)(v4 + 8);
    goto LABEL_56;
  }
  v54 = v40;
  v129 = nullptr;
  v53 = v108 + 1;
LABEL_56:
  v55 = 0;
  v107 = 0;
  while ( 1 )
  {
    v117 = v53;
    v56 = sub_15D3190(v54, v53[v55]);
    v53 = v117;
    if ( v56 )
      break;
    if ( (unsigned int)++v55 >= v113 )
      goto LABEL_66;
LABEL_58:
    v54 = *(_QWORD *)(v4 + 8);
  }
  v57 = v117[v55];
  v58 = v107 + 1;
  v59 = (__int64 *)&v32[2 * v107];
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v60 = *v59;
  if ( *v59 )
  {
    v14 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v14 )
    {
      v121 = v57;
      v100 = v53;
      sub_15D7BC0(v102, v60);
      v53 = v100;
      v59 = (__int64 *)&v32[2 * v107];
      v58 = v107 + 1;
      v57 = v121;
    }
  }
  *v59 = v57;
  ++v55;
  v107 = v58;
  if ( (unsigned int)v55 < v113 )
    goto LABEL_58;
LABEL_66:
  v133 = v32;
  v118 = v53;
  sub_39BEE0(&v132, v107);
  v61 = v118;
  if ( v122 )
  {
LABEL_67:
    v62 = v122;
    v122 = 0;
    v63 = &v61[v104];
    v119 = &v61[v104 + v62];
    do
    {
      while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(v4 + 8), *v63) )
      {
        if ( ++v63 == v119 )
          goto LABEL_76;
      }
      v64 = *v63;
      v65 = v122 + 1;
      v66 = (__int64 *)&v129[2 * v122];
      if ( *v63 )
        ++*(_DWORD *)(v64 + 8);
      v67 = *v66;
      if ( *v66 )
      {
        v14 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v14 )
        {
          v105 = v122 + 1;
          v110 = (__int64 *)&v129[2 * v122];
          v127 = v64;
          sub_15D7BC0(v101, v67);
          v65 = v105;
          v66 = v110;
          v64 = v127;
        }
      }
      ++v63;
      *v66 = v64;
      v122 = v65;
    }
    while ( v63 != v119 );
  }
LABEL_76:
  v135 = v129;
  sub_39BEE0(&v134, v122);
  v109 = *(_QWORD *)(v4 + 8);
  v68 = sub_15DBA30(v109, a2, v107, (_DWORD)v32, v122, (_DWORD)v129, v103);
  v69 = *(_QWORD *)(v4 + 496);
  v70 = *(_QWORD *)(v4 + 504);
  if ( v68 )
  {
    ++*(_DWORD *)(v68 + 8);
    sub_6FFC60(v69, v70);
    *(_QWORD *)(v4 + 496) = 0;
    if ( a2 != v68 )
      goto LABEL_78;
    goto LABEL_85;
  }
  sub_6FFC60(v69, v70);
  *(_QWORD *)(v4 + 496) = 0;
LABEL_78:
  v71 = *(_QWORD *)(v4 + 504);
  v72 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v72 )
  {
    ++*(_DWORD *)(v72 + 8);
    v123 = v72;
    sub_6FFC60(0, v71);
    v73 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = v123;
    v74 = sub_15DE700(v73);
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    v124 = v74;
    sub_6FFC60(*(_QWORD *)(v4 + 496), *(_QWORD *)(v4 + 504));
    v75 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = v124;
    v76 = sub_15DE750(v75);
  }
  else
  {
    sub_6FFC60(0, v71);
    v96 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = 0;
    v76 = sub_15DE370(v96);
  }
  if ( v76 )
    ++*(_DWORD *)(v76 + 8);
  v125 = v76;
  sub_6FFC60(*(_QWORD *)(v4 + 496), *(_QWORD *)(v4 + 504));
  *(_QWORD *)(v4 + 496) = v125;
  if ( v68 )
LABEL_85:
    ++*(_DWORD *)(v68 + 8);
  sub_6FFC80(*(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 488));
  v12 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)(v4 + 480) = v68;
  if ( v12 )
  {
    v77 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    v114 = *(_DWORD *)(a3 + 12);
    v78 = (_QWORD *)(v12 + 8LL * v114);
    if ( (unsigned __int64)v78 >= v77 )
      goto LABEL_11;
    do
    {
      v79 = *v78;
      if ( *v78 )
      {
        v80 = *(_QWORD *)(v4 + 80);
        v14 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v14 )
        {
          v120 = v77;
          v126 = v78;
          sub_15D7BC0(v80, v79);
          v78 = v126;
          v77 = v120;
        }
      }
      ++v78;
    }
    while ( (unsigned __int64)v78 < v77 );
    v12 = *(_QWORD *)(v4 + 88);
    if ( v12 )
LABEL_11:
      *(_DWORD *)(v12 - 4) = v114;
  }
  v13 = *(_QWORD *)(v4 + 496);
  v131 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_6FFD30((_QWORD *)(v4 + 88), &v131);
  if ( v68 )
  {
    v14 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v109, v68);
  }
  sub_39BEE0((__int64 *)(v4 + 48), *(_DWORD *)(a3 + 12));
  v15 = *(_QWORD *)(v4 + 480);
  v136[0] = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  sub_6FFDF0((_QWORD *)(v4 + 56), v136);
  v16 = *(_QWORD *)(v4 + 160);
  if ( v16 )
    *(_DWORD *)(v16 - 4) -= v106;
  v17 = *(_QWORD *)(v4 + 528);
  if ( v17 )
    *(_DWORD *)(v17 - 4) -= v106;
  sub_15844D0(v4);
  v18 = *(_QWORD *)(v4 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(v4, a2, *(_QWORD *)(v4 + 480), *(_QWORD *)(v4 + 496));
    v18 = *(_QWORD *)(v4 + 480);
  }
  sub_6FFC80(v18, *(_QWORD *)(v4 + 488));
  v19 = *(_QWORD *)(v4 + 504);
  v20 = *(_QWORD *)(v4 + 496);
  *(_QWORD *)(v4 + 480) = 0;
  sub_6FFC60(v20, v19);
  *(_QWORD *)(v4 + 496) = 0;
  v21 = *(_QWORD *)(v4 + 40);
  v22 = *(_DWORD *)(v21 - 4);
  *(_DWORD *)(v21 - 4) = v22 - 1;
  if ( *(_QWORD *)(v4 + 480) != a2 && v22 != 1 )
    *(_BYTE *)(v21 + 16LL * (unsigned int)(v22 - 2) + 8) |= 2u;
  v135 = v129;
  sub_2334C0(&v134);
  v133 = v32;
  return sub_2334C0(&v132);
}

