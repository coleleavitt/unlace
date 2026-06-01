__int64 __fastcall sub_16CBC30(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __m128 a6, double a7)
{
  int v10; // eax
  __int64 v11; // r13
  char v12; // bl
  __int64 v13; // r14
  char v14; // al
  unsigned __int8 v15; // al
  size_t v16; // rax
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rax
  __int64 v47; // rbp
  unsigned __int64 v48; // rax
  size_t v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // r15
  size_t v55; // rax
  unsigned int v56; // ebx
  void **v57; // rdi
  int v58; // eax
  unsigned int v59; // eax
  size_t v60; // rbx
  void **v61; // rsi
  void *v62; // rdx
  __int64 v63; // rax
  int v64; // ebp
  __int64 v65; // rbx
  _WORD *v66; // rax
  char v67; // r13
  __int64 v68; // rcx
  char v69; // al
  unsigned __int8 v70; // al
  char v71; // cl
  unsigned __int8 v72; // al
  unsigned __int64 v73; // rbp
  __int64 v74; // rbx
  size_t v75; // r13
  __int64 v76; // r14
  _WORD *v77; // rax
  char v78; // r8
  __int64 v79; // rsi
  __int64 v80; // r13
  int v81; // ecx
  char v82; // al
  unsigned __int8 v83; // al
  __int64 v84; // rdx
  const char *v85; // rsi
  size_t v86; // rdx
  unsigned int *v87; // rsi
  __int64 v88; // r14
  _WORD *v89; // rax
  char v90; // r8
  __int64 v91; // rsi
  __int64 v92; // r13
  int v93; // ecx
  char v94; // al
  unsigned __int8 v95; // al
  __m128i v96; // xmm2
  size_t v97; // rax
  __int64 v98; // rdi
  size_t v99; // r13
  __int64 v100; // rdi
  __int64 v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r9
  __int64 v107; // rsi
  __int64 v108; // r8
  __int64 v109; // rbp
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  _QWORD *v115; // r13
  size_t v116; // rax
  __int64 v117; // rdi
  size_t v118; // r13
  unsigned __int64 v119; // r14
  __int64 v120; // rax
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // rax
  size_t v124; // rax
  __int64 v125; // rdi
  size_t v126; // rbx
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // rax
  size_t v131; // rax
  __int64 v132; // rdi
  size_t v133; // r13
  __int64 v134; // rax
  __int64 v135; // r14
  unsigned __int64 v136; // r13
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rax
  char *v141; // rdi
  __int32 v142; // eax
  int v143; // ecx
  _BYTE *v144; // rax
  __int16 v145; // ax
  _BYTE *v146; // rax
  size_t v147; // rax
  __int64 v148; // [rsp-10h] [rbp-2C8h]
  __int64 v149; // [rsp-8h] [rbp-2C0h]
  int v150; // [rsp+0h] [rbp-2B8h]
  char v151; // [rsp+0h] [rbp-2B8h]
  __int64 v152; // [rsp+10h] [rbp-2A8h]
  unsigned __int8 v153; // [rsp+10h] [rbp-2A8h]
  __int64 v154; // [rsp+10h] [rbp-2A8h]
  int v156; // [rsp+18h] [rbp-2A0h]
  int v157; // [rsp+18h] [rbp-2A0h]
  __int64 v158; // [rsp+28h] [rbp-290h]
  __int64 v159; // [rsp+30h] [rbp-288h]
  unsigned int v160; // [rsp+40h] [rbp-278h]
  char v161; // [rsp+46h] [rbp-272h]
  char v162; // [rsp+46h] [rbp-272h]
  __int64 v163; // [rsp+48h] [rbp-270h] BYREF
  void *v164; // [rsp+50h] [rbp-268h] BYREF
  __m128i si128; // [rsp+58h] [rbp-260h]
  _BYTE v166[24]; // [rsp+68h] [rbp-250h] BYREF
  void *ptr; // [rsp+80h] [rbp-238h] BYREF
  __int64 v168; // [rsp+88h] [rbp-230h]
  __m128i v169; // [rsp+90h] [rbp-228h] BYREF
  __int64 v170; // [rsp+A0h] [rbp-218h]
  __m128i v171; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v172; // [rsp+D0h] [rbp-1E8h] BYREF
  unsigned __int64 v173; // [rsp+D8h] [rbp-1E0h]
  _BYTE *v174; // [rsp+E0h] [rbp-1D8h]
  char v175; // [rsp+E8h] [rbp-1D0h]
  int v176; // [rsp+ECh] [rbp-1CCh]
  void **v177; // [rsp+F0h] [rbp-1C8h]
  void *v178[4]; // [rsp+100h] [rbp-1B8h] BYREF
  __int128 v179; // [rsp+120h] [rbp-198h]
  __int64 v180; // [rsp+130h] [rbp-188h]
  __int64 v181; // [rsp+138h] [rbp-180h]
  int v182; // [rsp+140h] [rbp-178h]
  __int64 v183; // [rsp+148h] [rbp-170h]
  __int64 v184; // [rsp+150h] [rbp-168h]
  int v185; // [rsp+158h] [rbp-160h]
  __int16 v186; // [rsp+15Ch] [rbp-15Ch]
  char v187; // [rsp+160h] [rbp-158h]
  int v188; // [rsp+164h] [rbp-154h]
  char *v189; // [rsp+168h] [rbp-150h]
  char v190; // [rsp+178h] [rbp-140h]
  char *v191; // [rsp+180h] [rbp-138h]
  char v192; // [rsp+190h] [rbp-128h]
  char *v193; // [rsp+198h] [rbp-120h]
  char v194; // [rsp+1A8h] [rbp-110h]
  const char *v195; // [rsp+1B0h] [rbp-108h]
  char v196; // [rsp+1C0h] [rbp-F8h]
  const char *v197; // [rsp+1C8h] [rbp-F0h]
  char v198; // [rsp+1D8h] [rbp-E0h]
  char *v199; // [rsp+1E0h] [rbp-D8h]
  char v200; // [rsp+1F0h] [rbp-C8h]
  const char *v201; // [rsp+1F8h] [rbp-C0h]
  char v202; // [rsp+208h] [rbp-B0h]
  char *v203; // [rsp+210h] [rbp-A8h]
  char v204; // [rsp+220h] [rbp-98h]
  const char *v205; // [rsp+228h] [rbp-90h]
  char v206; // [rsp+238h] [rbp-80h]
  const char *v207; // [rsp+240h] [rbp-78h]
  char v208; // [rsp+250h] [rbp-68h]
  __int64 v209; // [rsp+258h] [rbp-60h]
  __int64 v210; // [rsp+260h] [rbp-58h]
  int v211; // [rsp+268h] [rbp-50h]
  __int16 v212; // [rsp+26Ch] [rbp-4Ch]
  __int64 v213; // [rsp+270h] [rbp-48h]
  __int64 v214; // [rsp+278h] [rbp-40h]

  v10 = a1[4];
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_BYTE *)(a3 + 1);
  v163 = a4;
  v150 = v10;
  v13 = sub_EEE9A0(24, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v14 = *(_BYTE *)(v13 + 1);
  *(_BYTE *)(v13 + 2) &= 0xF0u;
  *(_QWORD *)(v13 + 8) = v11;
  *(_QWORD *)(v13 + 16) = a3;
  *(_BYTE *)(v13 + 1) = v14 & 1 | v12 & 0x3E;
  *(_DWORD *)(v13 + 4) = v150;
  v15 = sub_B62360(v13);
  *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
  sub_14B7B40((__int64)(a1 + 6), v13);
  v151 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL);
  v16 = j__strlen(" {\n");
  v17 = (__int64)" {\n";
  result = sub_16C9740(a1, " {\n", v16, 0, 0);
  if ( (_BYTE)result )
    return result;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    v160 = a5 + 1;
    v56 = a5 + 1;
