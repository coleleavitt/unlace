__int64 __fastcall sub_8BCD40(__int64 a1, __int64 a2, __int64 *a3, __int64 **a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 *v12; // r12
  __int16 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  char v16; // al
  __int16 v17; // ax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  char v20; // dl
  unsigned __int16 v21; // dx
  char v22; // al
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // al
  __int64 *v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned int v31; // r14d
  __int64 v32; // rdx
  void *v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // r12d
  int v38; // edx
  char v39; // bp
  unsigned int v40; // ebp
  int v41; // edx
  __int8 v42; // r12
  _BYTE *v43; // rax
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rsi
  _BYTE *v51; // rax
  char v52; // r12
  char v53; // al
  char v54; // al
  __int64 v55; // rdx
  char v56; // al
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  _BYTE *v63; // rax
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rsi
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 *v70; // rdx
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r9d
  char v74; // al
  __int64 v75; // rcx
  int v76; // r8d
  int v77; // r9d
  __int64 *v78; // rdx
  __int64 v79; // rsi
  char v80; // al
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char v88; // dl
  __int64 *v89; // rbp
  __int64 v90; // rax
  __int64 v91; // rdx
  int v92; // eax
  bool v93; // dl
  __int64 v94; // rsi
  char v95; // al
  __int64 v96; // rsi
  int v97; // eax
  __int64 v98; // rdi
  int v99; // ebx
  __int64 v100; // rdx
  __int64 v101; // rdx
  char v102; // dl
  __int64 v103; // rsi
  __int64 *v104; // rdx
  __int64 v105; // rcx
  int v106; // r8d
  int v107; // r9d
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rsi
  __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rdi
  int v118; // r12d
  __int64 v119; // rsi
  unsigned int v120; // eax
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // r12
  unsigned __int64 v123; // rbp
  __int64 v124; // rdi
  unsigned __int8 **v125; // rdi
  unsigned __int8 **v126; // rdi
  unsigned int v127; // eax
  bool v128; // al
  __int64 v129; // r13
  unsigned __int64 v130; // rdx
  unsigned __int64 v131; // rax
  bool v132; // al
  __int64 v133; // rax
  unsigned int v134; // eax
  __int64 v135; // r8
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rbp
  unsigned __int64 v138; // r13
  unsigned __int64 v139; // rdx
  unsigned __int8 **v140; // rax
  unsigned __int64 v141; // rax
  __int64 v142; // rsi
  unsigned __int8 **v143; // rax
  unsigned __int8 **v144; // rdi
  unsigned __int64 v145; // rsi
  unsigned __int64 v146; // rdx
  char v147; // al
  bool v148; // al
  unsigned __int64 v149; // rdx
  unsigned __int8 v150; // al
  unsigned __int8 **v151; // rdi
  unsigned __int8 **v152; // rax
  unsigned __int8 **v153; // rax
  unsigned __int8 **v154; // r13
  unsigned __int64 v155; // rsi
  unsigned __int64 v156; // rsi
  unsigned __int64 v157; // rax
  __int64 v158; // rsi
  _QWORD *v160; // [rsp+10h] [rbp-208h]
  unsigned __int64 v161; // [rsp+10h] [rbp-208h]
  __int64 v162; // [rsp+10h] [rbp-208h]
  unsigned __int8 v163; // [rsp+28h] [rbp-1F0h]
  unsigned __int8 **v164; // [rsp+28h] [rbp-1F0h]
  __int64 v165; // [rsp+28h] [rbp-1F0h]
  __int64 v166; // [rsp+28h] [rbp-1F0h]
  bool v167; // [rsp+37h] [rbp-1E1h]
  __int64 v168; // [rsp+38h] [rbp-1E0h] BYREF
  __m128i v169; // [rsp+40h] [rbp-1D8h] BYREF
  char v170; // [rsp+50h] [rbp-1C8h]
  void *v171[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 *v172; // [rsp+70h] [rbp-1A8h]
  __m128i *v173; // [rsp+78h] [rbp-1A0h] BYREF
  unsigned int v174; // [rsp+80h] [rbp-198h]
  char v175; // [rsp+84h] [rbp-194h]
  __int64 v176[3]; // [rsp+88h] [rbp-190h] BYREF
  __int64 v177[4]; // [rsp+A0h] [rbp-178h] BYREF
  void *v178[2]; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v179; // [rsp+D0h] [rbp-148h]
  __m128i *v180; // [rsp+D8h] [rbp-140h] BYREF
  int v181; // [rsp+E0h] [rbp-138h]
  char v182; // [rsp+E4h] [rbp-134h]
  __int64 v183; // [rsp+E8h] [rbp-130h] BYREF
  __int64 *v184; // [rsp+F0h] [rbp-128h]
  __int64 v185; // [rsp+F8h] [rbp-120h]
  __int64 v186[8]; // [rsp+100h] [rbp-118h] BYREF
  char v187; // [rsp+141h] [rbp-D7h]
  __m128i v188; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v189; // [rsp+160h] [rbp-B8h]
  _BYTE v190[16]; // [rsp+168h] [rbp-B0h] BYREF
  __int64 v191; // [rsp+178h] [rbp-A0h]
  void *ptr; // [rsp+180h] [rbp-98h]
  __int64 v193; // [rsp+188h] [rbp-90h]
  _BYTE v194[65]; // [rsp+190h] [rbp-88h] BYREF
  char v195; // [rsp+1D1h] [rbp-47h]

  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 16);
  v168 = a2;
  v10 = *(_QWORD *)(v8 + 8);
  v11 = *(_QWORD *)(v9 + 8);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v14 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_BYTE *)(v15 + 16);
  if ( v16 != 13 )
  {
    if ( v16 == 46 )
    {
      v34 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v34 + 74) & 1) == 0 && *(_QWORD *)(v34 + 128) <= 7u )
        goto LABEL_78;
    }
    else if ( v16 != 10 )
    {
      goto LABEL_5;
    }
