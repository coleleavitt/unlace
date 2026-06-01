__int64 __fastcall sub_C3C840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r11
  __m128i *v28; // r12
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __m128i *v32; // rsi
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  char v35; // al
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  void *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // r9d
  unsigned int v48; // edx
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rsi
  __int64 v53; // r15
  bool v54; // al
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // rdi
  char v57; // al
  unsigned __int64 v58; // r15
  char v59; // al
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r11
  bool v64; // al
  char v65; // al
  bool v66; // al
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  _WORD *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r9
  int v84; // eax
  unsigned __int8 **v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned int v88; // ecx
  __int64 v89; // rdx
  char v90; // al
  __int64 v91; // rsi
  __int64 v92; // rdi
  int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rax
  bool v96; // zf
  __m128i *v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // r15
  __int64 v100; // r12
  bool v101; // al
  unsigned int *v102; // r15
  _QWORD *v103; // rax
  __int64 v104; // rdx
  int v105; // eax
  unsigned int v106; // eax
  __int128 v107; // [rsp-30h] [rbp-288h]
  __m128i *v108; // [rsp-10h] [rbp-268h]
  __int64 v109; // [rsp-8h] [rbp-260h]
  unsigned int v110; // [rsp+Ch] [rbp-24Ch]
  unsigned __int8 v111; // [rsp+Ch] [rbp-24Ch]
  unsigned __int8 v112; // [rsp+10h] [rbp-248h]
  unsigned __int8 v113; // [rsp+10h] [rbp-248h]
  unsigned __int8 v114; // [rsp+10h] [rbp-248h]
  __int64 v115; // [rsp+18h] [rbp-240h]
  __m128i **v116; // [rsp+20h] [rbp-238h]
  __int64 v117; // [rsp+28h] [rbp-230h]
  __int64 v118; // [rsp+28h] [rbp-230h]
  unsigned int v119; // [rsp+28h] [rbp-230h]
  unsigned __int64 v122; // [rsp+40h] [rbp-218h]
  __int64 v123; // [rsp+40h] [rbp-218h]
  unsigned __int64 v124; // [rsp+40h] [rbp-218h]
  __int64 v125; // [rsp+50h] [rbp-208h]
  unsigned __int64 v126; // [rsp+58h] [rbp-200h]
  unsigned __int64 v127; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v128; // [rsp+60h] [rbp-1F8h]
  unsigned __int64 v129; // [rsp+60h] [rbp-1F8h]
  __int64 v130; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v131; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v132; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v133; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v134; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 v135; // [rsp+68h] [rbp-1F0h]
  __int64 v136; // [rsp+68h] [rbp-1F0h]
  __m128i v137; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v138; // [rsp+80h] [rbp-1D8h]
  char v139; // [rsp+88h] [rbp-1D0h]
  __int64 v140; // [rsp+98h] [rbp-1C0h]
  void *v141; // [rsp+A0h] [rbp-1B8h]
  __int64 v142; // [rsp+A8h] [rbp-1B0h]
  _BYTE v143[64]; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned __int8 v144; // [rsp+F0h] [rbp-168h]
  char v145; // [rsp+F1h] [rbp-167h]
  char *v146[2]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v147; // [rsp+110h] [rbp-148h]
  char v148; // [rsp+118h] [rbp-140h]
  __int64 v149; // [rsp+128h] [rbp-130h]
  void *v150; // [rsp+130h] [rbp-128h]
  __int64 v151; // [rsp+138h] [rbp-120h]
  _BYTE v152[64]; // [rsp+140h] [rbp-118h] BYREF
  char v153; // [rsp+180h] [rbp-D8h]
  char v154; // [rsp+181h] [rbp-D7h]
  __m128i ptr; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v156; // [rsp+1A0h] [rbp-B8h] BYREF
  char v157; // [rsp+1A8h] [rbp-B0h]
  __int64 v158; // [rsp+1B8h] [rbp-A0h]
  void *v159; // [rsp+1C0h] [rbp-98h]
  __int64 v160; // [rsp+1C8h] [rbp-90h]
  _BYTE v161[136]; // [rsp+1D0h] [rbp-88h] BYREF

  v4 = a2;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 32);
  v110 = *(_DWORD *)(*a1 + 272);
  v8 = *(unsigned int *)(v7 + 148);
  v9 = *(_DWORD *)(v7 + 160) + 1;
  v10 = *(unsigned int *)(v7 + 144);
  *(_DWORD *)(v7 + 160) = v9;
  if ( v10 + 1 > v8 )
  {
    a2 = v7 + 152;
    sub_22134E0(v7 + 136, v7 + 152, v10 + 1, 4);
    v10 = *(unsigned int *)(v7 + 144);
  }
  *(_DWORD *)(*(_QWORD *)(v7 + 136) + 4 * v10) = v9;
  v11 = *(_QWORD *)(v4 + 32);
  ++*(_DWORD *)(v7 + 144);
  v12 = sub_BD7CB0(v11);
  v137 = 0u;
  v17 = *(_QWORD *)(v12 + 8);
  v18 = v12;
  v141 = v143;
  v142 = 0x800000000LL;
  v19 = *(unsigned int *)(v4 + 16);
  v20 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  v138 = 0;
  v117 = v19;
  LOBYTE(v19) = *(_BYTE *)(v4 + 2);
  v139 |= 1u;
  v140 = 0;
  v145 = 0;
  v115 = 0;
  v116 = (__m128i **)(v4 + 8 * (((v19 & 8) != 0) + 1LL) + 32);
  v21 = *(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1F3 )
  {
    v22 = *a1;
    v23 = *(_WORD *)v18 & 0x1FF;
    if ( v23 == 46 )
    {
      LODWORD(v26) = sub_C3A250(v22, *(__m128i **)(v18 + 16), (__int64)&v137, v14, v15, v16);
      if ( !(_BYTE)v26 )
        goto LABEL_26;
      v27 = *(_QWORD *)(v18 + 24);
      v22 = *a1;
      if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 35 <= 3 )
      {
        v28 = &v137;
        v125 = (*(_QWORD *)v18 >> 20) & 1LL;
        goto LABEL_9;
      }
      goto LABEL_68;
    }
    if ( ((v23 + 394) & 0x1FFu) <= 1 )
    {
      v76 = sub_C3A3B0(v22, v18, (__int64)&v137, 0, v15, v16);
      v27 = v76;
      if ( !v76 )
      {
        LODWORD(v26) = 0;
        goto LABEL_26;
      }
      v22 = *a1;
      LOBYTE(v125) = 0;
      v28 = &v137;
      if ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 35 <= 3 )
        goto LABEL_9;
    }
    else if ( v23 == 102 )
    {
      if ( *(char *)(sub_E0E500(v22) + 1) >= 0 )
        sub_E0FF50(*a1, v18, 2480, 0);
      LODWORD(v26) = sub_C3A250(*a1, *(__m128i **)(v18 + 16), (__int64)&v137, v72, v73, v74);
      if ( (_BYTE)v26 )
      {
        v75 = sub_C703D0(v18);
        LODWORD(v26) = sub_C30630(*a1, (_DWORD *)v18, &v137, v75);
      }
      goto LABEL_26;
    }
