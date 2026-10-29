__int64 __fastcall sub_944AC0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, _BYTE *a5, double a6)
{
  char *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rax
  int *v12; // rbx
  int *j; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 k; // rbx
  int v22; // edi
  char v23; // al
  char v24; // si
  void *v25; // r14
  void *v26; // r14
  int *v27; // rdx
  void *v28; // rbp
  __int64 v29; // r15
  __int64 v30; // rsi
  void *v31; // r12
  unsigned int v32; // r13d
  __int64 v33; // r14
  _DWORD *v34; // rbx
  int *v35; // r12
  int v36; // eax
  int v37; // eax
  void *v38; // r12
  __int64 v39; // r13
  __int64 v40; // r12
  int *v41; // r14
  int *v42; // r12
  __m128 si128; // xmm0
  int *v44; // r14
  int *m; // r12
  int v46; // r15d
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // r14
  __int64 v51; // rbp
  __int64 *v52; // r15
  __int64 v53; // rbp
  __int64 v54; // r13
  int *v55; // r12
  int *v56; // rbp
  int *v57; // rsi
  void *v59; // r14
  int v60; // r12d
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // r13
  unsigned __int64 *v66; // r14
  unsigned int v67; // r15d
  int v68; // r13d
  __int64 *v69; // r14
  _QWORD *v70; // r14
  __int64 v71; // rdi
  unsigned int v72; // eax
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // r13
  __int64 v76; // r14
  __int64 v77; // r15
  char *v78; // r15
  __int64 *(__fastcall *v79)(__int64 *, _QWORD *, unsigned int, __int64); // rax
  __int64 *v80; // r15
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdi
  char *v85; // r15
  char *v86; // r14
  int *v87; // rbx
  int *i; // rbp
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rdi
  unsigned int v92; // esi
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rax
  void *v96; // [rsp+0h] [rbp-E38h]
  _QWORD *v97; // [rsp+8h] [rbp-E30h]
  _QWORD *v98; // [rsp+10h] [rbp-E28h]
  _BYTE *v99; // [rsp+18h] [rbp-E20h]
  int *v100; // [rsp+20h] [rbp-E18h]
  int *v101; // [rsp+20h] [rbp-E18h]
  int v102[2]; // [rsp+28h] [rbp-E10h] BYREF
  void *v103; // [rsp+30h] [rbp-E08h]
  int v104[2]; // [rsp+38h] [rbp-E00h]
  void *v105[2]; // [rsp+40h] [rbp-DF8h] BYREF
  int v106; // [rsp+50h] [rbp-DE8h]
  unsigned int v107; // [rsp+54h] [rbp-DE4h]
  void *v108; // [rsp+58h] [rbp-DE0h]
  void *v109; // [rsp+60h] [rbp-DD8h]
  __int64 v110; // [rsp+68h] [rbp-DD0h]
  int **v111; // [rsp+70h] [rbp-DC8h]
  unsigned int v112; // [rsp+78h] [rbp-DC0h]
  int v113; // [rsp+7Ch] [rbp-DBCh]
  __int64 *v114; // [rsp+80h] [rbp-DB8h]
  __int64 v115; // [rsp+88h] [rbp-DB0h]
  __int64 v116; // [rsp+90h] [rbp-DA8h]
  __int64 *v117; // [rsp+98h] [rbp-DA0h]
  int v118; // [rsp+A0h] [rbp-D98h]
  int v119[2]; // [rsp+A8h] [rbp-D90h] BYREF
  void *v120[2]; // [rsp+B0h] [rbp-D88h] BYREF
  int v121[2]; // [rsp+C0h] [rbp-D78h] BYREF
  int v122[2]; // [rsp+C8h] [rbp-D70h]
  int v123[2]; // [rsp+D0h] [rbp-D68h] BYREF
  int v124[2]; // [rsp+D8h] [rbp-D60h]
  int v125[2]; // [rsp+E0h] [rbp-D58h] BYREF
  __int64 v126; // [rsp+E8h] [rbp-D50h]
  int v127; // [rsp+F0h] [rbp-D48h] BYREF
  char v128; // [rsp+F4h] [rbp-D44h]
  __int64 v129; // [rsp+F8h] [rbp-D40h]
  _QWORD *v130; // [rsp+100h] [rbp-D38h] BYREF
  __int64 v131; // [rsp+108h] [rbp-D30h]
  __int64 v132; // [rsp+110h] [rbp-D28h] BYREF
  __int64 v133; // [rsp+118h] [rbp-D20h]
  int v134; // [rsp+120h] [rbp-D18h] BYREF
  char v135; // [rsp+124h] [rbp-D14h]
  __int64 v136; // [rsp+128h] [rbp-D10h]
  int v137; // [rsp+130h] [rbp-D08h] BYREF
  char v138; // [rsp+134h] [rbp-D04h]
  __int64 v139; // [rsp+138h] [rbp-D00h]
  char v140[32]; // [rsp+140h] [rbp-CF8h] BYREF
  int v141[2]; // [rsp+160h] [rbp-CD8h] BYREF
  __int64 *v142; // [rsp+168h] [rbp-CD0h]
  __int64 v143; // [rsp+170h] [rbp-CC8h] BYREF
  __int64 v144; // [rsp+178h] [rbp-CC0h]
  __int64 v145; // [rsp+180h] [rbp-CB8h]
  __int64 v146; // [rsp+188h] [rbp-CB0h]
  __int64 v147; // [rsp+190h] [rbp-CA8h]
  __int64 v148; // [rsp+198h] [rbp-CA0h]
  _BYTE v149[600]; // [rsp+1C0h] [rbp-C78h] BYREF
  __int64 v150; // [rsp+418h] [rbp-A20h]
  __int64 v151; // [rsp+420h] [rbp-A18h]
  __int64 v152; // [rsp+428h] [rbp-A10h]
  __int64 v153; // [rsp+430h] [rbp-A08h]
  __int64 v154; // [rsp+438h] [rbp-A00h]
  __int64 v155; // [rsp+440h] [rbp-9F8h]
  __int64 v156; // [rsp+448h] [rbp-9F0h]
  __int64 v157; // [rsp+450h] [rbp-9E8h]
  __int64 v158; // [rsp+458h] [rbp-9E0h]
  __int64 v159; // [rsp+460h] [rbp-9D8h]
  __int64 v160; // [rsp+468h] [rbp-9D0h]
  __int64 v161; // [rsp+470h] [rbp-9C8h]
  __int64 v162; // [rsp+478h] [rbp-9C0h]
  __int64 v163; // [rsp+480h] [rbp-9B8h]
  __int64 v164; // [rsp+488h] [rbp-9B0h]
  __int64 v165; // [rsp+490h] [rbp-9A8h]
  _BYTE v166[600]; // [rsp+4A0h] [rbp-998h] BYREF
  __int64 v167; // [rsp+6F8h] [rbp-740h]
  __int64 v168; // [rsp+700h] [rbp-738h]
  __int64 v169; // [rsp+708h] [rbp-730h]
  __int64 v170; // [rsp+710h] [rbp-728h]
  __int64 v171; // [rsp+718h] [rbp-720h]
  __int64 v172; // [rsp+720h] [rbp-718h]
  __int64 v173; // [rsp+728h] [rbp-710h]
  __int64 v174; // [rsp+730h] [rbp-708h]
  __int64 v175; // [rsp+738h] [rbp-700h]
  __int64 v176; // [rsp+740h] [rbp-6F8h]
  __int64 v177; // [rsp+748h] [rbp-6F0h]
  __int64 v178; // [rsp+750h] [rbp-6E8h]
  __int64 v179; // [rsp+758h] [rbp-6E0h]
  __int64 v180; // [rsp+760h] [rbp-6D8h]
  __int64 v181; // [rsp+768h] [rbp-6D0h]
  __int64 v182; // [rsp+770h] [rbp-6C8h]
  __int64 v183; // [rsp+778h] [rbp-6C0h]
  _QWORD v184[199]; // [rsp+780h] [rbp-6B8h] BYREF
  __int64 v185; // [rsp+DB8h] [rbp-80h]

  v97 = (_QWORD *)a2;
  v9 = *(char **)(a2 + 24);
  v110 = a1;
  v10 = v184;
  v114 = a4;
  v98 = v184;
  v113 = a3;
  sub_8C3600((__int64)v184, (__int64)v9);
  v11 = *(_QWORD *)(a2 + 288);
  *a5 = 0;
  v115 = a3;
  v111 = (int **)(v11 + 8LL * a3);
  if ( (unsigned int)sub_180B130(v184) > 3 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v87 = *v111;
      if ( *v111 )
      {
        for ( i = &v87[10 * *(v87 - 1)]; i != v87; v87 += 10 )
        {
          v89 = sub_180B150(v10, v9);
          sub_2FCE40(v89, (__int64)(v87 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_QWORD *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v90 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v91 = sub_2FCE40(v90, v97[37] + 32 * v115);
      sub_91CD00(v91, "\n");
      sub_186A500(v91, "\n");
    }
    else
    {
      v12 = *v111;
      if ( *v111 )
      {
        for ( j = &v12[10 * *(v12 - 1)]; j != v12; v12 += 10 )
        {
          v14 = sub_180B150(v10, v9);
          sub_2FCE40(v14, (__int64)(v12 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_QWORD *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v15 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = sub_2FCE40(v15, v97[37] + 32 * v115);
      sub_91CD00(v16, "\n");
    }
  }
  v99 = v149;
  sub_1839FF0(v149);
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 1;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 1;
  v165 = 0;
  v103 = v166;
  sub_1839FF0(v166);
  v167 = 0;
  v168 = 0;
  v183 = 0x3F1A36E2EB1C432DLL;
  v169 = 0;
  v170 = 0;
  v17 = v97[4];
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 1;
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 1;
  v182 = 0;
  if ( v17 )
    v107 = *(_DWORD *)(v17 - 4);
  else
    v107 = 0;
  v18 = v97[30];
  if ( v18 )
  {
    LODWORD(v109) = *(_DWORD *)(v18 - 4);
    v112 = v107 + (_DWORD)v109;
  }
  else
  {
    LODWORD(v109) = 0;
    v112 = v107;
  }
  v19 = v112;
  v20 = v97[36];
  if ( v20 )
    v19 = *(_DWORD *)(v20 - 4) + v112;
  sub_8C3910((__int64)v184, v19);
  if ( !v107 )
    goto LABEL_38;
  for ( k = 0; ; ++k )
  {
    LOBYTE(v121[1]) &= 0xFCu;
    v27 = (int *)(v97[42] + 32 * k);
    LOBYTE(v123[1]) &= 0xFCu;
    v121[0] = 0;
    *(_QWORD *)v122 = 0;
    v123[0] = 1;
    *(_QWORD *)v124 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v121, v27);
    v28 = qword_1C7F2C0;
    v125[0] = 0;
    LOBYTE(v125[1]) &= 0xFCu;
    v128 &= 0xFCu;
    v126 = 0;
    v127 = 1;
    v129 = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      *(_QWORD *)v102 = &qword_1C7F2A0;
      sub_182C690(qword_1C7F2C0, v125, &qword_1C7F2A0);
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      {
LABEL_16:
        v128 &= ~1u;
        v127 = qword_1C7F2B0;
        goto LABEL_17;
      }
    }
    else
    {
      v125[0] = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
        goto LABEL_16;
    }
    sub_182C690(v28, &v127, &qword_1C7F2B0);
LABEL_17:
    v135 &= 0xFCu;
    v138 &= 0xFCu;
    v134 = 0;
    v136 = 0;
    v137 = 1;
    v139 = 0;
    if ( (v125[1] & 1) != 0 )
      sub_182EA00(v149, &v134, v125);
    else
      v134 = v125[0];
    if ( (v128 & 1) != 0 )
    {
      sub_182EA00(v149, &v137, &v127);
    }
    else
    {
      v138 &= ~1u;
      v137 = v127;
    }
    BYTE4(v130) &= 0xFCu;
    BYTE4(v132) &= 0xFCu;
    LODWORD(v130) = 0;
    v131 = 0;
    LODWORD(v132) = 1;
    v133 = 0;
    if ( (v121[1] & 1) != 0 )
      sub_182EA00(v149, &v130, v121);
    else
      LODWORD(v130) = v121[0];
    if ( (v123[1] & 1) != 0 )
    {
      sub_182EA00(v149, &v132, v123);
      v23 = BYTE4(v132);
      v22 = v132;
      v24 = BYTE4(v132) & 1;
    }
    else
    {
      v22 = v123[0];
      v23 = BYTE4(v132);
      v24 = 0;
    }
    LODWORD(v143) = v22;
    v141[0] = (int)v130;
    LOBYTE(v141[1]) = BYTE4(v130) & 3 | v141[1] & 0xFC;
    v142 = (__int64 *)v131;
    BYTE4(v143) = BYTE4(v143) & 0xFC | v24 | v23 & 2;
    v144 = v133;
    LODWORD(v145) = v134;
    BYTE4(v145) = v135 & 3 | BYTE4(v145) & 0xFC;
    v146 = v136;
    LODWORD(v147) = v137;
    BYTE4(v147) = v138 & 3 | BYTE4(v147) & 0xFC;
    v148 = v139;
    sub_8B2CA0(v184, k, (__int64)v141);
    sub_8AD4E0((__int64)v103, (__int64)v141);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v125);
    sub_182CBA0(v25, &v127);
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v121);
    sub_182CBA0(v26, v123);
    if ( v107 == k + 1 )
      break;
  }
  v29 = 0;
  v105[0] = &v134;
  while ( 1 )
  {
    v30 = **(_QWORD **)(v97[4] + 8 * v29);
    *(_QWORD *)v141 = 0;
    v142 = nullptr;
    v143 = 1;
    v144 = 0;
    if ( (unsigned __int8)sub_1666AE0(v97 + 18, v30, v141, v105[0]) )
    {
      if ( !v141[0] )
        break;
    }
    v59 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v141);
    sub_182CBA0(v59, &v143);
    if ( k == v29 )
      goto LABEL_38;
    ++v29;
  }
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v141);
  sub_182CBA0(v31, &v143);
  *(_QWORD *)v141 = 0;
  v142 = nullptr;
  v143 = 1;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_8B3D10(v184, v29, (__int64)v141);
  *(_QWORD *)v141 = 0;
  v142 = nullptr;
  v143 = 1;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  sub_8B3EE0(v184, v29, (__int64)v141);
LABEL_38:
  *(_QWORD *)v141 = 1;
  v142 = nullptr;
  v120[1] = v149;
  v143 = 1;
  v144 = 0;
  v120[0] = nullptr;
  *(_QWORD *)v104 = v120;
  sub_8ADEE0((int **)v120, v141);
  v142 = nullptr;
  *(_QWORD *)v141 = 0xFFFFFFFFLL;
  v143 = 1;
  v144 = 0;
  sub_8ADEE0((int **)v120, v141);
  v142 = nullptr;
  *(_QWORD *)v141 = 0xFFFFFFFFLL;
  v143 = 1;
  v144 = 0;
  sub_8ADEE0((int **)v120, v141);
  *(_QWORD *)v119 = 0;
  v100 = (int *)v120[0];
  *(void **)v102 = v120[1];
  v108 = v119;
  sub_83BF90(v119, 3u);
  v32 = v107;
  v33 = 0;
  v34 = *(_DWORD **)v119;
  LODWORD(v105[0]) = (_DWORD)v109 + v107;
  if ( (_DWORD)v109 )
  {
    do
    {
      v35 = (int *)(v33 + v97[30]);
      if ( *v35 == -1 )
        goto LABEL_43;
      v36 = v35[1];
      if ( v36 == -1 )
        goto LABEL_43;
      *v34 = v36;
      v37 = *v35;
      v34[2] = v32;
      v34[1] = v37;
      sub_8B15E0((__int64)v184, v32, 3u, (__int64)v34, v100);
      LOBYTE(v121[1]) &= 0xFCu;
      LOBYTE(v123[1]) &= 0xFCu;
      v121[0] = 0;
      *(_QWORD *)v122 = 0;
      v123[0] = 1;
      *(_QWORD *)v124 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v121, v35 + 2);
      v38 = qword_1C7F2C0;
      v125[0] = 0;
      LOBYTE(v125[1]) &= 0xFCu;
      v128 &= 0xFCu;
      v126 = 0;
      v127 = 1;
      v129 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      {
        v109 = &qword_1C7F2A0;
        sub_182C690(qword_1C7F2C0, v125, &qword_1C7F2A0);
        if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
        {
LABEL_48:
          sub_182C690(v38, &v127, &qword_1C7F2B0);
          goto LABEL_42;
        }
      }
      else
      {
        v125[0] = qword_1C7F2A0;
        if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
          goto LABEL_48;
      }
      v128 &= ~1u;
      v127 = qword_1C7F2B0;
LABEL_42:
      v135 &= 0xFCu;
      v138 &= 0xFCu;
      v134 = 0;
      v136 = 0;
      v137 = 1;
      v139 = 0;
      v109 = v125;
      sub_8ADE80((__int64)v149, (__int64)&v134, v125);
      BYTE4(v130) &= 0xFCu;
      BYTE4(v132) &= 0xFCu;
      LODWORD(v130) = 0;
      v131 = 0;
      LODWORD(v132) = 1;
      v133 = 0;
      sub_8ADE80((__int64)v149, (__int64)&v130, v121);
      v141[0] = (int)v130;
      LOBYTE(v141[1]) = BYTE4(v130) & 3 | v141[1] & 0xFC;
      v142 = (__int64 *)v131;
      LODWORD(v143) = v132;
      BYTE4(v143) = BYTE4(v132) & 3 | BYTE4(v143) & 0xFC;
      v144 = v133;
      LODWORD(v145) = v134;
      BYTE4(v145) = v135 & 3 | BYTE4(v145) & 0xFC;
      v146 = v136;
      LODWORD(v147) = v137;
      BYTE4(v147) = v138 & 3 | BYTE4(v147) & 0xFC;
      v148 = v139;
      sub_8B3EE0(v184, v32, (__int64)v141);
      sub_8AD4E0((__int64)v103, (__int64)v141);
      sub_25A130((char *)v125);
      sub_25A130((char *)v121);
LABEL_43:
      v33 += 48;
      ++v32;
    }
    while ( LODWORD(v105[0]) != v32 );
  }
  v39 = v113 + v112;
  if ( v100 )
  {
    v40 = (unsigned int)*(v100 - 1);
    if ( (_DWORD)v40 )
    {
      v41 = v100;
      v42 = &v100[8 * v40];
      do
      {
        sub_182EF00(*(_QWORD *)v102, v41);
        sub_182EF00(*(_QWORD *)v102, v41 + 4);
        v41 += 8;
      }
      while ( v42 != v41 );
    }
    *(v100 - 1) = 0;
  }
  si128 = _mm_loadh_ps((const double *)v102);
  if ( v34 )
    *(v34 - 1) = 0;
  v44 = *v111;
  if ( *v111 )
  {
    for ( m = &v44[10 * *(v44 - 1)]; v44 != m; ++*(v34 - 1) )
    {
      *(__m128 *)v120 = si128;
      sub_8ADEE0(*(int ***)v104, v44 + 2);
      si128 = (__m128)_mm_load_si128((const __m128i *)v120);
      v46 = *v44;
      if ( !v34 || (v47 = (unsigned int)*(v34 - 1), (_DWORD)v47 == *(v34 - 2)) )
      {
        *(__m128 *)v105 = si128;
        *(_QWORD *)v119 = v34;
        *(void **)v102 = v120[1];
        sub_2FD3F0((unsigned int **)v108);
        v34 = *(_DWORD **)v119;
        si128 = (__m128)_mm_load_si128((const __m128i *)v105);
        v47 = *(unsigned int *)(*(_QWORD *)v119 - 4LL);
      }
      v44 += 10;
      v34[v47] = v46;
    }
  }
  *(_QWORD *)v141 = 1;
  v142 = nullptr;
  v143 = 1;
  v144 = 0;
  *(__m128 *)v120 = si128;
  sub_8ADEE0(*(int ***)v104, v141);
  v101 = (int *)v120[0];
  *(void **)v102 = v120[1];
  if ( !v34 || (v48 = (unsigned int)*(v34 - 1), (_DWORD)v48 == *(v34 - 2)) )
  {
    *(_QWORD *)v119 = v34;
    sub_2FD3F0((unsigned int **)v108);
    v34 = *(_DWORD **)v119;
    v48 = *(unsigned int *)(*(_QWORD *)v119 - 4LL);
  }
  v34[v48] = v39;
  v49 = *(v34 - 1) + 1;
  *(v34 - 1) = v49;
  v50 = (unsigned int)sub_8B15E0((__int64)v184, v39, v49, (__int64)v34, v101);
  if ( (unsigned int)sub_8B36C0((__int64)v184)
    && (v60 = sub_8B4740(v184, v39),
        sub_1745AB0(
          (int)v184,
          v39,
          v61,
          v62,
          v63,
          v64,
          v96,
          v97,
          v184,
          v149,
          v101,
          v102[0],
          (int)v103,
          v104[0],
          (int)v105[0],
          (int)v105[1],
          v106,
          (int)v108,
          (int)v109,
          v110,
          (int)v111,
          v112,
          (int)v114,
          v115,
          v116,
          (int)v117,
          v118,
          v119[0],
          (int)v120[0],
          (int)v120[1],
          v121[0],
          v122[0],
          v123[0],
          v124[0],
          v125[0],
          v126),
        v60 == 1) )
  {
    v130 = nullptr;
    v65 = v185 + 232 * v39;
    v131 = 0;
    v132 = 1;
    v133 = 0;
    v108 = &v130;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v130, (int *)(v65 + 40));
    sub_3EBD70((__int64)v141, (__int64)&v130);
    *(_QWORD *)v121 = 0;
    *(_QWORD *)v122 = 0;
    *(_QWORD *)v123 = 1;
    *(_QWORD *)v124 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v121, (int *)(v65 + 8));
    v109 = v125;
    sub_3EBD70((__int64)v125, (__int64)v121);
    v105[0] = &v134;
    sub_894A60((__int64)&v134, (__int64)v109, (__int64)v141);
    sub_25A130((char *)v109);
    sub_25A130((char *)v121);
    sub_25A130((char *)v141);
    sub_25A130((char *)&v130);
    v66 = (unsigned __int64 *)(v184[185] + 16 * v50);
    sub_89A080((__int64)v141, v66, 1);
    v67 = v141[0];
    v117 = v142;
    sub_89A080((__int64)v141, v66, 0);
    v68 = v141[0];
    v69 = (__int64 *)(v97[38] + 16 * v115);
    v116 = v97[3];
    sub_2FCDE0(v69);
    if ( v68 == v67 )
    {
      v111 = nullptr;
    }
    else
    {
      v70 = v69 + 1;
      v111 = nullptr;
      v71 = *v117;
      do
      {
        v72 = *(_DWORD *)(v71 + 40LL * v67 + 32);
        if ( v72 >= v107 && v72 < v112 )
        {
          v92 = *(_DWORD *)(v97[30] + 48LL * (v72 - v107) + 40);
          if ( v92 != -2 )
          {
            v93 = v97[2];
            *(_QWORD *)v125 = v111;
            v126 = v116;
            sub_894B80(v93, v92, (__int64 *)v109);
            v111 = *(int ***)v125;
            v116 = v126;
            v130 = *(_QWORD **)v125;
            if ( *(_QWORD *)v125 )
              ++*(_DWORD *)(*(_QWORD *)v125 + 8LL);
            sub_91D790(v70, v108);
            v71 = *v117;
          }
        }
        ++v67;
        if ( v71 )
        {
          v73 = v71 + 40LL * v67;
          while ( v67 < *(_DWORD *)(v71 - 4) )
          {
            v74 = *(_DWORD *)(v73 + 32);
            v73 += 40;
            if ( v74 != -1 )
              break;
            ++v67;
          }
        }
      }
      while ( v68 != v67 );
    }
    if ( v107 )
    {
      v75 = 0;
      v76 = 0;
      v77 = 32LL * v107;
      do
      {
        v130 = nullptr;
        v131 = 0;
        v132 = 1;
        v133 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v108, (int *)(v76 + v185 + 8));
        *(_QWORD *)v141 = 0;
        v142 = nullptr;
        v143 = 1;
        v144 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v141, (int *)v108);
        sub_27B950((__int64)qword_1C7F2C0, v75 + v97[42], v141);
        v75 += 32;
        v76 += 232;
        sub_25A130((char *)v141);
        sub_25A130((char *)v108);
      }
      while ( v75 != v77 );
    }
    v130 = nullptr;
    v131 = 0;
    v132 = 1;
    v133 = 0;
    sub_182CBA0(qword_1C7F2C0, &v132);
    v78 = (char *)v108;
    LODWORD(v132) = 1;
    BYTE4(v132) &= ~1u;
    sub_8AD320((__int64)v141, (__int64)v108, (__int64)v105[0]);
    sub_25A130(v78);
    v79 = *(__int64 *(__fastcall **)(__int64 *, _QWORD *, unsigned int, __int64))(*v97 + 424LL);
    if ( v79 == sub_9218A0 )
      sub_921340((__int64 *)v78, v97, v113, (__int64)v141, 1);
    else
      v79((__int64 *)v108, v97, v113, (__int64)v141);
    v80 = v114;
    v81 = v131;
    v82 = *v114;
    *v114 = (__int64)v130;
    v130 = (_QWORD *)v82;
    sub_91CCE0(v82, v81);
    if ( (unsigned int)sub_180B130(v82) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128_u64) )
      {
        sub_186A4C0(*(double *)si128.m128_u64);
        v83 = sub_180B150(v82, v81);
        v84 = sub_160EBE0(v83, v80);
        sub_91CD00(v84, "\n");
        sub_186A500(v84, "\n");
      }
      else
      {
        v94 = sub_180B150(v82, v81);
        v95 = sub_160EBE0(v94, v114);
        sub_91CD00(v95, "\n");
      }
    }
    v85 = (char *)v105[0];
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v105[0], v97[37] + 32 * v115, (__int64)v105[0]);
    v130 = nullptr;
    v131 = 0;
    v132 = 1;
    v133 = 0;
    sub_182CBA0(qword_1C7F2C0, &v132);
    v86 = (char *)v108;
    LODWORD(v132) = 1;
    BYTE4(v132) &= ~1u;
    sub_8AD320(v110, (__int64)v108, (__int64)v85);
    sub_25A130(v86);
    sub_2A6060((__int64)v141);
    sub_91CCE0((__int64)v111, v116);
    sub_25A130(v140);
    sub_25A130(v85);
  }
  else
  {
    v51 = *(_QWORD *)(v97[3] + 864LL);
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v52 = v114;
    sub_91CCE0(*v114, v114[1]);
    *v52 = v51;
    sub_8AD320(v110, (__int64)&qword_1C7F280, (__int64)&qword_1C7F200);
  }
  if ( v101 )
  {
    v53 = (unsigned int)*(v101 - 1);
    if ( (_DWORD)v53 )
    {
      v54 = *(_QWORD *)v102;
      v55 = v101;
      v56 = &v101[8 * v53];
      do
      {
        sub_182EF00(v54, v55);
        v57 = v55 + 4;
        v55 += 8;
        sub_182EF00(v54, v57);
      }
      while ( v55 != v56 );
    }
    *(v101 - 1) = 0;
    sub_186B220(v101 - 2);
  }
  sub_186B220(v34 - 2);
  sub_184C8D0(v103);
  sub_184C8D0(v99);
  sub_8AB150(v98);
  return v110;
}

