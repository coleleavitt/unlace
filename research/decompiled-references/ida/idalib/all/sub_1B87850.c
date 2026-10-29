__int64 __fastcall sub_1B87850(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _WORD *v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rcx
  unsigned __int16 *v14; // r13
  unsigned __int16 v15; // ax
  __int64 v16; // rdi
  unsigned __int16 *v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int16 v25; // ax
  char v26; // al
  __int64 v27; // r12
  unsigned int v28; // eax
  void *v29; // rsi
  _QWORD *v30; // rbx
  _QWORD *v31; // r12
  unsigned __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  unsigned __int64 v38; // r14
  size_t v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // r13
  _QWORD *v47; // r12
  __int64 v48; // rax
  unsigned __int16 *v49; // rsi
  _QWORD *v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // r12
  _QWORD *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // r9
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // r12
  __int64 v64; // rax
  __int16 v65; // r12
  __int16 v66; // r12
  __int64 v67; // rbx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r13
  size_t v70; // rax
  __int64 v71; // r13
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  unsigned __int64 v80; // r13
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  unsigned __int64 v87; // r12
  __int64 v88; // rbx
  __int64 v89; // rdi
  _QWORD *v90; // rax
  __int64 result; // rax
  __int16 v92; // dx
  unsigned __int16 *v93; // rax
  unsigned __int8 v94; // al
  __int64 v95; // rax
  _QWORD *v96; // r12
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r12
  _QWORD *v100; // rax
  unsigned __int64 v101; // r13
  _QWORD *v102; // r12
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r12
  _QWORD *v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // r8
  __int64 v110; // rdi
  __int64 v111; // [rsp+18h] [rbp-140h]
  _QWORD *v112; // [rsp+18h] [rbp-140h]
  __int64 v113; // [rsp+20h] [rbp-138h] BYREF
  _WORD *v114; // [rsp+28h] [rbp-130h]
  unsigned __int16 *v115; // [rsp+30h] [rbp-128h]
  __int64 *v116; // [rsp+38h] [rbp-120h]
  unsigned __int64 v117; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int16 *v118; // [rsp+48h] [rbp-110h]
  __int64 v119; // [rsp+50h] [rbp-108h]
  unsigned __int16 *v120; // [rsp+58h] [rbp-100h]
  unsigned __int64 v121; // [rsp+60h] [rbp-F8h]
  __int64 *v122; // [rsp+68h] [rbp-F0h]
  _QWORD *v123; // [rsp+70h] [rbp-E8h]
  __int64 v124; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+80h] [rbp-D8h]
  int v126; // [rsp+8Ch] [rbp-CCh]
  void *v127; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v128; // [rsp+98h] [rbp-C0h]
  char *v129; // [rsp+A0h] [rbp-B8h] BYREF
  size_t v130; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v131; // [rsp+B0h] [rbp-A8h]
  __int64 v132; // [rsp+B8h] [rbp-A0h]
  __int64 v133; // [rsp+C0h] [rbp-98h]
  __int64 v134; // [rsp+C8h] [rbp-90h]
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v136; // [rsp+D8h] [rbp-80h]
  _QWORD v137[15]; // [rsp+E0h] [rbp-78h] BYREF

  v4 = (_WORD *)a2;
  v113 = a1;
  v5 = (_QWORD *)sub_168B6C0(a1);
  if ( (*(_WORD *)a2 & 0x1FF) == 0xF3 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( (*(_WORD *)v6 & 0x1FF) == 0xF5 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32);
    v114 = (_WORD *)v7;
    v10 = v7;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
    v10 = sub_EF23B0(a2);
    v8 = *(_QWORD *)(a2 + 40);
    v9 = *(_QWORD *)(a2 + 48);
    v114 = (_WORD *)v10;
  }
  v11 = *(_QWORD *)(v7 + 48);
  v119 = *(_QWORD *)(v10 + 48);
  v12 = sub_BFB900(v8);
  if ( (*(_WORD *)v12 & 0x1FFu) <= 0x75 )
  {
    v17 = *(unsigned __int16 **)(v12 + 8 * (((*(_BYTE *)(v12 + 2) & 8) != 0) + 1LL) + 40);
    v18 = *(_BYTE *)(v12 + 3);
    v118 = v17;
    __asm { jmp     rax }
  }
  v13 = *(unsigned __int16 **)(v12 + 24);
  v14 = *(unsigned __int16 **)(v12 + 16);
  v15 = *(_WORD *)(v12 + 2);
  v118 = v13;
  LODWORD(v117) = (v15 >> 3) & 0x3F;
  v16 = (__int64)v14;
  v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v14);
  if ( (*v115 & 0x1FF) != 0x47 || v7 != *((_QWORD *)v115 + 2) )
  {
    switch ( (int)v117 )
    {
      case 10:
        LODWORD(v117) = 11;
        v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v118);
        goto LABEL_12;
      case 11:
        LODWORD(v117) = 10;
        v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v118);
        goto LABEL_12;
      case 12:
        LODWORD(v117) = 13;
        v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v118);
        goto LABEL_12;
      case 13:
        LODWORD(v117) = 12;
        v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v118);
        goto LABEL_12;
      case 14:
      case 15:
        v115 = (unsigned __int16 *)sub_BFB900((unsigned __int64)v118);
        goto LABEL_12;
      default:
        return sub_1B888F0(v16, a2);
    }
  }
  v93 = v118;
  v118 = v14;
  v14 = v93;
