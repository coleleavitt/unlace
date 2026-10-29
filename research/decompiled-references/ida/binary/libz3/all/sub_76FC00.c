__int64 __fastcall sub_76FC00(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // ax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int16 v24; // ax
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  int v27; // r12d
  int v28; // r14d
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 *v37; // rdx
  _QWORD *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  _QWORD *v42; // rdx
  unsigned int v43; // r12d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rdx
  unsigned __int8 v47; // dl
  __int64 v48; // rax
  unsigned int v49; // r15d
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // ebx
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // edi
  __int64 *v58; // rcx
  unsigned int v59; // edx
  __int64 *v60; // rsi
  __int64 v61; // rdx
  __int64 *v62; // r8
  __int64 *i; // rax
  __int64 v64; // rdx
  __int64 v65; // r12
  __int64 v66; // r13
  int v67; // edx
  __int64 *v68; // r12
  __int64 v69; // rax
  int v70; // esi
  __int64 *v71; // rcx
  __int64 v72; // r14
  unsigned int v73; // r10d
  _QWORD *v74; // r13
  unsigned int v75; // r8d
  __int64 v76; // r9
  char *v77; // r15
  int v78; // edi
  __int64 v79; // r8
  _QWORD *v80; // r10
  _QWORD *v81; // rax
  _QWORD *v82; // r8
  __int64 v83; // rdx
  _QWORD *v84; // rdx
  __int64 v85; // rax
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
  __int64 *v108; // rax
  unsigned int v109; // ecx
  _QWORD *v110; // r12
  int v111; // eax
  size_t v112; // r13
  __int64 *v113; // r14
  int v114; // ecx
  __int64 v115; // rax
  _QWORD *v116; // rdi
  __int64 *v117; // rax
  __int64 *v118; // rsi
  __int64 v119; // rdx
  __int64 v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // r15
  _QWORD *v124; // rax
  unsigned int v125; // r10d
  char *v126; // rax
  char *v127; // r11
  __int64 v128; // rdx
  _QWORD *v129; // rsi
  _QWORD *v130; // rdx
  int v131; // eax
  _QWORD *v132; // rax
  __int64 v133; // rax
  unsigned int v134; // ebx
  unsigned int v135; // ecx
  unsigned int *v136; // rax
  __int64 v137; // rcx
  unsigned int v138; // r12d
  unsigned int v139; // ecx
  unsigned int *v140; // rax
  __int64 v141; // rcx
  unsigned int v142; // r12d
  unsigned int v143; // ecx
  unsigned int *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // r14
  _QWORD *v147; // rax
  int v148; // ecx
  void *v149; // rdi
  char *v150; // r8
  char *v151; // r15
  __int64 v152; // rdx
  _QWORD *v153; // rsi
  _QWORD *v154; // rdx
  _QWORD *v155; // rdx
  _QWORD *v156; // rdx
  char **exception; // rbx
  unsigned int v158; // [rsp+8h] [rbp-2B0h]
  int v159; // [rsp+8h] [rbp-2B0h]
  int v160; // [rsp+8h] [rbp-2B0h]
  size_t v161; // [rsp+10h] [rbp-2A8h]
  __int64 *v162; // [rsp+10h] [rbp-2A8h]
  int v163; // [rsp+10h] [rbp-2A8h]
  unsigned int v164; // [rsp+18h] [rbp-2A0h]
  __int64 *v165; // [rsp+20h] [rbp-298h]
  __int64 v166; // [rsp+20h] [rbp-298h]
  unsigned int v167; // [rsp+38h] [rbp-280h]
  __int64 v168; // [rsp+50h] [rbp-268h] BYREF
  __int64 v169; // [rsp+58h] [rbp-260h]
  __int64 v170[12]; // [rsp+60h] [rbp-258h] BYREF
  void *ptr; // [rsp+C0h] [rbp-1F8h]
  unsigned int v172; // [rsp+C8h] [rbp-1F0h]
  int v173; // [rsp+CCh] [rbp-1ECh]
  int v174; // [rsp+D0h] [rbp-1E8h]
  __int64 v175; // [rsp+F0h] [rbp-1C8h]
  int v176; // [rsp+F8h] [rbp-1C0h]
  __int64 v177; // [rsp+100h] [rbp-1B8h]
  _QWORD v178[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v179; // [rsp+1A0h] [rbp-118h]
  _QWORD v180[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v181; // [rsp+238h] [rbp-80h]
  __int64 v182; // [rsp+240h] [rbp-78h]
  __int64 v183; // [rsp+248h] [rbp-70h]
  __int64 v184; // [rsp+250h] [rbp-68h]
  __int64 v185; // [rsp+258h] [rbp-60h]
  __int64 v186; // [rsp+260h] [rbp-58h]
  __int64 v187; // [rsp+268h] [rbp-50h]
  __int64 v188; // [rsp+270h] [rbp-48h]

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v33 = *(_QWORD **)(a1 + 56);
    if ( v33 )
    {
      v34 = *((_DWORD *)v33 - 1);
      if ( v34 == *((_DWORD *)v33 - 2) )
      {
        v43 = (3 * v34 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v34 + 8 >= (unsigned int)v44 || v34 >= v43 )
          goto LABEL_238;
        v45 = (unsigned int *)sub_186B300(v33 - 1, v44);
        v46 = v45[1];
        v33 = v45 + 2;
        *v45 = v43;
        *(_QWORD *)(a1 + 56) = v45 + 2;
        LODWORD(v45) = v46;
        v37 = &v33[v46];
        v36 = (_DWORD)v45 + 1;
      }
      else
      {
        v35 = v34;
        v36 = v34 + 1;
        v37 = &v33[v35];
      }
    }
    else
    {
      v121 = (_QWORD *)sub_186B270(0x18u);
      v33 = v121 + 1;
      *v121 = 2;
      v36 = 1;
      *(_QWORD *)(a1 + 56) = v33;
      v37 = v33;
    }
    *v37 = a2;
    *((_DWORD *)v33 - 1) = v36;
    v38 = *(_QWORD **)(a1 + 88);
    if ( v38 )
    {
      v39 = *((_DWORD *)v38 - 1);
      if ( v39 == *((_DWORD *)v38 - 2) )
      {
        v52 = (3 * v39 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v53 || v39 >= v52 )
          goto LABEL_238;
        v54 = (unsigned int *)sub_186B300(v38 - 1, v53);
        v55 = v54[1];
        v38 = v54 + 2;
        *v54 = v52;
        *(_QWORD *)(a1 + 88) = v54 + 2;
        LODWORD(v54) = v55;
        v42 = &v38[v55];
        v41 = (_DWORD)v54 + 1;
      }
      else
      {
        v40 = v39;
        v41 = v39 + 1;
        v42 = &v38[v40];
      }
    }
    else
    {
      v122 = (_QWORD *)sub_186B270(0x18u);
      v38 = v122 + 1;
      *v122 = 2;
      v41 = 1;
      *(_QWORD *)(a1 + 88) = v38;
      v42 = v38;
    }
    *v42 = 0;
    *((_DWORD *)v38 - 1) = v41;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) > 1u && a2 != *(_QWORD *)(a1 + 120) )
  {
    v6 = *(_WORD *)(a2 + 4);
    if ( v6 )
    {
      if ( v6 == 2 )
        goto LABEL_6;
    }
    else if ( *(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = 1;
      v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(_QWORD **)(a1 + 56);
        ++*(_DWORD *)(v8 + 8);
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v138 = (3 * v11 + 1) >> 1;
            v139 = 8 * v138 + 8;
            if ( 8 * v11 + 8 >= v139 || v11 >= v138 )
              goto LABEL_238;
            v140 = (unsigned int *)sub_186B300(v10 - 1, v139);
            v141 = v140[1];
            v10 = v140 + 2;
            *v140 = v138;
            *(_QWORD *)(a1 + 56) = v140 + 2;
            LODWORD(v140) = v141;
            v14 = &v10[v141];
            v13 = (_DWORD)v140 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
          v84 = (_QWORD *)sub_186B270(0x18u);
          *v84 = 2;
          v13 = 1;
          v10 = v84 + 1;
          *(_QWORD *)(a1 + 56) = v10;
          v14 = v10;
        }
        *v14 = v9;
        *((_DWORD *)v10 - 1) = v13;
        if ( a2 != v9 )
        {
          v15 = *(_QWORD *)(a1 + 40);
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 - 4);
            if ( v16 )
              *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
          }
        }
        v17 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
        v18 = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v19 = *(__int64 **)(a1 + 88);
        if ( !v19 )
        {
          v156 = (_QWORD *)sub_186B270(0x18u);
          *v156 = 2;
          v22 = 1;
          v19 = v156 + 1;
          *(_QWORD *)(a1 + 88) = v19;
          v23 = v19;
          goto LABEL_19;
        }
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 != *((_DWORD *)v19 - 2) )
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
LABEL_19:
          *v23 = v18;
          *((_DWORD *)v19 - 1) = v22;
          return 1;
        }
        v142 = (3 * v20 + 1) >> 1;
        v143 = 8 * v142 + 8;
        if ( 8 * v20 + 8 < v143 && v20 < v142 )
        {
          v144 = (unsigned int *)sub_186B300(v19 - 1, v143);
          v145 = v144[1];
          v19 = (__int64 *)(v144 + 2);
          *v144 = v142;
          *(_QWORD *)(a1 + 88) = v144 + 2;
          LODWORD(v144) = v145;
          v23 = &v19[v145];
          v22 = (_DWORD)v144 + 1;
          goto LABEL_19;
        }
