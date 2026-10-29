_BOOL8 __fastcall sub_18DCB30(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        signed int a7,
        _BYTE *a8)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  char v10; // bl
  int v11; // ebp
  __int64 v12; // rbp
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r8
  char *v16; // rbx
  char *v17; // r13
  char *v18; // r12
  unsigned __int8 *v19; // rbp
  __int64 v20; // rax
  unsigned __int8 *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rbp
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // eax
  char v34; // al
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rbp
  __int64 *v58; // rax
  bool v59; // bl
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int16 v68; // ax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  _BOOL8 v72; // rsi
  __int16 v73; // ax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  char *v79; // r12
  __int64 v80; // r14
  unsigned __int8 *v81; // rdi
  int v82; // eax
  __int64 v83; // r14
  unsigned __int8 *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int8 *v87; // r14
  unsigned __int8 *v88; // r12
  char *v89; // r15
  char *v90; // rbp
  unsigned __int8 *v91; // rbx
  unsigned __int8 *v92; // r14
  unsigned __int8 *v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  _QWORD *v97; // rcx
  __int64 v98; // rbp
  unsigned __int64 v99; // rdx
  __int64 v100; // rsi
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rax
  _DWORD *v103; // rax
  __int64 v104; // rdi
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // rbp
  __int64 *v112; // rax
  char v113; // dl
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rbx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // [rsp+0h] [rbp-198h]
  unsigned __int64 v133; // [rsp+10h] [rbp-188h]
  int v134; // [rsp+18h] [rbp-180h]
  bool v135; // [rsp+1Fh] [rbp-179h]
  __int64 *v136; // [rsp+20h] [rbp-178h]
  bool v138; // [rsp+2Ch] [rbp-16Ch]
  char v139; // [rsp+2Dh] [rbp-16Bh]
  char v140; // [rsp+2Eh] [rbp-16Ah]
  char v141; // [rsp+2Fh] [rbp-169h]
  __int64 v142; // [rsp+30h] [rbp-168h]
  __int64 v143; // [rsp+38h] [rbp-160h]
  __int64 v144; // [rsp+40h] [rbp-158h]
  int v145; // [rsp+50h] [rbp-148h]
  int v146; // [rsp+50h] [rbp-148h]
  __int64 *v147; // [rsp+50h] [rbp-148h]
  unsigned __int64 v148; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v149; // [rsp+68h] [rbp-130h] BYREF
  __int64 v150; // [rsp+78h] [rbp-120h] BYREF
  unsigned __int8 *v151; // [rsp+80h] [rbp-118h] BYREF
  unsigned __int64 v152; // [rsp+88h] [rbp-110h]
  void *v153[2]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v154; // [rsp+B0h] [rbp-E8h]
  __int64 v155; // [rsp+B8h] [rbp-E0h]
  __int64 (__fastcall *v156)(); // [rsp+C0h] [rbp-D8h]
  __int64 v157; // [rsp+D0h] [rbp-C8h] BYREF
  char v158; // [rsp+D8h] [rbp-C0h]
  __int64 v159; // [rsp+E0h] [rbp-B8h]
  char v160; // [rsp+148h] [rbp-50h]
  unsigned int v161; // [rsp+150h] [rbp-48h]
  char v162; // [rsp+154h] [rbp-44h]

  v8 = a1;
  v134 = a2;
  v149 = a4;
  v148 = a5;
  if ( a8 )
    *a8 = 0;
  v154 = 0;
  *(_OWORD *)v153 = 0;
  v156 = sub_19E7200;
  v155 = 0;
  v9 = (unsigned int)a2;
  switch ( (int)a2 )
  {
    case 0:
      sub_1C4F710(a1, v149, v148, a6);
      v135 = 0;
      goto LABEL_39;
    case 1:
      v138 = 0;
      v10 = 0;
      v11 = 6684;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 0;
      v141 = 0;
      goto LABEL_5;
    case 2:
      v34 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v11 = v34 == 0 ? 5704 : 5256;
      goto LABEL_55;
    case 3:
      v34 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v11 = v34 == 0 ? 5703 : 5255;
      goto LABEL_55;
    case 4:
      v10 = 0;
      v138 = 0;
      v143 = 0;
      v140 = 0;
      v142 = 0;
      v35 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v139 = 0;
      v11 = v35 == 0 ? 5705 : 5257;
      goto LABEL_59;
    case 5:
      if ( a7 == 7 )
      {
        v11 = 3044;
        v135 = 0;
      }
      else
      {
        v11 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 ? 5701 : 5253;
        v135 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 34
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 34 )
      {
        goto LABEL_56;
      }
      v10 = 0;
      v148 = sub_6D5440(&v148);
      v138 = 0;
      v149 = sub_6D5440(&v149);
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 1;
      v141 = 1;
      goto LABEL_5;
    case 6:
      v34 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v11 = v34 == 0 ? 5700 : 5252;
LABEL_55:
      v135 = v34 != 0;
LABEL_56:
      v10 = 0;
      sub_19E7980(v153, a6, v148, v149, a1);
      v138 = 0;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 1;
      v141 = 0;
      goto LABEL_5;
    case 7:
      v10 = 0;
      v11 = 7455;
      sub_19E7980(v153, a6, v148, v149, a1);
      v138 = 0;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 1;
      v135 = 0;
      v141 = 0;
      goto LABEL_5;
    case 8:
      v138 = 0;
      v10 = 1;
      v143 = 0;
      v140 = 0;
      v142 = 0;
      v35 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v139 = 0;
      v11 = v35 == 0 ? 5702 : 5254;
      goto LABEL_59;
    case 9:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
        goto LABEL_69;
      v135 = 0;
      v141 = sub_19A3D10(a1, a6, v149);
      if ( v141 )
        goto LABEL_39;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
        v138 = 0;
        v10 = 0;
        v11 = 5249;
        v140 = 0;
        v139 = 0;
        v143 = 0;
        v142 = 0;
        v135 = 1;
      }
      else
      {
LABEL_69:
        v138 = 0;
        v10 = 0;
        v11 = 5699;
        v143 = 0;
        v142 = 0;
        v140 = 0;
        v139 = 0;
        v135 = 0;
        v141 = 0;
      }
      goto LABEL_5;
    case 10:
      v36 = v148;
      v37 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        v148 = sub_A72210(*(_QWORD **)(v8 + 248), v148);
        v37 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v38 = sub_F68450(v37, v36, v9, a4, a5);
      v41 = *(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL];
      v42 = 0;
      if ( (v41 & 8) != 0 )
        v42 = *(__int64 *)((char *)&qword_18 + (v41 & 0xFFFFFFFFFFFFFFF0LL));
      v43 = v42 | ((unsigned __int8)v38 | (unsigned __int8)v41) & 7;
      v44 = sub_F68450(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), v36, v42, v39, v40);
      v45 = 0;
      v46 = *(_QWORD *)&byte_8[v44 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v46 & 8) != 0 )
        v45 = *(__int64 *)((char *)&qword_18 + (v46 & 0xFFFFFFFFFFFFFFF0LL));
      v47 = v45 | ((unsigned __int8)v46 | (unsigned __int8)v44) & 7;
      v138 = 0;
      if ( (unsigned int)v47 >> 9 == (unsigned int)v43 >> 9 )
      {
        v113 = v43 >> 6;
        v10 = 0;
        v143 = 0;
        v140 = 0;
        v139 = 0;
        v135 = 1;
        v142 = 0;
        v11 = (((v47 >> 6) & 7) == (v113 & 7)) + 5275;
      }
      else
      {
        v10 = 0;
        v11 = 5273;
        v143 = 0;
        v142 = 0;
        v140 = 0;
        v139 = 0;
        v135 = 1;
      }
      v141 = 0;
      goto LABEL_5;
    case 11:
      v138 = 0;
      v10 = 0;
      v11 = 5274;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 1;
      v141 = 0;
      goto LABEL_5;
    case 12:
      v10 = 0;
      v138 = 0;
      v143 = 0;
      v140 = 0;
      v142 = 0;
      v35 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v139 = 0;
      v11 = v35 == 0 ? 5627 : 4259;
      goto LABEL_59;
    case 13:
      v10 = 0;
      v138 = 0;
      v143 = 0;
      v140 = 0;
      v142 = 0;
      v35 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
      v139 = 0;
      v11 = v35 == 0 ? 7034 : 3959;
      goto LABEL_59;
    case 14:
      v138 = 0;
      v10 = 0;
      v11 = 4004;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 1;
      v141 = 0;
      goto LABEL_5;
    case 15:
      v138 = 0;
      v10 = 0;
      v11 = 5251;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 1;
      v141 = 0;
      goto LABEL_5;
    case 16:
      v48 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v48 + 16) != 34 )
      {
        v51 = *(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v51 + 16) != 34 )
          goto LABEL_178;
        v48 = sub_F63050(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL), a2, v51, a4);
        if ( !v48 )
          goto LABEL_178;
      }
      v49 = *(_QWORD *)(*(_QWORD *)(v48 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 35;
      if ( (unsigned int)v50 > 1 )
        v49 = sub_F63050(v49, a2, v50, a4);
      v51 = *(unsigned __int8 *)(v49 + 19);
      LOBYTE(v51) = (unsigned __int8)v51 >> 2;
      if ( !(_BYTE)v51
        || (v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v52 + 16) != 13)
        || ((*(_WORD *)(v52 + 18) >> 3) & 0x1FF) != 0x1E9 )
      {
LABEL_178:
        v138 = sub_18BFE80(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), a2, v51, a4);
        if ( !v138 )
        {
          v143 = 0;
          v142 = 0;
          goto LABEL_99;
        }
        v109 = *(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v109 + 16) != 34 )
          v109 = sub_F63050(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), a2, v108, a4);
        v110 = *(_QWORD *)(*(_QWORD *)(v109 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v110 + 16) - 35 > 1 )
        {
          v129 = sub_F63050(v110, a2, v108, a4);
          a4 = *(_BYTE *)(v129 + 19) >> 2;
          v130 = a4 + ((*(_WORD *)(v129 + 18) >> 3) & 0x7F);
          v111 = v129 + 8 * v130 + 48;
          v110 = *(_QWORD *)(*(_QWORD *)(v109 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v110 + 16) - 35 > 1 )
            v110 = sub_F63050(v110, a2, v130, a4);
          v56 = (*(_WORD *)(v110 + 18) >> 3) & 0x7F;
        }
        else
        {
          v56 = (*(_WORD *)(v110 + 18) >> 3) & 0x7F;
          v111 = v110 + 8 * (v56 + (*(_BYTE *)(v110 + 19) >> 2)) + 48;
        }
        v112 = (__int64 *)(v110 + 8 * v56 + 48);
        if ( v112 == (__int64 *)v111 )
        {
          v143 = 0;
          v59 = 0;
        }
        else
        {
          v143 = *v112;
          v59 = *v112 != 0;
        }
        v60 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v60 + 16) == 34 )
          goto LABEL_97;
