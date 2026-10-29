__int64 __fastcall sub_14D2EE0(__int64 a1, unsigned int *a2, __m128i a3, __m128 a4)
{
  int v4; // ebp
  int v5; // r12d
  __m128i *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int16 v15; // ax
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rbp
  int v27; // ecx
  unsigned __int16 v28; // bp
  char v29; // al
  __int64 v30; // rsi
  __m128i *v31; // rsi
  char v32; // r14
  int v33; // eax
  unsigned __int64 v34; // rdx
  bool v35; // cl
  __int64 v36; // rax
  __int16 v37; // ax
  __int16 v38; // ax
  bool v39; // cc
  __int16 v40; // dx
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned int **v44; // rbp
  void **v45; // r13
  size_t *v46; // r12
  void *v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  char *v51; // r14
  _BYTE *v52; // rdi
  size_t v53; // rax
  unsigned int *v54; // r14
  _QWORD *v55; // r8
  unsigned __int8 *v56; // rax
  __int64 v57; // r9
  char *v58; // r14
  size_t v59; // r15
  __int64 v60; // rdi
  __int64 v61; // r12
  unsigned __int8 *v62; // rbp
  unsigned __int8 *v63; // r13
  void **v64; // r14
  size_t v66; // rdx
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r10
  __int64 v72; // rdx
  __int64 v73; // rbp
  __int64 v74; // rbx
  int v75; // r13d
  _QWORD *v76; // r12
  void *v77; // rdi
  __int64 v78; // rbp
  unsigned int v79; // ebp
  unsigned int v80; // ebp
  int v81; // ecx
  __int64 v82; // rsi
  unsigned int v83; // ebp
  int v84; // r12d
  __int16 v85; // ax
  __int64 *v86; // rdi
  __int32 v87; // ecx
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  int v90; // r9d
  unsigned __int64 v91; // rsi
  void **v92; // rdx
  void **p_ptr; // r8
  void **v94; // r12
  void *v95; // rax
  unsigned int v96; // r10d
  void *v97; // rax
  __m128 v98; // xmm1
  double v99; // xmm0_8
  size_t v100; // rdx
  __int64 *v101; // rdi
  __int64 v102; // rbp
  __int64 v103; // rax
  __int8 v104; // al
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int8 v109; // r9
  void **v110; // rax
  unsigned __int32 v111; // eax
  size_t v112; // rax
  __int32 v113; // ecx
  __int64 v114; // rax
  unsigned __int8 v115; // dl
  void **v116; // r12
  __int32 v117; // [rsp+10h] [rbp-1028h]
  int *v119; // [rsp+20h] [rbp-1018h]
  __int64 v120; // [rsp+20h] [rbp-1018h]
  unsigned int **v121; // [rsp+20h] [rbp-1018h]
  int v122; // [rsp+20h] [rbp-1018h]
  void **v123; // [rsp+20h] [rbp-1018h]
  int v124; // [rsp+20h] [rbp-1018h]
  int v125; // [rsp+20h] [rbp-1018h]
  __int64 v126; // [rsp+28h] [rbp-1010h]
  unsigned int v127; // [rsp+38h] [rbp-1000h]
  unsigned int v128; // [rsp+3Ch] [rbp-FFCh]
  __int64 v129; // [rsp+40h] [rbp-FF8h]
  int v130; // [rsp+40h] [rbp-FF8h]
  unsigned __int8 *v131; // [rsp+40h] [rbp-FF8h]
  _QWORD *v132; // [rsp+40h] [rbp-FF8h]
  int v133; // [rsp+40h] [rbp-FF8h]
  unsigned int v134; // [rsp+40h] [rbp-FF8h]
  int v135; // [rsp+50h] [rbp-FE8h]
  unsigned int v136; // [rsp+50h] [rbp-FE8h]
  void **v137; // [rsp+50h] [rbp-FE8h]
  int v138; // [rsp+58h] [rbp-FE0h]
  unsigned int **v139; // [rsp+58h] [rbp-FE0h]
  __int64 v140; // [rsp+58h] [rbp-FE0h]
  unsigned __int8 v141; // [rsp+60h] [rbp-FD8h]
  __m128i *v142; // [rsp+68h] [rbp-FD0h]
  __int32 v143; // [rsp+68h] [rbp-FD0h]
  void **v144; // [rsp+70h] [rbp-FC8h]
  unsigned int v145; // [rsp+70h] [rbp-FC8h]
  size_t *v146; // [rsp+78h] [rbp-FC0h]
  int v147; // [rsp+9Ch] [rbp-F9Ch] BYREF
  unsigned int v148; // [rsp+A0h] [rbp-F98h] BYREF
  int v149; // [rsp+A4h] [rbp-F94h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-F90h] BYREF
  __int64 v151; // [rsp+B0h] [rbp-F88h] BYREF
  unsigned __int64 v152; // [rsp+B8h] [rbp-F80h] BYREF
  __int64 v153; // [rsp+C0h] [rbp-F78h] BYREF
  __int64 v154; // [rsp+C8h] [rbp-F70h] BYREF
  __m128i *v155; // [rsp+D0h] [rbp-F68h] BYREF
  int v156; // [rsp+D8h] [rbp-F60h]
  void *v157; // [rsp+E0h] [rbp-F58h] BYREF
  __int64 v158; // [rsp+E8h] [rbp-F50h]
  _BYTE v159[16]; // [rsp+F0h] [rbp-F48h] BYREF
  _QWORD v160[3]; // [rsp+100h] [rbp-F38h] BYREF
  unsigned int v161; // [rsp+118h] [rbp-F20h]
  const char *v162; // [rsp+120h] [rbp-F18h]
  void *v163; // [rsp+130h] [rbp-F08h] BYREF
  size_t n; // [rsp+138h] [rbp-F00h]
  size_t v165; // [rsp+140h] [rbp-EF8h] BYREF
  void *v166; // [rsp+148h] [rbp-EF0h]
  __int64 v167; // [rsp+158h] [rbp-EE0h] BYREF
  __int64 v168; // [rsp+170h] [rbp-EC8h] BYREF
  void *v169; // [rsp+178h] [rbp-EC0h] BYREF
  __int64 v170; // [rsp+180h] [rbp-EB8h]
  _BYTE v171[16]; // [rsp+188h] [rbp-EB0h] BYREF
  __int64 v172; // [rsp+198h] [rbp-EA0h] BYREF
  void *v173; // [rsp+1A0h] [rbp-E98h] BYREF
  __int64 v174; // [rsp+1A8h] [rbp-E90h]
  _BYTE v175[16]; // [rsp+1B0h] [rbp-E88h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-E78h] BYREF
  __int64 v177; // [rsp+1C8h] [rbp-E70h] BYREF
  __m128i *v178; // [rsp+1D0h] [rbp-E68h] BYREF
  void *v179; // [rsp+1D8h] [rbp-E60h]
  __int64 (__fastcall *v180)(__int64); // [rsp+1E0h] [rbp-E58h]
  __int64 v181; // [rsp+1E8h] [rbp-E50h] BYREF
  __int64 v182; // [rsp+1F0h] [rbp-E48h]
  _BYTE v183[32]; // [rsp+250h] [rbp-DE8h] BYREF
  __int64 v184; // [rsp+270h] [rbp-DC8h] BYREF
  void *v185; // [rsp+278h] [rbp-DC0h]
  __int64 v186; // [rsp+288h] [rbp-DB0h] BYREF
  __int64 v187; // [rsp+298h] [rbp-DA0h] BYREF
  void *v188; // [rsp+2A0h] [rbp-D98h]
  __int64 v189; // [rsp+2B0h] [rbp-D88h] BYREF
  void *v190; // [rsp+2D0h] [rbp-D68h]
  int v191; // [rsp+2DCh] [rbp-D5Ch]
  unsigned __int8 *v192; // [rsp+380h] [rbp-CB8h] BYREF
  void *v193; // [rsp+388h] [rbp-CB0h]
  __int64 v194; // [rsp+390h] [rbp-CA8h] BYREF
  _BYTE v195[16]; // [rsp+398h] [rbp-CA0h] BYREF
  __int64 v196; // [rsp+3A8h] [rbp-C90h] BYREF
  void *v197; // [rsp+3B0h] [rbp-C88h]
  __int64 v198; // [rsp+3B8h] [rbp-C80h]
  _BYTE v199[464]; // [rsp+3C0h] [rbp-C78h] BYREF
  unsigned __int8 *v200[11]; // [rsp+590h] [rbp-AA8h] BYREF
  int v201; // [rsp+5ECh] [rbp-A4Ch]
  unsigned int v202; // [rsp+5F0h] [rbp-A48h]
  void **v203; // [rsp+610h] [rbp-A28h] BYREF
  unsigned int v204; // [rsp+618h] [rbp-A20h]
  unsigned int v205; // [rsp+61Ch] [rbp-A1Ch]
  char v206; // [rsp+860h] [rbp-7D8h]
  char *v207[4]; // [rsp+870h] [rbp-7C8h] BYREF
  _BYTE v208[1960]; // [rsp+890h] [rbp-7A8h] BYREF

  v6 = (__m128i *)a1;
  v127 = *a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*(_BYTE *)(v7 + 89) & 1) != 0 )
  {
    sub_1564820(v200, a1, v127, 1996);
    sub_AE9DF0(v200, 1, 2u);
  }
  else
  {
    sub_1564820(v200, a1, v127, (*(_BYTE *)(v7 + 1) & 0x10) == 0 ? 2002 : 2120);
    sub_AE9DF0(v200, 0, 2u);
  }
  sub_AEA040((__int64)v200);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  sub_2233820(v160);
  v160[2] = v8;
  v129 = a1 + 504;
  v160[0] = &off_2B552D0;
  v161 = v127;
  v162 = "lambda expression parsing";
  sub_147A4A0((__int64)v183, a1 + 504);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  sub_147A650((__int64)v200, (__int64)v183, (__int64)qword_2CD8AE0, 17);
  sub_146B5E0(&v150, a1, 0x8000308u, 1, 0);
  sub_15F1F10(*(_QWORD *)(a1 + 96));
  sub_1A34700(*(_QWORD *)(a1 + 96), a2, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  v169 = v171;
  v174 = 0x200000000LL;
  v170 = 0x200000000LL;
  v9 = *(_QWORD *)(a1 + 8);
  v168 = 0;
  v10 = *(_QWORD *)(v9 + 56);
  v172 = a1 + 504;
  v173 = v175;
  if ( (*(_BYTE *)(v10 + 60) & 0x10) != 0 )
  {
    v119 = (int *)(a1 + 16);
    while ( 1 )
    {
      v11 = v6[2].m128i_i16[0];
      if ( v11 != 355 )
        break;
LABEL_9:
      v12 = (__int64 *)v6->m128i_i64[1];
      v13 = v6[1].m128i_i64[1];
      v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
      sub_14634E0(v12, v119);
      v117 = v6[2].m128i_i32[2];
      v14 = sub_15D92D0(v172, 80);
      v15 = sub_F963B0(v13, 0, 6);
      v16 = v5;
      *(_QWORD *)v14 = v13;
      *(_WORD *)(v14 + 32) = v15;
      v17 = v4;
      BYTE1(v16) = BYTE1(v5) & 0xFC;
      BYTE1(v17) = BYTE1(v4) & 0xFC;
      *(_DWORD *)(v14 + 24) = v117;
      v5 = v16;
      *(_DWORD *)(v14 + 28) = v117;
      v4 = v17;
      LOBYTE(v17) = *(_BYTE *)(v14 + 35);
      *(_BYTE *)(v14 + 34) = -10;
      *(_QWORD *)(v14 + 56) &= 0x7F800000uLL;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 40) = 0;
      *(_BYTE *)(v14 + 35) = (2 * ((v16 & 0x200) != 0)) | BYTE1(v17) & 1 | v17 & 0xFC;
      *(_QWORD *)(v14 + 48) = 0;
      v18 = sub_15D7D80(v14);
      v19 = HIDWORD(v174);
      *(_QWORD *)(v14 + 72) = v18;
      v20 = (unsigned int)v174;
      v21 = (unsigned int)v174 + 1LL;
      if ( v21 > v19 )
      {
        sub_2237220(&v173, v175, v21, 8);
        v20 = (unsigned int)v174;
      }
      *((_QWORD *)v173 + v20) = v14;
      v22 = (unsigned int)v170;
      LODWORD(v174) = v174 + 1;
      v23 = (unsigned int)v170 + 1LL;
      if ( v23 > HIDWORD(v170) )
      {
        sub_2237220(&v169, v171, v23, 8);
        v22 = (unsigned int)v170;
      }
      *((_QWORD *)v169 + v22) = v14;
      LODWORD(v170) = v170 + 1;
    }
    while ( v11 == 189 )
    {
      sub_1490230(v6, (__int64)&v168, 0, (__int64)v200, a3, a4);
      v11 = v6[2].m128i_i16[0];
      if ( v11 == 355 )
        goto LABEL_9;
    }
    sub_147F500((__int64 *)v207, v207[0], (char *)v169, (char *)v169 + 8 * (unsigned int)v170);
    LODWORD(v170) = 0;
    sub_15D8C50(v208, &v172);
    LODWORD(v174) = 0;
    if ( HIDWORD(v168) )
      v201 = HIDWORD(v168);
  }
  v24 = v6[2].m128i_i16[0] == 47;
  v155 = v6;
  v156 = 0;
  if ( !v24 )
  {
    v128 = 0;
    goto LABEL_23;
  }
  sub_1564840(&v192, v6, &v6[1], ((*(char *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 1LL) >> 31) & 0x5Au) + 2004);
  sub_AEA040((__int64)&v192);
  v25 = v6[159].m128i_u32[1];
  ptr = &v178;
  v177 = 0x400000000LL;
  LODWORD(v157) = 0;
  LODWORD(v163) = 0;
  if ( !(unsigned __int8)sub_1558C40(v6, &v155, v25, &ptr, &v157, &v163) )
  {
    v128 = v177;
    if ( (_DWORD)v177 )
    {
      ++v6[159].m128i_i32[1];
      v26 = 0;
      if ( v6[2].m128i_i16[0] == 176 )
      {
        v101 = (__int64 *)v6->m128i_i64[1];
        v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
        sub_14634E0(v101, v6[1].m128i_i32);
        v102 = v6[6].m128i_i64[0];
        v103 = sub_14C51E0((__int64)v6, 0, a3, *(double *)a4.m128_u64);
        v26 = sub_183C1F0(v102, v103);
        if ( v26 == 1 )
        {
          LODWORD(v192) = 1441816;
          sub_15680D0(v6, &v192, 2, 3);
        }
        v128 = v177;
      }
      sub_1A2D110(v6[6].m128i_i64[0], a2, (unsigned int)v157, ptr, v128, (unsigned int)v163, v26);
      v128 = 1;
    }
    else
    {
      sub_1564820(&v192, v6, (unsigned int)v163, 1724);
      sub_AEA040((__int64)&v192);
    }
    if ( ptr != &v178 )
      free(ptr);
LABEL_23:
    if ( (unsigned int)sub_155CBC0(v6, 0, 0) )
    {
      v27 = -((*(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 2LL) & 1) == 0);
      LOBYTE(v27) = v27 & 0x79;
      sub_1564840(&v192, v6, &v6[1], (unsigned int)(v27 + 2100));
      v28 = v6[2].m128i_u16[0];
      v29 = sub_141A630(v28);
      if ( v28 == 1 || v29 )
        v30 = 0;
      else
        v30 = v6[1].m128i_i64[1];
      sub_AE9DF0(&v192, v30, 5u);
      sub_AE9DF0(&v192, (unsigned __int16)(v6[2].m128i_i16[0] - 406) <= 8u, 2u);
      sub_AEA040((__int64)&v192);
      if ( (unsigned __int16)(v6[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(v6, 0, 0) )
      {
        v192 = nullptr;
        v196 = v129;
        v193 = v195;
        v194 = 0x200000000LL;
        v197 = v199;
        v198 = 0x200000000LL;
        sub_14AB020((__int64)v6, (unsigned int *)&v192, a3, a4);
        sub_147F500((__int64 *)v207, v207[0], (char *)v193, (char *)v193 + 8 * (unsigned int)v194);
        LODWORD(v194) = 0;
        sub_15D8C50(v208, &v196);
        LODWORD(v198) = 0;
        if ( HIDWORD(v192) )
          v201 = HIDWORD(v192);
        sub_15DCED0(v196, &v196);
        if ( v197 != v199 )
          free(v197);
        if ( v193 != v195 )
          free(v193);
      }
    }
    v31 = v6;
    v138 = 0;
    v32 = 0;
    v120 = 0;
    v126 = 0;
    v135 = 0;
    v147 = 0;
    v148 = 0;
    sub_146B5E0(&v151, (__int64)v6, 0x308u, 1, 0);
    v149 = 0;
    v130 = 0;
    v192 = (unsigned __int8 *)&v194;
    v193 = (void *)0x1000000000LL;
    v33 = v6[2].m128i_u16[0];
    if ( (_WORD)v33 != 22 )
    {
LABEL_35:
      v34 = (unsigned int)(v33 - 137);
      v35 = (_WORD)v33 == 37;
      if ( (unsigned __int16)(v33 - 137) > 0x34u )
      {
        LOBYTE(v40) = v33;
        HIBYTE(v40) = BYTE1(v33) & 0xFE;
        if ( v35
          || v40 == 102
          || (unsigned __int16)(v33 - 330) <= 4u
          || (unsigned __int16)(v33 - 406) <= 8u
          || (_WORD)v33 == 20
          && ((v41 = v6->m128i_i64[1], v42 = *(_QWORD *)(v41 + 2944), v42 >= *(unsigned int *)(v41 + 2912))
            ? (v43 = sub_14180A0(v41, 1u))
            : (v43 = *(_QWORD *)(v41 + 2904) + 24 * v42),
              *(_WORD *)(v43 + 16) == 20) )
        {
LABEL_38:
          if ( !v32 && (*(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 2LL) & 1) == 0 )
          {
            sub_1564840(&ptr, v6, &v6[1], 2003);
            v112 = j__strlen("() ");
            sub_9EC740((__int64)&v163, v6[1].m128i_i32[0], "() ", v112, 0);
            if ( (_DWORD)v163 && HIDWORD(v163) )
              sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v163);
            if ( v166 != &v167 )
              operator delete(v166);
            sub_AEA040((__int64)&ptr);
          }
          goto LABEL_40;
        }
      }
      else
      {
        v36 = 0x1000900A000001LL;
        if ( _bittest64(&v36, v34) || v35 )
          goto LABEL_38;
      }
      if ( !v32 )
      {
        sub_1A2DE30(v6[6].m128i_i64[0], *(_QWORD *)(v6[6].m128i_i64[0] + 608), v192, (unsigned int)v193);
        sub_1A2DC80(v6[6].m128i_i64[0], a2, v148);
        v141 = 0;
        goto LABEL_62;
      }
LABEL_40:
      v37 = v6[2].m128i_i16[0];
      if ( v37 == 320 || v37 == 189 || (unsigned __int16)(v37 - 406) <= 8u || (unsigned int)sub_155CBC0(v6, 0, 0) )
        sub_1485110((__int64)v6, 3, (__int64)&v168, 0);
      LODWORD(v152) = 0;
      v177 = (__int64)&v147;
      LODWORD(v153) = 0;
      LODWORD(v154) = 0;
      ptr = v6;
LABEL_45:
      while ( 2 )
      {
        while ( 1 )
        {
          v38 = v6[2].m128i_i16[0];
          v39 = (unsigned __int16)v38 <= 0x89u;
          if ( v38 != 137 )
            break;
LABEL_50:
          sub_14CC010(&ptr, (_DWORD **)&v177, (int *)&v148, 0);
        }
        while ( !v39 )
        {
          if ( v38 == 162 )
          {
            sub_14CC010(&ptr, (_DWORD **)&v177, (int *)&v152, 2);
            goto LABEL_45;
          }
          if ( v38 != 173 )
            goto LABEL_147;
          sub_14CC010(&ptr, (_DWORD **)&v177, (int *)&v153, 3);
          v38 = v6[2].m128i_i16[0];
          v39 = (unsigned __int16)v38 <= 0x89u;
          if ( v38 == 137 )
            goto LABEL_50;
        }
        if ( v38 == 102 )
        {
          sub_14CC010(&ptr, (_DWORD **)&v177, (int *)&v154, 1);
          continue;
        }
        break;
      }
LABEL_147:
      v79 = v154;
      if ( (_DWORD)v154 )
      {
        if ( v148 )
        {
          sub_1564820(&ptr, v6, (unsigned int)v154, 1890);
          sub_AEA040((__int64)&ptr);
        }
        if ( a2[6] || a2[3] )
        {
          sub_1564820(&ptr, v6, v79, 1889);
          sub_AEA040((__int64)&ptr);
        }
        v80 = v154;
        if ( (_DWORD)v154 )
        {
          v81 = -((*(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 2LL) & 1) == 0);
          LOBYTE(v81) = v81 & 0x28;
          sub_1564820(&ptr, v6, (unsigned int)v154, (unsigned int)(v81 + 2104));
          sub_AEA040((__int64)&ptr);
          v82 = v6[6].m128i_i64[0];
          ptr = nullptr;
          LODWORD(v163) = 0;
          sub_15ACED0(v183, v82, 3, v80, &ptr, &v163, *(_QWORD *)(v82 + 248) + 17464LL);
        }
      }
      v83 = v152;
      if ( (_DWORD)v152 )
      {
        sub_1564820(
          &ptr,
          v6,
          (unsigned int)v152,
          (*(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 1LL) & 0x40) == 0 ? 1958 : 2082);
        sub_AEA040((__int64)&ptr);
        ptr = nullptr;
        LODWORD(v163) = 0;
        sub_15AF800(v183, 1, v83, &ptr, &v163);
      }
      if ( (_DWORD)v153 )
      {
        v145 = v153;
        sub_1564820(&ptr, v6, (unsigned int)v153, 132);
        sub_AEA040((__int64)&ptr);
        v163 = nullptr;
        LODWORD(v157) = 0;
        sub_15AF800(v183, 2, v145, &v163, &v157);
        if ( (_DWORD)v157 )
        {
          sub_1564820(&ptr, v6, v145, (unsigned int)v157);
          sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)v163, 1u);
          sub_AEA040((__int64)&ptr);
        }
      }
      sub_1A2DE30(v6[6].m128i_i64[0], *(_QWORD *)(v6[6].m128i_i64[0] + 608), v192, (unsigned int)v193);
      if ( !v32 )
        *(double *)a3.m128i_i64 = sub_1A2DC80(v6[6].m128i_i64[0], a2, v148);
      v157 = v159;
      v158 = 0x200000000LL;
      v154 = 0;
      v163 = &v165;
      n = 0x200000000LL;
      v152 = 0;
      v84 = sub_14A6770((__int64)v6, 0, &v154, (__int64)&v157, (__int64)&v163, (__int64 *)&v152, a3, a4, &v153);
      if ( v84 )
        v147 = HIDWORD(v154);
      if ( (unsigned __int16)(v6[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(v6, 0, 0) )
      {
        sub_14AB020((__int64)v6, (unsigned int *)&v168, a3, a4);
        v147 = HIDWORD(v168);
      }
      v85 = v6[2].m128i_i16[0];
      if ( (unsigned __int16)(v85 - 330) <= 4u )
      {
        sub_147BEC0((__int64)v6, (__int64)&v184);
        v86 = (__int64 *)v6->m128i_i64[1];
        v6[2].m128i_i32[2] = v6[1].m128i_i32[0];
        sub_14634E0(v86, v6[1].m128i_i32);
        v85 = v6[2].m128i_i16[0];
      }
      v87 = v147;
      v141 = 0;
      if ( v85 == 37 )
      {
        v113 = v6[1].m128i_i32[0];
        ptr = nullptr;
        v143 = v113;
        v114 = sub_14A1280((__int64)v6, &ptr, 0, a3, a4);
        v87 = v143;
        v120 = v114;
        v141 = v115;
        v126 = v115;
        v138 = (int)ptr;
        if ( HIDWORD(ptr) )
          v147 = HIDWORD(ptr);
      }
      LOBYTE(v126) = v141;
      v88 = v152 & 0xFFFFFFFFFFFFFFFELL;
      if ( v152 <= 1 )
        v88 = 0;
      sub_15ABA00(
        (unsigned int)&ptr,
        1,
        0,
        v135,
        (_DWORD)v192,
        (_DWORD)v193,
        v149,
        v130,
        1,
        0,
        v148,
        v84,
        v154,
        (__int64)v157,
        (__int64)v163,
        v158,
        v88,
        0,
        0,
        0,
        v135,
        v87,
        (__int64)v200,
        v120,
        v126,
        v138,
        (__int64)v183);
      v89 = v204;
      v90 = v147;
      v91 = v204 + 1LL;
      if ( v91 > v205 )
      {
        v116 = v203;
        v125 = v147;
        if ( v203 > &ptr || &ptr >= &v203[18 * v204] )
        {
          sub_1497B50((__int64)&v203, v91);
          v92 = v203;
          p_ptr = &ptr;
          v89 = v204;
          v90 = v125;
        }
        else
        {
          sub_1497B50((__int64)&v203, v91);
          v92 = v203;
          v89 = v204;
          v90 = v125;
          p_ptr = (void **)((char *)v203 + (char *)&ptr - (char *)v116);
        }
      }
      else
      {
        v92 = v203;
        p_ptr = &ptr;
      }
      v94 = &v92[18 * v89];
      *(_DWORD *)v94 = *(_DWORD *)p_ptr;
      *((_DWORD *)v94 + 1) = *((_DWORD *)p_ptr + 1);
      *((_DWORD *)v94 + 2) = *((_DWORD *)p_ptr + 2);
      v95 = p_ptr[2];
      v94[4] = (void *)0x200000000LL;
      v94[2] = v95;
      v96 = *((_DWORD *)p_ptr + 8);
      v97 = v94 + 5;
      v94[3] = v94 + 5;
      if ( v96 && v94 + 3 != p_ptr + 3 )
      {
        v100 = 8LL * v96;
        if ( v96 <= 2uLL
          || (v137 = p_ptr,
              v134 = v96,
              v124 = v90,
              sub_2237220(v94 + 3, v94 + 5, v96, 8),
              p_ptr = v137,
              v97 = v94[3],
              v90 = v124,
              v96 = v134,
              (v100 = 8LL * *((unsigned int *)v137 + 8)) != 0) )
        {
          v136 = v96;
          v133 = v90;
          v123 = p_ptr;
          memcpy(v97, p_ptr[3], v100);
          v96 = v136;
          v90 = v133;
          p_ptr = v123;
        }
        *((_DWORD *)v94 + 8) = v96;
      }
      v122 = v90;
      *(__m128i *)(v94 + 7) = _mm_loadu_si128((const __m128i *)(p_ptr + 7));
      v98 = (__m128)_mm_loadu_si128((const __m128i *)(p_ptr + 9));
      *(__m128 *)(v94 + 9) = v98;
      *(__m128i *)(v94 + 11) = _mm_loadu_si128((const __m128i *)(p_ptr + 11));
      *(__m128i *)(v94 + 13) = _mm_loadu_si128((const __m128i *)(p_ptr + 13));
      *(__m128i *)(v94 + 15) = _mm_loadu_si128((const __m128i *)(p_ptr + 15));
      v94[17] = p_ptr[17];
      ++v204;
      sub_147F500(
        (__int64 *)&v203[18 * v204 - 15],
        (char *)v203[18 * v204 - 15],
        (char *)v169,
        (char *)v169 + 8 * (unsigned int)v170);
      sub_15D8C50(v208, &v172);
      LODWORD(v174) = 0;
      if ( v122 )
        v201 = v122;
      if ( v179 != &v181 )
        free(v179);
      if ( v32 )
      {
        v99 = sub_1A2DC80(v6[6].m128i_i64[0], a2, v148);
        if ( v6[2].m128i_i16[0] == 176 )
          sub_14A12D0((__int64)v6, (__int64)v200, v99, v98);
      }
      if ( v163 != &v165 )
        free(v163);
      if ( v157 != v159 )
        free(v157);
LABEL_62:
      if ( (*(_BYTE *)(*(_QWORD *)(v6->m128i_i64[1] + 56) + 60LL) & 0x10) != 0 )
      {
        v44 = (unsigned int **)v169;
        v121 = (unsigned int **)((char *)v169 + 8 * (unsigned int)v170);
        if ( v121 != v169 )
        {
          v45 = &ptr;
          v46 = &v165;
          while ( 1 )
          {
            v54 = *v44;
            if ( (*(_WORD *)(*((_QWORD *)*v44 + 9) + 8LL) & 0xFFFD) == 0x49
              || *(_WORD *)(*((_QWORD *)*v44 + 9) + 8LL) == 70 )
            {
              break;
            }
LABEL_73:
            if ( v121 == ++v44 )
              goto LABEL_83;
          }
          sub_1564820(v45, v6, v54[6], 2078);
          v55 = *(_QWORD **)(*(_QWORD *)v54 + 16LL);
          v56 = (unsigned __int8 *)ptr;
          v57 = *v55;
          v58 = (char *)(v55 + 2);
          v59 = (unsigned int)*v55;
          if ( !ptr )
          {
            v67 = v177;
            v68 = *(_DWORD *)(v177 + 14976);
            if ( v68 )
            {
              v69 = (unsigned int)(v68 - 1);
              *(_DWORD *)(v177 + 14976) = v69;
              v56 = *(unsigned __int8 **)(v67 + 8 * v69 + 14848);
              v70 = *((unsigned int *)v56 + 134);
              *v56 = 0;
              v71 = *((_QWORD *)v56 + 66);
              *((_DWORD *)v56 + 106) = 0;
              v72 = v71 + (v70 << 6);
              if ( v71 != v72 )
              {
                v139 = v44;
                v73 = v71;
                v142 = v6;
                v74 = v72;
                v144 = v45;
                v75 = v57;
                v146 = v46;
                v76 = v55;
                do
                {
                  while ( 1 )
                  {
                    v74 -= 64;
                    v77 = *(void **)(v74 + 24);
                    if ( v77 == (void *)(v74 + 40) )
                      break;
                    v131 = v56;
                    operator delete(v77);
                    v56 = v131;
                    if ( v73 == v74 )
                      goto LABEL_131;
                  }
                }
                while ( v73 != v74 );
LABEL_131:
                v55 = v76;
                LODWORD(v57) = v75;
                v44 = v139;
                v6 = v142;
                v45 = v144;
                v46 = v146;
              }
              *((_DWORD *)v56 + 134) = 0;
            }
            else
            {
              v140 = *v55;
              v132 = v55;
              v56 = (unsigned __int8 *)operator new(0x3A0u);
              *v56 = 0;
              *((_QWORD *)v56 + 12) = v56 + 112;
              *((_QWORD *)v56 + 16) = v56 + 144;
              *((_QWORD *)v56 + 20) = v56 + 176;
              *((_QWORD *)v56 + 24) = v56 + 208;
              *((_QWORD *)v56 + 28) = v56 + 240;
              *((_QWORD *)v56 + 32) = v56 + 272;
              *((_QWORD *)v56 + 36) = v56 + 304;
              *((_QWORD *)v56 + 40) = v56 + 336;
              *((_QWORD *)v56 + 44) = v56 + 368;
              *((_QWORD *)v56 + 48) = v56 + 400;
              *((_QWORD *)v56 + 52) = v56 + 432;
              *((_QWORD *)v56 + 13) = 0;
              v56[112] = 0;
              *((_QWORD *)v56 + 17) = 0;
              v56[144] = 0;
              *((_QWORD *)v56 + 21) = 0;
              v56[176] = 0;
              *((_QWORD *)v56 + 25) = 0;
              v56[208] = 0;
              *((_QWORD *)v56 + 29) = 0;
              v56[240] = 0;
              *((_QWORD *)v56 + 33) = 0;
              v56[272] = 0;
              *((_QWORD *)v56 + 37) = 0;
              v56[304] = 0;
              *((_QWORD *)v56 + 41) = 0;
              v56[336] = 0;
              *((_QWORD *)v56 + 45) = 0;
              v56[368] = 0;
              *((_QWORD *)v56 + 49) = 0;
              v56[400] = 0;
              *((_QWORD *)v56 + 53) = 0x800000000LL;
              v55 = v132;
              *((_QWORD *)v56 + 66) = v56 + 544;
              LODWORD(v57) = v140;
              *((_QWORD *)v56 + 67) = 0x600000000LL;
            }
            ptr = v56;
          }
          v56[*v56 + 1] = 0;
          v163 = v46;
          if ( &v58[v59] && !v58 )
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          if ( (v57 & 0xFFFFFFF0) != 0 )
          {
            v47 = (void *)operator new(v59 + 1);
            v165 = v59;
            v163 = v47;
          }
          else
          {
            if ( v59 == 1 )
            {
              LOBYTE(v165) = *((_BYTE *)v55 + 16);
              v47 = v46;
              goto LABEL_66;
            }
            v47 = v46;
            if ( !v59 )
            {
LABEL_66:
              n = v59;
              *((_BYTE *)v47 + v59) = 0;
              v48 = ptr;
              v49 = *(unsigned __int8 *)ptr;
              *(_BYTE *)ptr = v49 + 1;
              v50 = 4 * (v49 + 3);
              v51 = (char *)&v48[v50];
              v52 = (_BYTE *)v48[v50];
              if ( v163 == v46 )
              {
                v66 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v52 = v165;
                  else
                    memcpy(v52, v46, n);
                  v66 = n;
                  v52 = *(_BYTE **)v51;
                }
                *((_QWORD *)v51 + 1) = v66;
                v52[v66] = 0;
                v52 = v163;
                goto LABEL_70;
              }
              if ( v52 == (_BYTE *)&v48[v50 + 2] )
              {
                *(_QWORD *)v51 = v163;
                *((_QWORD *)v51 + 1) = n;
                *((_QWORD *)v51 + 2) = v165;
              }
              else
              {
                v53 = v48[4 * (int)v49 + 14];
                *(_QWORD *)v51 = v163;
                *((_QWORD *)v51 + 1) = n;
                *((_QWORD *)v51 + 2) = v165;
                if ( v52 )
                {
                  v163 = v52;
                  v165 = v53;
LABEL_70:
                  n = 0;
                  *v52 = 0;
                  if ( v163 != v46 )
                    operator delete(v163);
                  sub_AEA040((__int64)v45);
                  goto LABEL_73;
                }
              }
              v163 = v46;
              v52 = v46;
              goto LABEL_70;
            }
          }
          memcpy(v47, v58, v59);
          v47 = v163;
          goto LABEL_66;
        }
      }
LABEL_83:
      if ( v151 )
      {
        sub_1564F70(v151);
        v151 = 0;
      }
      sub_146B5E0((__int64 *)&v163, (__int64)v6, 0x400049u, 1, 0);
      sub_1A32910(v6[6].m128i_i64[0], a2, v200, v183);
      if ( v6[2].m128i_i16[0] == 24 )
      {
        v78 = sub_153CA60(v6, 0);
        if ( v163 )
        {
          sub_1564F70(v163);
          v163 = nullptr;
        }
        for ( ; v156; --v156 )
          sub_1564F70(v155);
        if ( v150 )
        {
          sub_1564F70(v150);
          v150 = 0;
        }
        v60 = v6[6].m128i_i64[0];
        if ( v78 != 1 && !v141 && (v206 & 1) == 0 && ((*(_DWORD *)v200[0] >> 12) & 0x7F) != 0x45 )
        {
          v61 = sub_1A36040(v60, v127, v78 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_88;
        }
      }
      else
      {
        sub_1564840(&ptr, v6, &v6[1], 1621);
        sub_AEA040((__int64)&ptr);
        v60 = v6[6].m128i_i64[0];
      }
      v61 = 1;
      sub_1A2F720(v60, v127, *(_QWORD *)(v60 + 608), 0);
LABEL_88:
      if ( v163 )
        sub_1564F70(v163);
      v62 = v192;
      v63 = &v192[32 * (unsigned int)v193];
      if ( v192 != v63 )
      {
        do
        {
          v63 -= 32;
          v64 = *((void ***)v63 + 3);
          if ( v64 )
          {
            if ( *v64 != v64 + 2 )
              free(*v64);
            operator delete(v64, 0x70u);
          }
        }
        while ( v62 != v63 );
        v63 = v192;
      }
      if ( v63 != (unsigned __int8 *)&v194 )
        free(v63);
      if ( v151 )
        sub_1564F70(v151);
      goto LABEL_101;
    }
    v178 = v6;
    ptr = &v6[122];
    v104 = v6[122].m128i_i8[0];
    v6[122].m128i_i8[0] = 1;
    LOBYTE(v177) = v104;
    WORD2(v179) = 63;
    LODWORD(v179) = 1507350;
    v180 = sub_146A990;
    v181 = 0;
    v182 = 0;
    sub_149FA40((__int64)&ptr);
    v135 = v182;
    if ( v6[2].m128i_i16[0] == 23 )
    {
LABEL_214:
      v32 = 1;
      sub_14808E0((__int64)&ptr, v31->m128i_i64, v105, v106, v107, v108);
      v147 = HIDWORD(v182);
      v130 = HIDWORD(v182);
      *(_BYTE *)ptr = v177;
      v33 = v6[2].m128i_u16[0];
      goto LABEL_35;
    }
    sub_15F2300(v6[6].m128i_i64[0], v6[159].m128i_i32[1] - v128);
    v31 = (__m128i *)v202;
    if ( v200[2] )
    {
      v109 = 0;
      if ( (*v200[0] & 7) == 1 || ((1LL << v202) & 0x781) == 0 )
      {
LABEL_212:
        sub_149ADE0((__int64)v6, v202, (int *)&v168, (__int64)&v192, &v149, v109, a3, a4);
        if ( sub_15F26C0(v6[6].m128i_i64[0]) )
        {
          v111 = v6[159].m128i_i32[1] + 1 - v128;
          v128 = 1;
          v6[159].m128i_i32[1] = v111;
        }
        goto LABEL_214;
      }
      if ( !v204 )
      {
LABEL_211:
        v109 = 1;
        goto LABEL_212;
      }
      v110 = v203;
      if ( *(_DWORD *)v203 == 6 )
      {
        while ( v110 != &v203[18 * v204 - 18] )
        {
          v110 += 18;
          if ( *(_DWORD *)v110 != 6 )
            goto LABEL_232;
        }
        goto LABEL_211;
      }
    }
LABEL_232:
    v109 = 0;
    goto LABEL_212;
  }
  v61 = 1;
  sub_1A2F720(v6[6].m128i_i64[0], v127, *(_QWORD *)(v6[6].m128i_i64[0] + 608), 0);
  if ( ptr != &v178 )
    free(ptr);
  v128 = 0;
LABEL_101:
  while ( v156 )
  {
    sub_1564F70(v155);
    --v156;
  }
  sub_15DCED0(v172, &v172);
  if ( v173 != v175 )
    free(v173);
  if ( v169 != v171 )
    free(v169);
  if ( v150 )
    sub_1564F70(v150);
  v6[159].m128i_i32[1] -= v128;
  sub_147A7A0((char *)v200);
  if ( v191 )
    free(v190);
  sub_15DCED0(v187, &v187);
  if ( v188 != &v189 )
    free(v188);
  if ( v185 != &v186 )
    free(v185);
  v160[0] = &off_2B552D0;
  sub_22338A0(v160);
  return v61;
}