LABEL_28:
    v18 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v35 = *(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v36 = *(_QWORD *)v35;
    v20 = *(_BYTE *)(*(_QWORD *)v35 + 16LL);
    if ( v20 == 13 )
    {
      v21 = (*(_WORD *)(v36 + 18) >> 3) & 0x1FF;
      if ( ((v21 + 77) & 0x1FFu) > 0x13 )
      {
        v14 = *v12;
        v19 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = *(_BYTE *)(v19 + 16);
        if ( v16 != 13 )
          goto LABEL_7;
LABEL_31:
        v17 = (*(_WORD *)(v19 + 18) >> 3) & 0x1FF;
        goto LABEL_3;
      }
      goto LABEL_72;
    }
    if ( v20 != 46 )
    {
      if ( v20 != 10 )
      {
        v14 = *v12;
        v19 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = *(_BYTE *)(v19 + 16);
        if ( v16 != 13 )
          goto LABEL_51;
        goto LABEL_31;
      }
LABEL_72:
      BYTE4(v178[1]) = 0;
      LODWORD(v178[1]) = 1;
      v178[0] = nullptr;
      v188.m128i_i32[2] = 1;
      v188.m128i_i64[0] = 0;
      v188.m128i_i8[12] = 0;
      if ( !(unsigned __int8)sub_87D880(*(_QWORD *)(v168 + 16), (__int64)v178, a1, v18, a5, a6) )
      {
        v62 = *(unsigned int *)(a1 + 48);
        if ( (_DWORD)v62 )
        {
          v63 = *(_BYTE **)(a1 + 24);
          if ( *(_BYTE *)(a1 + 962) )
          {
            *v63 = 1;
          }
          else
          {
            v102 = *(_BYTE *)(a1 + 963);
            *v63 |= v102;
            if ( !v102 )
              goto LABEL_41;
          }
          sub_87D880(*(_QWORD *)(v168 + 24), (__int64)&v188, a1, v59, v62, v61);
        }
        goto LABEL_41;
      }
      v31 = sub_87D880(*(_QWORD *)(v168 + 24), (__int64)&v188, a1, v59, v60, v61);
      if ( !(_BYTE)v31 )
        goto LABEL_41;
      if ( BYTE4(v178[1]) )
      {
        v97 = sub_25867A0(v178, &v188);
        if ( v97 < 0 )
          goto LABEL_141;
        v93 = v97 != 0;
      }
      else
      {
        v92 = sub_2586820(v178, &v188);
        v93 = v92 != 0;
        if ( v92 < 0 )
          goto LABEL_141;
      }
      v98 = *a3;
      if ( v93 )
        sub_82E660(v98, 3, v168);
      else
        sub_82E660(v98, 2, v168);
      goto LABEL_42;
    }
    v58 = sub_B14A40(v36);
    if ( (*(_BYTE *)(v58 + 74) & 1) != 0 || *(_QWORD *)(v58 + 128) > 7u )
      goto LABEL_72;
LABEL_78:
    v14 = *v12;
    v64 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(v64 + 16);
    if ( v16 != 13 )
      goto LABEL_5;
    v17 = (*(_WORD *)(v64 + 18) >> 3) & 0x1FF;
    goto LABEL_3;
  }
  v17 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
  if ( ((v17 + 77) & 0x1FFu) <= 0x13 )
    goto LABEL_28;
