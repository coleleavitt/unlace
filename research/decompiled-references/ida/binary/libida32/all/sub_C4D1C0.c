__int64 __fastcall sub_C4D1C0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r15d
  __int64 v25; // r10
  __m128i *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __m128i *v30; // rsi
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  char v34; // al
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rdx
  int v44; // r9d
  unsigned int v45; // eax
  __int64 v46; // rbx
  bool v47; // cc
  const char *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r8
  unsigned __int64 v56; // r11
  __int64 v57; // r15
  bool v58; // al
  __int64 v59; // r11
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rdi
  char v62; // al
  char v63; // al
  unsigned __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r11
  __int64 v68; // r10
  bool v69; // al
  char v70; // al
  bool v71; // al
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned int v76; // eax
  _BYTE *v77; // rdx
  unsigned __int64 v78; // rcx
  char v79; // al
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  _BOOL8 v83; // rax
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // r8
  unsigned int v88; // eax
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned int v96; // r15d
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // al
  __int64 v100; // r9
  __int64 v101; // r10
  unsigned int v102; // eax
  unsigned __int8 **v103; // rax
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned int v107; // ecx
  char v108; // al
  __int64 v109; // rsi
  __int64 v110; // rdi
  unsigned int v111; // eax
  __int64 v112; // rdi
  bool v113; // zf
  __m128i *v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // r15
  __int64 v117; // r14
  bool v118; // al
  __int64 v119; // rdi
  unsigned int *v120; // r15
  _QWORD *v121; // rax
  __int64 v122; // rdx
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int128 v125; // [rsp-30h] [rbp-2B8h]
  __m128i *v126; // [rsp-10h] [rbp-298h]
  __int64 v127; // [rsp-8h] [rbp-290h]
  __int64 v128; // [rsp+0h] [rbp-288h]
  _DWORD *v129; // [rsp+0h] [rbp-288h]
  __int64 v130; // [rsp+0h] [rbp-288h]
  __int64 v131; // [rsp+0h] [rbp-288h]
  __int64 v132; // [rsp+8h] [rbp-280h]
  unsigned int v133; // [rsp+14h] [rbp-274h]
  _QWORD *v134; // [rsp+18h] [rbp-270h]
  __int64 v135; // [rsp+18h] [rbp-270h]
  __int64 v136; // [rsp+18h] [rbp-270h]
  _WORD *v137; // [rsp+18h] [rbp-270h]
  __m128i **v138; // [rsp+20h] [rbp-268h]
  __int64 v139; // [rsp+28h] [rbp-260h]
  __int64 v140; // [rsp+28h] [rbp-260h]
  __int64 v141; // [rsp+28h] [rbp-260h]
  unsigned int v142; // [rsp+28h] [rbp-260h]
  __int64 v143; // [rsp+30h] [rbp-258h]
  __int64 v144; // [rsp+30h] [rbp-258h]
  __int64 v145; // [rsp+30h] [rbp-258h]
  __int64 v146; // [rsp+40h] [rbp-248h]
  unsigned __int64 v147; // [rsp+40h] [rbp-248h]
  __int64 v148; // [rsp+40h] [rbp-248h]
  __int64 v149; // [rsp+48h] [rbp-240h]
  unsigned __int64 v150; // [rsp+48h] [rbp-240h]
  __int64 v151; // [rsp+48h] [rbp-240h]
  __int64 v152; // [rsp+48h] [rbp-240h]
  unsigned __int64 v153; // [rsp+48h] [rbp-240h]
  __int64 v154; // [rsp+48h] [rbp-240h]
  unsigned __int64 v155; // [rsp+50h] [rbp-238h]
  _QWORD *v156; // [rsp+50h] [rbp-238h]
  unsigned __int64 v157; // [rsp+50h] [rbp-238h]
  __int64 v158; // [rsp+50h] [rbp-238h]
  unsigned __int64 v159; // [rsp+50h] [rbp-238h]
  __int64 v160; // [rsp+50h] [rbp-238h]
  unsigned __int64 v161; // [rsp+58h] [rbp-230h]
  __int64 v162; // [rsp+58h] [rbp-230h]
  unsigned int v163; // [rsp+60h] [rbp-228h] BYREF
  char v164; // [rsp+64h] [rbp-224h]
  __int64 v165; // [rsp+68h] [rbp-220h] BYREF
  unsigned int v166; // [rsp+70h] [rbp-218h]
  char v167; // [rsp+74h] [rbp-214h]
  __int64 v168; // [rsp+78h] [rbp-210h] BYREF
  __int64 v169; // [rsp+80h] [rbp-208h] BYREF
  __m128i v170; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v171; // [rsp+B0h] [rbp-1D8h]
  char v172; // [rsp+B8h] [rbp-1D0h]
  __int64 v173; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v175; // [rsp+D8h] [rbp-1B0h]
  _BYTE v176[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v177; // [rsp+120h] [rbp-168h]
  char v178; // [rsp+121h] [rbp-167h]
  char *v179[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v180; // [rsp+140h] [rbp-148h]
  char v181; // [rsp+148h] [rbp-140h]
  __int64 v182; // [rsp+158h] [rbp-130h]
  void *v183; // [rsp+160h] [rbp-128h]
  __int64 v184; // [rsp+168h] [rbp-120h]
  _BYTE v185[64]; // [rsp+170h] [rbp-118h] BYREF
  char v186; // [rsp+1B0h] [rbp-D8h]
  char v187; // [rsp+1B1h] [rbp-D7h]
  __m128i v188; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v189; // [rsp+1D0h] [rbp-B8h] BYREF
  char v190; // [rsp+1D8h] [rbp-B0h]
  __int64 v191; // [rsp+1E8h] [rbp-A0h]
  void *v192; // [rsp+1F0h] [rbp-98h]
  __int64 v193; // [rsp+1F8h] [rbp-90h]
  _BYTE v194[136]; // [rsp+200h] [rbp-88h] BYREF

  v3 = a2;
  v4 = sub_BD8130(a2);
  if ( v4 )
  {
    v48 = (const char *)sub_F99770(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v48, 69) )
    {
      if ( (unsigned int)sub_BD8130(v3) == 213
        && (v77 = (_BYTE *)a1[1],
            v78 = *a1,
            *v77 = 0,
            v79 = *(_BYTE *)(v3 + 2),
            v188.m128i_i64[0] = v78,
            v188.m128i_i64[1] = (__int64)(v77 + 40),
            (unsigned __int8)sub_C46FB0(
                               (__int64 **)&v188,
                               *(_QWORD *)(v3 + 8 * (((v79 & 8) != 0) + 1LL) + 32),
                               (__int64)(v77 + 40),
                               v78,
                               v49,
                               v50)) )
      {
        v82 = a1[1] + 64;
        v83 = (*(_BYTE *)(v3 + 2) & 8) != 0;
        v188.m128i_i64[0] = *a1;
        v188.m128i_i64[1] = v82;
        return (unsigned int)sub_C46FB0(
                               (__int64 **)&v188,
                               *(_QWORD *)(v3 + 8 * (v83 + 1) + 40),
                               v82,
                               v188.m128i_u64[0],
                               v80,
                               v81);
      }
      else
      {
        return 0;
      }
    }
  }
  v5 = *a1;
  v163 = 0;
  v164 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v133 = *(_DWORD *)(v5 + 272);
  v7 = *(unsigned int *)(v6 + 148);
  v8 = *(_DWORD *)(v6 + 160) + 1;
  v9 = *(unsigned int *)(v6 + 144);
  *(_DWORD *)(v6 + 160) = v8;
  if ( v9 + 1 > v7 )
  {
    a2 = v6 + 152;
    sub_22134E0(v6 + 136, v6 + 152, v9 + 1, 4);
    v9 = *(unsigned int *)(v6 + 144);
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 136) + 4 * v9) = v8;
  v10 = *(_QWORD *)(v3 + 32);
  ++*(_DWORD *)(v6 + 144);
  v11 = sub_BD7CB0(v10);
  v132 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v176;
  v175 = 0x800000000LL;
  v17 = *(unsigned int *)(v3 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v171 = 0;
  v139 = v17;
  LOBYTE(v17) = *(_BYTE *)(v3 + 2);
  v172 |= 1u;
  v173 = 0;
  v178 = 0;
  v170 = 0u;
  v138 = (__m128i **)(v3 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v136 = v16;
    if ( !sub_BF8240(*v18, a2, v12, v13) )
    {
      v24 = sub_BF05D0(*a1, v3);
      goto LABEL_27;
    }
    v179[0] = nullptr;
    v183 = v185;
    v184 = 0x800000000LL;
    v52 = *a1;
    v53 = v136;
    v179[1] = nullptr;
    v180 = 0;
    v181 |= 1u;
    v182 = 0;
    v187 = 0;
    v188.m128i_i64[0] = v52;
    v188.m128i_i64[1] = (__int64)v179;
    LOBYTE(v189) = 0;
    v24 = sub_C24FB0(&v188, v136, v43, (__int64)v179, v136, v44);
    if ( !(_BYTE)v24 )
      goto LABEL_73;
    v54 = *a1;
    v55 = v136;
    if ( v180 )
      goto LABEL_72;
    LOBYTE(v135) = v186 & 1;
    if ( (v186 & 1) != 0 )
    {
      v130 = v55;
      v103 = (unsigned __int8 **)sub_E0FED0(v54, v55, 2460, 0);
      if ( v103 )
        sub_AC60B0(v103, v130, 0xFu);
      goto LABEL_98;
    }
    if ( !v179[0]
      || ((__int64)v179[0] & 3) != 0
      || (v56 = (unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFFCLL,
          v147 = (unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(v56 + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_72:
      v24 = sub_BF05D0(v54, v55);
      goto LABEL_73;
    }
    v57 = *(_QWORD *)(v54 + 16);
    v155 = (unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFFCLL;
    v149 = *(_QWORD *)(v56 + 48);
    v30 = (__m128i *)sub_F44710(*v18, v53, v149, v22, v55);
    v58 = sub_A5E750(v57, (__int64)v30, v149);
    v59 = v155;
    v60 = v147;
    if ( !v58 )
    {
      v24 = sub_BF05D0(*a1, v3);
      goto LABEL_73;
    }
    if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
    {
      v61 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v61 == 15 || (_DWORD)v61 == 20 || (v62 = sub_BEC850(v61), v60 = v147, v59 = v155, v62) )
      {
        v104 = *a1;
        v131 = v59;
        v105 = *(_QWORD *)(*a1 + 32);
        v106 = (unsigned int)(*(_DWORD *)(v105 + 160) + 1);
        v107 = *(_DWORD *)(v105 + 128);
        *(_DWORD *)(v105 + 160) = v106;
        v132 = (v106 << 32) | v107;
        if ( (*(_BYTE *)(v59 + 28) & 0x7Fu) - 35 <= 3
          && (v153 = v60,
              v148 = v59,
              v108 = sub_B744C0((_QWORD *)v59, 0xFFFFFFFF00000000LL),
              v104 = *a1,
              v59 = v148,
              v60 = v153,
              v108) )
        {
          v109 = v139 - 1;
          v110 = (__int64)(v138 + 1);
        }
        else
        {
          v109 = v139;
          v110 = (__int64)v138;
        }
        v159 = v60;
        v146 = v59;
        v111 = sub_C339F0(v110, v109, v131, v132, v104, v59, 1, (__int64)&v170);
        v30 = v126;
        v24 = v111;
        if ( !(_BYTE)v111 )
          goto LABEL_73;
        v59 = v146;
        v60 = v159;
        v150 = v3;
      }
      else
      {
        v150 = v3;
        v146 = 0;
      }
    }
    else
    {
      v146 = 0;
      v150 = 0;
    }
    if ( (*(_BYTE *)(v59 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v161 = v60;
      v156 = (_QWORD *)v59;
      v63 = sub_B744C0((_QWORD *)v59, (__int64)v30);
      v67 = (__int64)v156;
      v68 = v161;
      if ( v63 || v150 && (v69 = sub_B73CB0(v156), v67 = (__int64)v156, v68 = v161, v69) )
      {
        v112 = *a1;
        if ( !v139 )
        {
          v24 = sub_BF05D0(v112, v3);
          goto LABEL_73;
        }
        v162 = v67;
        v160 = v68;
        v30 = *v138;
        v24 = sub_C3A250(v112, *v138, (__int64)&v170, v64, v65, v66);
        if ( !(_BYTE)v24 )
          goto LABEL_73;
        v113 = !sub_B73CB0((_QWORD *)v162);
        v114 = nullptr;
        if ( v113 )
          v114 = &v170;
        v26 = v114;
        v115 = sub_E0E500(*a1);
        v25 = v160;
        if ( *(char *)(v115 + 1) < 0 && v150 && ((*(_BYTE *)(v150 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v162 + 82) < 0 )
        {
          v24 = v177;
          LOBYTE(v24) = (v177 & 2) != 0;
          if ( (v177 & 2) != 0 )
            goto LABEL_98;
          if ( (v172 & 1) != 0 )
            goto LABEL_73;
          v30 = *v138;
          v124 = sub_C10450(*a1, (__int64)*v138, (unsigned __int64)&v170, v22, v23);
          v25 = v160;
          v24 = v124;
          if ( !(_BYTE)v124 )
            goto LABEL_73;
        }
        --v139;
        ++v138;
        goto LABEL_112;
      }
      v157 = v68;
      v151 = v67;
      v70 = sub_B74C10(v67);
      v59 = v151;
      v60 = v157;
      if ( v70 )
      {
        v116 = sub_B4E950(v151 + 72);
        if ( v116 )
          v116 -= 64LL;
        v117 = sub_B73220(v116);
        v118 = sub_B731B0(v116);
        v25 = v117;
        v26 = nullptr;
        if ( v118 )
        {
          v119 = v151;
          v154 = v25;
          v120 = (unsigned int *)sub_B53E10(v119);
          v121 = (_QWORD *)sub_B53CF0(v154);
          v122 = *v120;
          v30 = (__m128i *)(v120 + 2);
          v188.m128i_i64[0] = 0;
          v25 = sub_B9FDF0(v121, (__int64)(v120 + 2), v122, (__int64)&v188);
        }
        goto LABEL_112;
      }
    }
    v30 = nullptr;
    v152 = v59;
    v158 = v60;
    if ( sub_B523A0(v59, nullptr, nullptr) )
    {
      v188.m128i_i64[0] = *(_QWORD *)(v152 + 40);
      v71 = sub_BF9580(&v188);
      v73 = *a1;
      if ( v71 )
      {
        v188 = 0u;
        v192 = v194;
        v189 = 0;
        v190 |= 1u;
        v191 = 0;
        v193 = 0x800000000LL;
        v194[65] = 0;
        v24 = *(unsigned __int8 *)(v73 + 914);
        if ( !(_BYTE)v24 )
        {
          v22 = *(unsigned int *)(v73 + 900);
          if ( !(_DWORD)v22 )
          {
            v24 = sub_C238B0(v73, v3, (__int64)&v188);
            if ( (_BYTE)v24 )
            {
              sub_BEBB50((__int64)&v188, (__int64)&v163);
              v76 = sub_C325E0(v5, 1, v133, v74, v75);
              v133 = -1;
              v24 = v76;
            }
            if ( v192 != v194 )
              free(v192);
          }
          goto LABEL_73;
        }
LABEL_98:
        v24 = 0;
        goto LABEL_73;
      }
      v24 = sub_C28670(v73, v3, v72, v22, v23);
      if ( (_BYTE)v24 )
      {
        v123 = sub_C325E0(v5, 1, v133, v22, v23);
        v133 = -1;
        v24 = v123;
      }
LABEL_73:
      v42 = v183;
      if ( v183 != v185 )
      {
LABEL_74:
        free(v42);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v25 = v158;
    v26 = nullptr;
LABEL_112:
    if ( v183 != v185 )
    {
      v145 = v25;
      free(v183);
      v25 = v145;
    }
    if ( v146 )
    {
LABEL_12:
      v188.m128i_i64[0] = (__int64)&v189;
      v188.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v140 = v25;
          v24 = (unsigned __int8)v135;
          LOBYTE(v24) = !sub_AC9870(v25) | v135;
          if ( (_BYTE)v24 )
          {
            v34 = sub_B744C0((_QWORD *)v140, (__int64)v30);
            v25 = v140;
            if ( v34 )
            {
              v24 = sub_C0F160(*a1, (_DWORD *)v3, v26, 4 * (unsigned int)((*(_BYTE *)(v140 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_23;
              v25 = v140;
            }
          }
          else
          {
            v25 = sub_C0FF80(*a1, (_DWORD *)v3, v26, v140, (__int64)&v188);
            if ( !v25 )
              goto LABEL_23;
          }
          v33 = *(_BYTE *)(v25 + 28) & 0x7F;
        }
      }
      if ( v33 == 36 )
      {
        v35 = *(_QWORD *)(*a1 + 16);
        v36 = sub_B4E950(v25 + 72);
        v40 = v36 - 64;
        if ( v36 )
          v36 -= 64LL;
        v41 = sub_A56C90(v35, v36, v40, v37, v38, v39);
        v24 = sub_C30630(*a1, (_DWORD *)v3, v26, v41);
        if ( !(_BYTE)v24 )
          goto LABEL_23;
      }
      else
      {
        v141 = v25;
        v179[0] = nullptr;
        v137 = (_WORD *)sub_B5BA10((_QWORD *)v25, v179, v32, v22, v23, v31);
        v96 = sub_BDCD00(v3, (__int64)v179, v93, v94, v95);
        v99 = sub_B53480(v141, (__int64)v179, v97, v98);
        v101 = v141;
        v142 = v96;
        if ( v99 )
          v26 = &v170;
        v24 = sub_BF9920(*a1, v96, v101, v179[0], (__int64)v137, v100);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v125 + 1) = v132,
              *(_QWORD *)&v125 = v146,
              v24 = sub_C33320(v142, (__int64)v179[0], v26, v3, (_DWORD **)v138, v137, v125, *a1, (__int64)&v163, 0),
              !(_BYTE)v24)
          || (v23 = v188.m128i_u32[2], v188.m128i_i32[2])
          && (v24 = sub_C0A6A0(*a1, v3, (__int64)&v163, v188.m128i_i64[0], v188.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_23:
          v42 = (void *)v188.m128i_i64[0];
          if ( (__int64 *)v188.m128i_i64[0] == &v189 )
            goto LABEL_27;
          goto LABEL_74;
        }
      }
      v102 = sub_C325E0(v5, 1, v133, v22, v23);
      v133 = -1;
      v24 = v102;
      goto LABEL_23;
    }
    v20 = *a1;
    goto LABEL_10;
  }
  v20 = *a1;
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v134 = (_QWORD *)v16;
    v24 = sub_C3A250(v20, *(__m128i **)(v16 + 16), (__int64)&v170, v13, v16, v14);
    if ( !(_BYTE)v24 )
      goto LABEL_27;
    v16 = (__int64)v134;
    v20 = *a1;
    v25 = v134[3];
    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v26 = &v170;
      v135 = (*v134 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_86:
    v24 = sub_BF05D0(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v128 = v16;
      v84 = sub_E0E500(v20);
      v87 = v128;
      if ( *(char *)(v84 + 1) >= 0 )
      {
        sub_E0FF50(*a1, v128, 2480, 0);
        v87 = v128;
      }
      v129 = (_DWORD *)v87;
      v88 = sub_C3A250(*a1, *(__m128i **)(v87 + 16), (__int64)&v170, v85, v87, v86);
      v23 = (__int64)v129;
      v24 = v88;
      if ( (_BYTE)v88 )
      {
        v89 = sub_C703D0(v129);
        v24 = sub_C30630(*a1, v129, &v170, v89);
      }
      goto LABEL_27;
    }
    goto LABEL_86;
  }
  v144 = v16;
  v90 = sub_C3A3B0(v20, v16, (__int64)&v170, 0, v16, v14);
  v25 = v90;
  if ( !v90 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v20 = *a1;
  LOBYTE(v135) = 0;
  v26 = &v170;
  v16 = v144;
  if ( (*(_BYTE *)(v90 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_86;
LABEL_10:
  v27 = *(_QWORD *)(v20 + 32);
  v28 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
  v29 = *(_DWORD *)(v27 + 128);
  *(_DWORD *)(v27 + 160) = v28;
  v132 = (v28 << 32) | v29;
  v30 = (__m128i *)v139;
  v143 = v25;
  v24 = sub_C339F0((__int64)v138, v139, v25, v132, v20, v25, 0, (__int64)&v170);
  v32 = v127;
  if ( (_BYTE)v24 )
  {
    v25 = v143;
    v146 = v143;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v176 )
    free(ptr);
  if ( v133 != -1 )
    sub_C325E0(v5, 0, v133, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  v45 = v163;
  if ( (_BYTE)v24 )
  {
    v46 = a1[1];
    if ( v163 == 6 )
    {
      *(_BYTE *)v46 = 0;
      sub_BF34E0((__int64 *)(v46 + 40), &v165);
      sub_BF34E0((__int64 *)(v46 + 64), &v169);
      v45 = v163;
    }
    else
    {
      v47 = *(_DWORD *)(v46 + 16) <= 0x40u;
      *(_BYTE *)v46 = 1;
      if ( v47 && v166 <= 0x40 )
      {
        v92 = v165;
        *(_DWORD *)(v46 + 16) = v166;
        *(_QWORD *)(v46 + 8) = v92;
      }
      else
      {
        sub_21E1960(v46 + 8, &v165);
      }
      v47 = *(_DWORD *)(v46 + 32) <= 0x40u;
      *(_BYTE *)(v46 + 20) = v167;
      if ( v47 && (unsigned int)v169 <= 0x40 )
      {
        v91 = v168;
        *(_DWORD *)(v46 + 32) = v169;
        *(_QWORD *)(v46 + 24) = v91;
      }
      else
      {
        sub_21E1960(v46 + 24, &v168);
      }
      *(_BYTE *)(v46 + 36) = BYTE4(v169);
      v45 = v163;
    }
  }
  if ( v45 > 1 )
    sub_A2BBA0((int *)&v163);
  return v24;
}

