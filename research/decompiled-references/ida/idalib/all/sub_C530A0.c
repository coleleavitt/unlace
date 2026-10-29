__int64 __fastcall sub_C530A0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  const __m128i *v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // r13
  unsigned int v15; // r12d
  __m128i v16; // xmm2
  __int16 v17; // dx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // r12
  __int64 i; // r13
  __int64 v27; // rdx
  __int64 v28; // r15
  char v29; // al
  unsigned __int8 **v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // r13
  unsigned int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int8 **v50; // rbp
  __int64 v51; // rax
  unsigned __int8 **v52; // rax
  unsigned __int8 **v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  __m128i v68; // xmm1
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  __m128i v73; // rax
  _QWORD *v74; // rbx
  void **v75; // rsi
  __int64 *v76; // rdi
  _QWORD *v77; // rcx
  int v78; // eax
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rdx
  __m128i *v90; // rax
  int v91; // edx
  char *v92; // rdi
  __m128i v93; // xmm5
  __int64 (*v94)(void); // rax
  _WORD *v95; // rdx
  __m128i *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  unsigned __int64 v101; // rdx
  void *v102; // rcx
  unsigned __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  char *v109; // r15
  __int64 v110; // rax
  const __m128i *v111; // rbp
  __int64 v112; // r14
  unsigned __int64 v113; // r13
  __int64 v114; // r12
  __m128i v115; // xmm3
  __int16 v116; // dx
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // eax
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r13
  unsigned __int64 v126; // r12
  __int64 v127; // rax
  __int16 v128; // dx
  __int64 v129; // rax
  unsigned __int8 **v130; // rax
  __int64 v131; // rbx
  __int64 v132; // rdi
  __m128i *v133; // rbp
  __m128i v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rsi
  _QWORD *v137; // rdx
  bool v138; // al
  __int64 v139; // [rsp-10h] [rbp-388h]
  __int64 v140; // [rsp-8h] [rbp-380h]
  unsigned int v141; // [rsp+Ch] [rbp-36Ch]
  unsigned __int64 v142; // [rsp+20h] [rbp-358h]
  __int64 v143; // [rsp+28h] [rbp-350h]
  char v144; // [rsp+28h] [rbp-350h]
  int v145; // [rsp+28h] [rbp-350h]
  unsigned int v146; // [rsp+28h] [rbp-350h]
  _QWORD *v147; // [rsp+28h] [rbp-350h]
  __int64 v148; // [rsp+28h] [rbp-350h]
  __int64 *v149; // [rsp+28h] [rbp-350h]
  unsigned __int8 v150; // [rsp+30h] [rbp-348h]
  __int64 v151; // [rsp+30h] [rbp-348h]
  __int64 v152; // [rsp+30h] [rbp-348h]
  _QWORD *v153; // [rsp+38h] [rbp-340h]
  unsigned __int64 v154; // [rsp+38h] [rbp-340h]
  char *v155; // [rsp+38h] [rbp-340h]
  _DWORD *v156; // [rsp+48h] [rbp-330h]
  int v157; // [rsp+50h] [rbp-328h]
  unsigned __int64 v158; // [rsp+50h] [rbp-328h]
  unsigned __int64 v159; // [rsp+58h] [rbp-320h]
  unsigned int v160; // [rsp+60h] [rbp-318h]
  int v161; // [rsp+64h] [rbp-314h]
  unsigned __int8 v162; // [rsp+64h] [rbp-314h]
  unsigned __int8 v163; // [rsp+64h] [rbp-314h]
  char *v164; // [rsp+78h] [rbp-300h] BYREF
  __int16 v165; // [rsp+80h] [rbp-2F8h] BYREF
  char v166; // [rsp+82h] [rbp-2F6h]
  int v167; // [rsp+84h] [rbp-2F4h]
  __int64 v168; // [rsp+88h] [rbp-2F0h]
  __int64 v169; // [rsp+90h] [rbp-2E8h]
  __m128i v170; // [rsp+A0h] [rbp-2D8h]
  __m128i v171; // [rsp+B0h] [rbp-2C8h] BYREF
  _OWORD v172[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v173; // [rsp+E0h] [rbp-298h]
  __m128i v174[2]; // [rsp+E8h] [rbp-290h] BYREF
  char v175; // [rsp+108h] [rbp-270h]
  _QWORD *v176[8]; // [rsp+110h] [rbp-268h] BYREF
  __m128i v177; // [rsp+150h] [rbp-228h] BYREF
  __m128i v178; // [rsp+160h] [rbp-218h] BYREF
  void *v179; // [rsp+180h] [rbp-1F8h]
  _BYTE v180[64]; // [rsp+190h] [rbp-1E8h] BYREF
  __int16 v181; // [rsp+1D0h] [rbp-1A8h]
  void *v182[2]; // [rsp+1E0h] [rbp-198h] BYREF
  __m128i v183; // [rsp+1F0h] [rbp-188h] BYREF
  int v184; // [rsp+200h] [rbp-178h]
  __m128i v185; // [rsp+270h] [rbp-108h] BYREF
  __int64 v186; // [rsp+280h] [rbp-F8h]
  unsigned int v187; // [rsp+288h] [rbp-F0h] BYREF
  _QWORD *v188; // [rsp+290h] [rbp-E8h]
  __int64 v189; // [rsp+298h] [rbp-E0h]
  void *ptr; // [rsp+2A0h] [rbp-D8h] BYREF
  unsigned int v191; // [rsp+2A8h] [rbp-D0h]
  unsigned int v192; // [rsp+2ACh] [rbp-CCh]
  _BYTE v193[64]; // [rsp+2B0h] [rbp-C8h] BYREF
  __int16 v194; // [rsp+2F0h] [rbp-88h]

  v5 = (const __m128i *)a3;
  v7 = (__int64)a4;
  v8 = a1;
  v142 = a2;
  v141 = a2;
  if ( !*a4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) != 13 || ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) != 0x1E8 )
    {
      v185.m128i_i8[4] &= ~1u;
      v185.m128i_i32[0] = 0;
      sub_C0F890(a3, (__int64)&v185);
      v30 = (unsigned __int8 **)sub_E33C80(a1, (unsigned int)a2, 2404, 0);
      v31 = sub_A73030(*(_QWORD *)(a1 + 16), a5, 1u);
      sub_A53AF0((__int64)v182, &v185, *(_QWORD *)(a1 + 16), v31);
      if ( v30 )
        sub_AEC220(v30, (_BYTE *)v182[0], (signed __int64)v182[1]);
      if ( v182[0] != &v183 )
        operator delete(v182[0]);
      if ( v185.m128i_i32[0] > 1u )
        sub_A4F8E0(v185.m128i_i32);
      return 0;
    }
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 18720LL);
  v165 = v165 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v168 = v10;
  v169 = 0;
  HIBYTE(v165) &= 1u;
  v166 &= 0xF0u;
  v167 = a2;
  v11 = sub_B62360((__int64)&v165);
  HIBYTE(v165) = (v11 << 6) | HIBYTE(v165) & 0x3F;
  v166 = v166 & 0xF8 | (v11 >> 2) & 7;
  v12 = sub_A72040(*(_QWORD **)(a1 + 16), a5);
  v13 = v12;
  if ( !v12 || (unsigned int)*(unsigned __int8 *)(v12 + 16) - 2 > 1 )
  {
    v33 = sub_F63270(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL));
    v38 = v33;
    if ( v33 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v33 + 104) + 96LL), *(_QWORD *)(v33 + 104), v34, v35, v36, v37);
      if ( *(_DWORD *)(*(_QWORD *)(v38 + 128) + 20LL) )
      {
        v52 = (unsigned __int8 **)sub_E33C80(a1, (unsigned int)a2, 2504, 0);
        if ( v52 )
          sub_AE9DF0(v52, v38, 0xAu);
        return 0;
      }
      v39 = sub_B97300(v38);
      v44 = (_QWORD *)v39;
      if ( v39 )
      {
        if ( *(char *)(v39 + 82) >= 0 && ((*(_BYTE *)(v38 + 75) & 1) == 0 || *(_BYTE *)(v38 + 73) >> 5 != 2) )
        {
          if ( *(_BYTE *)(a1 + 914) )
          {
            v15 = 0;
            if ( *(_DWORD *)(a1 + 40) > 1u )
              return v15;
          }
          if ( !*(_DWORD *)(a1 + 44) )
          {
            v15 = 0;
            sub_E33C80(a1, (unsigned int)a2, 2393, 0);
            return v15;
          }
          v45 = *(_DWORD *)(a1 + 40);
          if ( v45 > *(_DWORD *)(sub_E32240(a1) + 132) )
          {
            v50 = (unsigned __int8 **)sub_E33C80(a1, (unsigned int)a2, 2402, 0);
            v51 = sub_E32240(a1);
            if ( v50 )
              sub_AE9DF0(v50, *(unsigned int *)(v51 + 132), 3u);
            return 0;
          }
          v164 = nullptr;
          v54 = sub_B7F750(v44, &v164, v46, v47, v48, v49);
          v15 = sub_C1D660(a1, (unsigned int)a2, (__int64)v44, v164, v54, v55);
          if ( !(_BYTE)v15 )
            return v15;
          sub_C0F9C0(&v185, a1, a2, (__int64)v164, (__int64)v5, 0, 0);
          v56 = *(_QWORD *)(v38 + 104);
          v57 = v56 + 96;
          sub_7052B0((__int64 *)(v56 + 96), v56, v58, v59, v60, v61);
          v63 = *(_QWORD *)(v38 + 128);
          v64 = _mm_loadu_si128(v5);
          v173 = v8;
          v65 = *(unsigned int *)(v8 + 840);
          LODWORD(v63) = *(_DWORD *)(v63 + 16);
          v170 = v64;
          v172[0] = v64;
          v160 = v63;
          v66 = v5[3].m128i_i64[0];
          v174[0] = v64;
          v171.m128i_i64[0] = v66;
          v67 = v5[3].m128i_u32[2];
          *(__m128i *)v182 = v64;
          v171.m128i_i64[1] = v67;
          v68 = _mm_load_si128(&v171);
          v184 = 4;
          v172[1] = v68;
          v174[1] = v68;
          v183 = v68;
          v69 = v139;
          v70 = v140;
          if ( (_DWORD)v65 )
          {
            v145 = v65;
            v151 = *(_QWORD *)(v8 + 824);
            v71 = (_QWORD *)sub_A4F710(v57, v56, v139, v140, v62);
            v176[2] = nullptr;
            v176[0] = v71;
            v176[1] = v72;
            v176[3] = nullptr;
            v73.m128i_i64[0] = sub_A4F720(v57, v56);
            v178 = 0u;
            v177 = v73;
            v156 = (_DWORD *)v8;
            v157 = 1;
            v153 = nullptr;
            v161 = v145 - 1;
            v146 = (v145 - 1) & sub_C2F3C0((unsigned __int64 *)v182, (__int64)&v183);
            while ( 1 )
            {
              v74 = (_QWORD *)(v151 + 40LL * v146);
              if ( sub_A4F650(v182, v74) && v183.m128i_i64[1] == v74[3] )
              {
                v135 = (_QWORD *)v183.m128i_i64[0];
                v136 = v183.m128i_i64[0] + 8 * v183.m128i_i64[1];
                if ( v183.m128i_i64[0] == v136 )
                  goto LABEL_156;
                v137 = (_QWORD *)v74[2];
                if ( *(_QWORD *)v183.m128i_i64[0] == *v137 )
                {
                  while ( 1 )
                  {
                    ++v135;
                    ++v137;
                    if ( (_QWORD *)v136 == v135 )
                      break;
                    if ( *v135 != *v137 )
                      goto LABEL_75;
                  }
LABEL_156:
                  v175 = 0;
                  v15 = 0;
                  sub_E33C80(v156, v141, 2406, 0);
                  goto LABEL_129;
                }
              }
LABEL_75:
              v75 = (void **)v176;
              v76 = (__int64 *)(v151 + 40LL * v146);
              if ( sub_C0FAA0(v74, v176) )
                break;
              v138 = sub_C0FAA0(v74, &v177);
              if ( v153 || !v138 )
                v74 = v153;
              v153 = v74;
              v146 = v161 & (v157 + v146);
              ++v157;
            }
            v77 = (_QWORD *)(v151 + 40LL * v146);
            v8 = (__int64)v156;
            v65 = (unsigned int)v156[210];
            if ( v153 )
              v77 = v153;
            v78 = v156[208];
            v176[0] = v77;
            v69 = (unsigned int)(3 * v65);
            v79 = (__int64)(v156 + 206);
            v80 = v78 + 1;
            v70 = (unsigned int)(4 * v80);
            if ( (unsigned int)v70 < (unsigned int)v69 )
            {
              v81 = (unsigned int)(v65 - (v80 + v156[209]));
              v82 = (unsigned int)v65 >> 3;
              if ( (unsigned int)v81 > (unsigned int)v82 )
                goto LABEL_80;
              v149 = (__int64 *)(v156 + 206);
              sub_C2F750((__int64)(v156 + 206), v65, v82, v81, v79, v65);
              goto LABEL_145;
            }
          }
          else
          {
            v79 = v8 + 824;
            v176[0] = nullptr;
          }
          v149 = (__int64 *)v79;
          sub_C2F750(v79, 2 * v65, v69, v70, v79, v65);
LABEL_145:
          v75 = v182;
          v76 = v149;
          sub_C2F580(v149, (unsigned __int64 *)v182, v176);
          v80 = *(_DWORD *)(v8 + 832) + 1;
LABEL_80:
          *(_DWORD *)(v8 + 832) = v80;
          v83.m128i_i64[0] = sub_A4F710(v76, v75, v82, v81, v79);
          v178 = 0u;
          v177 = v83;
          v147 = v176[0];
          if ( !sub_A4F650(v176[0], &v177) )
            goto LABEL_162;
          v84 = (__int64)v147;
          v87 = v147[3];
          if ( v87 != v178.m128i_i64[1] )
            goto LABEL_162;
          v88 = (_QWORD *)v147[2];
          v84 = (__int64)&v88[v87];
          if ( v88 == (_QWORD *)v84 )
            goto LABEL_87;
          v89 = (_QWORD *)v178.m128i_i64[0];
          if ( *v88 == *(_QWORD *)v178.m128i_i64[0] )
          {
            while ( 1 )
            {
              ++v88;
              ++v89;
              if ( (_QWORD *)v84 == v88 )
                break;
              if ( *v88 != *v89 )
                goto LABEL_162;
            }
          }
          else
          {
LABEL_162:
            --*(_DWORD *)(v8 + 836);
          }
LABEL_87:
          v90 = (__m128i *)v176[0];
          v91 = v184;
          v92 = v164;
          *(__m128i *)v176[0] = _mm_load_si128((const __m128i *)v182);
          v93 = _mm_load_si128(&v183);
          v90[2].m128i_i32[0] = v91;
          v90[1] = v93;
          v175 = 1;
          LODWORD(v176[0]) = 0;
          BYTE4(v176[0]) &= ~1u;
          v172[0] = (unsigned __int64)v176;
          v94 = *(__int64 (**)(void))(*(_QWORD *)v92 + 64LL);
          if ( (char *)v94 == (char *)sub_6EF210 )
            v95 = (_WORD *)sub_B7F750(v92, v182, (__int64)sub_6EF210, v84, v85, v86);
          else
            v95 = (_WORD *)v94();
          if ( (unsigned int)sub_C53060((__int64 *)v172, v8, v95) )
          {
            if ( *(_BYTE *)(v38 + 73) >> 5 != 2 )
            {
              v96 = (__m128i *)v38;
              v152 = sub_EDE580(*(_QWORD *)(v8 + 16), v38);
              v103 = sub_B7E900(v38, v38, v97, v98, v99, v100);
              v182[0] = &v183;
              v182[1] = (void *)0x1000000000LL;
              if ( v103 )
              {
                v105 = 0;
                v106 = *(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v106 )
                {
                  while ( (*(_BYTE *)(v106 + 28) & 0x7Fu) - 49 <= 2 )
                  {
LABEL_133:
                    ++v105;
                    v106 = *(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !v106 )
                      goto LABEL_97;
                  }
                  while ( 1 )
                  {
                    v107 = *(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v106 = v107;
                    if ( !v107 )
                      break;
                    if ( (*(_BYTE *)(v107 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_133;
                  }
                }
LABEL_97:
                v96 = &v183;
                v104 = v105 + 1;
                if ( v105 + 1 > 16 )
                {
                  v154 = v103;
                  v148 = v105 + 1;
                  sub_2237220(v182, &v183, v105 + 1, 8);
                  v103 = v154;
                  v104 = LODWORD(v182[1]) + v148;
                  v96 = (__m128i *)((char *)v182[0] + 8 * LODWORD(v182[1]));
                }
                v96->m128i_i64[0] = v103;
                v101 = *(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v101 )
                {
                  while ( (*(_BYTE *)(v101 + 28) & 0x7Fu) - 49 <= 2 )
                  {
LABEL_131:
                    v96 = (__m128i *)((char *)v96 + 8);
                    v96->m128i_i64[0] = v101;
                    v101 = *(_QWORD *)(v101 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !v101 )
                      goto LABEL_104;
                  }
                  while ( 1 )
                  {
                    v108 = *(_QWORD *)(v101 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v101 = v108;
                    if ( !v108 )
                      break;
                    if ( (*(_BYTE *)(v108 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_131;
                  }
                }
LABEL_104:
                v102 = v182[0];
                LODWORD(v182[1]) = v104;
                v155 = (char *)v182[0];
                if ( v182[0] != (char *)v182[0] + 8 * (unsigned int)v104 )
                {
                  v162 = v15;
                  v159 = v38;
                  v109 = (char *)v182[0] + 8 * (unsigned int)v104;
                  v110 = v7;
                  v111 = v5;
                  v112 = v110;
                  v113 = v142;
                  do
                  {
                    v114 = *((_QWORD *)v109 - 1);
                    if ( (*(_BYTE *)(v114 + 68) & 1) == 0 || *(_QWORD *)(v114 + 40) )
                    {
                      v115 = _mm_loadu_si128(v111);
                      v178.m128i_i64[0] = v111[1].m128i_i64[0];
                      v177 = v115;
                      sub_C133F0((__int64)&v178.m128i_i64[1], (__int64)&v111[1].m128i_i64[1]);
                      v116 = v111[8].m128i_i16[0];
                      LOBYTE(v116) = v116 & 3;
                      v181 = v116 | v181 & 0xFC;
                      if ( !(unsigned __int8)sub_C14E10(v8, (__int64)&v165, (__int64)&v177, v114, v152, v117) )
                        goto LABEL_159;
                      v122 = sub_C1D4D0(v114, (__int64)&v165, v118, v119, v120, v121);
                      v113 = v141 | v113 & 0xFFFFFFFF00000000LL;
                      v96 = (__m128i *)v113;
                      if ( !(unsigned __int8)sub_C530A0(
                                               v8,
                                               v113,
                                               &v177,
                                               *(_QWORD *)(v112 + 8)
                                             + 56LL * (unsigned int)(*(_DWORD *)(v112 + 16) + v122),
                                               *(_QWORD *)(v114 + 48)) )
                        goto LABEL_159;
                      if ( v179 != v180 )
                        free(v179);
                    }
                    v109 -= 8;
                  }
                  while ( v155 != v109 );
                  v123 = v112;
                  v142 = v113;
                  v38 = v159;
                  v5 = v111;
                  v15 = v162;
                  v7 = v123;
                }
              }
              else
              {
                LODWORD(v182[1]) = 0;
              }
              if ( v160 )
              {
                v96 = v174;
                sub_C2FF90(v173 + 824, v174, v101, (__int64)v102, v103, v104)->m128i_i32[0] = 5;
              }
              v158 = sub_A7A590(v38, (__int64)v96, v101, (__int64)v102, v103, v104);
              if ( v158 == v124 )
              {
LABEL_123:
                v177.m128i_i8[4] &= ~1u;
                v177.m128i_i32[0] = 0;
                sub_A4FD20(v7, (__int64)&v177);
                if ( v177.m128i_i32[0] > 1u )
                  sub_A4F8E0(v177.m128i_i32);
              }
              else
              {
                v163 = v15;
                v125 = v124;
                while ( 1 )
                {
                  --v160;
                  v126 = sub_C11A50(*(__int64 **)(v125 - 8));
                  v127 = v5[1].m128i_i64[0];
                  v177 = _mm_loadu_si128(v5);
                  v178.m128i_i64[0] = v127;
                  sub_C133F0((__int64)&v178.m128i_i64[1], (__int64)&v5[1].m128i_i64[1]);
                  v128 = v5[8].m128i_i16[0];
                  LOBYTE(v128) = v128 & 3;
                  v181 = v128 | v181 & 0xFC;
                  v129 = sub_F63270(*(_QWORD *)(v126 & 0xFFFFFFFFFFFFFFF0LL));
                  if ( !(unsigned __int8)sub_C27D80(v8, (__int64)&v165, (__int64)&v177, v38, v129, v152) )
                    break;
                  v142 = v141 | v142 & 0xFFFFFFFF00000000LL;
                  if ( !(unsigned __int8)sub_C530A0(v8, v142, &v177, *(_QWORD *)(v7 + 8) + 56LL * v160, v126) )
                    break;
                  if ( v179 == v180 )
                  {
                    v125 -= 24;
                    if ( v158 == v125 )
                    {
LABEL_122:
                      v15 = v163;
                      goto LABEL_123;
                    }
                  }
                  else
                  {
                    free(v179);
                    v125 -= 24;
                    if ( v158 == v125 )
                      goto LABEL_122;
                  }
                }
LABEL_159:
                if ( v179 != v180 )
                  free(v179);
                v15 = 0;
              }
              if ( v182[0] != &v183 )
                free(v182[0]);
            }
          }
          else
          {
            v15 = 0;
          }
          if ( LODWORD(v176[0]) > 1 )
            sub_A4F8E0((int *)v176);
LABEL_129:
          if ( v175 )
          {
            v131 = v173;
            v132 = v173 + 824;
            v133 = (__m128i *)sub_C2F440((__int64 *)(v173 + 824), (unsigned __int64 *)v174);
            if ( v133 )
            {
              v134.m128i_i64[0] = sub_A4F720(v132, v174);
              v178 = 0u;
              v177 = v134;
              *v133 = v134;
              v133[1] = _mm_load_si128(&v178);
              --*(_DWORD *)(v131 + 832);
              ++*(_DWORD *)(v131 + 836);
            }
          }
          sub_C23C00((__int64)&v185);
          return v15;
        }
      }
      else
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v38 + 104) + 96LL), *(_QWORD *)(v38 + 104), v40, v41, v42, v43);
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 128) + 5LL) & 0x10) == 0 )
        {
          v15 = 0;
          sub_E33C80(a1, (unsigned int)a2, 108, 0);
          return v15;
        }
      }
    }
    else if ( (unsigned int)sub_F65A30(a5) )
    {
      v53 = (unsigned __int8 **)sub_E33C80(a1, (unsigned int)a2, 2495, 0);
      if ( v53 )
        sub_AE9DF0(v53, a5, 8u);
      return 0;
    }
    v185.m128i_i8[4] &= ~1u;
    v185.m128i_i32[0] = 0;
    sub_A4FD20(v7, (__int64)&v185);
    if ( v185.m128i_i32[0] > 1u )
      sub_A4F8E0(v185.m128i_i32);
    return 1;
  }
  v14 = *(_QWORD **)(v12 + 40);
  if ( (*(_BYTE *)(v12 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v14 + 2) <= 0x40u )
      v14 = (_QWORD *)*v14;
    else
      v14 = *(_QWORD **)*v14;
  }
  v143 = *(_QWORD *)(v12 + 32);
  v15 = sub_C19980(a1, v12, a2);
  if ( (_BYTE)v15 )
  {
    v16 = _mm_loadu_si128(v5);
    v186 = v5[1].m128i_i64[0];
    v185 = v16;
    sub_C133F0((__int64)&v187, (__int64)&v5[1].m128i_i64[1]);
    v17 = v5[8].m128i_i16[0];
    LOBYTE(v17) = v17 & 3;
    v194 = v17 | v194 & 0xFC;
    if ( (v187 & 1) == 0 )
    {
      if ( (v187 & 2) != 0
        || (v191 != 1 || (v187 & 4) == 0) && (v187 & 8) != 0 && *((_QWORD **)ptr + (int)((v187 >> 4) - 1)) == v188 )
      {
        v130 = (unsigned __int8 **)sub_E33C90(a1, &v165, 2466, 0);
        if ( v130 )
          sub_C11320(v130, 3);
        LOBYTE(v187) = v187 | 1;
        v191 = 0;
      }
      else
      {
        v18 = v191;
        v19 = v191 + 1LL;
        if ( v19 > v192 )
        {
          sub_2237220(&ptr, v193, v19, 8);
          v18 = v191;
        }
        *((_QWORD *)ptr + v18) = 0;
        v20 = ++v191;
        v21 = *(_QWORD *)(v13 + 32);
        LOBYTE(v187) = v187 | 8;
        v189 = v21;
        v22 = *(_QWORD **)(v13 + 40);
        if ( (*(_BYTE *)(v13 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v22 + 2) <= 0x40u )
            v22 = (_QWORD *)*v22;
          else
            v22 = *(_QWORD **)*v22;
        }
        v188 = v22;
        v187 = v187 & 0xF | (16 * v20);
      }
    }
    v15 = sub_C1A8A0(a1, (unsigned __int64)&v165, (__int64)&v185, v143, v14);
    if ( (_BYTE)v15 )
    {
      v23 = *(unsigned int *)(v7 + 20);
      if ( v14 && *(unsigned int *)(v7 + 16) < (unsigned __int64)v14 )
      {
        sub_C0FCF0(v7, v23 - 1);
        v23 = *(unsigned int *)(v7 + 20);
      }
      if ( !v23 )
      {
LABEL_136:
        BYTE4(v182[0]) &= ~1u;
        LODWORD(v182[0]) = 0;
        sub_A4FD20(v7, (__int64)v182);
        if ( LODWORD(v182[0]) > 1 )
          sub_A4F8E0((int *)v182);
        goto LABEL_61;
      }
      v24 = v143;
      v150 = v15;
      v25 = a2;
      for ( i = v23 - 1; ; --i )
      {
        v27 = *(_QWORD *)(v7 + 8);
        LODWORD(v182[1]) = 64;
        BYTE4(v182[1]) = 0;
        v182[0] = (void *)-1LL;
        v28 = v27 + 56 * i;
        v29 = sub_C1A330(a1, (unsigned __int64)&v165, (__int64)&v185, v24, (__int64)v182);
        if ( LODWORD(v182[1]) > 0x40 && v182[0] )
        {
          v144 = v29;
          operator delete[](v182[0]);
          v29 = v144;
        }
        if ( !v29 )
          break;
        v25 = (unsigned int)a2 | v25 & 0xFFFFFFFF00000000LL;
        if ( !(unsigned __int8)sub_C530A0(a1, v25, &v185, v28, v24) )
          break;
        if ( !i )
        {
          v15 = v150;
          goto LABEL_136;
        }
      }
    }
    v15 = 0;
LABEL_61:
    if ( ptr != v193 )
      free(ptr);
  }
  return v15;
}
