__int64 __fastcall sub_D34780(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int16 v7; // ax
  __int64 v8; // rax
  int v9; // edi
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r13
  int v19; // edx
  __int64 *v20; // r12
  __int64 v21; // rax
  int v22; // esi
  __int64 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 *v26; // r13
  unsigned int v27; // r10d
  __int64 v28; // r9
  char *v29; // r15
  int v30; // edi
  __int64 v31; // rax
  __int64 *v32; // r10
  __int64 *v33; // rax
  __int64 *v34; // r9
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 *v40; // rdx
  _QWORD *v41; // rdi
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  int v47; // r13d
  __int64 v48; // r13
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  unsigned int v56; // ebx
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rdx
  unsigned __int8 v60; // dl
  __int64 v61; // rax
  int v62; // r12d
  int v63; // r14d
  _QWORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r12d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // r13
  unsigned int v73; // r12d
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rdx
  unsigned __int8 v77; // dl
  __int64 v78; // rax
  unsigned int v79; // r15d
  size_t v80; // rsi
  unsigned int *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // r13
  __int64 v91; // rdi
  bool v92; // zf
  int v93; // eax
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // r12
  __int64 v101; // rax
  int v102; // edx
  _QWORD *v103; // rdx
  unsigned int v104; // eax
  __int64 v105; // rcx
  int v106; // eax
  _QWORD *v107; // rcx
  _QWORD *v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  __int64 *v112; // rcx
  __int64 v113; // rax
  int v114; // edx
  __int64 v115; // rax
  __int64 v116; // rbx
  _QWORD *v117; // rdx
  unsigned int v118; // eax
  __int64 v119; // rcx
  int v120; // eax
  __int64 *v121; // rcx
  __int64 *v122; // rax
  unsigned int v123; // ecx
  _QWORD *v124; // r12
  size_t v125; // r13
  unsigned int v126; // eax
  __int64 *v127; // r14
  int v128; // ecx
  __int64 v129; // rax
  _QWORD *v130; // rdi
  __int64 *v131; // rax
  __int64 *v132; // rsi
  __int64 v133; // rdx
  __int64 v134; // rax
  char *v135; // rax
  char *v136; // r11
  __int64 v137; // rdx
  __int64 *v138; // rsi
  __int64 *v139; // rdx
  int v140; // eax
  _QWORD *v141; // rax
  __int64 v142; // rax
  unsigned int v143; // ebx
  unsigned int v144; // ecx
  unsigned int *v145; // rax
  __int64 v146; // rcx
  unsigned int v147; // r12d
  unsigned int v148; // ecx
  unsigned int *v149; // rax
  __int64 v150; // rcx
  unsigned int v151; // r12d
  unsigned int v152; // ecx
  unsigned int *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r14
  _QWORD *v156; // rax
  unsigned int v157; // ecx
  void *v158; // rdi
  char *v159; // r8
  char *v160; // r15
  __int64 v161; // rdx
  _QWORD *v162; // rsi
  _QWORD *v163; // rdx
  _QWORD *v164; // rdx
  _QWORD *v165; // rdx
  _QWORD *v166; // rdx
  char **exception; // rbx
  unsigned int v168; // [rsp+8h] [rbp-2C0h]
  unsigned int v169; // [rsp+8h] [rbp-2C0h]
  unsigned int v170; // [rsp+8h] [rbp-2C0h]
  __int64 *v171; // [rsp+18h] [rbp-2B0h]
  unsigned int v172; // [rsp+18h] [rbp-2B0h]
  __int64 *v173; // [rsp+28h] [rbp-2A0h]
  __int64 v174; // [rsp+28h] [rbp-2A0h]
  unsigned int v175; // [rsp+38h] [rbp-290h]
  __int64 v176; // [rsp+60h] [rbp-268h] BYREF
  __int64 v177; // [rsp+68h] [rbp-260h]
  __int64 v178[12]; // [rsp+70h] [rbp-258h] BYREF
  void *ptr; // [rsp+D0h] [rbp-1F8h]
  unsigned int v180; // [rsp+D8h] [rbp-1F0h]
  int v181; // [rsp+DCh] [rbp-1ECh]
  int v182; // [rsp+E0h] [rbp-1E8h]
  __int64 v183; // [rsp+100h] [rbp-1C8h]
  int v184; // [rsp+108h] [rbp-1C0h]
  __int64 v185; // [rsp+110h] [rbp-1B8h]
  _QWORD v186[19]; // [rsp+118h] [rbp-1B0h] BYREF
  int v187; // [rsp+1B0h] [rbp-118h]
  _QWORD v188[18]; // [rsp+1B8h] [rbp-110h] BYREF
  int v189; // [rsp+248h] [rbp-80h]
  __int64 v190; // [rsp+250h] [rbp-78h]
  __int64 v191; // [rsp+258h] [rbp-70h]
  __int64 v192; // [rsp+260h] [rbp-68h]
  __int64 v193; // [rsp+268h] [rbp-60h]
  __int64 v194; // [rsp+270h] [rbp-58h]
  __int64 v195; // [rsp+278h] [rbp-50h]
  __int64 v196; // [rsp+280h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 144);
  if ( a2 == *(_QWORD *)(v5 + 32) )
  {
    v48 = *(_QWORD *)(*(_QWORD *)v5 + 864LL);
    if ( !*(_BYTE *)(v5 + 40) )
      v48 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
    if ( !v48 )
    {
LABEL_49:
      v49 = *(_QWORD **)(a1 + 56);
      if ( v49 )
      {
        v50 = *((_DWORD *)v49 - 1);
        if ( v50 == *((_DWORD *)v49 - 2) )
        {
          v67 = (3 * v50 + 1) >> 1;
          v68 = 8 * v67 + 8;
          if ( 8 * v50 + 8 >= (unsigned int)v68 || v50 >= v67 )
            goto LABEL_265;
          v69 = (unsigned int *)sub_186B300(v49 - 1, v68);
          v70 = v69[1];
          v49 = v69 + 2;
          *v69 = v67;
          *(_QWORD *)(a1 + 56) = v69 + 2;
          LODWORD(v69) = v70;
          v53 = &v49[v70];
          v52 = (_DWORD)v69 + 1;
        }
        else
        {
          v51 = v50;
          v52 = v50 + 1;
          v53 = &v49[v51];
        }
      }
      else
      {
        v85 = (_QWORD *)sub_186B270(0x18u);
        v49 = v85 + 1;
        *v85 = 2;
        v52 = 1;
        *(_QWORD *)(a1 + 56) = v49;
        v53 = v49;
      }
      *v53 = v48;
      *((_DWORD *)v49 - 1) = v52;
      if ( a2 != v48 )
      {
        v54 = *(_QWORD *)(a1 + 40);
        if ( v54 )
        {
          v55 = *(_DWORD *)(v54 - 4);
          if ( v55 )
            *(_BYTE *)(v54 + 16LL * (unsigned int)(v55 - 1) + 8) |= 2u;
        }
      }
      v41 = *(_QWORD **)(a1 + 88);
      if ( v41 )
      {
        v42 = *((_DWORD *)v41 - 1);
        if ( v42 == *((_DWORD *)v41 - 2) )
        {
          v56 = (3 * v42 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v42 + 8 < (unsigned int)v57 && v42 < v56 )
            goto LABEL_60;
          goto LABEL_265;
        }
        goto LABEL_39;
      }
      goto LABEL_105;
    }
LABEL_48:
    ++*(_DWORD *)(v48 + 8);
    goto LABEL_49;
  }
  if ( a2 == *(_QWORD *)(v5 + 48) )
  {
    v48 = *(_QWORD *)(v5 + 56);
    if ( v48 )
      goto LABEL_48;
  }
  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v36 = *(_QWORD **)(a1 + 56);
    if ( v36 )
    {
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v73 = (3 * v37 + 1) >> 1;
        v74 = 8 * v73 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v74 || v37 >= v73 )
          goto LABEL_265;
        v75 = (unsigned int *)sub_186B300(v36 - 1, v74);
        v76 = v75[1];
        v36 = v75 + 2;
        *v75 = v73;
        *(_QWORD *)(a1 + 56) = v75 + 2;
        LODWORD(v75) = v76;
        v40 = &v36[v76];
        v39 = (_DWORD)v75 + 1;
      }
      else
      {
        v38 = v37;
        v39 = v37 + 1;
        v40 = &v36[v38];
      }
    }
    else
    {
      v82 = (_QWORD *)sub_186B270(0x18u);
      v36 = v82 + 1;
      *v82 = 2;
      v39 = 1;
      *(_QWORD *)(a1 + 56) = v36;
      v40 = v36;
    }
    *v40 = a2;
    *((_DWORD *)v36 - 1) = v39;
    v41 = *(_QWORD **)(a1 + 88);
    if ( v41 )
    {
      v42 = *((_DWORD *)v41 - 1);
      if ( v42 == *((_DWORD *)v41 - 2) )
      {
        v56 = (3 * v42 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v42 + 8 < (unsigned int)v57 && v42 < v56 )
        {
LABEL_60:
          v58 = (unsigned int *)sub_186B300(v41 - 1, v57);
          v59 = v58[1];
          v41 = v58 + 2;
          *(_QWORD *)(a1 + 88) = v58 + 2;
          *v58 = v56;
          LODWORD(v58) = v59;
          v45 = &v41[v59];
          v44 = (_DWORD)v58 + 1;
          goto LABEL_40;
        }
LABEL_265:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v178, "Overflow encountered when expanding vector");
        goto LABEL_266;
      }
