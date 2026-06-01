__int64 __fastcall sub_C62530(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdi
  __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r15d
  __int64 v25; // r11
  __m128i *v26; // r13
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
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // r15
  bool v53; // al
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdi
  char v56; // al
  char v57; // al
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r11
  bool v62; // al
  char v63; // al
  bool v64; // al
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned int v69; // eax
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int v80; // r15d
  __int64 v81; // rdx
  __int64 v82; // rcx
  char v83; // al
  __int64 v84; // r9
  __int64 v85; // r11
  unsigned int v86; // eax
  unsigned __int8 **v87; // rax
  __int64 v88; // r8
  __int64 v89; // rax
  unsigned int v90; // ecx
  __int64 v91; // rdx
  char v92; // al
  __int64 v93; // rsi
  __int64 v94; // rdi
  unsigned int v95; // eax
  __int64 v96; // rdi
  bool v97; // zf
  __m128i *v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // r15
  __int64 v101; // r13
  bool v102; // al
  unsigned int *v103; // r15
  _QWORD *v104; // rax
  __int64 v105; // rdx
  unsigned int v106; // eax
  unsigned int v107; // eax
  __int128 v108; // [rsp-30h] [rbp-2B8h]
  __m128i *v109; // [rsp-10h] [rbp-298h]
  __int64 v110; // [rsp-8h] [rbp-290h]
  __int64 v111; // [rsp+0h] [rbp-288h]
  _DWORD *v112; // [rsp+0h] [rbp-288h]
  __int64 v113; // [rsp+0h] [rbp-288h]
  __int64 v114; // [rsp+8h] [rbp-280h]
  unsigned int v115; // [rsp+14h] [rbp-274h]
  _QWORD *v116; // [rsp+18h] [rbp-270h]
  __int64 v117; // [rsp+18h] [rbp-270h]
  __int64 v118; // [rsp+18h] [rbp-270h]
  _WORD *v119; // [rsp+18h] [rbp-270h]
  __m128i **v120; // [rsp+20h] [rbp-268h]
  __int64 v121; // [rsp+28h] [rbp-260h]
  __int64 v122; // [rsp+28h] [rbp-260h]
  __int64 v123; // [rsp+28h] [rbp-260h]
  unsigned int v124; // [rsp+28h] [rbp-260h]
  __int64 v125; // [rsp+30h] [rbp-258h]
  __int64 v126; // [rsp+30h] [rbp-258h]
  __int64 v127; // [rsp+30h] [rbp-258h]
  unsigned __int64 v128; // [rsp+40h] [rbp-248h]
  unsigned __int64 v129; // [rsp+48h] [rbp-240h]
  unsigned __int64 v130; // [rsp+48h] [rbp-240h]
  unsigned __int64 v131; // [rsp+48h] [rbp-240h]
  __int64 v132; // [rsp+50h] [rbp-238h]
  unsigned __int64 v133; // [rsp+50h] [rbp-238h]
  unsigned __int64 v134; // [rsp+50h] [rbp-238h]
  __int64 v135; // [rsp+50h] [rbp-238h]
  __int64 v136; // [rsp+50h] [rbp-238h]
  unsigned __int64 v137; // [rsp+58h] [rbp-230h]
  unsigned __int64 v138; // [rsp+58h] [rbp-230h]
  __int64 v139; // [rsp+58h] [rbp-230h]
  unsigned int v140; // [rsp+60h] [rbp-228h] BYREF
  char v141; // [rsp+64h] [rbp-224h]
  __m128i v142; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v143; // [rsp+B0h] [rbp-1D8h]
  char v144; // [rsp+B8h] [rbp-1D0h]
  __int64 v145; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v147; // [rsp+D8h] [rbp-1B0h]
  _BYTE v148[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v149; // [rsp+120h] [rbp-168h]
  char v150; // [rsp+121h] [rbp-167h]
  char *v151[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v152; // [rsp+140h] [rbp-148h]
  char v153; // [rsp+148h] [rbp-140h]
  __int64 v154; // [rsp+158h] [rbp-130h]
  void *v155; // [rsp+160h] [rbp-128h]
  __int64 v156; // [rsp+168h] [rbp-120h]
  _BYTE v157[64]; // [rsp+170h] [rbp-118h] BYREF
  char v158; // [rsp+1B0h] [rbp-D8h]
  char v159; // [rsp+1B1h] [rbp-D7h]
  __m128i v160; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v161; // [rsp+1D0h] [rbp-B8h] BYREF
  char v162; // [rsp+1D8h] [rbp-B0h]
  __int64 v163; // [rsp+1E8h] [rbp-A0h]
  void *v164; // [rsp+1F0h] [rbp-98h]
  __int64 v165; // [rsp+1F8h] [rbp-90h]
  _BYTE v166[136]; // [rsp+200h] [rbp-88h] BYREF

  v2 = a2;
  v4 = sub_BFBE70(a2);
  if ( v4 )
  {
    v45 = (const char *)sub_FBD4B0(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v45, 69) )
      return (unsigned int)sub_C3C920(a1, v2);
  }
  v5 = *a1;
  v140 = 0;
  v141 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v115 = *(_DWORD *)(v5 + 272);
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
  v10 = *(_QWORD *)(v2 + 32);
  ++*(_DWORD *)(v6 + 144);
  v11 = sub_BFB9F0(v10);
  v114 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v148;
  v147 = 0x800000000LL;
  v17 = *(unsigned int *)(v2 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v143 = 0;
  v121 = v17;
  LOBYTE(v17) = *(_BYTE *)(v2 + 2);
  v144 |= 1u;
  v145 = 0;
  v150 = 0;
  v142 = 0u;
  v120 = (__m128i **)(v2 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v118 = v16;
    if ( !sub_C1BF80(*v18, a2, v12, v13) )
    {
      v24 = sub_C14310(*a1, v2);
      goto LABEL_27;
    }
    v151[0] = nullptr;
    v155 = v157;
    v156 = 0x800000000LL;
    v47 = *a1;
    v48 = v118;
    v151[1] = nullptr;
    v152 = 0;
    v153 |= 1u;
    v154 = 0;
    v159 = 0;
    v160.m128i_i64[0] = v47;
    v160.m128i_i64[1] = (__int64)v151;
    LOBYTE(v161) = 0;
    v24 = sub_C48CF0(&v160, v118, v43, (__int64)v151, v118, v44);
    if ( !(_BYTE)v24 )
      goto LABEL_65;
    v49 = *a1;
    v50 = v118;
    if ( v152 )
      goto LABEL_64;
    LOBYTE(v117) = v158 & 1;
    if ( (v158 & 1) != 0 )
    {
      v113 = v50;
      v87 = (unsigned __int8 **)sub_E33C10(v49, v50, 2460, 0);
      if ( v87 )
        sub_AE9DF0(v87, v113, 0xFu);
      goto LABEL_85;
    }
    if ( !v151[0]
      || ((__int64)v151[0] & 3) != 0
      || (v51 = (unsigned __int64)v151[0] & 0xFFFFFFFFFFFFFFFCLL,
          v128 = (unsigned __int64)v151[0] & 0xFFFFFFFFFFFFFFFCLL,
          v130 = (unsigned __int64)v151[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v151[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(((unsigned __int64)v151[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_64:
      v24 = sub_C14310(v49, v50);
      goto LABEL_65;
    }
    v52 = *(_QWORD *)(v49 + 16);
    v132 = *(_QWORD *)(v51 + 48);
    v30 = (__m128i *)sub_F68450(*v18, v48, v132, v51, v50);
    v53 = sub_A82490(v52, (__int64)v30, v132);
    v54 = v130;
    if ( !v53 )
    {
      v24 = sub_C14310(*a1, v2);
      goto LABEL_65;
    }
    if ( (*(_WORD *)v2 & 0x1FF) == 0x5B )
    {
      v55 = (*(_BYTE *)(v2 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v55 == 15 || (_DWORD)v55 == 20 || (v56 = sub_C10590(v55), v54 = v130, v56) )
      {
        v88 = *a1;
        v89 = *(_QWORD *)(*a1 + 32);
        v90 = *(_DWORD *)(v89 + 128);
        v91 = (unsigned int)(*(_DWORD *)(v89 + 160) + 1);
        *(_DWORD *)(v89 + 160) = v91;
        v114 = (v91 << 32) | v90;
        if ( (*(_BYTE *)(v128 + 28) & 0x7Fu) - 35 <= 3
          && (v131 = v54, v92 = sub_B98200((_QWORD *)v128, 0xFFFFFFFF00000000LL), v88 = *a1, v54 = v131, v92) )
        {
          v93 = v121 - 1;
          v94 = (__int64)(v120 + 1);
        }
        else
        {
          v93 = v121;
          v94 = (__int64)v120;
        }
        v138 = v54;
        v95 = sub_C57730(v94, v93, v128, v114, v88, v128, 1, (__int64)&v142);
        v30 = v109;
        v24 = v95;
        if ( !(_BYTE)v95 )
          goto LABEL_65;
        v129 = v128;
        v54 = v138;
        v133 = v2;
      }
      else
      {
        v133 = v2;
        v129 = 0;
      }
    }
    else
    {
      v129 = 0;
      v133 = 0;
    }
    if ( (*(_BYTE *)(v128 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v137 = v54;
      v57 = sub_B98200((_QWORD *)v128, (__int64)v30);
      v61 = v137;
      if ( v57 || v133 && (v62 = sub_B979F0((_QWORD *)v128), v61 = v137, v62) )
      {
        v96 = *a1;
        if ( !v121 )
        {
          v24 = sub_C14310(v96, v2);
          goto LABEL_65;
        }
        v139 = v61;
        v30 = *v120;
        v24 = sub_C5DF90(v96, *v120, (__int64)&v142, v58, v59, v60);
        if ( !(_BYTE)v24 )
          goto LABEL_65;
        v97 = !sub_B979F0((_QWORD *)v128);
        v98 = nullptr;
        if ( v97 )
          v98 = &v142;
        v26 = v98;
        v99 = sub_E32240(*a1);
        v25 = v139;
        if ( *(char *)(v99 + 1) < 0 && v133 && ((*(_BYTE *)(v133 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v128 + 82) < 0 )
        {
          v24 = v149;
          LOBYTE(v24) = (v149 & 2) != 0;
          if ( (v149 & 2) != 0 )
            goto LABEL_85;
          if ( (v144 & 1) != 0 )
            goto LABEL_65;
          v30 = *v120;
          v107 = sub_C34190(*a1, (__int64)*v120, (unsigned __int64)&v142, v22, v23);
          v25 = v139;
          v24 = v107;
          if ( !(_BYTE)v107 )
            goto LABEL_65;
        }
        --v121;
        ++v120;
        goto LABEL_99;
      }
      v134 = v61;
      v63 = sub_B98950(v128);
      v54 = v134;
      if ( v63 )
      {
        v100 = sub_B72690(v128 + 72);
        if ( v100 )
          v100 -= 64LL;
        v101 = sub_B96F60(v100);
        v102 = sub_B96EF0(v100);
        v25 = v101;
        v26 = nullptr;
        if ( v102 )
        {
          v136 = v25;
          v103 = (unsigned int *)sub_B77B50(v128);
          v104 = (_QWORD *)sub_B77A30(v136);
          v105 = *v103;
          v30 = (__m128i *)(v103 + 2);
          v160.m128i_i64[0] = 0;
          v25 = sub_BC3B30(v104, (__int64)(v103 + 2), v105, (__int64)&v160);
        }
        goto LABEL_99;
      }
    }
    v30 = nullptr;
    v135 = v54;
    if ( sub_B760E0(v128, nullptr, nullptr) )
    {
      v160.m128i_i64[0] = *(_QWORD *)(v128 + 40);
      v64 = sub_C1D2C0(&v160);
      v66 = *a1;
      if ( v64 )
      {
        v160 = 0u;
        v164 = v166;
        v161 = 0;
        v162 |= 1u;
        v163 = 0;
        v165 = 0x800000000LL;
        v166[65] = 0;
        v24 = *(unsigned __int8 *)(v66 + 914);
        if ( !(_BYTE)v24 )
        {
          v22 = *(unsigned int *)(v66 + 900);
          if ( !(_DWORD)v22 )
          {
            v24 = sub_C475F0(v66, v2, (__int64)&v160);
            if ( (_BYTE)v24 )
            {
              sub_C0F890((__int64)&v160, (__int64)&v140);
              v69 = sub_C56320(v5, 1, v115, v67, v68);
              v115 = -1;
              v24 = v69;
            }
            if ( v164 != v166 )
              free(v164);
          }
          goto LABEL_65;
        }
LABEL_85:
        v24 = 0;
        goto LABEL_65;
      }
      v24 = sub_C4C3B0(v66, v2, v65, v22, v23);
      if ( (_BYTE)v24 )
      {
        v106 = sub_C56320(v5, 1, v115, v22, v23);
        v115 = -1;
        v24 = v106;
      }
LABEL_65:
      v42 = v155;
      if ( v155 != v157 )
      {
LABEL_66:
        free(v42);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v25 = v135;
    v26 = nullptr;
LABEL_99:
    if ( v155 != v157 )
    {
      v127 = v25;
      free(v155);
      v25 = v127;
    }
    if ( v129 )
    {
LABEL_12:
      v160.m128i_i64[0] = (__int64)&v161;
      v160.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v122 = v25;
          v24 = (unsigned __int8)v117;
          LOBYTE(v24) = !sub_AED5B0(v25) | v117;
          if ( (_BYTE)v24 )
          {
            v34 = sub_B98200((_QWORD *)v122, (__int64)v30);
            v25 = v122;
            if ( v34 )
            {
              v24 = sub_C32EA0(*a1, (_DWORD *)v2, v26, 4 * (unsigned int)((*(_BYTE *)(v122 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_23;
              v25 = v122;
            }
          }
          else
          {
            v25 = sub_C33CC0(*a1, (_DWORD *)v2, v26, v122, (__int64)&v160);
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
        v24 = sub_C54370(*a1, (_DWORD *)v2, v26, v41);
        if ( !(_BYTE)v24 )
          goto LABEL_23;
      }
      else
      {
        v123 = v25;
        v151[0] = nullptr;
        v119 = (_WORD *)sub_B7F750((_QWORD *)v25, v151, v32, v22, v23, v31);
        v80 = sub_C00A40(v2, (__int64)v151, v77, v78, v79);
        v83 = sub_B771C0(v123, (__int64)v151, v81, v82);
        v85 = v123;
        v124 = v80;
        if ( v83 )
          v26 = &v142;
        v24 = sub_C1D660(*a1, v80, v85, v151[0], (__int64)v119, v84);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v108 + 1) = v114,
              *(_QWORD *)&v108 = v129,
              v24 = sub_C57060(v124, (__int64)v151[0], v26, v2, (_DWORD **)v120, v119, v108, *a1, (__int64)&v140, 0),
              !(_BYTE)v24)
          || (v23 = v160.m128i_u32[2], v160.m128i_i32[2])
          && (v24 = sub_C2E3E0(*a1, v2, (__int64)&v140, v160.m128i_i64[0], v160.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_23:
          v42 = (void *)v160.m128i_i64[0];
          if ( (__int64 *)v160.m128i_i64[0] == &v161 )
            goto LABEL_27;
          goto LABEL_66;
        }
      }
      v86 = sub_C56320(v5, 1, v115, v22, v23);
      v115 = -1;
      v24 = v86;
      goto LABEL_23;
    }
    v20 = *a1;
    goto LABEL_10;
  }
  v20 = *a1;
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v116 = (_QWORD *)v16;
    v24 = sub_C5DF90(v20, *(__m128i **)(v16 + 16), (__int64)&v142, v13, v16, v14);
    if ( !(_BYTE)v24 )
      goto LABEL_27;
    v16 = (__int64)v116;
    v20 = *a1;
    v25 = v116[3];
    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v26 = &v142;
      v117 = (*v116 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_75:
    v24 = sub_C14310(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v111 = v16;
      v70 = sub_E32240(v20);
      v73 = v111;
      if ( *(char *)(v70 + 1) >= 0 )
      {
        sub_E33C90(*a1, v111, 2480, 0);
        v73 = v111;
      }
      v112 = (_DWORD *)v73;
      v74 = sub_C5DF90(*a1, *(__m128i **)(v73 + 16), (__int64)&v142, v71, v73, v72);
      v23 = (__int64)v112;
      v24 = v74;
      if ( (_BYTE)v74 )
      {
        v75 = sub_C94110(v112);
        v24 = sub_C54370(*a1, v112, &v142, v75);
      }
      goto LABEL_27;
    }
    goto LABEL_75;
  }
  v126 = v16;
  v76 = sub_C5E0F0(v20, v16, (__int64)&v142, 0, v16, v14);
  v25 = v76;
  if ( !v76 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v20 = *a1;
  LOBYTE(v117) = 0;
  v26 = &v142;
  v16 = v126;
  if ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_75;
LABEL_10:
  v27 = *(_QWORD *)(v20 + 32);
  v28 = *(_DWORD *)(v27 + 128);
  v29 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
  *(_DWORD *)(v27 + 160) = v29;
  v114 = (v29 << 32) | v28;
  v30 = (__m128i *)v121;
  v125 = v25;
  v24 = sub_C57730((__int64)v120, v121, v25, v114, v20, v25, 0, (__int64)&v142);
  v32 = v110;
  if ( (_BYTE)v24 )
  {
    v25 = v125;
    v129 = v125;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v148 )
    free(ptr);
  if ( v115 != -1 )
    sub_C56320(v5, 0, v115, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  if ( (_BYTE)v24 )
    sub_A54D20(a1[1], (int *)&v140);
  if ( v140 > 1 )
    sub_A4F8E0((int *)&v140);
  return v24;
}
