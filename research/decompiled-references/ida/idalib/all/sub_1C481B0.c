__int64 __fastcall sub_1C481B0(__int64 *a1, __int64 *a2, const __m128i *a3, double a4)
{
  _WORD *v7; // r14
  __int64 i; // r15
  __int64 v9; // rbp
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int16 v12; // dx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 *v17; // rax
  __int16 v18; // ax
  __int64 *v19; // rdx
  __int64 *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i v27; // xmm1
  __m128 v28; // xmm0
  __m128i v29; // xmm2
  unsigned __int8 v30; // al
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 *v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // edx
  __int64 *v54; // rsi
  __int64 *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // eax
  unsigned int v64; // ecx
  __int64 v65; // r14
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r12
  unsigned __int8 *v74; // rax
  _QWORD *v75; // rax
  unsigned __int64 *v76; // rax
  __int64 *v77; // rdx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rax
  __int64 *v86; // r9
  __int64 v87; // r12
  __int64 *v88; // rsi
  unsigned int v89; // ecx
  unsigned int v90; // edx
  unsigned int v91; // eax
  unsigned int v92; // eax
  unsigned int v93; // eax
  __int64 v94; // rax
  __int64 v95; // r14
  unsigned int v96; // eax
  __int64 v97; // rax
  __int64 *v98; // r15
  char *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rbx
  unsigned __int8 *v102; // rax
  unsigned __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // rbp
  _QWORD *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // rbp
  _QWORD *v117; // rdi
  char v118; // al
  _QWORD *v119; // rdi
  unsigned __int64 v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rax
  __int64 v123; // r8
  _QWORD *v124; // rdi
  char v125; // al
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // r15
  unsigned int v131; // eax
  __int64 v132; // rax
  __int64 *v133; // r14
  unsigned int v134; // eax
  __int64 v135; // r12
  __int64 v136; // r13
  __int64 *v137; // r12
  __int64 *j; // r13
  __int64 v139; // r14
  _QWORD *v140; // rdi
  __int64 v141; // rsi
  unsigned int v142; // eax
  __int64 *v143; // r14
  __int64 v144; // rax
  unsigned __int64 *v145; // rax
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // rcx
  unsigned __int64 v148; // rax
  unsigned int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  unsigned int v154; // eax
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 *v159; // r9
  __int64 v160; // r13
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  unsigned __int64 v163; // rax
  __int64 v164; // r8
  __int64 v165; // rsi
  __int64 v166; // rdx
  unsigned __int64 v167; // rsi
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rsi
  __int64 v171; // rdx
  unsigned int v172; // eax
  __int64 *v173; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v174; // [rsp+8h] [rbp-1B0h]
  unsigned int v175; // [rsp+14h] [rbp-1A4h]
  unsigned __int64 v176; // [rsp+18h] [rbp-1A0h]
  __int64 v177; // [rsp+20h] [rbp-198h]
  unsigned __int64 v178; // [rsp+28h] [rbp-190h]
  unsigned __int8 v179; // [rsp+3Fh] [rbp-179h] BYREF
  __int64 v180[2]; // [rsp+40h] [rbp-178h] BYREF
  const __m128i *v181; // [rsp+50h] [rbp-168h] BYREF
  unsigned __int64 v182; // [rsp+58h] [rbp-160h]
  int v183; // [rsp+70h] [rbp-148h] BYREF
  unsigned __int64 v184; // [rsp+78h] [rbp-140h]
  __int64 v185; // [rsp+80h] [rbp-138h]
  __int64 v186; // [rsp+88h] [rbp-130h]
  int v187; // [rsp+90h] [rbp-128h] BYREF
  __int64 v188; // [rsp+98h] [rbp-120h]
  __int64 v189; // [rsp+A0h] [rbp-118h]
  __int64 v190; // [rsp+A8h] [rbp-110h]
  _OWORD v191[3]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v192; // [rsp+E0h] [rbp-D8h]
  unsigned __int64 v193[2]; // [rsp+F0h] [rbp-C8h] BYREF
  unsigned __int64 v194; // [rsp+100h] [rbp-B8h]
  int v195; // [rsp+108h] [rbp-B0h]
  unsigned __int8 *v196; // [rsp+110h] [rbp-A8h] BYREF
  char v197; // [rsp+168h] [rbp-50h]
  unsigned int v198; // [rsp+170h] [rbp-48h]
  char v199; // [rsp+174h] [rbp-44h]

  v7 = (_WORD *)a2[1];
  if ( !v7 )
    goto LABEL_28;
  for ( i = a2[1]; ; i = v9 )
  {
    v12 = *(_WORD *)i;
    v10 = *(_WORD *)i & 0x1FF;
    if ( v10 == 20 )
      goto LABEL_3;
    if ( v10 != 4 )
    {
      switch ( v10 )
      {
        case 57:
          if ( (*(_DWORD *)(i + 16) & 0x3FFF8000) == 0x3FFF8000 )
            goto LABEL_16;
          v9 = *(_QWORD *)(i + 8LL * (((*(_BYTE *)(i + 19) & 0x40) != 0) + ((*(_DWORD *)(i + 16) >> 15) & 0x7FFFu)) + 32);
          v10 = *(_WORD *)v9 & 0x1FF;
          break;
        case 77:
          if ( ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
            goto LABEL_16;
          if ( (*(_BYTE *)(i + 2) & 8) != 0 )
          {
LABEL_3:
            v9 = *(_QWORD *)(i + 24);
            v10 = *(_WORD *)v9 & 0x1FF;
          }
          else
          {
            v9 = *(_QWORD *)(i + 32);
            v10 = *(_WORD *)v9 & 0x1FF;
          }
          break;
        case 18:
          if ( (*(_QWORD *)i & 0x1000000) == 0 )
            goto LABEL_16;
          if ( (BYTE2(*(_QWORD *)i) & 0x80u) == 0 )
            goto LABEL_16;
          v9 = *(_QWORD *)(i + 16);
          if ( !v9 )
            goto LABEL_16;
          v10 = *(_WORD *)v9 & 0x1FF;
          break;
        default:
          v9 = i;
          break;
      }
LABEL_4:
      if ( v10 == 79 )
      {
        v9 = sub_BFA3B0(v9);
      }
      else if ( ((v10 + 452) & 0x1FFu) <= 1 )
      {
        v9 = *(_QWORD *)(v9 + 16);
      }
      else if ( v10 == 48 )
      {
        v13 = *(_QWORD *)(v9 + 16);
        v9 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v13 & 4) != 0 )
          v9 = *(_QWORD *)(v9 + 40);
      }
      else if ( v10 == 116 )
      {
        v9 = *(_QWORD *)(v9 + 24);
      }
      v11 = *(_WORD *)v9 & 0x1FF;
      if ( (unsigned int)v11 - 113 > 1 )
        goto LABEL_11;
      goto LABEL_7;
    }
    if ( *(_BYTE *)(i + 2) >> 3 == 12 )
    {
      v9 = *(_QWORD *)(i + 16);
      v10 = *(_WORD *)v9 & 0x1FF;
      goto LABEL_4;
    }
LABEL_16:
    v11 = v12 & 0x1FF;
    if ( (v12 & 0x1FFu) - 113 > 1 )
      goto LABEL_27;
    v9 = i;
LABEL_7:
    if ( (*(_QWORD *)v9 & 0x80000LL) != 0 && v11 != 114 )
    {
      if ( *(_DWORD *)(v9 + 32) == 1 )
        goto LABEL_37;
      if ( *(_DWORD *)(v9 + 32) <= 1u || !sub_BFDFF0(*(_QWORD *)(v9 + 48)) )
        goto LABEL_11;
      if ( (*(_WORD *)v9 & 0x1FF) != 0x72 )
LABEL_37:
        v17 = (__int64 *)(v9 + 40);
      else
        v17 = (__int64 *)(v9 + 48);
      if ( !sub_BFDFF0(*v17) && (*(_QWORD *)v9 & 0x200000LL) == 0 )
      {
        v18 = *(_WORD *)v9;
        v19 = (__int64 *)(v9 + 48);
        v20 = (__int64 *)(v9 + 40);
        if ( (v18 & 0x1FF) == 0x72 )
          v20 = v19;
        v9 = *v20;
      }
    }
LABEL_11:
    if ( v9 == i )
      break;
  }
  v12 = *(_WORD *)i;
