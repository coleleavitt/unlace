__int64 __fastcall sub_947EC0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5, double a6)
{
  char *v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  int *v12; // rbx
  int *j; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rbx
  int v22; // edi
  char v23; // al
  char v24; // si
  void *v25; // r14
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rsi
  void *v29; // rbp
  unsigned __int64 v30; // r15
  _DWORD *v31; // rbx
  char *v32; // r13
  char *v33; // rbp
  int v34; // eax
  int *v35; // r8
  __int64 v36; // rdi
  unsigned int v37; // eax
  int v38; // eax
  __m128i v39; // xmm0
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // rbp
  __int64 v43; // rax
  __m128i si128; // xmm0
  int *v45; // r13
  int *k; // rbp
  int v47; // r14d
  __int64 v48; // rax
  void *v49; // r15
  __int64 v50; // r15
  __int64 v51; // rax
  unsigned int v52; // esi
  __int64 v53; // r14
  int *v54; // r8
  unsigned int v55; // edx
  __int64 v56; // r13
  __int64 v57; // rbp
  __int64 *v58; // r14
  __int64 v59; // rbp
  __int64 v60; // r12
  __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rax
  int v65; // r14d
  int v66; // esi
  int v67; // ebp
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // r14
  unsigned __int64 *v73; // r13
  __int64 *v74; // r13
  int v75; // r8d
  unsigned int v76; // eax
  _QWORD *v77; // r13
  __int64 v78; // rsi
  unsigned int v79; // edx
  __int64 v80; // rdx
  int v81; // ecx
  char *v82; // r14
  __int64 v83; // r13
  char *v84; // r14
  __int64 *(__fastcall *v85)(__int64 *, _QWORD *, unsigned int, __int64); // rax
  __int64 *v86; // r14
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rdi
  char *v91; // r14
  char *v92; // rbp
  int *v93; // rbx
  int *i; // rbp
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rdi
  unsigned int v98; // ecx
  __int64 v99; // rdi
  int v100; // r8d
  unsigned int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rax
  char *v104; // [rsp+0h] [rbp-E28h]
  _BYTE *v105; // [rsp+8h] [rbp-E20h]
  void *v106[2]; // [rsp+10h] [rbp-E18h] BYREF
  void *v107; // [rsp+20h] [rbp-E08h]
  int v108[2]; // [rsp+28h] [rbp-E00h]
  void *v109; // [rsp+30h] [rbp-DF8h]
  __m128i v110; // [rsp+38h] [rbp-DF0h] BYREF
  void *v111; // [rsp+48h] [rbp-DE0h]
  int v112[2]; // [rsp+50h] [rbp-DD8h]
  int v113[2]; // [rsp+58h] [rbp-DD0h]
  unsigned int v114; // [rsp+60h] [rbp-DC8h]
  unsigned int v115; // [rsp+64h] [rbp-DC4h]
  __int64 v116; // [rsp+68h] [rbp-DC0h]
  int **v117; // [rsp+70h] [rbp-DB8h]
  __int64 *v118; // [rsp+78h] [rbp-DB0h]
  __int64 v119; // [rsp+80h] [rbp-DA8h]
  int v120; // [rsp+88h] [rbp-DA0h]
  unsigned int v121; // [rsp+8Ch] [rbp-D9Ch]
  int v122; // [rsp+90h] [rbp-D98h]
  int v123[2]; // [rsp+98h] [rbp-D90h] BYREF
  int v124[4]; // [rsp+A0h] [rbp-D88h] BYREF
  int v125[2]; // [rsp+B0h] [rbp-D78h] BYREF
  int v126[2]; // [rsp+B8h] [rbp-D70h]
  int v127[2]; // [rsp+C0h] [rbp-D68h] BYREF
  int v128[2]; // [rsp+C8h] [rbp-D60h]
  int v129[2]; // [rsp+D0h] [rbp-D58h] BYREF
  int v130[2]; // [rsp+D8h] [rbp-D50h]
  int v131; // [rsp+E0h] [rbp-D48h] BYREF
  char v132; // [rsp+E4h] [rbp-D44h]
  __int64 v133; // [rsp+E8h] [rbp-D40h]
  __int64 v134; // [rsp+F0h] [rbp-D38h] BYREF
  void *v135; // [rsp+F8h] [rbp-D30h]
  __int64 v136; // [rsp+100h] [rbp-D28h] BYREF
  __int64 v137; // [rsp+108h] [rbp-D20h]
  int v138; // [rsp+110h] [rbp-D18h] BYREF
  char v139; // [rsp+114h] [rbp-D14h]
  __int64 v140; // [rsp+118h] [rbp-D10h]
  int v141; // [rsp+120h] [rbp-D08h] BYREF
  char v142; // [rsp+124h] [rbp-D04h]
  __int64 v143; // [rsp+128h] [rbp-D00h]
  char v144[32]; // [rsp+130h] [rbp-CF8h] BYREF
  __int64 v145; // [rsp+150h] [rbp-CD8h] BYREF
  void *v146; // [rsp+158h] [rbp-CD0h]
  __int64 v147; // [rsp+160h] [rbp-CC8h] BYREF
  __int64 v148; // [rsp+168h] [rbp-CC0h]
  __int64 v149; // [rsp+170h] [rbp-CB8h] BYREF
  __int64 v150; // [rsp+178h] [rbp-CB0h]
  __int64 v151; // [rsp+180h] [rbp-CA8h] BYREF
  __int64 v152; // [rsp+188h] [rbp-CA0h]
  _BYTE v153[600]; // [rsp+1B0h] [rbp-C78h] BYREF
  __int64 v154; // [rsp+408h] [rbp-A20h]
  __int64 v155; // [rsp+410h] [rbp-A18h]
  __int64 v156; // [rsp+418h] [rbp-A10h]
  __int64 v157; // [rsp+420h] [rbp-A08h]
  __int64 v158; // [rsp+428h] [rbp-A00h]
  __int64 v159; // [rsp+430h] [rbp-9F8h]
  __int64 v160; // [rsp+438h] [rbp-9F0h]
  __int64 v161; // [rsp+440h] [rbp-9E8h]
  __int64 v162; // [rsp+448h] [rbp-9E0h]
  __int64 v163; // [rsp+450h] [rbp-9D8h]
  __int64 v164; // [rsp+458h] [rbp-9D0h]
  __int64 v165; // [rsp+460h] [rbp-9C8h]
  __int64 v166; // [rsp+468h] [rbp-9C0h]
  __int64 v167; // [rsp+470h] [rbp-9B8h]
  __int64 v168; // [rsp+478h] [rbp-9B0h]
  __int64 v169; // [rsp+480h] [rbp-9A8h]
  _BYTE v170[600]; // [rsp+490h] [rbp-998h] BYREF
  __int64 v171; // [rsp+6E8h] [rbp-740h]
  __int64 v172; // [rsp+6F0h] [rbp-738h]
  __int64 v173; // [rsp+6F8h] [rbp-730h]
  __int64 v174; // [rsp+700h] [rbp-728h]
  __int64 v175; // [rsp+708h] [rbp-720h]
  __int64 v176; // [rsp+710h] [rbp-718h]
  __int64 v177; // [rsp+718h] [rbp-710h]
  __int64 v178; // [rsp+720h] [rbp-708h]
  __int64 v179; // [rsp+728h] [rbp-700h]
  __int64 v180; // [rsp+730h] [rbp-6F8h]
  __int64 v181; // [rsp+738h] [rbp-6F0h]
  __int64 v182; // [rsp+740h] [rbp-6E8h]
  __int64 v183; // [rsp+748h] [rbp-6E0h]
  __int64 v184; // [rsp+750h] [rbp-6D8h]
  __int64 v185; // [rsp+758h] [rbp-6D0h]
  __int64 v186; // [rsp+760h] [rbp-6C8h]
  __int64 v187; // [rsp+768h] [rbp-6C0h]
  _BYTE v188[1480]; // [rsp+770h] [rbp-6B8h] BYREF
  __int64 v189; // [rsp+D38h] [rbp-F0h]
  __int64 v190; // [rsp+DA8h] [rbp-80h]

  v9 = (char *)a2[3];
  v116 = a1;
  v10 = v188;
  v118 = a4;
  *(_QWORD *)v108 = v188;
  v120 = a3;
  sub_8C3600((__int64)v188, (__int64)v9);
  v119 = a3;
  v11 = a2[29];
  *a5 = 0;
  v117 = (int **)(v11 + 8LL * a3);
  if ( (unsigned int)sub_180B130(v188) > 3 )
  {
    if ( (unsigned __int8)sub_186A530(a6) )
    {
      sub_186A4C0(a6);
      v93 = *v117;
      if ( *v117 )
      {
        for ( i = &v93[10 * *(v93 - 1)]; i != v93; v93 += 10 )
        {
          v95 = sub_180B150(v10, v9);
          sub_2FCE40(v95, (__int64)(v93 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_BYTE *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v96 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v97 = sub_2FCE40(v96, a2[30] + 32 * v119);
      sub_91CD00(v97, "\n");
      sub_186A500(v97, "\n");
    }
    else
    {
      v12 = *v117;
      if ( *v117 )
      {
        for ( j = &v12[10 * *(v12 - 1)]; j != v12; v12 += 10 )
        {
          v14 = sub_180B150(v10, v9);
          sub_2FCE40(v14, (__int64)(v12 + 2));
          std::__ostream_insert<char,std::char_traits<char>>();
          v10 = (_BYTE *)std::ostream::operator<<();
          v9 = " ";
          sub_91CD00((__int64)v10, " ");
        }
      }
      v15 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = sub_2FCE40(v15, a2[30] + 32 * v119);
      sub_91CD00(v16, "\n");
    }
  }
  v109 = v153;
  sub_1839FF0(v153);
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 1;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 1;
  v169 = 0;
  v105 = v170;
  sub_1839FF0(v170);
  v171 = 0;
  v172 = 0;
  v187 = 0x3F1A36E2EB1C432DLL;
  v17 = a2[4];
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  v178 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 1;
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = 1;
  v186 = 0;
  if ( !v17 )
  {
    v18 = a2[23];
    v114 = 0;
    if ( v18 )
      goto LABEL_9;
LABEL_91:
    LODWORD(v111) = 0;
    v115 = v114;
    goto LABEL_10;
  }
  v114 = *(_DWORD *)(v17 - 4);
  v18 = a2[23];
  if ( !v18 )
    goto LABEL_91;
LABEL_9:
  LODWORD(v111) = *(_DWORD *)(v18 - 4);
  v115 = v114 + (_DWORD)v111;
LABEL_10:
  v19 = a2[29];
  v20 = v115;
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4) + v115;
  sub_8C3910(*(__int64 *)v108, v20);
  if ( !v114 )
    goto LABEL_31;
  v21 = 0;
  v110.m128i_i64[1] = v114;
  v107 = v127;
  while ( 1 )
  {
    v26 = *(_DWORD *)(a2[35] + 4 * v21);
    LOBYTE(v125[1]) &= 0xFCu;
    LOBYTE(v127[1]) &= 0xFCu;
    *(_QWORD *)v126 = 0;
    v127[0] = 1;
    *(_QWORD *)v128 = 0;
    v125[0] = v26;
    sub_182CBA0(qword_1C7F2C0, v107);
    v127[0] = 1;
    LOBYTE(v127[1]) &= ~1u;
    LOBYTE(v129[1]) &= 0xFCu;
    v132 &= 0xFCu;
    *(_QWORD *)v130 = 0;
    v131 = 1;
    v133 = 0;
    v129[0] = dword_1C7F370;
    sub_182CBA0(qword_1C7F2C0, &v131);
    v132 &= ~1u;
    v139 &= 0xFCu;
    v142 &= 0xFCu;
    v131 = 1;
    v138 = 0;
    v140 = 0;
    v141 = 1;
    v143 = 0;
    if ( (v129[1] & 1) != 0 )
    {
      v106[0] = v125;
      sub_182EA00(v109, &v138, v129);
      if ( (v132 & 1) == 0 )
      {
LABEL_15:
        v142 &= ~1u;
        v141 = v131;
        goto LABEL_16;
      }
    }
    else
    {
      v138 = v129[0];
      if ( (v132 & 1) == 0 )
        goto LABEL_15;
    }
    v106[0] = v125;
    sub_182EA00(v109, &v141, &v131);
LABEL_16:
    BYTE4(v134) &= 0xFCu;
    BYTE4(v136) &= 0xFCu;
    LODWORD(v134) = 0;
    v135 = nullptr;
    LODWORD(v136) = 1;
    v137 = 0;
    if ( (v125[1] & 1) != 0 )
    {
      v106[0] = v125;
      sub_182EA00(v109, &v134, v125);
    }
    else
    {
      LODWORD(v134) = v125[0];
      v106[0] = v125;
    }
    if ( (v127[1] & 1) != 0 )
    {
      sub_182EA00(v109, &v136, v107);
      v23 = BYTE4(v136);
      v22 = v136;
      v24 = BYTE4(v136) & 1;
    }
    else
    {
      v22 = v127[0];
      v23 = BYTE4(v136);
      v24 = 0;
    }
    LODWORD(v147) = v22;
    LODWORD(v145) = v134;
    BYTE4(v145) = BYTE4(v134) & 3 | BYTE4(v145) & 0xFC;
    v146 = v135;
    BYTE4(v147) = BYTE4(v147) & 0xFC | v24 | v23 & 2;
    v148 = v137;
    LODWORD(v149) = v138;
    BYTE4(v149) = v139 & 3 | BYTE4(v149) & 0xFC;
    v150 = v140;
    LODWORD(v151) = v141;
    BYTE4(v151) = v142 & 3 | BYTE4(v151) & 0xFC;
    v152 = v143;
    sub_8B2CA0(*(_QWORD **)v108, v21, (__int64)&v145);
    sub_182EF00(v170, &v145);
    sub_182EF00(v170, &v147);
    sub_182EF00(v170, &v149);
    sub_182EF00(v170, &v151);
    v110.m128i_i64[0] = (__int64)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v129);
    sub_182CBA0(v110.m128i_i64[0], &v131);
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v106[0]);
    sub_182CBA0(v25, v107);
    if ( v110.m128i_i64[1] == v21 + 1 )
      break;
    ++v21;
  }
  v27 = 0;
  v107 = &v138;
  v106[0] = a2 + 11;
  while ( 1 )
  {
    v28 = **(_QWORD **)(a2[4] + 8 * v27);
    v145 = 0;
    v146 = nullptr;
    v147 = 1;
    v148 = 0;
    if ( (unsigned __int8)sub_1666AE0(v106[0], v28, &v145, v107) )
    {
      if ( !(_DWORD)v145 )
        break;
    }
    v49 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v145);
    sub_182CBA0(v49, &v147);
    if ( v21 == v27 )
      goto LABEL_31;
    ++v27;
  }
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v145);
  sub_182CBA0(v29, &v147);
  v145 = 0;
  v146 = nullptr;
  v147 = 1;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  sub_8B3D10(*(_QWORD **)v108, v27, (__int64)&v145);
  v145 = 0;
  v146 = nullptr;
  v147 = 1;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  sub_8B3EE0(*(_QWORD **)v108, v27, (__int64)&v145);
