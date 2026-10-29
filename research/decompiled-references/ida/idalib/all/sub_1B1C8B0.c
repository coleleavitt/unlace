__m128 *__fastcall sub_1B1C8B0(
        __m128 *a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v10; // r14
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  char v44; // al
  __int64 *v45; // r15
  unsigned __int64 *v46; // rax
  __int64 *v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // r13
  unsigned __int64 v58; // rax
  __int64 v59; // r13
  __int64 *v60; // rax
  size_t v61; // rax
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  const void *v69; // r8
  signed __int64 v70; // rax
  unsigned __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rsi
  __int64 v77; // r13
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // eax
  __int64 v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rbp
  unsigned __int16 *v86; // rax
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rax
  unsigned int v89; // eax
  __int64 *v90; // r15
  int *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rbp
  __int64 *v94; // rax
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 *v97; // rcx
  __int64 *v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // rax
  __int64 v105; // rcx
  unsigned __int64 v106; // rax
  __int64 v107; // r15
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rsi
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  char v121; // bp
  unsigned __int64 v122; // rax
  __int64 v123; // rdi
  unsigned int v124; // eax
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned int v127; // edx
  unsigned int v128; // ecx
  __int64 v129; // r13
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // r15
  unsigned int v139; // eax
  __int64 v140; // r9
  unsigned __int64 v141; // r15
  unsigned int v142; // eax
  __int64 v143; // rax
  __int64 v144; // [rsp-10h] [rbp-2B8h]
  __int64 v145; // [rsp-8h] [rbp-2B0h]
  double v146; // [rsp+8h] [rbp-2A0h] BYREF
  unsigned int v147; // [rsp+14h] [rbp-294h]
  __int64 *v148; // [rsp+18h] [rbp-290h]
  __int64 *p_ptr; // [rsp+20h] [rbp-288h] BYREF
  unsigned __int64 v150; // [rsp+28h] [rbp-280h]
  unsigned __int64 v151; // [rsp+30h] [rbp-278h]
  __int64 v152; // [rsp+38h] [rbp-270h]
  __int64 v153; // [rsp+40h] [rbp-268h]
  signed __int64 v154; // [rsp+48h] [rbp-260h]
  char v155; // [rsp+5Fh] [rbp-249h] BYREF
  int v156; // [rsp+60h] [rbp-248h] BYREF
  _BOOL4 v157; // [rsp+64h] [rbp-244h] BYREF
  __int64 v158; // [rsp+68h] [rbp-240h] BYREF
  __int64 *v159; // [rsp+70h] [rbp-238h] BYREF
  unsigned __int64 v160; // [rsp+78h] [rbp-230h] BYREF
  unsigned __int64 v161; // [rsp+80h] [rbp-228h] BYREF
  unsigned __int64 v162; // [rsp+88h] [rbp-220h]
  int v163; // [rsp+90h] [rbp-218h]
  _BYTE *v164; // [rsp+A0h] [rbp-208h] BYREF
  unsigned __int64 v165; // [rsp+A8h] [rbp-200h]
  unsigned __int64 v166; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned __int64 v167; // [rsp+C8h] [rbp-1E0h]
  int v168; // [rsp+D0h] [rbp-1D8h]
  void *ptr; // [rsp+E0h] [rbp-1C8h] BYREF
  unsigned __int64 v170; // [rsp+E8h] [rbp-1C0h]
  unsigned __int64 v171; // [rsp+F0h] [rbp-1B8h] BYREF
  int v172; // [rsp+F8h] [rbp-1B0h]
  __m128 v173; // [rsp+130h] [rbp-178h] BYREF
  unsigned __int64 v174; // [rsp+140h] [rbp-168h]
  int v175; // [rsp+148h] [rbp-160h]
  __int64 (__fastcall *v176)(); // [rsp+1C0h] [rbp-E8h] BYREF
  char *v177; // [rsp+1C8h] [rbp-E0h]
  unsigned __int64 v178; // [rsp+1D0h] [rbp-D8h]
  char v179; // [rsp+1D8h] [rbp-D0h]

  v10 = a3;
  v147 = a6;
  v146 = (_QWORD *)sub_168B6C0((__int64)a2);
  if ( !a3 )
    goto LABEL_37;
  v156 = 1;
  if ( (a3 & 1) != 0 )
  {
    v25 = a9;
    v26 = 4618;
LABEL_17:
    sub_168B9F0((__int64)&v176, a2, v25, v26, 0);
    v27 = sub_16CF4F0((__int64)&v176, &v156);
    sub_15884C0(v27, &a9);
    sub_15F7200(&v176);
    a1[1].m128_i8[0] = 0;
    return a1;
  }
  v15 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( v15 == 71 )
  {
    v10 = *(_QWORD *)(v10 + 48);
    v15 = *(_BYTE *)(v10 + 28) & 0x7F;
  }
  if ( (unsigned int)v15 - 34 > 5 )
  {
    v25 = *(_DWORD *)(v10 + 24);
    v26 = 4500;
    goto LABEL_17;
  }
  if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) + 84) < 0 )
    goto LABEL_43;
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    goto LABEL_8;
  v46 = sub_B8C3D0(v10, (__int64)a2, v16, v17, v18, v19);
  v47 = (__int64 *)*v46;
  v48 = *v46 + 8LL * *((unsigned int *)v46 + 2);
  if ( *v46 >= v48 )
  {
    if ( v47 == (__int64 *)v48 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 376 )
    {
      v52 = (__int64 *)(v48 + 8);
      while ( v47 != v52 )
      {
        v53 = *v52++;
        if ( *(_WORD *)(v53 + 36) == 376 )
          goto LABEL_43;
      }
      goto LABEL_8;
    }
LABEL_43:
    sub_168B9F0((__int64)&v176, a2, *(_DWORD *)(v10 + 24), 0x116Du, 0);
    sub_15884C0((__int64)&v176, &a9);
    sub_15F7200(&v176);
    a1[1].m128_i8[0] = 0;
    return a1;
  }
  v49 = *v46;
  while ( *(_WORD *)(*(_QWORD *)v49 + 36LL) != 376 )
  {
    v49 += 8LL;
    if ( v48 == v49 )
      goto LABEL_8;
  }
  if ( v48 != v49 )
    goto LABEL_43;