LABEL_27:
  if ( ((v12 + 423) & 0x1FFu) > 4 )
  {
LABEL_28:
    v14 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a4);
    sub_168B9F0((__int64)v193, a1 + 1, v14, 0x1092u, 0);
    if ( v197 )
    {
      sub_AE9DF0(&v196, (__int64)a3, 0xEu);
    }
    else if ( v199 )
    {
      v58 = sub_168B9E0(v193);
      v61 = v194;
      if ( v194 )
        v61 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v194 + 32LL))(v194);
      *(_QWORD *)&v191[0] = v61;
      v62 = sub_1587BC0(v58, (__int64 *)v191, v56, v57, v59, v60);
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v198 + 8), (__int64)a3, 0xEu);
    }
    goto LABEL_30;
  }
  v21 = sub_BFBC70(*(_QWORD *)(i + 32));
  if ( v21 && (*(_BYTE *)(v21 + 28) & 0x7Fu) - 34 <= 5 && (*(_BYTE *)(v21 + 29) & 1) != 0 )
  {
    v173 = (__int64 *)v21;
    v76 = sub_B8C3D0(v21, (__int64)a2, v22, v23, v24, v21);
    v77 = (__int64 *)*v76;
    v78 = *v76 + 8LL * *((unsigned int *)v76 + 2);
    if ( *v76 >= v78 )
    {
      if ( v77 == (__int64 *)v78 )
        goto LABEL_57;
      if ( *(_WORD *)(*(_QWORD *)v78 + 36LL) != 291 )
      {
        v82 = (__int64 *)(v78 + 8);
        while ( v77 != v82 )
        {
          v83 = *v82++;
          if ( *(_WORD *)(v83 + 36) == 291 )
            goto LABEL_121;
        }
        goto LABEL_57;
      }
    }
    else
    {
      v79 = *v76;
      while ( *(_WORD *)(*(_QWORD *)v79 + 36LL) != 291 )
      {
        v79 += 8LL;
        if ( v78 == v79 )
          goto LABEL_57;
      }
      if ( v78 == v79 )
        goto LABEL_57;
    }
LABEL_121:
    v84 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a4);
    sub_168B9F0((__int64)v193, a1 + 1, v84, 0x1091u, 0);
    LOBYTE(v187) = 1;
    v85 = sub_1588420((__int64)v193, (unsigned __int8 *)&v187);
    v86 = v173;
    v87 = v85;
    if ( *(_BYTE *)(v85 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v85 + 32), (__int64)v173, 0xAu);
      v86 = v173;
    }
    else if ( *(_BYTE *)(v85 + 132) )
    {
      v155 = sub_168B9E0((_QWORD *)v85);
      v159 = v173;
      v160 = v155;
      v161 = *(_QWORD **)(v87 + 16);
      if ( v161 )
      {
        v161 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, __int64, __int64, __int64 *))(*v161 + 32LL))(
                           *(_QWORD *)(v87 + 16),
                           &v187,
                           *v161,
                           v157,
                           v158,
                           v173);
        v159 = v173;
      }
      v173 = v159;
      *(_QWORD *)&v191[0] = v161;
      v162 = sub_1587BC0(v160, (__int64 *)v191, v156, v157, v158, (__int64)v159);
      sub_AE9DF0((unsigned __int8 **)(*v162 + 32LL * *(unsigned int *)(v87 + 128) + 8), (__int64)v173, 0xAu);
      v86 = v173;
    }
    v173 = v86;
    sub_15F7200(v193);
    v88 = a1 + 1;
    v89 = 6099;
    v90 = *((_DWORD *)v173 + 6);
    goto LABEL_124;
  }
