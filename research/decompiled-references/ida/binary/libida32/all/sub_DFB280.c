__int64 __fastcall sub_DFB280(_QWORD *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r13
  _QWORD **v22; // rdi
  __int64 (__fastcall *v23)(__int64); // rax
  void (__fastcall *v24)(_QWORD *, __int64, __int64, _QWORD); // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  _BYTE *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r14d
  char v31; // al
  int v32; // eax
  _WORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r12
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 (*v40)(void); // rax
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  _QWORD **v43; // rdi
  __int64 v44; // rdx
  _QWORD **v45; // rdi
  __int64 (*v46)(void); // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  void *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  _QWORD **v56; // rdi
  __int64 (*v57)(void); // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned int v60; // ecx
  void *v61; // rdi
  char v62; // si
  int v63; // edx
  _QWORD **v64; // rdi
  __int64 (*v65)(void); // rax
  unsigned __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  void *v70; // rdx
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  void *v73; // rdx
  int v74; // eax
  void *v75; // rdx
  _QWORD **v76; // rdi
  __int64 (*v77)(void); // rax
  unsigned __int64 v78; // rax
  void *v79; // rcx
  __int64 v80; // r8
  unsigned __int64 v81; // rdx
  __int64 v82; // rsi
  unsigned __int64 v83; // rdx
  int v84; // eax
  void *v85; // rdx
  _QWORD **v86; // rdi
  __int64 (*v87)(void); // rax
  void *v88; // rdx
  _QWORD **v89; // rdi
  __int64 (*v90)(void); // rax
  void *v91; // rdx
  _QWORD **v92; // rdi
  __int64 (*v93)(void); // rax
  void *v94; // rdx
  _QWORD **v95; // rdi
  __int64 (*v96)(void); // rax
  void *v97; // rdx
  _QWORD **v98; // rdi
  __int64 (*v99)(void); // rax
  void *v100; // rdx
  _QWORD **v101; // rdi
  __int64 (*v102)(void); // rax
  void *v103; // rdx
  _QWORD **v104; // rdi
  __int64 (*v105)(void); // rax
  void *v106; // rdx
  _QWORD **v107; // rdi
  __int64 (*v108)(void); // rax
  void *v109; // rdx
  _QWORD **v110; // rdi
  __int64 (*v111)(void); // rax
  void *v112; // rdx
  _QWORD **v113; // rdi
  __int64 (*v114)(void); // rax
  __int64 v115; // r8
  __int16 v116; // dx
  __int64 v117; // rbx
  _QWORD **v118; // rdi
  __int64 (*v119)(void); // rax
  int v120; // eax
  _BYTE *v121; // rax
  __int64 v122; // rax
  unsigned int v123; // eax
  __int64 v124; // rbx
  int v125; // eax
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rbx
  __int64 v129; // rbp
  __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  void *v134; // r14
  __int64 v135; // rbx
  __int64 v136; // rbp
  __int64 v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rbx
  _QWORD **v140; // rdi
  __int64 (*v141)(void); // rax
  __int64 v142; // r12
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rsi
  __int64 v146; // r8
  __int64 v147; // r9
  unsigned __int64 v148; // rsi
  unsigned __int64 v149; // rsi
  unsigned __int64 v150; // rbx
  _QWORD **v151; // rdi
  __int64 (*v152)(void); // rax
  __int64 v153; // rax
  void *v154; // rax
  void **v155; // rax
  __int64 v156; // rcx
  void **v157; // rbx
  void **v158; // rbp
  __int64 v159; // rdi
  void **v160; // rdx
  _WORD *v161; // rdx
  void **v162; // rcx
  void **v163; // rbx
  void *v164; // rbp
  unsigned int v165; // [rsp+0h] [rbp-128h]
  __int64 v166; // [rsp+20h] [rbp-108h]
  __int64 v167; // [rsp+28h] [rbp-100h]
  unsigned __int64 v168; // [rsp+40h] [rbp-E8h]
  void *v169; // [rsp+40h] [rbp-E8h]
  __int64 v170; // [rsp+40h] [rbp-E8h]
  __int64 v171; // [rsp+40h] [rbp-E8h]
  __int64 v172; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v173; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v174; // [rsp+40h] [rbp-E8h]
  unsigned int v175; // [rsp+48h] [rbp-E0h]
  int v176; // [rsp+48h] [rbp-E0h]
  int v177; // [rsp+48h] [rbp-E0h]
  int v178; // [rsp+48h] [rbp-E0h]
  int v179; // [rsp+48h] [rbp-E0h]
  int v180; // [rsp+48h] [rbp-E0h]
  int v181; // [rsp+48h] [rbp-E0h]
  int v182; // [rsp+48h] [rbp-E0h]
  int v183; // [rsp+48h] [rbp-E0h]
  __int64 v184; // [rsp+48h] [rbp-E0h]
  unsigned int v185; // [rsp+48h] [rbp-E0h]
  int v186; // [rsp+48h] [rbp-E0h]
  __int64 *v187; // [rsp+48h] [rbp-E0h]
  int v188; // [rsp+48h] [rbp-E0h]
  void **v189; // [rsp+48h] [rbp-E0h]
  __int64 v190; // [rsp+50h] [rbp-D8h]
  void *v191; // [rsp+50h] [rbp-D8h]
  void *v192; // [rsp+50h] [rbp-D8h]
  void *v193; // [rsp+50h] [rbp-D8h]
  void *v194; // [rsp+50h] [rbp-D8h]
  void **v195; // [rsp+50h] [rbp-D8h]
  __int64 *v196; // [rsp+50h] [rbp-D8h]
  int v197; // [rsp+50h] [rbp-D8h]
  int v198; // [rsp+50h] [rbp-D8h]
  unsigned int v199; // [rsp+58h] [rbp-D0h]
  __int64 v200; // [rsp+58h] [rbp-D0h]
  _QWORD *v201; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v202; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v203; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v204; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v205; // [rsp+60h] [rbp-C8h]
  _QWORD *v206; // [rsp+60h] [rbp-C8h]
  _QWORD *v207; // [rsp+68h] [rbp-C0h]
  _QWORD *v208; // [rsp+68h] [rbp-C0h]
  void *v209; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v210; // [rsp+78h] [rbp-B0h]
  void *v211; // [rsp+90h] [rbp-98h] BYREF
  __int64 v212; // [rsp+98h] [rbp-90h]
  int v213; // [rsp+A0h] [rbp-88h]
  void *v214; // [rsp+B0h] [rbp-78h] BYREF
  void *v215; // [rsp+B8h] [rbp-70h] BYREF
  void **v216; // [rsp+C0h] [rbp-68h]
  int v217; // [rsp+C8h] [rbp-60h]

  result = a1[4];
  if ( result )
  {
    if ( *(_DWORD *)(result + 8) == 3 )
      return result;
    v4 = *(_QWORD *)(result + 16);
    if ( (v4 & 4) != 0 )
      BUG();
    v5 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( (v5 & 7) == 6 )
    {
      result = *(_DWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD;
      if ( (_DWORD)result == 1 )
        return result;
    }
  }
  v7 = a1;
  v8 = (_QWORD *)a1[1];
  v9 = a1[17];
  v10 = v8[4];
  if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 8) - 1) <= 1 )
    goto LABEL_26;
  v11 = *(_QWORD *)(v10 + 16);
  if ( (v11 & 4) != 0 )
    BUG();
  if ( (*(_BYTE *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) == 0 )
    goto LABEL_26;
  v12 = (_QWORD *)v8[1];
  if ( !v12 )
    goto LABEL_26;
  v10 = v12[4];
  v13 = v8[17];
  if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 8) - 1) <= 1 )
    goto LABEL_163;
  v14 = *(_QWORD *)(v10 + 16);
  if ( (v14 & 4) != 0 )
    BUG();
  if ( (*(_BYTE *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) == 0 )
    goto LABEL_163;
  v8 = (_QWORD *)v12[1];
  if ( !v8 )
    goto LABEL_163;
  v10 = v8[4];
  v9 = v12[17];
  if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 8) - 1) <= 1 )
    goto LABEL_26;
  v15 = *(_QWORD *)(v10 + 16);
  if ( (v15 & 4) != 0 )
    BUG();
  if ( (*(_BYTE *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) == 0 || (v12 = (_QWORD *)v8[1]) == nullptr )
  {
LABEL_26:
    v18 = sub_E0E3B0(v8[2] + 16LL, v10, v9);
    goto LABEL_27;
  }
  v10 = v12[4];
  v13 = v8[17];
  if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 8) - 1) <= 1 )
    goto LABEL_163;
  v16 = *(_QWORD *)(v10 + 16);
  if ( (v16 & 4) != 0 )
    BUG();
  if ( (*(_BYTE *)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 2) == 0 || (v17 = (_QWORD *)v12[1]) == nullptr )
  {
LABEL_163:
    v18 = sub_E0E3B0(v12[2] + 16LL, v10, v13);
    goto LABEL_27;
  }
  v10 = v12[17];
  v18 = sub_DFB220(v17, v10);
