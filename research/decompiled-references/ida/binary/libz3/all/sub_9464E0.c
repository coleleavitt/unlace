__int64 __fastcall sub_9464E0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, _BYTE *a5, double a6)
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
  __int64 v21; // rbx
  int v22; // edi
  char v23; // al
  char v24; // si
  void *v25; // r14
  int *v26; // r12
  int v27; // eax
  int v28; // eax
  __int64 v29; // r14
  __int64 v30; // rsi
  void *v31; // rbp
  void *v32; // r15
  int v33; // eax
  unsigned int v34; // r13d
  _DWORD *v35; // rbx
  int *v36; // r12
  int v37; // eax
  int v38; // eax
  int *v39; // r8
  int v40; // eax
  int v41; // eax
  __m128i v42; // xmm0
  __int64 v43; // r12
  __int64 v44; // rbp
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 v47; // rax
  __m128i si128; // xmm0
  int *v49; // r13
  int *k; // rbp
  int v51; // r14d
  __int64 v52; // rax
  void *v53; // r15
  void *v54; // r15
  __int64 v55; // rax
  int *v56; // r8
  unsigned int v57; // edx
  __int64 v58; // r13
  __int64 v59; // rbp
  __int64 *v60; // r14
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rbp
  __int64 v64; // rsi
  __int64 v65; // rax
  int v67; // ebp
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // r12
  unsigned __int64 *v73; // r13
  unsigned int v74; // r12d
  __int64 *v75; // r13
  __int64 v76; // rax
  int v77; // r8d
  _QWORD *v78; // r13
  int *v79; // rsi
  unsigned int v80; // edx
  int *v81; // rdx
  int v82; // eax
  __int64 v83; // r12
  __int64 v84; // r13
  __int64 v85; // r14
  unsigned int v86; // edx
  _QWORD *v87; // rax
  char *v88; // r14
  __int64 *(__fastcall *v89)(__int64 *, _QWORD *, unsigned int, __int64); // rax
  __int64 *v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdi
  char *v95; // r14
  char *v96; // rbp
  int *v97; // rbx
  int *i; // rbp
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rdi
  unsigned int v102; // ecx
  __int64 v103; // rdi
  int v104; // r8d
  __int64 v105; // rax
  __int64 v106; // rax
  char *v107; // [rsp+0h] [rbp-E28h]
  _BYTE *v108; // [rsp+8h] [rbp-E20h]
  _QWORD *v109; // [rsp+10h] [rbp-E18h]
  _QWORD *v110; // [rsp+18h] [rbp-E10h]
  __m128i v111; // [rsp+20h] [rbp-E08h] BYREF
  void *v112[2]; // [rsp+30h] [rbp-DF8h] BYREF
  int v113[2]; // [rsp+40h] [rbp-DE8h]
  void *v114; // [rsp+48h] [rbp-DE0h]
  int v115[2]; // [rsp+50h] [rbp-DD8h]
  int v116[2]; // [rsp+58h] [rbp-DD0h]
  unsigned int v117; // [rsp+60h] [rbp-DC8h]
  unsigned int v118; // [rsp+64h] [rbp-DC4h]
  __int64 v119; // [rsp+68h] [rbp-DC0h]
  int **v120; // [rsp+70h] [rbp-DB8h]
  __int64 *v121; // [rsp+78h] [rbp-DB0h]
  __int64 v122; // [rsp+80h] [rbp-DA8h]
  int v123; // [rsp+88h] [rbp-DA0h]
  int v124; // [rsp+8Ch] [rbp-D9Ch]
  int v125; // [rsp+90h] [rbp-D98h]
  int v126[2]; // [rsp+98h] [rbp-D90h] BYREF
  void *v127[2]; // [rsp+A0h] [rbp-D88h] BYREF
  int v128[2]; // [rsp+B0h] [rbp-D78h] BYREF
  int v129[2]; // [rsp+B8h] [rbp-D70h]
  int v130[2]; // [rsp+C0h] [rbp-D68h] BYREF
  int v131[2]; // [rsp+C8h] [rbp-D60h]
  int v132[2]; // [rsp+D0h] [rbp-D58h] BYREF
  int v133[2]; // [rsp+D8h] [rbp-D50h]
  int v134; // [rsp+E0h] [rbp-D48h] BYREF
  char v135; // [rsp+E4h] [rbp-D44h]
  __int64 v136; // [rsp+E8h] [rbp-D40h]
  __int64 v137; // [rsp+F0h] [rbp-D38h] BYREF
  __int64 v138; // [rsp+F8h] [rbp-D30h]
  __int64 v139; // [rsp+100h] [rbp-D28h] BYREF
  __int64 v140; // [rsp+108h] [rbp-D20h]
  int v141; // [rsp+110h] [rbp-D18h] BYREF
  char v142; // [rsp+114h] [rbp-D14h]
  __int64 v143; // [rsp+118h] [rbp-D10h]
  int v144; // [rsp+120h] [rbp-D08h] BYREF
  char v145; // [rsp+124h] [rbp-D04h]
  __int64 v146; // [rsp+128h] [rbp-D00h]
  char v147[32]; // [rsp+130h] [rbp-CF8h] BYREF
  __int64 v148; // [rsp+150h] [rbp-CD8h] BYREF
  int **v149; // [rsp+158h] [rbp-CD0h]
  __int64 v150; // [rsp+160h] [rbp-CC8h] BYREF
  __int64 v151; // [rsp+168h] [rbp-CC0h]
  __int64 v152; // [rsp+170h] [rbp-CB8h] BYREF
  __int64 v153; // [rsp+178h] [rbp-CB0h]
  __int64 v154; // [rsp+180h] [rbp-CA8h] BYREF
  __int64 v155; // [rsp+188h] [rbp-CA0h]
  _BYTE v156[600]; // [rsp+1B0h] [rbp-C78h] BYREF
  __int64 v157; // [rsp+408h] [rbp-A20h]
  __int64 v158; // [rsp+410h] [rbp-A18h]
  __int64 v159; // [rsp+418h] [rbp-A10h]
  __int64 v160; // [rsp+420h] [rbp-A08h]
  __int64 v161; // [rsp+428h] [rbp-A00h]
  __int64 v162; // [rsp+430h] [rbp-9F8h]
  __int64 v163; // [rsp+438h] [rbp-9F0h]
  __int64 v164; // [rsp+440h] [rbp-9E8h]
  __int64 v165; // [rsp+448h] [rbp-9E0h]
  __int64 v166; // [rsp+450h] [rbp-9D8h]
  __int64 v167; // [rsp+458h] [rbp-9D0h]
  __int64 v168; // [rsp+460h] [rbp-9C8h]
  __int64 v169; // [rsp+468h] [rbp-9C0h]
  __int64 v170; // [rsp+470h] [rbp-9B8h]
  __int64 v171; // [rsp+478h] [rbp-9B0h]
  __int64 v172; // [rsp+480h] [rbp-9A8h]
  _BYTE v173[600]; // [rsp+490h] [rbp-998h] BYREF
  __int64 v174; // [rsp+6E8h] [rbp-740h]
  __int64 v175; // [rsp+6F0h] [rbp-738h]
  __int64 v176; // [rsp+6F8h] [rbp-730h]
  __int64 v177; // [rsp+700h] [rbp-728h]
  __int64 v178; // [rsp+708h] [rbp-720h]
  __int64 v179; // [rsp+710h] [rbp-718h]
  __int64 v180; // [rsp+718h] [rbp-710h]
  __int64 v181; // [rsp+720h] [rbp-708h]
  __int64 v182; // [rsp+728h] [rbp-700h]
  __int64 v183; // [rsp+730h] [rbp-6F8h]
  __int64 v184; // [rsp+738h] [rbp-6F0h]
  __int64 v185; // [rsp+740h] [rbp-6E8h]
  __int64 v186; // [rsp+748h] [rbp-6E0h]
  __int64 v187; // [rsp+750h] [rbp-6D8h]
  __int64 v188; // [rsp+758h] [rbp-6D0h]
  __int64 v189; // [rsp+760h] [rbp-6C8h]
  __int64 v190; // [rsp+768h] [rbp-6C0h]
  _QWORD v191[199]; // [rsp+770h] [rbp-6B8h] BYREF
  __int64 v192; // [rsp+DA8h] [rbp-80h]

  v109 = (_QWORD *)a2;
  v9 = *(char **)(a2 + 24);
  v119 = a1;
  v10 = v191;
  v121 = a4;
  v110 = v191;
  v123 = a3;
  sub_8C3600((__int64)v191, (__int64)v9);
  v11 = *(_QWORD *)(a2 + 240);
  *a5 = 0;
  v122 = a3;
  v120 = (int **)(v11 + 8LL * a3);
  if ( (unsigned int)sub_180B130(v191) > 3 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v97 = *v120;
      if ( *v120 )
      {
        for ( i = &v97[10 * *(v97 - 1)]; i != v97; v97 += 10 )
        {
          v99 = sub_180B150(v10, v9);
          sub_2FCE40(v99, (__int64)(v97 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_QWORD *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v100 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v101 = sub_2FCE40(v100, v109[31] + 32 * v122);
      sub_91CD00(v101, "\n");
      sub_186A500(v101, "\n");
    }
    else
    {
      v12 = *v120;
      if ( *v120 )
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
      v16 = sub_2FCE40(v15, v109[31] + 32 * v122);
      sub_91CD00(v16, "\n");
    }
  }
  v111.m128i_i64[1] = (__int64)v156;
  sub_1839FF0(v156);
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 1;
  v168 = 0;
  v169 = 0;
  v170 = 0;
  v171 = 1;
  v172 = 0;
  v108 = v173;
  sub_1839FF0(v173);
  v174 = 0;
  v175 = 0;
  v190 = 0x3F1A36E2EB1C432DLL;
  v176 = 0;
  v177 = 0;
  v17 = v109[4];
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 1;
  v185 = 0;
  v186 = 0;
  v187 = 0;
  v188 = 1;
  v189 = 0;
  if ( v17 )
    v117 = *(_DWORD *)(v17 - 4);
  else
    v117 = 0;
  v18 = v109[24];
  if ( v18 )
  {
    LODWORD(v114) = *(_DWORD *)(v18 - 4);
    v118 = v117 + (_DWORD)v114;
  }
  else
  {
    LODWORD(v114) = 0;
    v118 = v117;
  }
  v19 = v118;
  v20 = v109[30];
  if ( v20 )
    v19 = *(_DWORD *)(v20 - 4) + v118;
  sub_8C3910((__int64)v191, v19);
  if ( !v117 )
    goto LABEL_32;
  v21 = 0;
  *(_QWORD *)v113 = v117;
  v111.m128i_i64[0] = (__int64)v130;
  while ( 1 )
  {
    v26 = (int *)(v109[36] + 8 * v21);
    v27 = *v26;
    LOBYTE(v128[1]) &= 0xFCu;
    LOBYTE(v130[1]) &= 0xFCu;
    *(_QWORD *)v129 = 0;
    v130[0] = 1;
    *(_QWORD *)v131 = 0;
    v128[0] = v27;
    sub_182CBA0(qword_1C7F2C0, v111.m128i_i64[0]);
    LOBYTE(v130[1]) &= ~1u;
    v130[0] = 1;
    v28 = v26[1];
    LOBYTE(v132[1]) &= 0xFCu;
    v135 &= 0xFCu;
    *(_QWORD *)v133 = 0;
    v134 = 1;
    v136 = 0;
    v132[0] = v28;
    sub_182CBA0(qword_1C7F2C0, &v134);
    v135 &= ~1u;
    v142 &= 0xFCu;
    v145 &= 0xFCu;
    v134 = 1;
    v141 = 0;
    v143 = 0;
    v144 = 1;
    v146 = 0;
    if ( (v132[1] & 1) != 0 )
    {
      sub_182EA00(v111.m128i_i64[1], &v141, v132);
      if ( (v135 & 1) == 0 )
      {
LABEL_16:
        v145 &= ~1u;
        v144 = v134;
        goto LABEL_17;
      }
    }
    else
    {
      v141 = v132[0];
      if ( (v135 & 1) == 0 )
        goto LABEL_16;
    }
    sub_182EA00(v111.m128i_i64[1], &v144, &v134);
LABEL_17:
    BYTE4(v137) &= 0xFCu;
    BYTE4(v139) &= 0xFCu;
    LODWORD(v137) = 0;
    v138 = 0;
    LODWORD(v139) = 1;
    v140 = 0;
    if ( (v128[1] & 1) != 0 )
      sub_182EA00(v111.m128i_i64[1], &v137, v128);
    else
      LODWORD(v137) = v128[0];
    if ( (v130[1] & 1) != 0 )
    {
      sub_182EA00(v111.m128i_i64[1], &v139, v111.m128i_i64[0]);
      v23 = BYTE4(v139);
      v22 = v139;
      v24 = BYTE4(v139) & 1;
    }
    else
    {
      v22 = v130[0];
      v23 = BYTE4(v139);
      v24 = 0;
    }
    LODWORD(v150) = v22;
    LODWORD(v148) = v137;
    BYTE4(v148) = BYTE4(v137) & 3 | BYTE4(v148) & 0xFC;
    v149 = (int **)v138;
    BYTE4(v150) = BYTE4(v150) & 0xFC | v24 | v23 & 2;
    v151 = v140;
    LODWORD(v152) = v141;
    BYTE4(v152) = v142 & 3 | BYTE4(v152) & 0xFC;
    v153 = v143;
    LODWORD(v154) = v144;
    BYTE4(v154) = v145 & 3 | BYTE4(v154) & 0xFC;
    v155 = v146;
    sub_8B2CA0(v191, v21, (__int64)&v148);
    sub_182EF00(v173, &v148);
    sub_182EF00(v173, &v150);
    sub_182EF00(v173, &v152);
    sub_182EF00(v173, &v154);
    v112[0] = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v132);
    sub_182CBA0(v112[0], &v134);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v128);
    sub_182CBA0(v25, v111.m128i_i64[0]);
    if ( *(_QWORD *)v113 == v21 + 1 )
      break;
    ++v21;
  }
  v29 = 0;
  v112[0] = &v141;
  while ( 1 )
  {
    v30 = **(_QWORD **)(v109[4] + 8 * v29);
    v148 = 0;
    v149 = nullptr;
    v150 = 1;
    v151 = 0;
    if ( (unsigned __int8)sub_1666AE0(v109 + 12, v30, &v148, v112[0]) )
    {
      if ( !(_DWORD)v148 )
        break;
    }
    v53 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v148);
    sub_182CBA0(v53, &v150);
    if ( v21 == v29 )
      goto LABEL_32;
    ++v29;
  }
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v148);
  sub_182CBA0(v31, &v150);
  v148 = 0;
  v149 = nullptr;
  v150 = 1;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 1;
  v155 = 0;
  sub_8B3D10(v191, v29, (__int64)&v148);
  v148 = 0;
  v149 = nullptr;
  v150 = 1;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 1;
  v155 = 0;
  sub_8B3EE0(v191, v29, (__int64)&v148);