LABEL_68:
    LODWORD(v26) = sub_BF05D0(v22, v18);
    goto LABEL_26;
  }
  if ( !sub_BF8240(*v20, a2, v13, v14) )
  {
    LODWORD(v26) = sub_BF05D0(*a1, v4);
    goto LABEL_26;
  }
  v146[0] = nullptr;
  v150 = v152;
  v151 = 0x800000000LL;
  v50 = *a1;
  v146[1] = nullptr;
  ptr.m128i_i64[0] = v50;
  v147 = 0;
  v148 |= 1u;
  v149 = 0;
  v154 = 0;
  ptr.m128i_i64[1] = (__int64)v146;
  LOBYTE(v156) = 0;
  LODWORD(v26) = sub_C24FB0(&ptr, v18, v45, (__int64)v146, v46, v47);
  if ( !(_BYTE)v26 )
    goto LABEL_57;
  v51 = *a1;
  if ( v147 )
    goto LABEL_65;
  LOBYTE(v125) = v153 & 1;
  if ( (v153 & 1) != 0 )
  {
    v85 = (unsigned __int8 **)sub_E0FED0(v51, v18, 2460, 0);
    if ( v85 )
      sub_AC60B0(v85, v18, 0xFu);
    goto LABEL_78;
  }
  if ( !v146[0]
    || ((__int64)v146[0] & 3) != 0
    || (v52 = (unsigned __int64)v146[0] & 0xFFFFFFFFFFFFFFFCLL,
        v126 = (unsigned __int64)v146[0] & 0xFFFFFFFFFFFFFFFCLL,
        v128 = (unsigned __int64)v146[0] & 0xFFFFFFFFFFFFFFFCLL,
        ((unsigned __int64)v146[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (*(_BYTE *)(((unsigned __int64)v146[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_65:
    LODWORD(v26) = sub_BF05D0(v51, v18);
    goto LABEL_57;
  }
  v53 = *(_QWORD *)(v51 + 16);
  v130 = *(_QWORD *)(v52 + 48);
  v32 = (__m128i *)sub_F44710(*v20, v52, v130, v24, v25);
  v54 = sub_A5E750(v53, (__int64)v32, v130);
  v55 = v128;
  if ( !v54 )
  {
    LODWORD(v26) = sub_BF05D0(*a1, v4);
    goto LABEL_57;
  }
  if ( (*(_WORD *)v4 & 0x1FF) == 0x5B )
  {
    v56 = (*(_BYTE *)(v4 + 3) >> 1) & 0x3F;
    if ( (_DWORD)v56 == 15 || (_DWORD)v56 == 20 || (v57 = sub_BEC850(v56), v55 = v128, v57) )
    {
      v86 = *a1;
      v87 = *(_QWORD *)(*a1 + 32);
      v88 = *(_DWORD *)(v87 + 128);
      v89 = (unsigned int)(*(_DWORD *)(v87 + 160) + 1);
      *(_DWORD *)(v87 + 160) = v89;
      v115 = (v89 << 32) | v88;
      if ( (*(_BYTE *)(v126 + 28) & 0x7Fu) - 35 <= 3
        && (v129 = v55, v90 = sub_B744C0((_QWORD *)v126, 0xFFFFFFFF00000000LL), v86 = *a1, v55 = v129, v90) )
      {
        v91 = v117 - 1;
        v92 = (__int64)(v116 + 1);
      }
      else
      {
        v91 = v117;
        v92 = (__int64)v116;
      }
      v134 = v55;
      v93 = sub_C339F0(v92, v91, v126, v115, v86, v126, 1, (__int64)&v137);
      v32 = v108;
      LODWORD(v26) = v93;
      if ( !(_BYTE)v93 )
        goto LABEL_57;
      v127 = v126;
      v55 = v134;
      v58 = v4;
    }
    else
    {
      v127 = 0;
      v58 = v4;
    }
  }
  else
  {
    v127 = 0;
    v58 = 0;
  }
  if ( (*(_BYTE *)(v126 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v131 = v55;
    v59 = sub_B744C0((_QWORD *)v126, (__int64)v32);
    v63 = v131;
    if ( v59 || v58 && (v64 = sub_B73CB0((_QWORD *)v126), v63 = v131, v64) )
    {
      v94 = *a1;
      if ( !v117 )
      {
        LODWORD(v26) = sub_BF05D0(v94, v4);
        goto LABEL_57;
      }
      v135 = v63;
      v32 = *v116;
      LODWORD(v26) = sub_C3A250(v94, *v116, (__int64)&v137, v60, v61, v62);
      if ( !(_BYTE)v26 )
        goto LABEL_57;
      v96 = !sub_B73CB0((_QWORD *)v126);
      v97 = nullptr;
      if ( v96 )
        v97 = &v137;
      v28 = v97;
      v98 = sub_E0E500(*a1);
      v27 = v135;
      if ( *(char *)(v98 + 1) < 0 && v58 && ((*(_BYTE *)(v58 + 3) >> 1) & 0x3F) == 0xF && *(char *)(v126 + 82) < 0 )
      {
        LODWORD(v26) = v144;
        LOBYTE(v26) = (v144 & 2) != 0;
        if ( (v144 & 2) != 0 )
          goto LABEL_78;
        if ( (v139 & 1) != 0 )
          goto LABEL_57;
        v32 = *v116;
        v106 = sub_C10450(*a1, (__int64)*v116, (unsigned __int64)&v137, v24, v25);
        v27 = v135;
        v26 = v106;
        if ( !(_BYTE)v106 )
          goto LABEL_57;
      }
      --v117;
      ++v116;
LABEL_92:
      if ( v150 != v152 )
      {
        v124 = v27;
        free(v150);
        v27 = v124;
      }
      if ( v127 )
        goto LABEL_11;
      v22 = *a1;
LABEL_9:
      v29 = *(_QWORD *)(v22 + 32);
      v30 = *(_DWORD *)(v29 + 128);
      v31 = (unsigned int)(*(_DWORD *)(v29 + 160) + 1);
      *(_DWORD *)(v29 + 160) = v31;
      v115 = (v31 << 32) | v30;
      v32 = (__m128i *)v117;
      v122 = v27;
      v26 = (unsigned int)sub_C339F0((__int64)v116, v117, v27, v115, v22, v27, 0, (__int64)&v137);
      v33 = v109;
      if ( !(_BYTE)v26 )
        goto LABEL_26;
      v27 = v122;
      v127 = v122;
LABEL_11:
      ptr.m128i_i64[0] = (__int64)&v156;
      ptr.m128i_i64[1] = 0x400000000LL;
      v34 = *(_BYTE *)(v27 + 28) & 0x7F;
      if ( v28 )
      {
        v33 = (unsigned int)v34 - 35;
        if ( (unsigned int)v33 <= 3 )
        {
          v118 = v27;
          if ( (unsigned __int8)v125 | !sub_AC9870(v27) )
          {
            v35 = sub_B744C0((_QWORD *)v118, (__int64)v32);
            v27 = v118;
            if ( v35 )
            {
              v36 = sub_C0F160(*a1, (_DWORD *)v4, v28, 4 * (unsigned int)((*(_BYTE *)(v118 + 28) & 0x7F) == 36) + 5, 0);
              v26 = v36;
              if ( !(_BYTE)v36 )
                goto LABEL_22;
              v27 = v118;
            }
          }
          else
          {
            v95 = sub_C0FF80(*a1, (_DWORD *)v4, v28, v118, (__int64)&ptr);
            v26 = 0;
            v27 = v95;
            if ( !v95 )
              goto LABEL_22;
          }
          v34 = *(_BYTE *)(v27 + 28) & 0x7F;
        }
      }
      if ( v34 == 36 )
      {
        v37 = *(_QWORD *)(*a1 + 16);
        v38 = sub_B4E950(v27 + 72);
        v42 = v38 - 64;
        if ( v38 )
          v38 -= 64LL;
        v43 = sub_A56C90(v37, v38, v42, v39, v40, v41);
        LODWORD(v26) = sub_C30630(*a1, (_DWORD *)v4, v28, v43);
        if ( !(_BYTE)v26 )
          goto LABEL_22;
      }
      else
      {
        v123 = v27;
        v146[0] = nullptr;
        v77 = (_WORD *)sub_B5BA10((_QWORD *)v27, v146, v33, v24, v25, v26);
        v119 = sub_BDCD00(v4, (__int64)v146, v78, v79, v80);
        if ( (unsigned __int8)sub_B53480(v123, (__int64)v146, v81, v82) )
          v28 = &v137;
        LODWORD(v26) = sub_BF9920(*a1, v119, v123, v146[0], (__int64)v77, v83);
        if ( !(_BYTE)v26
          || (*((_QWORD *)&v107 + 1) = v115,
              *(_QWORD *)&v107 = v127,
              LODWORD(v26) = sub_C33320(v119, (__int64)v146[0], v28, v4, (_DWORD **)v116, v77, v107, *a1, a3, a4),
              !(_BYTE)v26)
          || (v25 = ptr.m128i_u32[2], ptr.m128i_i32[2])
          && (LODWORD(v26) = sub_C0A6A0(*a1, v4, a3, ptr.m128i_i64[0], ptr.m128i_u32[2]), !(_BYTE)v26) )
        {
LABEL_22:
          v44 = (void *)ptr.m128i_i64[0];
          if ( (__int64 *)ptr.m128i_i64[0] == &v156 )
            goto LABEL_26;
          goto LABEL_23;
        }
      }
      v84 = sub_C325E0(v6, 1, v110, v24, v25);
      v110 = -1;
      LODWORD(v26) = v84;
      goto LABEL_22;
    }
    v132 = v63;
    v65 = sub_B74C10(v126);
    v55 = v132;
    if ( v65 )
    {
      v99 = sub_B4E950(v126 + 72);
      if ( v99 )
        v99 -= 64LL;
      v100 = sub_B73220(v99);
      v101 = sub_B731B0(v99);
      v27 = v100;
      v28 = nullptr;
      if ( v101 )
      {
        v136 = v27;
        v102 = (unsigned int *)sub_B53E10(v126);
        v103 = (_QWORD *)sub_B53CF0(v136);
        v104 = *v102;
        v32 = (__m128i *)(v102 + 2);
        ptr.m128i_i64[0] = 0;
        v27 = sub_B9FDF0(v103, (__int64)(v102 + 2), v104, (__int64)&ptr);
      }
      goto LABEL_92;
    }
  }
  v32 = nullptr;
  v133 = v55;
  if ( !sub_B523A0(v126, nullptr, nullptr) )
  {
    v27 = v133;
    v28 = nullptr;
    goto LABEL_92;
  }
  ptr.m128i_i64[0] = *(_QWORD *)(v126 + 40);
  v66 = sub_BF9580(&ptr);
  v68 = *a1;
  if ( v66 )
  {
    ptr = 0u;
    v159 = v161;
    v156 = 0;
    v157 |= 1u;
    v158 = 0;
    v160 = 0x800000000LL;
    v161[65] = 0;
    LODWORD(v26) = *(unsigned __int8 *)(v68 + 914);
    if ( !(_BYTE)v26 )
    {
      v24 = *(unsigned int *)(v68 + 900);
      if ( !(_DWORD)v24 )
      {
        LODWORD(v26) = sub_C238B0(v68, v4, (__int64)&ptr);
        if ( (_BYTE)v26 )
        {
          sub_BEBB50((__int64)&ptr, a3);
          v71 = sub_C325E0(v6, 1, v110, v69, v70);
          v110 = -1;
          LODWORD(v26) = v71;
        }
        if ( v159 != v161 )
        {
          v114 = v26;
          free(v159);
          LODWORD(v26) = v114;
        }
      }
      goto LABEL_57;
    }
LABEL_78:
    LODWORD(v26) = 0;
    goto LABEL_57;
  }
  LODWORD(v26) = sub_C28670(v68, v4, v67, v24, v25);
  if ( (_BYTE)v26 )
  {
    v105 = sub_C325E0(v6, 1, v110, v24, v25);
    v110 = -1;
    LODWORD(v26) = v105;
  }
LABEL_57:
  v44 = v150;
  if ( v150 != v152 )
  {
LABEL_23:
    v112 = v26;
    free(v44);
    LODWORD(v26) = v112;
  }
LABEL_26:
  if ( v141 != v143 )
  {
    v113 = v26;
    free(v141);
    LODWORD(v26) = v113;
  }
  v48 = v110;
  if ( v110 != -1 )
  {
    v111 = v26;
    sub_C325E0(v6, 0, v48, v24, v25);
    LODWORD(v26) = v111;
  }
  --*(_DWORD *)(*(_QWORD *)(v6 + 32) + 144LL);
  return (unsigned int)v26;
}

