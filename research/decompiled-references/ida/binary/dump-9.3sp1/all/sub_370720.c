__int64 __fastcall sub_370720(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rsi
  char v7; // al
  char v8; // r12
  unsigned int v9; // r12d
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  char v16; // r13
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 *v21; // rdi
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rsi
  int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r9
  int *v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r10
  size_t v34; // rax
  __int64 v35; // rax
  int v36; // eax
  int v37; // r14d
  __int64 v38; // rdi
  int v39; // r12d
  __int64 v40; // rcx
  __int64 v41; // r10
  __int64 v42; // r8
  __int64 v43; // r13
  int v44; // r14d
  __int64 v45; // rdx
  int v46; // r12d
  _DWORD *v47; // rdx
  __int64 v48; // rsi
  bool v49; // al
  __int64 v50; // rdx
  _DWORD *v51; // rax
  __int64 v52; // rsi
  int v53; // eax
  char *v54; // rdx
  char *v55; // rax
  char *i; // rdi
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r10
  unsigned __int64 v60; // rax
  __int64 v61; // r9
  bool v62; // cf
  __int64 v63; // r8
  __int64 v64; // rcx
  _DWORD *v65; // r13
  _QWORD *v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rax
  _DWORD *v71; // rdx
  int v72; // eax
  int v73; // r8d
  int v74; // r9d
  int v75; // ecx
  int v76; // edx
  __int64 v77; // rax
  _DWORD *v78; // rdi
  bool v79; // di
  int v80; // esi
  __int64 v81; // r10
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  unsigned __int64 v84; // rsi
  char *v85; // rdi
  char *v86; // rax
  __int64 v87; // rax
  int v88; // [rsp+0h] [rbp-238h]
  __int64 v89; // [rsp+0h] [rbp-238h]
  __int64 v90; // [rsp+0h] [rbp-238h]
  __int64 v91; // [rsp+10h] [rbp-228h]
  char *v92; // [rsp+10h] [rbp-228h]
  int v93; // [rsp+10h] [rbp-228h]
  __int64 v94; // [rsp+10h] [rbp-228h]
  __int64 v95; // [rsp+10h] [rbp-228h]
  __int64 v96; // [rsp+10h] [rbp-228h]
  __int64 v97; // [rsp+10h] [rbp-228h]
  __int64 v98; // [rsp+10h] [rbp-228h]
  char v99; // [rsp+18h] [rbp-220h]
  __int64 v100; // [rsp+18h] [rbp-220h]
  __int64 v101; // [rsp+18h] [rbp-220h]
  __int64 v102; // [rsp+18h] [rbp-220h]
  __int64 v103; // [rsp+18h] [rbp-220h]
  __int64 v104; // [rsp+18h] [rbp-220h]
  __int64 v105; // [rsp+20h] [rbp-218h]
  __int64 v106; // [rsp+20h] [rbp-218h]
  __int64 v107; // [rsp+20h] [rbp-218h]
  __int64 v108; // [rsp+20h] [rbp-218h]
  __int64 v109; // [rsp+20h] [rbp-218h]
  bool v110; // [rsp+28h] [rbp-210h]
  __int64 v111; // [rsp+28h] [rbp-210h]
  __int64 v112; // [rsp+30h] [rbp-208h]
  _QWORD *v113; // [rsp+30h] [rbp-208h]
  __int64 v114; // [rsp+30h] [rbp-208h]
  __int64 v115; // [rsp+48h] [rbp-1F0h]
  char v116; // [rsp+53h] [rbp-1E5h]
  int v117; // [rsp+54h] [rbp-1E4h]
  _QWORD *v118; // [rsp+58h] [rbp-1E0h]
  int v119; // [rsp+6Ch] [rbp-1CCh] BYREF
  int *v120; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v121; // [rsp+78h] [rbp-1C0h]
  __int64 v122; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v123; // [rsp+98h] [rbp-1A0h]
  __int64 v124; // [rsp+B0h] [rbp-188h]
  __int128 v125; // [rsp+B8h] [rbp-180h]
  __int64 v126; // [rsp+C8h] [rbp-170h]
  __int64 v127; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v128; // [rsp+D8h] [rbp-160h]
  __int64 v129; // [rsp+E0h] [rbp-158h]
  __int64 v130; // [rsp+F0h] [rbp-148h]
  __int64 v131; // [rsp+F8h] [rbp-140h]
  __int64 v132; // [rsp+128h] [rbp-110h]
  __int64 v133; // [rsp+130h] [rbp-108h]
  __int64 v134; // [rsp+140h] [rbp-F8h]
  __int64 v135; // [rsp+148h] [rbp-F0h]
  __int64 v136[4]; // [rsp+158h] [rbp-E0h] BYREF
  _QWORD v137[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v138; // [rsp+188h] [rbp-B0h]
  __int128 v139; // [rsp+190h] [rbp-A8h]
  _DWORD *v140; // [rsp+1A0h] [rbp-98h]
  __int128 v141; // [rsp+1A8h] [rbp-90h]
  __int64 v142; // [rsp+1B8h] [rbp-80h]
  __int128 v143; // [rsp+1C0h] [rbp-78h]
  _QWORD *v144; // [rsp+1D0h] [rbp-68h]
  __int64 v145; // [rsp+1D8h] [rbp-60h]
  __int64 v146; // [rsp+1E0h] [rbp-58h]
  _DWORD *v147; // [rsp+1E8h] [rbp-50h]
  char v148; // [rsp+1F0h] [rbp-48h]
  unsigned __int64 v149; // [rsp+1F8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 1496);
  v149 = __readfsqword(0x28u);
  sub_D10B0((__int64)&v127, v5, 0x10u);
  memset(v136, 0, sizeof(v136));
  v137[0] = 0;
  v137[1] = 0;
  v138 = nullptr;
  v140 = nullptr;
  v142 = 0;
  v144 = nullptr;
  v145 = 0;
  v146 = 0;
  v139 = 0;
  v141 = 0;
  v143 = 0;
  v147 = (_DWORD *)sub_369E90((__int64)&v127, a1, a2);
  v7 = sub_D81C0((__int64)v147, v136, a1);
  v148 = v7;
  if ( a2 != v147[18] )
    goto LABEL_6;
  v8 = a3 & 2;
  if ( !v7 || (v88 = HIDWORD(v146)) != 0 )
  {
    if ( *(_BYTE *)(a1 + 320) != 1 && (a3 & 2) == 0 )
      sub_D4FA0(v147, a1, (_QWORD *)(a1 + 456), 0);
    goto LABEL_6;
  }
  v11 = *(_QWORD *)(a1 + 464) - 1;
  v91 = *(_QWORD *)(a1 + 464);
  v119 = v11;
  if ( v11 >= 0 )
  {
    do
    {
      v12 = sub_13D280((_QWORD *)a1, v11);
      if ( *(_DWORD *)v12 == 2 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        v14 = *(_DWORD **)v13;
        v15 = *(_QWORD *)v13 + 24LL * *(_QWORD *)(v13 + 8);
        if ( v14 == (_DWORD *)v15 )
          break;
        while ( *v14 != 1 )
        {
          v14 += 6;
          if ( (_DWORD *)v15 == v14 )
            goto LABEL_25;
        }
      }
      else if ( *(_DWORD *)v12 != 1 )
      {
        break;
      }
      v119 = --v11;
    }
    while ( v11 != -1 );
  }
LABEL_25:
  v16 = (a3 & 1) == 0;
  if ( !sub_36F7C0(a1, &v127, &v119, 1, v16) )
    goto LABEL_6;
  if ( *v147 == 5 )
  {
    v73 = v141;
    v74 = v139;
    if ( (int)v139 > 0 && (int)v141 > 0 )
    {
      v75 = 0;
      v76 = 1;
      v77 = 0;
      do
      {
        v80 = v140[v77];
        if ( v80 != -1 )
        {
          if ( (v77 & 1) == 0 && v73 > v76 && v80 == v140[v76] )
          {
            if ( v75 % 2 == 1 )
            {
              v81 = v75++;
              v138[v81] = v80;
            }
            if ( v74 == v75 )
              break;
          }
          v78 = &v138[v75];
          if ( *v78 != -1 && v80 != *v78 )
          {
            if ( !under_debugger )
              sub_383060(52423);
            goto LABEL_176;
          }
          *v78 = v80;
          ++v75;
        }
        v79 = v76 < v73;
        ++v77;
        ++v76;
      }
      while ( v74 > v75 && v79 );
    }
  }
  v99 = sub_36A080((_QWORD *)a1, &v127);
  v110 = sub_36F7C0(a1, &v127, &v119, 0, v16);
  if ( !v110 )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(a1 + 464);
  if ( (_DWORD)v17 != (_DWORD)v91 )
  {
    if ( !(unsigned __int8)sub_64880(v136) && !(unsigned __int8)sub_D81C0((__int64)v147, v136, a1) )
    {
      if ( !under_debugger )
        sub_383060(52097);
      goto LABEL_176;
    }
    v17 = *(_QWORD *)(a1 + 464);
  }
  v18 = 0;
  v19 = 0;
  v120 = nullptr;
  v122 = 0;
  v121 = 0;
  v123 = 0;
  if ( !v17 )
    goto LABEL_86;
  do
  {
    v20 = sub_13D280((_QWORD *)a1, v18);
    if ( *(_DWORD *)v20 == 2 )
    {
      v50 = *(_QWORD *)(v20 + 8);
      v51 = *(_DWORD **)v50;
      v52 = *(_QWORD *)v50 + 24LL * *(_QWORD *)(v50 + 8);
      if ( *(_QWORD *)v50 == v52 )
        goto LABEL_47;
      while ( (unsigned int)(*v51 - 3) > 1 )
      {
        v51 += 6;
        if ( (_DWORD *)v52 == v51 )
          goto LABEL_47;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)v20 - 3) > 1 )
    {
      goto LABEL_47;
    }
    v21 = (__int64 *)&v120;
    if ( ((*v147 - 3) & 0xFFFFFFFD) != 0 )
    {
      v22 = v138;
      v23 = &v138[v139];
      if ( v138 != v23 )
      {
        while ( v18 != *v22 )
        {
          if ( v23 == ++v22 )
          {
            v21 = (__int64 *)&v120;
            goto LABEL_44;
          }
        }
        if ( v23 != v22 )
        {
          v24 = v140;
          v25 = &v140[v141];
          if ( v140 != v25 )
          {
            while ( v18 != *v24 )
            {
              if ( v25 == ++v24 )
                goto LABEL_117;
            }
            if ( v24 != v25 )
            {
              v21 = &v122;
              goto LABEL_44;
            }
          }
        }
      }
LABEL_117:
      v21 = (__int64 *)&v120;
    }
LABEL_44:
    v26 = *v21;
    v27 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 4 * v19);
    v28 = v21[1];
    if ( v21[2] < (unsigned __int64)(v28 + 1) )
    {
      v26 = qvector_reserve((__int64)v21, v26, v28 + 1, 4);
      *v21 = v26;
      v28 = v21[1];
    }
    *(_DWORD *)(v26 + 4 * v28) = v27;
    ++v21[1];
LABEL_47:
    v19 = ++v18;
  }
  while ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 464) );
  v29 = 4 * v123;
  v30 = (4 * (__int64)v123) >> 2;
  if ( !v30 )
  {
LABEL_86:
    v36 = sub_D4530((__int64)v147, (_QWORD *)(a1 + 432), (__int64 *)&v120);
    goto LABEL_54;
  }
  v31 = v120;
  v32 = v122;
  v33 = 4 * v121;
  v34 = 0;
  if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + v30) )
  {
    v114 = (4 * (__int64)v123) >> 2;
    v108 = 4 * v121;
    v96 = v122;
    v120 = (int *)qvector_reserve((__int64)&v120, (__int64)v120, v121 + v30, 4);
    v31 = v120;
    v33 = v108;
    v30 = v114;
    v32 = v96;
    v34 = 4 * v121 - v108;
  }
  v112 = v30;
  v105 = v32;
  v92 = (char *)v31 + v33;
  memmove(&v92[v29], v92, v34);
  v35 = 0;
  if ( v29 )
  {
    do
    {
      *(_DWORD *)&v92[v35] = *(_DWORD *)(v105 + v35);
      v35 += 4;
    }
    while ( v29 != v35 );
  }
  *(_QWORD *)&v121 = v112 + v121;
  v36 = sub_D4530((__int64)v147, (_QWORD *)(a1 + 432), (__int64 *)&v120);