LABEL_39:
      v43 = v42;
      v44 = v42 + 1;
      v45 = &v41[v43];
LABEL_40:
      *v45 = 0;
      *((_DWORD *)v41 - 1) = v44;
      return 1;
    }
LABEL_105:
    v84 = (_QWORD *)sub_186B270(0x18u);
    v41 = v84 + 1;
    *v84 = 2;
    v44 = 1;
    *(_QWORD *)(a1 + 88) = v41;
    v45 = v41;
    goto LABEL_40;
  }
  v7 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v47 = 0;
    goto LABEL_43;
  }
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      if ( v7 != 1 )
      {
LABEL_46:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_80;
    }
    goto LABEL_73;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_73:
    v71 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v72 = v71;
    if ( v71 )
    {
      v108 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v71 + 8);
      if ( v108 )
      {
        v109 = *((_DWORD *)v108 - 1);
        if ( v109 == *((_DWORD *)v108 - 2) )
        {
          v151 = (3 * v109 + 1) >> 1;
          v152 = 8 * v151 + 8;
          if ( 8 * v109 + 8 >= v152 || v109 >= v151 )
            goto LABEL_265;
          v153 = (unsigned int *)sub_186B300(v108 - 1, v152);
          v154 = v153[1];
          v108 = v153 + 2;
          *v153 = v151;
          *(_QWORD *)(a1 + 56) = v153 + 2;
          LODWORD(v153) = v154;
          v112 = &v108[v154];
          v111 = (_DWORD)v153 + 1;
        }
        else
        {
          v110 = v109;
          v111 = v109 + 1;
          v112 = &v108[v110];
        }
      }
      else
      {
        v166 = (_QWORD *)sub_186B270(0x18u);
        *v166 = 2;
        v111 = 1;
        v108 = v166 + 1;
        *(_QWORD *)(a1 + 56) = v108;
        v112 = v108;
      }
      *v112 = v72;
      *((_DWORD *)v108 - 1) = v111;
      if ( a2 != v72 )
      {
        v113 = *(_QWORD *)(a1 + 40);
        if ( v113 )
        {
          v114 = *(_DWORD *)(v113 - 4);
          if ( v114 )
            *(_BYTE *)(v113 + 16LL * (unsigned int)(v114 - 1) + 8) |= 2u;
        }
      }
      v115 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v116 = v115;
      if ( v115 )
        ++*(_DWORD *)(v115 + 8);
      v117 = *(_QWORD **)(a1 + 88);
      if ( v117 )
      {
        v118 = *((_DWORD *)v117 - 1);
        if ( v118 == *((_DWORD *)v117 - 2) )
        {
          v147 = (3 * v118 + 1) >> 1;
          v148 = 8 * v147 + 8;
          if ( 8 * v118 + 8 >= v148 || v118 >= v147 )
            goto LABEL_265;
          v149 = (unsigned int *)sub_186B300(v117 - 1, v148);
          v150 = v149[1];
          v117 = v149 + 2;
          *v149 = v147;
          *(_QWORD *)(a1 + 88) = v149 + 2;
          LODWORD(v149) = v150;
          v121 = &v117[v150];
          v120 = (_DWORD)v149 + 1;
        }
        else
        {
          v119 = v118;
          v120 = v118 + 1;
          v121 = &v117[v119];
        }
      }
      else
      {
        v165 = (_QWORD *)sub_186B270(0x18u);
        *v165 = 2;
        v120 = 1;
        v117 = v165 + 1;
        *(_QWORD *)(a1 + 88) = v117;
        v121 = v117;
      }
      *v121 = v116;
      *((_DWORD *)v117 - 1) = v120;
      return 1;
    }
    v7 = *(_WORD *)(a2 + 4);
    v47 = 1;