LABEL_42:
    if ( v56 )
    {
      v57 = &v178[3];
      v58 = *((unsigned __int8 *)a1 + 312);
      v178[0] = &v178[3];
      v59 = v56 * v58;
      *(__m128i *)&v178[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      v60 = v59;
      if ( v59 )
      {
        if ( v59 > 0x20uLL )
        {
          sub_2236E10(v178, &v178[3], v59, 1);
          v57 = (void **)((char *)v178[0] + (unsigned __int64)v178[1]);
        }
        memset(v57, 32, v60);
        v61 = (void **)v178[0];
        v178[1] = (char *)v178[1] + v60;
        v62 = v178[1];
      }
      else
      {
        v61 = &v178[3];
        v62 = nullptr;
      }
      v63 = sub_AB3DF0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v61, (size_t)v62);
      v64 = a1[4];
      v65 = v63;
      v66 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      v67 = *(_BYTE *)(v65 + 1);
      v68 = *(_QWORD *)(v65 + 8);
      v158 = (__int64)v66;
      *v66 = *v66 & 0xFE00 | 0x14;
      if ( unk_2CD7484 )
      {
        v154 = v68;
        sub_EE9B50(20);
        v68 = v154;
      }
      v69 = *(_BYTE *)(v158 + 1);
      *(_QWORD *)(v158 + 8) = v68;
      *(_QWORD *)(v158 + 24) = v65;
      *(_BYTE *)(v158 + 2) &= 0xF0u;
      *(_BYTE *)(v158 + 1) = v67 & 0x3E | v69 & 1;
      *(_DWORD *)(v158 + 16) = v64;
      *(_DWORD *)(v158 + 20) = v64;
      v70 = sub_B62400(v158);
      v153 = *(_BYTE *)(v158 + 1);
      v17 = v153;
      v71 = *(_BYTE *)(v158 + 2);
      *(_BYTE *)(v158 + 1) = (v70 << 6) | v153 & 0x3F;
      *(_BYTE *)(v158 + 2) = v71 & 0xF8 | (v70 >> 2) & 7;
      if ( v178[0] != &v178[3] )
        free(v178[0]);
    }
    else
    {
      v158 = 0;
    }
    v54 = sub_B8E970(a2 + 64);
    if ( !v54 )
    {
LABEL_31:
      if ( v163 )
      {
        v55 = j__strlen("%s}\n");
        return sub_16C9740(a1, "%s}\n", v55, (__int64)&v163, 1);
      }
      else
      {
        v147 = j__strlen("}\n");
        return sub_16C9740(a1, "}\n", v147, 0, 0);
      }
    }
    v159 = v13;
    while ( 1 )
    {
      v72 = *(_BYTE *)(v54 + 28) & 0x7F;
      if ( v72 == 32 )
      {
        v51 = *(unsigned int *)(v54 + 64);
        v73 = v54;
        v74 = *(_QWORD *)(*(_QWORD *)(v54 + 56) + 8 * v51 - 8);
        if ( !v74 )
          goto LABEL_30;
      }
      else
      {
        if ( (unsigned int)v72 - 49 > 2 )
          goto LABEL_30;
        v74 = v54;
        v73 = 0;
      }
      if ( ((*(_BYTE *)(v74 + 68) & 1) == 0 || *(_QWORD *)(v74 + 40))
        && !(unsigned __int8)sub_B78060(v74, v17, v51, v52, v53) )
      {
        v75 = j__strlen("%s%s %s ");
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8080);
        v164 = v166;
        if ( v75 > 0x14 )
        {
          sub_2236E10(&v164, v166, v75, 1);
          v141 = (char *)v164 + si128.m128i_i64[0];
        }
        else
        {
          if ( !v75 )
            goto LABEL_60;
          v141 = v166;
        }
        memcpy(v141, "%s%s %s ", v75);
        v75 += si128.m128i_i64[0];
LABEL_60:
        si128.m128i_i64[0] = v75;
        v171.m128i_i64[0] = v158;
        ptr = *(void **)(v74 + 48);
        sub_F785A0((__int64)v178, (unsigned __int64 *)&ptr, (const __m128i *)(a1 + 78));
        v76 = sub_AB3DF0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v178[0], (size_t)v178[1]);
        v156 = a1[4];
        v77 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
        v78 = *(_BYTE *)(v76 + 1);
        v79 = *(_QWORD *)(v76 + 8);
        v80 = (__int64)v77;
        v81 = v156;
        *v77 = *v77 & 0xFE00 | 0x14;
        if ( unk_2CD7484 )
        {
          v162 = v78;
          sub_EE9B50(20);
          v78 = v162;
          v81 = v156;
        }
        v82 = *(_BYTE *)(v80 + 1);
        *(_DWORD *)(v80 + 16) = v81;
        *(_BYTE *)(v80 + 2) &= 0xF0u;
        *(_DWORD *)(v80 + 20) = v81;
        *(_QWORD *)(v80 + 8) = v79;
        *(_BYTE *)(v80 + 1) = v78 & 0x3E | v82 & 1;
        *(_QWORD *)(v80 + 24) = v76;
        v83 = sub_B62400(v80);
        *(_BYTE *)(v80 + 1) = (v83 << 6) | *(_BYTE *)(v80 + 1) & 0x3F;
        *(_BYTE *)(v80 + 2) = *(_BYTE *)(v80 + 2) & 0xF8 | (v83 >> 2) & 7;
        if ( v178[0] != &v178[2] )
          operator delete(v178[0]);
        v84 = *(_QWORD *)(v74 + 40);
        v171.m128i_i64[1] = v80;
        if ( (v84 & 7) != 0 )
        {
          v86 = 0;
          v85 = &byte_22F0C30;
        }
        else
        {
          v85 = &byte_22F0C30;
          v86 = v84 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v86 )
          {
            v87 = *(unsigned int **)(v86 + 16);
            v86 = *v87;
            v85 = (const char *)(v87 + 4);
          }
        }
        v88 = sub_AB3DF0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v85, v86);
        v157 = a1[4];
        v89 = (_WORD *)sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
        v90 = *(_BYTE *)(v88 + 1);
        v91 = *(_QWORD *)(v88 + 8);
        v92 = (__int64)v89;
        v93 = v157;
        *v89 = *v89 & 0xFE00 | 0x14;
        if ( unk_2CD7484 )
        {
          v161 = v90;
          sub_EE9B50(20);
          v90 = v161;
          v93 = v157;
        }
        v94 = *(_BYTE *)(v92 + 1);
        *(_DWORD *)(v92 + 16) = v93;
        *(_BYTE *)(v92 + 2) &= 0xF0u;
        *(_DWORD *)(v92 + 20) = v93;
        *(_QWORD *)(v92 + 8) = v91;
        *(_BYTE *)(v92 + 1) = v90 & 0x3E | v94 & 1;
        *(_QWORD *)(v92 + 24) = v88;
        v95 = sub_B62400(v92);
        *(_BYTE *)(v92 + 1) = (v95 << 6) | *(_BYTE *)(v92 + 1) & 0x3F;
        *(_BYTE *)(v92 + 2) = *(_BYTE *)(v92 + 2) & 0xF8 | (v95 >> 2) & 7;
        v96 = _mm_load_si128(&v171);
        v172 = v92;
        v170 = v92;
        ptr = &v169;
        v169 = v96;
        v168 = 0x500000003LL;
        if ( (*(_BYTE *)(v74 + 68) & 1) != 0 )
        {
          v131 = j__strlen(": %zu ");
          v132 = si128.m128i_i64[0];
          v133 = v131;
          if ( v131 + si128.m128i_i64[0] > si128.m128i_i64[1] )
          {
            sub_2236E10(&v164, v166, v131 + si128.m128i_i64[0], 1);
            v132 = si128.m128i_i64[0];
          }
          if ( v133 )
          {
            memcpy((char *)v164 + v132, ": %zu ", v133);
            v132 = si128.m128i_i64[0];
          }
          v134 = *(_QWORD *)a1;
          si128.m128i_i64[0] = v132 + v133;
          v135 = sub_A63CE0(*(_QWORD **)(v134 + 248));
          v136 = (unsigned int)sub_B78170(v74);
          LODWORD(v178[1]) = sub_AAC1F0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v135, v137, v138, v139);
          if ( LODWORD(v178[1]) > 0x40 )
            sub_2205470(v178, v136, 0);
          else
            v178[0] = (void *)v136;
          v140 = sub_C0C5D0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), (__int64)v178, v135, a1[4]);
          sub_14B7B40((__int64)&ptr, v140);
          if ( LODWORD(v178[1]) > 0x40 && v178[0] )
            operator delete[](v178[0]);
        }
        v97 = j__strlen("=");
        v98 = si128.m128i_i64[0];
        v99 = v97;
        if ( v97 + si128.m128i_i64[0] > si128.m128i_i64[1] )
        {
          sub_2236E10(&v164, v166, v97 + si128.m128i_i64[0], 1);
          v98 = si128.m128i_i64[0];
        }
        if ( v99 )
        {
          memcpy((char *)v164 + v98, "=", v99);
          v98 = si128.m128i_i64[0];
        }
        v100 = v99 + v98;
        v101 = *(_QWORD *)a1;
        si128.m128i_i64[0] = v100;
        if ( v73 )
        {
          v102 = (unsigned int)a1[4];
          memset(v178, 0, sizeof(v178));
          v179 = 0;
          v103 = sub_19C5550(v101, v178, v102, v73, v73, v159, v102);
          v107 = v148;
          v108 = HIDWORD(v178[3]);
          v109 = v103;
          if ( !HIDWORD(v178[3]) )
            goto LABEL_76;
LABEL_110:
          free(v178[2]);
        }
        else
        {
          v142 = a1[4];
          v171.m128i_i64[0] = *(_QWORD *)(v74 + 40);
          v171.m128i_i32[2] = v142;
          sub_B85890(&v172, v171.m128i_i64[0]);
          memset(v178, 0, sizeof(v178));
          v143 = a1[4];
          v179 = 0;
          v107 = v159;
          v109 = sub_19C4FE0(v101, v159, v151 == 42, v143, (unsigned int)v178, v74, v74, (__int64)&v171);
          v104 = v149;
          v105 = HIDWORD(v178[3]);
          if ( HIDWORD(v178[3]) )
            goto LABEL_110;
        }