LABEL_27:
  v19 = v7[4];
  if ( !v19 || (v20 = *(_QWORD *)(v19 + 16), (v20 & 4) != 0) )
    BUG();
  v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
  if ( ((*(_BYTE *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 28) + 93) & 0x7Fu) <= 2
    && (unsigned __int8)sub_B744C0(v21, v10)
    && (*(_BYTE *)(v7[4] + 504LL) & 4) != 0 )
  {
    if ( v18 )
    {
      v116 = *(_WORD *)v18 & 0x1FF;
      if ( v116 == 92 )
      {
        v117 = sub_C70940(v18);
        v118 = *(_QWORD ***)(v7[2] + 24LL);
        v119 = (__int64 (*)(void))(*v118)[13];
        if ( (char *)v119 == (char *)sub_D66930 )
          v120 = (*(__int64 (__fastcall **)(_QWORD *))(*v118[3] + 104LL))(v118[3]);
        else
          v120 = v119();
        sub_EE3EC0(v117, a2, 0, v120 + 17464, 0, 0, (__int64)"\n", 1);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v117 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
        {
          v161 = *(_WORD **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 24) - (_QWORD)v161 > 1u )
          {
            *v161 = 15917;
            *(_QWORD *)(a2 + 32) += 2LL;
          }
          else
          {
            sub_22581D0(a2, "->", 2);
          }
LABEL_161:
          v22 = *(_QWORD ***)(v7[2] + 24LL);
          v24 = *(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*v21 + 96LL);
          v23 = (__int64 (__fastcall *)(__int64))(*v22)[13];
          if ( v23 != sub_D66930 )
            goto LABEL_162;
          goto LABEL_32;
        }
        goto LABEL_159;
      }
      v22 = *(_QWORD ***)(v7[2] + 24LL);
      v23 = (__int64 (__fastcall *)(__int64))(*v22)[13];
      if ( v116 == 91 )
      {
        v124 = *(_QWORD *)(v18 + 8 * (((*(_BYTE *)(v18 + 2) & 8) != 0) + 1LL) + 32);
        if ( v23 == sub_D66930 )
          v125 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[3] + 104LL))(v22[3]);
        else
          v125 = ((__int64 (*)(void))v23)();
        sub_EE3EC0(v124, a2, 0, v125 + 17464, 0, 0, (__int64)"\n", 1);
        v121 = *(_BYTE **)(a2 + 32);
        if ( *(_BYTE **)(a2 + 24) == v121 )
          goto LABEL_160;