LABEL_57:
  if ( (*v7 & 0x1FF) == 0x3C && (*(_DWORD *)v7 & 0x80000) != 0 )
  {
    v91 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a4);
    sub_168B9F0((__int64)v193, a1 + 1, v91, 0x1094u, 0);
    *(_QWORD *)&v191[0] = a3;
    v55 = (__int64 *)v191;
    goto LABEL_84;
  }
  v25 = a3[2].m128i_i64[0];
  v173 = a2;
  v26 = a1[68];
  v184 = 0;
  v186 = 0;
  v27 = _mm_loadu_si128(a3);
  v28 = _mm_loadh_ps((const double *)&v173);
  v187 = 0;
  v29 = _mm_loadu_si128(a3 + 1);
  v188 = 0;
  v190 = 0;
  v191[0] = v28;
  v192 = v25;
  LOBYTE(v25) = *(_BYTE *)(v26 + 8);
  v183 = 0;
  v30 = v25 & 0x7F;
  v191[1] = v27;
  v191[2] = v29;
  v31 = (unsigned int)v30 - 34;
  if ( (unsigned int)v31 > 5 || (v32 = v26 - 72, v26 == 72) )
  {
    v65 = 0;
    if ( v30 != 8 )
      v65 = (v30 != 18) + 1LL;
    v66 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
    sub_168B9F0((__int64)v193, a1 + 1, v66, 0x108Fu, 0);
    v180[0] = (__int64)a3;
    v67 = sub_1C3AF30((__int64)v193, v180);
    v68 = v67;
    if ( *(_BYTE *)(v67 + 120) )
    {
      sub_1C2FE50((unsigned __int8 **)(v67 + 32), v65);
    }
    else if ( *(_BYTE *)(v67 + 132) )
    {
      v73 = sub_168B9E0((_QWORD *)v67);
      v74 = *(unsigned __int8 **)(v68 + 16);
      if ( v74 )
        v74 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v74 + 32LL))(*(_QWORD *)(v68 + 16));
      v181 = (const __m128i *)v74;
      v75 = sub_1587BC0(v73, (__int64 *)&v181, v69, v70, v71, v72);
      sub_1C2FE50((unsigned __int8 **)(*v75 + 32LL * *(unsigned int *)(v68 + 128) + 8), v65);
    }