LABEL_238:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(v170, "Overflow encountered when expanding vector");
        goto LABEL_239;
      }
      goto LABEL_22;
    }
  }
  v7 = 0;
LABEL_22:
  sub_76B0A0(*(__int64 **)(a1 + 144), a2);
  v24 = *(_WORD *)(a2 + 4);
  if ( v24 == 1 )
  {
    sub_76EEA0((_QWORD *)a1, a2);
    return 1;
  }
  if ( v24 == 2 )
  {
    v47 = 3;
    if ( a3 != 3 )
      v47 = (a3 - 1) & 3;
    v48 = *(_QWORD *)(a1 + 56);
    v27 = v47;
    if ( v48 )
      v28 = *(_DWORD *)(v48 - 4);
    else
      v28 = 0;
    v29 = *(_QWORD **)(a1 + 40);
    if ( v29 )
    {
      v30 = *((unsigned int *)v29 - 1);
      if ( (_DWORD)v30 != *((_DWORD *)v29 - 2) )
        goto LABEL_32;
      v49 = (unsigned int)(3 * v30 + 1) >> 1;
      v50 = 16 * v49 + 8;
      if ( 16 * (int)v30 + 8 >= (unsigned int)v50 || (unsigned int)v30 >= v49 )
        goto LABEL_238;
      goto LABEL_57;
    }
LABEL_178:
    v132 = (_QWORD *)sub_186B270(0x28u);
    v29 = v132 + 1;
    *v132 = 2;
    *(_QWORD *)(a1 + 40) = v132 + 1;
    v31 = (__int64)(v132 + 1);
    goto LABEL_33;
  }
  if ( v24 )
  {
    sub_1872CE0("");
    sub_1873130(114, 226);
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    v25 = 3;
    if ( a3 != 3 )
      v25 = (a3 - 1) & 3;
    v26 = *(_QWORD *)(a1 + 56);
    v27 = v25;
    if ( v26 )
      v28 = *(_DWORD *)(v26 - 4);
    else
      v28 = 0;
    v29 = *(_QWORD **)(a1 + 40);
    if ( v29 )
    {
      v30 = *((unsigned int *)v29 - 1);
      if ( (_DWORD)v30 != *((_DWORD *)v29 - 2) )
      {
LABEL_32:
        v31 = (__int64)&v29[2 * v30];
LABEL_33:
        *(_QWORD *)v31 = a2;
        *(_DWORD *)(v31 + 12) = v28;
        *(_DWORD *)(v31 + 8) = v7 | (16 * v27);
        ++*((_DWORD *)v29 - 1);
        return 0;
      }
      v49 = (unsigned int)(3 * v30 + 1) >> 1;
      v50 = 16 * v49 + 8;
      if ( 16 * (int)v30 + 8 >= (unsigned int)v50 || (unsigned int)v30 >= v49 )
        goto LABEL_238;
LABEL_57:
      v51 = (unsigned int *)sub_186B300(v29 - 1, v50);
      v29 = v51 + 2;
      *(_QWORD *)(a1 + 40) = v51 + 2;
      *v51 = v49;
      v31 = (__int64)&v51[4 * v51[1] + 2];
      goto LABEL_33;
    }
    goto LABEL_178;
  }
  if ( (unsigned __int8)sub_76F4E0(a1, a2) )
    return 1;
  v56 = *(unsigned int *)(a1 + 104);
  v57 = *(_DWORD *)(a2 + 12);
  v58 = *(__int64 **)(a1 + 96);
  v59 = v56 - 1;
  v56 *= 8;
  v60 = (__int64 *)((char *)v58 + v56);
  v61 = 8LL * (v57 & v59);
  v62 = &v58[(unsigned __int64)v61 / 8];
  if ( v61 != v56 )
  {
    for ( i = &v58[(unsigned __int64)v61 / 8]; v60 != i; ++i )
    {
      v64 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v64 + 12) == v57 && a2 == v64 )
          goto LABEL_119;
      }
      else if ( !v64 )
      {
        goto LABEL_69;
      }
    }
  }
  for ( ; v62 != v58; ++v58 )
  {
    v133 = *v58;
    if ( (unsigned __int64)*v58 > 1 )
    {
      if ( *(_DWORD *)(v133 + 12) == v57 && a2 == v133 )
        goto LABEL_119;
    }
    else if ( !v133 )
    {
      break;
    }
  }