LABEL_54:
  v37 = v36;
  v116 = (v8 & 2) != 0;
  if ( v36 > 0 )
  {
    sub_36F520((_QWORD *)a1, &v120);
    v99 = *(_BYTE *)(a1 + 320);
    if ( v99 )
      goto LABEL_134;
LABEL_140:
    v99 = v110;
    goto LABEL_141;
  }
  if ( v36 )
  {
    v99 = *(_BYTE *)(a1 + 320);
    if ( !v99 )
      goto LABEL_141;
    goto LABEL_138;
  }
  if ( v99 || (_QWORD)v123 )
  {
    sub_36F520((_QWORD *)a1, &v120);
    v99 = *(_BYTE *)(a1 + 320);
    if ( v99 )
      goto LABEL_59;
    goto LABEL_140;
  }
  if ( *(_BYTE *)(a1 + 320) )
    goto LABEL_59;
LABEL_141:
  if ( (unsigned __int8)sub_D4FA0(v147, a1, &v120, v116) != 1 || v37 < 0 )
    goto LABEL_138;
  if ( !v37 )
    goto LABEL_59;
LABEL_134:
  if ( ((*(_BYTE *)(a1 + 4) & 0x30) != 0 || a2 == 128) && *(char *)(sub_13D280((_QWORD *)a1, 0) + 25) >= 0 )
  {
    *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    if ( a2 == 128 )
    {
LABEL_138:
      v9 = 0;
      goto LABEL_113;
    }
  }