LABEL_30:
    sub_15F7200(v193);
    LODWORD(v15) = 0;
    return (unsigned int)v15;
  }
  if ( (unsigned int)v30 - 35 > 3 )
  {
    v81 = *(_QWORD *)(*(_QWORD *)(v26 - 24) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v81 + 16) != 26 )
    {
      v104 = *(_QWORD *)(*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v104 + 16) == 26 )
        v81 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v26 - 24) & 0xFFFFFFFFFFFFFFF0LL), v31, v104, v26);
      else
        v81 = 0;
    }
    v185 = v81;
LABEL_63:
    v173 = *(__int64 **)(i + 32);
    v33 = sub_BFB9F0((__int64)v173);
    v34 = 0;
    if ( ((*(_WORD *)v33 + 394) & 0x1FFu) <= 1 )
      v34 = v33;
    v174 = v34;
    if ( sub_BFBC70((unsigned __int64)v173) )
    {
      v35 = sub_BFBC70(*(_QWORD *)(i + 32));
      v175 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    else
    {
      v175 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
    }
    v36 = sub_BFBC70(*(_QWORD *)(i + 32));
    if ( v36 && (v37 = (*(_BYTE *)(v36 + 28) & 0x7Fu) - 35, (unsigned int)v37 <= 3) )
    {
      if ( !(unsigned __int8)sub_1C45090((__int64)v191, v36, (__int64)&v187, 1u, *(double *)v28.m128_u64) )
        goto LABEL_92;
      v31 = (__int64)(a1 + 1);
      v40 = v189;
      v173 = a1 + 1;
    }
    else if ( v174 && (LOWORD(v173) = *(_WORD *)(v174 + 2), (((unsigned __int16)v173 >> 3) & 0x3Fu) <= 1) )
    {
      v105 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v174 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v106 = *v105;
      if ( *(_BYTE *)(*v105 + 16) != 33 )
        v106 = sub_F63050(*v105, v31, v37, v38);
      v173 = (__int64 *)a1[31];
      v107 = sub_F61C10(v106);
      v111 = v107[6];
      if ( v111 )
      {
        v112 = v111 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v31 = (__int64)v107;
        v112 = sub_A7AA70((__int64)v173, (__int64)v107, 0, v108, v109, v110);
      }
      v188 = v112;
      v40 = *(_QWORD *)(*(_QWORD *)(v106 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v40 + 16) != 26 )
        v40 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v106 + 32) & 0xFFFFFFFFFFFFFFF0LL), v31, v112, v108);
      v31 = (__int64)(a1 + 1);
      v189 = v40;
      v187 = 3;
      v173 = a1 + 1;
    }
    else
    {
      v173 = a1 + 1;
      if ( (*(_WORD *)v33 & 0x1FF) == 0x66 )
      {
        v142 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
        v143 = v173;
        sub_168B9F0((__int64)v193, v173, v142, 0x1098u, 0);
        LODWORD(v180[0]) = 1;
        v144 = sub_1587D10((__int64)v193, (int *)v180);
        LODWORD(v181) = 1;
        sub_1587D10(v144, (int *)&v181);
        sub_15F7200(v193);
        sub_168B9F0((__int64)v193, v143, a3[1].m128i_u32[2], 0x18ECu, 0);
        v181 = a3;
        goto LABEL_91;
      }
      v40 = *(_QWORD *)(sub_F68450(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL), v31, v37, v38, v39)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v40 + 16) != 26 )
      {
        v113 = *(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v113 + 16) != 26 )
        {
          v189 = 0;
LABEL_127:
          v92 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
          sub_168B9F0((__int64)v193, v173, v92, 0x1093u, 0);
          v181 = a3;
          sub_1C3AF30((__int64)v193, (__int64 *)&v181);
          sub_15F7200(v193);
          if ( !v189 )
          {
            v152 = sub_BFBC70(*(_QWORD *)(i + 32));
            if ( v152 )
            {
              if ( (*(_BYTE *)(v152 + 28) & 0x7Fu) - 34 <= 5 )
              {
                v153 = sub_BFBC70(*(_QWORD *)(i + 32));
                if ( v153 && (*(_BYTE *)(v153 + 28) & 0x7Fu) - 34 >= 6 )
                  v153 = 0;
                v154 = sub_B73090(v153);
                sub_168B9F0((__int64)v193, v173, v154, 0x17D4u, 0);
                sub_15F7200(v193);
              }
            }
          }
          if ( v185 )
            goto LABEL_92;
          v93 = sub_B73090(v32);
          v89 = 6100;
          v88 = v173;
          v90 = v93;
LABEL_124:
          sub_168B9F0((__int64)v193, v88, v90, v89, 0);
          goto LABEL_30;
        }
        v40 = sub_F63050(v40, v31, v113, v80);
      }
      v189 = v40;
    }
    if ( v40 )
    {
      v31 = v185;
      if ( v185 )
      {
        if ( ((*(_WORD *)(v40 + 20) >> 2) & 0x3F) != ((*(_WORD *)(v185 + 20) >> 2) & 0x3F) )
        {
          v94 = sub_BFBC70(*(_QWORD *)(i + 32));
          v95 = v94;
          if ( v94 && (*(_BYTE *)(v94 + 28) & 0x7Fu) - 18 <= 0x3F )
          {
            v96 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
            sub_168B9F0((__int64)v193, v173, v96, 0x108Eu, 0);
            LOBYTE(v180[0]) = 1;
            v97 = sub_1588420((__int64)v193, (unsigned __int8 *)v180);
            v181 = *(const __m128i **)(v95 + 40);
            sub_15894B0(v97, (__int64 *)&v181);
            sub_15F7200(v193);
          }
          else
          {
            v134 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
            sub_168B9F0((__int64)v193, v173, v134, 0x108Eu, 0);
            LOBYTE(v181) = 0;
            sub_1588420((__int64)v193, (unsigned __int8 *)&v181);
            sub_15F7200(v193);
          }
          v98 = v173;
          sub_168B9F0((__int64)v193, v173, v175, 0x17D1u, 0);
          v99 = sub_F5C3D0((*(_WORD *)(v185 + 20) >> 2) & 0x3F);
          v180[1] = v100;
          v180[0] = (__int64)v99;
          v101 = sub_166BAF0((__int64)v193, (__int64)v180);
          v102 = (unsigned __int8 *)sub_F5C3D0((*(_WORD *)(v189 + 20) >> 2) & 0x3F);
          v182 = v103;
          v181 = (const __m128i *)v102;
          sub_166BAF0(v101, (__int64)&v181);
          sub_15F7200(v193);
          v53 = a3[1].m128i_u32[2];
          v54 = v98;
          goto LABEL_83;
        }
        if ( *(char *)(v40 + 19) < 0 || *(char *)(v185 + 19) < 0 )
        {
          v63 = sub_EEB7E0((unsigned __int64)a2, v185, *(double *)v28.m128_u64);
          v64 = 4246;
        }
        else
        {
          v41 = sub_BFBC70(*(_QWORD *)(i + 32));
          if ( !v41 || (*(_BYTE *)(v41 + 29) & 1) == 0 )
            goto LABEL_78;
          v145 = sub_B8C3D0(v41, v31, v42, v43, v44, v45);
          v146 = *v145;
          v147 = *v145 + 8LL * *((unsigned int *)v145 + 2);
          if ( *v145 >= v147 )
          {
            if ( v146 == v147 )
              goto LABEL_78;
            while ( *(_WORD *)(*(_QWORD *)v147 + 36LL) != 169 )
            {
              v147 += 8LL;
              if ( v146 == v147 )
                goto LABEL_78;
            }
          }
          else
          {
            v148 = *v145;
            while ( *(_WORD *)(*(_QWORD *)v148 + 36LL) != 169 )
            {
              v148 += 8LL;
              if ( v147 == v148 )
                goto LABEL_78;
            }
            if ( v147 == v148 )
            {
LABEL_78:
              if ( ((v188 & 0xFFFFFFFFFFFFFFF0LL) == 0) != ((v184 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
              {
                v46 = sub_BFBC70(*(_QWORD *)(i + 32));
                v47 = v46;
                if ( v46 && (*(_BYTE *)(v46 + 28) & 0x7Fu) - 18 <= 0x3F )
                {
                  v48 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
                  v49 = v173;
                  sub_168B9F0((__int64)v193, v173, v48, 0x1090u, 0);
                  v50 = sub_1C3AE90((__int64)v193, &v183);
                  v51 = sub_1C3AE90(v50, &v187);
                  LOBYTE(v180[0]) = 1;
                  v52 = sub_1588420(v51, (unsigned __int8 *)v180);
                  v181 = *(const __m128i **)(v47 + 40);
                  sub_15894B0(v52, (__int64 *)&v181);
                  sub_15F7200(v193);
                  sub_168B9F0((__int64)v193, v49, v175, 0x17D2u, 0);
                  v181 = *(const __m128i **)(v47 + 40);
                  sub_15894B0((__int64)v193, (__int64 *)&v181);
                  sub_15F7200(v193);
                }
                else
                {
                  v149 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
                  sub_168B9F0((__int64)v193, v173, v149, 0x1090u, 0);
                  v150 = sub_1C3AE90((__int64)v193, &v183);
                  v151 = sub_1C3AE90(v150, &v187);
                  LOBYTE(v181) = 0;
                  sub_1588420(v151, (unsigned __int8 *)&v181);
                  sub_15F7200(v193);
                }
                v53 = a3[1].m128i_u32[2];
                v54 = v173;
LABEL_83:
                sub_168B9F0((__int64)v193, v54, v53, 0x18ECu, 0);
                v181 = a3;
                v55 = (__int64 *)&v181;
LABEL_84:
                sub_1C3AF30((__int64)v193, v55);
                goto LABEL_30;
              }
              sub_168B9B0((__int64)&v181, (__int64)v173, 6101);
              v115 = v184;
              v116 = v185;
              v177 = v189;
              v174 = v188;
              v176 = v184 & 0xFFFFFFFFFFFFFFF0LL;
              if ( (v184 & 0xFFFFFFFFFFFFFFF0LL) != 0
                && (v117 = (_QWORD *)a1[31],
                    v178 = v184,
                    v118 = sub_AC0070(v117, v184, v188, v184, v114),
                    v115 = v178,
                    !v118) )
              {
                v177 = v178;
                sub_AE9DF0((unsigned __int8 **)&v181, 0, 3u);
                v165 = *(_QWORD *)v176;
                v166 = *(_QWORD *)(*(_QWORD *)v176 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v176 + 8LL) >> 3) & 1;
                if ( v166 )
                  v167 = sub_F64F00(v177, v165, v166, v177, v164) & 0xFFFFFFFFFFFFFFF0LL;
                else
                  v167 = v165 & 0xFFFFFFFFFFFFFFF0LL;
                sub_AE9DF0((unsigned __int8 **)&v181, v167, 8u);
                v170 = *(_QWORD *)(v174 & 0xFFFFFFFFFFFFFFF0LL);
                v171 = *(_QWORD *)(v170 + 8) & 7LL | (*(__int64 *)(v170 + 8) >> 3) & 1;
                if ( v171 )
                  v128 = sub_F64F00(v174, v170, v171, v168, v169) & 0xFFFFFFFFFFFFFFF0LL;
                else
                  v128 = v170 & 0xFFFFFFFFFFFFFFF0LL;
                sub_AE9DF0((unsigned __int8 **)&v181, v128, 8u);
              }
              else
              {
                v119 = (_QWORD *)a1[31];
                v120 = *(_QWORD *)(v177 + 24);
                v180[0] = *(_QWORD *)(v116 + 24);
                v193[0] = v120;
                v121 = sub_AC0070(v119, v180[0], v120, v115, v114);
                v15 = v121;
                if ( (_BYTE)v121 )
                {
                  v122 = *(unsigned __int16 *)(v116 + 22);
                  if ( (_WORD)v122 == *(_WORD *)(v177 + 22) )
                  {
                    v178 = *(unsigned __int16 *)(v116 + 22);
                    v123 = 0;
                    if ( !v122 )
                    {
LABEL_163:
                      v135 = 8 * (((*(_BYTE *)(i + 2) & 8) != 0) + 1LL) + 32;
                      v136 = v135 + 8LL * *(unsigned int *)(i + 16);
                      v137 = (__int64 *)(i + v135);
                      for ( j = (__int64 *)(i + v136); j != v137; LODWORD(v15) = (unsigned __int8)v173 )
                      {
                        v139 = *v137;
                        v140 = (_QWORD *)a1[31];
                        LOBYTE(v173) = v15;
                        ++v137;
                        v141 = *(_QWORD *)(v139 + 8);
                        v193[1] = 0;
                        v195 = 0;
                        LODWORD(v193[0]) = 1;
                        v194 = sub_A73320(v140, v141);
                        v196 = nullptr;
                        sub_15A16F0((__int64)a1, (__int64)v193, v139);
                      }
                      goto LABEL_158;
                    }
                    while ( 1 )
                    {
                      v124 = (_QWORD *)a1[31];
                      LOBYTE(v176) = v15;
                      v174 = v123;
                      v180[0] = *(_QWORD *)(v177 + 8 * v123 + 48);
                      v193[0] = *(_QWORD *)(v116 + 8 * v123 + 48);
                      v125 = sub_AC0070(v124, v180[0], v193[0], v15, v123);
                      v15 = (unsigned __int8)v176;
                      if ( !v125 )
                        break;
                      v123 = v174 + 1;
                      if ( v178 == v174 + 1 )
                        goto LABEL_163;
                    }
                    sub_AE9DF0((unsigned __int8 **)&v181, 2, 3u);
                    v126 = sub_6D5440(v180);
                    sub_AE9DF0((unsigned __int8 **)&v181, v126, 8u);
                    v127 = sub_6D5440(v193);
                    sub_AE9DF0((unsigned __int8 **)&v181, v127, 8u);
                    v128 = (int)v174 + 1;
                    sub_1C2FE50((unsigned __int8 **)&v181, v128);
                  }
                  else
                  {
                    sub_1C2FE50((unsigned __int8 **)&v181, 1);
                    sub_AE9DF0((unsigned __int8 **)&v181, *(unsigned __int16 *)(v116 + 22), 3u);
                    v128 = *(unsigned __int16 *)(v177 + 22);
                    sub_AE9DF0((unsigned __int8 **)&v181, v128, 3u);
                  }
                }
                else
                {
                  sub_AE9DF0((unsigned __int8 **)&v181, 3, 3u);
                  v163 = sub_6D5440(v180);
                  sub_AE9DF0((unsigned __int8 **)&v181, v163, 8u);
                  v128 = sub_6D5440(v193);
                  sub_AE9DF0((unsigned __int8 **)&v181, v128, 8u);
                }
              }
              v129 = sub_BFBC70(*(_QWORD *)(i + 32));
              v130 = v129;
              if ( v129 && (*(_BYTE *)(v129 + 28) & 0x7Fu) - 18 <= 0x3F )
              {
                v131 = sub_EEB7E0((unsigned __int64)a2, v128, *(double *)v28.m128_u64);
                sub_168B9F0((__int64)v193, v173, v131, 0x1091u, 0);
                v179 = 1;
                v132 = sub_1588420((__int64)v193, &v179);
                v180[0] = *(_QWORD *)(v130 + 40);
                sub_15894B0(v132, v180);
                sub_15F7200(v193);
              }
              else
              {
                v172 = sub_EEB7E0((unsigned __int64)a2, v128, *(double *)v28.m128_u64);
                sub_168B9F0((__int64)v193, v173, v172, 0x1091u, 0);
                LOBYTE(v180[0]) = 0;
                sub_1588420((__int64)v193, (unsigned __int8 *)v180);
                sub_15F7200(v193);
              }
              v133 = v173;
              sub_168CDE0((__int64)v193, v173, v175, (__int64)&v181, 0);
              sub_15F7200(v193);
              sub_168B9F0((__int64)v193, v133, a3[1].m128i_u32[2], 0x18ECu, 0);
              v180[0] = (__int64)a3;
              sub_1C3AF30((__int64)v193, v180);
              sub_15F7200(v193);
              LODWORD(v15) = 0;
LABEL_158:
              if ( v181 && v182 )
              {
                LOBYTE(v173) = v15;
                sub_1580C40(v182, (unsigned __int64)v181);
                LODWORD(v15) = (unsigned __int8)v173;
              }
              return (unsigned int)v15;
            }
          }
          v63 = sub_EEB7E0((unsigned __int64)a2, v31, *(double *)v28.m128_u64);
          v64 = 4245;
        }
        sub_168B9F0((__int64)v193, v173, v63, v64, 0);
        v181 = a3;
LABEL_91:
        sub_1C3AF30((__int64)v193, (__int64 *)&v181);
        sub_15F7200(v193);
        goto LABEL_92;
      }
    }
    goto LABEL_127;
  }
  v31 = v26 - 72;
  if ( (unsigned __int8)sub_1C45090((__int64)v191, v32, (__int64)&v183, 0, *(double *)v28.m128_u64) )
    goto LABEL_63;
LABEL_92:
  LODWORD(v15) = 0;
  return (unsigned int)v15;
}