LABEL_174:
        *v121 = 46;
        ++*(_QWORD *)(a2 + 32);
        goto LABEL_161;
      }
    }
    else
    {
      v22 = *(_QWORD ***)(v7[2] + 24LL);
      v23 = (__int64 (__fastcall *)(__int64))(*v22)[13];
    }
    if ( (*((_BYTE *)v21 + 28) & 0x7Fu) - 35 <= 3 )
    {
      if ( v23 == sub_D66930 )
        v139 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[3] + 104LL))(v22[3]);
      else
        v139 = ((__int64 (*)(void))v23)();
      v140 = *(_QWORD ***)(v7[2] + 24LL);
      v141 = (__int64 (*)(void))(*v140)[13];
      if ( (char *)v141 == (char *)sub_D66930 )
        v142 = (*(__int64 (__fastcall **)(_QWORD *))(*v140[3] + 104LL))(v140[3]);
      else
        v142 = v141();
      v145 = *(_QWORD *)(sub_B68470((__int64)(v21 + 9)) + 16);
      if ( (v145 & 4) != 0 )
        v148 = *(_QWORD *)(v145 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v148 = v145 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v148 )
        v148 -= 64LL;
      v149 = sub_A56C90(v142, v148, v143, v144, v146, v147);
      v150 = sub_A4F2F0(v139, v149, 1u);
      v151 = *(_QWORD ***)(v7[2] + 24LL);
      v152 = (__int64 (*)(void))(*v151)[13];
      if ( (char *)v152 == (char *)sub_D66930 )
        v153 = (*(__int64 (__fastcall **)(_QWORD *))(*v151[3] + 104LL))(v151[3]);
      else
        v153 = v152();
      sub_DFA8D0(a2, (__int64)(v7 + 5), v153, v150, a3);