LABEL_32:
  v148 = 1;
  v149 = nullptr;
  v127[1] = (void *)v111.m128i_i64[1];
  v150 = 1;
  v151 = 0;
  v127[0] = nullptr;
  *(_QWORD *)v113 = v127;
  sub_8ADEE0((int **)v127, (int *)&v148);
  v149 = nullptr;
  v148 = 0xFFFFFFFFLL;
  v150 = 1;
  v151 = 0;
  sub_8ADEE0((int **)v127, (int *)&v148);
  v149 = nullptr;
  v148 = 0xFFFFFFFFLL;
  v150 = 1;
  v151 = 0;
  sub_8ADEE0((int **)v127, (int *)&v148);
  *(_QWORD *)v126 = 0;
  v32 = v127[1];
  v111.m128i_i64[0] = (__int64)v127[0];
  *(_QWORD *)v116 = v126;
  sub_83BF90(v126, 3u);
  v33 = (int)v114;
  v34 = v117;
  v112[0] = nullptr;
  v35 = *(_DWORD **)v126;
  LODWORD(v114) = (_DWORD)v114 + v117;
  *(_QWORD *)v115 = v130;
  if ( v33 )
  {
    do
    {
      v36 = (int *)((char *)v112[0] + v109[24]);
      if ( *v36 != -1 )
      {
        v37 = v36[1];
        if ( v37 != -1 )
        {
          *v35 = v37;
          v38 = *v36;
          v35[2] = v34;
          v39 = (int *)v111.m128i_i64[0];
          v35[1] = v38;
          sub_8B15E0((__int64)v191, v34, 3u, (__int64)v35, v39);
          v40 = v36[2];
          *(_QWORD *)v129 = 0;
          LOBYTE(v128[1]) &= 0xFCu;
          LOBYTE(v130[1]) &= 0xFCu;
          v130[0] = 1;
          *(_QWORD *)v131 = 0;
          v128[0] = v40;
          sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v115);
          LOBYTE(v130[1]) &= ~1u;
          v130[0] = 1;
          v41 = v36[3];
          LOBYTE(v132[1]) &= 0xFCu;
          v135 &= 0xFCu;
          *(_QWORD *)v133 = 0;
          v134 = 1;
          v136 = 0;
          v132[0] = v41;
          sub_182CBA0(qword_1C7F2C0, &v134);
          v135 &= ~1u;
          v142 &= 0xFCu;
          v145 &= 0xFCu;
          v134 = 1;
          v141 = 0;
          v143 = 0;
          v144 = 1;
          v146 = 0;
          sub_8ADE80(v111.m128i_i64[1], (__int64)&v141, v132);
          BYTE4(v137) &= 0xFCu;
          BYTE4(v139) &= 0xFCu;
          LODWORD(v137) = 0;
          v138 = 0;
          LODWORD(v139) = 1;
          v140 = 0;
          sub_8ADE80(v111.m128i_i64[1], (__int64)&v137, v128);
          LODWORD(v148) = v137;
          BYTE4(v148) = BYTE4(v137) & 3 | BYTE4(v148) & 0xFC;
          v149 = (int **)v138;
          LODWORD(v150) = v139;
          BYTE4(v150) = BYTE4(v139) & 3 | BYTE4(v150) & 0xFC;
          v151 = v140;
          LODWORD(v152) = v141;
          BYTE4(v152) = v142 & 3 | BYTE4(v152) & 0xFC;
          v153 = v143;
          LODWORD(v154) = v144;
          BYTE4(v154) = v145 & 3 | BYTE4(v154) & 0xFC;
          v155 = v146;
          sub_8B3EE0(v191, v34, (__int64)&v148);
          sub_8AD4E0((__int64)v173, (__int64)&v148);
          sub_25A130((char *)v132);
          sub_25A130((char *)v128);
        }
      }
      v112[0] = (char *)v112[0] + 20;
      ++v34;
    }
    while ( (_DWORD)v114 != v34 );
  }
  v42 = _mm_loadl_epi64(&v111);
  v43 = v123 + v118;
  if ( v111.m128i_i64[0] )
  {
    v44 = *(unsigned int *)(v111.m128i_i64[0] - 4);
    if ( (_DWORD)v44 )
    {
      v45 = v111.m128i_i64[0];
      v46 = v111.m128i_i64[0] + 32 * v44;
      do
      {
        sub_182EF00(v32, v45);
        sub_182EF00(v32, v45 + 16);
        v45 += 32;
      }
      while ( v46 != v45 );
    }
    v47 = v111.m128i_i64[0];
    *(_DWORD *)(v111.m128i_i64[0] - 4) = 0;
    v42 = (__m128i)(unsigned __int64)v47;
  }
  si128 = _mm_unpacklo_epi64(v42, (__m128i)(unsigned __int64)v32);
  if ( v35 )
    *(v35 - 1) = 0;
  v49 = *v120;
  if ( *v120 )
  {
    for ( k = &v49[10 * *(v49 - 1)]; v49 != k; ++*(v35 - 1) )
    {
      *(__m128i *)v127 = si128;
      sub_8ADEE0(*(int ***)v113, v49 + 2);
      si128 = _mm_load_si128((const __m128i *)v127);
      v51 = *v49;
      if ( !v35 || (v52 = (unsigned int)*(v35 - 1), (_DWORD)v52 == *(v35 - 2)) )
      {
        *(_QWORD *)v126 = v35;
        *(__m128i *)v112 = si128;
        v111.m128i_i64[0] = (__int64)v127[0];
        sub_2FD3F0(*(unsigned int ***)v116);
        v35 = *(_DWORD **)v126;
        si128 = _mm_load_si128((const __m128i *)v112);
        v52 = *(unsigned int *)(*(_QWORD *)v126 - 4LL);
      }
      v49 += 10;
      v35[v52] = v51;
    }
  }
  v148 = 1;
  v149 = nullptr;
  v150 = 1;
  v151 = 0;
  *(__m128i *)v127 = si128;
  sub_8ADEE0(*(int ***)v113, (int *)&v148);
  v54 = v127[1];
  v111.m128i_i64[0] = (__int64)v127[0];
  if ( !v35 || (v55 = (unsigned int)*(v35 - 1), (_DWORD)v55 == *(v35 - 2)) )
  {
    *(_QWORD *)v126 = v35;
    sub_2FD3F0(*(unsigned int ***)v116);
    v35 = *(_DWORD **)v126;
    v55 = *(unsigned int *)(*(_QWORD *)v126 - 4LL);
  }
  v35[v55] = v43;
  v56 = (int *)v111.m128i_i64[0];
  v57 = *(v35 - 1) + 1;
  *(v35 - 1) = v57;
  v58 = (unsigned int)sub_8B15E0((__int64)v191, v43, v57, (__int64)v35, v56);
  if ( (unsigned int)sub_8B36C0((__int64)v191)
    && (v67 = sub_8B4740(v191, v43),
        sub_1745AB0(
          (int)v191,
          v43,
          v68,
          v69,
          v70,
          v71,
          &v148,
          v173,
          v109,
          v191,
          (void *)v111.m128i_i64[0],
          v111.m128i_i32[2],
          (int)v112[0],
          (int)v112[1],
          v113[0],
          (int)v114,
          v115[0],
          v116[0],
          v117,
          v119,
          (int)v120,
          (int)v121,
          v122,
          v123,
          v125,
          v126[0],
          (int)v127[0],
          (int)v127[1],
          v128[0],
          v129[0],
          v130[0],
          v131[0],
          v132[0],
          v133[0],
          v134,
          v136),
        v67 == 1) )
  {
    v137 = 0;
    v72 = v192 + 232 * v43;
    v138 = 0;
    v139 = 1;
    v140 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v137, (int *)(v72 + 40));
    v114 = &v137;
    sub_3EBD70((__int64)v107, (__int64)&v137);
    *(_QWORD *)v128 = 0;
    *(_QWORD *)v129 = 0;
    *(_QWORD *)v130 = 1;
    *(_QWORD *)v131 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v128, (int *)(v72 + 8));
    sub_3EBD70((__int64)v132, (__int64)v128);
    v112[0] = &v141;
    sub_894A60((__int64)&v141, (__int64)v132, (__int64)v107);
    sub_25A130((char *)v132);
    sub_25A130((char *)v128);
    sub_25A130(v107);
    sub_25A130((char *)v114);
    v73 = (unsigned __int64 *)(v191[185] + 16 * v58);
    sub_89A080((__int64)v107, v73, 1);
    v74 = v148;
    v120 = v149;
    sub_89A080((__int64)v107, v73, 0);
    v75 = (__int64 *)(v109[32] + 16 * v122);
    v76 = v109[3];
    v115[0] = v148;
    *(_QWORD *)v116 = v76;
    sub_2FCDE0(v75);
    v77 = v115[0];
    if ( v115[0] == v74 )
    {
      *(_QWORD *)v115 = 0;
    }
    else
    {
      v78 = v75 + 1;
      *(_QWORD *)v115 = 0;
      v79 = *v120;
      do
      {
        v80 = v79[10 * v74 + 8];
        if ( v80 >= v117 && v80 < v118 )
        {
          v102 = *(_DWORD *)(v109[24] + 20LL * (v80 - v117) + 16);
          if ( v102 != -2 )
          {
            v103 = v109[2];
            v124 = v77;
            *(_QWORD *)v132 = *(_QWORD *)v115;
            *(_QWORD *)v133 = *(_QWORD *)v116;
            sub_894B80(v103, v102, (__int64 *)v132);
            v104 = v124;
            *(_QWORD *)v115 = *(_QWORD *)v132;
            *(_QWORD *)v116 = *(_QWORD *)v133;
            v137 = *(_QWORD *)v132;
            if ( *(_QWORD *)v132 )
              ++*(_DWORD *)(*(_QWORD *)v132 + 8LL);
            v124 = v104;
            sub_91D790(v78, v114);
            v77 = v124;
            v79 = *v120;
          }
        }
        ++v74;
        if ( v79 )
        {
          v81 = &v79[10 * v74];
          while ( v74 < *(v79 - 1) )
          {
            v82 = v81[8];
            v81 += 10;
            if ( v82 != -1 )
              break;
            ++v74;
          }
        }
      }
      while ( v77 != v74 );
    }
    if ( v117 )
    {
      v83 = 0;
      v84 = 0;
      v85 = 8LL * v117;
      do
      {
        v148 = 0;
        v149 = nullptr;
        v150 = 1;
        v151 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v107, (int *)(v84 + v192 + 8));
        v86 = sub_182D050(qword_1C7F2C0, v107);
        v84 += 232;
        v87 = (_QWORD *)(v83 + v109[36]);
        v83 += 8;
        *v87 = v86;
        sub_25A130(v107);
      }
      while ( v83 != v85 );
    }
    v137 = 0;
    v138 = 0;
    v139 = 1;
    v140 = 0;
    sub_182CBA0(qword_1C7F2C0, &v139);
    v88 = (char *)v114;
    LODWORD(v139) = 1;
    BYTE4(v139) &= ~1u;
    sub_8AD320((__int64)v107, (__int64)v114, (__int64)v112[0]);
    sub_25A130(v88);
    v89 = *(__int64 *(__fastcall **)(__int64 *, _QWORD *, unsigned int, __int64))(*v109 + 424LL);
    if ( v89 == sub_922710 )
      sub_9221C0((__int64 *)v88, v109, v123, (__int64)v107, 1);
    else
      v89((__int64 *)v114, v109, v123, (__int64)v107);
    v90 = v121;
    v91 = v138;
    v92 = *v121;
    *v121 = v137;
    v137 = v92;
    sub_91CCE0(v92, v91);
    if ( (unsigned int)sub_180B130(v92) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128i_i64) )
      {
        sub_186A4C0(*(double *)si128.m128i_i64);
        v93 = sub_180B150(v92, v91);
        v94 = sub_160EBE0(v93, v90);
        sub_91CD00(v94, "\n");
        sub_186A500(v94, "\n");
      }
      else
      {
        v105 = sub_180B150(v92, v91);
        v106 = sub_160EBE0(v105, v121);
        sub_91CD00(v106, "\n");
      }
    }
    v95 = (char *)v112[0];
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v112[0], v109[31] + 32 * v122, (__int64)v112[0]);
    v137 = 0;
    v138 = 0;
    v139 = 1;
    v140 = 0;
    sub_182CBA0(qword_1C7F2C0, &v139);
    v96 = (char *)v114;
    LODWORD(v139) = 1;
    BYTE4(v139) &= ~1u;
    sub_8AD320(v119, (__int64)v114, (__int64)v95);
    sub_25A130(v96);
    sub_2A6060((__int64)v107);
    sub_91CCE0(*(__int64 *)v115, *(__int64 *)v116);
    sub_25A130(v147);
    sub_25A130(v95);
  }
  else
  {
    v59 = *(_QWORD *)(v109[3] + 864LL);
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v60 = v121;
    sub_91CCE0(*v121, v121[1]);
    *v60 = v59;
    sub_8AD320(v119, (__int64)&qword_1C7F280, (__int64)&qword_1C7F200);
  }
  if ( v111.m128i_i64[0] )
  {
    v61 = *(unsigned int *)(v111.m128i_i64[0] - 4);
    if ( (_DWORD)v61 )
    {
      v62 = v111.m128i_i64[0];
      v63 = v111.m128i_i64[0] + 32 * v61;
      do
      {
        sub_182EF00(v54, v62);
        v64 = v62 + 16;
        v62 += 32;
        sub_182EF00(v54, v64);
      }
      while ( v62 != v63 );
    }
    v65 = v111.m128i_i64[0];
    *(_DWORD *)(v111.m128i_i64[0] - 4) = 0;
    sub_186B220((void *)(v65 - 8));
  }
  sub_186B220(v35 - 2);
  sub_184C8D0(v108);
  sub_184C8D0((void *)v111.m128i_i64[1]);
  sub_8AB150(v110);
  return v119;
}