LABEL_8:
  v20 = nullptr;
  if ( sub_B8C400(v10, 0) )
  {
    sub_168B9F0((__int64)&v176, a2, a9, 0x1C30u, 0);
    v20 = &v173;
    v173.m128_i32[0] = *(_DWORD *)(v10 + 24);
    sub_180D980((__int64)&v176, (int *)&v173);
    sub_15F7200(&v176);
  }
  v24 = *(_QWORD *)(v10 + 80);
  if ( ((*(_BYTE *)(v10 + 82) & 0x40) == 0 || (v24 & 0x2000000) != 0)
    && (v24 & 0x2000000) == 0
    && ((*(_BYTE *)(v10 + 83) & 8) != 0 || (*(_BYTE *)(v10 + 128) & 1) == 0 && !*(_QWORD *)(v10 + 128))
    && (*(_BYTE *)(v10 + 83) & 0x40) == 0 )
  {
    v50 = HIDWORD(v24);
    if ( (v50 & 0x20) == 0
      && (v50 & 0x40) == 0
      && !sub_B8CF80(v10, (__int64)v20, *(_BYTE *)(v10 + 83) & 0x40, v21, v22, v23)
      && (unsigned __int8)sub_B7D390(v10, (__int64)&v158, 0, v51)
      && (*(char *)(sub_168B6E0((__int64)a2) + 20) < 0 || (unsigned __int8)sub_A7C0A0((__int64)v146, v158)) )
    {
      sub_168B9F0((__int64)&v176, a2, a9, 0x1C2Fu, 0);
      v173.m128_i32[0] = *(_DWORD *)(v10 + 24);
      sub_180D980((__int64)&v176, (int *)&v173);
      sub_15F7200(&v176);
    }
  }
  if ( !a4 )
  {
    sub_168B9F0((__int64)&v176, a2, a9, 0x1194u, 0);
    sub_16CF4F0((__int64)&v176, &v156);
    sub_15F7200(&v176);
    a1[1].m128_i8[0] = 0;
    return a1;
  }
  if ( (unsigned __int8)sub_B8E180(v10 + 72)
    || (*(_DWORD *)a4 & 0x3C000) != 0
    || (v54 = *(unsigned int *)(a5 + 8),
        v55 = *(_QWORD *)a5,
        v176 = (__int64 (__fastcall *)())sub_1AE6690,
        v177 = &v155,
        p_ptr = (__int64 *)(v55 + 136 * v54),
        v148 = (__int64 *)&v176,
        (__int64 *)sub_1AEBA20(v55, (__int64)p_ptr, (__int64)&v176) != p_ptr) )
  {
    v146 = a4;
    a1[1].m128_i8[0] = 1;
    *a1 = _mm_loadh_ps((const double *)&v146);
    return a1;
  }
  v56 = *(_QWORD *)a5;
  v57 = *(unsigned int *)(a5 + 8);
  v159 = a2;
  v176 = sub_1B23260;
  v177 = (char *)&v159;
  if ( sub_1AEBA20(v56, v56 + 136 * v57, (__int64)v148) != v56 + 136 * v57 )
  {
LABEL_37:
    a1[1].m128_i8[0] = 0;
    return a1;
  }
  v58 = *(_QWORD *)(v10 + 48);
  v150 = v58;
  if ( v147 )
  {
    v59 = sub_1AF6460(*(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v59 )
    {
      sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Fu, 0);
      sub_15884C0((__int64)v148, &a9);
      sub_15F7200(v148);
      a1[1].m128_i8[0] = 0;
      return a1;
    }
    v60 = (__int64 *)v146[2188];
    LODWORD(v150) = a9;
    p_ptr = v60;
    v61 = j__strlen("omp_interop_t");
    v62 = sub_6F3470((__int64)p_ptr, "omp_interop_t", v61);
    sub_1AE96C0((__int64)v148, *a2, v62, v150, 0);
    if ( (unsigned __int8)sub_1A49A10(
                            *a2,
                            (__int64)v148,
                            *(__int64 **)(*a2 + 608),
                            0,
                            0,
                            v63,
                            *(double *)a7.m128_u64,
                            *(double *)a8.m128_u64)
      && (v64 = sub_16C47B0(*(_QWORD *)v177 & 0xFFFFFFFFFFFFFFF8LL)) != 0
      && (*(_BYTE *)(v64 + 28) & 0x7Fu) - 58 <= 9 )
    {
      v68 = *(_QWORD *)(v64 + 48);
      if ( v68 )
        v150 = v68 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v150 = sub_A7AA70((__int64)v146, v64, 0, v65, v66, v67);
      if ( *(char *)(v59 + 19) >= 0 )
      {
        p_ptr = (__int64 *)&ptr;
        v69 = (const void *)(v59 + 48);
        ptr = &v171;
        v170 = 0x800000000LL;
        v70 = 8LL * *(unsigned __int16 *)(v59 + 22);
        v152 = v59 + v70 + 48;
        v151 = v70 >> 3;
        if ( (unsigned __int64)v70 > 0x40 )
        {
          v154 = v70;
          v153 = v59 + 48;
          sub_2237220(p_ptr, &v171, v151, 8);
          v70 = v154;
          v69 = (const void *)(v59 + 48);
        }
        if ( v69 != (const void *)v152 )
          memcpy((char *)ptr + 8 * (unsigned int)v170, v69, v70);
        LODWORD(v170) = v151 + v170;
        sub_1AF6580(p_ptr, (char *)ptr + 8 * (unsigned int)v170, v147, v150);
        sub_A5E110(&v173, v59);
        v150 = sub_A73610(
                 (__int64)v146,
                 *(_QWORD *)(v59 + 24),
                 (__int64 *)ptr,
                 (unsigned int)v170,
                 (const __m128i *)&v173,
                 0);
        if ( ptr != p_ptr + 2 )
          free(ptr);
        sub_169D230((__int64)v148);
        goto LABEL_82;
      }
      v127 = *(_DWORD *)(v10 + 24);
      v128 = 4426;
    }
    else
    {
      v128 = 4513;
      v127 = a9;
    }
    sub_168B9F0((__int64)&v173, a2, v127, v128, 0);
    sub_15884C0((__int64)&v173, &a9);
    sub_15F7200(&v173);
    a1[1].m128_i8[0] = 0;
    sub_169D230((__int64)v148);
    return a1;
  }