LABEL_69:
  v65 = *(_QWORD *)(a1 + 8);
  v66 = *(_QWORD *)(a1 + 144);
  sub_1584DD0(v170, v65, 0);
  v170[0] = (__int64)&off_1C53CD8;
  v175 = v66;
  v176 = 0;
  v177 = 0;
  sub_1584DD0(v178, v65, 0);
  v178[18] = 0;
  v179 = 0;
  v178[0] = &off_1C61DB8;
  sub_1584DD0(v180, v65, 0);
  v183 = v65;
  v185 = v65;
  v67 = v173;
  v187 = v65;
  v68 = *(__int64 **)(a1 + 96);
  v180[0] = &off_1C61DE0;
  v69 = *(unsigned int *)(a1 + 104);
  v181 = 0;
  v70 = v174;
  v182 = 0;
  v71 = &v68[v69];
  v184 = 0;
  v186 = 0;
  v188 = 0;
  v158 = v172;
  if ( v68 != v71 )
  {
    while ( (unsigned __int64)*v68 <= 1 )
    {
      if ( v71 == ++v68 )
        goto LABEL_135;
    }
    if ( v71 != v68 )
    {
      v72 = *v68;
      while ( 1 )
      {
        v73 = 2 * v158;
        if ( 3 * v158 < 4 * (v70 + v67) )
        {
          v123 = v73;
          v165 = v71;
          v158 *= 2;
          v161 = 8LL * v73;
          v124 = (_QWORD *)sub_186B270(v161);
          v125 = v158;
          v76 = v161;
          v74 = v124;
          v71 = v165;
          if ( v158 )
          {
            memset(v124, 0, 8 * v123);
            v71 = v165;
            v76 = v161;
            v125 = v158;
          }
          v75 = v125 - 1;
          v77 = (char *)v74 + v76;
          v126 = (char *)ptr;
          v127 = (char *)ptr + 8 * v172;
          if ( ptr != v127 )
          {
            do
            {
              if ( *(_QWORD *)v126 > 1u )
              {
                v128 = 8LL * (*(_DWORD *)(*(_QWORD *)v126 + 12LL) & v75);
                v129 = &v74[(unsigned __int64)v128 / 8];
                if ( v76 == v128 )
                {
LABEL_166:
                  if ( v74 == v129 )
                  {
LABEL_188:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v130 = v74;
                  while ( *v130 )
                  {
                    if ( v129 == ++v130 )
                      goto LABEL_188;
                  }
                }
                else
                {
                  v130 = &v74[(unsigned __int64)v128 / 8];
                  while ( *v130 )
                  {
                    if ( v77 == (char *)++v130 )
                      goto LABEL_166;
                  }
                }
                *v130 = *(_QWORD *)v126;
              }
              v126 += 8;
            }
            while ( v127 != v126 );
            v127 = (char *)ptr;
          }
          if ( v127 )
          {
            v167 = v125;
            v166 = v76;
            v164 = v125 - 1;
            v162 = v71;
            sub_186B220(v127);
            v125 = v167;
            v76 = v166;
            v75 = v164;
            v71 = v162;
          }
          ptr = v74;
          v70 = 0;
          v172 = v125;
          v174 = 0;
        }
        else
        {
          v74 = ptr;
          v75 = v158 - 1;
          v76 = 8LL * v158;
          v77 = (char *)ptr + v76;
        }
        v78 = *(_DWORD *)(v72 + 12);
        v79 = 8LL * (v78 & v75);
        v80 = &v74[(unsigned __int64)v79 / 8];
        if ( v79 != v76 )
        {
          v81 = &v74[(unsigned __int64)v79 / 8];
          v82 = nullptr;
          while ( 1 )
          {
            v83 = *v81;
            if ( *v81 > 1u )
            {
              if ( *(_DWORD *)(v83 + 12) == v78 && v83 == v72 )
              {
                *v81 = v72;
                v67 = v173;
                goto LABEL_130;
              }
            }
            else
            {
              if ( !v83 )
              {
                if ( v82 )
                  goto LABEL_176;
                v82 = v81;
                goto LABEL_177;
              }
              v82 = v81;
            }
            if ( ++v81 == (_QWORD *)v77 )
              goto LABEL_89;
          }
        }
        v82 = nullptr;
        while ( 1 )
        {
LABEL_89:
          if ( v80 == v74 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v85 = *v74;
          if ( *v74 <= 1u )
            break;
          if ( *(_DWORD *)(v85 + 12) == v78 && v85 == v72 )
          {
            *v74 = v72;
            v67 = v173;
            goto LABEL_130;
          }
LABEL_88:
          ++v74;
        }
        if ( v85 )
          break;
        if ( v82 )
LABEL_176:
          v174 = --v70;
        else
          v82 = v74;
LABEL_177:
        v131 = v173;
        *v82 = v72;
        v67 = v131 + 1;
        v173 = v131 + 1;
LABEL_130:
        v108 = v68 + 1;
        if ( v71 != v68 + 1 )
        {
          while ( 1 )
          {
            v72 = *v108;
            v68 = v108;
            if ( (unsigned __int64)*v108 > 1 )
              break;
            if ( v71 == ++v108 )
              goto LABEL_135;
          }
          if ( v71 != v108 )
            continue;
        }
        goto LABEL_135;
      }
      v82 = v74;
      goto LABEL_88;
    }
  }
LABEL_135:
  v109 = 2 * v158;
  if ( 3 * v158 < 4 * (v67 + v70) )
  {
    v146 = v109;
    v159 = 2 * v158;
    v112 = 8LL * v109;
    v147 = (_QWORD *)sub_186B270(v112);
    v148 = v159;
    v110 = v147;
    if ( v159 )
    {
      memset(v147, 0, 8 * v146);
      v148 = v159;
    }
    v149 = ptr;
    v111 = v148 - 1;
    v113 = &v110[v112 / 8];
    v150 = (char *)ptr + 8 * v172;
    v151 = (char *)ptr;
    if ( ptr != v150 )
    {
      do
      {
        if ( *(_QWORD *)v151 > 1u )
        {
          v152 = 8LL * (*(_DWORD *)(*(_QWORD *)v151 + 12LL) & (unsigned int)v111);
          v153 = &v110[(unsigned __int64)v152 / 8];
          if ( v112 == v152 )
          {
LABEL_216:
            if ( v110 == v153 )
            {
LABEL_231:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v154 = v110;
            while ( *v154 )
            {
              if ( v153 == ++v154 )
                goto LABEL_231;
            }
          }
          else
          {
            v154 = &v110[(unsigned __int64)v152 / 8];
            while ( *v154 )
            {
              if ( v113 == ++v154 )
                goto LABEL_216;
            }
          }
          *v154 = *(_QWORD *)v151;
        }
        v151 += 8;
      }
      while ( v150 != v151 );
      v149 = ptr;
    }
    if ( v149 )
    {
      v163 = v148;
      v160 = v148 - 1;
      sub_186B220(v149);
      v148 = v163;
      v111 = v160;
    }
    ptr = v110;
    v172 = v148;
    v174 = 0;
  }
  else
  {
    v110 = ptr;
    v111 = v158 - 1;
    v112 = 8LL * v158;
    v113 = (__int64 *)((char *)ptr + v112);
  }
  v114 = *(_DWORD *)(a2 + 12);
  v115 = 8LL * (v114 & (unsigned int)v111);
  v116 = &v110[(unsigned __int64)v115 / 8];
  if ( v115 != v112 )
  {
    v117 = &v110[(unsigned __int64)v115 / 8];
    v118 = nullptr;
    while ( 1 )
    {
      v119 = *v117;
      if ( (unsigned __int64)*v117 > 1 )
      {
        if ( *(_DWORD *)(v119 + 12) == v114 && a2 == v119 )
        {
          *v117 = a2;
          goto LABEL_97;
        }
      }
      else
      {
        if ( !v119 )
        {
          if ( v118 )
            goto LABEL_226;
          v118 = v117;
          goto LABEL_227;
        }
        v118 = v117;
      }
      if ( ++v117 == v113 )
        goto LABEL_148;
    }
  }
  v118 = nullptr;
  while ( 1 )
  {
LABEL_148:
    if ( v116 == v110 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v120 = *v110;
    if ( *v110 <= 1u )
      break;
    if ( *(_DWORD *)(v120 + 12) == v114 && a2 == v120 )
    {
      *v110 = a2;
      goto LABEL_97;
    }
LABEL_147:
    ++v110;
  }
  if ( v120 )
  {
    v118 = v110;
    goto LABEL_147;
  }
  if ( v118 )
LABEL_226:
    --v174;
  else
    v118 = v110;
LABEL_227:
  *v118 = a2;
  ++v173;
LABEL_97:
  v86 = *(_QWORD *)(a1 + 8);
  v87 = *(_QWORD *)(a1 + 480);
  v168 = 0;
  v169 = v86;
  sub_773AA0(v170, v87, &v168, a1 + 496);
  v88 = v168;
  v89 = *(_QWORD *)(a1 + 480);
  v90 = v169;
  if ( v89 == v168 )
  {
    if ( v168 )
    {
      v93 = *(_DWORD *)(v168 + 8) - 1;
      goto LABEL_103;
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
LABEL_103:
      *(_DWORD *)(v88 + 8) = v93;
      if ( !v93 )
        sub_15D7BC0(v90, v88);
    }
  }
  v170[0] = (__int64)&off_1C53CD8;
  if ( v188 )
    sub_186B220((void *)(v188 - 8));
  v94 = v186;
  if ( v186 )
  {
    v95 = v187;
    v92 = (*(_DWORD *)(v186 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v95, v94);
  }
  v96 = v184;
  if ( v184 )
  {
    v97 = v185;
    v92 = (*(_DWORD *)(v184 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v97, v96);
  }
  v98 = v182;
  if ( v182 )
  {
    v99 = v183;
    v92 = (*(_DWORD *)(v182 + 8))-- == 1;
    if ( v92 )
      sub_15D7BC0(v99, v98);
  }
  v180[0] = &qword_1C637E8;
  sub_15841B0(v180);
  v178[0] = &qword_1C637E8;
  sub_15841B0(v178);
  if ( v177 )
    sub_186B220((void *)(v177 - 8));
  sub_15841B0(v170);
LABEL_119:
  v100 = *(_QWORD *)(a1 + 480);
  if ( a2 == v100 )
    goto LABEL_124;
  v101 = *(_QWORD *)(a1 + 40);
  if ( v101 )
  {
    v102 = *(_DWORD *)(v101 - 4);
    if ( v102 )
      *(_BYTE *)(v101 + 16LL * (unsigned int)(v102 - 1) + 8) |= 2u;
  }
  if ( v100 )
LABEL_124:
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
      goto LABEL_128;
    }
    v134 = (3 * v104 + 1) >> 1;
    v135 = 8 * v134 + 8;
    if ( 8 * v104 + 8 < v135 && v104 < v134 )
    {
      v136 = (unsigned int *)sub_186B300(v103 - 1, v135);
      v137 = v136[1];
      v103 = v136 + 2;
      *v136 = v134;
      *(_QWORD *)(a1 + 56) = v136 + 2;
      LODWORD(v136) = v137;
      v107 = &v103[v137];
      v106 = (_DWORD)v136 + 1;
      goto LABEL_128;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_76A180(v170, "Overflow encountered when expanding vector");
LABEL_239:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v170);
    sub_233E40((__int64)v170);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v155 = (_QWORD *)sub_186B270(0x18u);
  *v155 = 2;
  v106 = 1;
  v103 = v155 + 1;
  *(_QWORD *)(a1 + 56) = v103;
  v107 = v103;
LABEL_128:
  *v107 = v100;
  *((_DWORD *)v103 - 1) = v106;
  return 1;
}

