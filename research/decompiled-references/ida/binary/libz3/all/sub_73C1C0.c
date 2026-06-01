__int64 __fastcall sub_73C1C0(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r13
  int v18; // edx
  __int64 *v19; // r12
  __int64 v20; // rax
  int v21; // esi
  __int64 *v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // r10d
  _QWORD *v25; // r13
  unsigned int v26; // r8d
  __int64 v27; // r9
  char *v28; // r15
  int v29; // edi
  __int64 v30; // r8
  _QWORD *v31; // r10
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // rdx
  int v35; // r13d
  _QWORD *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  _QWORD *v42; // rdi
  unsigned int v43; // eax
  __int64 v44; // rdx
  int v45; // eax
  _QWORD *v46; // rdx
  unsigned __int8 v47; // dl
  __int64 v48; // rax
  int v49; // r12d
  int v50; // r14d
  _QWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r12d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r13
  unsigned int v60; // ebx
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rdx
  unsigned __int8 v64; // dl
  __int64 v65; // rax
  unsigned int v66; // r15d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rdi
  bool v76; // zf
  int v77; // eax
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 v85; // rax
  int v86; // edx
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  _QWORD *v91; // rcx
  _QWORD *v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 *v96; // rcx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rbx
  _QWORD *v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  __int64 *v105; // rcx
  __int64 *v106; // rax
  unsigned int v107; // ecx
  _QWORD *v108; // r12
  int v109; // eax
  size_t v110; // r13
  __int64 *v111; // r14
  int v112; // ecx
  __int64 v113; // rax
  _QWORD *v114; // rdi
  __int64 *v115; // rax
  __int64 *v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // r15
  _QWORD *v122; // rax
  unsigned int v123; // r10d
  char *v124; // rax
  char *v125; // r11
  __int64 v126; // rdx
  _QWORD *v127; // rsi
  _QWORD *v128; // rdx
  int v129; // eax
  __int64 v130; // rax
  _QWORD *v131; // rax
  unsigned int v132; // ebx
  unsigned int v133; // ecx
  unsigned int *v134; // rax
  __int64 v135; // rcx
  unsigned int v136; // r12d
  unsigned int v137; // ecx
  unsigned int *v138; // rax
  __int64 v139; // rcx
  unsigned int v140; // r12d
  unsigned int v141; // ecx
  unsigned int *v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r14
  _QWORD *v145; // rax
  int v146; // ecx
  void *v147; // rdi
  char *v148; // r8
  char *v149; // r15
  __int64 v150; // rdx
  _QWORD *v151; // rsi
  _QWORD *v152; // rdx
  _QWORD *v153; // rdx
  _QWORD *v154; // rdx
  _QWORD *v155; // rdx
  char **exception; // rbx
  unsigned int v157; // [rsp+8h] [rbp-2B0h]
  int v158; // [rsp+8h] [rbp-2B0h]
  int v159; // [rsp+8h] [rbp-2B0h]
  size_t v160; // [rsp+10h] [rbp-2A8h]
  __int64 *v161; // [rsp+10h] [rbp-2A8h]
  int v162; // [rsp+10h] [rbp-2A8h]
  unsigned int v163; // [rsp+18h] [rbp-2A0h]
  __int64 *v164; // [rsp+20h] [rbp-298h]
  __int64 v165; // [rsp+20h] [rbp-298h]
  unsigned int v166; // [rsp+38h] [rbp-280h]
  __int64 v167; // [rsp+50h] [rbp-268h] BYREF
  __int64 v168; // [rsp+58h] [rbp-260h]
  __int64 v169[12]; // [rsp+60h] [rbp-258h] BYREF
  void *ptr; // [rsp+C0h] [rbp-1F8h]
  unsigned int v171; // [rsp+C8h] [rbp-1F0h]
  int v172; // [rsp+CCh] [rbp-1ECh]
  int v173; // [rsp+D0h] [rbp-1E8h]
  __int64 v174; // [rsp+F0h] [rbp-1C8h]
  int v175; // [rsp+F8h] [rbp-1C0h]
  __int64 v176; // [rsp+100h] [rbp-1B8h]
  _QWORD v177[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v178; // [rsp+1A0h] [rbp-118h]
  _QWORD v179[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v180; // [rsp+238h] [rbp-80h]
  __int64 v181; // [rsp+240h] [rbp-78h]
  __int64 v182; // [rsp+248h] [rbp-70h]
  __int64 v183; // [rsp+250h] [rbp-68h]
  __int64 v184; // [rsp+258h] [rbp-60h]
  __int64 v185; // [rsp+260h] [rbp-58h]
  __int64 v186; // [rsp+268h] [rbp-50h]
  __int64 v187; // [rsp+270h] [rbp-48h]

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v37 = *(_QWORD **)(a1 + 56);
    if ( v37 )
    {
      v38 = *((_DWORD *)v37 - 1);
      if ( v38 == *((_DWORD *)v37 - 2) )
      {
        v54 = (3 * v38 + 1) >> 1;
        v55 = 8 * v54 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v55 || v38 >= v54 )
          goto LABEL_240;
        v56 = (unsigned int *)sub_186B300(v37 - 1, v55);
        v57 = v56[1];
        v37 = v56 + 2;
        *v56 = v54;
        *(_QWORD *)(a1 + 56) = v56 + 2;
        LODWORD(v56) = v57;
        v41 = &v37[v57];
        v40 = (_DWORD)v56 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v37[v39];
      }
    }
    else
    {
      v120 = (_QWORD *)sub_186B270(0x18u);
      v37 = v120 + 1;
      *v120 = 2;
      v40 = 1;
      *(_QWORD *)(a1 + 56) = v37;
      v41 = v37;
    }
    *v41 = a2;
    *((_DWORD *)v37 - 1) = v40;
    v42 = *(_QWORD **)(a1 + 88);
    if ( v42 )
    {
      v43 = *((_DWORD *)v42 - 1);
      if ( v43 == *((_DWORD *)v42 - 2) )
      {
        v60 = (3 * v43 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v61 || v43 >= v60 )
          goto LABEL_240;
        v62 = (unsigned int *)sub_186B300(v42 - 1, v61);
        v63 = v62[1];
        v42 = v62 + 2;
        *v62 = v60;
        *(_QWORD *)(a1 + 88) = v62 + 2;
        LODWORD(v62) = v63;
        v46 = &v42[v63];
        v45 = (_DWORD)v62 + 1;
      }
      else
      {
        v44 = v43;
        v45 = v43 + 1;
        v46 = &v42[v44];
      }
    }
    else
    {
      v119 = (_QWORD *)sub_186B270(0x18u);
      v42 = v119 + 1;
      *v119 = 2;
      v45 = 1;
      *(_QWORD *)(a1 + 88) = v42;
      v46 = v42;
    }
    *v46 = 0;
    *((_DWORD *)v42 - 1) = v45;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v35 = 0;
    goto LABEL_31;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_34:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_55;
    }
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_59:
    v58 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v59 = v58;
    if ( v58 )
    {
      v92 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v58 + 8);
      if ( v92 )
      {
        v93 = *((_DWORD *)v92 - 1);
        if ( v93 == *((_DWORD *)v92 - 2) )
        {
          v140 = (3 * v93 + 1) >> 1;
          v141 = 8 * v140 + 8;
          if ( 8 * v93 + 8 >= v141 || v93 >= v140 )
            goto LABEL_240;
          v142 = (unsigned int *)sub_186B300(v92 - 1, v141);
          v143 = v142[1];
          v92 = v142 + 2;
          *v142 = v140;
          *(_QWORD *)(a1 + 56) = v142 + 2;
          LODWORD(v142) = v143;
          v96 = &v92[v143];
          v95 = (_DWORD)v142 + 1;
        }
        else
        {
          v94 = v93;
          v95 = v93 + 1;
          v96 = &v92[v94];
        }
      }
      else
      {
        v154 = (_QWORD *)sub_186B270(0x18u);
        *v154 = 2;
        v95 = 1;
        v92 = v154 + 1;
        *(_QWORD *)(a1 + 56) = v92;
        v96 = v92;
      }
      *v96 = v59;
      *((_DWORD *)v92 - 1) = v95;
      if ( a2 != v59 )
      {
        v97 = *(_QWORD *)(a1 + 40);
        if ( v97 )
        {
          v98 = *(_DWORD *)(v97 - 4);
          if ( v98 )
            *(_BYTE *)(v97 + 16LL * (unsigned int)(v98 - 1) + 8) |= 2u;
        }
      }
      v99 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v100 = v99;
      if ( v99 )
        ++*(_DWORD *)(v99 + 8);
      v101 = *(_QWORD **)(a1 + 88);
      if ( v101 )
      {
        v102 = *((_DWORD *)v101 - 1);
        if ( v102 == *((_DWORD *)v101 - 2) )
        {
          v136 = (3 * v102 + 1) >> 1;
          v137 = 8 * v136 + 8;
          if ( 8 * v102 + 8 >= v137 || v102 >= v136 )
            goto LABEL_240;
          v138 = (unsigned int *)sub_186B300(v101 - 1, v137);
          v139 = v138[1];
          v101 = v138 + 2;
          *v138 = v136;
          *(_QWORD *)(a1 + 88) = v138 + 2;
          LODWORD(v138) = v139;
          v105 = &v101[v139];
          v104 = (_DWORD)v138 + 1;
        }
        else
        {
          v103 = v102;
          v104 = v102 + 1;
          v105 = &v101[v103];
        }
      }
      else
      {
        v155 = (_QWORD *)sub_186B270(0x18u);
        *v155 = 2;
        v104 = 1;
        v101 = v155 + 1;
        *(_QWORD *)(a1 + 88) = v101;
        v105 = v101;
      }
      *v105 = v100;
      *((_DWORD *)v101 - 1) = v104;
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v35 = 1;
LABEL_31:
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        v47 = 3;
        if ( a3 != 3 )
          v47 = (a3 - 1) & 3;
        v48 = *(_QWORD *)(a1 + 56);
        v49 = v47;
        if ( v48 )
          v50 = *(_DWORD *)(v48 - 4);
        else
          v50 = 0;
        v51 = *(_QWORD **)(a1 + 40);
        if ( v51 )
        {
          v52 = *((unsigned int *)v51 - 1);
          if ( (_DWORD)v52 == *((_DWORD *)v51 - 2) )
          {
            v66 = (unsigned int)(3 * v52 + 1) >> 1;
            v67 = 16 * v66 + 8;
            if ( 16 * (int)v52 + 8 >= (unsigned int)v67 || (unsigned int)v52 >= v66 )
              goto LABEL_240;
LABEL_76:
            v68 = (unsigned int *)sub_186B300(v51 - 1, v67);
            v51 = v68 + 2;
            *(_QWORD *)(a1 + 40) = v68 + 2;
            *v68 = v66;
            v53 = (__int64)&v68[4 * v68[1] + 2];
            goto LABEL_52;
          }
LABEL_51:
          v53 = (__int64)&v51[2 * v52];
LABEL_52:
          *(_QWORD *)v53 = a2;
          *(_DWORD *)(v53 + 12) = v50;
          *(_DWORD *)(v53 + 8) = v35 | (16 * v49);
          ++*((_DWORD *)v51 - 1);
          return 0;
        }
      }
      else
      {
        if ( v5 )
          goto LABEL_34;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
        v64 = 3;
        if ( a3 != 3 )
          v64 = (a3 - 1) & 3;
        v65 = *(_QWORD *)(a1 + 56);
        v49 = v64;
        if ( v65 )
          v50 = *(_DWORD *)(v65 - 4);
        else
          v50 = 0;
        v51 = *(_QWORD **)(a1 + 40);
        if ( v51 )
        {
          v52 = *((unsigned int *)v51 - 1);
          if ( (_DWORD)v52 == *((_DWORD *)v51 - 2) )
          {
            v66 = (unsigned int)(3 * v52 + 1) >> 1;
            v67 = 16 * v66 + 8;
            if ( 16 * (int)v52 + 8 >= (unsigned int)v67 || (unsigned int)v52 >= v66 )
            {
LABEL_240:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_737700(v169, "Overflow encountered when expanding vector");
              goto LABEL_241;
            }
            goto LABEL_76;
          }
          goto LABEL_51;
        }
      }
      v131 = (_QWORD *)sub_186B270(0x28u);
      v51 = v131 + 1;
      *v131 = 2;
      *(_QWORD *)(a1 + 40) = v131 + 1;
      v53 = (__int64)(v131 + 1);
      goto LABEL_52;
    }