LABEL_76:
        if ( v109 == 1 )
          goto LABEL_36;
        v110 = sub_F63240(*(_QWORD *)(*(_QWORD *)(v74 + 48) & 0xFFFFFFFFFFFFFFF0LL), v107, v104, v105, v108, v106);
        v115 = v110;
        if ( !v110
          || (*((_BYTE *)v110 + 28) & 0x7Fu) - 59 <= 2
          && (sub_7052B0((__int64 *)(v110[13] + 96LL), v110[13], v111, v112, v113, v114), *(char *)v115[16] >= 0) )
        {
          v116 = j__strlen(" ");
          v117 = si128.m128i_i64[0];
          v118 = v116;
          if ( v116 + si128.m128i_i64[0] > si128.m128i_i64[1] )
          {
            sub_2236E10(&v164, v166, v116 + si128.m128i_i64[0], 1);
            v117 = si128.m128i_i64[0];
          }
          if ( v118 )
          {
            memcpy((char *)v164 + v117, " ", v118);
            v117 = si128.m128i_i64[0];
          }
          v119 = *(_QWORD *)(v74 + 48);
          si128.m128i_i64[0] = v117 + v118;
          v171.m128i_i32[2] = 2;
          v171.m128i_i64[0] = (__int64)&off_2BEBEE0;
          v175 = 0;
          v177 = &v164;
          v176 = 1;
          v174 = nullptr;
          v173 = 0;
          v172 = 0;
          sub_227B8B0(&v171, 0, 0, 0);
          v120 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v120 + 16) == 13 )
          {
            v121 = *(unsigned __int16 *)(v120 + 18);
            LOWORD(v121) = (unsigned __int16)v121 >> 3;
            v122 = (unsigned int)(v121 + 76);
            LOWORD(v122) = v122 & 0x1FF;
            switch ( v122 )
            {
              case 0LL:
                sub_995540((__int64)&v171, "%d");
                goto LABEL_20;
              case 1LL:
              case 2LL:
                sub_995540((__int64)&v171, "%hhu");
                goto LABEL_20;
              case 12LL:
              case 13LL:
                sub_995540((__int64)&v171, "%hhd");
                goto LABEL_20;
              default:
                break;
            }
          }
          WORD2(v179) = BYTE4(v179) & 0xFE;
          v184 = 0x300000000LL;
          v189 = "'";
          v191 = "-";
          v193 = "+";
          v195 = " ";
          v197 = "#";
          v199 = "0";
          v201 = "tt";
          v186 &= 0xFEu;
          v178[0] = nullptr;
          LODWORD(v178[1]) = 0;
          *(_OWORD *)&v178[2] = 0u;
          LODWORD(v179) = 0;
          BYTE8(v179) = 1;
          v180 = 0;
          v181 = 0;
          v182 = 0;
          v183 = 0;
          v185 = 0;
          v187 = 0;
          v188 = 0;
          v190 = 0;
          v192 = 0;
          v194 = 0;
          v196 = 0;
          v198 = 0;
          v200 = 0;
          v202 = 0;
          v203 = "private";
          v205 = "public";
          v207 = "sensitive";
          v123 = *(_QWORD *)a1;
          v212 &= 0xFEu;
          v204 = 0;
          v206 = 0;
          v208 = 0;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          v213 = 0;
          v214 = 0;
          if ( (unsigned __int8)sub_ECD350(
                                  (__int64)v178,
                                  v119,
                                  *(_WORD **)(v123 + 232),
                                  *(_QWORD *)(v123 + 248),
                                  0,
                                  0.0) )
          {
            if ( v182 == 21 )
            {
              v144 = v174;
              if ( (unsigned __int64)v174 >= v173 )
              {
                sub_227BA10(&v171, 34);
              }
              else
              {
                ++v174;
                *v144 = 34;
              }
              v209 = 0;
              v210 = 0x100000000LL;
              v211 = 32;
              LOBYTE(v145) = v212 & 0xFE;
              HIBYTE(v145) = 1;
              v212 = v145;
              sub_ECD9C0((__int64)v178, (__int64)&v171);
              v146 = v174;
              if ( (unsigned __int64)v174 >= v173 )
              {
                sub_227BA10(&v171, 34);
              }
              else
              {
                ++v174;
                *v146 = 34;
              }
            }
            else
            {
              sub_ECD9C0((__int64)v178, (__int64)&v171);
            }
          }
          else
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) != 42 )
            {
              v171.m128i_i64[0] = (__int64)&unk_2C76288;
              sub_227B7A0(&v171);
              v124 = j__strlen("*%p");
              v125 = si128.m128i_i64[0];
              v126 = v124;
              if ( v124 + si128.m128i_i64[0] > si128.m128i_i64[1] )
              {
                sub_2236E10(&v164, v166, v124 + si128.m128i_i64[0], 1);
                v125 = si128.m128i_i64[0];
              }
              if ( v126 )
              {
                memcpy((char *)v164 + v125, "*%p", v126);
                v125 = si128.m128i_i64[0];
              }
              v127 = v125 + v126;
              v128 = (unsigned int)a1[4];
              v129 = *(_QWORD *)a1;
              si128.m128i_i64[0] = v127;
              v130 = sub_1925670(v129, 0, v128, 4, v109 & 0xFFFFFFFFFFFFFFFELL, 0);
              if ( v130 == 1 )
              {
LABEL_36:
                if ( ptr != &v169 )
                  free(ptr);
                if ( v164 != v166 )
                  free(v164);
                return 1;
              }
              sub_14B7B40((__int64)&ptr, v130 & 0xFFFFFFFFFFFFFFFELL);
LABEL_21:
              v49 = j__strlen("\n");
              v50 = si128.m128i_i64[0];
              if ( v49 + si128.m128i_i64[0] > si128.m128i_i64[1] )
              {
                sub_2236E10(&v164, v166, v49 + si128.m128i_i64[0], 1);
                v50 = si128.m128i_i64[0];
              }
              v17 = (__int64)v164;
              if ( v49 )
              {
                memcpy((char *)v164 + v50, "\n", v49);
                v17 = (__int64)v164;
                v50 = si128.m128i_i64[0];
              }
              si128.m128i_i64[0] = v50 + v49;
              if ( (unsigned __int8)sub_16C9740(a1, (const void *)v17, v50 + v49, (__int64)ptr, (unsigned int)v168) )
                goto LABEL_36;
LABEL_26:
              if ( ptr != &v169 )
                free(ptr);
              if ( v164 != v166 )
                free(v164);
              goto LABEL_30;
            }
            sub_995540((__int64)&v171, "%p");
          }
