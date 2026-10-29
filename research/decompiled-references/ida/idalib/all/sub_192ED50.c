unsigned __int64 __fastcall sub_192ED50(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10,
        unsigned __int8 a11,
        char a12)
{
  __int64 v12; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 (*v22)(); // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rbp
  __int64 i; // rax
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned int v40; // esi
  unsigned int v41; // edi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  __int64 v46; // r9
  unsigned __int64 v47; // r15
  __int64 v48; // rdx
  _QWORD *v49; // r8
  __int64 *v50; // rsi
  unsigned int v51; // ecx
  __int64 *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  __int64 *v65; // rax
  unsigned int v66; // eax
  __int64 *v67; // rsi
  unsigned int v68; // ecx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // rax
  __int64 *v80; // rax
  __int64 *v81; // rax
  __int64 *v82; // rax
  __int64 *v83; // rax
  __int64 *v84; // rsi
  unsigned int v85; // ecx
  unsigned __int64 *v86; // rax
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rsi
  unsigned int v91; // eax
  __int64 v92; // rsi
  char v93; // al
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rsi
  unsigned __int64 *v97; // r14
  unsigned __int64 v98; // r12
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r8
  _QWORD *v102; // rcx
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // eax
  __int64 *v108; // rsi
  __int64 *v109; // rdx
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned int v115; // eax
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // r15
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // rax
  const char *v123; // rax
  const char *v124; // rax
  unsigned __int64 v125; // rbp
  const char *v126; // rax
  __int64 (*v127)(); // rax
  __int64 v128; // rcx
  size_t v129; // rax
  size_t v130; // rax
  size_t v131; // rax
  char *v132; // rsi
  unsigned int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  _BOOL4 v138; // eax
  __int64 (*v139)(); // rax
  __int64 v140; // rcx
  __int64 *v141; // rax
  __int64 *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdi
  unsigned __int64 *v145; // rsi
  _QWORD *v146; // rax
  __int64 v147; // rax
  __int64 j; // r14
  unsigned int v149; // eax
  char *v150; // rsi
  __int64 v151; // rdx
  __int64 v152; // rsi
  _QWORD *v153; // rdi
  unsigned __int64 v154; // rax
  unsigned __int64 *v155; // rax
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rax
  __int64 *v159; // rax
  __int64 *v160; // rax
  unsigned __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  _QWORD *v165; // rbp
  unsigned __int64 v166; // rax
  unsigned int v167; // eax
  int v168; // eax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // [rsp-10h] [rbp-178h]
  __int64 v176; // [rsp-8h] [rbp-170h]
  unsigned int v177; // [rsp+8h] [rbp-160h]
  __int64 v181; // [rsp+28h] [rbp-140h]
  __int64 v182; // [rsp+28h] [rbp-140h]
  __int64 v183; // [rsp+28h] [rbp-140h]
  __int64 (*v184)(); // [rsp+28h] [rbp-140h]
  __int64 v185; // [rsp+30h] [rbp-138h]
  __int64 v186; // [rsp+30h] [rbp-138h]
  __int64 v187; // [rsp+30h] [rbp-138h]
  __int64 v188; // [rsp+40h] [rbp-128h]
  __int64 v189; // [rsp+40h] [rbp-128h]
  __int64 v190; // [rsp+48h] [rbp-120h]
  __int64 v191; // [rsp+60h] [rbp-108h]
  __int64 v192; // [rsp+60h] [rbp-108h]
  bool v193; // [rsp+87h] [rbp-E1h] BYREF
  _QWORD *v194; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v195; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v196; // [rsp+98h] [rbp-D0h] BYREF
  __int64 (__fastcall **v197)(); // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v198; // [rsp+A8h] [rbp-C0h]
  unsigned __int64 *v199; // [rsp+B0h] [rbp-B8h]
  int v200; // [rsp+B8h] [rbp-B0h]
  __int64 v201; // [rsp+C0h] [rbp-A8h]

  v12 = a3;
  if ( !a3 || (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34 > 5 )
  {
    v194 = nullptr;
    v177 = 0;
    goto LABEL_4;
  }
  v194 = (_QWORD *)a3;
  v177 = sub_B75A50(a3, 0);
  if ( (*((_BYTE *)v194 + 29) & 1) != 0 )
  {
    v55 = sub_B8C3D0(a3, 0, v16, v17, v18, v19);
    v58 = *v55;
    v59 = *v55 + 8LL * *((unsigned int *)v55 + 2);
    if ( *v55 >= v59 )
    {
      if ( v58 == v59 )
      {
LABEL_34:
        if ( (*((_BYTE *)v194 + 29) & 1) == 0 )
          goto LABEL_4;
        v61 = sub_B8C3D0((__int64)v194, 0, v58, v59, v56, v57);
        v63 = *v61;
        v64 = *v61 + 8LL * *((unsigned int *)v61 + 2);
        if ( *v61 >= v64 )
        {
          if ( v63 == v64 )
            goto LABEL_4;
          while ( *(_WORD *)(*(_QWORD *)v64 + 36LL) != 116 )
          {
            v64 += 8LL;
            if ( v63 == v64 )
              goto LABEL_4;
          }
        }
        else
        {
          v65 = (__int64 *)*v61;
          while ( 1 )
          {
            v63 = *v65;
            if ( *(_WORD *)(*v65 + 36) == 116 )
              break;
            if ( (__int64 *)v64 == ++v65 )
              goto LABEL_4;
          }
          if ( (__int64 *)v64 == v65 )
            goto LABEL_4;
        }
        v66 = sub_C00A40(a2, 0, v63, v64, v62);
        v67 = (__int64 *)(a1 + 8);
        v68 = 3062;
LABEL_69:
        sub_168B9F0((__int64)&v197, v67, v66, v68, 0);
        sub_15F7200(&v197);
        return 1;
      }
      while ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 131 )
      {
        v59 += 8LL;
        if ( v58 == v59 )
          goto LABEL_34;
      }
    }
    else
    {
      v60 = (__int64 *)*v55;
      while ( 1 )
      {
        v58 = *v60;
        if ( *(_WORD *)(*v60 + 36) == 131 )
          break;
        if ( (__int64 *)v59 == ++v60 )
          goto LABEL_34;
      }
      if ( (__int64 *)v59 == v60 )
        goto LABEL_34;
    }
    v66 = sub_C00A40(a2, 0, v58, v59, v56);
    v67 = (__int64 *)(a1 + 8);
    v68 = 3011;
    goto LABEL_69;
  }
LABEL_4:
  v20 = sub_15F1640(a1, 0);
  v25 = v20;
  if ( !v20 || (*(_BYTE *)(v20 + 29) & 1) == 0 )
    goto LABEL_6;
  v80 = sub_B8C3D0(v20, 0, v21, (__int64)v22, v23, v24);
  v21 = *v80;
  v22 = (__int64 (*)())(*v80 + 8LL * *((unsigned int *)v80 + 2));
  if ( *v80 >= (unsigned __int64)v22 )
  {
    if ( (__int64 (*)())v21 != v22 )
    {
      if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 131 )
        goto LABEL_128;
      v127 = (__int64 (*)())((char *)v22 + 8);
      while ( 1 )
      {
        v22 = v127;
        if ( (__int64 (*)())v21 == v127 )
          break;
        v128 = *(_QWORD *)v127;
        v127 = (__int64 (*)())((char *)v127 + 8);
        if ( *(_WORD *)(v128 + 36) == 131 )
          goto LABEL_128;
      }
    }
  }
  else
  {
    v81 = (__int64 *)*v80;
    while ( 1 )
    {
      v21 = *v81;
      if ( *(_WORD *)(*v81 + 36) == 131 )
        break;
      if ( (char *)v22 == (char *)++v81 )
        goto LABEL_58;
    }
    if ( (char *)v22 != (char *)v81 )
      goto LABEL_128;
  }
