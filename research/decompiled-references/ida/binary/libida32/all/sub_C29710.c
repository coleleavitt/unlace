__int64 __fastcall sub_C29710(__int64 *a1, __int64 a2)
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
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdi
  __int16 v19; // ax
  unsigned int v20; // r12d
  __int64 v21; // r11
  __m128i *v22; // r14
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  unsigned int v32; // eax
  char v33; // al
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  void *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  __int64 v49; // r9
  unsigned __int64 v50; // rsi
  __int64 v51; // r12
  bool v52; // al
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // rdi
  char v55; // al
  char v56; // al
  __int64 v57; // r11
  bool v58; // al
  char v59; // al
  bool v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdi
  unsigned int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // r12d
  __int64 v74; // rdx
  __int64 v75; // rcx
  char v76; // al
  __int64 v77; // r9
  __int64 v78; // r11
  unsigned int v79; // eax
  unsigned __int8 **v80; // rax
  __int64 v81; // r8
  __int64 v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // rdx
  char v85; // al
  int v86; // esi
  int v87; // edi
  unsigned int v88; // eax
  __int64 v89; // rdi
  bool v90; // zf
  __m128i *v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // r12
  bool v97; // al
  unsigned int *v98; // r12
  _QWORD *v99; // rax
  __int64 v100; // rdx
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // [rsp-10h] [rbp-298h]
  __int64 v104; // [rsp-8h] [rbp-290h]
  __int64 v105; // [rsp+0h] [rbp-288h]
  __int64 v106; // [rsp+0h] [rbp-288h]
  __int64 v107; // [rsp+0h] [rbp-288h]
  __int64 v108; // [rsp+8h] [rbp-280h]
  unsigned int v109; // [rsp+14h] [rbp-274h]
  _QWORD *v110; // [rsp+18h] [rbp-270h]
  __int64 v111; // [rsp+18h] [rbp-270h]
  __int64 v112; // [rsp+18h] [rbp-270h]
  __int64 v113; // [rsp+18h] [rbp-270h]
  __int64 *v114; // [rsp+20h] [rbp-268h]
  __int64 v115; // [rsp+28h] [rbp-260h]
  __int64 v116; // [rsp+28h] [rbp-260h]
  __int64 v117; // [rsp+28h] [rbp-260h]
  unsigned int v118; // [rsp+28h] [rbp-260h]
  __int64 v119; // [rsp+30h] [rbp-258h]
  __int64 v120; // [rsp+30h] [rbp-258h]
  __int64 v121; // [rsp+30h] [rbp-258h]
  unsigned __int64 v122; // [rsp+40h] [rbp-248h]
  __int64 v123; // [rsp+48h] [rbp-240h]
  unsigned __int64 v124; // [rsp+48h] [rbp-240h]
  unsigned __int64 v125; // [rsp+48h] [rbp-240h]
  __int64 v126; // [rsp+50h] [rbp-238h]
  unsigned __int64 v127; // [rsp+50h] [rbp-238h]
  unsigned __int64 v128; // [rsp+50h] [rbp-238h]
  __int64 v129; // [rsp+50h] [rbp-238h]
  __int64 v130; // [rsp+50h] [rbp-238h]
  unsigned __int64 v131; // [rsp+58h] [rbp-230h]
  unsigned __int64 v132; // [rsp+58h] [rbp-230h]
  __int64 v133; // [rsp+58h] [rbp-230h]
  unsigned int v134; // [rsp+60h] [rbp-228h] BYREF
  char v135; // [rsp+64h] [rbp-224h]
  _QWORD v136[3]; // [rsp+A0h] [rbp-1E8h] BYREF
  char v137; // [rsp+B8h] [rbp-1D0h]
  __int64 v138; // [rsp+C8h] [rbp-1C0h]
  void *v139; // [rsp+D0h] [rbp-1B8h]
  __int64 v140; // [rsp+D8h] [rbp-1B0h]
  _BYTE v141[64]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int8 v142; // [rsp+120h] [rbp-168h]
  char v143; // [rsp+121h] [rbp-167h]
  char *v144[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v145; // [rsp+140h] [rbp-148h]
  char v146; // [rsp+148h] [rbp-140h]
  __int64 v147; // [rsp+158h] [rbp-130h]
  void *v148; // [rsp+160h] [rbp-128h]
  __int64 v149; // [rsp+168h] [rbp-120h]
  _BYTE v150[64]; // [rsp+170h] [rbp-118h] BYREF
  char v151; // [rsp+1B0h] [rbp-D8h]
  char v152; // [rsp+1B1h] [rbp-D7h]
  __m128i ptr; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+1D0h] [rbp-B8h] BYREF
  char v155; // [rsp+1D8h] [rbp-B0h]
  __int64 v156; // [rsp+1E8h] [rbp-A0h]
  void *v157; // [rsp+1F0h] [rbp-98h]
  __int64 v158; // [rsp+1F8h] [rbp-90h]
  _BYTE v159[136]; // [rsp+200h] [rbp-88h] BYREF

  v2 = a2;
  v4 = *a1;
  v134 = 0;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 272);
  v135 &= ~1u;
  v109 = v6;
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
  v108 = 0;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = v11;
  v139 = v141;
  v140 = 0x800000000LL;
  v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  v115 = *(unsigned int *)(v2 + 16);
  LOBYTE(v11) = *(_BYTE *)(v2 + 2);
  v137 |= 1u;
  v138 = 0;
  v143 = 0;
  memset(v136, 0, sizeof(v136));
  v114 = (__int64 *)(v2 + 8 * (((v11 & 8) != 0) + 1LL) + 32);
  v17 = *(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1F3 )
  {
    v18 = *a1;
    v19 = *(_WORD *)v15 & 0x1FF;
    if ( v19 == 46 )
    {
      v110 = (_QWORD *)v15;
      v20 = sub_C3A250(v18, *(_QWORD *)(v15 + 16), v136);
      if ( !(_BYTE)v20 )
        goto LABEL_26;
      v15 = (__int64)v110;
      v18 = *a1;
      v21 = v110[3];
      if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v22 = (__m128i *)v136;
        v111 = (*v110 >> 20) & 1LL;
        goto LABEL_9;
      }
      goto LABEL_72;
    }
    if ( ((v19 + 394) & 0x1FFu) <= 1 )
    {
      v120 = v15;
      v69 = sub_C3A3B0(v18, v15, v136, 0);
      v21 = v69;
      if ( !v69 )
      {
        v20 = 0;
        goto LABEL_26;
      }
      v18 = *a1;
      LOBYTE(v111) = 0;
      v22 = (__m128i *)v136;
      v15 = v120;
      if ( (*(_BYTE *)(v69 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_9;
    }
    else if ( v19 == 102 )
    {
      v105 = v15;
      v66 = sub_E0E500(v18);
      v67 = v105;
      if ( *(char *)(v66 + 1) >= 0 )
      {
        sub_E0FF50(*a1, v105, 2480, 0);
        v67 = v105;
      }
      v106 = v67;
      v20 = sub_C3A250(*a1, *(_QWORD *)(v67 + 16), v136);
      if ( (_BYTE)v20 )
      {
        v68 = sub_C703D0(v106);
        v20 = sub_C30630(*a1, v106, v136, v68);
      }
      goto LABEL_26;
    }
LABEL_72:
    v20 = sub_BF05D0(v18, v15);
    goto LABEL_26;
  }
  v112 = v15;
  if ( !sub_BF8240(*v16, a2, v12, v13) )
  {
    v20 = sub_BF05D0(*a1, v2);
    goto LABEL_26;
  }
  v144[0] = nullptr;
  v148 = v150;
  v149 = 0x800000000LL;
  v45 = *a1;
  v144[1] = nullptr;
  v145 = 0;
  v146 |= 1u;
  v147 = 0;
  v152 = 0;
  ptr.m128i_i64[0] = v45;
  ptr.m128i_i64[1] = (__int64)v144;
  LOBYTE(v154) = 0;
  v20 = sub_C24FB0(&ptr, v112, v42, (__int64)v144, v43, v112);
  if ( !(_BYTE)v20 )
    goto LABEL_61;
  v48 = *a1;
  v49 = v112;
  if ( v145 )
    goto LABEL_69;
  LOBYTE(v111) = v151 & 1;
  if ( (v151 & 1) != 0 )
  {
    v107 = v49;
    v80 = (unsigned __int8 **)sub_E0FED0(v48, v49, 2460, 0);
    if ( v80 )
      sub_AC60B0(v80, v107, 0xFu);
    goto LABEL_82;
  }
  if ( !v144[0]
    || ((__int64)v144[0] & 3) != 0
    || (v50 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        v122 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        v124 = (unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL,
        ((unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (*(_BYTE *)(((unsigned __int64)v144[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_69:
    v20 = sub_BF05D0(v48, v49);
    goto LABEL_61;
  }
  v51 = *(_QWORD *)(v48 + 16);
  v126 = *(_QWORD *)(v50 + 48);
  v26 = sub_F44710(*v16, v50, v126, v46, v47);
  v52 = sub_A5E750(v51, v26, v126);
  v53 = v124;
  if ( !v52 )
  {
    v20 = sub_BF05D0(*a1, v2);
    goto LABEL_61;
  }
  if ( (*(_WORD *)v2 & 0x1FF) == 0x5B )
  {
    v54 = (*(_BYTE *)(v2 + 3) >> 1) & 0x3F;
    if ( (_DWORD)v54 == 15 || (_DWORD)v54 == 20 || (v55 = sub_BEC850(v54), v53 = v124, v55) )
    {
      v81 = *a1;
      v82 = *(_QWORD *)(*a1 + 32);
      v83 = *(_DWORD *)(v82 + 128);
      v84 = (unsigned int)(*(_DWORD *)(v82 + 160) + 1);
      *(_DWORD *)(v82 + 160) = v84;
      v108 = (v84 << 32) | v83;
      if ( (*(_BYTE *)(v122 + 28) & 0x7Fu) - 35 <= 3
        && (v125 = v53, v85 = sub_B744C0((_QWORD *)v122, 0xFFFFFFFF00000000LL), v81 = *a1, v53 = v125, v85) )
      {
        v86 = v115 - 1;
        v87 = (_DWORD)v114 + 8;
      }
      else
      {
        v86 = v115;
        v87 = (int)v114;
      }
      v132 = v53;
      v88 = sub_C339F0(v87, v86, v122, v108, v81, v122, 1, (__int64)v136);
      v26 = v103;
      v20 = v88;
      if ( !(_BYTE)v88 )
        goto LABEL_61;
      v123 = v122;
      v53 = v132;
      v127 = v2;
    }
    else
    {
      v127 = v2;
      v123 = 0;
    }
  }
  else
  {
    v123 = 0;
    v127 = 0;
  }
  if ( (*(_BYTE *)(v122 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v131 = v53;
    v56 = sub_B744C0((_QWORD *)v122, v26);
    v57 = v131;
    if ( v56 || v127 && (v58 = sub_B73CB0((_QWORD *)v122), v57 = v131, v58) )
    {
      v89 = *a1;
      if ( !v115 )
      {
        v20 = sub_BF05D0(v89, v2);
        goto LABEL_61;
      }
      v133 = v57;
      v26 = *v114;
      v20 = sub_C3A250(v89, *v114, v136);
      if ( !(_BYTE)v20 )
        goto LABEL_61;
      v90 = !sub_B73CB0((_QWORD *)v122);
      v91 = nullptr;
      if ( v90 )
        v91 = (__m128i *)v136;
      v22 = v91;
      v92 = sub_E0E500(*a1);
      v21 = v133;
      if ( *(char *)(v92 + 1) < 0 && v127 && ((*(_BYTE *)(v127 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v122 + 82) < 0 )
      {
        v20 = v142;
        LOBYTE(v20) = (v142 & 2) != 0;
        if ( (v142 & 2) != 0 )
          goto LABEL_82;
        if ( (v137 & 1) != 0 )
          goto LABEL_61;
        v26 = *v114;
        v102 = sub_C10450(*a1, *v114, (unsigned __int64)v136, v27, v28);
        v21 = v133;
        v20 = v102;
        if ( !(_BYTE)v102 )
          goto LABEL_61;
      }
      --v115;
      LODWORD(v114) = (_DWORD)v114 + 8;
LABEL_96:
      if ( v148 != v150 )
      {
        v121 = v21;
        free(v148);
        v21 = v121;
      }
      if ( v123 )
        goto LABEL_11;
      v18 = *a1;
LABEL_9:
      v23 = *(_QWORD *)(v18 + 32);
      v24 = *(_DWORD *)(v23 + 128);
      v25 = (unsigned int)(*(_DWORD *)(v23 + 160) + 1);
      *(_DWORD *)(v23 + 160) = v25;
      v108 = (v25 << 32) | v24;
      v26 = v115;
      v119 = v21;
      v20 = sub_C339F0((_DWORD)v114, v115, v21, v24, v18, v21, 0, (__int64)v136);
      v30 = v104;
      if ( !(_BYTE)v20 )
        goto LABEL_26;
      v21 = v119;
      v123 = v119;
LABEL_11:
      ptr.m128i_i64[0] = (__int64)&v154;
      ptr.m128i_i64[1] = 0x400000000LL;
      v31 = *(_BYTE *)(v21 + 28) & 0x7F;
      if ( v22 )
      {
        v30 = (unsigned int)v31 - 35;
        if ( (unsigned int)v30 <= 3 )
        {
          v116 = v21;
          LOBYTE(v32) = sub_AC9870(v21);
          v32 ^= 1u;
          v20 = v32;
          LOBYTE(v20) = v111 | v32;
          if ( (unsigned __int8)v111 | (unsigned __int8)v32 )
          {
            v33 = sub_B744C0((_QWORD *)v116, v26);
            v21 = v116;
            if ( v33 )
            {
              v20 = sub_C0F160(*a1, (_DWORD *)v2, v22, 4 * (unsigned int)((*(_BYTE *)(v116 + 28) & 0x7F) == 36) + 5, 0);
              if ( !(_BYTE)v20 )
                goto LABEL_22;
              v21 = v116;
            }
          }
          else
          {
            v21 = sub_C0FF80(*a1, (_DWORD *)v2, v22, v116, (__int64)&ptr);
            if ( !v21 )
              goto LABEL_22;
          }
          v31 = *(_BYTE *)(v21 + 28) & 0x7F;
        }
      }
      if ( v31 == 36 )
      {
        v34 = *(_QWORD *)(*a1 + 16);
        v35 = sub_B4E950(v21 + 72);
        v39 = v35 - 64;
        if ( v35 )
          v35 -= 64LL;
        v40 = sub_A56C90(v34, v35, v39, v36, v37, v38);
        v20 = sub_C30630(*a1, v2, v22, v40);
        if ( !(_BYTE)v20 )
          goto LABEL_22;
      }
      else
      {
        v117 = v21;
        v144[0] = nullptr;
        v113 = sub_B5BA10((_QWORD *)v21, v144, v30, v27, v28, v29);
        v73 = sub_BDCD00(v2, (__int64)v144, v70, v71, v72);
        v76 = sub_B53480(v117, (__int64)v144, v74, v75);
        v78 = v117;
        v118 = v73;
        if ( v76 )
          v22 = (__m128i *)v136;
        v20 = sub_BF9920(*a1, v73, v78, v144[0], v113, v77);
        if ( !(_BYTE)v20
          || (v20 = sub_C33320(v118, v144[0], (_DWORD)v22, v2, (_DWORD)v114, v113, v123, v108, *a1, (__int64)&v134, 0),
              !(_BYTE)v20)
          || ptr.m128i_i32[2]
          && (v20 = sub_C0A6A0(*a1, v2, (__int64)&v134, ptr.m128i_i64[0], ptr.m128i_u32[2]), !(_BYTE)v20) )
        {
LABEL_22:
          v41 = (void *)ptr.m128i_i64[0];
          if ( (__int64 *)ptr.m128i_i64[0] == &v154 )
            goto LABEL_26;
          goto LABEL_23;
        }
      }
      v79 = sub_C325E0(v4, 1, v109);
      v109 = -1;
      v20 = v79;
      goto LABEL_22;
    }
    v128 = v57;
    v59 = sub_B74C10(v122);
    v53 = v128;
    if ( v59 )
    {
      v93 = sub_B4E950(v122 + 72);
      if ( v93 )
        v93 -= 64LL;
      v94 = sub_B73220(v93);
      v95 = v93;
      v22 = nullptr;
      v96 = v94;
      v97 = sub_B731B0(v95);
      v21 = v96;
      if ( v97 )
      {
        v130 = v96;
        v98 = (unsigned int *)sub_B53E10(v122);
        v99 = (_QWORD *)sub_B53CF0(v130);
        v100 = *v98;
        v26 = (__int64)(v98 + 2);
        ptr.m128i_i64[0] = 0;
        v21 = sub_B9FDF0(v99, (__int64)(v98 + 2), v100, (__int64)&ptr);
      }
      goto LABEL_96;
    }
  }
  v26 = 0;
  v129 = v53;
  if ( !sub_B523A0(v122, nullptr, nullptr) )
  {
    v21 = v129;
    v22 = nullptr;
    goto LABEL_96;
  }
  ptr.m128i_i64[0] = *(_QWORD *)(v122 + 40);
  v60 = sub_BF9580(&ptr);
  v64 = *a1;
  if ( v60 )
  {
    ptr = 0u;
    v157 = v159;
    v154 = 0;
    v155 |= 1u;
    v156 = 0;
    v158 = 0x800000000LL;
    v159[65] = 0;
    v20 = *(unsigned __int8 *)(v64 + 914);
    if ( !(_BYTE)v20 )
    {
      if ( !*(_DWORD *)(v64 + 900) )
      {
        v20 = sub_C238B0(v64, v2, (__int64)&ptr);
        if ( (_BYTE)v20 )
        {
          sub_BEBB50((__int64)&ptr, (__int64)&v134);
          v65 = sub_C325E0(v4, 1, v109);
          v109 = -1;
          v20 = v65;
        }
        if ( v157 != v159 )
          free(v157);
      }
      goto LABEL_61;
    }
LABEL_82:
    v20 = 0;
    goto LABEL_61;
  }
  v20 = sub_C28670(v64, v2, v61, v62, v63);
  if ( (_BYTE)v20 )
  {
    v101 = sub_C325E0(v4, 1, v109);
    v109 = -1;
    v20 = v101;
  }
LABEL_61:
  v41 = v148;
  if ( v148 != v150 )
LABEL_23:
    free(v41);
LABEL_26:
  if ( v139 != v141 )
    free(v139);
  if ( v109 != -1 )
    sub_C325E0(v4, 0, v109);
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 144LL);
  if ( (_BYTE)v20 )
    sub_A30FE0(a1[2], (int *)&v134);
  if ( v134 > 1 )
    sub_A2BBA0((int *)&v134);
  return v20;
}