LABEL_20:
          v171.m128i_i64[0] = (__int64)&unk_2C76288;
          sub_227B7A0(&v171);
          sub_14B7B40((__int64)&ptr, v109 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_21;
        }
        if ( (unsigned __int8)sub_16C9740(a1, v164, si128.m128i_u64[0], (__int64)ptr, (unsigned int)v168) )
          goto LABEL_36;
        v17 = (__int64)v115;
        if ( (unsigned __int8)sub_16CBC30(a1, v115, v109 & 0xFFFFFFFFFFFFFFFELL, v158, v160) )
          goto LABEL_36;
        goto LABEL_26;
      }
LABEL_30:
      v54 = *(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v54 )
        goto LABEL_31;
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v19, v20, v21, v22);
  v27 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
    v28 = sub_B96980(v27);
  else
    v28 = *(_QWORD *)(v27 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v24, v25, v26);
  v17 = *(_QWORD *)(a2 + 104);
  v152 = v28 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_7052B0((__int64 *)(v17 + 96), v17, v29, v30, v31, v32);
  v33 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v33 + 24) & 1) != 0 )
    v34 = sub_B96980(v33);
  else
    v34 = *(_QWORD *)(v33 + 24);
  v35 = a5 + 1;
  if ( v152 == v34 )
  {
LABEL_115:
    v160 = v35;
    v56 = v35;
    goto LABEL_42;
  }
  while ( 1 )
  {
    v47 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
    v178[0] = **(void ***)(v34 + 16);
    v48 = sub_6D5440(v178);
    v36 = v151 == 42 ? sub_A70010(v47, v48) : sub_A73030(v47, v48, 1u);
    v37 = *(_QWORD *)a1;
    v38 = sub_A81910(*(_QWORD **)(*(_QWORD *)a1 + 248LL), v36, a1[4]);
    v39 = (unsigned int)a1[4];
    v40 = sub_16B2590(v37, v39, v38, a1[4], (_WORD *)v13, a6, a7);
    if ( v40 == 1 )
      return 1;
    v45 = v40 & 0xFFFFFFFFFFFFFFFELL;
    v46 = *(_QWORD *)(**(_QWORD **)(v34 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v46 + 8) & 0xF) != 0 )
      v46 = sub_F64F00(**(_QWORD **)(v34 + 16), v39, v41, v42, v43);
    v17 = (__int64)sub_F63240(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL), v39, v41, v42, v43, v44);
    if ( (unsigned __int8)sub_16CCF50(a1, v17, v45, (unsigned int)(a5 + 1)) )
      return 1;
    v34 += 24;
    if ( v34 == v152 )
    {
      v35 = a5 + 1;
      goto LABEL_115;
    }
  }
}