LABEL_186:
        v60 = sub_F63050(v60, a2, v56, a4);
        goto LABEL_97;
      }
      v53 = *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v53 + 16) != 34 )
        v53 = sub_F63050(*(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL), a2, v51, a4);
      v54 = *(_QWORD *)(*(_QWORD *)(v53 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v54 + 16) - 35 > 1 )
      {
        v128 = sub_F63050(v54, a2, v51, a4);
        a4 = *(_BYTE *)(v128 + 19) >> 2;
        v56 = a4 + ((*(_WORD *)(v128 + 18) >> 3) & 0x7F);
        v57 = v128 + 8 * v56 + 48;
        v54 = *(_QWORD *)(*(_QWORD *)(v53 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v54 + 16) - 35 > 1 )
          v54 = sub_F63050(v54, a2, v56, a4);
        v55 = (*(_WORD *)(v54 + 18) >> 3) & 0x7F;
      }
      else
      {
        v55 = (*(_WORD *)(v54 + 18) >> 3) & 0x7F;
        v56 = v55 + (*(_BYTE *)(v54 + 19) >> 2);
        v57 = v54 + 8 * v56 + 48;
      }
      v58 = (__int64 *)(v54 + 8 * v55 + 48);
      if ( v58 == (__int64 *)v57 )
      {
        v143 = 0;
        v59 = 0;
      }
      else
      {
        v143 = *v58;
        v59 = *v58 != 0;
      }
      v60 = *(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v60 + 16) != 34 )
        goto LABEL_186;