LABEL_58:
  if ( (*(_BYTE *)(v25 + 29) & 1) == 0 )
    goto LABEL_6;
  v82 = sub_B8C3D0(v25, 0, v21, (__int64)v22, v23, v24);
  v21 = *v82;
  v22 = (__int64 (*)())(*v82 + 8LL * *((unsigned int *)v82 + 2));
  if ( *v82 >= (unsigned __int64)v22 )
  {
    if ( (__int64 (*)())v21 == v22 )
      goto LABEL_6;
    if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 132 )
    {
      v139 = (__int64 (*)())((char *)v22 + 8);
      do
      {
        v22 = v139;
        if ( (__int64 (*)())v21 == v139 )
          goto LABEL_6;
        v140 = *(_QWORD *)v139;
        v139 = (__int64 (*)())((char *)v139 + 8);
      }
      while ( *(_WORD *)(v140 + 36) != 132 );
    }
  }
  else
  {
    v83 = (__int64 *)*v82;
    while ( 1 )
    {
      v21 = *v83;
      if ( *(_WORD *)(*v83 + 36) == 132 )
        break;
      if ( (char *)v22 == (char *)++v83 )
        goto LABEL_6;
    }
    if ( (char *)v22 == (char *)v83 )
      goto LABEL_6;
  }
