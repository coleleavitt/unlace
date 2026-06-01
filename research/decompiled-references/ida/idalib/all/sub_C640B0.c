__int64 __fastcall sub_C640B0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  __int16 v22; // ax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r11
  __m128i *v27; // r12
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __m128i *v31; // rsi
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  char v34; // al
  unsigned int v35; // eax
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // r9d
  unsigned int v47; // edx
  __int64 v49; // rax
  __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  __int64 v52; // r15
  bool v53; // al
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdi
  char v56; // al
  unsigned __int64 v57; // r15
  char v58; // al
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // r11
  bool v63; // al
  char v64; // al
  bool v65; // al
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // eax
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  _WORD *v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r9
  int v83; // eax
  unsigned __int8 **v84; // rax
  __int64 v85; // r8
  __int64 v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rdx
  char v89; // al
  __int64 v90; // rsi
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // rdi
  __int64 v94; // rax
  bool v95; // zf
  __m128i *v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // r15
  __int64 v99; // r12
  bool v100; // al
  unsigned int *v101; // r15
  _QWORD *v102; // rax
  __int64 v103; // rdx
  int v104; // eax
  unsigned int v105; // eax
  __int128 v106; // [rsp-30h] [rbp-278h]
  __m128i *v107; // [rsp-10h] [rbp-258h]
  __int64 v108; // [rsp-8h] [rbp-250h]
  unsigned __int8 v109; // [rsp+0h] [rbp-248h]
  unsigned __int8 v110; // [rsp+0h] [rbp-248h]
  unsigned __int8 v111; // [rsp+0h] [rbp-248h]
  __int64 v112; // [rsp+8h] [rbp-240h]
  unsigned int v113; // [rsp+14h] [rbp-234h]
  unsigned __int8 v114; // [rsp+14h] [rbp-234h]
  __m128i **v115; // [rsp+18h] [rbp-230h]
  __int64 v116; // [rsp+20h] [rbp-228h]
  __int64 v117; // [rsp+20h] [rbp-228h]
  unsigned int v118; // [rsp+20h] [rbp-228h]
  unsigned __int64 v120; // [rsp+30h] [rbp-218h]
  __int64 v121; // [rsp+30h] [rbp-218h]
  unsigned __int64 v122; // [rsp+30h] [rbp-218h]
  __int64 v123; // [rsp+40h] [rbp-208h]
  unsigned __int64 v124; // [rsp+48h] [rbp-200h]
  unsigned __int64 v125; // [rsp+50h] [rbp-1F8h]
  unsigned __int64 v126; // [rsp+50h] [rbp-1F8h]
  unsigned __int64 v127; // [rsp+50h] [rbp-1F8h]
  __int64 v128; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v129; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v130; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v131; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v132; // [rsp+58h] [rbp-1F0h]
  unsigned __int64 v133; // [rsp+58h] [rbp-1F0h]
  __int64 v134; // [rsp+58h] [rbp-1F0h]
  __m128i v135; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v136; // [rsp+70h] [rbp-1D8h]
  char v137; // [rsp+78h] [rbp-1D0h]
  __int64 v138; // [rsp+88h] [rbp-1C0h]
  void *v139; // [rsp+90h] [rbp-1B8h]
  __int64 v140; // [rsp+98h] [rbp-1B0h]
  _BYTE v141[64]; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned __int8 v142; // [rsp+E0h] [rbp-168h]
  char v143; // [rsp+E1h] [rbp-167h]
  char *v144[2]; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v145; // [rsp+100h] [rbp-148h]
  char v146; // [rsp+108h] [rbp-140h]
  __int64 v147; // [rsp+118h] [rbp-130h]
  void *v148; // [rsp+120h] [rbp-128h]
  __int64 v149; // [rsp+128h] [rbp-120h]
  _BYTE v150[64]; // [rsp+130h] [rbp-118h] BYREF
  char v151; // [rsp+170h] [rbp-D8h]
  char v152; // [rsp+171h] [rbp-D7h]
  __m128i ptr; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+190h] [rbp-B8h] BYREF
  char v155; // [rsp+198h] [rbp-B0h]
  __int64 v156; // [rsp+1A8h] [rbp-A0h]
  void *v157; // [rsp+1B0h] [rbp-98h]
  __int64 v158; // [rsp+1B8h] [rbp-90h]
  _BYTE v159[136]; // [rsp+1C0h] [rbp-88h] BYREF

  v3 = a2;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 32);
  v113 = *(_DWORD *)(*a1 + 272);
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
  v135 = 0u;
  v16 = *(_QWORD *)(v11 + 8);
  v17 = v11;
  v139 = v141;
  v140 = 0x800000000LL;
  v18 = *(unsigned int *)(v3 + 16);
  v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v136 = 0;
  v116 = v18;
  LOBYTE(v18) = *(_BYTE *)(v3 + 2);
  v137 |= 1u;
  v138 = 0;
  v143 = 0;
  v112 = 0;
  v115 = (__m128i **)(v3 + 8 * (((v18 & 8) != 0) + 1LL) + 32);
  v20 = *(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1F3 )
  {
    v21 = *a1;
    v22 = *(_WORD *)v17 & 0x1FF;
    if ( v22 == 46 )
    {
      LODWORD(v25) = sub_C5DF90(v21, *(__m128i **)(v17 + 16), (__int64)&v135, v13, v14, v15);
      if ( !(_BYTE)v25 )
        goto LABEL_26;
      v26 = *(_QWORD *)(v17 + 24);
      v21 = *a1;
      if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v27 = &v135;
        v123 = (*(_QWORD *)v17 >> 20) & 1LL;
        goto LABEL_9;
      }
      goto LABEL_68;
    }
    if ( ((v22 + 394) & 0x1FFu) <= 1 )
    {
      v75 = sub_C5E0F0(v21, v17, (__int64)&v135, 0, v14, v15);
      v26 = v75;
      if ( !v75 )
      {
        LODWORD(v25) = 0;
        goto LABEL_26;
      }
      v21 = *a1;
      LOBYTE(v123) = 0;
      v27 = &v135;
      if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_9;
    }
    else if ( v22 == 102 )
    {
      if ( *(char *)(sub_E32240(v21) + 1) >= 0 )
        sub_E33C90(*a1, v17, 2480, 0);
      LODWORD(v25) = sub_C5DF90(*a1, *(__m128i **)(v17 + 16), (__int64)&v135, v71, v72, v73);
      if ( (_BYTE)v25 )
      {
        v74 = sub_C94110(v17);
        LODWORD(v25) = sub_C54370(*a1, (_DWORD *)v17, &v135, v74);
      }
      goto LABEL_26;
    }