LABEL_159:
      v121 = *(_BYTE **)(a2 + 32);
      if ( *(_BYTE **)(a2 + 24) == v121 )
      {
LABEL_160:
        sub_22581D0(a2, ".", 1);
        goto LABEL_161;
      }
      goto LABEL_174;
    }
  }
  else
  {
    v22 = *(_QWORD ***)(v7[2] + 24LL);
    v23 = (__int64 (__fastcall *)(__int64))(*v22)[13];
  }
  v24 = *(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*v21 + 96LL);
  if ( v23 != sub_D66930 )
  {
LABEL_162:
    v25 = ((__int64 (*)(void))v23)();
    goto LABEL_33;
  }
LABEL_32:
  v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[3] + 104LL))(v22[3]);
LABEL_33:
  v26 = a2;
  v24(v21, a2, v25 + 17464, 0);
  v28 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v28 >= *(_QWORD *)(a2 + 24) )
  {
    v26 = 40;
    sub_2257CD0(a2, 40);
  }
  else
  {
    v29 = (__int64)(v28 + 1);
    *(_QWORD *)(a2 + 32) = v28 + 1;
    *v28 = 40;
  }
  v30 = 0;
  v31 = *(_BYTE *)(v7[4] + 504LL);
  if ( (v31 & 8) != 0 )
  {
    v30 = sub_E05440(13);
    v31 = *(_BYTE *)(v7[4] + 504LL);
  }
  if ( (v31 & 4) != 0 )
    v30 += sub_E05440(13);
  v32 = sub_B52330((__int64)v21, v26, v29, v27);
  if ( !v32 )
    goto LABEL_54;
  v36 = 0;
  v166 = 8LL * (unsigned int)(v32 - 1);
  v167 = v166 + 8;
  while ( 2 )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(v21[15] + v36) + 48LL);
    v38 = sub_CC2440(*(_QWORD *)(v7[2] + 184LL), v37, (__int64)v33, v34, v35);
    if ( !BYTE4(v38) )
    {
LABEL_45:
      v39 = *(_QWORD **)(v7[2] + 24LL);
      v40 = *(__int64 (**)(void))(*v39 + 104LL);
      if ( (char *)v40 == (char *)sub_D66930
        && (v41 = (_QWORD *)v39[3], v40 = *(__int64 (**)(void))(*v41 + 104LL), (char *)v40 == (char *)sub_D66930)
        && (v42 = (_QWORD *)v41[3], v40 = *(__int64 (**)(void))(*v42 + 104LL), (char *)v40 == (char *)sub_D66930)
        && (v43 = (_QWORD **)v42[3], v40 = (__int64 (*)(void))(*v43)[13], (char *)v40 == (char *)sub_D66930) )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD *))(*v43[3] + 104LL))(v43[3]);
      }
      else
      {
        v44 = v40();
      }
      sub_DFA8D0(a2, v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36), v44, v37, a3);
      v165 = 13;
      goto LABEL_51;
    }
    v165 = v38;
    switch ( v38 )
    {
      case 0LL:
        v110 = *(_QWORD ***)(v7[2] + 24LL);
        v111 = (__int64 (*)(void))(*v110)[13];
        if ( (char *)v111 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v110[3] + 104LL))(v110[3]);
        else
          v58 = v111();
        v112 = (void *)*(unsigned __int8 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v112;
        LODWORD(v216) = 8;
        BYTE4(v216) = 0;
        goto LABEL_85;
      case 1LL:
        v107 = *(_QWORD ***)(v7[2] + 24LL);
        v108 = (__int64 (*)(void))(*v107)[13];
        if ( (char *)v108 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v107[3] + 104LL))(v107[3]);
        else
          v58 = v108();
        v109 = (void *)*(unsigned __int8 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v109;
        LODWORD(v216) = 8;
        BYTE4(v216) = 1;
        goto LABEL_85;
      case 2LL:
        v104 = *(_QWORD ***)(v7[2] + 24LL);
        v105 = (__int64 (*)(void))(*v104)[13];
        if ( (char *)v105 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v104[3] + 104LL))(v104[3]);
        else
          v58 = v105();
        v106 = (void *)*(unsigned __int16 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v106;
        LODWORD(v216) = 16;
        BYTE4(v216) = 0;
        goto LABEL_85;
      case 3LL:
        v101 = *(_QWORD ***)(v7[2] + 24LL);
        v102 = (__int64 (*)(void))(*v101)[13];
        if ( (char *)v102 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v101[3] + 104LL))(v101[3]);
        else
          v58 = v102();
        v103 = (void *)*(unsigned __int16 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v103;
        LODWORD(v216) = 16;
        BYTE4(v216) = 1;
        goto LABEL_85;
      case 4LL:
        v98 = *(_QWORD ***)(v7[2] + 24LL);
        v99 = (__int64 (*)(void))(*v98)[13];
        if ( (char *)v99 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v98[3] + 104LL))(v98[3]);
        else
          v58 = v99();
        v100 = (void *)*(unsigned int *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v100;
        LODWORD(v216) = 32;
        BYTE4(v216) = 0;
        goto LABEL_85;
      case 5LL:
        v95 = *(_QWORD ***)(v7[2] + 24LL);
        v96 = (__int64 (*)(void))(*v95)[13];
        if ( (char *)v96 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v95[3] + 104LL))(v95[3]);
        else
          v58 = v96();
        v97 = (void *)*(unsigned int *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v97;
        LODWORD(v216) = 32;
        BYTE4(v216) = 1;
        goto LABEL_85;
      case 6LL:
        v92 = *(_QWORD ***)(v7[2] + 24LL);
        v93 = (__int64 (*)(void))(*v92)[13];
        if ( (char *)v93 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v92[3] + 104LL))(v92[3]);
        else
          v58 = v93();
        v94 = *(void **)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v94;
        LODWORD(v216) = 64;
        BYTE4(v216) = 0;
        goto LABEL_85;
      case 7LL:
        v89 = *(_QWORD ***)(v7[2] + 24LL);
        v90 = (__int64 (*)(void))(*v89)[13];
        if ( (char *)v90 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v89[3] + 104LL))(v89[3]);
        else
          v58 = v90();
        v91 = *(void **)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v91;
        LODWORD(v216) = 64;
        BYTE4(v216) = 1;
        goto LABEL_85;
      case 8LL:
        v76 = *(_QWORD ***)(v7[2] + 24LL);
        v77 = (__int64 (*)(void))(*v76)[13];
        if ( (char *)v77 == (char *)sub_D66930 )
          v171 = (*(__int64 (__fastcall **)(_QWORD *))(*v76[3] + 104LL))(v76[3]);
        else
          v171 = v77();
        v78 = v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36);
        v79 = *(void **)v78;
        v80 = *(unsigned int *)(v78 + 8);
        v81 = (unsigned __int64)(v80 + 63) >> 6;
        if ( v81 == 1 )
        {
          LODWORD(v210) = *(_DWORD *)(v78 + 8);
          if ( (unsigned int)v80 > 0x40 )
          {
            v198 = v80;
            v189 = (void **)v78;
            sub_21E1730(&v209, v79, 0);
            v78 = (unsigned __int64)v189;
            LODWORD(v80) = v198;
            v79 = *v189;
          }
          else
          {
            v209 = v79;
          }
        }
        else
        {
          v195 = (void **)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
          v181 = *(_DWORD *)(v78 + 8);
          sub_21E18D0(&v209, (unsigned int)v80, v81, v79);
          v78 = (unsigned __int64)v195;
          LODWORD(v80) = v181;
          v79 = *v195;
        }
        v82 = *(unsigned int *)(v78 + 8);
        v83 = (unsigned __int64)(v82 + 63) >> 6;
        if ( v83 == 1 )
        {
          LODWORD(v212) = *(_DWORD *)(v78 + 8);
          if ( (unsigned int)v82 > 0x40 )
          {
            v188 = v80;
            sub_21E1730(&v211, v79, 0);
            LODWORD(v80) = v188;
          }
          else
          {
            v211 = v79;
          }
        }
        else
        {
          v180 = v80;
          sub_21E18D0(&v211, v82, v83, v79);
          LODWORD(v80) = v180;
        }
        sub_21E2F90(&v214, &v211, (unsigned int)v80);
        v84 = (int)v215;
        v85 = v214;
        if ( (unsigned int)v212 > 0x40 && v211 )
        {
          v193 = v214;
          v178 = (int)v215;
          operator delete[](v211);
          v85 = v193;
          v84 = v178;
        }
        if ( (unsigned int)v210 > 0x40 && v209 )
        {
          v194 = v85;
          v179 = v84;
          operator delete[](v209);
          v85 = v194;
          v84 = v179;
        }
        v215 = v85;
        v54 = v37;
        v55 = v171;
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        LODWORD(v216) = v84;
        BYTE4(v216) = 1;
        goto LABEL_86;
      case 9LL:
        v64 = *(_QWORD ***)(v7[2] + 24LL);
        v65 = (__int64 (*)(void))(*v64)[13];
        if ( (char *)v65 == (char *)sub_D66930 )
          v170 = (*(__int64 (__fastcall **)(_QWORD *))(*v64[3] + 104LL))(v64[3]);
        else
          v170 = v65();
        v66 = v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36);
        v67 = *(_QWORD *)v66;
        v68 = *(unsigned int *)(v66 + 8);
        v69 = (unsigned __int64)(v68 + 63) >> 6;
        if ( v69 == 1 )
        {
          LODWORD(v210) = *(_DWORD *)(v66 + 8);
          if ( (unsigned int)v68 > 0x40 )
          {
            v197 = v68;
            v187 = (__int64 *)v66;
            sub_21E1730(&v209, v67, 1);
            v66 = (unsigned __int64)v187;
            LODWORD(v68) = v197;
            v67 = *v187;
          }
          else
          {
            v70 = (void *)(v67 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v68));
            if ( !(_DWORD)v68 )
              v70 = nullptr;
            v209 = v70;
          }
        }
        else
        {
          v196 = (__int64 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
          v183 = *(_DWORD *)(v66 + 8);
          sub_21E18D0(&v209, (unsigned int)v68, v69, *(_QWORD *)v66);
          v66 = (unsigned __int64)v196;
          LODWORD(v68) = v183;
          v67 = *v196;
        }
        v71 = *(unsigned int *)(v66 + 8);
        v72 = (unsigned __int64)(v71 + 63) >> 6;
        if ( v72 == 1 )
        {
          LODWORD(v212) = *(_DWORD *)(v66 + 8);
          if ( (unsigned int)v71 > 0x40 )
          {
            v186 = v68;
            sub_21E1730(&v211, v67, 1);
            LODWORD(v68) = v186;
          }
          else
          {
            v73 = (void *)(v67 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v71));
            if ( !(_DWORD)v71 )
              v73 = nullptr;
            v211 = v73;
          }
        }
        else
        {
          v182 = v68;
          sub_21E18D0(&v211, v71, v72, v67);
          LODWORD(v68) = v182;
        }
        sub_21E2E30(&v214, &v211, (unsigned int)v68);
        v74 = (int)v215;
        v75 = v214;
        if ( (unsigned int)v212 > 0x40 && v211 )
        {
          v191 = v214;
          v176 = (int)v215;
          operator delete[](v211);
          v75 = v191;
          v74 = v176;
        }
        if ( (unsigned int)v210 > 0x40 && v209 )
        {
          v192 = v75;
          v177 = v74;
          operator delete[](v209);
          v75 = v192;
          v74 = v177;
        }
        v215 = v75;
        v54 = v37;
        v55 = v170;
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        LODWORD(v216) = v74;
        BYTE4(v216) = 0;
        goto LABEL_86;
      case 10LL:
        v86 = *(_QWORD ***)(v7[2] + 24LL);
        v87 = (__int64 (*)(void))(*v86)[13];
        if ( (char *)v87 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v86[3] + 104LL))(v86[3]);
        else
          v58 = v87();
        v88 = (void *)*(unsigned __int8 *)(v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36));
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 2;
        v215 = v88;
        LODWORD(v216) = 1;
        BYTE4(v216) = 1;
        goto LABEL_85;
      case 11LL:
        v56 = *(_QWORD ***)(v7[2] + 24LL);
        v57 = (__int64 (*)(void))(*v56)[13];
        if ( (char *)v57 == (char *)sub_D66930 )
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v56[3] + 104LL))(v56[3]);
        else
          v58 = v57();
        v59 = v30 - (unsigned __int64)*((unsigned int *)v7 + 36) + v7[19];
        v60 = *(_DWORD *)(v59 + 8);
        LODWORD(v212) = v60;
        if ( v60 > 0x40 )
        {
          v184 = v58;
          v173 = v59;
          sub_21E17D0(&v211);
          v58 = v184;
          v59 = v173;
          v60 = v212;
          v61 = v211;
        }
        else
        {
          v61 = *(void **)v59;
        }
        v62 = *(_BYTE *)(v59 + 12);
        v63 = *(_DWORD *)(v59 + 16);
        LODWORD(v216) = v60;
        BYTE4(v214) &= ~1u;
        v213 = v63;
        v215 = v61;
        BYTE4(v216) = v62;
        v217 = v63;
        LODWORD(v214) = 4;