LABEL_128:
  v189 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  v184 = *(__int64 (**)())(*(_QWORD *)v189 + 584LL);
  v129 = j__strlen("sse");
  if ( v184 != sub_A55EE0 )
  {
    v132 = "sse";
    if ( ((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v184)(v189, "sse", v129) )
      goto LABEL_132;
    v184 = *(__int64 (**)())(*(_QWORD *)v189 + 584LL);
  }
  v130 = j__strlen("x87");
  if ( v184 == sub_A55EE0 )
  {
LABEL_130:
    v131 = j__strlen("mmx");
    v22 = sub_A55EE0;
    if ( v184 == sub_A55EE0 )
      goto LABEL_6;
    v132 = "mmx";
    if ( !((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v184)(v189, "mmx", v131) )
      goto LABEL_6;
    goto LABEL_132;
  }
  v132 = "x87";
  if ( !((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v184)(v189, "x87", v130) )
  {
    v184 = *(__int64 (**)())(*(_QWORD *)v189 + 584LL);
    goto LABEL_130;
  }
LABEL_132:
  if ( !v194 || (*((_BYTE *)v194 + 29) & 1) == 0 )
    goto LABEL_134;
  v159 = sub_B8C3D0((__int64)v194, (__int64)v132, v21, (__int64)v22, v23, v24);
  v21 = *v159;
  v22 = (__int64 (*)())(*v159 + 8LL * *((unsigned int *)v159 + 2));
  if ( *v159 >= (unsigned __int64)v22 )
  {
    if ( (__int64 (*)())v21 == v22 )
      goto LABEL_134;
    while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 132 )
    {
      v22 = (__int64 (*)())((char *)v22 + 8);
      if ( (__int64 (*)())v21 == v22 )
        goto LABEL_134;
    }
  }
  else
  {
    v160 = (__int64 *)*v159;
    while ( 1 )
    {
      v21 = *v160;
      if ( *(_WORD *)(*v160 + 36) == 132 )
        break;
      if ( (char *)v22 == (char *)++v160 )
        goto LABEL_134;
    }
    if ( (char *)v22 == (char *)v160 )
    {
LABEL_134:
      v133 = sub_C00A40(a2, (__int64)v132, v21, (__int64)v22, v23);
      sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), v133, 0x1962u, 0);
      if ( (*(_BYTE *)(v25 + 29) & 1) == 0 )
      {
LABEL_135:
        v138 = 1;
        goto LABEL_136;
      }
      v155 = sub_B8C3D0(v25, a1 + 8, v134, v135, v136, v137);
      v156 = *v155;
      v157 = *v155 + 8LL * *((unsigned int *)v155 + 2);
      if ( *v155 >= v157 )
      {
        if ( v156 == v157 )
          goto LABEL_135;
        if ( *(_WORD *)(*(_QWORD *)v157 + 36LL) != 131 )
        {
          v161 = v157 + 8;
          do
          {
            v157 = v161;
            if ( v156 == v161 )
              goto LABEL_135;
            v161 += 8LL;
          }
          while ( *(_WORD *)(*(_QWORD *)v157 + 36LL) != 131 );
        }
      }
      else
      {
        v158 = *v155;
        while ( 1 )
        {
          v156 = v158;
          if ( *(_WORD *)(*(_QWORD *)v158 + 36LL) == 131 )
            break;
          v158 += 8LL;
          if ( v157 == v158 )
            goto LABEL_135;
        }
      }
      v138 = v156 == v157;
LABEL_136:
      LODWORD(v196) = v138;
      sub_1587D10((__int64)&v197, (int *)&v196);
      sub_15F7200(&v197);
      if ( v194 )
      {
        sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), *((_DWORD *)v194 + 6), 0x16B7u, 0);
        sub_1795A40((__int64)&v197, (__int64 *)&v194);
        sub_15F7200(&v197);
      }
    }
  }