LABEL_12:
  v111 = sub_A63D40(v5);
  v16 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_9EC890(v16, a2, v19, v20, v21) )
  {
    v16 = (__int64)v5;
    a2 = (unsigned int)sub_AAC1F0((__int64)v5, v11, v22, v23, v24);
    v111 = sub_A64980((__int64)v5, a2, 0);
  }
  v25 = *(_WORD *)v9 & 0x1FF;
  if ( v25 == 4 )
  {
    v26 = *(_BYTE *)(v9 + 2) >> 3;
    switch ( v26 )
    {
      case 1:
        goto LABEL_60;
      case 0:
      case 2:
        v27 = 1;
        goto LABEL_19;
      case 3:
LABEL_60:
        v27 = -1;
LABEL_19:
        v28 = sub_AAC1F0((__int64)v5, v111, v22, v23, v24);
        LODWORD(v136) = v28;
        if ( v28 > 0x40 )
        {
          sub_2205470(&ptr, v27, 1);
        }
        else
        {
          v29 = (void *)(v27 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v28));
          if ( !v28 )
            v29 = nullptr;
          ptr = v29;
        }
        goto LABEL_23;
    }
    return sub_1B888F0(v16, a2);
  }
  if ( ((v25 + 394) & 0x1FFu) <= 1 )
  {
    if ( ((*(_WORD *)(v9 + 2) >> 3) & 0x3F) == 0x19 )
    {
      v120 = *(unsigned __int16 **)(v9 + 24);
      goto LABEL_26;
    }
    v109 = *(_QWORD **)(v9 + 24);
    v110 = *(_QWORD *)v113;
LABEL_80:
    v120 = (unsigned __int16 *)(sub_1925670(v110, 0, 0, 7, v109, 0, a3, a4) & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_26;
  }
  v94 = (*(_BYTE *)(v9 + 3) >> 1) & 0x3F;
  if ( v94 == 19 )
  {
    v110 = *(_QWORD *)v113;
    v109 = *(_QWORD **)(v9 + 8 * (((*(_BYTE *)(v9 + 2) & 8) != 0) + 1LL) + 40);
    goto LABEL_80;
  }
  if ( v94 > 0x13u )
  {
    if ( v94 == 37 )
    {
      LODWORD(v136) = sub_AAC1F0((__int64)v5, v111, v22, v23, v24);
      if ( (unsigned int)v136 > 0x40 )
        sub_2205470(&ptr, 1, 0);
      else
        ptr = &dword_0 + 1;
    }
    else
    {
      if ( v94 != 38 )
        return sub_1B888F0(v16, a2);
      LODWORD(v136) = sub_AAC1F0((__int64)v5, v111, v22, v23, v24);
      if ( (unsigned int)v136 > 0x40 )
        sub_2205470(&ptr, -1, 0);
      else
        ptr = (void *)-1LL;
    }
LABEL_23:
    v120 = (unsigned __int16 *)sub_C0C5D0(v5, (__int64)&ptr, v111, 0);
    if ( (unsigned int)v136 > 0x40 && ptr )
      operator delete[](ptr);
    goto LABEL_26;
  }
  if ( v94 != 18 )
    return sub_1B888F0(v16, a2);
  v120 = *(unsigned __int16 **)(v9 + 8 * (((*(_BYTE *)(v9 + 2) & 8) != 0) + 1LL) + 40);
LABEL_26:
  v30 = *(_QWORD **)v113;
  v31 = *(_QWORD **)(*(_QWORD *)v113 + 248LL);
  v122 = sub_A81910(v31, v111, 0);
  v129 = "Distance";
  v32 = sub_A73030((__int64)v31, v111, 1u);
  v130 = j__strlen("Distance");
  v116 = (__int64 *)&v129;
  v131 = v32;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  sub_1C40660((_DWORD)v30, 0, 0, 0, (unsigned int)&v129, 2, 0);
  sub_1C36400(v30, 0);
  v33 = v30[68];
  if ( !v33 )
    goto LABEL_85;
  v34 = *(_QWORD *)(v33 + 48);
  LODWORD(v136) = 0;
  ptr = nullptr;
  v137[0] = 0;
  v35 = sub_1907C00((__int64)v30, v34, v111, 1, (__int64)&ptr, 0, *(double *)a3.m128_u64, a4, 0, 0, 0);
  ptr = v137;
  v124 = v35;
  v136 = 0x400000000LL;
  v36 = j__strlen(".start");
  v118 = (unsigned __int16 *)sub_1B7CFA0(v30, (__int64)&ptr, v118, ".start", v36, a3, a4);
  v37 = j__strlen(".stop");
  v38 = sub_1B7CFA0(v30, (__int64)&ptr, v14, ".stop", v37, a3, a4);
  v39 = j__strlen(".step");
  v121 = sub_1B7CFA0(v30, (__int64)&ptr, v120, ".step", v39, a3, a4);
  v128 = sub_AAC1F0((__int64)v31, v111, v40, v41, v42);
  if ( v128 > 0x40 )
    sub_2205470(&v127, 0, 0);
  else
    v127 = nullptr;
  v123 = (_QWORD *)sub_C0C5D0(v31, (__int64)&v127, v111, 0);
  if ( v128 > 0x40 && v127 )
    operator delete[](v127);
  v128 = sub_AAC1F0((__int64)v31, v111, v43, v44, v45);
  if ( v128 > 0x40 )
    sub_2205470(&v127, 1, 0);
  else
    v127 = &dword_0 + 1;
  v46 = (_QWORD *)sub_C0C5D0(v31, (__int64)&v127, v111, 0);
  if ( v128 > 0x40 && v127 )
    operator delete[](v127);
  if ( (_DWORD)v117 == 15 )
  {
    v95 = sub_1AEE080((__int64)v30, v121);
    v117 = sub_1929BB0((__int64)v30, 0, 0, 0xAu, v95, v123, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
    v96 = (_QWORD *)sub_1AEE080((__int64)v30, (__int64)v118);
    v97 = sub_1AEE080((__int64)v30, v38);
    v98 = sub_1929BB0((__int64)v30, 0, 0, 6u, v97, v96, a3, a4, 0);
    v99 = sub_16B2590((__int64)v30, 0, v122, 0, (_WORD *)(v98 & 0xFFFFFFFFFFFFFFFELL), a3, *(double *)a4.m128_u64);
    v100 = (_QWORD *)sub_1AEE080((__int64)v30, v121);
    v101 = sub_1929BB0((__int64)v30, 0, 0, 3u, v99 & 0xFFFFFFFFFFFFFFFELL, v100, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
    v102 = (_QWORD *)sub_1AEE080((__int64)v30, v38);
    v103 = sub_1AEE080((__int64)v30, (__int64)v118);
    v104 = sub_1929BB0((__int64)v30, 0, 0, 6u, v103, v102, a3, a4, 0);
    v105 = sub_16B2590((__int64)v30, 0, v122, 0, (_WORD *)(v104 & 0xFFFFFFFFFFFFFFFELL), a3, *(double *)a4.m128_u64);
    v106 = (_QWORD *)sub_1AEE080((__int64)v30, v121);
    v107 = sub_1925670((__int64)v30, 0, 0, 7, v106, 0, a3, a4);
    v108 = sub_1929BB0(
             (__int64)v30,
             0,
             0,
             3u,
             v105 & 0xFFFFFFFFFFFFFFFELL,
             (_QWORD *)(v107 & 0xFFFFFFFFFFFFFFFELL),
             a3,
             a4,
             0);
    v58 = (_QWORD *)v101;
    v59 = v117;
    v60 = v108 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v47 = (_QWORD *)sub_1AE9760((__int64)v30, v38, *(_QWORD *)(v38 + 48), 0);
    v48 = sub_1AE9760((__int64)v30, (__int64)v118, *((_QWORD *)v118 + 6), 0);
    v125 = sub_1929BB0((__int64)v30, 0, 0, v117, v48, v47, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
    v126 = (v117 - 11) & 0xFFFFFFFD;
    if ( v126 )
    {
      v49 = (unsigned __int16 *)v38;
      v50 = (_QWORD *)sub_1AEE080((__int64)v30, (__int64)v118);
    }
    else
    {
      v49 = v118;
      v50 = (_QWORD *)sub_1AEE080((__int64)v30, v38);
    }
    v51 = sub_1AEE080((__int64)v30, (__int64)v49);
    v52 = sub_1929BB0((__int64)v30, 0, 0, 6u, v51, v50, a3, a4, 0);
    v53 = sub_16B2590((__int64)v30, 0, v122, 0, (_WORD *)(v52 & 0xFFFFFFFFFFFFFFFELL), a3, *(double *)a4.m128_u64)
        & 0xFFFFFFFFFFFFFFFELL;
    if ( (unsigned int)(v117 - 12) <= 1 )
      v53 = sub_1929BB0((__int64)v30, 0, 0, 5u, v53, v46, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
    v54 = (_QWORD *)sub_1AE9760((__int64)v30, v121, *(_QWORD *)(v121 + 48), 0);
    if ( !v126 )
      v54 = (_QWORD *)(sub_1925670((__int64)v30, 0, 0, 7, v54, 0, a3, a4) & 0xFFFFFFFFFFFFFFFELL);
    v55 = sub_1929BB0((__int64)v30, 0, 0, 6u, (__int64)v54, v46, a3, a4, 0);
    v56 = sub_1929BB0((__int64)v30, 0, 0, 5u, v53, (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFELL), a3, a4, 0);
    v57 = sub_1929BB0((__int64)v30, 0, 0, 3u, v56 & 0xFFFFFFFFFFFFFFFELL, v54, a3, a4, 0);
    v58 = v123;
    v59 = v125;
    v60 = v57 & 0xFFFFFFFFFFFFFFFELL;
  }
  v61 = sub_1923BC0((__int64)v30, 0, 0, v59, v60, (__int64)v58, a3, a4);
  v62 = sub_1929BB0((__int64)v30, v30[76], 0, 0x15u, v124, (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFELL), a3, a4, 0);
  sub_183F100((__int64)&ptr, v62 & 0xFFFFFFFFFFFFFFFELL);
  v63 = sub_1C36480(v30, 0, 0, ptr, (unsigned int)v136, 0) & 0xFFFFFFFFFFFFFFFELL;
  if ( ptr != v137 )
    free(ptr);
  sub_1C36470(v30);
  v64 = sub_1C37DC0(v30, v63);
  v65 = *v4;
  v117 = v64 & 0xFFFFFFFFFFFFFFFELL;
  v66 = v65 & 0x1FF;
  v67 = *(_QWORD *)v113;
  v68 = sub_A73030(*(_QWORD *)(*(_QWORD *)v113 + 248LL), v119, 1u);
  ptr = (void *)"LoopVar";
  v69 = v68;
  v70 = j__strlen("LoopVar");
  v137[0] = v69;
  v137[1] = "Logical";
  v136 = v70;
  v137[2] = j__strlen("Logical");
  memset(&v137[4], 0, 24);
  v137[3] = v111;
  sub_1C40660(v67, 0, 0, 0, (unsigned int)&ptr, 3, 0);
  sub_1905D90(v67, *((_QWORD *)v115 + 2), 0, 1, 0);
  sub_1C36400(v67, 0);
  v71 = *(_QWORD *)(v67 + 544);
  if ( !v71 )
LABEL_85:
    JUMPOUT(0x2EA740);
  v72 = *(_QWORD *)(v71 + 48);
  LODWORD(v130) = 0;
  v129 = nullptr;
  v131 = 0;
  v73 = sub_1907C00(v67, v72, v119, 1, (__int64)v116, 0, *(double *)a3.m128_u64, a4, 0, 0, 0);
  v74 = *(_QWORD *)(v71 + 56);
  LODWORD(v130) = 0;
  v75 = v73;
  v129 = nullptr;
  v131 = 0;
  v76 = sub_1907C00(v67, v74, v111, 1, (__int64)v116, 0, *(double *)a3.m128_u64, a4, 0, 0, 0);
  v129 = (char *)v67;
  v112 = (_QWORD *)v76;
  v130 = 0;
  v131 = 0;
  LODWORD(v132) = 0;
  v80 = sub_1B7CAD0(v116, v115, a3, a4, v77, v78, v79) & 0xFFFFFFFFFFFFFFFELL;
  v84 = sub_1B7CAD0(v116, v120, a3, a4, v81, v82, v83);
  v85 = sub_1929BB0(v67, 0, 0, 2u, v84 & 0xFFFFFFFFFFFFFFFELL, v112, a3, a4, 0);
  v86 = (_QWORD *)(sub_1929BB0(v67, 0, 0, 5u, v80, (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFELL), a3, a4, 0)
                 & 0xFFFFFFFFFFFFFFFELL);
  if ( v66 == 252 )
    v86 = (_QWORD *)(sub_1925670(v67, 0, 0, 5, v86, 0, a3, a4) & 0xFFFFFFFFFFFFFFFELL);
  v87 = sub_1929BB0(v67, *(_QWORD *)(v67 + 608), 0, 0x15u, v75, v86, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
  operator delete(v130, 16LL * (unsigned int)v132, 8);
  sub_1C36470(v67);
  sub_1C37DC0(v67, v87);
  v88 = v113;
  LODWORD(v136) = 0;
  ptr = nullptr;
  v89 = *(_QWORD *)v113;
  v137[0] = 0;
  v113 = sub_1907C00(
           v89,
           (__int64)v114,
           *((_QWORD *)v114 + 6),
           1,
           (__int64)&ptr,
           0,
           *(double *)a3.m128_u64,
           a4,
           0,
           0,
           0);
  v90 = (_QWORD *)sub_168B6C0(v88);
  result = sub_EEE9A0(40, v90, 8u);
  v92 = *(_WORD *)result & 0xFE00;
  LOBYTE(v92) = -19;
  *(_WORD *)result = v92;
  if ( unk_2CD7484 )
  {
    v114 = (_WORD *)result;
    sub_EE9B50(237);
    result = (__int64)v114;
  }
  v114 = v4;
  *(__m128 *)(result + 8) = _mm_loadh_ps((const double *)&v117);
  *(__m128 *)(result + 24) = _mm_loadh_ps((const double *)&v113);
  return result;
}