LABEL_82:
  v71 = (unsigned __int64)a4;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a2) + 1) & 8) == 0 )
    goto LABEL_101;
  v160 = 0;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35 > 3 )
  {
    p_ptr = nullptr;
  }
  else
  {
    if ( !sub_B979F0((_QWORD *)v10) )
    {
      v131 = sub_B72690(v10 + 72);
      if ( v131 )
        v131 -= 64LL;
      v134 = sub_ABBA20(v146, v150, 0, v131, v132, v133);
      v135 = *a2;
      v160 = v134;
      v136 = v135;
      v176 = (__int64 (__fastcall *)())v135;
      sub_1AE9670((__int64)(v148 + 1), v135);
      v179 = *(_BYTE *)(v137 + 10024);
      *(_BYTE *)(v137 + 10024) = 1;
      v138 = *a2;
      v139 = sub_EEB7E0((unsigned __int64)a4, v136, *(double *)a7.m128_u64);
      v87 = v139;
      v141 = sub_19249E0(v138, v139, 4u, (unsigned __int64)a4, 0, v140, a7, a8);
      sub_1AF2A30((__int64)v148);
      if ( v141 <= 1 )
        goto LABEL_102;
      p_ptr = (__int64 *)v10;
      a4 = (_QWORD *)(v141 & 0xFFFFFFFFFFFFFFFELL);
      goto LABEL_87;
    }
    p_ptr = (__int64 *)v10;
  }
  v160 = sub_A70010((__int64)v146, v150);