LABEL_43:
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v60 = 3;
        if ( a3 != 3 )
          v60 = (a3 - 1) & 3;
        v61 = *(_QWORD *)(a1 + 56);
        v62 = v60;
        if ( v61 )
          v63 = *(_DWORD *)(v61 - 4);
        else
          v63 = 0;
        v64 = *(_QWORD **)(a1 + 40);
        if ( v64 )
        {
          v65 = *((unsigned int *)v64 - 1);
          if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
          {
            v79 = (unsigned int)(3 * v65 + 1) >> 1;
            v80 = 16 * v79 + 8;
            if ( 16 * (int)v65 + 8 >= (unsigned int)v80 || (unsigned int)v65 >= v79 )
              goto LABEL_265;
LABEL_96:
            v81 = (unsigned int *)sub_186B300(v64 - 1, v80);
            v64 = v81 + 2;
            *(_QWORD *)(a1 + 40) = v81 + 2;
            *v81 = v79;
            v66 = (__int64)&v81[4 * v81[1] + 2];
            goto LABEL_68;
          }
LABEL_67:
          v66 = (__int64)&v64[2 * v65];
LABEL_68:
          *(_QWORD *)v66 = a2;
          *(_DWORD *)(v66 + 12) = v63;
          *(_DWORD *)(v66 + 8) = v47 | (16 * v62);
          ++*((_DWORD *)v64 - 1);
          return 0;
        }
      }
      else
      {
        if ( v7 )
          goto LABEL_46;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_8;
        v77 = 3;
        if ( a3 != 3 )
          v77 = (a3 - 1) & 3;
        v78 = *(_QWORD *)(a1 + 56);
        v62 = v77;
        if ( v78 )
          v63 = *(_DWORD *)(v78 - 4);
        else
          v63 = 0;
        v64 = *(_QWORD **)(a1 + 40);
        if ( v64 )
        {
          v65 = *((unsigned int *)v64 - 1);
          if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
          {
            v79 = (unsigned int)(3 * v65 + 1) >> 1;
            v80 = 16 * v79 + 8;
            if ( 16 * (int)v65 + 8 >= (unsigned int)v80 || (unsigned int)v65 >= v79 )
              goto LABEL_265;
            goto LABEL_96;
          }
          goto LABEL_67;
        }
      }
      v141 = (_QWORD *)sub_186B270(0x28u);
      v64 = v141 + 1;
      *v141 = 2;
      *(_QWORD *)(a1 + 40) = v141 + 1;
      v66 = (__int64)(v141 + 1);
      goto LABEL_68;
    }
