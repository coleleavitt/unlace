__int64 __fastcall sub_C5A5D0(__m128i *a1, __int64 a2)
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
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // r15d
  __int64 v26; // r10
  __m128i *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  char v35; // al
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rdx
  int v45; // r9d
  const char *v46; // rax
  unsigned int v47; // eax
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // r8
  unsigned __int64 v52; // r11
  __int64 v53; // r15
  bool v54; // al
  __int64 v55; // r11
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // rdi
  char v58; // al
  char v59; // al
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r11
  __int64 v64; // r10
  bool v65; // al
  char v66; // al
  bool v67; // al
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // eax
  unsigned int v73; // r13d
  __int64 v74; // r12
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r14
  __int64 v81; // rsi
  char v82; // r8
  __int64 v83; // r9
  int v84; // eax
  int v85; // eax
  int v86; // edx
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // r8
  unsigned int v91; // eax
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned int v97; // r15d
  __int64 v98; // rdx
  __int64 v99; // rcx
  char v100; // al
  __int64 v101; // r9
  __int64 v102; // r10
  unsigned int v103; // eax
  unsigned __int8 **v104; // rax
  unsigned __int8 **v105; // rax
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // ecx
  char v110; // al
  __int64 v111; // rdi
  unsigned int v112; // eax
  __int64 v113; // rdi
  bool v114; // zf
  __m128i *v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // r15
  __int64 v118; // r14
  bool v119; // al
  __int64 v120; // rdi
  unsigned int *v121; // r15
  _QWORD *v122; // rax
  __int64 v123; // rdx
  unsigned int v124; // eax
  unsigned int v125; // eax
  __int128 v126; // [rsp-30h] [rbp-2B8h]
  __int64 v127; // [rsp-10h] [rbp-298h]
  unsigned __int64 v128; // [rsp-8h] [rbp-290h]
  __int64 v129; // [rsp-8h] [rbp-290h]
  __int64 v130; // [rsp+0h] [rbp-288h]
  _DWORD *v131; // [rsp+0h] [rbp-288h]
  __int64 v132; // [rsp+0h] [rbp-288h]
  __int64 v133; // [rsp+0h] [rbp-288h]
  __int64 v134; // [rsp+8h] [rbp-280h]
  unsigned int v135; // [rsp+14h] [rbp-274h]
  _QWORD *v136; // [rsp+18h] [rbp-270h]
  __int64 v137; // [rsp+18h] [rbp-270h]
  __int64 v138; // [rsp+18h] [rbp-270h]
  _WORD *v139; // [rsp+18h] [rbp-270h]
  __m128i **v140; // [rsp+20h] [rbp-268h]
  __int64 v141; // [rsp+28h] [rbp-260h]
  __int64 v142; // [rsp+28h] [rbp-260h]
  __int64 v143; // [rsp+28h] [rbp-260h]
  unsigned int v144; // [rsp+28h] [rbp-260h]
  __int64 v145; // [rsp+30h] [rbp-258h]
  __int64 v146; // [rsp+30h] [rbp-258h]
  __int64 v147; // [rsp+30h] [rbp-258h]
  __int64 v148; // [rsp+40h] [rbp-248h]
  unsigned __int64 v149; // [rsp+40h] [rbp-248h]
  __int64 v150; // [rsp+40h] [rbp-248h]
  __int64 v151; // [rsp+48h] [rbp-240h]
  unsigned __int64 v152; // [rsp+48h] [rbp-240h]
  __int64 v153; // [rsp+48h] [rbp-240h]
  __int64 v154; // [rsp+48h] [rbp-240h]
  unsigned __int64 v155; // [rsp+48h] [rbp-240h]
  __int64 v156; // [rsp+48h] [rbp-240h]
  unsigned __int64 v157; // [rsp+50h] [rbp-238h]
  _QWORD *v158; // [rsp+50h] [rbp-238h]
  unsigned __int64 v159; // [rsp+50h] [rbp-238h]
  __int64 v160; // [rsp+50h] [rbp-238h]
  unsigned __int64 v161; // [rsp+50h] [rbp-238h]
  __int64 v162; // [rsp+50h] [rbp-238h]
  unsigned __int64 v163; // [rsp+58h] [rbp-230h]
  __int64 v164; // [rsp+58h] [rbp-230h]
  unsigned int v165; // [rsp+60h] [rbp-228h] BYREF
  char v166; // [rsp+64h] [rbp-224h]
  __m128i v167; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v168; // [rsp+B0h] [rbp-1D8h]
  char v169; // [rsp+B8h] [rbp-1D0h]
  __int64 v170; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v172; // [rsp+D8h] [rbp-1B0h]
  _BYTE v173[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v174; // [rsp+120h] [rbp-168h]
  char v175; // [rsp+121h] [rbp-167h]
  char *v176[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v177; // [rsp+140h] [rbp-148h]
  char v178; // [rsp+148h] [rbp-140h]
  __int64 v179; // [rsp+158h] [rbp-130h]
  void *v180; // [rsp+160h] [rbp-128h]
  __int64 v181; // [rsp+168h] [rbp-120h]
  _BYTE v182[64]; // [rsp+170h] [rbp-118h] BYREF
  char v183; // [rsp+1B0h] [rbp-D8h]
  char v184; // [rsp+1B1h] [rbp-D7h]
  __m128i v185; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v186; // [rsp+1D0h] [rbp-B8h] BYREF
  char v187; // [rsp+1D8h] [rbp-B0h]
  __int64 v188; // [rsp+1E8h] [rbp-A0h]
  void *v189; // [rsp+1F0h] [rbp-98h]
  __int64 v190; // [rsp+1F8h] [rbp-90h]
  _BYTE v191[136]; // [rsp+200h] [rbp-88h] BYREF

  v3 = a2;
  v4 = sub_BD8130(a2);
  if ( v4 )
  {
    v46 = (const char *)sub_F99770(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v46, 69) )
    {
      v47 = sub_BD8130(v3);
      return (unsigned int)sub_C58BC0(a1, v3, v47);
    }
  }
  v5 = a1->m128i_i64[0];
  v165 = 0;
  v166 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v135 = *(_DWORD *)(v5 + 272);
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
  v134 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v173;
  v172 = 0x800000000LL;
  v17 = *(unsigned int *)(v3 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v168 = 0;
  v141 = v17;
  LOBYTE(v17) = *(_BYTE *)(v3 + 2);
  v169 |= 1u;
  v170 = 0;
  v175 = 0;
  v167 = 0u;
  v140 = (__m128i **)(v3 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v138 = v16;
    if ( !sub_BF8240(*v18, a2, v12, v13) )
    {
      v22 = v3;
      v25 = sub_BF05D0(a1->m128i_i64[0], v3);
      goto LABEL_27;
    }
    v176[0] = nullptr;
    v180 = v182;
    v181 = 0x800000000LL;
    v49 = a1->m128i_i64[0];
    v22 = v138;
    v176[1] = nullptr;
    v177 = 0;
    v178 |= 1u;
    v179 = 0;
    v184 = 0;
    v185.m128i_i64[0] = v49;
    v185.m128i_i64[1] = (__int64)v176;
    LOBYTE(v186) = 0;
    v25 = sub_C24FB0(&v185, v138, v44, (__int64)v176, v138, v45);
    if ( !(_BYTE)v25 )
      goto LABEL_64;
    v50 = a1->m128i_i64[0];
    v51 = v138;
    if ( v177 )
      goto LABEL_63;
    LOBYTE(v137) = v183 & 1;
    if ( (v183 & 1) != 0 )
    {
      v22 = v51;
      v132 = v51;
      v104 = (unsigned __int8 **)sub_E0FED0(v50, v51, 2460, 0);
      if ( v104 )
      {
        v22 = v132;
        sub_AC60B0(v104, v132, 0xFu);
      }
      goto LABEL_98;
    }
    if ( !v176[0]
      || ((__int64)v176[0] & 3) != 0
      || (v52 = (unsigned __int64)v176[0] & 0xFFFFFFFFFFFFFFFCLL,
          v149 = (unsigned __int64)v176[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v176[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(v52 + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_63:
      v22 = v51;
      v25 = sub_BF05D0(v50, v51);
      goto LABEL_64;
    }
    v53 = *(_QWORD *)(v50 + 16);
    v157 = (unsigned __int64)v176[0] & 0xFFFFFFFFFFFFFFFCLL;
    v151 = *(_QWORD *)(v52 + 48);
    v22 = sub_F44710(*v18, v22, v151, v23, v51);
    v54 = sub_A5E750(v53, v22, v151);
    v55 = v157;
    v56 = v149;
    if ( !v54 )
    {
      v22 = v3;
      v25 = sub_BF05D0(a1->m128i_i64[0], v3);
      goto LABEL_64;
    }
    if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
    {
      v57 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v57 == 15 || (_DWORD)v57 == 20 || (v58 = sub_BEC850(v57), v56 = v149, v55 = v157, v58) )
      {
        v106 = a1->m128i_i64[0];
        v133 = v55;
        v107 = *(_QWORD *)(a1->m128i_i64[0] + 32);
        v108 = (unsigned int)(*(_DWORD *)(v107 + 160) + 1);
        v109 = *(_DWORD *)(v107 + 128);
        *(_DWORD *)(v107 + 160) = v108;
        v134 = (v108 << 32) | v109;
        if ( (*(_BYTE *)(v55 + 28) & 0x7Fu) - 35 <= 3
          && (v155 = v56,
              v150 = v55,
              v110 = sub_B744C0((_QWORD *)v55, 0xFFFFFFFF00000000LL),
              v106 = a1->m128i_i64[0],
              v55 = v150,
              v56 = v155,
              v110) )
        {
          v22 = v141 - 1;
          v111 = (__int64)(v140 + 1);
        }
        else
        {
          v22 = v141;
          v111 = (__int64)v140;
        }
        v161 = v56;
        v148 = v55;
        v112 = sub_C339F0(v111, v22, v133, v134, v106, v55, 1, (__int64)&v167);
        v24 = v129;
        v25 = v112;
        if ( !(_BYTE)v112 )
          goto LABEL_64;
        v55 = v148;
        v56 = v161;
        v152 = v3;
      }
      else
      {
        v152 = v3;
        v148 = 0;
      }
    }
    else
    {
      v148 = 0;
      v152 = 0;
    }
    if ( (*(_BYTE *)(v55 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v163 = v56;
      v158 = (_QWORD *)v55;
      v59 = sub_B744C0((_QWORD *)v55, v22);
      v63 = (__int64)v158;
      v64 = v163;
      if ( v59 || v152 && (v65 = sub_B73CB0(v158), v63 = (__int64)v158, v64 = v163, v65) )
      {
        v113 = a1->m128i_i64[0];
        if ( !v141 )
        {
          v22 = v3;
          v25 = sub_BF05D0(v113, v3);
          goto LABEL_64;
        }
        v164 = v63;
        v162 = v64;
        v22 = (__int64)*v140;
        v25 = sub_C3A250(v113, *v140, (__int64)&v167, v60, v61, v62);
        if ( !(_BYTE)v25 )
          goto LABEL_64;
        v114 = !sub_B73CB0((_QWORD *)v164);
        v115 = nullptr;
        if ( v114 )
          v115 = &v167;
        v27 = v115;
        v116 = sub_E0E500(a1->m128i_i64[0]);
        v26 = v162;
        if ( *(char *)(v116 + 1) < 0 && v152 && ((*(_BYTE *)(v152 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v164 + 82) < 0 )
        {
          v25 = v174;
          LOBYTE(v25) = (v174 & 2) != 0;
          if ( (v174 & 2) != 0 )
            goto LABEL_98;
          if ( (v169 & 1) != 0 )
            goto LABEL_64;
          v22 = (__int64)*v140;
          v125 = sub_C10450(a1->m128i_i64[0], (__int64)*v140, (unsigned __int64)&v167, v23, v24);
          v26 = v162;
          v25 = v125;
          if ( !(_BYTE)v125 )
            goto LABEL_64;
        }
        --v141;
        ++v140;
        goto LABEL_115;
      }
      v159 = v64;
      v153 = v63;
      v66 = sub_B74C10(v63);
      v55 = v153;
      v56 = v159;
      if ( v66 )
      {
        v117 = sub_B4E950(v153 + 72);
        if ( v117 )
          v117 -= 64LL;
        v118 = sub_B73220(v117);
        v119 = sub_B731B0(v117);
        v26 = v118;
        v27 = nullptr;
        if ( v119 )
        {
          v120 = v153;
          v156 = v26;
          v121 = (unsigned int *)sub_B53E10(v120);
          v122 = (_QWORD *)sub_B53CF0(v156);
          v123 = *v121;
          v22 = (__int64)(v121 + 2);
          v185.m128i_i64[0] = 0;
          v26 = sub_B9FDF0(v122, (__int64)(v121 + 2), v123, (__int64)&v185);
        }
        goto LABEL_115;
      }
    }
    v22 = 0;
    v154 = v55;
    v160 = v56;
    if ( sub_B523A0(v55, nullptr, nullptr) )
    {
      v185.m128i_i64[0] = *(_QWORD *)(v154 + 40);
      v67 = sub_BF9580(&v185);
      v69 = a1->m128i_i64[0];
      if ( v67 )
      {
        v185 = 0u;
        v189 = v191;
        v186 = 0;
        v187 |= 1u;
        v188 = 0;
        v190 = 0x800000000LL;
        v191[65] = 0;
        v25 = *(unsigned __int8 *)(v69 + 914);
        if ( !(_BYTE)v25 )
        {
          v22 = *(unsigned int *)(v69 + 900);
          if ( !(_DWORD)v22 )
          {
            v22 = v3;
            v25 = sub_C238B0(v69, v3, (__int64)&v185);
            if ( (_BYTE)v25 )
            {
              sub_BEBB50((__int64)&v185, (__int64)&v165);
              v22 = 1;
              v72 = sub_C325E0(v5, 1, v135, v70, v71);
              v135 = -1;
              v25 = v72;
            }
            if ( v189 != v191 )
              free(v189);
          }
          goto LABEL_64;
        }
LABEL_98:
        v25 = 0;
        goto LABEL_64;
      }
      v22 = v3;
      v25 = sub_C28670(v69, v3, v68, v23, v24);
      if ( (_BYTE)v25 )
      {
        v22 = 1;
        v124 = sub_C325E0(v5, 1, v135, v23, v24);
        v135 = -1;
        v25 = v124;
      }
LABEL_64:
      v43 = v180;
      if ( v180 != v182 )
      {
LABEL_65:
        free(v43);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v26 = v160;
    v27 = nullptr;
LABEL_115:
    if ( v180 != v182 )
    {
      v147 = v26;
      free(v180);
      v26 = v147;
    }
    if ( v148 )
    {
LABEL_12:
      v185.m128i_i64[0] = (__int64)&v186;
      v185.m128i_i64[1] = 0x400000000LL;
      v34 = *(_BYTE *)(v26 + 28) & 0x7F;
      if ( v27 )
      {
        v33 = (unsigned int)v34 - 35;
        if ( (unsigned int)v33 <= 3 )
        {
          v142 = v26;
          v25 = (unsigned __int8)v137;
          LOBYTE(v25) = !sub_AC9870(v26) | v137;
          if ( (_BYTE)v25 )
          {
            v35 = sub_B744C0((_QWORD *)v142, v22);
            v26 = v142;
            if ( v35 )
            {
              v22 = v3;
              v25 = sub_C0F160(
                      a1->m128i_i64[0],
                      (_DWORD *)v3,
                      v27,
                      4 * (unsigned int)((*(_BYTE *)(v142 + 28) & 0x7F) == 36) + 5,
                      0);
              if ( !(_BYTE)v25 )
                goto LABEL_23;
              v26 = v142;
            }
          }
          else
          {
            v22 = v3;
            v26 = sub_C0FF80(a1->m128i_i64[0], (_DWORD *)v3, v27, v142, (__int64)&v185);
            if ( !v26 )
              goto LABEL_23;
          }
          v34 = *(_BYTE *)(v26 + 28) & 0x7F;
        }
      }
      if ( v34 == 36 )
      {
        v36 = *(_QWORD *)(a1->m128i_i64[0] + 16);
        v37 = sub_B4E950(v26 + 72);
        v41 = v37 - 64;
        if ( v37 )
          v37 -= 64LL;
        v42 = sub_A56C90(v36, v37, v41, v38, v39, v40);
        v22 = v3;
        v25 = sub_C30630(a1->m128i_i64[0], (_DWORD *)v3, v27, v42);
        if ( !(_BYTE)v25 )
          goto LABEL_23;
      }
      else
      {
        v143 = v26;
        v176[0] = nullptr;
        v139 = (_WORD *)sub_B5BA10((_QWORD *)v26, v176, v33, v23, v24, v32);
        v97 = sub_BDCD00(v3, (__int64)v176, v94, v95, v96);
        v100 = sub_B53480(v143, (__int64)v176, v98, v99);
        v102 = v143;
        v22 = v97;
        v144 = v97;
        if ( v100 )
          v27 = &v167;
        v25 = sub_BF9920(a1->m128i_i64[0], v97, v102, v176[0], (__int64)v139, v101);
        if ( !(_BYTE)v25
          || (*((_QWORD *)&v126 + 1) = v134,
              *(_QWORD *)&v126 = v148,
              v22 = (__int64)v176[0],
              v25 = sub_C33320(
                      v144,
                      (__int64)v176[0],
                      v27,
                      v3,
                      (_DWORD **)v140,
                      v139,
                      v126,
                      a1->m128i_i64[0],
                      (__int64)&v165,
                      0),
              !(_BYTE)v25)
          || (v24 = v185.m128i_u32[2], v185.m128i_i32[2])
          && (v22 = v3,
              v25 = sub_C0A6A0(a1->m128i_i64[0], v3, (__int64)&v165, v185.m128i_i64[0], v185.m128i_u32[2]),
              !(_BYTE)v25) )
        {
LABEL_23:
          v43 = (void *)v185.m128i_i64[0];
          if ( (__int64 *)v185.m128i_i64[0] == &v186 )
            goto LABEL_27;
          goto LABEL_65;
        }
      }
      v22 = 1;
      v103 = sub_C325E0(v5, 1, v135, v23, v24);
      v135 = -1;
      v25 = v103;
      goto LABEL_23;
    }
    v20 = a1->m128i_i64[0];
    goto LABEL_10;
  }
  v20 = a1->m128i_i64[0];
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v22 = *(_QWORD *)(v16 + 16);
    v136 = (_QWORD *)v16;
    v25 = sub_C3A250(v20, (__m128i *)v22, (__int64)&v167, v13, v16, v14);
    if ( !(_BYTE)v25 )
      goto LABEL_27;
    v16 = (__int64)v136;
    v20 = a1->m128i_i64[0];
    v26 = v136[3];
    if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v27 = &v167;
      v137 = (*v136 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_87:
    v22 = v16;
    v25 = sub_BF05D0(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v130 = v16;
      v87 = sub_E0E500(v20);
      v90 = v130;
      if ( *(char *)(v87 + 1) >= 0 )
      {
        sub_E0FF50(a1->m128i_i64[0], v130, 2480, 0);
        v90 = v130;
      }
      v22 = *(_QWORD *)(v90 + 16);
      v131 = (_DWORD *)v90;
      v91 = sub_C3A250(a1->m128i_i64[0], (__m128i *)v22, (__int64)&v167, v88, v90, v89);
      v24 = (__int64)v131;
      v25 = v91;
      if ( (_BYTE)v91 )
      {
        v92 = sub_C703D0(v131);
        v22 = (__int64)v131;
        v25 = sub_C30630(a1->m128i_i64[0], v131, &v167, v92);
      }
      goto LABEL_27;
    }
    goto LABEL_87;
  }
  v22 = v16;
  v146 = v16;
  v93 = sub_C3A3B0(v20, v16, (__int64)&v167, 0, v16, v14);
  v26 = v93;
  if ( !v93 )
  {
    v25 = 0;
    goto LABEL_27;
  }
  v20 = a1->m128i_i64[0];
  LOBYTE(v137) = 0;
  v27 = &v167;
  v16 = v146;
  if ( (*(_BYTE *)(v93 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_87;
LABEL_10:
  v28 = *(_QWORD *)(v20 + 32);
  v29 = (unsigned int)(*(_DWORD *)(v28 + 160) + 1);
  v30 = *(_DWORD *)(v28 + 128);
  *(_DWORD *)(v28 + 160) = v29;
  v134 = (v29 << 32) | v30;
  v22 = v141;
  v145 = v26;
  v31 = sub_C339F0((__int64)v140, v141, v26, v134, v20, v26, 0, (__int64)&v167);
  v33 = v127;
  v23 = v128;
  v25 = v31;
  if ( (_BYTE)v31 )
  {
    v26 = v145;
    v148 = v145;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v173 )
    free(ptr);
  if ( v135 != -1 )
  {
    v22 = 0;
    sub_C325E0(v5, 0, v135, v23, v24);
  }
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  if ( (_BYTE)v25 )
  {
    sub_C00890(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v165);
    if ( v165 > 1 )
      sub_A2BBA0((int *)&v165);
  }
  else
  {
    if ( v165 > 1 )
      sub_A2BBA0((int *)&v165);
    v73 = a1[1].m128i_u8[0];
    if ( (_BYTE)v73 && sub_BED890(v3, v22) )
    {
      v74 = a1->m128i_i64[1];
      sub_A2B590((__int64)&v185, v3, 0, 0);
      v75 = v185.m128i_i64[0];
      sub_C004D0(v74, v185.m128i_i64[0], (__int64 *)v185.m128i_i64[1], 1);
      v78 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v78 + 16) != 42 )
        v78 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL), v75, v76, v77);
      v79 = a1->m128i_i64[1];
      v80 = *(_QWORD *)(v78 + 32);
      v81 = *(unsigned int *)(v79 + 56);
      if ( (_DWORD)v81 )
      {
        sub_E0FF50(a1->m128i_i64[0], v3, 2499, 0);
        *(_BYTE *)(v79 + 24) |= 1u;
        *(_DWORD *)(v79 + 56) = 0;
      }
      else if ( (*(_BYTE *)(v79 + 24) & 1) == 0 )
      {
        if ( sub_BEC880(v79 + 24) )
        {
          v105 = (unsigned __int8 **)sub_E0FF50(v83, v3, 2466, 0);
          if ( v105 )
            sub_BED5E0(v105, 3);
          *(_BYTE *)(v79 + 24) |= 1u;
          *(_DWORD *)(v79 + 56) = 0;
        }
        else
        {
          v84 = *(_DWORD *)(v79 + 60);
          *(_BYTE *)(v79 + 24) = v82 | 4;
          if ( !v84 )
          {
            sub_22134E0(v79 + 48, v79 + 64, 1, 8);
            v81 = *(unsigned int *)(v79 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(v79 + 48) + 8 * v81) = 0;
          v85 = *(_DWORD *)(v79 + 56);
          *(_BYTE *)(v79 + 24) |= 8u;
          v86 = *(_DWORD *)(v79 + 24);
          ++v85;
          *(_QWORD *)(v79 + 40) = v80;
          *(_DWORD *)(v79 + 56) = v85;
          *(_QWORD *)(v79 + 32) = 0x7FFFFFFFFFFFFFFFLL;
          *(_DWORD *)(v79 + 24) = v86 & 0xF | (16 * v85);
        }
      }
      return v73;
    }
  }
  return v25;
}