LABEL_3:
  if ( ((v17 + 57) & 0x1FFu) <= 0x17 )
  {
LABEL_32:
    v37 = sub_70B7E0(*(_QWORD *)(a1 + 16), v11);
    LODWORD(v171[1]) = (unsigned __int16)v37;
    v38 = HIBYTE(v37) & 0x20;
    v39 = ((unsigned __int8)v38 >> 5) ^ 1;
    if ( (unsigned __int16)v37 > 0x40u )
    {
      sub_2585A50(v171, 0, (v37 & 0x20000000) != 0);
      v188.m128i_i32[2] = (__int32)v171[1];
      if ( LODWORD(v171[1]) <= 0x40 )
      {
        LODWORD(v178[1]) = v171[1];
        BYTE4(v178[1]) = v39;
        v178[0] = v171[0];
        LODWORD(v179) = v37;
      }
      else
      {
        sub_2585B30(&v188);
        BYTE4(v178[1]) = v39;
        LODWORD(v179) = v37;
        LODWORD(v178[1]) = v188.m128i_i32[2];
        v178[0] = (void *)v188.m128i_i64[0];
        if ( LODWORD(v171[1]) > 0x40 && v171[0] )
          operator delete[](v171[0]);
      }
    }
    else
    {
      LODWORD(v178[1]) = (unsigned __int16)v37;
      v178[0] = nullptr;
      BYTE4(v178[1]) = ((unsigned __int8)v38 >> 5) ^ 1;
      LODWORD(v179) = v37;
    }
    v40 = sub_70B7E0(*(_QWORD *)(a1 + 16), v10);
    v169.m128i_i32[2] = (unsigned __int16)v40;
    v41 = HIBYTE(v40) & 0x20;
    v42 = ((unsigned __int8)v41 >> 5) ^ 1;
    if ( (unsigned __int16)v40 > 0x40u )
    {
      sub_2585A50(&v169, 0, (v40 & 0x20000000) != 0);
      LODWORD(v171[1]) = v169.m128i_i32[2];
      if ( v169.m128i_i32[2] <= 0x40u )
      {
        v188.m128i_i32[2] = v169.m128i_i32[2];
        v188.m128i_i8[12] = v42;
        v188.m128i_i64[0] = v169.m128i_i64[0];
        LODWORD(v189) = v40;
      }
      else
      {
        sub_2585B30(v171);
        v188.m128i_i8[12] = v42;
        LODWORD(v189) = v40;
        v188.m128i_i32[2] = (__int32)v171[1];
        v188.m128i_i64[0] = (__int64)v171[0];
        if ( v169.m128i_i32[2] > 0x40u && v169.m128i_i64[0] )
          operator delete[]((void *)v169.m128i_i64[0]);
      }
    }
    else
    {
      v188.m128i_i32[2] = (unsigned __int16)v40;
      v188.m128i_i64[0] = 0;
      v188.m128i_i8[12] = ((unsigned __int8)v41 >> 5) ^ 1;
      LODWORD(v189) = v40;
    }
    if ( !(unsigned __int8)sub_8AEB10(*(_QWORD *)(v168 + 16), (__int64)v178, a1) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v43 = *(_BYTE **)(a1 + 24);
        if ( *(_BYTE *)(a1 + 962) )
        {
          *v43 = 1;
        }
        else
        {
          v88 = *(_BYTE *)(a1 + 963);
          *v43 |= v88;
          if ( !v88 )
            goto LABEL_41;
        }
        sub_8AEB10(*(_QWORD *)(v168 + 24), (__int64)&v188, a1);
      }
LABEL_41:
      v31 = 0;
      goto LABEL_42;
    }
    v31 = sub_8AEB10(*(_QWORD *)(v168 + 24), (__int64)&v188, a1);
    if ( !(_BYTE)v31 )
      goto LABEL_41;
    if ( (int)sub_256EFC0(v178, &v188) >= 0 )
    {
      v82 = sub_256EFC0(v178, &v188);
      v83 = *a3;
      if ( v82 <= 0 )
        sub_82E660(v83, 2, v168);
      else
        sub_82E660(v83, 3, v168);
      goto LABEL_42;
    }
LABEL_141:
    sub_82E660(*a3, 1, v168);
LABEL_42:
    if ( v188.m128i_i32[2] > 0x40u && v188.m128i_i64[0] )
      operator delete[]((void *)v188.m128i_i64[0]);
    if ( LODWORD(v178[1]) > 0x40 && v178[0] )
      operator delete[](v178[0]);
    return v31;
  }
  v16 = 13;