LABEL_85:
        v54 = v37;
        v55 = v58;
        goto LABEL_86;
      case 12LL:
        v45 = *(_QWORD ***)(v7[2] + 24LL);
        v46 = (__int64 (*)(void))(*v45)[13];
        if ( (char *)v46 == (char *)sub_D66930 )
          v190 = (*(__int64 (__fastcall **)(_QWORD *))(*v45[3] + 104LL))(v45[3]);
        else
          v190 = v46();
        v168 = v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36);
        v47 = sub_21D4FB0(*(unsigned int *)(v168 + 8));
        v175 = sub_21D53E0(v47);
        v203 = v168;
        v48 = sub_21D4FB0(*(unsigned int *)(v168 + 8));
        v199 = sub_21D53E0(v48);
        v50 = sub_21D5390(v48, v37, v49);
        v51 = v168;
        v169 = (void *)v50;
        if ( ((unsigned __int64)v199 + 63) >> 6 == 1 )
        {
          v52 = *(void **)v203;
          LODWORD(v215) = v175;
          if ( v175 > 0x40 )
          {
            sub_21E1730(&v214, v52, 0);
            v51 = v203;
          }
          else
          {
            v214 = v52;
          }
        }
        else
        {
          v122 = sub_21D4FB0(*(unsigned int *)(v203 + 8));
          v123 = sub_21D53E0(v122);
          sub_21E18D0(&v214, v175, ((unsigned __int64)v123 + 63) >> 6, *(_QWORD *)v203);
          v51 = v203;
        }
        v53 = sub_21D4FB0(*(unsigned int *)(v51 + 8));
        if ( (void *)v53 == v169 )
          sub_21DC060(&v209, v169, &v214);
        else
          sub_21DBA90(&v209, v53, &v214);
        if ( (unsigned int)v215 > 0x40 && v214 )
          operator delete[](v214);
        BYTE4(v214) &= ~1u;
        LODWORD(v214) = 0;
        a3 = 0.0;
        v200 = sub_21D5370();
        sub_21D8290(&v211, 0.0);
        sub_21DE690(&v215, &v211, v200);
        sub_21D5AF0(&v211);
        LODWORD(v214) = 3;
        if ( v209 == v169 )
          sub_21DC190(&v211, &v209);
        else
          sub_21D5A90(&v211, &v209);
        if ( v215 != v169 )
        {
          if ( v169 != v211 )
          {
            sub_21D5850(&v215, &v211);
            goto LABEL_75;
          }
          sub_21D5AF0(&v215);
          v154 = v211;
          goto LABEL_210;
        }
        v155 = v216;
        if ( v169 == v211 )
        {
          if ( !v216 )
            goto LABEL_250;
          v162 = &v216[3 * (_QWORD)*(v216 - 1)];
          if ( v162 != v216 )
          {
            v202 = v37;
            v163 = &v216[3 * (_QWORD)*(v216 - 1)];
            v206 = v7;
            v164 = v211;
            do
            {
              while ( 1 )
              {
                v163 -= 3;
                if ( *v163 == v164 )
                  break;
                sub_21D5AF0(v163);
                if ( v163 == v216 )
                  goto LABEL_248;
              }
              sub_A2B2D0((__int64)v163);
            }
            while ( v216 != v163 );
LABEL_248:
            v162 = v163;
            v7 = v206;
            v37 = v202;
          }
          operator delete[](v162 - 1, 24LL * (_QWORD)*(v162 - 1) + 8);
          goto LABEL_250;
        }
        if ( !v216 )
          goto LABEL_211;
        v156 = 3LL * (_QWORD)*(v216 - 1);
        if ( &v216[v156] == v216 )
          goto LABEL_235;
        v205 = v37;
        v157 = &v216[v156];
        v208 = v7;
        break;
      case 13LL:
        goto LABEL_45;
      case 14LL:
        v113 = *(_QWORD ***)(v7[2] + 24LL);
        v114 = (__int64 (*)(void))(*v113)[13];
        if ( (char *)v114 == (char *)sub_D66930 )
          v115 = (*(__int64 (__fastcall **)(_QWORD *))(*v113[3] + 104LL))(v113[3]);
        else
          v115 = v114();
        v172 = v115;
        sub_E103F0(&v214, v7[19] + v30 - (unsigned __int64)*((unsigned int *)v7 + 36), v115);
        v54 = v37;
        v55 = v172;
        goto LABEL_86;
      default:
        goto LABEL_51;
    }
    while ( 1 )
    {
      v158 = v157 - 3;
      v159 = (__int64)(v157 - 3);
      if ( *(v157 - 3) == v169 )
        break;
      sub_21D5AF0(v159);
      if ( v158 == v216 )
        goto LABEL_234;
LABEL_231:
      v157 -= 3;
    }
    sub_A2B2D0(v159);
    if ( v216 != v158 )
      goto LABEL_231;