LABEL_68:
    LODWORD(v25) = sub_C14310(v21, v17);
    goto LABEL_26;
  }
  if ( !sub_C1BF80(*v19, a2, v12, v13) )
  {
    LODWORD(v25) = sub_C14310(*a1, v3);
    goto LABEL_26;
  }
  v144[0] = nullptr;
  v148 = v150;
  v149 = 0x800000000LL;
  v49 = *a1;
  v144[1] = nullptr;
  ptr.m128i_i64[0] = v49;
  v145 = 0;
  v146 |= 1u;
  v147 = 0;
  v152 = 0;
  ptr.m128i_i64[1] = (__int64)v144;
  LOBYTE(v154) = 0;
  LODWORD(v25) = sub_C48CF0(&ptr, v17, v44, (__int64)v144, v45, v46);
  if ( !(_BYTE)v25 )
    goto LABEL_57;
  v50 = *a1;
  if ( v145 )
    goto LABEL_65;
  LOBYTE(v123) = v151 & 1;
  if ( (v151 & 1) != 0 )
  {
    v84 = (unsigned __int8 **)sub_E33C10(v50, v17, 2460, 0);
    if ( v84 )
      sub_AE9DF0(v84, v17, 0xFu);
    goto LABEL_78;
  }
  if ( !v144[0]
    || ((__int64)v144[0] & 3) != 0
    || (v51 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        v124 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        v126 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        ((unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (*(_BYTE *)(((unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_65:
    LODWORD(v25) = sub_C14310(v50, v17);
    goto LABEL_57;
  }
  v52 = *(_QWORD *)(v50 + 16);
  v128 = *(_QWORD *)(v51 + 48);
  v31 = (__m128i *)sub_F68450(*v19, v51, v128, v23, v24);
  v53 = sub_A82490(v52, (__int64)v31, v128);
  v54 = v126;
  if ( !v53 )
  {
    LODWORD(v25) = sub_C14310(*a1, v3);
    goto LABEL_57;
  }
  if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
  {
    v55 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
    if ( (_DWORD)v55 == 15 || (_DWORD)v55 == 20 || (v56 = sub_C10590(v55), v54 = v126, v56) )
    {
      v85 = *a1;
      v86 = *(_QWORD *)(*a1 + 32);
      v87 = *(_DWORD *)(v86 + 128);
      v88 = (unsigned int)(*(_DWORD *)(v86 + 160) + 1);
      *(_DWORD *)(v86 + 160) = v88;
      v112 = (v88 << 32) | v87;
      if ( (*(_BYTE *)(v124 + 28) & 0x7Fu) - 35 <= 3
        && (v127 = v54, v89 = sub_B98200((_QWORD *)v124, 0xFFFFFFFF00000000LL), v85 = *a1, v54 = v127, v89) )
      {
        v90 = v116 - 1;
        v91 = (__int64)(v115 + 1);
      }
      else
      {
        v90 = v116;
        v91 = (__int64)v115;
      }
      v132 = v54;
      v92 = sub_C57730(v91, v90, v124, v112, v85, v124, 1, (__int64)&v135);
      v31 = v107;
      LODWORD(v25) = v92;
      if ( !(_BYTE)v92 )
        goto LABEL_57;
      v125 = v124;
      v54 = v132;
      v57 = v3;
    }
    else
    {
      v125 = 0;
      v57 = v3;
    }
  }
  else
  {
    v125 = 0;
    v57 = 0;
  }
  if ( (*(_BYTE *)(v124 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v129 = v54;
    v58 = sub_B98200((_QWORD *)v124, (__int64)v31);
    v62 = v129;
    if ( v58 || v57 && (v63 = sub_B979F0((_QWORD *)v124), v62 = v129, v63) )
    {
      v93 = *a1;
      if ( !v116 )
      {
        LODWORD(v25) = sub_C14310(v93, v3);
        goto LABEL_57;
      }
      v133 = v62;
      v31 = *v115;
      LODWORD(v25) = sub_C5DF90(v93, *v115, (__int64)&v135, v59, v60, v61);
      if ( !(_BYTE)v25 )
        goto LABEL_57;
      v95 = !sub_B979F0((_QWORD *)v124);
      v96 = nullptr;
      if ( v95 )
        v96 = &v135;
      v27 = v96;
      v97 = sub_E32240(*a1);
      v26 = v133;
      if ( *(char *)(v97 + 1) < 0 && v57 && ((*(_BYTE *)(v57 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v124 + 82) < 0 )
      {
        LODWORD(v25) = v142;
        LOBYTE(v25) = (v142 & 2) != 0;
        if ( (v142 & 2) != 0 )
          goto LABEL_78;
        if ( (v137 & 1) != 0 )
          goto LABEL_57;
        v31 = *v115;
        v105 = sub_C34190(*a1, (__int64)*v115, (unsigned __int64)&v135, v23, v24);
        v26 = v133;
        v25 = v105;
        if ( !(_BYTE)v105 )
          goto LABEL_57;
      }
      --v116;
      ++v115;
LABEL_92:
      if ( v148 != v150 )
      {
        v122 = v26;
        free(v148);
        v26 = v122;
      }
      if ( v125 )
        goto LABEL_11;
      v21 = *a1;
LABEL_9:
      v28 = *(_QWORD *)(v21 + 32);
      v29 = *(_DWORD *)(v28 + 128);
      v30 = (unsigned int)(*(_DWORD *)(v28 + 160) + 1);
      *(_DWORD *)(v28 + 160) = v30;
      v112 = (v30 << 32) | v29;
      v31 = (__m128i *)v116;
      v120 = v26;
      v25 = (unsigned int)sub_C57730((__int64)v115, v116, v26, v112, v21, v26, 0, (__int64)&v135);
      v32 = v108;
      if ( !(_BYTE)v25 )
        goto LABEL_26;
      v26 = v120;
      v125 = v120;
LABEL_11:
      ptr.m128i_i64[0] = (__int64)&v154;
      ptr.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v26 + 28) & 0x7F;
      if ( v27 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v117 = v26;
          if ( (unsigned __int8)v123 | !sub_AED5B0(v26) )
          {
            v34 = sub_B98200((_QWORD *)v117, (__int64)v31);
            v26 = v117;
            if ( v34 )
            {
              v35 = sub_C32EA0(*a1, (_DWORD *)v3, v27, 4 * (unsigned int)((*(_BYTE *)(v117 + 28) & 0x7F) == 36) + 5, 0);
              v25 = v35;
              if ( !(_BYTE)v35 )
                goto LABEL_22;
              v26 = v117;
            }
          }
          else
          {
            v94 = sub_C33CC0(*a1, (_DWORD *)v3, v27, v117, (__int64)&ptr);
            v25 = 0;
            v26 = v94;
            if ( !v94 )
              goto LABEL_22;
          }
          v33 = *(_BYTE *)(v26 + 28) & 0x7F;
        }
      }
      if ( v33 == 36 )
      {
        v36 = *(_QWORD *)(*a1 + 16);
        v37 = sub_B72690(v26 + 72);
        v41 = v37 - 64;
        if ( v37 )
          v37 -= 64LL;
        v42 = sub_A7A9D0(v36, v37, v41, v38, v39, v40);
        LODWORD(v25) = sub_C54370(*a1, (_DWORD *)v3, v27, v42);
        if ( !(_BYTE)v25 )
          goto LABEL_22;
      }
      else
      {
        v121 = v26;
        v144[0] = nullptr;
        v76 = (_WORD *)sub_B7F750((_QWORD *)v26, v144, v32, v23, v24, v25);
        v118 = sub_C00A40(v3, (__int64)v144, v77, v78, v79);
        if ( (unsigned __int8)sub_B771C0(v121, (__int64)v144, v80, v81) )
          v27 = &v135;
        LODWORD(v25) = sub_C1D660(*a1, v118, v121, v144[0], (__int64)v76, v82);
        if ( !(_BYTE)v25
          || (*((_QWORD *)&v106 + 1) = v112,
              *(_QWORD *)&v106 = v125,
              LODWORD(v25) = sub_C57060(v118, (__int64)v144[0], v27, v3, (_DWORD **)v115, v76, v106, *a1, a3, 0),
              !(_BYTE)v25)
          || (v24 = ptr.m128i_u32[2], ptr.m128i_i32[2])
          && (LODWORD(v25) = sub_C2E3E0(*a1, v3, a3, ptr.m128i_i64[0], ptr.m128i_u32[2]), !(_BYTE)v25) )
        {
LABEL_22:
          v43 = (void *)ptr.m128i_i64[0];
          if ( (__int64 *)ptr.m128i_i64[0] == &v154 )
            goto LABEL_26;
          goto LABEL_23;
        }
      }
      v83 = sub_C56320(v5, 1, v113, v23, v24);
      v113 = -1;
      LODWORD(v25) = v83;
      goto LABEL_22;
    }
    v130 = v62;
    v64 = sub_B98950(v124);
    v54 = v130;
    if ( v64 )
    {
      v98 = sub_B72690(v124 + 72);
      if ( v98 )
        v98 -= 64LL;
      v99 = sub_B96F60(v98);
      v100 = sub_B96EF0(v98);
      v26 = v99;
      v27 = nullptr;
      if ( v100 )
      {
        v134 = v26;
        v101 = (unsigned int *)sub_B77B50(v124);
        v102 = (_QWORD *)sub_B77A30(v134);
        v103 = *v101;
        v31 = (__m128i *)(v101 + 2);
        ptr.m128i_i64[0] = 0;
        v26 = sub_BC3B30(v102, (__int64)(v101 + 2), v103, (__int64)&ptr);
      }
      goto LABEL_92;
    }
  }
  v31 = nullptr;
  v131 = v54;
  if ( !sub_B760E0(v124, nullptr, nullptr) )
  {
    v26 = v131;
    v27 = nullptr;
    goto LABEL_92;
  }
  ptr.m128i_i64[0] = *(_QWORD *)(v124 + 40);
  v65 = sub_C1D2C0(&ptr);
  v67 = *a1;
  if ( v65 )
  {
    ptr = 0u;
    v157 = v159;
    v154 = 0;
    v155 |= 1u;
    v156 = 0;
    v158 = 0x800000000LL;
    v159[65] = 0;
    LODWORD(v25) = *(unsigned __int8 *)(v67 + 914);
    if ( !(_BYTE)v25 )
    {
      v23 = *(unsigned int *)(v67 + 900);
      if ( !(_DWORD)v23 )
      {
        LODWORD(v25) = sub_C475F0(v67, v3, (__int64)&ptr);
        if ( (_BYTE)v25 )
        {
          sub_C0F890((__int64)&ptr, a3);
          v70 = sub_C56320(v5, 1, v113, v68, v69);
          v113 = -1;
          LODWORD(v25) = v70;
        }
        if ( v157 != v159 )
        {
          v111 = v25;
          free(v157);
          LODWORD(v25) = v111;
        }
      }
      goto LABEL_57;
    }
LABEL_78:
    LODWORD(v25) = 0;
    goto LABEL_57;
  }
  LODWORD(v25) = sub_C4C3B0(v67, v3, v66, v23, v24);
  if ( (_BYTE)v25 )
  {
    v104 = sub_C56320(v5, 1, v113, v23, v24);
    v113 = -1;
    LODWORD(v25) = v104;
  }
LABEL_57:
  v43 = v148;
  if ( v148 != v150 )
  {
LABEL_23:
    v109 = v25;
    free(v43);
    LODWORD(v25) = v109;
  }
LABEL_26:
  if ( v139 != v141 )
  {
    v110 = v25;
    free(v139);
    LODWORD(v25) = v110;
  }
  v47 = v113;
  if ( v113 != -1 )
  {
    v114 = v25;
    sub_C56320(v5, 0, v47, v23, v24);
    LODWORD(v25) = v114;
  }
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  return (unsigned int)v25;
}