LABEL_5:
  v18 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_BYTE *)(v19 + 16);
  if ( v20 == 13 )
  {
    v21 = (*(_WORD *)(v19 + 18) >> 3) & 0x1FF;
LABEL_7:
    if ( v21 <= 0x1C6u || v21 > 0x1DEu )
    {
      if ( v16 != 14 )
        goto LABEL_10;
LABEL_53:
      LODWORD(v172) = 1;
      v171[1] = nullptr;
      BYTE4(v172) = 0;
      v174 = 1;
      v173 = nullptr;
      v175 = 0;
      v45 = sub_2575D40();
      v47 = sub_2575D20(v14, v19, v46);
      if ( v45 == v47 )
      {
        sub_257CDE0(v176, v47);
        sub_257CDE0(v177, v47);
        LODWORD(v179) = 1;
        v178[1] = nullptr;
        BYTE4(v179) = 0;
        v181 = 1;
        v180 = nullptr;
        v182 = 0;
        sub_257CDE0(&v183, v47);
        sub_257CDE0(v186, v47);
      }
      else
      {
        sub_2579610(v176);
        sub_2579610(v177);
        LODWORD(v179) = 1;
        v178[1] = nullptr;
        BYTE4(v179) = 0;
        v181 = 1;
        v180 = nullptr;
        v182 = 0;
        sub_2579610(&v183);
        sub_2579610(v186);
      }
      if ( ((*(_WORD *)(v168 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
      {
        v190[0] |= 1u;
        v188 = 0u;
        v189 = 0;
        v191 = 0;
        ptr = v194;
        v193 = 0x800000000LL;
        v195 = 0;
        v48 = *(_QWORD *)(v168 + 16);
        v169.m128i_i64[0] = a1;
        v169.m128i_i64[1] = (__int64)&v188;
        v170 = 0;
        sub_869D30(&v169, v48);
        if ( ptr != v194 )
          free(ptr);
LABEL_58:
        v50 = *(unsigned int *)(a1 + 48);
        if ( (_DWORD)v50 )
        {
          v51 = *(_BYTE **)(a1 + 24);
          if ( *(_BYTE *)(a1 + 962) )
          {
            *v51 = 1;
            goto LABEL_61;
          }
          v49 = *(unsigned __int8 *)(a1 + 963);
          *v51 |= v49;
          if ( (_BYTE)v49 )
          {
LABEL_61:
            v52 = 0;
            goto LABEL_62;
          }
        }
LABEL_65:
        v31 = 0;
LABEL_66:
        sub_8336C0((__int64)v178, v50, v49);
        sub_8336C0((__int64)v171, v50, v55);
        return v31;
      }
      v56 = sub_B080B0(*v12);
      v57 = *(_QWORD *)(v168 + 16);
      v188.m128i_i64[0] = a1;
      if ( v56 )
      {
        v188.m128i_i64[1] = (__int64)v176;
        if ( !(unsigned __int8)sub_883160(v188.m128i_i64, v57) )
          goto LABEL_58;
        LOBYTE(v171[0]) = 0;
        if ( v176[0] == v47 )
          sub_257CDE0(&v188, v47);
        else
          sub_2579610(&v188);
        sub_834250(v177, v188.m128i_i64, v101);
        sub_5FF3B0(v188.m128i_i64);
      }
      else
      {
        v188.m128i_i64[1] = (__int64)v171;
        if ( !(unsigned __int8)sub_8811F0(&v188, v57) )
          goto LABEL_58;
      }
      v52 = 1;
LABEL_62:
      v53 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v168 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      v50 = *(_QWORD *)(v168 + 24);
      v188.m128i_i64[0] = a1;
      if ( v53 )
      {
        v188.m128i_i64[1] = (__int64)&v183;
        v54 = sub_883160(v188.m128i_i64, v50);
        if ( !v52 || !v54 )
          goto LABEL_65;
        LOBYTE(v178[0]) = 0;
        if ( v183 == v47 )
          sub_257CDE0(&v188, v47);
        else
          sub_2579610(&v188);
        sub_834250(v186, v188.m128i_i64, v91);
        sub_5FF3B0(v188.m128i_i64);
      }
      else
      {
        v188.m128i_i64[1] = (__int64)v178;
        v80 = sub_8811F0(&v188, v50);
        if ( !v52 || !v80 )
          goto LABEL_65;
      }
      if ( !LOBYTE(v171[0]) )
      {
        v99 = sub_8352E0(v176, (__int64)&v183, v49);
        v50 = 2 * (unsigned int)((v99 == 1) & ((unsigned int)sub_8352E0(v177, (__int64)v186, v100) == 1));
        sub_82E660(*a3, v50, v168);
        goto LABEL_116;
      }
      if ( (unsigned int)v172 <= 0x40 )
      {
        if ( v171[1] != v178[1] )
          goto LABEL_139;
      }
      else if ( !(unsigned __int8)sub_2586760(&v171[1], &v178[1]) )
      {
        goto LABEL_139;
      }
      if ( v174 <= 0x40 )
      {
        if ( v173 == v180 )
          goto LABEL_114;
      }
      else if ( (unsigned __int8)sub_2586760(&v173, &v180) )
      {
LABEL_114:
        v81 = v168;
        v50 = 2;
LABEL_115:
        sub_82E660(*a3, v50, v81);
LABEL_116:
        v31 = 1;
        goto LABEL_66;
      }
LABEL_139:
      v81 = v168;
      v50 = 0;
      goto LABEL_115;
    }
    goto LABEL_32;
  }
LABEL_51:
  if ( v20 == 14 || v16 == 14 )
    goto LABEL_53;
LABEL_10:
  v160 = (_QWORD *)v18;
  v22 = sub_B080B0(v14);
  v25 = (__int64)v160;
  if ( v22 )
  {
    v65 = sub_B080B0(*v160);
    v25 = (__int64)v160;
    if ( v65 )
    {
      sub_8203A0((__int64)v178);
      sub_8203A0((__int64)&v188);
      v66 = *(_QWORD *)(v168 + 24);
      v171[0] = (void *)a1;
      v171[1] = v178;
      if ( (unsigned __int8)sub_883160((__int64 *)v171, v66) )
      {
        v114 = *(_QWORD *)(v168 + 16);
        v171[0] = (void *)a1;
        v171[1] = &v188;
        v31 = sub_883160((__int64 *)v171, v114);
        if ( (_BYTE)v31 )
        {
          v116 = sub_8352E0(v188.m128i_i64, (__int64)v178, v115);
          v117 = v168;
          v118 = v116;
          if ( *(_BYTE *)(a1 + 8) == 1
            || v116 != 3
            || (v127 = sub_83D8C0(v168, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL)),
                v117 = v168,
                !(unsigned __int8)sub_8211D0(v127)) )
          {
            sub_82E660(*a3, (unsigned int)(v118 + 1), v117);
            goto LABEL_89;
          }
          sub_A2E130(a1, v168, 2210, 0);
        }
      }
      else if ( *(_DWORD *)(a1 + 48) )
      {
        v67 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        **(_BYTE **)(a1 + 24) |= v67;
        if ( v67 )
        {
          v68 = *(_QWORD *)(v168 + 16);
          v171[0] = (void *)a1;
          v171[1] = &v188;
          sub_883160((__int64 *)v171, v68);
        }
      }
      v31 = 0;
LABEL_89:
      sub_5FF3B0(v188.m128i_i64);
      sub_5FF3B0((__int64 *)v178);
      return v31;
    }
  }
  v26 = *(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v27 = *(_BYTE *)(v26 + 16);
  if ( v27 == 41 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
    {
LABEL_15:
      v28 = a4[1];
      v29 = **a4;
      if ( ((*(_WORD *)(v29 + 2) >> 3) & 0x3Fu) > 1 )
      {
        if ( ((*(_WORD *)(v29 + 2) >> 3) & 0x3F) == 0x20 )
        {
          sub_857160(*v28, *(_QWORD *)(v29 + 16));
          return (unsigned int)sub_87BEE0(v28, *(_QWORD *)(v29 + 24), v84, v85, v86, v87);
        }
        else
        {
          v89 = (__int64 *)sub_A2E130(*v28, **a4, 110, 0);
          v90 = sub_AC7B80(v29);
          if ( v89 )
          {
            v188.m128i_i64[0] = v90;
            v188.m128i_i8[8] = 1;
            sub_839C90(v89, v188.m128i_i64);
          }
          return 0;
        }
      }
      v30 = **a4;
      v190[0] |= 1u;
      v31 = 0;
      ptr = v194;
      v188 = 0u;
      v189 = 0;
      v191 = 0;
      v193 = 0x800000000LL;
      v195 = 0;
      if ( sub_89E210(*v28, v30, (__int64)&v188, 1, v23, v24) )
      {
        BYTE4(v178[0]) &= ~1u;
        LODWORD(v178[0]) = 0;
        v31 = sub_85F440(*v28, (_DWORD *)v29, *(_QWORD *)(v29 + 8), (__int64)&v188, (__int64)v178, 0);
        if ( (_BYTE)v31 )
        {
          if ( LODWORD(v178[0]) <= 0xD && (v32 = 8322, _bittest64(&v32, LODWORD(v178[0]))) || (BYTE4(v178[0]) & 1) != 0 )
            sub_6A63E0(v28[1], (__int64)v178);
          else
            sub_822A10((__int64)&v178[1], v28[1]);
        }
        if ( LODWORD(v178[0]) > 1 )
          sub_69F740((__int64)v178);
      }
      goto LABEL_24;
    }
    LOBYTE(v180) = (unsigned __int8)v180 | 1;
    v184 = v186;
    v190[0] |= 1u;
    v185 = 0x800000000LL;
    v193 = 0x800000000LL;
    v178[0] = nullptr;
    v178[1] = nullptr;
    v179 = 0;
    v183 = 0;
    v187 = 0;
    v188 = 0u;
    v189 = 0;
    v191 = 0;
    ptr = v194;
    v195 = 0;
    v69 = *(_QWORD *)(v168 + 16);
    v171[0] = (void *)a1;
    v171[1] = v178;
    LOBYTE(v172) = 0;
    if ( !(unsigned __int8)sub_871080((__int64)v171, v69, (__int64 *)v26, (__int64)v194, v23, v24) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v74 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        v78 = *(__int64 **)(a1 + 24);
        *(_BYTE *)v78 |= v74;
        if ( v74 )
        {
          v79 = *(_QWORD *)(v168 + 24);
          v171[0] = (void *)a1;
          v171[1] = &v188;
          LOBYTE(v172) = 0;
          sub_871080((__int64)v171, v79, v78, v75, v76, v77);
        }
      }
      goto LABEL_95;
    }
    v119 = *(_QWORD *)(v168 + 24);
    v171[0] = (void *)a1;
    v171[1] = &v188;
    LOBYTE(v172) = 0;
    v163 = sub_871080((__int64)v171, v119, v70, v71, v72, v73);
    if ( !v163
      || (!(unsigned __int8)sub_82A730((__int64)v178[0], (__int64)v178[1])
       || !(unsigned __int8)sub_82A730(v188.m128i_i64[0], v188.m128i_i64[1]))
      && (v187 || v195) )
    {
      goto LABEL_95;
    }
    LOBYTE(v120) = sub_820230((const __m128i *)v178, &v188);
    v31 = v120;
    if ( !(_BYTE)v120 )
    {
      v171[0] = v178;
      v172 = &v168;
      v171[1] = (void *)a1;
      v173 = &v188;
      if ( (unsigned int)(unsigned __int8)v13 - 14 <= 1 )
      {
        if ( !sub_69F610(v178) && v179 || !sub_69F610(&v188) && v189 )
        {
          v128 = sub_69F610(&v188);
          sub_82F130((__int64 *)v171, 0x8E1u, !v128);
        }
        else if ( (unsigned __int8)sub_822B60(a1, (__int64 *)v178, v188.m128i_i64) )
        {
          sub_82F130((__int64 *)v171, 0x8AFu, 0);
        }
        else if ( sub_821CE0((__int64 *)v178) || sub_821CE0(v188.m128i_i64) )
        {
          v132 = sub_821CE0((__int64 *)v178);
          sub_82F130((__int64 *)v171, 0x8D4u, !v132);
        }
        else if ( (unsigned __int8)sub_81FA10((__int64 *)v178) || (unsigned __int8)sub_81FA10(v188.m128i_i64) )
        {
          v147 = sub_81FA10((__int64 *)v178);
          sub_82F130((__int64 *)v171, 0x8E4u, v147 ^ 1);
        }
        else if ( sub_69F610(v178) && !v179 && sub_824700(*(_QWORD *)(a1 + 16), &v188) )
        {
          sub_82F130((__int64 *)v171, 0x8DEu, 1);
        }
        else if ( sub_69F610(&v188) && !v189 && sub_824700(*(_QWORD *)(a1 + 16), (const __m128i *)v178) )
        {
          sub_82F130((__int64 *)v171, 0x8DEu, 0);
        }
        else if ( sub_69F610(&v188) && sub_81FFE0((__int64 *)v178) || sub_69F610(v178) && sub_81FFE0(v188.m128i_i64) )
        {
          sub_82F130((__int64 *)v171, 0x8E0u, 0);
        }
        else
        {
          sub_82E660(*a3, 0, v168);
          v31 = v163;
        }
      }
      else
      {
        sub_82F130((__int64 *)v171, 0x8DFu, 0);
      }
LABEL_96:
      if ( ptr != v194 )
        free(ptr);
      v33 = v184;
      if ( v184 != v186 )
        goto LABEL_25;
      return v31;
    }
    v167 = (((_BYTE)v13 + 55) & 0x3Fu) <= 4;
    if ( ((v190[0] | (unsigned __int8)v180) & 1) != 0
      || (((_BYTE)v13 + 55) & 0x3Fu) > 4
      || (*(__m128i *)v171 = _mm_load_si128((const __m128i *)v178),
          v133 = sub_69F240((__int64 *)v171),
          v134 = sub_821780(v133, (__int64)&v180, (__int64)v190, (bool *)v171),
          LOBYTE(v171[0]))
      || v134 >= (unsigned int)v185
      || v134 >= (unsigned int)v193 )
    {
LABEL_201:
      v121 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_6F6DE0(*(_QWORD *)(a1 + 16), *v12));
      v122 = v121 & v179;
      v123 = v189 & v121;
      if ( sub_69F600(v178) || !v167 )
        goto LABEL_203;
      *(__m128i *)v171 = _mm_load_si128((const __m128i *)v178);
      v129 = sub_69F240((__int64 *)v171);
      if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFF0LL), 0) )
      {
        v130 = sub_70E2F0(*(_QWORD *)(a1 + 16), v129);
        v131 = v123;
        if ( v122 >= v123 )
          v131 = v122;
        if ( v130 >= v131 )
        {
LABEL_203:
          v124 = *a3;
          if ( v122 < v123 )
          {
            sub_82E660(v124, 1, v168);
          }
          else if ( v123 >= v122 )
          {
            sub_82E660(v124, 2, v168);
          }
          else
          {
            sub_82E660(v124, 3, v168);
          }
          goto LABEL_96;
        }
      }
      sub_A2E130(a1, v168, 110, 0);
LABEL_95:
      v31 = 0;
      goto LABEL_96;
    }
    v135 = v134;
    v136 = v184[v134];
    v137 = v136 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v136 <= 7 || (*(_BYTE *)(v137 + 28) & 0x7Fu) - 47 > 2 )
    {
      v138 = *((_QWORD *)ptr + v135) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *((_QWORD *)ptr + v135) <= 7u )
      {
LABEL_306:
        sub_A2E240(a1, v168, 2267, 0);
        goto LABEL_201;
      }
      v137 = 0;
    }
    else
    {
      v138 = *((_QWORD *)ptr + v135) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *((_QWORD *)ptr + v135) <= 7u )
        goto LABEL_291;
    }
    if ( (*(_BYTE *)(v138 + 28) & 0x7Fu) - 47 <= 2 )
    {
      if ( v137 )
      {
        v139 = *(_QWORD *)(v137 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v137 + 16) & 4) != 0 )
          v139 = *(_QWORD *)v139;
        if ( (*(_BYTE *)(v139 + 8) & 0x7Fu) - 56 > 3 )
          BUG();
        if ( *(_BYTE *)(v139 + 9) >> 5 != 2 && ((*(_BYTE *)(v138 + 29) >> 5) & 3) != ((*(_BYTE *)(v137 + 29) >> 5) & 3) )
        {
          v140 = (unsigned __int8 **)sub_A2E240(a1, v168, 2269, 0);
          v164 = v140;
          if ( v140 )
          {
            sub_8356A0(v140, v137, 0xAu);
            sub_7A9230(v164, (*(_BYTE *)(v137 + 29) >> 5) & 3);
            sub_8356A0(v164, v138, 0xAu);
            sub_7A9230(v164, (*(_BYTE *)(v138 + 29) >> 5) & 3);
          }
          v141 = *(_QWORD *)(v137 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v137 + 16) & 4) != 0 )
            v141 = *(_QWORD *)v141;
          if ( (*(_BYTE *)(v141 + 8) & 0x7Fu) - 56 > 3 )
            v142 = 0;
          else
            v142 = v141 - 64;
          if ( v164 )
            sub_8356A0(v164, v142, 0xAu);
        }
      }
      else
      {
        v165 = v135;
        v143 = (unsigned __int8 **)sub_A2E240(a1, v168, 2268, 0);
        v144 = v143;
        v145 = v184[v165] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (unsigned __int64)v184[v165] <= 7 || (*(_BYTE *)(v145 + 28) & 0x7Fu) - 57 > 2 )
          v145 = 0;
        if ( v143 )
          sub_8356A0(v143, v145, 0xAu);
        v146 = *(_QWORD *)(v138 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v138 + 16) & 4) != 0 )
          v146 = *(_QWORD *)v146;
        if ( (*(_BYTE *)(v146 + 8) & 0x7Fu) - 56 <= 3 )
          v137 = v146 - 64;
        if ( v144 )
        {
          sub_8356A0(v144, v137, 0xAu);
          sub_8356A0(v144, v138, 0xAu);
        }
      }
      goto LABEL_201;
    }
    if ( !v137 )
      goto LABEL_306;