LABEL_87:
  v76 = a4[1];
  v161 = sub_A70010((__int64)v146, v76);
  v151 = sub_6D5440(&v160);
  if ( sub_6D5440(&v161) != v151 )
  {
    v77 = *a2;
    v78 = sub_6D5440(&v160);
    sub_1BFA460((_DWORD)v148, v77, (_DWORD)a4, v78, 0, 0, 0, 0, 0, v76);
    if ( (((_DWORD)v176 + 2147483645) & 0x7FFFFFFD) == 0 )
    {
      v82 = sub_C00A40((unsigned __int64)a4, v77, v79, v80, v81);
      sub_168B9F0((__int64)&v173, a2, v82, 0x116Eu, 0);
      v164 = (_BYTE *)a4[1];
      v83 = sub_162B6D0((__int64)&v173, (__int64 *)&v164);
      if ( !p_ptr || sub_B979F0(p_ptr) )
        v166 = *(_QWORD *)(v10 + 48);
      else
        v166 = v160;
      v84 = sub_162B6D0(v83, (__int64 *)&v166);
      v157 = v147 != 0;
      v85 = sub_1587D10(v84, (int *)&v157);
      ptr = (void *)sub_EEC8C0((unsigned __int64)a4, (__int64)&v157, *(double *)a7.m128_u64);
      sub_1587DB0(v85, (__int64 *)&ptr);
      sub_15F7200(&v173);
      a1[1].m128_i8[0] = 0;
      goto LABEL_93;
    }
    v129 = *a2;
    v130 = sub_6D5440(&v160);
    v71 = sub_1BFA490(v129, a4, v130, 3, 0);
    if ( v71 <= 1 )
    {
      a1[1].m128_i8[0] = 0;
LABEL_93:
      if ( ((unsigned int)v176 & 0x7FFFFFFF) == 3 )
        sub_1BD22E0(v148 + 2);
      return a1;
    }
    if ( ((unsigned int)v176 & 0x7FFFFFFF) == 3 )
      sub_1BD22E0(v148 + 2);
  }
  if ( p_ptr )
  {
    if ( !sub_B979F0(p_ptr) )
    {
      v86 = (unsigned __int16 *)sub_BFB900(v71 & 0xFFFFFFFFFFFFFFFELL);
      v72 = *v86;
      LOWORD(v72) = v72 & 0x1FF;
      if ( (_WORD)v72 == 4 )
        v71 = *((_QWORD *)v86 + 2);
    }
  }
