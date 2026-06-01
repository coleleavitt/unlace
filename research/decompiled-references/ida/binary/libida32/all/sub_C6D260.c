__int64 __fastcall sub_C6D260(__int64 *a1, __int64 a2)
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
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // r8
  unsigned __int64 v57; // r11
  __int64 v58; // r15
  bool v59; // al
  __int64 v60; // r11
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rdi
  char v63; // al
  char v64; // al
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r11
  __int64 v69; // r10
  bool v70; // al
  char v71; // al
  bool v72; // al
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // r8
  unsigned int v77; // eax
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r8
  unsigned int v82; // eax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned int v88; // r15d
  __int64 v89; // rdx
  __int64 v90; // rcx
  char v91; // al
  __int64 v92; // r9
  __int64 v93; // r10
  unsigned int v94; // eax
  unsigned __int8 **v95; // rax
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned int v99; // ecx
  char v100; // al
  __int64 v101; // rsi
  __int64 v102; // rdi
  unsigned int v103; // eax
  __int64 v104; // rdi
  bool v105; // zf
  __m128i *v106; // rax
  __int64 v107; // rax
  unsigned __int64 v108; // r15
  __int64 v109; // r14
  bool v110; // al
  __int64 v111; // rdi
  unsigned int *v112; // r15
  _QWORD *v113; // rax
  __int64 v114; // rdx
  unsigned int v115; // eax
  unsigned int v116; // eax
  __int128 v117; // [rsp-30h] [rbp-2B8h]
  __m128i *v118; // [rsp-10h] [rbp-298h]
  __int64 v119; // [rsp-8h] [rbp-290h]
  __int64 v120; // [rsp+0h] [rbp-288h]
  _DWORD *v121; // [rsp+0h] [rbp-288h]
  __int64 v122; // [rsp+0h] [rbp-288h]
  __int64 v123; // [rsp+0h] [rbp-288h]
  __int64 v124; // [rsp+8h] [rbp-280h]
  unsigned int v125; // [rsp+14h] [rbp-274h]
  _QWORD *v126; // [rsp+18h] [rbp-270h]
  __int64 v127; // [rsp+18h] [rbp-270h]
  __int64 v128; // [rsp+18h] [rbp-270h]
  _WORD *v129; // [rsp+18h] [rbp-270h]
  __m128i **v130; // [rsp+20h] [rbp-268h]
  __int64 v131; // [rsp+28h] [rbp-260h]
  __int64 v132; // [rsp+28h] [rbp-260h]
  __int64 v133; // [rsp+28h] [rbp-260h]
  unsigned int v134; // [rsp+28h] [rbp-260h]
  __int64 v135; // [rsp+30h] [rbp-258h]
  __int64 v136; // [rsp+30h] [rbp-258h]
  __int64 v137; // [rsp+30h] [rbp-258h]
  __int64 v138; // [rsp+40h] [rbp-248h]
  unsigned __int64 v139; // [rsp+40h] [rbp-248h]
  __int64 v140; // [rsp+40h] [rbp-248h]
  __int64 v141; // [rsp+48h] [rbp-240h]
  unsigned __int64 v142; // [rsp+48h] [rbp-240h]
  __int64 v143; // [rsp+48h] [rbp-240h]
  __int64 v144; // [rsp+48h] [rbp-240h]
  unsigned __int64 v145; // [rsp+48h] [rbp-240h]
  __int64 v146; // [rsp+48h] [rbp-240h]
  unsigned __int64 v147; // [rsp+50h] [rbp-238h]
  _QWORD *v148; // [rsp+50h] [rbp-238h]
  unsigned __int64 v149; // [rsp+50h] [rbp-238h]
  __int64 v150; // [rsp+50h] [rbp-238h]
  unsigned __int64 v151; // [rsp+50h] [rbp-238h]
  __int64 v152; // [rsp+50h] [rbp-238h]
  unsigned __int64 v153; // [rsp+58h] [rbp-230h]
  __int64 v154; // [rsp+58h] [rbp-230h]
  unsigned int v155; // [rsp+60h] [rbp-228h] BYREF
  char v156; // [rsp+64h] [rbp-224h]
  char v157[56]; // [rsp+68h] [rbp-220h] BYREF
  __m128i v158; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v159; // [rsp+B0h] [rbp-1D8h]
  char v160; // [rsp+B8h] [rbp-1D0h]
  __int64 v161; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v163; // [rsp+D8h] [rbp-1B0h]
  _BYTE v164[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v165; // [rsp+120h] [rbp-168h]
  char v166; // [rsp+121h] [rbp-167h]
  char *v167[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v168; // [rsp+140h] [rbp-148h]
  char v169; // [rsp+148h] [rbp-140h]
  __int64 v170; // [rsp+158h] [rbp-130h]
  void *v171; // [rsp+160h] [rbp-128h]
  __int64 v172; // [rsp+168h] [rbp-120h]
  _BYTE v173[64]; // [rsp+170h] [rbp-118h] BYREF
  char v174; // [rsp+1B0h] [rbp-D8h]
  char v175; // [rsp+1B1h] [rbp-D7h]
  __m128i v176; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v177; // [rsp+1D0h] [rbp-B8h] BYREF
  char v178; // [rsp+1D8h] [rbp-B0h]
  __int64 v179; // [rsp+1E8h] [rbp-A0h]
  void *v180; // [rsp+1F0h] [rbp-98h]
  __int64 v181; // [rsp+1F8h] [rbp-90h]
  _BYTE v182[136]; // [rsp+200h] [rbp-88h] BYREF

  v3 = a2;
  v4 = sub_BD8130(a2);
  if ( v4 )
  {
    v47 = (const char *)sub_F99770(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17520LL), v4);
    a2 = 69;
    if ( strchr(v47, 69) )
    {
      v48 = sub_BD8130(v3);
      return (unsigned int)sub_C66710(a1, v3, v48, v49, v50, v51);
    }
  }
  v5 = *a1;
  v155 = 0;
  v156 &= ~1u;
  v6 = *(_QWORD *)(v5 + 32);
  v125 = *(_DWORD *)(v5 + 272);
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
  v124 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v16 = v11;
  ptr = v164;
  v163 = 0x800000000LL;
  v17 = *(unsigned int *)(v3 + 16);
  v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v159 = 0;
  v131 = v17;
  LOBYTE(v17) = *(_BYTE *)(v3 + 2);
  v160 |= 1u;
  v161 = 0;
  v166 = 0;
  v158 = 0u;
  v130 = (__m128i **)(v3 + 8 * (((v17 & 8) != 0) + 1LL) + 32);
  v19 = *(_QWORD *)(*(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1F3 )
  {
    v128 = v16;
    if ( !sub_BF8240(*v18, a2, v12, v13) )
    {
      v24 = sub_BF05D0(*a1, v3);
      goto LABEL_27;
    }
    v167[0] = nullptr;
    v171 = v173;
    v172 = 0x800000000LL;
    v53 = *a1;
    v54 = v128;
    v167[1] = nullptr;
    v168 = 0;
    v169 |= 1u;
    v170 = 0;
    v175 = 0;
    v176.m128i_i64[0] = v53;
    v176.m128i_i64[1] = (__int64)v167;
    LOBYTE(v177) = 0;
    v24 = sub_C24FB0(&v176, v128, v43, (__int64)v167, v128, v44);
    if ( !(_BYTE)v24 )
      goto LABEL_67;
    v55 = *a1;
    v56 = v128;
    if ( v168 )
      goto LABEL_66;
    LOBYTE(v127) = v174 & 1;
    if ( (v174 & 1) != 0 )
    {
      v122 = v56;
      v95 = (unsigned __int8 **)sub_E0FED0(v55, v56, 2460, 0);
      if ( v95 )
        sub_AC60B0(v95, v122, 0xFu);
      goto LABEL_89;
    }
    if ( !v167[0]
      || ((__int64)v167[0] & 3) != 0
      || (v57 = (unsigned __int64)v167[0] & 0xFFFFFFFFFFFFFFFCLL,
          v139 = (unsigned __int64)v167[0] & 0xFFFFFFFFFFFFFFFCLL,
          ((unsigned __int64)v167[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || (*(_BYTE *)(v57 + 28) & 0x7Fu) - 34 > 5 )
    {
LABEL_66:
      v24 = sub_BF05D0(v55, v56);
      goto LABEL_67;
    }
    v58 = *(_QWORD *)(v55 + 16);
    v147 = (unsigned __int64)v167[0] & 0xFFFFFFFFFFFFFFFCLL;
    v141 = *(_QWORD *)(v57 + 48);
    v30 = (__m128i *)sub_F44710(*v18, v54, v141, v22, v56);
    v59 = sub_A5E750(v58, (__int64)v30, v141);
    v60 = v147;
    v61 = v139;
    if ( !v59 )
    {
      v24 = sub_BF05D0(*a1, v3);
      goto LABEL_67;
    }
    if ( (*(_WORD *)v3 & 0x1FF) == 0x5B )
    {
      v62 = (*(_BYTE *)(v3 + 3) >> 1) & 0x3F;
      if ( (_DWORD)v62 == 15 || (_DWORD)v62 == 20 || (v63 = sub_BEC850(v62), v61 = v139, v60 = v147, v63) )
      {
        v96 = *a1;
        v123 = v60;
        v97 = *(_QWORD *)(*a1 + 32);
        v98 = (unsigned int)(*(_DWORD *)(v97 + 160) + 1);
        v99 = *(_DWORD *)(v97 + 128);
        *(_DWORD *)(v97 + 160) = v98;
        v124 = (v98 << 32) | v99;
        if ( (*(_BYTE *)(v60 + 28) & 0x7Fu) - 35 <= 3
          && (v145 = v61,
              v140 = v60,
              v100 = sub_B744C0((_QWORD *)v60, 0xFFFFFFFF00000000LL),
              v96 = *a1,
              v60 = v140,
              v61 = v145,
              v100) )
        {
          v101 = v131 - 1;
          v102 = (__int64)(v130 + 1);
        }
        else
        {
          v101 = v131;
          v102 = (__int64)v130;
        }
        v151 = v61;
        v138 = v60;
        v103 = sub_C339F0(v102, v101, v123, v124, v96, v60, 1, (__int64)&v158);
        v30 = v118;
        v24 = v103;
        if ( !(_BYTE)v103 )
          goto LABEL_67;
        v60 = v138;
        v61 = v151;
        v142 = v3;
      }
      else
      {
        v142 = v3;
        v138 = 0;
      }
    }
    else
    {
      v138 = 0;
      v142 = 0;
    }
    if ( (*(_BYTE *)(v60 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v153 = v61;
      v148 = (_QWORD *)v60;
      v64 = sub_B744C0((_QWORD *)v60, (__int64)v30);
      v68 = (__int64)v148;
      v69 = v153;
      if ( v64 || v142 && (v70 = sub_B73CB0(v148), v68 = (__int64)v148, v69 = v153, v70) )
      {
        v104 = *a1;
        if ( !v131 )
        {
          v24 = sub_BF05D0(v104, v3);
          goto LABEL_67;
        }
        v154 = v68;
        v152 = v69;
        v30 = *v130;
        v24 = sub_C3A250(v104, *v130, (__int64)&v158, v65, v66, v67);
        if ( !(_BYTE)v24 )
          goto LABEL_67;
        v105 = !sub_B73CB0((_QWORD *)v154);
        v106 = nullptr;
        if ( v105 )
          v106 = &v158;
        v26 = v106;
        v107 = sub_E0E500(*a1);
        v25 = v152;
        if ( *(char *)(v107 + 1) < 0 && v142 && ((*(_BYTE *)(v142 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v154 + 82) < 0 )
        {
          v24 = v165;
          LOBYTE(v24) = (v165 & 2) != 0;
          if ( (v165 & 2) != 0 )
            goto LABEL_89;
          if ( (v160 & 1) != 0 )
            goto LABEL_67;
          v30 = *v130;
          v116 = sub_C10450(*a1, (__int64)*v130, (unsigned __int64)&v158, v22, v23);
          v25 = v152;
          v24 = v116;
          if ( !(_BYTE)v116 )
            goto LABEL_67;
        }
        --v131;
        ++v130;
        goto LABEL_103;
      }
      v149 = v69;
      v143 = v68;
      v71 = sub_B74C10(v68);
      v60 = v143;
      v61 = v149;
      if ( v71 )
      {
        v108 = sub_B4E950(v143 + 72);
        if ( v108 )
          v108 -= 64LL;
        v109 = sub_B73220(v108);
        v110 = sub_B731B0(v108);
        v25 = v109;
        v26 = nullptr;
        if ( v110 )
        {
          v111 = v143;
          v146 = v25;
          v112 = (unsigned int *)sub_B53E10(v111);
          v113 = (_QWORD *)sub_B53CF0(v146);
          v114 = *v112;
          v30 = (__m128i *)(v112 + 2);
          v176.m128i_i64[0] = 0;
          v25 = sub_B9FDF0(v113, (__int64)(v112 + 2), v114, (__int64)&v176);
        }
        goto LABEL_103;
      }
    }
    v30 = nullptr;
    v144 = v60;
    v150 = v61;
    if ( sub_B523A0(v60, nullptr, nullptr) )
    {
      v176.m128i_i64[0] = *(_QWORD *)(v144 + 40);
      v72 = sub_BF9580(&v176);
      v74 = *a1;
      if ( v72 )
      {
        v176 = 0u;
        v180 = v182;
        v177 = 0;
        v178 |= 1u;
        v179 = 0;
        v181 = 0x800000000LL;
        v182[65] = 0;
        v24 = *(unsigned __int8 *)(v74 + 914);
        if ( !(_BYTE)v24 )
        {
          v22 = *(unsigned int *)(v74 + 900);
          if ( !(_DWORD)v22 )
          {
            v24 = sub_C238B0(v74, v3, (__int64)&v176);
            if ( (_BYTE)v24 )
            {
              sub_BEBB50((__int64)&v176, (__int64)&v155);
              v77 = sub_C325E0(v5, 1, v125, v75, v76);
              v125 = -1;
              v24 = v77;
            }
            if ( v180 != v182 )
              free(v180);
          }
          goto LABEL_67;
        }
LABEL_89:
        v24 = 0;
        goto LABEL_67;
      }
      v24 = sub_C28670(v74, v3, v73, v22, v23);
      if ( (_BYTE)v24 )
      {
        v115 = sub_C325E0(v5, 1, v125, v22, v23);
        v125 = -1;
        v24 = v115;
      }
LABEL_67:
      v42 = v171;
      if ( v171 != v173 )
      {
LABEL_68:
        free(v42);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v25 = v150;
    v26 = nullptr;
LABEL_103:
    if ( v171 != v173 )
    {
      v137 = v25;
      free(v171);
      v25 = v137;
    }
    if ( v138 )
    {
LABEL_12:
      v176.m128i_i64[0] = (__int64)&v177;
      v176.m128i_i64[1] = 0x400000000LL;
      v33 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v26 )
      {
        v32 = (unsigned int)v33 - 35;
        if ( (unsigned int)v32 <= 3 )
        {
          v132 = v25;
          v24 = (unsigned __int8)v127;
          LOBYTE(v24) = !sub_AC9870(v25) | v127;
          if ( (_BYTE)v24 )
          {
            v34 = sub_B744C0((_QWORD *)v132, (__int64)v30);
            v25 = v132;
            if ( v34 )
            {
              v24 = sub_C0F160(*a1, (_DWORD *)v3, v26, 4 * (unsigned int)((*(_BYTE *)(v132 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v24 )
                goto LABEL_23;
              v25 = v132;
            }
          }
          else
          {
            v25 = sub_C0FF80(*a1, (_DWORD *)v3, v26, v132, (__int64)&v176);
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
        v133 = v25;
        v167[0] = nullptr;
        v129 = (_WORD *)sub_B5BA10((_QWORD *)v25, v167, v32, v22, v23, v31);
        v88 = sub_BDCD00(v3, (__int64)v167, v85, v86, v87);
        v91 = sub_B53480(v133, (__int64)v167, v89, v90);
        v93 = v133;
        v134 = v88;
        if ( v91 )
          v26 = &v158;
        v24 = sub_BF9920(*a1, v88, v93, v167[0], (__int64)v129, v92);
        if ( !(_BYTE)v24
          || (*((_QWORD *)&v117 + 1) = v124,
              *(_QWORD *)&v117 = v138,
              v24 = sub_C33320(v134, (__int64)v167[0], v26, v3, (_DWORD **)v130, v129, v117, *a1, (__int64)&v155, 0),
              !(_BYTE)v24)
          || (v23 = v176.m128i_u32[2], v176.m128i_i32[2])
          && (v24 = sub_C0A6A0(*a1, v3, (__int64)&v155, v176.m128i_i64[0], v176.m128i_u32[2]), !(_BYTE)v24) )
        {
LABEL_23:
          v42 = (void *)v176.m128i_i64[0];
          if ( (__int64 *)v176.m128i_i64[0] == &v177 )
            goto LABEL_27;
          goto LABEL_68;
        }
      }
      v94 = sub_C325E0(v5, 1, v125, v22, v23);
      v125 = -1;
      v24 = v94;
      goto LABEL_23;
    }
    v20 = *a1;
    goto LABEL_10;
  }
  v20 = *a1;
  v21 = *(_WORD *)v16 & 0x1FF;
  if ( v21 == 46 )
  {
    v126 = (_QWORD *)v16;
    v24 = sub_C3A250(v20, *(__m128i **)(v16 + 16), (__int64)&v158, v13, v16, v14);
    if ( !(_BYTE)v24 )
      goto LABEL_27;
    v16 = (__int64)v126;
    v20 = *a1;
    v25 = v126[3];
    if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v26 = &v158;
      v127 = (*v126 >> 20) & 1LL;
      goto LABEL_10;
    }
LABEL_79:
    v24 = sub_BF05D0(v20, v16);
    goto LABEL_27;
  }
  if ( ((v21 + 394) & 0x1FFu) > 1 )
  {
    if ( v21 == 102 )
    {
      v120 = v16;
      v78 = sub_E0E500(v20);
      v81 = v120;
      if ( *(char *)(v78 + 1) >= 0 )
      {
        sub_E0FF50(*a1, v120, 2480, 0);
        v81 = v120;
      }
      v121 = (_DWORD *)v81;
      v82 = sub_C3A250(*a1, *(__m128i **)(v81 + 16), (__int64)&v158, v79, v81, v80);
      v23 = (__int64)v121;
      v24 = v82;
      if ( (_BYTE)v82 )
      {
        v83 = sub_C703D0(v121);
        v24 = sub_C30630(*a1, v121, &v158, v83);
      }
      goto LABEL_27;
    }
    goto LABEL_79;
  }
  v136 = v16;
  v84 = sub_C3A3B0(v20, v16, (__int64)&v158, 0, v16, v14);
  v25 = v84;
  if ( !v84 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v20 = *a1;
  LOBYTE(v127) = 0;
  v26 = &v158;
  v16 = v136;
  if ( (*(_BYTE *)(v84 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_79;
LABEL_10:
  v27 = *(_QWORD *)(v20 + 32);
  v28 = (unsigned int)(*(_DWORD *)(v27 + 160) + 1);
  v29 = *(_DWORD *)(v27 + 128);
  *(_DWORD *)(v27 + 160) = v28;
  v124 = (v28 << 32) | v29;
  v30 = (__m128i *)v131;
  v135 = v25;
  v24 = sub_C339F0((__int64)v130, v131, v25, v124, v20, v25, 0, (__int64)&v158);
  v32 = v119;
  if ( (_BYTE)v24 )
  {
    v25 = v135;
    v138 = v135;
    goto LABEL_12;
  }
LABEL_27:
  if ( ptr != v164 )
    free(ptr);
  if ( v125 != -1 )
    sub_C325E0(v5, 0, v125, v22, v23);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 144LL);
  v45 = v155;
  if ( (_BYTE)v24 )
  {
    if ( v155 <= 0xD && (v46 = 8322, _bittest64(&v46, v155)) || (v156 & 1) != 0 )
    {
      sub_A30FE0(a1[1], (int *)&v155);
      v45 = v155;
    }
    else
    {
      v24 = sub_BEEA30((__int64)v157, a1[1]);
      v45 = v155;
    }
  }
  if ( v45 > 1 )
    sub_A2BBA0((int *)&v155);
  return v24;
}