LABEL_55:
    sub_739A30((_QWORD *)a1, a2);
    return 1;
  }
LABEL_6:
  if ( (unsigned __int8)sub_738C60((_QWORD *)a1, a2) )
    return 1;
  v7 = *(unsigned int *)(a1 + 104);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *(__int64 **)(a1 + 96);
  v10 = v7 - 1;
  v7 *= 8;
  v11 = (__int64 *)((char *)v9 + v7);
  v12 = 8LL * (v8 & v10);
  v13 = &v9[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; ++i )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && a2 == v15 )
          goto LABEL_107;
      }
      else if ( !v15 )
      {
        goto LABEL_14;
      }
    }
  }
  for ( ; v13 != v9; ++v9 )
  {
    v130 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v130 + 12) == v8 && a2 == v130 )
        goto LABEL_107;
    }
    else if ( !v130 )
    {
      break;
    }
  }
LABEL_14:
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v169, v16, 0);
  v169[0] = (__int64)&off_1C53EF0;
  v174 = v17;
  v175 = 0;
  v176 = 0;
  sub_1584DD0(v177, v16, 0);
  v177[18] = 0;
  v178 = 0;
  v177[0] = &off_1C61DB8;
  sub_1584DD0(v179, v16, 0);
  v182 = v16;
  v184 = v16;
  v18 = v172;
  v186 = v16;
  v19 = *(__int64 **)(a1 + 96);
  v179[0] = &off_1C61DE0;
  v20 = *(unsigned int *)(a1 + 104);
  v180 = 0;
  v21 = v173;
  v181 = 0;
  v22 = &v19[v20];
  v183 = 0;
  v185 = 0;
  v187 = 0;
  v157 = v171;
  if ( v19 != v22 )
  {
    while ( (unsigned __int64)*v19 <= 1 )
    {
      if ( v22 == ++v19 )
        goto LABEL_136;
    }
    if ( v22 != v19 )
    {
      v23 = *v19;
      while ( 1 )
      {
        v24 = 2 * v157;
        if ( 3 * v157 < 4 * (v21 + v18) )
        {
          v121 = v24;
          v164 = v22;
          v157 *= 2;
          v160 = 8LL * v24;
          v122 = (_QWORD *)sub_186B270(v160);
          v123 = v157;
          v27 = v160;
          v25 = v122;
          v22 = v164;
          if ( v157 )
          {
            memset(v122, 0, 8 * v121);
            v22 = v164;
            v27 = v160;
            v123 = v157;
          }
          v26 = v123 - 1;
          v28 = (char *)v25 + v27;
          v124 = (char *)ptr;
          v125 = (char *)ptr + 8 * v171;
          if ( ptr != v125 )
          {
            do
            {
              if ( *(_QWORD *)v124 > 1u )
              {
                v126 = 8LL * (*(_DWORD *)(*(_QWORD *)v124 + 12LL) & v26);
                v127 = &v25[(unsigned __int64)v126 / 8];
                if ( v27 == v126 )
                {
LABEL_167:
                  if ( v25 == v127 )
                  {
LABEL_189:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v128 = v25;
                  while ( *v128 )
                  {
                    if ( v127 == ++v128 )
                      goto LABEL_189;
                  }
                }
                else
                {
                  v128 = &v25[(unsigned __int64)v126 / 8];
                  while ( *v128 )
                  {
                    if ( v28 == (char *)++v128 )
                      goto LABEL_167;
                  }
                }
                *v128 = *(_QWORD *)v124;
              }
              v124 += 8;
            }
            while ( v125 != v124 );
            v125 = (char *)ptr;
          }
          if ( v125 )
          {
            v166 = v123;
            v165 = v27;
            v163 = v123 - 1;
            v161 = v22;
            sub_186B220(v125);
            v123 = v166;
            v27 = v165;
            v26 = v163;
            v22 = v161;
          }
          ptr = v25;
          v21 = 0;
          v171 = v123;
          v173 = 0;
        }
        else
        {
          v25 = ptr;
          v26 = v157 - 1;
          v27 = 8LL * v157;
          v28 = (char *)ptr + v27;
        }
        v29 = *(_DWORD *)(v23 + 12);
        v30 = 8LL * (v29 & v26);
        v31 = &v25[(unsigned __int64)v30 / 8];
        if ( v30 != v27 )
        {
          v32 = &v25[(unsigned __int64)v30 / 8];
          v33 = nullptr;
          while ( 1 )
          {
            v34 = *v32;
            if ( *v32 > 1u )
            {
              if ( *(_DWORD *)(v34 + 12) == v29 && v34 == v23 )
              {
                *v32 = v23;
                v18 = v172;
                goto LABEL_131;
              }
            }
            else
            {
              if ( !v34 )
              {
                if ( v33 )
                  goto LABEL_177;
                v33 = v32;
                goto LABEL_178;
              }
              v33 = v32;
            }
            if ( ++v32 == (_QWORD *)v28 )
              goto LABEL_80;
          }
        }
        v33 = nullptr;
        while ( 1 )
        {
LABEL_80:
          if ( v31 == v25 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v69 = *v25;
          if ( *v25 <= 1u )
            break;
          if ( *(_DWORD *)(v69 + 12) == v29 && v69 == v23 )
          {
            *v25 = v23;
            v18 = v172;
            goto LABEL_131;
          }
LABEL_79:
          ++v25;
        }
        if ( v69 )
          break;
        if ( v33 )
LABEL_177:
          v173 = --v21;
        else
          v33 = v25;
LABEL_178:
        v129 = v172;
        *v33 = v23;
        v18 = v129 + 1;
        v172 = v129 + 1;
LABEL_131:
        v106 = v19 + 1;
        if ( v22 != v19 + 1 )
        {
          while ( 1 )
          {
            v23 = *v106;
            v19 = v106;
            if ( (unsigned __int64)*v106 > 1 )
              break;
            if ( v22 == ++v106 )
              goto LABEL_136;
          }
          if ( v22 != v106 )
            continue;
        }
        goto LABEL_136;
      }
      v33 = v25;
      goto LABEL_79;
    }
  }
LABEL_136:
  v107 = 2 * v157;
  if ( 3 * v157 < 4 * (v18 + v21) )
  {
    v144 = v107;
    v158 = 2 * v157;
    v110 = 8LL * v107;
    v145 = (_QWORD *)sub_186B270(v110);
    v146 = v158;
    v108 = v145;
    if ( v158 )
    {
      memset(v145, 0, 8 * v144);
      v146 = v158;
    }
    v147 = ptr;
    v109 = v146 - 1;
    v111 = &v108[v110 / 8];
    v148 = (char *)ptr + 8 * v171;
    v149 = (char *)ptr;
    if ( ptr != v148 )
    {
      do
      {
        if ( *(_QWORD *)v149 > 1u )
        {
          v150 = 8LL * (*(_DWORD *)(*(_QWORD *)v149 + 12LL) & (unsigned int)v109);
          v151 = &v108[(unsigned __int64)v150 / 8];
          if ( v110 == v150 )
          {
LABEL_217:
            if ( v108 == v151 )
            {
LABEL_233:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v152 = v108;
            while ( *v152 )
            {
              if ( v151 == ++v152 )
                goto LABEL_233;
            }
          }
          else
          {
            v152 = &v108[(unsigned __int64)v150 / 8];
            while ( *v152 )
            {
              if ( v111 == ++v152 )
                goto LABEL_217;
            }
          }
          *v152 = *(_QWORD *)v149;
        }
        v149 += 8;
      }
      while ( v148 != v149 );
      v147 = ptr;
    }
    if ( v147 )
    {
      v162 = v146;
      v159 = v146 - 1;
      sub_186B220(v147);
      v146 = v162;
      v109 = v159;
    }
    ptr = v108;
    v171 = v146;
    v173 = 0;
  }
  else
  {
    v108 = ptr;
    v109 = v157 - 1;
    v110 = 8LL * v157;
    v111 = (__int64 *)((char *)ptr + v110);
  }
  v112 = *(_DWORD *)(a2 + 12);
  v113 = 8LL * (v112 & (unsigned int)v109);
  v114 = &v108[(unsigned __int64)v113 / 8];
  if ( v113 != v110 )
  {
    v115 = &v108[(unsigned __int64)v113 / 8];
    v116 = nullptr;
    while ( 1 )
    {
      v117 = *v115;
      if ( (unsigned __int64)*v115 > 1 )
      {
        if ( *(_DWORD *)(v117 + 12) == v112 && a2 == v117 )
        {
          *v115 = a2;
          goto LABEL_85;
        }
      }
      else
      {
        if ( !v117 )
        {
          if ( v116 )
            goto LABEL_227;
          v116 = v115;
          goto LABEL_228;
        }
        v116 = v115;
      }
      if ( ++v115 == v111 )
        goto LABEL_149;
    }
  }
  v116 = nullptr;
  while ( 1 )
  {
LABEL_149:
    if ( v114 == v108 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v118 = *v108;
    if ( *v108 <= 1u )
      break;
    if ( *(_DWORD *)(v118 + 12) == v112 && a2 == v118 )
    {
      *v108 = a2;
      goto LABEL_85;
    }
LABEL_148:
    ++v108;
  }
  if ( v118 )
  {
    v116 = v108;
    goto LABEL_148;
  }
  if ( v116 )
LABEL_227:
    --v173;
  else
    v116 = v108;
LABEL_228:
  *v116 = a2;
  ++v172;
LABEL_85:
  v70 = *(_QWORD *)(a1 + 8);
  v71 = *(_QWORD *)(a1 + 480);
  v167 = 0;
  v168 = v70;
  sub_73C020((__int64)v169, v71, &v167, (__int64 *)(a1 + 496));
  v72 = v167;
  v73 = *(_QWORD *)(a1 + 480);
  v74 = v168;
  if ( v73 == v167 )
  {
    if ( v167 )
    {
      v77 = *(_DWORD *)(v167 + 8) - 1;
      goto LABEL_91;
    }
  }
  else
  {
    if ( v73 )
    {
      v75 = *(_QWORD *)(a1 + 488);
      v76 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v76 )
        sub_15D7BC0(v75, v73);
    }
    *(_QWORD *)(a1 + 480) = v72;
    if ( v72 )
    {
      v77 = *(_DWORD *)(v72 + 8);
LABEL_91:
      *(_DWORD *)(v72 + 8) = v77;
      if ( !v77 )
        sub_15D7BC0(v74, v72);
    }
  }
  v169[0] = (__int64)&off_1C53EF0;
  if ( v187 )
    sub_186B220((void *)(v187 - 8));
  v78 = v185;
  if ( v185 )
  {
    v79 = v186;
    v76 = (*(_DWORD *)(v185 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v79, v78);
  }
  v80 = v183;
  if ( v183 )
  {
    v81 = v184;
    v76 = (*(_DWORD *)(v183 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v81, v80);
  }
  v82 = v181;
  if ( v181 )
  {
    v83 = v182;
    v76 = (*(_DWORD *)(v181 + 8))-- == 1;
    if ( v76 )
      sub_15D7BC0(v83, v82);
  }
  v179[0] = &qword_1C637E8;
  sub_15841B0(v179);
  v177[0] = &qword_1C637E8;
  sub_15841B0(v177);
  if ( v176 )
    sub_186B220((void *)(v176 - 8));
  sub_15841B0(v169);
LABEL_107:
  v84 = *(_QWORD *)(a1 + 480);
  if ( a2 == v84 )
    goto LABEL_112;
  v85 = *(_QWORD *)(a1 + 40);
  if ( v85 )
  {
    v86 = *(_DWORD *)(v85 - 4);
    if ( v86 )
      *(_BYTE *)(v85 + 16LL * (unsigned int)(v86 - 1) + 8) |= 2u;
  }
  if ( v84 )
LABEL_112:
    ++*(_DWORD *)(v84 + 8);
  v87 = *(_QWORD **)(a1 + 56);
  if ( v87 )
  {
    v88 = *((_DWORD *)v87 - 1);
    if ( v88 != *((_DWORD *)v87 - 2) )
    {
      v89 = v88;
      v90 = v88 + 1;
      v91 = &v87[v89];
      goto LABEL_116;
    }
    v132 = (3 * v88 + 1) >> 1;
    v133 = 8 * v132 + 8;
    if ( 8 * v88 + 8 < v133 && v88 < v132 )
    {
      v134 = (unsigned int *)sub_186B300(v87 - 1, v133);
      v135 = v134[1];
      v87 = v134 + 2;
      *v134 = v132;
      *(_QWORD *)(a1 + 56) = v134 + 2;
      LODWORD(v134) = v135;
      v91 = &v87[v135];
      v90 = (_DWORD)v134 + 1;
      goto LABEL_116;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_737700(v169, "Overflow encountered when expanding vector");
LABEL_241:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v169);
    sub_233E40((__int64)v169);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v153 = (_QWORD *)sub_186B270(0x18u);
  *v153 = 2;
  v90 = 1;
  v87 = v153 + 1;
  *(_QWORD *)(a1 + 56) = v87;
  v91 = v87;
LABEL_116:
  *v91 = v84;
  *((_DWORD *)v87 - 1) = v90;
  return 1;
}