LABEL_234:
    v160 = v157;
    v155 = v157 - 3;
    v37 = v205;
    v7 = v208;
    v156 = 3LL * (_QWORD)*(v160 - 4);
LABEL_235:
    operator delete[](v155 - 1, v156 * 8 + 8);
    v154 = v211;
LABEL_210:
    if ( v169 != v154 )
    {
LABEL_211:
      sub_21D5A90(&v215, &v211);
      goto LABEL_75;
    }
LABEL_250:
    sub_21DC190(&v215, &v211);
LABEL_75:
    if ( v211 != v169 )
    {
      sub_21D5AF0(&v211);
      goto LABEL_77;
    }
    v126 = v212;
    if ( v212 )
    {
      v127 = 24LL * *(_QWORD *)(v212 - 8);
      if ( v212 == v212 + v127 )
        goto LABEL_185;
      v204 = v37;
      v128 = v212 + v127;
      v207 = v7;
      while ( 1 )
      {
        v129 = v128 - 24;
        v130 = v128 - 24;
        if ( *(void **)(v128 - 24) == v169 )
        {
          sub_A2B2D0(v130);
          if ( v212 == v129 )
          {
LABEL_184:
            v131 = v128;
            v126 = v128 - 24;
            v37 = v204;
            v7 = v207;
            v127 = 24LL * *(_QWORD *)(v131 - 32);
LABEL_185:
            operator delete[]((void *)(v126 - 8), v127 + 8);
            break;
          }
        }
        else
        {
          sub_21D5AF0(v130);
          if ( v129 == v212 )
            goto LABEL_184;
        }
        v128 -= 24;
      }
    }