LABEL_6:
  if ( v177 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1F7 )
    {
      v117 = sub_A70010(*(_QWORD *)(a1 + 248), v194[6]);
      v118 = sub_160A600(a1, a2, v117, 0x3Du, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
      v119 = v194;
      v34 = v118 & 0xFFFFFFFFFFFFFFFELL;
      v120 = *(_QWORD *)(v194[6] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v120 + 16) - 25 > 1 )
        v120 = sub_F63050(*(_QWORD *)(v194[6] & 0xFFFFFFFFFFFFFFF0LL), v176, v120, v175);
      v183 = v120;
      v121 = sub_B8C330((__int64)v119);
      v197 = *(__int64 (__fastcall ***)())(v183 + 24);
      v122 = sub_F67970(&v197, v121);
      v28 = *(_QWORD *)(a1 + 248);
      v181 = v122;
    }
    else
    {
      v27 = sub_1917900(a1, a2, v21, (__int64)v22, v23, v24, a7, a8);
      v28 = *(_QWORD *)(a1 + 248);
      v181 = *(_QWORD *)(v28 + 18640);
      if ( v27 == 1 )
        return 1;
      v34 = v27 & 0xFFFFFFFFFFFFFFFELL;
    }
    v123 = (const char *)sub_FBD4B0(*(__int64 **)(v28 + 17520), v177);
    v33 = 116;
    if ( strchr(v123, 116) )
    {
      v190 = 0;
      v39 = 0;
      v188 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v30 = sub_1917900(a1, a2, v21, (__int64)v22, v23, v24, a7, a8);
    v32 = *(_QWORD *)(a1 + 248);
    v33 = *(_QWORD *)(v32 + 18640);
    v181 = v33;
    if ( v30 == 1 )
      return 1;
    v34 = v30 & 0xFFFFFFFFFFFFFFFELL;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        *(_BYTE *)(i + 16) != 42;
        i = *(_QWORD *)(*(_QWORD *)((v79 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    i = sub_18BBDD0(i, v33, v32, v31);
    if ( i )
      break;
    v70 = *(_QWORD *)(v34 + 8);
    v71 = *(_QWORD *)(v70 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v71 + 16) == 11 )
      goto LABEL_43;
    v31 = *(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) == 11 )
    {
      v71 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL), v33, v70, v31);
      if ( v71 )
      {
LABEL_43:
        v72 = *(_QWORD *)(*(_QWORD *)(v71 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v188 = v72;
        v37 = *(_BYTE *)(v72 + 16);
        v73 = (unsigned int)v37 - 25;
        if ( (unsigned int)v73 <= 1 )
          goto LABEL_16;
        v74 = sub_F63050(v72, v33, v73, v31);
        v188 = v74;
        if ( !v74 )
          goto LABEL_74;
        goto LABEL_45;
      }
      v70 = *(_QWORD *)(v34 + 8);
    }
    if ( v70 != *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19104LL) )
      goto LABEL_72;
    v197 = (__int64 (__fastcall **)())a1;
    v75 = sub_18E4C90((__int64 *)&v197, v34, v70, v31, v69, *(double *)a7.m128_u64);
    if ( v75 == 1 )
      return 1;
    v33 = v75 & 0xFFFFFFFFFFFFFFFELL;
    v79 = sub_190ABA0(a1, (_QWORD *)(v75 & 0xFFFFFFFFFFFFFFFELL), 1, v76, v77, v78, (__m128i)a7, a8);
    if ( v79 == 1 )
      return 1;
    v34 = v79 & 0xFFFFFFFFFFFFFFFELL;
  }
  v36 = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v188 = v36;
  v37 = *(_BYTE *)(v36 + 16);
  v38 = (unsigned int)v37 - 25;
  if ( (unsigned int)v38 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1
      || (v74 = sub_F63050(v36, v33, v38, v31), (v188 = v74) == 0) )
    {
LABEL_72:
      v84 = (__int64 *)(a1 + 8);
      v85 = 5222;
      goto LABEL_73;
    }