LABEL_80:
    sub_D325A0((_QWORD *)a1, a2);
    return 1;
  }
LABEL_8:
  if ( (unsigned __int8)sub_D31DB0((_QWORD *)a1, a2) )
    return 1;
  v8 = *(unsigned int *)(a1 + 104);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__int64 **)(a1 + 96);
  v11 = v8 - 1;
  v8 *= 8;
  v12 = (__int64 *)((char *)v10 + v8);
  v13 = 8LL * (v9 & v11);
  v14 = &v10[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( i = &v10[(unsigned __int64)v13 / 8]; v12 != i; ++i )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && a2 == v16 )
          goto LABEL_133;
      }
      else if ( !v16 )
      {
        goto LABEL_16;
      }
    }
  }
  for ( ; v14 != v10; ++v10 )
  {
    v142 = *v10;
    if ( (unsigned __int64)*v10 > 1 )
    {
      if ( *(_DWORD *)(v142 + 12) == v9 && a2 == v142 )
        goto LABEL_133;
    }
    else if ( !v142 )
    {
      break;
    }
  }
LABEL_16:
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v178, v17, 0);
  v178[0] = (__int64)&off_1C5A530;
  v183 = v18;
  v184 = 0;
  v185 = 0;
  sub_1584DD0(v186, v17, 0);
  v186[18] = 0;
  v187 = 0;
  v186[0] = &off_1C61DB8;
  sub_1584DD0(v188, v17, 0);
  v191 = v17;
  v193 = v17;
  v19 = v181;
  v195 = v17;
  v20 = *(__int64 **)(a1 + 96);
  v188[0] = &off_1C61DE0;
  v21 = *(unsigned int *)(a1 + 104);
  v189 = 0;
  v22 = v182;
  v23 = &v20[v21];
  v190 = 0;
  v24 = v180;
  v192 = 0;
  v194 = 0;
  v196 = 0;
  if ( v20 != v23 )
  {
    while ( (unsigned __int64)*v20 <= 1 )
    {
      if ( v23 == ++v20 )
        goto LABEL_162;
    }
    if ( v23 != v20 )
    {
      v25 = *v20;
      while ( 1 )
      {
        v168 = 2 * v24;
        if ( 3 * (int)v24 < (unsigned int)(4 * (v22 + v19)) )
        {
          v173 = v23;
          v26 = (__int64 *)sub_186B270(8LL * v168);
          v28 = 8LL * v168;
          v24 = v168;
          v23 = v173;
          if ( v168 )
          {
            memset(v26, 0, 8LL * v168);
            v23 = v173;
            v28 = 8LL * v168;
            v24 = v168;
          }
          v29 = (char *)v26 + v28;
          v135 = (char *)ptr;
          v27 = v168 - 1;
          v136 = (char *)ptr + 8 * v180;
          if ( ptr != v136 )
          {
            do
            {
              if ( *(_QWORD *)v135 > 1u )
              {
                v137 = 8LL * (*(_DWORD *)(*(_QWORD *)v135 + 12LL) & v27);
                v138 = &v26[(unsigned __int64)v137 / 8];
                if ( v28 == v137 )
                {
LABEL_191:
                  if ( v26 == v138 )
                  {
LABEL_213:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v139 = v26;
                  while ( *v139 )
                  {
                    if ( v138 == ++v139 )
                      goto LABEL_213;
                  }
                }
                else
                {
                  v139 = &v26[(unsigned __int64)v137 / 8];
                  while ( *v139 )
                  {
                    if ( v29 == (char *)++v139 )
                      goto LABEL_191;
                  }
                }
                *v139 = *(_QWORD *)v135;
              }
              v135 += 8;
            }
            while ( v136 != v135 );
            v136 = (char *)ptr;
          }
          if ( v136 )
          {
            v175 = v24;
            v174 = v28;
            v171 = v23;
            sub_186B220(v136);
            v24 = v175;
            v28 = v174;
            v27 = v168 - 1;
            v23 = v171;
          }
          ptr = v26;
          v22 = 0;
          v182 = 0;
          v180 = v168;
        }
        else
        {
          v26 = (__int64 *)ptr;
          v27 = v24 - 1;
          v28 = 8LL * (unsigned int)v24;
          v29 = (char *)ptr + v28;
        }
        v30 = *(_DWORD *)(v25 + 12);
        v31 = 8LL * (v30 & v27);
        v32 = &v26[(unsigned __int64)v31 / 8];
        if ( v31 != v28 )
        {
          v33 = &v26[(unsigned __int64)v31 / 8];
          v34 = nullptr;
          while ( 1 )
          {
            v35 = *v33;
            if ( (unsigned __int64)*v33 > 1 )
            {
              if ( *(_DWORD *)(v35 + 12) == v30 && v35 == v25 )
              {
                *v33 = v25;
                v19 = v181;
                goto LABEL_157;
              }
            }
            else
            {
              if ( !v35 )
              {
                if ( v34 )
                  goto LABEL_201;
                v34 = v33;
                goto LABEL_202;
              }
              v34 = v33;
            }
            if ( ++v33 == (__int64 *)v29 )
              goto LABEL_101;
          }
        }
        v34 = nullptr;
        while ( 1 )
        {
LABEL_101:
          if ( v32 == v26 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v83 = *v26;
          if ( (unsigned __int64)*v26 <= 1 )
            break;
          if ( *(_DWORD *)(v83 + 12) == v30 && v83 == v25 )
          {
            *v26 = v25;
            v19 = v181;
            goto LABEL_157;
          }
LABEL_100:
          ++v26;
        }
        if ( v83 )
          break;
        if ( v34 )
LABEL_201:
          v182 = --v22;
        else
          v34 = v26;
LABEL_202:
        v140 = v181;
        *v34 = v25;
        v19 = v140 + 1;
        v181 = v140 + 1;
LABEL_157:
        v122 = v20 + 1;
        if ( v23 != v20 + 1 )
        {
          while ( 1 )
          {
            v25 = *v122;
            v20 = v122;
            if ( (unsigned __int64)*v122 > 1 )
              break;
            if ( v23 == ++v122 )
              goto LABEL_162;
          }
          if ( v122 != v23 )
            continue;
        }
        goto LABEL_162;
      }
      v34 = v26;
      goto LABEL_100;
    }
  }
LABEL_162:
  v123 = 2 * v24;
  if ( 3 * (int)v24 < (unsigned int)(4 * (v19 + v22)) )
  {
    v155 = v123;
    v169 = 2 * v24;
    v125 = 8LL * v123;
    v156 = (_QWORD *)sub_186B270(v125);
    v157 = v169;
    v124 = v156;
    if ( v169 )
    {
      memset(v156, 0, 8 * v155);
      v157 = v169;
    }
    v158 = ptr;
    v126 = v157 - 1;
    v127 = &v124[v125 / 8];
    v159 = (char *)ptr + 8 * v180;
    v160 = (char *)ptr;
    if ( ptr != v159 )
    {
      do
      {
        if ( *(_QWORD *)v160 > 1u )
        {
          v161 = 8LL * (*(_DWORD *)(*(_QWORD *)v160 + 12LL) & v126);
          v162 = &v124[(unsigned __int64)v161 / 8];
          if ( v125 == v161 )
          {
LABEL_241:
            if ( v124 == v162 )
            {
LABEL_257:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v163 = v124;
            while ( *v163 )
            {
              if ( v162 == ++v163 )
                goto LABEL_257;
            }
          }
          else
          {
            v163 = &v124[(unsigned __int64)v161 / 8];
            while ( *v163 )
            {
              if ( v127 == ++v163 )
                goto LABEL_241;
            }
          }
          *v163 = *(_QWORD *)v160;
        }
        v160 += 8;
      }
      while ( v159 != v160 );
      v158 = ptr;
    }
    if ( v158 )
    {
      v172 = v157;
      v170 = v157 - 1;
      sub_186B220(v158);
      v157 = v172;
      v126 = v170;
    }
    ptr = v124;
    v180 = v157;
    v182 = 0;
  }
  else
  {
    v124 = ptr;
    v125 = 8 * v24;
    v126 = v24 - 1;
    v127 = (__int64 *)((char *)ptr + 8 * v24);
  }
  v128 = *(_DWORD *)(a2 + 12);
  v129 = 8LL * (v128 & v126);
  v130 = &v124[(unsigned __int64)v129 / 8];
  if ( v129 != v125 )
  {
    v131 = &v124[(unsigned __int64)v129 / 8];
    v132 = nullptr;
    while ( 1 )
    {
      v133 = *v131;
      if ( (unsigned __int64)*v131 > 1 )
      {
        if ( *(_DWORD *)(v133 + 12) == v128 && a2 == v133 )
        {
          *v131 = a2;
          goto LABEL_111;
        }
      }
      else
      {
        if ( !v133 )
        {
          if ( v132 )
            --v182;
          else
            v132 = v131;
          *v132 = a2;
          ++v181;
          goto LABEL_111;
        }
        v132 = v131;
      }
      if ( ++v131 == v127 )
        goto LABEL_175;
    }
  }
  v132 = nullptr;
  while ( 1 )
  {
LABEL_175:
    if ( v130 == v124 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v134 = *v124;
    if ( *v124 <= 1u )
      break;
    if ( *(_DWORD *)(v134 + 12) == v128 && a2 == v134 )
    {
      *v124 = a2;
      goto LABEL_111;
    }
LABEL_174:
    ++v124;
  }
  if ( v134 )
  {
    v132 = v124;
    goto LABEL_174;
  }
  if ( v132 )
  {
    --v182;
    v124 = v132;
  }
  *v124 = a2;
  ++v181;
LABEL_111:
  v86 = *(_QWORD *)(a1 + 8);
  v87 = *(_QWORD *)(a1 + 480);
  v176 = 0;
  v177 = v86;
  sub_D345E0((__int64)v178, v87, (__int64)&v176, a1 + 496);
  v88 = v176;
  v89 = *(_QWORD *)(a1 + 480);
  v90 = v177;
  if ( v89 == v176 )
  {
    if ( v176 )
    {
      v93 = *(_DWORD *)(v176 + 8) - 1;
      goto LABEL_117;
    }
  }
  else
  {
    if ( v89 )
    {
      v91 = *(_QWORD *)(a1 + 488);
      v92 = (*(_DWORD *)(v89 + 8))-- == 1;
      if ( v92 )
        sub_15D7BC0(v91, v89);
    }
    *(_QWORD *)(a1 + 480) = v88;
    if ( v88 )
    {
      v93 = *(_DWORD *)(v88 + 8);
LABEL_117:
      *(_DWORD *)(v88 + 8) = v93;
      if ( !v93 )
        sub_15D7BC0(v90, v88);
    }
  }
  v178[0] = (__int64)&off_1C5A530;
  if ( v196 )
    sub_186B220((void *)(v196 - 8));
  v94 = v194;
  if ( v194 )
  {
    v95 = v195;
    v92 = (*(_DWORD *)(v194 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v95, v94);
  }
  v96 = v192;
  if ( v192 )
  {
    v97 = v193;
    v92 = (*(_DWORD *)(v192 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v97, v96);
  }
  v98 = v190;
  if ( v190 )
  {
    v99 = v191;
    v92 = (*(_DWORD *)(v190 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v99, v98);
  }
  v188[0] = &qword_1C637E8;
  sub_15841B0(v188);
  v186[0] = &qword_1C637E8;
  sub_15841B0(v186);
  if ( v185 )
    sub_186B220((void *)(v185 - 8));
  sub_15841B0(v178);
LABEL_133:
  v100 = *(_QWORD *)(a1 + 480);
  if ( a2 == v100 )
    goto LABEL_138;
  v101 = *(_QWORD *)(a1 + 40);
  if ( v101 )
  {
    v102 = *(_DWORD *)(v101 - 4);
    if ( v102 )
      *(_BYTE *)(v101 + 16LL * (unsigned int)(v102 - 1) + 8) |= 2u;
  }
  if ( v100 )
LABEL_138:
    ++*(_DWORD *)(v100 + 8);
  v103 = *(_QWORD **)(a1 + 56);
  if ( v103 )
  {
    v104 = *((_DWORD *)v103 - 1);
    if ( v104 != *((_DWORD *)v103 - 2) )
    {
      v105 = v104;
      v106 = v104 + 1;
      v107 = &v103[v105];
      goto LABEL_142;
    }
    v143 = (3 * v104 + 1) >> 1;
    v144 = 8 * v143 + 8;
    if ( 8 * v104 + 8 < v144 && v104 < v143 )
    {
      v145 = (unsigned int *)sub_186B300(v103 - 1, v144);
      v146 = v145[1];
      v103 = v145 + 2;
      *v145 = v143;
      *(_QWORD *)(a1 + 56) = v145 + 2;
      LODWORD(v145) = v146;
      v107 = &v103[v146];
      v106 = (_DWORD)v145 + 1;
      goto LABEL_142;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v178, "Overflow encountered when expanding vector");
LABEL_266:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v178);
    sub_233E40((__int64)v178);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v164 = (_QWORD *)sub_186B270(0x18u);
  *v164 = 2;
  v106 = 1;
  v103 = v164 + 1;
  *(_QWORD *)(a1 + 56) = v103;
  v107 = v103;
LABEL_142:
  *v107 = v100;
  *((_DWORD *)v103 - 1) = v106;
  return 1;
}