LABEL_97:
      v138 = 0;
      v142 = sub_F67A50(v60, a2, v56, a4, a5);
      if ( v142 )
      {
        v142 = sub_F62610(v142, a2, v61, v62, v63, v64);
        v138 = v59 && v142 != 0;
      }
LABEL_99:
      v10 = 0;
      v140 = 0;
      v139 = 0;
      v35 = *(_BYTE *)(*(_QWORD *)(v8 + 232) + 1LL) & 8;
      v11 = v35 == 0 ? 7033 : 3957;
LABEL_59:
      v141 = 0;
      v135 = v35 != 0;
LABEL_5:
      v136 = (__int64 *)(v8 + 8);
      if ( (unsigned int)a7 > 7 )
      {
        sub_168B9B0((__int64)&v151, v8 + 8, v11);
        v12 = a7;
        v131 = 0;
        v133 = 0;
      }
      else
      {
        if ( ((1LL << a7) & 0xEE) != 0 )
        {
          v133 = v148;
          v131 = v149;
        }
        else
        {
          v131 = 0;
          v133 = (1LL << a7) & 0x11;
          if ( ((1LL << a7) & 0x11) != 0 )
          {
            v133 = v149;
            v131 = v148;
          }
        }
        sub_168B9B0((__int64)&v151, v8 + 8, v11);
        v12 = a7;
        if ( a7 == 7 )
          v12 = 1;
      }
      v13 = &v157;
      sub_AE9DF0(&v151, v133, 8u);
      sub_AE9DF0(&v151, v131, 8u);
      sub_AE9DF0(&v151, v12, 2u);
      v14 = sub_EEC8C0(a6, v12, 0.0);
      v158 = 1;
      v157 = v14;
      sub_AEC610((__int64 *)&v151, &v157);
      if ( v10 )
      {
        v65 = *(_QWORD *)(v133 & 0xFFFFFFFFFFFFFFF0LL);
        v66 = *(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v67 = *(unsigned __int8 *)(v66 + 16);
        if ( (*(_BYTE *)(v66 + 16) & 0xF7) != 0x22 )
        {
          if ( (unsigned __int8)(v67 - 2) > 4u )
            goto LABEL_105;
          while ( 1 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(v65 + 16) - 2) > 4u )
            {
              v66 = *(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v67 = *(unsigned __int8 *)(v66 + 16);
              if ( (unsigned __int8)(v67 - 2) > 4u )
                goto LABEL_105;
              v78 = sub_F63050(v65, &v157, v67, (unsigned int)(v67 - 2));
              if ( !v78 )
              {
                v66 = *(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                LOBYTE(v67) = *(_BYTE *)(v66 + 16);
                goto LABEL_105;
              }
              v65 = v78;
            }
            v65 = *(_QWORD *)(*(_QWORD *)(v65 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          }
        }
        v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(
                                                    *(_QWORD *)(v133 & 0xFFFFFFFFFFFFFFF0LL),
                                                    (__int64)&v157,
                                                    v67,
                                                    *(_BYTE *)(v66 + 16) & 0xF7,
                                                    v15)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v67) = *(_BYTE *)(v66 + 16);
LABEL_105:
        if ( (_BYTE)v67 == 13 )
        {
          v68 = (*(_WORD *)(v66 + 18) >> 3) & 0x1FF;
          if ( v68 == 448 || v68 == 437 )
            goto LABEL_112;
        }
        v69 = *(_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF0LL);
        v70 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v71 = *(unsigned __int8 *)(v70 + 16);
        if ( (*(_BYTE *)(v70 + 16) & 0xF7) == 0x22 )
        {
          v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(
                                                      *(_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF0LL),
                                                      (__int64)&v157,
                                                      v71,
                                                      *(_BYTE *)(v70 + 16) & 0xF7,
                                                      v15)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v71) = *(_BYTE *)(v70 + 16);
          goto LABEL_110;
        }
        if ( (unsigned __int8)(v71 - 2) <= 4u )
        {
          while ( 1 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(v69 + 16) - 2) > 4u )
            {
              v70 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v71 = *(unsigned __int8 *)(v70 + 16);
              if ( (unsigned __int8)(v71 - 2) > 4u )
                break;
              v106 = sub_F63050(v69, &v157, v71, (unsigned int)(v71 - 2));
              if ( !v106 )
              {
                v70 = *(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                LOBYTE(v71) = *(_BYTE *)(v70 + 16);
                break;
              }
              v69 = v106;
            }
            v69 = *(_QWORD *)(*(_QWORD *)(v69 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          }
        }
LABEL_110:
        v72 = 0;
        if ( (_BYTE)v71 != 13 )
          goto LABEL_113;
        v73 = (*(_WORD *)(v70 + 18) >> 3) & 0x1FF;
        if ( v73 == 448 )
LABEL_112:
          v72 = 1;
        else
          v72 = v73 == 437;
LABEL_113:
        sub_AE9DF0(&v151, v72, 2u);
      }
      if ( (_DWORD)v155 )
      {
        v16 = (char *)v153[0];
        if ( v153[1] != v153[0] )
        {
          v144 = v8;
          v17 = (char *)v153[1];
          do
          {
            v18 = v16;
            if ( *(_DWORD *)v16 && *((_DWORD *)v16 + 1) )
            {
              v19 = v151;
              if ( v151 )
              {
                v20 = *((unsigned int *)v151 + 134);
                v21 = *((unsigned __int8 **)v151 + 66);
                v22 = *((unsigned int *)v151 + 135);
                v23 = v20 + 1;
                v24 = (unsigned __int64)&v21[64 * v20];
              }
              else
              {
                v76 = v152;
                v77 = *(_DWORD *)(v152 + 14976);
                if ( v77 )
                {
                  v85 = (unsigned int)(v77 - 1);
                  *(_DWORD *)(v152 + 14976) = v85;
                  v19 = *(unsigned __int8 **)(v76 + 8 * v85 + 14848);
                  v86 = *((unsigned int *)v19 + 134);
                  *v19 = 0;
                  v87 = *((unsigned __int8 **)v19 + 66);
                  *((_DWORD *)v19 + 106) = 0;
                  v21 = &v87[64 * v86];
                  if ( v87 != v21 )
                  {
                    v147 = v13;
                    v88 = v19;
                    v89 = v16;
                    v90 = v16;
                    v91 = v87;
                    v92 = v21;
                    do
                    {
                      while ( 1 )
                      {
                        v92 -= 64;
                        v93 = *((unsigned __int8 **)v92 + 3);
                        if ( v93 == v92 + 40 )
                          break;
                        operator delete(v93);
                        if ( v91 == v92 )
                          goto LABEL_145;
                      }
                    }
                    while ( v91 != v92 );
LABEL_145:
                    v16 = v90;
                    v19 = v88;
                    v18 = v89;
                    v13 = v147;
                    v21 = *((unsigned __int8 **)v19 + 66);
                  }
                  *((_DWORD *)v19 + 134) = 0;
                  v22 = *((unsigned int *)v19 + 135);
                }
                else
                {
                  v22 = 6;
                  v19 = (unsigned __int8 *)operator new(0x3A0u);
                  *v19 = 0;
                  *((_QWORD *)v19 + 12) = v19 + 112;
                  v21 = v19 + 544;
                  *((_QWORD *)v19 + 16) = v19 + 144;
                  *((_QWORD *)v19 + 20) = v19 + 176;
                  *((_QWORD *)v19 + 24) = v19 + 208;
                  *((_QWORD *)v19 + 28) = v19 + 240;
                  *((_QWORD *)v19 + 32) = v19 + 272;
                  *((_QWORD *)v19 + 36) = v19 + 304;
                  *((_QWORD *)v19 + 40) = v19 + 336;
                  *((_QWORD *)v19 + 44) = v19 + 368;
                  *((_QWORD *)v19 + 48) = v19 + 400;
                  *((_QWORD *)v19 + 52) = v19 + 432;
                  *((_QWORD *)v19 + 13) = 0;
                  v19[112] = 0;
                  *((_QWORD *)v19 + 17) = 0;
                  v19[144] = 0;
                  *((_QWORD *)v19 + 21) = 0;
                  v19[176] = 0;
                  *((_QWORD *)v19 + 25) = 0;
                  v19[208] = 0;
                  *((_QWORD *)v19 + 29) = 0;
                  v19[240] = 0;
                  *((_QWORD *)v19 + 33) = 0;
                  v19[272] = 0;
                  *((_QWORD *)v19 + 37) = 0;
                  v19[304] = 0;
                  *((_QWORD *)v19 + 41) = 0;
                  v19[336] = 0;
                  *((_QWORD *)v19 + 45) = 0;
                  v19[368] = 0;
                  *((_QWORD *)v19 + 49) = 0;
                  v19[400] = 0;
                  *((_QWORD *)v19 + 53) = 0x800000000LL;
                  *((_QWORD *)v19 + 66) = v19 + 544;
                  *((_QWORD *)v19 + 67) = 0x600000000LL;
                }
                v151 = v19;
                v24 = (unsigned __int64)v21;
                v23 = 1;
              }
              if ( v23 > v22 )
              {
                if ( v21 > (unsigned __int8 *)v16 || v24 <= (unsigned __int64)v16 )
                {
                  v83 = sub_2237400(v19 + 528, v19 + 544, v23, 64, v13);
                  sub_9EF810((__int64 *)v19 + 66, v83);
                  v84 = *((unsigned __int8 **)v19 + 66);
                  if ( v84 == v19 + 544 )
                  {
                    *((_DWORD *)v19 + 135) = v157;
                    v107 = *((unsigned int *)v19 + 134);
                    *((_QWORD *)v19 + 66) = v83;
                    v24 = (v107 << 6) + v83;
                  }
                  else
                  {
                    v146 = v157;
                    free(v84);
                    *((_QWORD *)v19 + 66) = v83;
                    *((_DWORD *)v19 + 135) = v146;
                    v24 = ((unsigned __int64)*((unsigned int *)v19 + 134) << 6) + v83;
                  }
                }
                else
                {
                  v79 = (char *)(v16 - (char *)v21);
                  v80 = sub_2237400(v19 + 528, v19 + 544, v23, 64, v13);
                  sub_9EF810((__int64 *)v19 + 66, v80);
                  v81 = *((unsigned __int8 **)v19 + 66);
                  v82 = v157;
                  if ( v81 == v19 + 544 )
                  {
                    *((_QWORD *)v19 + 66) = v80;
                    *((_DWORD *)v19 + 135) = v82;
                  }
                  else
                  {
                    v145 = v157;
                    free(v81);
                    *((_QWORD *)v19 + 66) = v80;
                    *((_DWORD *)v19 + 135) = v145;
                  }
                  v18 = &v79[v80];
                  v24 = ((unsigned __int64)*((unsigned int *)v19 + 134) << 6) + v80;
                }
              }
              *(_QWORD *)v24 = *(_QWORD *)v18;
              *(_DWORD *)(v24 + 8) = *((_DWORD *)v18 + 2);
              *(_QWORD *)(v24 + 12) = *(_QWORD *)(v18 + 12);
              *(_DWORD *)(v24 + 20) = *((_DWORD *)v18 + 5);
              *(_QWORD *)(v24 + 24) = v24 + 40;
              sub_18BD160((_QWORD *)(v24 + 24), *((_BYTE **)v18 + 3), *((_QWORD *)v18 + 3) + *((_QWORD *)v18 + 4));
              *(_BYTE *)(v24 + 56) = v18[56];
              ++*((_DWORD *)v19 + 134);
            }
            v16 += 64;
          }
          while ( v17 != v16 );
          v8 = v144;
        }
      }
      if ( v139 )
        sub_AE9DF0(&v151, HIDWORD(v155), 3u);
      if ( v140 )
        sub_1BE63A0(v8, &v151, v131, v133);
      sub_168CDE0((__int64)v13, v136, a3, (__int64)&v151, 0);
      sub_15F7200(v13);
      if ( v138 )
      {
        v74 = *(_QWORD *)(v142 + 120);
        if ( !v74 )
        {
          v94 = *(_QWORD *)(v142 + 96);
          v95 = *(_QWORD *)(v94 + 88);
          v96 = v95 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v95 & 1) == 0 )
          {
            v97 = (_QWORD *)(v95 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v95 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (v95 & 2) == 0 )
                goto LABEL_118;
              v98 = v97[2295];
              v99 = v94 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v98 )
              {
                v100 = v97[294];
                v97[304] += 24LL;
                v101 = (v100 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v97[295] >= v101 + 24 && v100 )
                {
                  v97[294] = v101 + 24;
                  v102 = (v100 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v102 = sub_986170((__int64)(v97 + 294), 24, 24, 3, v25, v26);
                  v101 = v102 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v102 = v98;
                v99 = v101 | 4;
                *(_DWORD *)(v102 + 8) = 0;
                *(_QWORD *)(v102 + 16) = v94;
              }
              v96 = v99 & 0xFFFFFFFFFFFFFFFELL;
              v95 = v96 | 1;
              *(_QWORD *)(v94 + 88) = v96 | 1;
            }
          }
          if ( v96 )
          {
            if ( (v96 & 4) != 0 )
            {
              v103 = (_DWORD *)(v95 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v103 )
              {
                v104 = *(_QWORD *)v103;
                v105 = *(_DWORD *)(*(_QWORD *)v103 + 12LL);
                if ( v103[2] != v105 )
                {
                  v103[2] = v105;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v104 + 152LL))(v104, v94);
                }
              }
            }
          }
          v74 = *(_QWORD *)(v142 + 120);
        }
        if ( (v74 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_28;
LABEL_118:
        sub_168B9F0((__int64)v13, v136, *(_DWORD *)(v142 + 24), 0x1798u, 0);
        if ( v160 )
        {
          sub_AE9DF0((unsigned __int8 **)v13 + 4, v142, 0xAu);
        }
        else
        {
          if ( !v162 )
          {
LABEL_120:
            sub_15F7200(v13);
            goto LABEL_28;
          }
          v116 = sub_168B9E0(v13);
          v119 = v159;
          if ( v159 )
            v119 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v159 + 32LL))(v159);
          v150 = v119;
          v120 = sub_1587BC0(v116, &v150, v114, v115, v117, v118);
          sub_AE9DF0((unsigned __int8 **)(*v120 + 32LL * v161 + 8), v142, 0xAu);
        }
        if ( v160 )
        {
          sub_AE9DF0((unsigned __int8 **)v13 + 4, v143, 0xAu);
        }
        else if ( v162 )
        {
          v123 = sub_168B9E0(v13);
          v126 = v159;
          if ( v159 )
            v126 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v159 + 32LL))(v159);
          v150 = v126;
          v127 = sub_1587BC0(v123, &v150, v121, v122, v124, v125);
          sub_AE9DF0((unsigned __int8 **)(*v127 + 32LL * v161 + 8), v143, 0xAu);
        }
        goto LABEL_120;
      }
