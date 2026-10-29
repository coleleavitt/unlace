__int64 __fastcall sub_C3F550(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r12d
  __int64 v25; // r11
  __m128i *v26; // r14
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __m128i *v30; // rsi
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // r12
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned int v46; // eax
  void *v47; // rsi
  __int64 v48; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r9
  unsigned __int64 v53; // rsi
  __int64 v54; // r12
  bool v55; // al
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // rdi
  char v58; // al
  char v59; // al
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r11
  bool v64; // al
  char v65; // al
  bool v66; // al
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned int v71; // eax
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // r12d
  __int64 v82; // rdx
  __int64 v83; // rcx
  char v84; // al
  __int64 v85; // r9
  __int64 v86; // r11
  unsigned int v87; // eax
  unsigned __int8 **v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int v91; // ecx
  __int64 v92; // rdx
  char v93; // al
  __int64 v94; // rsi
  __int64 v95; // rdi
  unsigned int v96; // eax
  __int64 v97; // rdi
  bool v98; // zf
  __m128i *v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v104; // r12
  bool v105; // al
  unsigned int *v106; // r12
  _QWORD *v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // eax
  unsigned int v110; // eax
  __int128 v111; // [rsp-30h] [rbp-2B8h]
  __m128i *v112; // [rsp-10h] [rbp-298h]
  __int64 v113; // [rsp-8h] [rbp-290h]
  __int64 v114; // [rsp+0h] [rbp-288h]
  _DWORD *v115; // [rsp+0h] [rbp-288h]
  __int64 v116; // [rsp+0h] [rbp-288h]
  __int64 v117; // [rsp+8h] [rbp-280h]
  unsigned int v118; // [rsp+14h] [rbp-274h]
  _QWORD *v119; // [rsp+18h] [rbp-270h]
  __int64 v120; // [rsp+18h] [rbp-270h]
  __int64 v121; // [rsp+18h] [rbp-270h]
  _WORD *v122; // [rsp+18h] [rbp-270h]
  __m128i **v123; // [rsp+20h] [rbp-268h]
  __int64 v124; // [rsp+28h] [rbp-260h]
  __int64 v125; // [rsp+28h] [rbp-260h]
  __int64 v126; // [rsp+28h] [rbp-260h]
  unsigned int v127; // [rsp+28h] [rbp-260h]
  __int64 v128; // [rsp+30h] [rbp-258h]
  __int64 v129; // [rsp+30h] [rbp-258h]
  __int64 v130; // [rsp+30h] [rbp-258h]
  unsigned __int64 v131; // [rsp+40h] [rbp-248h]
  unsigned __int64 v132; // [rsp+48h] [rbp-240h]
  unsigned __int64 v133; // [rsp+48h] [rbp-240h]
  unsigned __int64 v134; // [rsp+48h] [rbp-240h]
  __int64 v135; // [rsp+50h] [rbp-238h]
  unsigned __int64 v136; // [rsp+50h] [rbp-238h]
  unsigned __int64 v137; // [rsp+50h] [rbp-238h]
  __int64 v138; // [rsp+50h] [rbp-238h]
  __int64 v139; // [rsp+50h] [rbp-238h]
  unsigned __int64 v140; // [rsp+58h] [rbp-230h]
  unsigned __int64 v141; // [rsp+58h] [rbp-230h]
  __int64 v142; // [rsp+58h] [rbp-230h]
  unsigned int v143; // [rsp+60h] [rbp-228h] BYREF
  char v144; // [rsp+64h] [rbp-224h]
  void *v145; // [rsp+68h] [rbp-220h]
  unsigned int v146; // [rsp+70h] [rbp-218h]
  char v147; // [rsp+74h] [rbp-214h]
  int v148; // [rsp+78h] [rbp-210h]
  __m128i v149; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v150; // [rsp+B0h] [rbp-1D8h]
  char v151; // [rsp+B8h] [rbp-1D0h]
  __int64 v152; // [rsp+C8h] [rbp-1C0h]
  void *v153; // [rsp+D0h] [rbp-1B8h]
  __int64 v154; // [rsp+D8h] [rbp-1B0h]
  _BYTE v155[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v156; // [rsp+120h] [rbp-168h]
  char v157; // [rsp+121h] [rbp-167h]
  void *v158; // [rsp+130h] [rbp-158h] BYREF
  __int64 v159; // [rsp+138h] [rbp-150h]
  __int64 v160; // [rsp+140h] [rbp-148h]
  char v161; // [rsp+148h] [rbp-140h]
  __int64 v162; // [rsp+158h] [rbp-130h]
  void *v163; // [rsp+160h] [rbp-128h]
  __int64 v164; // [rsp+168h] [rbp-120h]
  _BYTE v165[64]; // [rsp+170h] [rbp-118h] BYREF
  char v166; // [rsp+1B0h] [rbp-D8h]
  char v167; // [rsp+1B1h] [rbp-D7h]
  __m128i ptr; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v169; // [rsp+1D0h] [rbp-B8h] BYREF
  int v170; // [rsp+1D8h] [rbp-B0h]
  __int64 v171; // [rsp+1E8h] [rbp-A0h]
  void *v172; // [rsp+1F0h] [rbp-98h]
  __int64 v173; // [rsp+1F8h] [rbp-90h]
  _BYTE v174[136]; // [rsp+200h] [rbp-88h] BYREF

  v2 = a2;
  v4 = *a1;
  v143 = 0;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 272);
  v144 &= ~1u;
  v118 = v6;
  v7 = *(unsigned int *)(v5 + 148);
  v8 = *(_DWORD *)(v5 + 160) + 1;
  v9 = *(unsigned int *)(v5 + 144);
  *(_DWORD *)(v5 + 160) = v8;
  if ( v9 + 1 > v7 )
  {
    a2 = v5 + 152;
    sub_22134E0(v5 + 136, v5 + 152, v9 + 1, 4);
    v9 = *(unsigned int *)(v5 + 144);
  }
  *(_DWORD *)(*(_QWORD *)(v5 + 136) + 4 * v9) = v8;
  v10 = *(_QWORD *)(v2 + 32);
  ++*(_DWORD *)(v5 + 144);
  v11 = sub_BD7CB0(v10);
  v117 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  v153 = v155;
  v154 = 0x800000000LL;
  v17 = *(unsigned int *)(v2 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v150 = 0;
  v124 = v17;
  LOBYTE(v17) = *(_BYTE *)(v2 + 2);
  v151 |= 1u;
  v152 = 0;
  v157 = 0;
  v149 = 0u;
  v123 = (__m128i **)(v2 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1F3 )
  {
    v20 = *a1;
    v21 = *(_WORD *)v16 & 0x1FF;
    if ( v21 == 46 )
    {
      v119 = (_QWORD *)v16;
      v24 = sub_C3A250(v20, *(__m128i **)(v16 + 16), (__int64)&v149, v13, v14, v16);
      if ( !(_BYTE)v24 )
        goto LABEL_26;
      v16 = (__int64)v119;
      v20 = *a1;
      v25 = v119[3];
      if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v26 = &v149;
        v120 = (*v119 >> 20) & 1LL;
        goto LABEL_9;
      }
      goto LABEL_79;
    }
    if ( ((v21 + 394) & 0x1FFu) <= 1 )
    {
      v129 = v16;
      v77 = sub_C3A3B0(v20, v16, (__int64)&v149, 0, v14, v16);
      v25 = v77;
      if ( !v77 )
      {
        v24 = 0;
        goto LABEL_26;
      }
      v20 = *a1;
      LOBYTE(v120) = 0;
      v26 = &v149;
      v16 = v129;
      if ( (*(_BYTE *)(v77 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_9;
    }
    else if ( v21 == 102 )
    {
      v114 = v16;
      v72 = sub_E0E500(v20);
      v75 = v114;
      if ( *(char *)(v72 + 1) >= 0 )
      {
        sub_E0FF50(*a1, v114, 2480, 0);
        v75 = v114;
      }
      v115 = (_DWORD *)v75;
      v24 = sub_C3A250(*a1, *(__m128i **)(v75 + 16), (__int64)&v149, v73, v74, v75);
      if ( (_BYTE)v24 )
      {
        v76 = sub_C703D0(v115);
        v24 = sub_C30630(*a1, v115, &v149, v76);
      }
      goto LABEL_26;
    }
LABEL_79:
    v24 = sub_BF05D0(v20, v16);
    goto LABEL_26;
  }
  v121 = v16;
  if ( !sub_BF8240(*v18, a2, v12, v13) )
  {
    v24 = sub_BF05D0(*a1, v2);
    goto LABEL_26;
  }
  v158 = nullptr;
  v163 = v165;
  v164 = 0x800000000LL;
  v50 = *a1;
  v159 = 0;
  v160 = 0;
  v161 |= 1u;
  v162 = 0;
  v167 = 0;
  ptr.m128i_i64[0] = v50;
  ptr.m128i_i64[1] = (__int64)&v158;
  LOBYTE(v169) = 0;
  v24 = sub_C24FB0(&ptr, v121, v44, (__int64)&v158, v45, v121);
  if ( !(_BYTE)v24 )
    goto LABEL_67;
  v51 = *a1;
  v52 = v121;
  if ( v160 )
    goto LABEL_75;
  LOBYTE(v120) = v166 & 1;
  if ( (v166 & 1) != 0 )
  {
    v116 = v52;
    v88 = (unsigned __int8 **)sub_E0FED0(v51, v52, 2460, 0);
    if ( v88 )
      sub_AC60B0(v88, v116, 0xFu);
    goto LABEL_89;
  }
  if ( !v158
    || ((unsigned __int8)v158 & 3) != 0
    || (v53 = (unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFCLL,
        v131 = (unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFCLL,
        v133 = (unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFCLL,
        ((unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (*(_BYTE *)(((unsigned __int64)v158 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_75:
    v24 = sub_BF05D0(v51, v52);
    goto LABEL_67;
  }
  v54 = *(_QWORD *)(v51 + 16);
  v135 = *(_QWORD *)(v53 + 48);
  v30 = (__m128i *)sub_F44710(*v18, v53, v135, v22, v23);
  v55 = sub_A5E750(v54, (__int64)v30, v135);
  v56 = v133;
  if ( !v55 )
  {
    v24 = sub_BF05D0(*a1, v2);
    goto LABEL_67;
  }
  if ( (*(_WORD *)v2 & 0x1FF) == 0x5B )
  {
    v57 = (*(_BYTE *)(v2 + 3) >> 1) & 0x3F;
    if ( (_DWORD)v57 == 15 || (_DWORD)v57 == 20 || (v58 = sub_BEC850(v57), v56 = v133, v58) )
    {
      v89 = *a1;
      v90 = *(_QWORD *)(*a1 + 32);
      v91 = *(_DWORD *)(v90 + 128);
      v92 = (unsigned int)(*(_DWORD *)(v90 + 160) + 1);
      *(_DWORD *)(v90 + 160) = v92;
      v117 = (v92 << 32) | v91;
      if ( (*(_BYTE *)(v131 + 28) & 0x7Fu) - 35 <= 3
        && (v134 = v56, v93 = sub_B744C0((_QWORD *)v131, 0xFFFFFFFF00000000LL), v89 = *a1, v56 = v134, v93) )
      {
        v94 = v124 - 1;
        v95 = (__int64)(v123 + 1);
      }
      else
      {
        v94 = v124;
        v95 = (__int64)v123;
      }
      v141 = v56;
      v96 = sub_C339F0(v95, v94, v131, v117, v89, v131, 1, (__int64)&v149);
      v30 = v112;
      v24 = v96;
      if ( !(_BYTE)v96 )
        goto LABEL_67;
      v132 = v131;
      v56 = v141;
      v136 = v2;
    }
    else
    {
      v136 = v2;
      v132 = 0;
    }
  }
  else
  {
    v132 = 0;
    v136 = 0;
  }
  if ( (*(_BYTE *)(v131 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v140 = v56;
    v59 = sub_B744C0((_QWORD *)v131, (__int64)v30);
    v63 = v140;
    if ( v59 || v136 && (v64 = sub_B73CB0((_QWORD *)v131), v63 = v140, v64) )
    {
      v97 = *a1;
      if ( !v124 )
      {
        v24 = sub_BF05D0(v97, v2);
        goto LABEL_67;
      }
      v142 = v63;
      v30 = *v123;
      v24 = sub_C3A250(v97, *v123, (__int64)&v149, v60, v61, v62);
      if ( !(_BYTE)v24 )
        goto LABEL_67;
      v98 = !sub_B73CB0((_QWORD *)v131);
      v99 = nullptr;
      if ( v98 )
        v99 = &v149;
      v26 = v99;
      v100 = sub_E0E500(*a1);
      v25 = v142;
      if ( *(char *)(v100 + 1) < 0 && v136 && ((*(_BYTE *)(v136 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v131 + 82) < 0 )
      {
        v24 = v156;
        LOBYTE(v24) = (v156 & 2) != 0;
        if ( (v156 & 2) != 0 )
          goto LABEL_89;
        if ( (v151 & 1) != 0 )
          goto LABEL_67;
        v30 = *v123;
        v110 = sub_C10450(*a1, (__int64)*v123, (unsigned __int64)&v149, v22, v23);
        v25 = v142;
        v24 = v110;
        if ( !(_BYTE)v110 )
          goto LABEL_67;
      }
      --v124;
      ++v123;
LABEL_103:
      if ( v163 != v165 )
      {
        v130 = v25;
        free(v163);
        v25 = v130;
      }
      if ( v132 )
        goto LABEL_11;
      v20 = *a1;
LABEL_9:
      v27 = *(_QWORD *)(v20 + 32);
      v28 = *(_DWORD *)(v27 + 128);
      v29 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
      *(_DWORD *)(v27 + 160) = v29;
      v117 = (v29 << 32) | v28;
      v30 = (__m128i *)v124;
      v128 = v25;
      v24 = sub_C339F0((__int64)v123, v124, v25, v117, v20, v25, 0, (__int64)&v149);
      v32 = v113;
      if ( !(_BYTE)v24 )
        goto LABEL_26;
      v25 = v128;
      v132 = v128;
LABEL_11:
      ptr.m128i_i64[0] = (__int64)&v169;
      ptr.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v125 = v25;
          LOBYTE(v34) = sub_AC9870(v25);
          v34 ^= 1u;
          v24 = v34;
          LOBYTE(v24) = v120 | v34;
          if ( (unsigned __int8)v120 | (unsigned __int8)v34 )
          {
            v35 = sub_B744C0((_QWORD *)v125, (__int64)v30);
            v25 = v125;
            if ( v35 )
            {
              v24 = sub_C0F160(*a1, (_DWORD *)v2, v26, 4 * (unsigned int)((*(_BYTE *)(v125 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_22;
              v25 = v125;
            }
          }
          else
          {
            v25 = sub_C0FF80(*a1, (_DWORD *)v2, v26, v125, (__int64)&ptr);
            if ( !v25 )
              goto LABEL_22;
          }
          v33 = *(_BYTE *)(v25 + 28) & 0x7F;
        }
      }
      if ( v33 == 36 )
      {
        v36 = *(_QWORD *)(*a1 + 16);
        v37 = sub_B4E950(v25 + 72);
        v41 = v37 - 64;
        if ( v37 )
          v37 -= 64LL;
        v42 = sub_A56C90(v36, v37, v41, v38, v39, v40);
        v24 = sub_C30630(*a1, (_DWORD *)v2, v26, v42);
        if ( !(_BYTE)v24 )
          goto LABEL_22;
      }
      else
      {
        v126 = v25;
        v158 = nullptr;
        v122 = (_WORD *)sub_B5BA10((_QWORD *)v25, &v158, v32, v22, v23, v31);
        v81 = sub_BDCD00(v2, (__int64)&v158, v78, v79, v80);
        v84 = sub_B53480(v126, (__int64)&v158, v82, v83);
        v86 = v126;
        v127 = v81;
        if ( v84 )
          v26 = &v149;
        v24 = sub_BF9920(*a1, v81, v86, (char *)v158, (__int64)v122, v85);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v111 + 1) = v117,
              *(_QWORD *)&v111 = v132,
              v24 = sub_C33320(v127, (__int64)v158, v26, v2, (_DWORD **)v123, v122, v111, *a1, (__int64)&v143, 0),
              !(_BYTE)v24)
          || (v23 = ptr.m128i_u32[2], ptr.m128i_i32[2])
          && (v24 = sub_C0A6A0(*a1, v2, (__int64)&v143, ptr.m128i_i64[0], ptr.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_22:
          v43 = (void *)ptr.m128i_i64[0];
          if ( (__int64 *)ptr.m128i_i64[0] == &v169 )
            goto LABEL_26;
          goto LABEL_23;
        }
      }
      v87 = sub_C325E0(v4, 1, v118, v22, v23);
      v118 = -1;
      v24 = v87;
      goto LABEL_22;
    }
    v137 = v63;
    v65 = sub_B74C10(v131);
    v56 = v137;
    if ( v65 )
    {
      v101 = sub_B4E950(v131 + 72);
      if ( v101 )
        v101 -= 64LL;
      v102 = sub_B73220(v101);
      v103 = v101;
      v26 = nullptr;
      v104 = v102;
      v105 = sub_B731B0(v103);
      v25 = v104;
      if ( v105 )
      {
        v139 = v104;
        v106 = (unsigned int *)sub_B53E10(v131);
        v107 = (_QWORD *)sub_B53CF0(v139);
        v108 = *v106;
        v30 = (__m128i *)(v106 + 2);
        ptr.m128i_i64[0] = 0;
        v25 = sub_B9FDF0(v107, (__int64)(v106 + 2), v108, (__int64)&ptr);
      }
      goto LABEL_103;
    }
  }
  v30 = nullptr;
  v138 = v56;
  if ( !sub_B523A0(v131, nullptr, nullptr) )
  {
    v25 = v138;
    v26 = nullptr;
    goto LABEL_103;
  }
  ptr.m128i_i64[0] = *(_QWORD *)(v131 + 40);
  v66 = sub_BF9580(&ptr);
  v68 = *a1;
  if ( v66 )
  {
    ptr = 0u;
    v172 = v174;
    v169 = 0;
    LOBYTE(v170) = v170 | 1;
    v171 = 0;
    v173 = 0x800000000LL;
    v174[65] = 0;
    v24 = *(unsigned __int8 *)(v68 + 914);
    if ( !(_BYTE)v24 )
    {
      v22 = *(unsigned int *)(v68 + 900);
      if ( !(_DWORD)v22 )
      {
        v24 = sub_C238B0(v68, v2, (__int64)&ptr);
        if ( (_BYTE)v24 )
        {
          sub_BEBB50((__int64)&ptr, (__int64)&v143);
          v71 = sub_C325E0(v4, 1, v118, v69, v70);
          v118 = -1;
          v24 = v71;
        }
        if ( v172 != v174 )
          free(v172);
      }
      goto LABEL_67;
    }
LABEL_89:
    v24 = 0;
    goto LABEL_67;
  }
  v24 = sub_C28670(v68, v2, v67, v22, v23);
  if ( (_BYTE)v24 )
  {
    v109 = sub_C325E0(v4, 1, v118, v22, v23);
    v118 = -1;
    v24 = v109;
  }
LABEL_67:
  v43 = v163;
  if ( v163 != v165 )
LABEL_23:
    free(v43);
LABEL_26:
  if ( v153 != v155 )
    free(v153);
  if ( v118 != -1 )
    sub_C325E0(v4, 0, v118, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 144LL);
  if ( (_BYTE)v24 )
  {
    v46 = v146;
    LODWORD(v159) = v146;
    if ( v146 > 0x40 )
    {
      sub_21E17D0(&v158);
      v46 = v159;
      v47 = v158;
    }
    else
    {
      v47 = v145;
      v158 = v145;
    }
    ptr.m128i_i64[1] = (__int64)v47;
    v48 = a1[1];
    ptr.m128i_i8[4] &= ~1u;
    BYTE4(v159) = v147;
    LODWORD(v160) = v148;
    LODWORD(v169) = v46;
    LODWORD(v159) = 0;
    BYTE4(v169) = v147;
    v170 = v148;
    ptr.m128i_i32[0] = 4;
    sub_A2BFE0(v48, (__int64)&ptr);
    if ( ptr.m128i_i32[0] > 1u )
      sub_A2BBA0(ptr.m128i_i32);
    if ( (unsigned int)v159 > 0x40 && v158 )
      operator delete[](v158);
  }
  if ( v143 > 1 )
    sub_A2BBA0((int *)&v143);
  return v24;
}