LABEL_101:
  v87 = v71 & 0xFFFFFFFFFFFFFFFELL;
  v88 = sub_1907C70(*a2, (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, v72, v73, v74, v75);
  if ( v88 <= 1
    || (v29 = v88 & 0xFFFFFFFFFFFFFFFELL,
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BFBAE0(v88 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8)
                                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                                 + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL)
      - 25 > 1)
    || (p_ptr = (__int64 *)sub_BFBAE0(v29), LOWORD(v151) = *(_WORD *)p_ptr, (v151 & 0x1FF) != 0x47)
    || (v33 = p_ptr[2]) == 0
    || (*(_BYTE *)(v33 + 28) & 0x7Fu) - 34 > 5 )
  {
LABEL_102:
    v89 = sub_C00A40((unsigned __int64)a4, v87, v30, v31, v32);
    v90 = v148;
    sub_168B9F0((__int64)v148, a2, v89, 0x1194u, 0);
    v91 = &v156;
    v92 = sub_16CF4F0((__int64)v148, &v156);
    goto LABEL_103;
  }
  v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  if ( v34 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33) )
  {
    v142 = sub_C00A40((unsigned __int64)a4, v87, v35, v36, v37);
    sub_168B9F0((__int64)v148, a2, v142, 0x1170u, 0);
    v173.m128_u64[0] = sub_EEC8C0((unsigned __int64)a4, (__int64)a2, *(double *)a7.m128_u64);
    sub_1587DB0((__int64)v148, (__int64 *)&v173);
    sub_15F7200(v148);
    a1[1].m128_i8[0] = 0;
    return a1;
  }
  v38 = sub_168B6E0((__int64)a2);
  if ( (*(_BYTE *)(v38 + 1) & 8) == 0 )
  {
    v145 = v38;
    v87 = v150;
    v106 = sub_AAA8C0((__int64)v146, v150, *(_QWORD *)(v33 + 48), 0, 0, 0, 0);
    v39 = v144;
    v40 = v145;
    v107 = v106;
    v108 = v106 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v108 )
    {
      v109 = *(_QWORD *)v108;
      if ( *(_BYTE *)(*(_QWORD *)v108 + 16LL) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v109 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F63050(v109, v150, v144, v145) )
      {
        v110 = *(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL;
        v111 = *(_QWORD *)v110;
        if ( *(_BYTE *)(*(_QWORD *)v110 + 16LL) == 25
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v111 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25
          && sub_F63050(v111, v150, v39, v40) )
        {
          v87 = v10;
          sub_1AE9E10(*a2, v10, v33, v107);
        }
        else
        {
          v122 = *(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v123 = *(_QWORD *)v122;
          if ( *(_BYTE *)(*(_QWORD *)v122 + 16LL) == 25
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25
            && sub_F63050(v123, v150, v39, v40) )
          {
            v87 = v33;
            sub_1AE9E10(*a2, v33, v10, v107);
          }
        }
      }
      goto LABEL_25;
    }
    v124 = sub_C00A40((unsigned __int64)a4, v150, v144, v145, v41);
    v90 = v148;
    sub_168B9F0((__int64)v148, a2, v124, 0x116Eu, 0);
    v166 = *(_QWORD *)(v33 + 48);
    v125 = sub_162B6D0((__int64)v148, (__int64 *)&v166);
    ptr = *(void **)(v10 + 48);
    v126 = sub_162B6D0(v125, (__int64 *)&ptr);
    v91 = (int *)&v164;
    LODWORD(v164) = v147 != 0;
    v92 = sub_1587D10(v126, (int *)&v164);
LABEL_103:
    v93 = v92;
    v173.m128_u64[0] = sub_EEC8C0((unsigned __int64)a4, (__int64)v91, *(double *)a7.m128_u64);
    sub_1587DB0(v93, (__int64 *)&v173);
    sub_15F7200(v90);
    a1[1].m128_i8[0] = 0;
    return a1;
  }
LABEL_25:
  if ( (*(_BYTE *)(v33 + 29) & 1) == 0 )
    goto LABEL_26;
  v94 = sub_B8C3D0(v33, v87, v39, v40, v41, v42);
  v96 = *v94;
  v97 = (__int64 *)(*v94 + 8LL * *((unsigned int *)v94 + 2));
  if ( *v94 >= (unsigned __int64)v97 )
  {
    while ( (__int64 *)v96 != v97 )
    {
      v143 = *v97++;
      if ( *(_WORD *)(v143 + 36) == 296 )
        goto LABEL_111;
    }
LABEL_26:
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 35 > 3 )
      goto LABEL_32;
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
    if ( (*(_QWORD *)(v43 + 80) & 0x40000LL) != 0
      || (*(_QWORD *)(v43 + 80) & 0x80000LL) != 0
      || (unsigned int)sub_B984E0(v43) )
    {
      v45 = v148;
      sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
      v173.m128_i32[0] = 1;
    }
    else
    {
      v44 = *(_BYTE *)(v10 + 28) & 0x7F;
      if ( v44 == 38 )
      {
        v45 = v148;
        sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
        v173.m128_i32[0] = 3;
      }
      else
      {
        if ( v44 != 36 )
        {
LABEL_32:
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) + 82) & 0x40) != 0 )
          {
            v45 = v148;
            sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
            v173.m128_i32[0] = 5;
          }
          else if ( (*(_BYTE *)(v10 + 83) & 2) != 0 )
          {
            v45 = v148;
            sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
            v173.m128_i32[0] = 6;
          }
          else
          {
            if ( (*(_BYTE *)(v10 + 84) & 3) == 0 )
            {
              v112 = *a2 + 8;
              v146 = (_QWORD *)*a2;
              sub_168B9B0((__int64)&v164, v112, 4459);
              v113 = *(_DWORD *)(v10 + 24);
              LOBYTE(v177) = 1;
              LODWORD(v176) = v113;
              HIDWORD(v176) = v113;
              sub_AEC610((__int64 *)&v164, v148);
              LODWORD(v176) = sub_C00A40((unsigned __int64)a4, (__int64)v148, v114, v115, v116);
              sub_1582CA0((__int64)(v148 + 1), &v164);
              v117 = *a2 + 8;
              sub_168B9B0((__int64)&v161, v117, 4460);
              v173.m128_i32[0] = sub_C00A40((unsigned __int64)a4, v117, v118, v119, v120);
              LODWORD(ptr) = 0;
              v175 = v163;
              v170 = 0;
              v174 = v162;
              v171 = 0;
              v173.m128_u64[1] = v161;
              v161 = 0;
              v172 = 0;
              v166 = 0;
              v167 = 0;
              v168 = 0;
              v121 = sub_17B4990(
                       (__int64)v146,
                       v10,
                       v33,
                       (__int64)&v166,
                       (unsigned int *)&ptr,
                       (unsigned int *)&v173,
                       (unsigned int *)v148,
                       1u,
                       0,
                       1);
              if ( v166 && v167 )
                sub_1580C40(v167, v166);
              if ( v170 && v171 )
                sub_1580C40(v171, v170);
              if ( v173.m128_u64[1] && v174 )
                sub_1580C40(v174, v173.m128_u64[1]);
              if ( v161 && v162 )
                sub_1580C40(v162, v161);
              if ( v177 && v178 )
                sub_1580C40(v178, (unsigned __int64)v177);
              if ( v164 && v165 )
                sub_1580C40(v165, (unsigned __int64)v164);
              if ( !v121 )
              {
                v146 = (_QWORD *)v10;
                a1[1].m128_i8[0] = 1;
                *a1 = _mm_loadh_ps((const double *)&p_ptr);
                return a1;
              }
              goto LABEL_37;
            }
            v45 = v148;
            sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
            v173.m128_i32[0] = ((*(_BYTE *)(v33 + 84) & 3) == 2) + 7;
          }
          goto LABEL_36;
        }
        v45 = v148;
        sub_168B9F0((__int64)v148, a2, *(_DWORD *)(v10 + 24), 0x116Cu, 0);
        v173.m128_i32[0] = 4;
      }
    }