LABEL_77:
    if ( v209 != v169 )
    {
      sub_21D5AF0(&v209);
      goto LABEL_79;
    }
    v132 = v210;
    if ( !v210 )
      goto LABEL_79;
    v133 = 24LL * *(_QWORD *)(v210 - 8);
    if ( v210 == v210 + v133 )
      goto LABEL_194;
    v185 = v30;
    v134 = v169;
    v201 = v7;
    v174 = v37;
    v135 = v210 + v133;
    while ( 2 )
    {
      v136 = v135 - 24;
      v137 = v135 - 24;
      if ( *(void **)(v135 - 24) != v134 )
      {
        sub_21D5AF0(v137);
        if ( v210 == v136 )
          break;
        goto LABEL_190;
      }
      sub_A2B2D0(v137);
      if ( v210 != v136 )
      {
LABEL_190:
        v135 -= 24;
        continue;
      }
      break;
    }
    v138 = v135;
    v132 = v135 - 24;
    v30 = v185;
    v37 = v174;
    v7 = v201;
    v133 = 24LL * *(_QWORD *)(v138 - 32);
LABEL_194:
    operator delete[]((void *)(v132 - 8), v133 + 8);
LABEL_79:
    v54 = v37;
    v55 = v190;
LABEL_86:
    sub_A2FDA0(&v214, (char *)a2, v55, v54, a3);
    if ( (unsigned int)v214 > 1 )
      sub_A2BBA0((int *)&v214);
LABEL_51:
    v30 += (sub_E05440(v165) + 7) & 0xFFFFFFF8;
    if ( v36 != v166 )
    {
      v33 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v33 > 1u )
      {
        v36 += 8;
        *v33 = 8236;
        *(_QWORD *)(a2 + 32) += 2LL;
        if ( v36 == v167 )
          break;
      }
      else
      {
        v36 += 8;
        sub_22581D0(a2, ", ", 2);
        if ( v167 == v36 )
          break;
      }
      continue;
    }
    break;
  }
LABEL_54:
  result = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) == result )
    return sub_22581D0(a2, ")", 1);
  *(_BYTE *)result = 41;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