LABEL_45:
    v37 = *(_BYTE *)(v74 + 16);
  }
LABEL_16:
  if ( v37 == 26 )
  {
    v190 = v188;
    v39 = *(unsigned __int16 *)(v188 + 22);
  }
  else
  {
LABEL_74:
    v190 = 0;
    v39 = 0;
  }
LABEL_18:
  v40 = *(_DWORD *)(a1 + 1944);
  v41 = *(_DWORD *)(a1 + 1948);
  v42 = *(unsigned int *)(a1 + 1952);
  v43 = *(unsigned int *)(a1 + 1956);
  if ( a10 )
  {
    if ( __PAIR64__(v43, v42) == __PAIR64__(v41, v40) )
    {
      v43 = 0;
      v42 = 0;
    }
    v44 = v34;
    v47 = sub_C99B50(*(_QWORD **)(a1 + 248), v34, a10, a5, a6, v181, 0, a9, (v43 << 32) | v42, v39);
  }
  else
  {
    if ( __PAIR64__(v43, v42) == __PAIR64__(v41, v40) )
    {
      v43 = 0;
      v42 = 0;
    }
    v44 = v34;
    v47 = sub_C0BFD0(*(_QWORD **)(a1 + 248), v34, a5, a6, v181, 0, a9, (v43 << 32) | v42, v39, a12);
  }
  v48 = v177;
  if ( !v177
    || (v124 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v177),
        v44 = 116,
        !strchr(v124, 116)) )
  {
    v49 = v194;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0 )
    {
LABEL_82:
      v90 = *(_QWORD *)(v188 + 24);
      goto LABEL_83;
    }
    if ( a10 )
    {
      if ( v194 )
      {
        if ( (*((_BYTE *)v194 + 29) & 1) == 0 )
        {
LABEL_27:
          v50 = (__int64 *)(a1 + 8);
          v51 = 4083;
LABEL_28:
          sub_168B9F0((__int64)&v197, v50, a4, v51, 0);
          v52 = (__int64 *)&v194;
          v53 = sub_1795A40((__int64)&v197, (__int64 *)&v194);
LABEL_29:
          v54 = v53;
          v196 = sub_EEC8C0(v34, (__int64)v52, *(double *)a7.m128_u64);
          sub_1587DB0(v54, (__int64 *)&v196);
          sub_15F7200(&v197);
          return 1;
        }
        v141 = sub_B8C3D0((__int64)v194, v44, v48, v45, (__int64)v194, v46);
        v48 = *v141;
        v45 = *v141 + 8LL * *((unsigned int *)v141 + 2);
        if ( *v141 >= v45 )
        {
          if ( v48 == v45 )
            goto LABEL_27;
          while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 163 )
          {
            v45 += 8LL;
            if ( v48 == v45 )
              goto LABEL_27;
          }
        }
        else
        {
          v142 = (__int64 *)*v141;
          while ( 1 )
          {
            v48 = *v142;
            if ( *(_WORD *)(*v142 + 36) == 163 )
              break;
            if ( (__int64 *)v45 == ++v142 )
              goto LABEL_27;
          }
          if ( (__int64 *)v45 == v142 )
            goto LABEL_27;
        }
      }
      v90 = *(_QWORD *)(v188 + 24);
      v143 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v143 + 16) == 13 && ((*(_WORD *)(v143 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_158;
      v144 = *(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v144 + 16) == 16 )
        goto LABEL_158;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v144 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
      {
LABEL_213:
        if ( (*(_BYTE *)(*(_QWORD *)(v90 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        {
LABEL_158:
          v49 = v194;
LABEL_83:
          v182 = (__int64)v49;
          v91 = sub_EEB7E0(v34, v90, *(double *)a7.m128_u64);
          if ( (unsigned __int8)sub_18C4140(a1, v90, v91, v47, v182) )
            return 1;
          v92 = *(_QWORD *)(a1 + 248);
          v197 = *(__int64 (__fastcall ***)())(v188 + 24);
          *(_QWORD *)(v47 + 8) = sub_F67970(&v197, v92);
          v93 = sub_18C0240(*(_QWORD *)(v188 + 24), v92);
          v95 = 2 * (v93 & 3u);
          *(_BYTE *)(v47 + 1) = (2 * (v93 & 3)) | *(_BYTE *)(v47 + 1) & 0xF9;
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 55) <= 1 )
          {
            v96 = (__int64)&a5[a6];
            if ( (unsigned __int64 *)v96 != a5 )
            {
              v191 = v12;
              v97 = a5;
              while ( 1 )
              {
                v98 = *v97;
                if ( *v97 )
                {
                  if ( sub_F65F60(*(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
                    break;
                }
                if ( (unsigned __int64 *)v96 == ++v97 )
                {
                  v12 = v191;
                  goto LABEL_91;
                }
              }
              v167 = sub_C00A40(v98, v96, v95, v99, v100);
              sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), v167, 0x1561u, 0);
              goto LABEL_221;
            }
          }
LABEL_91:
          v101 = v190;
          v102 = v194;
          if ( v190 )
          {
            v103 = v47;
            if ( (unsigned __int8)sub_192D780(a1, v47, (__int64)a5, a6, a11) )
              return 1;
            goto LABEL_93;
          }
          if ( !v194 )
            goto LABEL_235;
          v145 = (unsigned __int64 *)&v195;
          v195 = 0;
          if ( !(unsigned __int8)sub_B7F5F0(v194, &v195, v95, (__int64)v194, 0, v94)
            || a6 == (unsigned int)sub_B76070(v195, (__int64)&v195, v95, (__int64)v102) )
          {
            v146 = v194;
            if ( (*((_BYTE *)v194 + 82) & 0x20) != 0 )
            {
              if ( a6 )
              {
LABEL_163:
                if ( (*((_BYTE *)v146 + 29) & 2) == 0
                  && (unsigned __int8)sub_FD3830(
                                        *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                                        0x1CDBu,
                                        *((unsigned int *)v146 + 6),
                                        *(_QWORD *)(a1 + 264),
                                        v101,
                                        v94) != 1 )
                {
                  goto LABEL_165;
                }
                v192 = 0;
LABEL_166:
                if ( (_DWORD)a6 )
                {
                  for ( j = 0; ; ++j )
                  {
                    v150 = (char *)a5[j];
                    v196 = (unsigned __int64)v150;
                    if ( v192 && *(unsigned __int16 *)(v192 + 22) > (unsigned int)j )
                    {
                      v151 = 0;
                      if ( (*(_BYTE *)(v192 + 19) & 0x20) != 0 )
                        v151 = 4LL * ((*(_BYTE *)(sub_18BCBB0(v192) + j) & 0x10) != 0);
                      v152 = *(_QWORD *)(v192 + 8 * j + 48);
                      v153 = *(_QWORD **)(a1 + 248);
                      v186 = v151;
                      v198 = 0;
                      v200 = 0;
                      LODWORD(v197) = 1;
                      v154 = sub_A73320(v153, v152);
                      v150 = (char *)&v197;
                      v199 = (unsigned __int64 *)v154;
                      v201 = v186;
                      result = sub_1A24E20(a1, &v197, 0, v196, 0, 0);
                      if ( result == 1 )
                        return result;
                    }
                    else
                    {
                      result = sub_19245F0(a1, v150, v95, (__int64)v102, v101, v94, a7, a8);
                      if ( result == 1 )
                        return 1;
                    }
                    v196 = result & 0xFFFFFFFFFFFFFFFELL;
                    v185 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
                    v149 = sub_EEB7E0(result & 0xFFFFFFFFFFFFFFFELL, (__int64)v150, *(double *)a7.m128_u64);
                    LODWORD(v198) = 3380;
                    v199 = &v196;
                    v197 = off_2BC64D8;
                    if ( (unsigned __int8)sub_1E63C20(a1, v149, v185, 1, &v197) )
                      return 1;
                    v95 = v196;
                    *(_QWORD *)(8 * j + v47 + 8 * (((*(_BYTE *)(v47 + 2) & 8) != 0) + 1LL) + 32) = v196;
                    if ( j == (_DWORD)a6 - 1 )
                      break;
                  }
                }
                goto LABEL_225;
              }
LABEL_245:
              v192 = 0;
LABEL_225:
              v103 = v47 + 40;
              v168 = sub_B643A0(v47, (_DWORD **)(v47 + 40), (*(_BYTE *)(v47 + 2) & 8) != 0);
              v104 = (unsigned int)(v168 << 6);
              *(_BYTE *)(v47 + 1) = ((_BYTE)v168 << 6) | *(_BYTE *)(v47 + 1) & 0x3F;
              *(_BYTE *)(v47 + 2) = *(_BYTE *)(v47 + 2) & 0xF8 | ((unsigned __int8)v168 >> 2) & 7;
              v190 = v192;
LABEL_93:
              if ( !v194 || (*((_BYTE *)v194 + 28) & 0x7Fu) - 35 > 3 || !(unsigned __int8)sub_B98200(v194, v103) )
              {
                if ( v12 )
                  sub_18CE000((__int64 *)a1, v12, a4, (__int64)a5, a6, v106, (__m128i)a7, *(double *)a8.m128_u64);
                if ( *(__int16 *)(v188 + 20) < 0 )
                {
                  v107 = 0;
                  LODWORD(v195) = 0;
                  if ( (_DWORD)a6 )
                  {
                    v108 = (__int64 *)(a1 + 8);
                    do
                    {
                      v109 = (__int64 *)(*(_QWORD *)&byte_8[*(_QWORD *)(a5[v107] + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                       & 0xFFFFFFFFFFFFFFF0LL);
                      if ( *(_BYTE *)(*v109 + 16) == 48 )
                      {
                        v110 = sub_F60F10(*v109, (__int64)v108, (__int64)v109, v104, v105, v106);
                        if ( (unsigned __int8)sub_B7EA10(v110, (__int64)v108, v111, v112, v113, v114) )
                        {
                          v115 = sub_EEB7E0(a5[(unsigned int)v195], (__int64)v108, *(double *)a7.m128_u64);
                          sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), v115, 0x1A0Fu, 0);
                          LODWORD(v196) = 0;
                          v116 = sub_1587D10((__int64)&v197, (int *)&v196);
                          v108 = &v195;
                          sub_1588370(v116, (unsigned int *)&v195);
                          sub_15F7200(&v197);
                        }
                        v107 = v195;
                      }
                      LODWORD(v195) = ++v107;
                    }
                    while ( v107 != (_DWORD)a6 );
                  }
                }
                if ( v194 )
                {
                  if ( (unsigned __int8)sub_16F8E60(
                                          (__int64 *)a1,
                                          (__int64)v194,
                                          v47,
                                          v190,
                                          (__m128i)a7,
                                          *(double *)a8.m128_u64) )
                    return 1;
                  sub_16C86A0(a1, (__int64)v194, (_DWORD *)v47, v162, v163, v164);
                  if ( v177 )
                    return sub_16FA060(a1, v194, v177, v47);
                }
                else if ( v12 )
                {
                  if ( (unsigned __int8)sub_16EB2C0(a1, v12, v47, v190, (__m128i)a7) )
                    return 1;
                }
                else if ( (unsigned __int8)sub_16EB250(a1, v47, v190, (__m128i)a7) )
                {
                  return 1;
                }
                v165 = v194;
                v166 = sub_19A3E40(a1, v47);
                return sub_18C3A50(a1, v166, (__int64)v165);
              }
              sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), a4, 0x102Eu, 0);
              v196 = sub_EEC8C0(v34, a1 + 8, *(double *)a7.m128_u64);
              v174 = sub_1587DB0((__int64)&v197, (__int64 *)&v196);
              LODWORD(v195) = 0;
              sub_1587D10(v174, (int *)&v195);
LABEL_221:
              sub_15F7200(&v197);
              return 1;
            }
            if ( (*((_BYTE *)v194 + 82) & 0x10) != 0 )
            {
LABEL_235:
              if ( a6 )
              {
                v146 = v194;
                if ( !v194 )
                {
LABEL_165:
                  sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), a4, 0x1CDBu, 0);
                  LOBYTE(v196) = v194 != nullptr;
                  v147 = sub_1588420((__int64)&v197, (unsigned __int8 *)&v196);
                  sub_1795A40(v147, (__int64 *)&v194);
                  sub_15F7200(&v197);
                  v192 = 0;
                  goto LABEL_166;
                }
                goto LABEL_163;
              }
              goto LABEL_245;
            }
          }
          else
          {
            v170 = *(_QWORD *)(*(_QWORD *)(v195 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v192 = v170;
            if ( (*(_BYTE *)(v170 + 16) == 26 || (v192 = sub_18BBDA0(v170, (__int64)&v195, v95, (__int64)v102)) != 0)
              && *(char *)(v192 + 19) < 0
              && a6 >= (unsigned int)sub_B76070(v195, (__int64)&v195, v95, (__int64)v102) )
            {
              v146 = v194;
              v95 = v194[10] >> 16;
              if ( (v194[10] & 0x200000LL) != 0 )
                goto LABEL_166;
              LOBYTE(v95) = WORD1(v194[10]) & 0x10;
              if ( (_BYTE)v95 )
                goto LABEL_166;
            }
            else
            {
              sub_168B9F0((__int64)&v197, (__int64 *)(a1 + 8), a9, 0x19F6u, 0);
              v193 = a6 > (unsigned int)sub_B76070(v195, a1 + 8, v171, v172);
              v173 = sub_1588420((__int64)&v197, (unsigned __int8 *)&v193);
              v187 = sub_1795A40(v173, (__int64 *)&v194);
              v145 = &v196;
              v196 = sub_EEC8C0(v34, (__int64)&v194, *(double *)a7.m128_u64);
              sub_1587DB0(v187, (__int64 *)&v196);
              sub_15F7200(&v197);
              v146 = v194;
              v95 = v194[10] >> 16;
              if ( (v194[10] & 0x200000LL) != 0 )
                goto LABEL_234;
              v95 = (v194[10] >> 16) & 0x10LL;
              if ( (_DWORD)v95 )
                goto LABEL_234;
            }
          }
          v169 = *(_QWORD *)(v146[6] & 0xFFFFFFFFFFFFFFF0LL);
          v192 = v169;
          if ( *(_BYTE *)(v169 + 16) == 26 )
            goto LABEL_166;
          v192 = sub_18BBDA0(v169, (__int64)v145, v95, (__int64)v102);
LABEL_234:
          if ( v192 )
            goto LABEL_166;
          goto LABEL_235;
        }
        v84 = (__int64 *)(a1 + 8);
        v85 = 4085;
LABEL_73:
        sub_168B9F0((__int64)&v197, v84, a4, v85, 0);
        v52 = &v195;
        v195 = *(_QWORD *)(v34 + 8);
        v53 = sub_162B6D0((__int64)&v197, &v195);
        goto LABEL_29;
      }
      if ( !sub_F63050(v144, v90, v48, v45) )
      {
        v90 = *(_QWORD *)(v188 + 24);
        goto LABEL_213;
      }
      goto LABEL_81;
    }
    if ( !v194 || (*((_BYTE *)v194 + 29) & 1) == 0 )
      goto LABEL_82;
    v86 = sub_B8C3D0((__int64)v194, v44, v48, v45, (__int64)v194, v46);
    v87 = *v86;
    v88 = *v86 + 8LL * *((unsigned int *)v86 + 2);
    if ( *v86 >= v88 )
    {
      if ( v87 == v88 )
      {
LABEL_81:
        v49 = v194;
        goto LABEL_82;
      }
      while ( *(_WORD *)(*(_QWORD *)v88 + 36LL) != 163 )
      {
        v88 += 8LL;
        if ( v87 == v88 )
          goto LABEL_81;
      }
    }
    else
    {
      v89 = *v86;
      while ( *(_WORD *)(*(_QWORD *)v89 + 36LL) != 163 )
      {
        v89 += 8LL;
        if ( v88 == v89 )
          goto LABEL_81;
      }
      if ( v88 == v89 )
        goto LABEL_81;
    }
    v50 = (__int64 *)(a1 + 8);
    v51 = 3877;
    goto LABEL_28;
  }
  v125 = sub_16FA060(a1, v194, v177, v47);
  if ( v125 != 1 )
  {
    v126 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v177);
    if ( strchr(v126, 71) )
      return sub_18C3A50(a1, v125, (__int64)v194);
  }
  return v125;
}
