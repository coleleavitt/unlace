__int64 __fastcall sub_C838F0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rbp
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
  unsigned int v28; // ecx
  __int64 v29; // rdx
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
  const char *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r8
  unsigned __int64 v55; // r11
  __int64 v56; // r15
  bool v57; // al
  __int64 v58; // r11
  unsigned __int64 v59; // r10
  unsigned __int64 v60; // rdi
  char v61; // al
  char v62; // al
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r11
  __int64 v67; // r10
  bool v68; // al
  char v69; // al
  bool v70; // al
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  __int64 v78; // r9
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // r15d
  __int64 v87; // rdx
  __int64 v88; // rcx
  char v89; // al
  __int64 v90; // r9
  __int64 v91; // r10
  unsigned int v92; // eax
  unsigned __int8 **v93; // rax
  __int64 v94; // r8
  __int64 v95; // rax
  unsigned int v96; // ecx
  __int64 v97; // rdx
  char v98; // al
  __int64 v99; // rsi
  __int64 v100; // rdi
  unsigned int v101; // eax
  __int64 v102; // rdi
  bool v103; // zf
  __m128i *v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // r15
  __int64 v107; // r14
  bool v108; // al
  __int64 v109; // rdi
  unsigned int *v110; // r15
  _QWORD *v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // eax
  unsigned int v114; // eax
  __int128 v115; // [rsp-30h] [rbp-2B8h]
  __m128i *v116; // [rsp-10h] [rbp-298h]
  __int64 v117; // [rsp-8h] [rbp-290h]
  __int64 v118; // [rsp+0h] [rbp-288h]
  _DWORD *v119; // [rsp+0h] [rbp-288h]
  __int64 v120; // [rsp+0h] [rbp-288h]
  __int64 v121; // [rsp+0h] [rbp-288h]
  __int64 v122; // [rsp+8h] [rbp-280h]
  unsigned int v123; // [rsp+14h] [rbp-274h]
  _QWORD *v124; // [rsp+18h] [rbp-270h]
  __int64 v125; // [rsp+18h] [rbp-270h]
  __int64 v126; // [rsp+18h] [rbp-270h]
  _WORD *v127; // [rsp+18h] [rbp-270h]
  __m128i **v128; // [rsp+20h] [rbp-268h]
  __int64 v129; // [rsp+28h] [rbp-260h]
  __int64 v130; // [rsp+28h] [rbp-260h]
  __int64 v131; // [rsp+28h] [rbp-260h]
  unsigned int v132; // [rsp+28h] [rbp-260h]
  __int64 v133; // [rsp+30h] [rbp-258h]
  __int64 v134; // [rsp+30h] [rbp-258h]
  __int64 v135; // [rsp+30h] [rbp-258h]
  __int64 v136; // [rsp+40h] [rbp-248h]
  unsigned __int64 v137; // [rsp+40h] [rbp-248h]
  __int64 v138; // [rsp+40h] [rbp-248h]
  __int64 v139; // [rsp+48h] [rbp-240h]
  unsigned __int64 v140; // [rsp+48h] [rbp-240h]
  __int64 v141; // [rsp+48h] [rbp-240h]
  __int64 v142; // [rsp+48h] [rbp-240h]
  unsigned __int64 v143; // [rsp+48h] [rbp-240h]
  __int64 v144; // [rsp+48h] [rbp-240h]
  unsigned __int64 v145; // [rsp+50h] [rbp-238h]
  _QWORD *v146; // [rsp+50h] [rbp-238h]
  unsigned __int64 v147; // [rsp+50h] [rbp-238h]
  __int64 v148; // [rsp+50h] [rbp-238h]
  unsigned __int64 v149; // [rsp+50h] [rbp-238h]
  __int64 v150; // [rsp+50h] [rbp-238h]
  unsigned __int64 v151; // [rsp+58h] [rbp-230h]
  __int64 v152; // [rsp+58h] [rbp-230h]
  unsigned int v153; // [rsp+60h] [rbp-228h] BYREF
  char v154; // [rsp+64h] [rbp-224h]
  __m128i v155; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v156; // [rsp+B0h] [rbp-1D8h]
  char v157; // [rsp+B8h] [rbp-1D0h]
  __int64 v158; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v160; // [rsp+D8h] [rbp-1B0h]
  _BYTE v161[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v162; // [rsp+120h] [rbp-168h]
  char v163; // [rsp+121h] [rbp-167h]
  char *v164[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v165; // [rsp+140h] [rbp-148h]
  char v166; // [rsp+148h] [rbp-140h]
  __int64 v167; // [rsp+158h] [rbp-130h]
  void *v168; // [rsp+160h] [rbp-128h]
  __int64 v169; // [rsp+168h] [rbp-120h]
  _BYTE v170[64]; // [rsp+170h] [rbp-118h] BYREF
  char v171; // [rsp+1B0h] [rbp-D8h]
  char v172; // [rsp+1B1h] [rbp-D7h]
  __m128i v173; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v174; // [rsp+1D0h] [rbp-B8h] BYREF
  char v175; // [rsp+1D8h] [rbp-B0h]
  __int64 v176; // [rsp+1E8h] [rbp-A0h]
  void *v177; // [rsp+1F0h] [rbp-98h]
  __int64 v178; // [rsp+1F8h] [rbp-90h]
  _BYTE v179[136]; // [rsp+200h] [rbp-88h] BYREF

  v3 = a2;
  v4 = sub_BFBE70(a2);
  if ( v4 )
  {
    v45 = (const char *)sub_FBD4B0(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v45, 69) )
    {
      v46 = sub_BFBE70(v3);
      if ( v46 == 226 )
      {
        return (unsigned int)sub_C4C3B0(*a1, v3, v47, v48, v49);
      }
      else
      {
        v24 = 1;
        if ( v46 != 922 )
          LOBYTE(v24) = v46 == 150;
      }
      return v24;
    }
  }
  v5 = *a1;
  v153 = 0;
  v154 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v123 = *(_DWORD *)(v5 + 272);
  v7 = *(unsigned int *)(v6 + 148);
  v8 = *(_DWORD *)(v6 + 160) + 1;
  v9 = *(unsigned int *)(v6 + 144);
  *(_DWORD *)(v6 + 160) = v8;
  if ( v9 + 1 > v7 )
  {
    a2 = v6 + 152;
    sub_2237220(v6 + 136, v6 + 152, v9 + 1, 4);
    v9 = *(unsigned int *)(v6 + 144);
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 136) + 4 * v9) = v8;
  v10 = *(_QWORD *)(v3 + 32);
  ++*(_DWORD *)(v6 + 144);
  v11 = sub_BFB9F0(v10);
  v122 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v161;
  v160 = 0x800000000LL;
  v17 = *(unsigned int *)(v3 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v156 = 0;
  v129 = v17;
  LOBYTE(v17) = *(_BYTE *)(v3 + 2);
  v157 |= 1u;
  v158 = 0;
  v163 = 0;
  v155 = 0u;
  v128 = (__m128i **)(v3 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v126 = v16;
    if ( !sub_C1BF80(*v18, a2, v12, v13) )
    {
      v24 = sub_C14310(*a1, v3);
      goto LABEL_27;
    }
    v164[0] = nullptr;
    v168 = v170;
    v169 = 0x800000000LL;
    v51 = *a1;
    v52 = v126;
    v164[1] = nullptr;
    v165 = 0;
    v166 |= 1u;
    v167 = 0;
    v172 = 0;
    v173.m128i_i64[0] = v51;
    v173.m128i_i64[1] = (__int64)v164;
    LOBYTE(v174) = 0;
    v24 = sub_C48CF0(&v173, v126, v43, (__int64)v164, v126, v44);
    if ( !(_BYTE)v24 )
      goto LABEL_65;
    v53 = *a1;
    v54 = v126;
    if ( v165 )
      goto LABEL_64;
    LOBYTE(v125) = v171 & 1;
    if ( (v171 & 1) != 0 )
    {
      v120 = v54;
      v93 = (unsigned __int8 **)sub_E33C10(v53, v54, 2460, 0);
      if ( v93 )
        sub_AE9DF0(v93, v120, 0xFu);
      goto LABEL_86;
    }
    if ( !v164[0]
      || ((__int64)v164[0] & 3) != 0
      || (v55 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL,
          v137 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(v55 + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_64:
      v24 = sub_C14310(v53, v54);
      goto LABEL_65;
    }
    v56 = *(_QWORD *)(v53 + 16);
    v145 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL;
    v139 = *(_QWORD *)(v55 + 48);
    v30 = (__m128i *)sub_F68450(*v18, v52, v139, v22, v54);
    v57 = sub_A82490(v56, (__int64)v30, v139);
    v58 = v145;
    v59 = v137;
    if ( !v57 )
    {
      v24 = sub_C14310(*a1, v3);
      goto LABEL_65;
    }
    if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
    {
      v60 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v60 == 15 || (_DWORD)v60 == 20 || (v61 = sub_C10590(v60), v59 = v137, v58 = v145, v61) )
      {
        v94 = *a1;
        v121 = v58;
        v95 = *(_QWORD *)(*a1 + 32);
        v96 = *(_DWORD *)(v95 + 128);
        v97 = (unsigned int)(*(_DWORD *)(v95 + 160) + 1);
        *(_DWORD *)(v95 + 160) = v97;
        v122 = (v97 << 32) | v96;
        if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 35 <= 3
          && (v143 = v59,
              v138 = v58,
              v98 = sub_B98200((_QWORD *)v58, 0xFFFFFFFF00000000LL),
              v94 = *a1,
              v58 = v138,
              v59 = v143,
              v98) )
        {
          v99 = v129 - 1;
          v100 = (__int64)(v128 + 1);
        }
        else
        {
          v99 = v129;
          v100 = (__int64)v128;
        }
        v149 = v59;
        v136 = v58;
        v101 = sub_C57730(v100, v99, v121, v122, v94, v58, 1, (__int64)&v155);
        v30 = v116;
        v24 = v101;
        if ( !(_BYTE)v101 )
          goto LABEL_65;
        v58 = v136;
        v59 = v149;
        v140 = v3;
      }
      else
      {
        v140 = v3;
        v136 = 0;
      }
    }
    else
    {
      v136 = 0;
      v140 = 0;
    }
    if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v151 = v59;
      v146 = (_QWORD *)v58;
      v62 = sub_B98200((_QWORD *)v58, (__int64)v30);
      v66 = (__int64)v146;
      v67 = v151;
      if ( v62 || v140 && (v68 = sub_B979F0(v146), v66 = (__int64)v146, v67 = v151, v68) )
      {
        v102 = *a1;
        if ( !v129 )
        {
          v24 = sub_C14310(v102, v3);
          goto LABEL_65;
        }
        v152 = v66;
        v150 = v67;
        v30 = *v128;
        v24 = sub_C5DF90(v102, *v128, (__int64)&v155, v63, v64, v65);
        if ( !(_BYTE)v24 )
          goto LABEL_65;
        v103 = !sub_B979F0((_QWORD *)v152);
        v104 = nullptr;
        if ( v103 )
          v104 = &v155;
        v26 = v104;
        v105 = sub_E32240(*a1);
        v25 = v150;
        if ( *(char *)(v105 + 1) < 0 && v140 && ((*(_BYTE *)(v140 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v152 + 82) < 0 )
        {
          v24 = v162;
          LOBYTE(v24) = (v162 & 2) != 0;
          if ( (v162 & 2) != 0 )
            goto LABEL_86;
          if ( (v157 & 1) != 0 )
            goto LABEL_65;
          v30 = *v128;
          v114 = sub_C34190(*a1, (__int64)*v128, (unsigned __int64)&v155, v22, v23);
          v25 = v150;
          v24 = v114;
          if ( !(_BYTE)v114 )
            goto LABEL_65;
        }
        --v129;
        ++v128;
        goto LABEL_100;
      }
      v147 = v67;
      v141 = v66;
      v69 = sub_B98950(v66);
      v58 = v141;
      v59 = v147;
      if ( v69 )
      {
        v106 = sub_B72690(v141 + 72);
        if ( v106 )
          v106 -= 64LL;
        v107 = sub_B96F60(v106);
        v108 = sub_B96EF0(v106);
        v25 = v107;
        v26 = nullptr;
        if ( v108 )
        {
          v109 = v141;
          v144 = v25;
          v110 = (unsigned int *)sub_B77B50(v109);
          v111 = (_QWORD *)sub_B77A30(v144);
          v112 = *v110;
          v30 = (__m128i *)(v110 + 2);
          v173.m128i_i64[0] = 0;
          v25 = sub_BC3B30(v111, (__int64)(v110 + 2), v112, (__int64)&v173);
        }
        goto LABEL_100;
      }
    }
    v30 = nullptr;
    v142 = v58;
    v148 = v59;
    if ( sub_B760E0(v58, nullptr, nullptr) )
    {
      v173.m128i_i64[0] = *(_QWORD *)(v142 + 40);
      v70 = sub_C1D2C0(&v173);
      v72 = *a1;
      if ( v70 )
      {
        v173 = 0u;
        v177 = v179;
        v174 = 0;
        v175 |= 1u;
        v176 = 0;
        v178 = 0x800000000LL;
        v179[65] = 0;
        v24 = *(unsigned __int8 *)(v72 + 914);
        if ( !(_BYTE)v24 )
        {
          v22 = *(unsigned int *)(v72 + 900);
          if ( !(_DWORD)v22 )
          {
            v24 = sub_C475F0(v72, v3, (__int64)&v173);
            if ( (_BYTE)v24 )
            {
              sub_C0F890((__int64)&v173, (__int64)&v153);
              v75 = sub_C56320(v5, 1, v123, v73, v74);
              v123 = -1;
              v24 = v75;
            }
            if ( v177 != v179 )
              free(v177);
          }
          goto LABEL_65;
        }
LABEL_86:
        v24 = 0;
        goto LABEL_65;
      }
      v24 = sub_C4C3B0(v72, v3, v71, v22, v23);
      if ( (_BYTE)v24 )
      {
        v113 = sub_C56320(v5, 1, v123, v22, v23);
        v123 = -1;
        v24 = v113;
      }
LABEL_65:
      v42 = v168;
      if ( v168 != v170 )
      {
LABEL_66:
        free(v42);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v25 = v148;
    v26 = nullptr;
LABEL_100:
    if ( v168 != v170 )
    {
      v135 = v25;
      free(v168);
      v25 = v135;
    }
    if ( v136 )
    {
LABEL_12:
      v173.m128i_i64[0] = (__int64)&v174;
      v173.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v130 = v25;
          v24 = (unsigned __int8)v125;
          LOBYTE(v24) = !sub_AED5B0(v25) | v125;
          if ( (_BYTE)v24 )
          {
            v34 = sub_B98200((_QWORD *)v130, (__int64)v30);
            v25 = v130;
            if ( v34 )
            {
              v24 = sub_C32EA0(*a1, (_DWORD *)v3, v26, 4 * (unsigned int)((*(_BYTE *)(v130 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_23;
              v25 = v130;
            }
          }
          else
          {
            v25 = sub_C33CC0(*a1, (_DWORD *)v3, v26, v130, (__int64)&v173);
            if ( !v25 )
              goto LABEL_23;
          }
          v33 = *(_BYTE *)(v25 + 28) & 0x7F;
        }
      }
      if ( v33 == 36 )
      {
        v35 = *(_QWORD *)(*a1 + 16);
        v36 = sub_B72690(v25 + 72);
        v40 = v36 - 64;
        if ( v36 )
          v36 -= 64LL;
        v41 = sub_A7A9D0(v35, v36, v40, v37, v38, v39);
        v24 = sub_C54370(*a1, (_DWORD *)v3, v26, v41);
        if ( !(_BYTE)v24 )
          goto LABEL_23;
      }
      else
      {
        v131 = v25;
        v164[0] = nullptr;
        v127 = (_WORD *)sub_B7F750((_QWORD *)v25, v164, v32, v22, v23, v31);
        v86 = sub_C00A40(v3, (__int64)v164, v83, v84, v85);
        v89 = sub_B771C0(v131, (__int64)v164, v87, v88);
        v91 = v131;
        v132 = v86;
        if ( v89 )
          v26 = &v155;
        v24 = sub_C1D660(*a1, v86, v91, v164[0], (__int64)v127, v90);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v115 + 1) = v122,
              *(_QWORD *)&v115 = v136,
              v24 = sub_C57060(v132, (__int64)v164[0], v26, v3, (_DWORD **)v128, v127, v115, *a1, (__int64)&v153, 0),
              !(_BYTE)v24)
          || (v23 = v173.m128i_u32[2], v173.m128i_i32[2])
          && (v24 = sub_C2E3E0(*a1, v3, (__int64)&v153, v173.m128i_i64[0], v173.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_23:
          v42 = (void *)v173.m128i_i64[0];
          if ( (__int64 *)v173.m128i_i64[0] == &v174 )
            goto LABEL_27;
          goto LABEL_66;
        }
      }
      v92 = sub_C56320(v5, 1, v123, v22, v23);
      v123 = -1;
      v24 = v92;
      goto LABEL_23;
    }
    v20 = *a1;
    goto LABEL_10;
  }
  v20 = *a1;
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v124 = (_QWORD *)v16;
    v24 = sub_C5DF90(v20, *(__m128i **)(v16 + 16), (__int64)&v155, v13, v16, v14);
    if ( !(_BYTE)v24 )
      goto LABEL_27;
    v16 = (__int64)v124;
    v20 = *a1;
    v25 = v124[3];
    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v26 = &v155;
      v125 = (*v124 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_76:
    v24 = sub_C14310(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v118 = v16;
      v76 = sub_E32240(v20);
      v79 = v118;
      if ( *(char *)(v76 + 1) >= 0 )
      {
        sub_E33C90(*a1, v118, 2480, 0);
        v79 = v118;
      }
      v119 = (_DWORD *)v79;
      v80 = sub_C5DF90(*a1, *(__m128i **)(v79 + 16), (__int64)&v155, v77, v79, v78);
      v23 = (__int64)v119;
      v24 = v80;
      if ( (_BYTE)v80 )
      {
        v81 = sub_C94110(v119);
        v24 = sub_C54370(*a1, v119, &v155, v81);
      }
      goto LABEL_27;
    }
    goto LABEL_76;
  }
  v134 = v16;
  v82 = sub_C5E0F0(v20, v16, (__int64)&v155, 0, v16, v14);
  v25 = v82;
  if ( !v82 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v20 = *a1;
  LOBYTE(v125) = 0;
  v26 = &v155;
  v16 = v134;
  if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_76;
LABEL_10:
  v27 = *(_QWORD *)(v20 + 32);
  v28 = *(_DWORD *)(v27 + 128);
  v29 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
  *(_DWORD *)(v27 + 160) = v29;
  v122 = (v29 << 32) | v28;
  v30 = (__m128i *)v129;
  v133 = v25;
  v24 = sub_C57730((__int64)v128, v129, v25, v122, v20, v25, 0, (__int64)&v155);
  v32 = v117;
  if ( (_BYTE)v24 )
  {
    v25 = v133;
    v136 = v133;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v161 )
    free(ptr);
  if ( v123 != -1 )
    sub_C56320(v5, 0, v123, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  if ( v153 > 1 )
    sub_A4F8E0((int *)&v153);
  return v24;
}
