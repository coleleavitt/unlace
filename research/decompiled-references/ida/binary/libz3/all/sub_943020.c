__int64 __fastcall sub_943020(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, _BYTE *a5, double a6)
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
  __int64 v21; // r13
  int v22; // eax
  void *v23; // r15
  int v24; // eax
  int v25; // edi
  char v26; // al
  char v27; // si
  void *v28; // r15
  void *v29; // r12
  void *v30; // r12
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rsi
  void *v34; // rbp
  int v35; // eax
  unsigned int v36; // r14d
  __int64 v37; // r15
  _DWORD *v38; // r13
  int *v39; // r12
  int v40; // eax
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rbp
  int *v44; // r14
  int *v45; // rbp
  __m128 si128; // xmm0
  int *v47; // r14
  int *k; // rbp
  int v49; // r15d
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // r14d
  __int64 v54; // rbx
  __int64 *v55; // r15
  __int64 v56; // rbx
  __int64 v57; // r12
  int *v58; // rbp
  int *v59; // rbx
  int *v60; // rsi
  void *v62; // r14
  int v63; // ebp
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // r12
  unsigned __int64 *v69; // r15
  unsigned int v70; // r14d
  __int64 *v71; // r15
  __int64 v72; // rax
  int v73; // r8d
  _QWORD *v74; // r15
  __int64 v75; // rsi
  unsigned int v76; // edx
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // r12
  __int64 v80; // r14
  void *v81; // r15
  __int64 v82; // r15
  __int64 v83; // rsi
  char *v84; // r15
  char *v85; // r15
  __int64 *(__fastcall *v86)(__int64 *, _QWORD *, unsigned int, __int64); // rax
  __int64 *v87; // r15
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdi
  char *v92; // r15
  char *v93; // r14
  int *v94; // rbx
  int *i; // rbp
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdi
  unsigned int v99; // ecx
  __int64 v100; // rdi
  int v101; // r8d
  __int64 v102; // rax
  __int64 v103; // rax
  void *v104; // [rsp+0h] [rbp-E38h]
  _QWORD *v105; // [rsp+8h] [rbp-E30h]
  _QWORD *v106; // [rsp+10h] [rbp-E28h]
  _BYTE *v107; // [rsp+18h] [rbp-E20h]
  int *v108; // [rsp+20h] [rbp-E18h]
  int *v109; // [rsp+20h] [rbp-E18h]
  int v110[2]; // [rsp+28h] [rbp-E10h] BYREF
  void *v111; // [rsp+30h] [rbp-E08h]
  int v112[2]; // [rsp+38h] [rbp-E00h]
  void *v113[2]; // [rsp+40h] [rbp-DF8h] BYREF
  void *v114; // [rsp+50h] [rbp-DE8h]
  void *v115; // [rsp+58h] [rbp-DE0h]
  int v116[2]; // [rsp+60h] [rbp-DD8h]
  int v117; // [rsp+68h] [rbp-DD0h]
  unsigned int v118; // [rsp+6Ch] [rbp-DCCh]
  __int64 v119; // [rsp+70h] [rbp-DC8h]
  int **v120; // [rsp+78h] [rbp-DC0h]
  __int64 *v121; // [rsp+80h] [rbp-DB8h]
  __int64 v122; // [rsp+88h] [rbp-DB0h]
  __int64 v123; // [rsp+90h] [rbp-DA8h]
  int v124; // [rsp+98h] [rbp-DA0h]
  int v125; // [rsp+9Ch] [rbp-D9Ch]
  int v126; // [rsp+A0h] [rbp-D98h]
  int v127[2]; // [rsp+A8h] [rbp-D90h] BYREF
  void *v128[2]; // [rsp+B0h] [rbp-D88h] BYREF
  int v129[2]; // [rsp+C0h] [rbp-D78h] BYREF
  int v130[2]; // [rsp+C8h] [rbp-D70h]
  int v131[2]; // [rsp+D0h] [rbp-D68h] BYREF
  int v132[2]; // [rsp+D8h] [rbp-D60h]
  int v133[2]; // [rsp+E0h] [rbp-D58h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-D50h]
  int v135; // [rsp+F0h] [rbp-D48h] BYREF
  char v136; // [rsp+F4h] [rbp-D44h]
  __int64 v137; // [rsp+F8h] [rbp-D40h]
  _QWORD *v138; // [rsp+100h] [rbp-D38h] BYREF
  __int64 v139; // [rsp+108h] [rbp-D30h]
  __int64 v140; // [rsp+110h] [rbp-D28h] BYREF
  __int64 v141; // [rsp+118h] [rbp-D20h]
  int v142; // [rsp+120h] [rbp-D18h] BYREF
  char v143; // [rsp+124h] [rbp-D14h]
  __int64 v144; // [rsp+128h] [rbp-D10h]
  int v145; // [rsp+130h] [rbp-D08h] BYREF
  char v146; // [rsp+134h] [rbp-D04h]
  __int64 v147; // [rsp+138h] [rbp-D00h]
  char v148[32]; // [rsp+140h] [rbp-CF8h] BYREF
  int v149[2]; // [rsp+160h] [rbp-CD8h] BYREF
  __int64 v150; // [rsp+168h] [rbp-CD0h]
  __int64 v151; // [rsp+170h] [rbp-CC8h] BYREF
  __int64 v152; // [rsp+178h] [rbp-CC0h]
  __int64 v153; // [rsp+180h] [rbp-CB8h] BYREF
  __int64 v154; // [rsp+188h] [rbp-CB0h]
  __int64 v155; // [rsp+190h] [rbp-CA8h]
  __int64 v156; // [rsp+198h] [rbp-CA0h]
  _BYTE v157[600]; // [rsp+1C0h] [rbp-C78h] BYREF
  __int64 v158; // [rsp+418h] [rbp-A20h]
  __int64 v159; // [rsp+420h] [rbp-A18h]
  __int64 v160; // [rsp+428h] [rbp-A10h]
  __int64 v161; // [rsp+430h] [rbp-A08h]
  __int64 v162; // [rsp+438h] [rbp-A00h]
  __int64 v163; // [rsp+440h] [rbp-9F8h]
  __int64 v164; // [rsp+448h] [rbp-9F0h]
  __int64 v165; // [rsp+450h] [rbp-9E8h]
  __int64 v166; // [rsp+458h] [rbp-9E0h]
  __int64 v167; // [rsp+460h] [rbp-9D8h]
  __int64 v168; // [rsp+468h] [rbp-9D0h]
  __int64 v169; // [rsp+470h] [rbp-9C8h]
  __int64 v170; // [rsp+478h] [rbp-9C0h]
  __int64 v171; // [rsp+480h] [rbp-9B8h]
  __int64 v172; // [rsp+488h] [rbp-9B0h]
  __int64 v173; // [rsp+490h] [rbp-9A8h]
  _BYTE v174[600]; // [rsp+4A0h] [rbp-998h] BYREF
  __int64 v175; // [rsp+6F8h] [rbp-740h]
  __int64 v176; // [rsp+700h] [rbp-738h]
  __int64 v177; // [rsp+708h] [rbp-730h]
  __int64 v178; // [rsp+710h] [rbp-728h]
  __int64 v179; // [rsp+718h] [rbp-720h]
  __int64 v180; // [rsp+720h] [rbp-718h]
  __int64 v181; // [rsp+728h] [rbp-710h]
  __int64 v182; // [rsp+730h] [rbp-708h]
  __int64 v183; // [rsp+738h] [rbp-700h]
  __int64 v184; // [rsp+740h] [rbp-6F8h]
  __int64 v185; // [rsp+748h] [rbp-6F0h]
  __int64 v186; // [rsp+750h] [rbp-6E8h]
  __int64 v187; // [rsp+758h] [rbp-6E0h]
  __int64 v188; // [rsp+760h] [rbp-6D8h]
  __int64 v189; // [rsp+768h] [rbp-6D0h]
  __int64 v190; // [rsp+770h] [rbp-6C8h]
  __int64 v191; // [rsp+778h] [rbp-6C0h]
  _QWORD v192[199]; // [rsp+780h] [rbp-6B8h] BYREF
  __int64 v193; // [rsp+DB8h] [rbp-80h]

  v105 = (_QWORD *)a2;
  v9 = *(char **)(a2 + 24);
  v119 = a1;
  v10 = v192;
  v121 = a4;
  v106 = v192;
  v124 = a3;
  sub_8C3600((__int64)v192, (__int64)v9);
  v11 = *(_QWORD *)(a2 + 352);
  *a5 = 0;
  v122 = a3;
  v120 = (int **)(v11 + 8LL * a3);
  if ( (unsigned int)sub_180B130(v192) > 3 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v94 = *v120;
      if ( *v120 )
      {
        for ( i = &v94[10 * *(v94 - 1)]; i != v94; v94 += 10 )
        {
          v96 = sub_180B150(v10, v9);
          sub_2FCE40(v96, (__int64)(v94 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_QWORD *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v97 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v98 = sub_2FCE40(v97, v105[45] + 32 * v122);
      sub_91CD00(v98, "\n");
      sub_186A500(v98, "\n");
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
      v16 = sub_2FCE40(v15, v105[45] + 32 * v122);
      sub_91CD00(v16, "\n");
    }
  }
  v107 = v157;
  sub_1839FF0(v157);
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 1;
  v169 = 0;
  v170 = 0;
  v171 = 0;
  v172 = 1;
  v173 = 0;
  v111 = v174;
  sub_1839FF0(v174);
  v175 = 0;
  v176 = 0;
  v191 = 0x3F1A36E2EB1C432DLL;
  v177 = 0;
  v178 = 0;
  v17 = v105[4];
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = 1;
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v189 = 1;
  v190 = 0;
  if ( v17 )
    LODWORD(v115) = *(_DWORD *)(v17 - 4);
  else
    LODWORD(v115) = 0;
  v18 = v105[38];
  if ( v18 )
  {
    LODWORD(v114) = *(_DWORD *)(v18 - 4);
    v118 = (_DWORD)v115 + (_DWORD)v114;
  }
  else
  {
    LODWORD(v114) = 0;
    v118 = (unsigned int)v115;
  }
  v19 = v118;
  v20 = v105[44];
  if ( v20 )
    v19 = *(_DWORD *)(v20 - 4) + v118;
  sub_8C3910((__int64)v192, v19);
  if ( !(_DWORD)v115 )
    goto LABEL_44;
  v21 = 0;
  *(_QWORD *)v110 = (unsigned int)v115;
  while ( 1 )
  {
    LOBYTE(v129[1]) &= 0xFCu;
    v30 = qword_1C7F2C0;
    v31 = v105[50] + (v21 << 6);
    LOBYTE(v131[1]) &= 0xFCu;
    v129[0] = 0;
    *(_QWORD *)v130 = 0;
    v131[0] = 1;
    *(_QWORD *)v132 = 0;
    if ( (*(_BYTE *)(v31 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v129, v31);
      if ( (*(_BYTE *)(v31 + 20) & 1) == 0 )
      {
LABEL_16:
        v22 = *(_DWORD *)(v31 + 16);
        LOBYTE(v131[1]) &= ~1u;
        v131[0] = v22;
        goto LABEL_17;
      }
    }
    else
    {
      v129[0] = *(_DWORD *)v31;
      if ( (*(_BYTE *)(v31 + 20) & 1) == 0 )
        goto LABEL_16;
    }
    sub_182C690(v30, v131, v31 + 16);
LABEL_17:
    LOBYTE(v133[1]) &= 0xFCu;
    v23 = qword_1C7F2C0;
    v136 &= 0xFCu;
    v133[0] = 0;
    v134 = 0;
    v135 = 1;
    v137 = 0;
    if ( (*(_BYTE *)(v31 + 36) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v133, v31 + 32);
    else
      v133[0] = *(_DWORD *)(v31 + 32);
    if ( (*(_BYTE *)(v31 + 52) & 1) != 0 )
    {
      sub_182C690(v23, &v135, v31 + 48);
    }
    else
    {
      v24 = *(_DWORD *)(v31 + 48);
      v136 &= ~1u;
      v135 = v24;
    }
    v143 &= 0xFCu;
    v146 &= 0xFCu;
    v142 = 0;
    v144 = 0;
    v145 = 1;
    v147 = 0;
    if ( (v133[1] & 1) != 0 )
      sub_182EA00(v157, &v142, v133);
    else
      v142 = v133[0];
    if ( (v136 & 1) != 0 )
    {
      sub_182EA00(v157, &v145, &v135);
    }
    else
    {
      v146 &= ~1u;
      v145 = v135;
    }
    BYTE4(v138) &= 0xFCu;
    BYTE4(v140) &= 0xFCu;
    LODWORD(v138) = 0;
    v139 = 0;
    LODWORD(v140) = 1;
    v141 = 0;
    if ( (v129[1] & 1) != 0 )
      sub_182EA00(v157, &v138, v129);
    else
      LODWORD(v138) = v129[0];
    if ( (v131[1] & 1) != 0 )
    {
      sub_182EA00(v157, &v140, v131);
      v26 = BYTE4(v140);
      v25 = v140;
      v27 = BYTE4(v140) & 1;
    }
    else
    {
      v25 = v131[0];
      v26 = BYTE4(v140);
      v27 = 0;
    }
    LODWORD(v151) = v25;
    v149[0] = (int)v138;
    LOBYTE(v149[1]) = BYTE4(v138) & 3 | v149[1] & 0xFC;
    v150 = v139;
    BYTE4(v151) = BYTE4(v151) & 0xFC | v27 | v26 & 2;
    v152 = v141;
    LODWORD(v153) = v142;
    BYTE4(v153) = v143 & 3 | BYTE4(v153) & 0xFC;
    v154 = v144;
    LODWORD(v155) = v145;
    BYTE4(v155) = v146 & 3 | BYTE4(v155) & 0xFC;
    v156 = v147;
    sub_8B2CA0(v192, v21, (__int64)v149);
    sub_8AD4E0((__int64)v111, (__int64)v149);
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v133);
    sub_182CBA0(v28, &v135);
    v29 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v129);
    sub_182CBA0(v29, v131);
    if ( *(_QWORD *)v110 == v21 + 1 )
      break;
    ++v21;
  }
  v32 = 0;
  v113[0] = &v142;
  while ( 1 )
  {
    v33 = **(_QWORD **)(v105[4] + 8 * v32);
    *(_QWORD *)v149 = 0;
    v150 = 0;
    v151 = 1;
    v152 = 0;
    if ( (unsigned __int8)sub_1666AE0(v105 + 26, v33, v149, v113[0]) )
    {
      if ( !v149[0] )
        break;
    }
    v62 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v149);
    sub_182CBA0(v62, &v151);
    if ( v21 == v32 )
      goto LABEL_44;
    ++v32;
  }
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v149);
  sub_182CBA0(v34, &v151);
  *(_QWORD *)v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 1;
  v156 = 0;
  sub_8B3D10(v192, v32, (__int64)v149);
  *(_QWORD *)v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 1;
  v156 = 0;
  sub_8B3EE0(v192, v32, (__int64)v149);
LABEL_44:
  *(_QWORD *)v149 = 1;
  v150 = 0;
  v128[1] = v157;
  v151 = 1;
  v152 = 0;
  v128[0] = nullptr;
  *(_QWORD *)v112 = v128;
  sub_8ADEE0((int **)v128, v149);
  v150 = 0;
  *(_QWORD *)v149 = 0xFFFFFFFFLL;
  v151 = 1;
  v152 = 0;
  sub_8ADEE0((int **)v128, v149);
  v150 = 0;
  *(_QWORD *)v149 = 0xFFFFFFFFLL;
  v151 = 1;
  v152 = 0;
  sub_8ADEE0((int **)v128, v149);
  *(_QWORD *)v127 = 0;
  v108 = (int *)v128[0];
  *(void **)v110 = v128[1];
  *(_QWORD *)v116 = v127;
  sub_83BF90(v127, 3u);
  v35 = (int)v114;
  v36 = (unsigned int)v115;
  v37 = 0;
  v38 = *(_DWORD **)v127;
  LODWORD(v114) = (_DWORD)v114 + (_DWORD)v115;
  v113[0] = v129;
  if ( v35 )
  {
    do
    {
      v39 = (int *)(v37 + v105[38]);
      if ( *v39 != -1 )
      {
        v40 = v39[1];
        if ( v40 != -1 )
        {
          *v38 = v40;
          v41 = *v39;
          v38[2] = v36;
          v38[1] = v41;
          sub_8B15E0((__int64)v192, v36, 3u, (__int64)v38, v108);
          v129[0] = 0;
          LOBYTE(v129[1]) &= 0xFCu;
          LOBYTE(v131[1]) &= 0xFCu;
          *(_QWORD *)v130 = 0;
          v131[0] = 1;
          *(_QWORD *)v132 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v113[0], v39 + 2);
          LOBYTE(v133[1]) &= 0xFCu;
          v136 &= 0xFCu;
          v133[0] = 0;
          v134 = 0;
          v135 = 1;
          v137 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v133, v39 + 10);
          v143 &= 0xFCu;
          v146 &= 0xFCu;
          v142 = 0;
          v144 = 0;
          v145 = 1;
          v147 = 0;
          sub_8ADE80((__int64)v157, (__int64)&v142, v133);
          LODWORD(v138) = 0;
          BYTE4(v138) &= 0xFCu;
          BYTE4(v140) &= 0xFCu;
          v139 = 0;
          LODWORD(v140) = 1;
          v141 = 0;
          sub_8ADE80((__int64)v157, (__int64)&v138, (int *)v113[0]);
          v149[0] = (int)v138;
          LOBYTE(v149[1]) = BYTE4(v138) & 3 | v149[1] & 0xFC;
          v150 = v139;
          LODWORD(v151) = v140;
          BYTE4(v151) = BYTE4(v140) & 3 | BYTE4(v151) & 0xFC;
          v152 = v141;
          LODWORD(v153) = v142;
          BYTE4(v153) = v143 & 3 | BYTE4(v153) & 0xFC;
          v154 = v144;
          LODWORD(v155) = v145;
          BYTE4(v155) = v146 & 3 | BYTE4(v155) & 0xFC;
          v156 = v147;
          sub_8B3EE0(v192, v36, (__int64)v149);
          sub_8AD4E0((__int64)v111, (__int64)v149);
          sub_25A130((char *)v133);
          sub_25A130((char *)v113[0]);
        }
      }
      v37 += 80;
      ++v36;
    }
    while ( (_DWORD)v114 != v36 );
  }
  v42 = v124 + v118;
  if ( v108 )
  {
    v43 = (unsigned int)*(v108 - 1);
    if ( (_DWORD)v43 )
    {
      v44 = v108;
      v45 = &v108[8 * v43];
      do
      {
        sub_182EF00(*(_QWORD *)v110, v44);
        sub_182EF00(*(_QWORD *)v110, v44 + 4);
        v44 += 8;
      }
      while ( v45 != v44 );
    }
    *(v108 - 1) = 0;
  }
  si128 = _mm_loadh_ps((const double *)v110);
  if ( v38 )
    *(v38 - 1) = 0;
  v47 = *v120;
  if ( *v120 )
  {
    for ( k = &v47[10 * *(v47 - 1)]; v47 != k; ++*(v38 - 1) )
    {
      *(__m128 *)v128 = si128;
      sub_8ADEE0(*(int ***)v112, v47 + 2);
      si128 = (__m128)_mm_load_si128((const __m128i *)v128);
      v49 = *v47;
      if ( !v38 || (v50 = (unsigned int)*(v38 - 1), (_DWORD)v50 == *(v38 - 2)) )
      {
        *(__m128 *)v113 = si128;
        *(_QWORD *)v127 = v38;
        *(void **)v110 = v128[1];
        sub_2FD3F0(*(unsigned int ***)v116);
        v38 = *(_DWORD **)v127;
        si128 = (__m128)_mm_load_si128((const __m128i *)v113);
        v50 = *(unsigned int *)(*(_QWORD *)v127 - 4LL);
      }
      v47 += 10;
      v38[v50] = v49;
    }
  }
  *(_QWORD *)v149 = 1;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  *(__m128 *)v128 = si128;
  sub_8ADEE0(*(int ***)v112, v149);
  v109 = (int *)v128[0];
  *(void **)v110 = v128[1];
  if ( !v38 || (v51 = (unsigned int)*(v38 - 1), (_DWORD)v51 == *(v38 - 2)) )
  {
    *(_QWORD *)v127 = v38;
    sub_2FD3F0(*(unsigned int ***)v116);
    v38 = *(_DWORD **)v127;
    v51 = *(unsigned int *)(*(_QWORD *)v127 - 4LL);
  }
  v38[v51] = v42;
  v52 = *(v38 - 1) + 1;
  *(v38 - 1) = v52;
  v53 = sub_8B15E0((__int64)v192, v42, v52, (__int64)v38, v109);
  if ( (unsigned int)sub_8B36C0((__int64)v192)
    && (v63 = sub_8B4740(v192, v42),
        sub_1745AB0(
          (int)v192,
          v42,
          v64,
          v65,
          v66,
          v67,
          v104,
          v105,
          v192,
          v157,
          v109,
          v110[0],
          (int)v111,
          v112[0],
          (int)v113[0],
          (int)v113[1],
          (int)v114,
          (int)v115,
          v116[0],
          v117,
          v119,
          (int)v120,
          (int)v121,
          v122,
          v123,
          v124,
          v126,
          v127[0],
          (int)v128[0],
          (int)v128[1],
          v129[0],
          v130[0],
          v131[0],
          v132[0],
          v133[0],
          v134),
        v63 == 1) )
  {
    v138 = nullptr;
    v68 = v193 + 232 * v42;
    v139 = 0;
    v140 = 1;
    v141 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v138, (int *)(v68 + 40));
    v114 = &v138;
    sub_3EBD70((__int64)v149, (__int64)&v138);
    *(_QWORD *)v129 = 0;
    *(_QWORD *)v130 = 0;
    *(_QWORD *)v131 = 1;
    *(_QWORD *)v132 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v129, (int *)(v68 + 8));
    sub_3EBD70((__int64)v133, (__int64)v129);
    v113[0] = &v142;
    sub_894A60((__int64)&v142, (__int64)v133, (__int64)v149);
    sub_25A130((char *)v133);
    sub_25A130((char *)v129);
    sub_25A130((char *)v149);
    sub_25A130((char *)v114);
    v69 = (unsigned __int64 *)(v192[185] + 16LL * v53);
    sub_89A080((__int64)v149, v69, 1);
    v70 = v149[0];
    *(_QWORD *)v116 = v150;
    sub_89A080((__int64)v149, v69, 0);
    v71 = (__int64 *)(v105[46] + 16 * v122);
    v72 = v105[3];
    LODWORD(v120) = v149[0];
    v123 = v72;
    sub_2FCDE0(v71);
    v73 = (int)v120;
    if ( (_DWORD)v120 == v70 )
    {
      v120 = nullptr;
    }
    else
    {
      v74 = v71 + 1;
      v120 = nullptr;
      v75 = **(_QWORD **)v116;
      do
      {
        v76 = *(_DWORD *)(v75 + 40LL * v70 + 32);
        if ( v76 >= (unsigned int)v115 && v76 < v118 )
        {
          v99 = *(_DWORD *)(v105[38] + 80LL * (v76 - (unsigned int)v115) + 72);
          if ( v99 != -2 )
          {
            v100 = v105[2];
            v125 = v73;
            *(_QWORD *)v133 = v120;
            v134 = v123;
            sub_894B80(v100, v99, (__int64 *)v133);
            v101 = v125;
            v120 = *(int ***)v133;
            v123 = v134;
            v138 = *(_QWORD **)v133;
            if ( *(_QWORD *)v133 )
              ++*(_DWORD *)(*(_QWORD *)v133 + 8LL);
            v125 = v101;
            sub_91D790(v74, v114);
            v73 = v125;
            v75 = **(_QWORD **)v116;
          }
        }
        ++v70;
        if ( v75 )
        {
          v77 = v75 + 40LL * v70;
          while ( v70 < *(_DWORD *)(v75 - 4) )
          {
            v78 = *(_DWORD *)(v77 + 32);
            v77 += 40;
            if ( v78 != -1 )
              break;
            ++v70;
          }
        }
      }
      while ( v73 != v70 );
    }
    if ( (_DWORD)v115 )
    {
      v79 = 0;
      v80 = 0;
      *(_QWORD *)v116 = (unsigned __int64)(unsigned int)v115 << 6;
      v115 = &v153;
      do
      {
        v138 = nullptr;
        v81 = v114;
        v139 = 0;
        v140 = 1;
        v141 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v114, (int *)(v80 + v193 + 8));
        v114 = v81;
        sub_894960((__int64)v149, (__int64)v81);
        v82 = v79 + v105[50];
        sub_27B950((__int64)qword_1C7F2C0, v82, v149);
        v83 = v82 + 32;
        v84 = (char *)v115;
        sub_27B950((__int64)qword_1C7F2C0, v83, (int *)v115);
        v80 += 232;
        v79 += 64;
        sub_25A130(v84);
        sub_25A130((char *)v149);
        sub_25A130((char *)v114);
      }
      while ( *(_QWORD *)v116 != v79 );
    }
    v138 = nullptr;
    v139 = 0;
    v140 = 1;
    v141 = 0;
    sub_182CBA0(qword_1C7F2C0, &v140);
    v85 = (char *)v114;
    LODWORD(v140) = 1;
    BYTE4(v140) &= ~1u;
    sub_8AD320((__int64)v149, (__int64)v114, (__int64)v113[0]);
    sub_25A130(v85);
    v86 = *(__int64 *(__fastcall **)(__int64 *, _QWORD *, unsigned int, __int64))(*v105 + 424LL);
    if ( v86 == sub_920210 )
      sub_91FCB0((__int64 *)v85, v105, v124, (__int64)v149, 1);
    else
      v86((__int64 *)v114, v105, v124, (__int64)v149);
    v87 = v121;
    v88 = v139;
    v89 = *v121;
    *v121 = (__int64)v138;
    v138 = (_QWORD *)v89;
    sub_91CCE0(v89, v88);
    if ( (unsigned int)sub_180B130(v89) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128_u64) )
      {
        sub_186A4C0(*(double *)si128.m128_u64);
        v90 = sub_180B150(v89, v88);
        v91 = sub_160EBE0(v90, v87);
        sub_91CD00(v91, "\n");
        sub_186A500(v91, "\n");
      }
      else
      {
        v102 = sub_180B150(v89, v88);
        v103 = sub_160EBE0(v102, v121);
        sub_91CD00(v103, "\n");
      }
    }
    v92 = (char *)v113[0];
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v113[0], v105[45] + 32 * v122, (__int64)v113[0]);
    v138 = nullptr;
    v139 = 0;
    v140 = 1;
    v141 = 0;
    sub_182CBA0(qword_1C7F2C0, &v140);
    v93 = (char *)v114;
    LODWORD(v140) = 1;
    BYTE4(v140) &= ~1u;
    sub_8AD320(v119, (__int64)v114, (__int64)v92);
    sub_25A130(v93);
    sub_2A6060((__int64)v149);
    sub_91CCE0((__int64)v120, v123);
    sub_25A130(v148);
    sub_25A130(v92);
  }
  else
  {
    v54 = *(_QWORD *)(v105[3] + 864LL);
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    v55 = v121;
    sub_91CCE0(*v121, v121[1]);
    *v55 = v54;
    sub_8AD320(v119, (__int64)&qword_1C7F280, (__int64)&qword_1C7F200);
  }
  if ( v109 )
  {
    v56 = (unsigned int)*(v109 - 1);
    if ( (_DWORD)v56 )
    {
      v57 = *(_QWORD *)v110;
      v58 = v109;
      v59 = &v109[8 * v56];
      do
      {
        sub_182EF00(v57, v58);
        v60 = v58 + 4;
        v58 += 8;
        sub_182EF00(v57, v60);
      }
      while ( v58 != v59 );
    }
    *(v109 - 1) = 0;
    sub_186B220(v109 - 2);
  }
  sub_186B220(v38 - 2);
  sub_184C8D0(v111);
  sub_184C8D0(v107);
  sub_8AB150(v106);
  return v119;
}