LABEL_291:
    v166 = v135;
    v153 = (unsigned __int8 **)sub_A2E240(a1, v168, 2268, 0);
    v154 = v153;
    v155 = *((_QWORD *)ptr + v166);
    if ( v155 <= 7 || (v156 = v155 & 0xFFFFFFFFFFFFFFF8LL, (*(_BYTE *)(v156 + 28) & 0x7Fu) - 57 > 2) )
      v156 = 0;
    if ( v153 )
      sub_8356A0(v153, v156, 0xAu);
    v157 = *(_QWORD *)(v137 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v137 + 16) & 4) != 0 )
      v157 = *(_QWORD *)v157;
    if ( (*(_BYTE *)(v157 + 8) & 0x7Fu) - 56 > 3 )
      v158 = 0;
    else
      v158 = v157 - 64;
    if ( v154 )
    {
      sub_8356A0(v154, v158, 0xAu);
      sub_8356A0(v154, v137, 0xAu);
    }
    goto LABEL_201;
  }
  if ( v27 == 32 )
  {
    v178[0] = nullptr;
    v178[1] = &v180;
    v179 = 0x400000000LL;
    v189 = 0x400000000LL;
    v188.m128i_i64[0] = 0;
    v188.m128i_i64[1] = (__int64)v190;
    v94 = *(_QWORD *)(v168 + 16);
    v171[0] = (void *)a1;
    v171[1] = v178;
    if ( !(unsigned __int8)sub_854640((__int64 *)v171, v94) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v95 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        **(_BYTE **)(a1 + 24) |= v95;
        if ( v95 )
        {
          v96 = *(_QWORD *)(v168 + 24);
          v171[0] = (void *)a1;
          v171[1] = &v188;
          sub_854640((__int64 *)v171, v96);
        }
      }
      goto LABEL_146;
    }
    v109 = *(_QWORD *)(v168 + 24);
    v171[0] = (void *)a1;
    v171[1] = &v188;
    v31 = sub_854640((__int64 *)v171, v109);
    if ( !(_BYTE)v31 )
    {
LABEL_146:
      v31 = 0;
      goto LABEL_147;
    }
    if ( v178[0] > &byte_7 )
    {
      if ( (unsigned __int8)sub_783680((unsigned __int64)v178[0] & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v125 = (unsigned __int8 **)sub_A2E130(a1, v168, 2230, 0);
        if ( v125 )
          sub_8356A0(v125, (unsigned __int64)v178[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
        goto LABEL_146;
      }
      v110 = v188.m128i_i64[0];
      if ( v188.m128i_i64[0] <= 7uLL )
      {
        if ( v178[0] > &byte_7 )
          goto LABEL_173;
        goto LABEL_196;
      }
    }
    else
    {
      v110 = v188.m128i_i64[0];
      if ( v188.m128i_i64[0] <= 7uLL )
        goto LABEL_196;
    }
    if ( (unsigned __int8)sub_783680(v110 & 0xFFFFFFFFFFFFFFF8LL) )
    {
      v126 = (unsigned __int8 **)sub_A2E130(a1, v168, 2230, 0);
      if ( v126 )
        sub_8356A0(v126, v188.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
      goto LABEL_146;
    }
    v111 = v188.m128i_i64[0];
    if ( v178[0] > &byte_7 )
    {
      if ( v188.m128i_i64[0] > 7uLL )
      {
        if ( (*(_BYTE *)(((unsigned __int64)v178[0] & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 33 <= 3 )
        {
          v161 = (unsigned __int64)v178[0] & 0xFFFFFFFFFFFFFFF8LL;
          v148 = sub_83DE60((unsigned __int64)v178[0] & 0xFFFFFFFFFFFFFFF8LL);
          v111 = v188.m128i_i64[0];
          if ( v148 )
          {
            v152 = (unsigned __int8 **)sub_A2E240(a1, v168, 2193, 0);
            if ( v152 )
              sub_8356A0(v152, v161, 0xAu);
            v111 = v188.m128i_i64[0];
          }
        }
        v149 = v111 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v149 + 28) & 0x7Fu) - 33 <= 3 )
        {
          v162 = v149;
          if ( sub_83DE60(v149) )
          {
            v151 = (unsigned __int8 **)sub_A2E240(a1, v168, 2193, 0);
            if ( v151 )
              sub_8356A0(v151, v162, 0xAu);
          }
        }
        v150 = sub_8200B0((__int64)v178, (__int64)&v188);
        sub_82E660(*a3, 2 * (unsigned int)v150, v168);
LABEL_147:
        if ( (_BYTE *)v188.m128i_i64[1] != v190 )
          free((void *)v188.m128i_i64[1]);
        v33 = v178[1];
        if ( v178[1] != &v180 )
          goto LABEL_25;
        return v31;
      }
      goto LABEL_173;
    }
    if ( v188.m128i_i64[0] > 7uLL )
    {
LABEL_173:
      v112 = v168;
      v113 = 0;
LABEL_174:
      sub_82E660(*a3, v113, v112);
      goto LABEL_147;
    }
LABEL_196:
    v112 = v168;
    v113 = 2;
    goto LABEL_174;
  }
  if ( v27 != 13 || ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) != 0x1E7 )
    goto LABEL_15;
  v190[0] |= 1u;
  ptr = v194;
  v188 = 0u;
  v193 = 0x800000000LL;
  v189 = 0;
  v191 = 0;
  v195 = 0;
  v103 = *(_QWORD *)(v168 + 16);
  v178[0] = (void *)a1;
  v178[1] = &v188;
  LOBYTE(v179) = 0;
  if ( (unsigned __int8)sub_871080((__int64)v178, v103, (__int64 *)v26, v25, v23, v24)
    && (v108 = *(_QWORD *)(v168 + 24),
        v178[0] = (void *)a1,
        v178[1] = &v188,
        LOBYTE(v179) = 0,
        v31 = sub_871080((__int64)v178, v108, v104, v105, v106, v107),
        (_BYTE)v31) )
  {
    sub_82E660(*a3, 2, v168);
  }
  else
  {
    v31 = 0;
  }
LABEL_24:
  v33 = ptr;
  if ( ptr != v194 )
LABEL_25:
    free(v33);
  return v31;
}