LABEL_28:
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 248) + 19080LL) == v131 )
      {
        v75 = sub_BFB9F0(a6);
        if ( (*(_WORD *)v75 & 0x1FF) == 4 )
          v75 = sub_BFB9F0(*(_QWORD *)(v75 + 16));
        sub_1BE6FF0(v8, v75, v133, 1);
      }
      if ( v141 )
        sub_19DD0E0(*(_QWORD *)(v8 + 736), a6);
      if ( a7 == 2 && v134 == 5 )
        sub_19D7290(*(_QWORD *)(v8 + 736), v149);
      if ( a8 )
        *a8 = 1;
      if ( v151 && v152 )
        sub_1580C40(v152, (unsigned __int64)v151);
LABEL_39:
      v27 = v153[1];
      v28 = v153[0];
      if ( v153[1] != v153[0] )
      {
        do
        {
          while ( 1 )
          {
            v29 = (_QWORD *)v28[3];
            if ( v29 == v28 + 5 )
              break;
            operator delete(v29);
            v28 += 8;
            if ( v28 == v27 )
              goto LABEL_42;
          }
          v28 += 8;
        }
        while ( v27 != v28 );
LABEL_42:
        v28 = v153[0];
      }
      if ( v28 )
        operator delete(v28);
      return v135;
    case 17:
      v138 = 0;
      v10 = 0;
      v11 = 3050;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 1;
      v141 = 0;
      goto LABEL_5;
    case 18:
      v135 = sub_C1BF80(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), a2, (unsigned int)a2, a4);
      if ( !v135
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 8)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1
        || (v31 = sub_BFBAE0(a6), (*(_WORD *)v31 & 0x1FF) != 0x47)
        || (v32 = *(_QWORD *)(v31 + 16), (*(_BYTE *)(v32 + 28) & 0x7Fu) - 34 > 5)
        || (v33 = sub_EEB7E0(a6, a2, 0.0), (unsigned __int8)sub_1BE0140(a1, v32, 1, v33)) )
      {
        v10 = 0;
        v11 = 5250;
        sub_19E7980(v153, a6, v148, v149, a1);
        v138 = 0;
        v143 = 0;
        v142 = 0;
        v140 = 1;
        v139 = 1;
        v135 = 1;
        v141 = 0;
        goto LABEL_5;
      }
      if ( a8 )
        *a8 = 1;
      goto LABEL_39;
    default:
      v138 = 0;
      v10 = 0;
      v11 = 0;
      v143 = 0;
      v142 = 0;
      v140 = 0;
      v139 = 0;
      v135 = 0;
      v141 = 0;
      goto LABEL_5;
  }
}