LABEL_31:
  v145 = 1;
  v146 = nullptr;
  *(_QWORD *)&v124[2] = v109;
  v147 = 1;
  v148 = 0;
  *(_QWORD *)v124 = 0;
  v110.m128i_i64[1] = (__int64)v124;
  sub_8ADEE0((int **)v124, (int *)&v145);
  v146 = nullptr;
  v145 = 0xFFFFFFFFLL;
  v147 = 1;
  v148 = 0;
  sub_8ADEE0((int **)v124, (int *)&v145);
  v146 = nullptr;
  v145 = 0xFFFFFFFFLL;
  v147 = 1;
  v148 = 0;
  sub_8ADEE0((int **)v124, (int *)&v145);
  *(_QWORD *)v123 = 0;
  v30 = *(_QWORD *)&v124[2];
  v110.m128i_i64[0] = *(_QWORD *)v124;
  *(_QWORD *)v113 = v123;
  sub_83BF90(v123, 3u);
  v31 = *(_DWORD **)v123;
  if ( (_DWORD)v111 )
  {
    v32 = nullptr;
    v111 = (void *)(16LL * (unsigned int)v111);
    LODWORD(v107) = v114;
    *(_QWORD *)v112 = v127;
    do
    {
      v33 = &v32[a2[23]];
      if ( *(_DWORD *)v33 != -1 )
      {
        v34 = *((_DWORD *)v33 + 1);
        if ( v34 != -1 )
        {
          *v31 = v34;
          v35 = (int *)v110.m128i_i64[0];
          v36 = *(_QWORD *)v108;
          v31[1] = *(_DWORD *)v33;
          v37 = (unsigned int)v107;
          v31[2] = (_DWORD)v107;
          sub_8B15E0(v36, v37, 3u, (__int64)v31, v35);
          v38 = *((_DWORD *)v33 + 2);
          *(_QWORD *)v126 = 0;
          LOBYTE(v125[1]) &= 0xFCu;
          LOBYTE(v127[1]) &= 0xFCu;
          v127[0] = 1;
          *(_QWORD *)v128 = 0;
          v125[0] = v38;
          sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v112);
          v127[0] = 1;
          LOBYTE(v127[1]) &= ~1u;
          LOBYTE(v129[1]) &= 0xFCu;
          v132 &= 0xFCu;
          *(_QWORD *)v130 = 0;
          v131 = 1;
          v133 = 0;
          v129[0] = dword_1C7F370;
          sub_182CBA0(qword_1C7F2C0, &v131);
          v132 &= ~1u;
          v139 &= 0xFCu;
          v142 &= 0xFCu;
          v131 = 1;
          v138 = 0;
          v140 = 0;
          v141 = 1;
          v143 = 0;
          sub_8ADE80((__int64)v109, (__int64)&v138, v129);
          BYTE4(v134) &= 0xFCu;
          BYTE4(v136) &= 0xFCu;
          LODWORD(v134) = 0;
          v135 = nullptr;
          LODWORD(v136) = 1;
          v137 = 0;
          v106[0] = v125;
          sub_8ADE80((__int64)v109, (__int64)&v134, v125);
          LODWORD(v145) = v134;
          BYTE4(v145) = BYTE4(v134) & 3 | BYTE4(v145) & 0xFC;
          v146 = v135;
          LODWORD(v147) = v136;
          BYTE4(v147) = BYTE4(v136) & 3 | BYTE4(v147) & 0xFC;
          v148 = v137;
          LODWORD(v149) = v138;
          BYTE4(v149) = v139 & 3 | BYTE4(v149) & 0xFC;
          v150 = v140;
          LODWORD(v151) = v141;
          BYTE4(v151) = v142 & 3 | BYTE4(v151) & 0xFC;
          v152 = v143;
          sub_8B3EE0(*(_QWORD **)v108, (unsigned int)v107, (__int64)&v145);
          sub_8AD4E0((__int64)v170, (__int64)&v145);
          sub_25A130((char *)v129);
          sub_25A130((char *)v125);
        }
      }
      LODWORD(v107) = (_DWORD)v107 + 1;
      v32 += 16;
    }
    while ( v111 != v32 );
  }
  v39 = _mm_loadl_epi64(&v110);
  LODWORD(v107) = v115 + v120;
  if ( v110.m128i_i64[0] )
  {
    v40 = *(unsigned int *)(v110.m128i_i64[0] - 4);
    if ( (_DWORD)v40 )
    {
      v41 = v110.m128i_i64[0];
      v42 = v110.m128i_i64[0] + 32 * v40;
      do
      {
        sub_182EF00(v30, v41);
        sub_182EF00(v30, v41 + 16);
        v41 += 32;
      }
      while ( v42 != v41 );
    }
    v43 = v110.m128i_i64[0];
    *(_DWORD *)(v110.m128i_i64[0] - 4) = 0;
    v39 = (__m128i)(unsigned __int64)v43;
  }
  si128 = _mm_unpacklo_epi64(v39, (__m128i)v30);
  if ( v31 )
    *(v31 - 1) = 0;
  v45 = *v117;
  if ( *v117 )
  {
    for ( k = &v45[10 * *(v45 - 1)]; v45 != k; ++*(v31 - 1) )
    {
      *(__m128i *)v124 = si128;
      sub_8ADEE0((int **)v110.m128i_i64[1], v45 + 2);
      si128 = _mm_load_si128((const __m128i *)v124);
      v47 = *v45;
      if ( !v31 || (v48 = (unsigned int)*(v31 - 1), (_DWORD)v48 == *(v31 - 2)) )
      {
        *(_QWORD *)v123 = v31;
        *(__m128i *)v106 = si128;
        v110.m128i_i64[0] = *(_QWORD *)v124;
        sub_2FD3F0(*(unsigned int ***)v113);
        v31 = *(_DWORD **)v123;
        si128 = _mm_load_si128((const __m128i *)v106);
        v48 = *(unsigned int *)(*(_QWORD *)v123 - 4LL);
      }
      v45 += 10;
      v31[v48] = v47;
    }
  }
  v145 = 1;
  v146 = nullptr;
  v147 = 1;
  v148 = 0;
  *(__m128i *)v124 = si128;
  sub_8ADEE0((int **)v110.m128i_i64[1], (int *)&v145);
  v50 = *(_QWORD *)&v124[2];
  v110.m128i_i64[0] = *(_QWORD *)v124;
  if ( !v31 || (v51 = (unsigned int)*(v31 - 1), (_DWORD)v51 == *(v31 - 2)) )
  {
    *(_QWORD *)v123 = v31;
    sub_2FD3F0(*(unsigned int ***)v113);
    v31 = *(_DWORD **)v123;
    v51 = *(unsigned int *)(*(_QWORD *)v123 - 4LL);
  }
  v52 = (unsigned int)v107;
  v53 = *(_QWORD *)v108;
  v54 = (int *)v110.m128i_i64[0];
  v31[v51] = (_DWORD)v107;
  v55 = *(v31 - 1) + 1;
  *(v31 - 1) = v55;
  v56 = (unsigned int)sub_8B15E0(v53, v52, v55, (__int64)v31, v54);
  if ( (unsigned int)sub_8B36C0(v53)
    && (v65 = v108[0],
        v66 = (int)v107,
        v67 = sub_8B4740(*(_QWORD **)v108, (unsigned int)v107),
        sub_1745AB0(
          v65,
          v66,
          v68,
          v69,
          v70,
          v71,
          &v145,
          v170,
          v106[0],
          v106[1],
          v107,
          v108[0],
          (int)v109,
          v110.m128i_i32[0],
          v110.m128i_i32[2],
          (int)v111,
          v112[0],
          v113[0],
          v114,
          v116,
          (int)v117,
          (int)v118,
          v119,
          v120,
          v122,
          v123[0],
          v124[0],
          v124[2],
          v125[0],
          v126[0],
          v127[0],
          v128[0],
          v129[0],
          v130[0],
          v131,
          v133),
        v67 == 1) )
  {
    v134 = 0;
    v135 = nullptr;
    v136 = 1;
    v72 = v190 + 232LL * (unsigned int)v107;
    v137 = 0;
    v111 = &v134;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v134, (int *)(v72 + 40));
    sub_3EBD70((__int64)v104, (__int64)v111);
    *(_QWORD *)v125 = 0;
    *(_QWORD *)v126 = 0;
    *(_QWORD *)v127 = 1;
    *(_QWORD *)v128 = 0;
    v106[0] = v125;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v125, (int *)(v72 + 8));
    sub_3EBD70((__int64)v129, (__int64)v106[0]);
    v107 = &v138;
    sub_894A60((__int64)&v138, (__int64)v129, (__int64)v104);
    sub_25A130((char *)v129);
    sub_25A130((char *)v106[0]);
    sub_25A130(v104);
    sub_25A130((char *)v111);
    v73 = (unsigned __int64 *)(v189 + 16 * v56);
    sub_89A080((__int64)v104, v73, 1);
    LODWORD(v117) = v145;
    v106[0] = v146;
    sub_89A080((__int64)v104, v73, 0);
    v74 = (__int64 *)(a2[31] + 16 * v119);
    *(_QWORD *)v113 = a2[3];
    v112[0] = v145;
    sub_2FCDE0(v74);
    v75 = v112[0];
    v76 = (unsigned int)v117;
    if ( v112[0] == (_DWORD)v117 )
    {
      *(_QWORD *)v112 = 0;
    }
    else
    {
      v77 = v74 + 1;
      *(_QWORD *)v112 = 0;
      v78 = *(_QWORD *)v106[0];
      do
      {
        v79 = *(_DWORD *)(v78 + 40LL * v76 + 32);
        if ( v79 >= v114 && v79 < v115 )
        {
          v98 = *(_DWORD *)(a2[23] + 16LL * (v79 - v114) + 12);
          if ( v98 != -2 )
          {
            v99 = a2[2];
            LODWORD(v117) = v75;
            v121 = v76;
            *(_QWORD *)v129 = *(_QWORD *)v112;
            *(_QWORD *)v130 = *(_QWORD *)v113;
            sub_894B80(v99, v98, (__int64 *)v129);
            v100 = (int)v117;
            *(_QWORD *)v113 = *(_QWORD *)v130;
            v101 = v121;
            *(_QWORD *)v112 = *(_QWORD *)v129;
            v134 = *(_QWORD *)v129;
            if ( *(_QWORD *)v129 )
              ++*(_DWORD *)(*(_QWORD *)v129 + 8LL);
            LODWORD(v117) = v100;
            v121 = v101;
            sub_91D790(v77, v111);
            v75 = (int)v117;
            v78 = *(_QWORD *)v106[0];
            v76 = v121;
          }
        }
        ++v76;
        if ( v78 )
        {
          v80 = v78 + 40LL * v76;
          while ( v76 < *(_DWORD *)(v78 - 4) )
          {
            v81 = *(_DWORD *)(v80 + 32);
            v80 += 40;
            if ( v81 != -1 )
              break;
            ++v76;
          }
        }
      }
      while ( v75 != v76 );
    }
    if ( v114 )
    {
      v82 = nullptr;
      v83 = 0;
      v106[0] = (void *)(4LL * v114);
      do
      {
        v145 = 0;
        v146 = nullptr;
        v147 = 1;
        v148 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v104, (int *)(v83 + v190 + 8));
        v83 += 232;
        *(_DWORD *)&v82[a2[35]] = sub_182D050(qword_1C7F2C0, v104);
        v82 += 4;
        sub_25A130(v104);
      }
      while ( v82 != v106[0] );
    }
    v134 = 0;
    v135 = nullptr;
    v136 = 1;
    v137 = 0;
    sub_182CBA0(qword_1C7F2C0, &v136);
    v84 = (char *)v111;
    LODWORD(v136) = 1;
    BYTE4(v136) &= ~1u;
    sub_8AD320((__int64)v104, (__int64)v111, (__int64)v107);
    sub_25A130(v84);
    v85 = *(__int64 *(__fastcall **)(__int64 *, _QWORD *, unsigned int, __int64))(*a2 + 424LL);
    if ( v85 == sub_923510 )
      sub_922FC0((__int64 *)v84, a2, v120, (__int64)v104, 1);
    else
      v85((__int64 *)v111, a2, v120, (__int64)v104);
    v86 = v118;
    v87 = (__int64)v135;
    v88 = *v118;
    *v118 = v134;
    v134 = v88;
    sub_91CCE0(v88, v87);
    if ( (unsigned int)sub_180B130(v88) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128i_i64) )
      {
        sub_186A4C0(*(double *)si128.m128i_i64);
        v89 = sub_180B150(v88, v87);
        v90 = sub_160EBE0(v89, v86);
        sub_91CD00(v90, "\n");
        sub_186A500(v90, "\n");
      }
      else
      {
        v102 = sub_180B150(v88, v87);
        v103 = sub_160EBE0(v102, v118);
        sub_91CD00(v103, "\n");
      }
    }
    v91 = (char *)v107;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v107, a2[30] + 32 * v119, (__int64)v107);
    v134 = 0;
    v135 = nullptr;
    v136 = 1;
    v137 = 0;
    sub_182CBA0(qword_1C7F2C0, &v136);
    v92 = (char *)v111;
    LODWORD(v136) = 1;
    BYTE4(v136) &= ~1u;
    sub_8AD320(v116, (__int64)v111, (__int64)v91);
    sub_25A130(v92);
    sub_2A6060((__int64)v104);
    sub_91CCE0(*(__int64 *)v112, *(__int64 *)v113);
    sub_25A130(v144);
    sub_25A130(v91);
  }
  else
  {
    v57 = *(_QWORD *)(a2[3] + 864LL);
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    v58 = v118;
    sub_91CCE0(*v118, v118[1]);
    *v58 = v57;
    sub_8AD320(v116, (__int64)&qword_1C7F280, (__int64)&qword_1C7F200);
  }
  if ( v110.m128i_i64[0] )
  {
    v59 = *(unsigned int *)(v110.m128i_i64[0] - 4);
    if ( (_DWORD)v59 )
    {
      v60 = v110.m128i_i64[0];
      v61 = v110.m128i_i64[0] + 32 * v59;
      do
      {
        sub_182EF00(v50, v60);
        v62 = v60 + 16;
        v60 += 32;
        sub_182EF00(v50, v62);
      }
      while ( v60 != v61 );
    }
    v63 = v110.m128i_i64[0];
    *(_DWORD *)(v110.m128i_i64[0] - 4) = 0;
    sub_186B220((void *)(v63 - 8));
  }
  sub_186B220(v31 - 2);
  sub_184C8D0(v105);
  sub_184C8D0(v109);
  sub_8AB150(*(_QWORD **)v108);
  return v116;
}