LABEL_59:
  if ( !sub_36F620(*(_QWORD *)(a1 + 1504), a2) || !v145 )
    goto LABEL_111;
  if ( v99 && !(unsigned __int8)sub_D81C0((__int64)v147, v136, a1) )
  {
    if ( !under_debugger )
      sub_383060(52212);
    goto LABEL_176;
  }
  v38 = *(_QWORD *)(a1 + 1504);
  v39 = *(_DWORD *)(v38 + 80);
  if ( sub_36F620(v38, v147[18]) )
  {
    v124 = 32;
    v126 = 0;
    v125 = 0;
    get_stkarg_area_info();
    v40 = *(_QWORD *)(a1 + 144) + v125 - *(int *)(a1 + 120);
  }
  else
  {
    v40 = -1;
  }
  v118 = v144;
  if ( !v144 )
    goto LABEL_104;
  if ( !v145 )
    goto LABEL_104;
  v113 = (_QWORD *)v144[1];
  if ( v144 == v113 )
    goto LABEL_104;
  v41 = v39 - 1;
  v42 = -v39;
  while ( 2 )
  {
    v43 = v113[3];
    v44 = *((_DWORD *)v113 + 8);
    v115 = *(_QWORD *)(a1 + 432) + 104LL * v44;
    v117 = *(_DWORD *)(v115 + 88);
    v45 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v88);
    if ( (_DWORD)v45 == v44 )
      goto LABEL_99;
    v46 = v88 + 1;
    while ( 2 )
    {
      v88 = v46 - 1;
      if ( v40 > v43 )
      {
        if ( !under_debugger )
          sub_383060(52021);
        goto LABEL_176;
      }
      if ( *v147 == 2 )
      {
        v111 = v42;
        v106 = v41;
        v100 = v40;
        v93 = v45;
        v49 = sub_64930(v137, v88);
        v45 = v93;
        v40 = v100;
        v41 = v106;
        v42 = v111;
        if ( v49 )
        {
          v88 = v46;
          v45 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v46);
LABEL_73:
          ++v46;
          if ( v44 == (_DWORD)v45 )
            goto LABEL_99;
          continue;
        }
      }
      break;
    }
    v47 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v45);
    v48 = (int)v47[22];
    if ( (v42 & (v40 + v41 + v48)) <= v43 )
    {
      v88 = v46;
      v45 = *(int *)(*(_QWORD *)(a1 + 456) + 4LL * v46);
      v40 = v42 & (v40 + v41 + v48);
      goto LABEL_73;
    }
    if ( *v47 == 1 )
    {
      if ( !under_debugger )
        sub_383060(52022);
      goto LABEL_176;
    }
    v53 = *(_DWORD *)(v115 + 24);
    if ( (v53 & 0x80000) == 0 || (_DWORD)v48 != *(_DWORD *)(v115 + 88) )
    {
      if ( (v42 & (v43 ^ v40)) != 0 )
      {
        if ( !under_debugger )
          sub_383060(52023);
      }
      else
      {
        v54 = *(char **)(a1 + 456);
        v55 = &v54[4 * *(_QWORD *)(a1 + 464)];
        for ( i = v54; v55 != i; i += 4 )
        {
          if ( *(_DWORD *)i == v44 )
            break;
        }
        if ( v88 < (i - v54) >> 2 )
        {
          v101 = v88;
          v94 = v42;
          v89 = v41;
          memmove(i, i + 4, v55 - i - 4);
          v57 = *(_QWORD *)(a1 + 464);
          v58 = *(_QWORD *)(a1 + 456);
          v59 = v89;
          v60 = v57 - 1;
          v61 = 4 * v101;
          v62 = *(_QWORD *)(a1 + 472) < v57;
          v63 = v94;
          *(_QWORD *)(a1 + 464) = v57 - 1;
          if ( v62 )
          {
            v104 = v94;
            v98 = v89;
            v90 = v61;
            v87 = qvector_reserve(a1 + 456, v58, v57, 4);
            *(_QWORD *)(a1 + 456) = v87;
            v58 = v87;
            v63 = v104;
            v60 = *(_QWORD *)(a1 + 464);
            v59 = v98;
            v61 = v90;
          }
          v64 = v43 + v59;
          v65 = (_DWORD *)(v58 + v61);
          v107 = v59;
          v102 = v63;
          v95 = v63 & (v117 + v64);
          memmove((void *)(v58 + v61 + 4), (const void *)(v58 + v61), 4 * v60 - v61);
          *v65 = v44;
          v40 = v95;
          v42 = v102;
          v41 = v107;
          v88 = v46;
          ++*(_QWORD *)(a1 + 464);
          goto LABEL_99;
        }
        if ( !under_debugger )
          sub_383060(52024);
      }
LABEL_176:
      BUG();
    }
    BYTE1(v53) &= 0x7Eu;
    *(_DWORD *)(v115 + 24) = v53 | 0x100000;
    v85 = *(char **)(a1 + 456);
    v86 = &v85[4 * *(_QWORD *)(a1 + 464)];
    if ( v85 != v86 )
    {
      while ( v44 != *(_DWORD *)v85 )
      {
        v85 += 4;
        if ( v86 == v85 )
          goto LABEL_99;
      }
      if ( v85 != v86 )
      {
        v109 = v42;
        v103 = v41;
        v97 = v40;
        memmove(v85, v85 + 4, v86 - v85 - 4);
        v40 = v97;
        v41 = v103;
        --*(_QWORD *)(a1 + 464);
        v42 = v109;
      }
    }