LABEL_36:
    sub_1B1C800((__int64)v45, (int *)&v173);
    sub_15F7200(v45);
    goto LABEL_37;
  }
  v98 = (__int64 *)*v94;
  while ( 1 )
  {
    v96 = *v98;
    if ( *(_WORD *)(*v98 + 36) == 296 )
      break;
    if ( v97 == ++v98 )
      goto LABEL_26;
  }
  if ( v97 == v98 )
    goto LABEL_26;
LABEL_111:
  v99 = sub_C00A40((unsigned __int64)a4, v87, v96, (__int64)v97, v95);
  sub_168B9F0((__int64)v148, a2, v99, 0x1C31u, 0);
  v173.m128_u64[0] = sub_EEC8C0((unsigned __int64)a4, (__int64)a2, *(double *)a7.m128_u64);
  sub_1587DB0((__int64)v148, (__int64 *)&v173);
  sub_15F7200(v148);
  v104 = nullptr;
  if ( (*(_BYTE *)(v33 + 29) & 1) != 0 )
    v104 = (__int64 *)*sub_B8C3D0(v33, (__int64)&v173, v100, v101, v102, v103);
  do
    v105 = *v104++;
  while ( *(_WORD *)(v105 + 36) != 296 );
  v173.m128_u64[0] = *(_QWORD *)(v105 + 24);
  sub_168B9F0((__int64)v148, a2, v173.m128_u32[0], 0x1821u, 0);
  sub_15884C0((__int64)v148, (__int64 *)&v173);
  sub_15F7200(v148);
  a1[1].m128_i8[0] = 0;
  return a1;
}
