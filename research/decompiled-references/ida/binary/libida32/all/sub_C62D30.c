__int64 __fastcall sub_C62D30(__int64 *a1, __int64 a2)
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
  __int64 v46; // rbx
  unsigned __int8 v47; // al
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r9
  unsigned __int64 v54; // rsi
  __int64 v55; // r12
  bool v56; // al
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // rdi
  char v59; // al
  char v60; // al
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  bool v65; // al
  char v66; // al
  bool v67; // al
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // eax
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // r12d
  __int64 v83; // rdx
  __int64 v84; // rcx
  char v85; // al
  __int64 v86; // r9
  __int64 v87; // r11
  unsigned int v88; // eax
  unsigned __int8 **v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  unsigned int v92; // ecx
  __int64 v93; // rdx
  char v94; // al
  __int64 v95; // rsi
  __int64 v96; // rdi
  unsigned int v97; // eax
  __int64 v98; // rdi
  bool v99; // zf
  __m128i *v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // r12
  bool v106; // al
  unsigned int *v107; // r12
  _QWORD *v108; // rax
  __int64 v109; // rdx
  unsigned int v110; // eax
  unsigned int v111; // eax
  __int128 v112; // [rsp-30h] [rbp-2B8h]
  __m128i *v113; // [rsp-10h] [rbp-298h]
  __int64 v114; // [rsp-8h] [rbp-290h]
  __int64 v115; // [rsp+0h] [rbp-288h]
  _DWORD *v116; // [rsp+0h] [rbp-288h]
  __int64 v117; // [rsp+0h] [rbp-288h]
  __int64 v118; // [rsp+8h] [rbp-280h]
  unsigned int v119; // [rsp+14h] [rbp-274h]
  _QWORD *v120; // [rsp+18h] [rbp-270h]
  __int64 v121; // [rsp+18h] [rbp-270h]
  __int64 v122; // [rsp+18h] [rbp-270h]
  _WORD *v123; // [rsp+18h] [rbp-270h]
  __m128i **v124; // [rsp+20h] [rbp-268h]
  __int64 v125; // [rsp+28h] [rbp-260h]
  __int64 v126; // [rsp+28h] [rbp-260h]
  __int64 v127; // [rsp+28h] [rbp-260h]
  unsigned int v128; // [rsp+28h] [rbp-260h]
  __int64 v129; // [rsp+30h] [rbp-258h]
  __int64 v130; // [rsp+30h] [rbp-258h]
  __int64 v131; // [rsp+30h] [rbp-258h]
  unsigned __int64 v132; // [rsp+40h] [rbp-248h]
  unsigned __int64 v133; // [rsp+48h] [rbp-240h]
  unsigned __int64 v134; // [rsp+48h] [rbp-240h]
  unsigned __int64 v135; // [rsp+48h] [rbp-240h]
  __int64 v136; // [rsp+50h] [rbp-238h]
  unsigned __int64 v137; // [rsp+50h] [rbp-238h]
  unsigned __int64 v138; // [rsp+50h] [rbp-238h]
  __int64 v139; // [rsp+50h] [rbp-238h]
  __int64 v140; // [rsp+50h] [rbp-238h]
  unsigned __int64 v141; // [rsp+58h] [rbp-230h]
  unsigned __int64 v142; // [rsp+58h] [rbp-230h]
  __int64 v143; // [rsp+58h] [rbp-230h]
  unsigned int v144; // [rsp+60h] [rbp-228h] BYREF
  char v145; // [rsp+64h] [rbp-224h]
  __m128i v146; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v147; // [rsp+B0h] [rbp-1D8h]
  char v148; // [rsp+B8h] [rbp-1D0h]
  __int64 v149; // [rsp+C8h] [rbp-1C0h]
  void *v150; // [rsp+D0h] [rbp-1B8h]
  __int64 v151; // [rsp+D8h] [rbp-1B0h]
  _BYTE v152[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v153; // [rsp+120h] [rbp-168h]
  char v154; // [rsp+121h] [rbp-167h]
  char *v155[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v156; // [rsp+140h] [rbp-148h]
  char v157; // [rsp+148h] [rbp-140h]
  __int64 v158; // [rsp+158h] [rbp-130h]
  void *v159; // [rsp+160h] [rbp-128h]
  __int64 v160; // [rsp+168h] [rbp-120h]
  _BYTE v161[64]; // [rsp+170h] [rbp-118h] BYREF
  char v162; // [rsp+1B0h] [rbp-D8h]
  char v163; // [rsp+1B1h] [rbp-D7h]
  __m128i ptr; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v165; // [rsp+1D0h] [rbp-B8h] BYREF
  char v166; // [rsp+1D8h] [rbp-B0h]
  __int64 v167; // [rsp+1E8h] [rbp-A0h]
  void *v168; // [rsp+1F0h] [rbp-98h]
  __int64 v169; // [rsp+1F8h] [rbp-90h]
  _BYTE v170[136]; // [rsp+200h] [rbp-88h] BYREF

  v2 = a2;
  v4 = *a1;
  v144 = 0;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 272);
  v145 &= ~1u;
  v119 = v6;
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
  v118 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  v150 = v152;
  v151 = 0x800000000LL;
  v17 = *(unsigned int *)(v2 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v147 = 0;
  v125 = v17;
  LOBYTE(v17) = *(_BYTE *)(v2 + 2);
  v148 |= 1u;
  v149 = 0;
  v154 = 0;
  v146 = 0u;
  v124 = (__m128i **)(v2 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1F3 )
  {
    v20 = *a1;
    v21 = *(_WORD *)v16 & 0x1FF;
    if ( v21 == 46 )
    {
      v120 = (_QWORD *)v16;
      v24 = sub_C3A250(v20, *(__m128i **)(v16 + 16), (__int64)&v146, v13, v14, v16);
      if ( !(_BYTE)v24 )
        goto LABEL_26;
      v16 = (__int64)v120;
      v20 = *a1;
      v25 = v120[3];
      if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v26 = &v146;
        v121 = (*v120 >> 20) & 1LL;
        goto LABEL_9;
      }
      goto LABEL_72;
    }
    if ( ((v21 + 394) & 0x1FFu) <= 1 )
    {
      v130 = v16;
      v78 = sub_C3A3B0(v20, v16, (__int64)&v146, 0, v14, v16);
      v25 = v78;
      if ( !v78 )
      {
        v24 = 0;
        goto LABEL_26;
      }
      v20 = *a1;
      LOBYTE(v121) = 0;
      v26 = &v146;
      v16 = v130;
      if ( (*(_BYTE *)(v78 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_9;
    }
    else if ( v21 == 102 )
    {
      v115 = v16;
      v73 = sub_E0E500(v20);
      v76 = v115;
      if ( *(char *)(v73 + 1) >= 0 )
      {
        sub_E0FF50(*a1, v115, 2480, 0);
        v76 = v115;
      }
      v116 = (_DWORD *)v76;
      v24 = sub_C3A250(*a1, *(__m128i **)(v76 + 16), (__int64)&v146, v74, v75, v76);
      if ( (_BYTE)v24 )
      {
        v77 = sub_C703D0(v116);
        v24 = sub_C30630(*a1, v116, &v146, v77);
      }
      goto LABEL_26;
    }
LABEL_72:
    v24 = sub_BF05D0(v20, v16);
    goto LABEL_26;
  }
  v122 = v16;
  if ( !sub_BF8240(*v18, a2, v12, v13) )
  {
    v24 = sub_BF05D0(*a1, v2);
    goto LABEL_26;
  }
  v155[0] = nullptr;
  v159 = v161;
  v160 = 0x800000000LL;
  v51 = *a1;
  v155[1] = nullptr;
  v156 = 0;
  v157 |= 1u;
  v158 = 0;
  v163 = 0;
  ptr.m128i_i64[0] = v51;
  ptr.m128i_i64[1] = (__int64)v155;
  LOBYTE(v165) = 0;
  v24 = sub_C24FB0(&ptr, v122, v44, (__int64)v155, v45, v122);
  if ( !(_BYTE)v24 )
    goto LABEL_61;
  v52 = *a1;
  v53 = v122;
  if ( v156 )
    goto LABEL_69;
  LOBYTE(v121) = v162 & 1;
  if ( (v162 & 1) != 0 )
  {
    v117 = v53;
    v89 = (unsigned __int8 **)sub_E0FED0(v52, v53, 2460, 0);
    if ( v89 )
      sub_AC60B0(v89, v117, 0xFu);
    goto LABEL_82;
  }
  if ( !v155[0]
    || ((__int64)v155[0] & 3) != 0
    || (v54 = (unsigned __int64)v155[0] & 0xFFFFFFFFFFFFFFFCLL,
        v132 = (unsigned __int64)v155[0] & 0xFFFFFFFFFFFFFFFCLL,
        v134 = (unsigned __int64)v155[0] & 0xFFFFFFFFFFFFFFFCLL,
        ((unsigned __int64)v155[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (*(_BYTE *)(((unsigned __int64)v155[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_69:
    v24 = sub_BF05D0(v52, v53);
    goto LABEL_61;
  }
  v55 = *(_QWORD *)(v52 + 16);
  v136 = *(_QWORD *)(v54 + 48);
  v30 = (__m128i *)sub_F44710(*v18, v54, v136, v22, v23);
  v56 = sub_A5E750(v55, (__int64)v30, v136);
  v57 = v134;
  if ( !v56 )
  {
    v24 = sub_BF05D0(*a1, v2);
    goto LABEL_61;
  }
  if ( (*(_WORD *)v2 & 0x1FF) == 0x5B )
  {
    v58 = (*(_BYTE *)(v2 + 3) >> 1) & 0x3F;
    if ( (_DWORD)v58 == 15 || (_DWORD)v58 == 20 || (v59 = sub_BEC850(v58), v57 = v134, v59) )
    {
      v90 = *a1;
      v91 = *(_QWORD *)(*a1 + 32);
      v92 = *(_DWORD *)(v91 + 128);
      v93 = (unsigned int)(*(_DWORD *)(v91 + 160) + 1);
      *(_DWORD *)(v91 + 160) = v93;
      v118 = (v93 << 32) | v92;
      if ( (*(_BYTE *)(v132 + 28) & 0x7Fu) - 35 <= 3
        && (v135 = v57, v94 = sub_B744C0((_QWORD *)v132, 0xFFFFFFFF00000000LL), v90 = *a1, v57 = v135, v94) )
      {
        v95 = v125 - 1;
        v96 = (__int64)(v124 + 1);
      }
      else
      {
        v95 = v125;
        v96 = (__int64)v124;
      }
      v142 = v57;
      v97 = sub_C339F0(v96, v95, v132, v118, v90, v132, 1, (__int64)&v146);
      v30 = v113;
      v24 = v97;
      if ( !(_BYTE)v97 )
        goto LABEL_61;
      v133 = v132;
      v57 = v142;
      v137 = v2;
    }
    else
    {
      v137 = v2;
      v133 = 0;
    }
  }
  else
  {
    v133 = 0;
    v137 = 0;
  }
  if ( (*(_BYTE *)(v132 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v141 = v57;
    v60 = sub_B744C0((_QWORD *)v132, (__int64)v30);
    v64 = v141;
    if ( v60 || v137 && (v65 = sub_B73CB0((_QWORD *)v132), v64 = v141, v65) )
    {
      v98 = *a1;
      if ( !v125 )
      {
        v24 = sub_BF05D0(v98, v2);
        goto LABEL_61;
      }
      v143 = v64;
      v30 = *v124;
      v24 = sub_C3A250(v98, *v124, (__int64)&v146, v61, v62, v63);
      if ( !(_BYTE)v24 )
        goto LABEL_61;
      v99 = !sub_B73CB0((_QWORD *)v132);
      v100 = nullptr;
      if ( v99 )
        v100 = &v146;
      v26 = v100;
      v101 = sub_E0E500(*a1);
      v25 = v143;
      if ( *(char *)(v101 + 1) < 0 && v137 && ((*(_BYTE *)(v137 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v132 + 82) < 0 )
      {
        v24 = v153;
        LOBYTE(v24) = (v153 & 2) != 0;
        if ( (v153 & 2) != 0 )
          goto LABEL_82;
        if ( (v148 & 1) != 0 )
          goto LABEL_61;
        v30 = *v124;
        v111 = sub_C10450(*a1, (__int64)*v124, (unsigned __int64)&v146, v22, v23);
        v25 = v143;
        v24 = v111;
        if ( !(_BYTE)v111 )
          goto LABEL_61;
      }
      --v125;
      ++v124;
LABEL_96:
      if ( v159 != v161 )
      {
        v131 = v25;
        free(v159);
        v25 = v131;
      }
      if ( v133 )
        goto LABEL_11;
      v20 = *a1;
LABEL_9:
      v27 = *(_QWORD *)(v20 + 32);
      v28 = *(_DWORD *)(v27 + 128);
      v29 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
      *(_DWORD *)(v27 + 160) = v29;
      v118 = (v29 << 32) | v28;
      v30 = (__m128i *)v125;
      v129 = v25;
      v24 = sub_C339F0((__int64)v124, v125, v25, v118, v20, v25, 0, (__int64)&v146);
      v32 = v114;
      if ( !(_BYTE)v24 )
        goto LABEL_26;
      v25 = v129;
      v133 = v129;
LABEL_11:
      ptr.m128i_i64[0] = (__int64)&v165;
      ptr.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v126 = v25;
          LOBYTE(v34) = sub_AC9870(v25);
          v34 ^= 1u;
          v24 = v34;
          LOBYTE(v24) = v121 | v34;
          if ( (unsigned __int8)v121 | (unsigned __int8)v34 )
          {
            v35 = sub_B744C0((_QWORD *)v126, (__int64)v30);
            v25 = v126;
            if ( v35 )
            {
              v24 = sub_C0F160(*a1, (_DWORD *)v2, v26, 4 * (unsigned int)((*(_BYTE *)(v126 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_22;
              v25 = v126;
            }
          }
          else
          {
            v25 = sub_C0FF80(*a1, (_DWORD *)v2, v26, v126, (__int64)&ptr);
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
        v127 = v25;
        v155[0] = nullptr;
        v123 = (_WORD *)sub_B5BA10((_QWORD *)v25, v155, v32, v22, v23, v31);
        v82 = sub_BDCD00(v2, (__int64)v155, v79, v80, v81);
        v85 = sub_B53480(v127, (__int64)v155, v83, v84);
        v87 = v127;
        v128 = v82;
        if ( v85 )
          v26 = &v146;
        v24 = sub_BF9920(*a1, v82, v87, v155[0], (__int64)v123, v86);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v112 + 1) = v118,
              *(_QWORD *)&v112 = v133,
              v24 = sub_C33320(v128, (__int64)v155[0], v26, v2, (_DWORD **)v124, v123, v112, *a1, (__int64)&v144, 0),
              !(_BYTE)v24)
          || (v23 = ptr.m128i_u32[2], ptr.m128i_i32[2])
          && (v24 = sub_C0A6A0(*a1, v2, (__int64)&v144, ptr.m128i_i64[0], ptr.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_22:
          v43 = (void *)ptr.m128i_i64[0];
          if ( (__int64 *)ptr.m128i_i64[0] == &v165 )
            goto LABEL_26;
          goto LABEL_23;
        }
      }
      v88 = sub_C325E0(v4, 1, v119, v22, v23);
      v119 = -1;
      v24 = v88;
      goto LABEL_22;
    }
    v138 = v64;
    v66 = sub_B74C10(v132);
    v57 = v138;
    if ( v66 )
    {
      v102 = sub_B4E950(v132 + 72);
      if ( v102 )
        v102 -= 64LL;
      v103 = sub_B73220(v102);
      v104 = v102;
      v26 = nullptr;
      v105 = v103;
      v106 = sub_B731B0(v104);
      v25 = v105;
      if ( v106 )
      {
        v140 = v105;
        v107 = (unsigned int *)sub_B53E10(v132);
        v108 = (_QWORD *)sub_B53CF0(v140);
        v109 = *v107;
        v30 = (__m128i *)(v107 + 2);
        ptr.m128i_i64[0] = 0;
        v25 = sub_B9FDF0(v108, (__int64)(v107 + 2), v109, (__int64)&ptr);
      }
      goto LABEL_96;
    }
  }
  v30 = nullptr;
  v139 = v57;
  if ( !sub_B523A0(v132, nullptr, nullptr) )
  {
    v25 = v139;
    v26 = nullptr;
    goto LABEL_96;
  }
  ptr.m128i_i64[0] = *(_QWORD *)(v132 + 40);
  v67 = sub_BF9580(&ptr);
  v69 = *a1;
  if ( v67 )
  {
    ptr = 0u;
    v168 = v170;
    v165 = 0;
    v166 |= 1u;
    v167 = 0;
    v169 = 0x800000000LL;
    v170[65] = 0;
    v24 = *(unsigned __int8 *)(v69 + 914);
    if ( !(_BYTE)v24 )
    {
      v22 = *(unsigned int *)(v69 + 900);
      if ( !(_DWORD)v22 )
      {
        v24 = sub_C238B0(v69, v2, (__int64)&ptr);
        if ( (_BYTE)v24 )
        {
          sub_BEBB50((__int64)&ptr, (__int64)&v144);
          v72 = sub_C325E0(v4, 1, v119, v70, v71);
          v119 = -1;
          v24 = v72;
        }
        if ( v168 != v170 )
          free(v168);
      }
      goto LABEL_61;
    }
LABEL_82:
    v24 = 0;
    goto LABEL_61;
  }
  v24 = sub_C28670(v69, v2, v68, v22, v23);
  if ( (_BYTE)v24 )
  {
    v110 = sub_C325E0(v4, 1, v119, v22, v23);
    v119 = -1;
    v24 = v110;
  }
LABEL_61:
  v43 = v159;
  if ( v159 != v161 )
LABEL_23:
    free(v43);
LABEL_26:
  if ( v150 != v152 )
    free(v150);
  if ( v119 != -1 )
    sub_C325E0(v4, 0, v119, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 144LL);
  if ( (_BYTE)v24 )
  {
    v46 = a1[1];
    *(_QWORD *)v46 = *(_QWORD *)v46 & 7LL | sub_A2D650((__int64)&v144);
    v47 = sub_A2D660((__int64)&v144);
    v48 = *(_QWORD *)v46;
    *(_DWORD *)(v46 + 16) = 0;
    *(_QWORD *)v46 = (4LL * v47) | v48 & 0xFFFFFFFFFFFFFFFBLL;
    ptr.m128i_i64[0] = sub_A2D670((__int64)&v144);
    ptr.m128i_i64[1] = v49;
    sub_BFF780(v46 + 8, (__int64)&ptr);
  }
  if ( v144 > 1 )
    sub_A2BBA0((int *)&v144);
  return v24;
}