LABEL_99:
    if ( (*v113 & 2) == 0 )
    {
      v66 = (_QWORD *)v113[2];
      if ( (*(_BYTE *)v66 & 2) != 0 )
      {
        v67 = (_QWORD *)(*v113 & 0xFFFFFFFFFFFFFFFCLL);
        v82 = *v67;
        if ( (*v67 & 2) == 0 )
        {
          v83 = v113;
          while ( v83 == (_QWORD *)v67[2] )
          {
            v83 = v67;
            v84 = v82 & 0xFFFFFFFFFFFFFFFCLL;
            v82 = *(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v82 & 2) != 0 )
            {
              v113 = (_QWORD *)v84;
              goto LABEL_103;
            }
            v67 = (_QWORD *)v84;
          }
        }
      }
      else
      {
        do
        {
          v67 = v66;
          v66 = (_QWORD *)v66[1];
        }
        while ( (*(_BYTE *)v66 & 2) == 0 );
      }
      v113 = v67;
    }
LABEL_103:
    if ( v118 != v113 )
      continue;
    break;
  }
LABEL_104:
  if ( (a2 & 0xFFFFFFF0) != 0x40 && (a2 & 0xFFFFFFF0) != 0xD0 )
  {
    LODWORD(v68) = *(_DWORD *)(a1 + 464) - 1;
    if ( (int)v68 >= 0 )
    {
      v68 = (unsigned int)v68;
      do
      {
        v71 = (_DWORD *)sub_13D280((_QWORD *)a1, v68);
        v72 = v71[6];
        if ( (v72 & 0x80000) == 0 )
          break;
        if ( *v71 == 1 )
          break;
        BYTE1(v72) &= 0x7Eu;
        v71[6] = v72 | 0x100000;
        v69 = *(_QWORD *)(a1 + 456) + 4 * v68;
        v70 = *(_QWORD *)(a1 + 464) - v68--;
        memmove((void *)v69, (const void *)(v69 + 4), 4 * v70 - 4);
        --*(_QWORD *)(a1 + 464);
      }
      while ( (int)v68 >= 0 );
    }
  }
LABEL_111:
  v9 = *(unsigned __int8 *)(a1 + 320);
  if ( !(_BYTE)v9 )
    v9 = sub_D4FA0(v147, a1, &v120, v116);
LABEL_113:
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree(v122);
  }
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree((__int64)v120);
  }
LABEL_7:
  sub_1990E0(v136);
  if ( v134 )
  {
    v135 = 0;
    qfree(v134);
  }
  if ( v132 )
  {
    v133 = 0;
    qfree(v132);
  }
  if ( v130 )
  {
    v131 = 0;
    qfree(v130);
  }
  if ( v128 )
  {
    v129 = 0;
    qfree(v128);
  }
  return v9;
}
