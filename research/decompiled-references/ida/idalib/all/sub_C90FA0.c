__int64 __fastcall sub_C90FA0(__int64 *a1, __int64 a2)
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
  __int64 v46; // rdx
  const char *v47; // rax
  unsigned int v48; // eax
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r8
  unsigned __int64 v54; // r11
  __int64 v55; // r15
  bool v56; // al
  __int64 v57; // r11
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // rdi
  char v60; // al
  char v61; // al
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r11
  __int64 v66; // r10
  bool v67; // al
  char v68; // al
  bool v69; // al
  __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  __int64 v77; // r9
  __int64 v78; // r8
  unsigned int v79; // eax
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // r15d
  __int64 v86; // rdx
  __int64 v87; // rcx
  char v88; // al
  __int64 v89; // r9
  __int64 v90; // r10
  unsigned int v91; // eax
  unsigned __int8 **v92; // rax
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // ecx
  char v97; // al
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned int v100; // eax
  __int64 v101; // rdi
  bool v102; // zf
  __m128i *v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // r15
  __int64 v106; // r14
  bool v107; // al
  __int64 v108; // rdi
  unsigned int *v109; // r15
  _QWORD *v110; // rax
  __int64 v111; // rdx
  unsigned int v112; // eax
  unsigned int v113; // eax
  __int128 v114; // [rsp-30h] [rbp-2B8h]
  __m128i *v115; // [rsp-10h] [rbp-298h]
  __int64 v116; // [rsp-8h] [rbp-290h]
  __int64 v117; // [rsp+0h] [rbp-288h]
  _DWORD *v118; // [rsp+0h] [rbp-288h]
  __int64 v119; // [rsp+0h] [rbp-288h]
  __int64 v120; // [rsp+0h] [rbp-288h]
  __int64 v121; // [rsp+8h] [rbp-280h]
  unsigned int v122; // [rsp+14h] [rbp-274h]
  _QWORD *v123; // [rsp+18h] [rbp-270h]
  __int64 v124; // [rsp+18h] [rbp-270h]
  __int64 v125; // [rsp+18h] [rbp-270h]
  _WORD *v126; // [rsp+18h] [rbp-270h]
  __m128i **v127; // [rsp+20h] [rbp-268h]
  __int64 v128; // [rsp+28h] [rbp-260h]
  __int64 v129; // [rsp+28h] [rbp-260h]
  __int64 v130; // [rsp+28h] [rbp-260h]
  unsigned int v131; // [rsp+28h] [rbp-260h]
  __int64 v132; // [rsp+30h] [rbp-258h]
  __int64 v133; // [rsp+30h] [rbp-258h]
  __int64 v134; // [rsp+30h] [rbp-258h]
  __int64 v135; // [rsp+40h] [rbp-248h]
  unsigned __int64 v136; // [rsp+40h] [rbp-248h]
  __int64 v137; // [rsp+40h] [rbp-248h]
  __int64 v138; // [rsp+48h] [rbp-240h]
  unsigned __int64 v139; // [rsp+48h] [rbp-240h]
  __int64 v140; // [rsp+48h] [rbp-240h]
  __int64 v141; // [rsp+48h] [rbp-240h]
  unsigned __int64 v142; // [rsp+48h] [rbp-240h]
  __int64 v143; // [rsp+48h] [rbp-240h]
  unsigned __int64 v144; // [rsp+50h] [rbp-238h]
  _QWORD *v145; // [rsp+50h] [rbp-238h]
  unsigned __int64 v146; // [rsp+50h] [rbp-238h]
  __int64 v147; // [rsp+50h] [rbp-238h]
  unsigned __int64 v148; // [rsp+50h] [rbp-238h]
  __int64 v149; // [rsp+50h] [rbp-238h]
  unsigned __int64 v150; // [rsp+58h] [rbp-230h]
  __int64 v151; // [rsp+58h] [rbp-230h]
  unsigned int v152; // [rsp+60h] [rbp-228h] BYREF
  char v153; // [rsp+64h] [rbp-224h]
  char v154[56]; // [rsp+68h] [rbp-220h] BYREF
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
    v47 = (const char *)sub_FBD4B0(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v47, 69) )
    {
      v48 = sub_BFBE70(v3);
      return (unsigned int)sub_C8A450(a1, v3, v48);
    }
  }
  v5 = *a1;
  v152 = 0;
  v153 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v122 = *(_DWORD *)(v5 + 272);
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
  v121 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v161;
  v160 = 0x800000000LL;
  v17 = *(unsigned int *)(v3 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v156 = 0;
  v128 = v17;
  LOBYTE(v17) = *(_BYTE *)(v3 + 2);
  v157 |= 1u;
  v158 = 0;
  v163 = 0;
  v155 = 0u;
  v127 = (__m128i **)(v3 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v125 = v16;
    if ( !sub_C1BF80(*v18, a2, v12, v13) )
    {
      v24 = sub_C14310(*a1, v3);
      goto LABEL_27;
    }
    v164[0] = nullptr;
    v168 = v170;
    v169 = 0x800000000LL;
    v50 = *a1;
    v51 = v125;
    v164[1] = nullptr;
    v165 = 0;
    v166 |= 1u;
    v167 = 0;
    v172 = 0;
    v173.m128i_i64[0] = v50;
    v173.m128i_i64[1] = (__int64)v164;
    LOBYTE(v174) = 0;
    v24 = sub_C48CF0(&v173, v125, v43, (__int64)v164, v125, v44);
    if ( !(_BYTE)v24 )
      goto LABEL_67;
    v52 = *a1;
    v53 = v125;
    if ( v165 )
      goto LABEL_66;
    LOBYTE(v124) = v171 & 1;
    if ( (v171 & 1) != 0 )
    {
      v119 = v53;
      v92 = (unsigned __int8 **)sub_E33C10(v52, v53, 2460, 0);
      if ( v92 )
        sub_AE9DF0(v92, v119, 0xFu);
      goto LABEL_89;
    }
    if ( !v164[0]
      || ((__int64)v164[0] & 3) != 0
      || (v54 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL,
          v136 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(v54 + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_66:
      v24 = sub_C14310(v52, v53);
      goto LABEL_67;
    }
    v55 = *(_QWORD *)(v52 + 16);
    v144 = (unsigned __int64)v164[0] & 0xFFFFFFFFFFFFFFFCLL;
    v138 = *(_QWORD *)(v54 + 48);
    v30 = (__m128i *)sub_F68450(*v18, v51, v138, v22, v53);
    v56 = sub_A82490(v55, (__int64)v30, v138);
    v57 = v144;
    v58 = v136;
    if ( !v56 )
    {
      v24 = sub_C14310(*a1, v3);
      goto LABEL_67;
    }
    if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
    {
      v59 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v59 == 15 || (_DWORD)v59 == 20 || (v60 = sub_C10590(v59), v58 = v136, v57 = v144, v60) )
      {
        v93 = *a1;
        v120 = v57;
        v94 = *(_QWORD *)(*a1 + 32);
        v95 = (unsigned int)(*(_DWORD *)(v94 + 160) + 1);
        v96 = *(_DWORD *)(v94 + 128);
        *(_DWORD *)(v94 + 160) = v95;
        v121 = (v95 << 32) | v96;
        if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 35 <= 3
          && (v142 = v58,
              v137 = v57,
              v97 = sub_B98200((_QWORD *)v57, 0xFFFFFFFF00000000LL),
              v93 = *a1,
              v57 = v137,
              v58 = v142,
              v97) )
        {
          v98 = v128 - 1;
          v99 = (__int64)(v127 + 1);
        }
        else
        {
          v98 = v128;
          v99 = (__int64)v127;
        }
        v148 = v58;
        v135 = v57;
        v100 = sub_C57730(v99, v98, v120, v121, v93, v57, 1, (__int64)&v155);
        v30 = v115;
        v24 = v100;
        if ( !(_BYTE)v100 )
          goto LABEL_67;
        v57 = v135;
        v58 = v148;
        v139 = v3;
      }
      else
      {
        v139 = v3;
        v135 = 0;
      }
    }
    else
    {
      v135 = 0;
      v139 = 0;
    }
    if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v150 = v58;
      v145 = (_QWORD *)v57;
      v61 = sub_B98200((_QWORD *)v57, (__int64)v30);
      v65 = (__int64)v145;
      v66 = v150;
      if ( v61 || v139 && (v67 = sub_B979F0(v145), v65 = (__int64)v145, v66 = v150, v67) )
      {
        v101 = *a1;
        if ( !v128 )
        {
          v24 = sub_C14310(v101, v3);
          goto LABEL_67;
        }
        v151 = v65;
        v149 = v66;
        v30 = *v127;
        v24 = sub_C5DF90(v101, *v127, (__int64)&v155, v62, v63, v64);
        if ( !(_BYTE)v24 )
          goto LABEL_67;
        v102 = !sub_B979F0((_QWORD *)v151);
        v103 = nullptr;
        if ( v102 )
          v103 = &v155;
        v26 = v103;
        v104 = sub_E32240(*a1);
        v25 = v149;
        if ( *(char *)(v104 + 1) < 0 && v139 && ((*(_BYTE *)(v139 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v151 + 82) < 0 )
        {
          v24 = v162;
          LOBYTE(v24) = (v162 & 2) != 0;
          if ( (v162 & 2) != 0 )
            goto LABEL_89;
          if ( (v157 & 1) != 0 )
            goto LABEL_67;
          v30 = *v127;
          v113 = sub_C34190(*a1, (__int64)*v127, (unsigned __int64)&v155, v22, v23);
          v25 = v149;
          v24 = v113;
          if ( !(_BYTE)v113 )
            goto LABEL_67;
        }
        --v128;
        ++v127;
        goto LABEL_103;
      }
      v146 = v66;
      v140 = v65;
      v68 = sub_B98950(v65);
      v57 = v140;
      v58 = v146;
      if ( v68 )
      {
        v105 = sub_B72690(v140 + 72);
        if ( v105 )
          v105 -= 64LL;
        v106 = sub_B96F60(v105);
        v107 = sub_B96EF0(v105);
        v25 = v106;
        v26 = nullptr;
        if ( v107 )
        {
          v108 = v140;
          v143 = v25;
          v109 = (unsigned int *)sub_B77B50(v108);
          v110 = (_QWORD *)sub_B77A30(v143);
          v111 = *v109;
          v30 = (__m128i *)(v109 + 2);
          v173.m128i_i64[0] = 0;
          v25 = sub_BC3B30(v110, (__int64)(v109 + 2), v111, (__int64)&v173);
        }
        goto LABEL_103;
      }
    }
    v30 = nullptr;
    v141 = v57;
    v147 = v58;
    if ( sub_B760E0(v57, nullptr, nullptr) )
    {
      v173.m128i_i64[0] = *(_QWORD *)(v141 + 40);
      v69 = sub_C1D2C0(&v173);
      v71 = *a1;
      if ( v69 )
      {
        v173 = 0u;
        v177 = v179;
        v174 = 0;
        v175 |= 1u;
        v176 = 0;
        v178 = 0x800000000LL;
        v179[65] = 0;
        v24 = *(unsigned __int8 *)(v71 + 914);
        if ( !(_BYTE)v24 )
        {
          v22 = *(unsigned int *)(v71 + 900);
          if ( !(_DWORD)v22 )
          {
            v24 = sub_C475F0(v71, v3, (__int64)&v173);
            if ( (_BYTE)v24 )
            {
              sub_C0F890((__int64)&v173, (__int64)&v152);
              v74 = sub_C56320(v5, 1, v122, v72, v73);
              v122 = -1;
              v24 = v74;
            }
            if ( v177 != v179 )
              free(v177);
          }
          goto LABEL_67;
        }
LABEL_89:
        v24 = 0;
        goto LABEL_67;
      }
      v24 = sub_C4C3B0(v71, v3, v70, v22, v23);
      if ( (_BYTE)v24 )
      {
        v112 = sub_C56320(v5, 1, v122, v22, v23);
        v122 = -1;
        v24 = v112;
      }
LABEL_67:
      v42 = v168;
      if ( v168 != v170 )
      {
LABEL_68:
        free(v42);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v25 = v147;
    v26 = nullptr;
LABEL_103:
    if ( v168 != v170 )
    {
      v134 = v25;
      free(v168);
      v25 = v134;
    }
    if ( v135 )
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
          v129 = v25;
          v24 = (unsigned __int8)v124;
          LOBYTE(v24) = !sub_AED5B0(v25) | v124;
          if ( (_BYTE)v24 )
          {
            v34 = sub_B98200((_QWORD *)v129, (__int64)v30);
            v25 = v129;
            if ( v34 )
            {
              v24 = sub_C32EA0(*a1, (_DWORD *)v3, v26, 4 * (unsigned int)((*(_BYTE *)(v129 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_23;
              v25 = v129;
            }
          }
          else
          {
            v25 = sub_C33CC0(*a1, (_DWORD *)v3, v26, v129, (__int64)&v173);
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
        v130 = v25;
        v164[0] = nullptr;
        v126 = (_WORD *)sub_B7F750((_QWORD *)v25, v164, v32, v22, v23, v31);
        v85 = sub_C00A40(v3, (__int64)v164, v82, v83, v84);
        v88 = sub_B771C0(v130, (__int64)v164, v86, v87);
        v90 = v130;
        v131 = v85;
        if ( v88 )
          v26 = &v155;
        v24 = sub_C1D660(*a1, v85, v90, v164[0], (__int64)v126, v89);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v114 + 1) = v121,
              *(_QWORD *)&v114 = v135,
              v24 = sub_C57060(v131, (__int64)v164[0], v26, v3, (_DWORD **)v127, v126, v114, *a1, (__int64)&v152, 0),
              !(_BYTE)v24)
          || (v23 = v173.m128i_u32[2], v173.m128i_i32[2])
          && (v24 = sub_C2E3E0(*a1, v3, (__int64)&v152, v173.m128i_i64[0], v173.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_23:
          v42 = (void *)v173.m128i_i64[0];
          if ( (__int64 *)v173.m128i_i64[0] == &v174 )
            goto LABEL_27;
          goto LABEL_68;
        }
      }
      v91 = sub_C56320(v5, 1, v122, v22, v23);
      v122 = -1;
      v24 = v91;
      goto LABEL_23;
    }
    v20 = *a1;
    goto LABEL_10;
  }
  v20 = *a1;
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v123 = (_QWORD *)v16;
    v24 = sub_C5DF90(v20, *(__m128i **)(v16 + 16), (__int64)&v155, v13, v16, v14);
    if ( !(_BYTE)v24 )
      goto LABEL_27;
    v16 = (__int64)v123;
    v20 = *a1;
    v25 = v123[3];
    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v26 = &v155;
      v124 = (*v123 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_79:
    v24 = sub_C14310(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v117 = v16;
      v75 = sub_E32240(v20);
      v78 = v117;
      if ( *(char *)(v75 + 1) >= 0 )
      {
        sub_E33C90(*a1, v117, 2480, 0);
        v78 = v117;
      }
      v118 = (_DWORD *)v78;
      v79 = sub_C5DF90(*a1, *(__m128i **)(v78 + 16), (__int64)&v155, v76, v78, v77);
      v23 = (__int64)v118;
      v24 = v79;
      if ( (_BYTE)v79 )
      {
        v80 = sub_C94110(v118);
        v24 = sub_C54370(*a1, v118, &v155, v80);
      }
      goto LABEL_27;
    }
    goto LABEL_79;
  }
  v133 = v16;
  v81 = sub_C5E0F0(v20, v16, (__int64)&v155, 0, v16, v14);
  v25 = v81;
  if ( !v81 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v20 = *a1;
  LOBYTE(v124) = 0;
  v26 = &v155;
  v16 = v133;
  if ( (*(_BYTE *)(v81 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_79;
LABEL_10:
  v27 = *(_QWORD *)(v20 + 32);
  v28 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
  v29 = *(_DWORD *)(v27 + 128);
  *(_DWORD *)(v27 + 160) = v28;
  v121 = (v28 << 32) | v29;
  v30 = (__m128i *)v128;
  v132 = v25;
  v24 = sub_C57730((__int64)v127, v128, v25, v121, v20, v25, 0, (__int64)&v155);
  v32 = v116;
  if ( (_BYTE)v24 )
  {
    v25 = v132;
    v135 = v132;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v161 )
    free(ptr);
  if ( v122 != -1 )
    sub_C56320(v5, 0, v122, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  v45 = v152;
  if ( (_BYTE)v24 )
  {
    if ( v152 <= 0xD && (v46 = 8322, _bittest64(&v46, v152)) || (v153 & 1) != 0 )
    {
      sub_A54D20(a1[1], (int *)&v152);
      v45 = v152;
    }
    else
    {
      v24 = sub_C12770((__int64)v154, a1[1]);
      v45 = v152;
    }
  }
  if ( v45 > 1 )
    sub_A4F8E0((int *)&v152);
  return v24;
}
