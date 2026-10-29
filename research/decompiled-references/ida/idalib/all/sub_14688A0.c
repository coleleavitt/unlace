void __fastcall sub_14688A0(__int64 a1, __m128 a2, __m128 a3)
{
  __int64 v3; // rsi
  int v4; // eax
  const __m128i *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // r12
  const __m128i *v11; // r14
  bool v12; // r11
  bool v13; // r8
  __int16 v14; // cx
  bool v15; // r10
  unsigned __int64 v16; // rdx
  __m128 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int16 v20; // dx
  __int8 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int16 v25; // cx
  _QWORD *v26; // r9
  bool v27; // cl
  _QWORD *v28; // r8
  _QWORD *v29; // rsi
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  void *v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // r12d
  __int32 v35; // r14d
  __int64 v36; // rsi
  unsigned int v37; // edx
  unsigned int v38; // r12d
  unsigned int v39; // edi
  unsigned int v40; // r12d
  unsigned int v41; // r14d
  unsigned int v42; // eax
  unsigned int v43; // r12d
  bool v44; // di
  unsigned int v45; // eax
  __int64 v46; // rax
  _BYTE *v47; // r12
  __int16 v48; // dx
  __int16 v49; // ax
  unsigned __int64 v50; // rdx
  __m128 *v51; // rcx
  const __m128i *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rdi
  _QWORD *v56; // rsi
  _QWORD *v57; // r12
  __int64 v58; // r12
  __int64 v59; // rdi
  const void *v60; // r15
  unsigned int v61; // eax
  bool v62; // r11
  unsigned int v63; // r9d
  char v64; // al
  unsigned int v65; // eax
  __int32 v66; // r8d
  _WORD *v67; // r15
  char v68; // al
  char v69; // r11
  _QWORD *v70; // rax
  __int64 v71; // r12
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // r9d
  __int64 v75; // r8
  size_t v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdx
  char *v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // r12
  unsigned int *v84; // rdx
  unsigned int *i; // rax
  __int16 v86; // cx
  __int16 v87; // ax
  __int16 v88; // cx
  unsigned int v89; // eax
  unsigned int v90; // eax
  signed __int64 v91; // r14
  __int64 v92; // rcx
  __int64 v93; // r12
  __int64 v94; // r8
  size_t v95; // r9
  bool v96; // r11
  unsigned int *v97; // rcx
  unsigned int *v98; // rdx
  unsigned int *v99; // rax
  char *v100; // rcx
  __int16 v101; // ax
  int v102; // edx
  unsigned int v103; // eax
  char *v104; // rsi
  int v105; // edx
  __int64 v106; // rsi
  __int64 v107; // r12
  unsigned __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rbp
  bool v111; // r12
  __int64 v112; // rbx
  void *v113; // rdi
  void *v114; // rdi
  void *v115; // rdi
  void **v116; // rax
  void **v117; // rbp
  bool v118; // r12
  void **v119; // rbx
  void *v120; // rdi
  bool v121; // r11
  void *v122; // r12
  __int64 v123; // rdx
  int v124; // [rsp+8h] [rbp-D40h]
  char v125; // [rsp+Eh] [rbp-D3Ah]
  bool v126; // [rsp+Fh] [rbp-D39h]
  bool v127; // [rsp+38h] [rbp-D10h]
  bool v128; // [rsp+38h] [rbp-D10h]
  int v129; // [rsp+38h] [rbp-D10h]
  bool v130; // [rsp+38h] [rbp-D10h]
  bool v131; // [rsp+38h] [rbp-D10h]
  int v132; // [rsp+38h] [rbp-D10h]
  void *v133; // [rsp+38h] [rbp-D10h]
  void *v134; // [rsp+38h] [rbp-D10h]
  unsigned int v135; // [rsp+38h] [rbp-D10h]
  unsigned int v136; // [rsp+38h] [rbp-D10h]
  void *v137; // [rsp+38h] [rbp-D10h]
  unsigned int v138; // [rsp+38h] [rbp-D10h]
  unsigned int v139; // [rsp+38h] [rbp-D10h]
  void *v140; // [rsp+38h] [rbp-D10h]
  unsigned int v141; // [rsp+38h] [rbp-D10h]
  char v142; // [rsp+40h] [rbp-D08h]
  bool v143; // [rsp+40h] [rbp-D08h]
  int v144; // [rsp+40h] [rbp-D08h]
  int v145; // [rsp+40h] [rbp-D08h]
  __int64 v146; // [rsp+40h] [rbp-D08h]
  __int64 v147; // [rsp+40h] [rbp-D08h]
  bool v148; // [rsp+48h] [rbp-D00h]
  char v149; // [rsp+48h] [rbp-D00h]
  unsigned int v150; // [rsp+48h] [rbp-D00h]
  bool v151; // [rsp+48h] [rbp-D00h]
  bool v152; // [rsp+48h] [rbp-D00h]
  bool v153; // [rsp+48h] [rbp-D00h]
  __int32 v154; // [rsp+48h] [rbp-D00h]
  unsigned int v155; // [rsp+48h] [rbp-D00h]
  bool v156; // [rsp+48h] [rbp-D00h]
  bool v157; // [rsp+48h] [rbp-D00h]
  bool v158; // [rsp+48h] [rbp-D00h]
  unsigned int v159; // [rsp+48h] [rbp-D00h]
  bool v160; // [rsp+48h] [rbp-D00h]
  bool v161; // [rsp+48h] [rbp-D00h]
  unsigned int v162; // [rsp+48h] [rbp-D00h]
  bool v163; // [rsp+48h] [rbp-D00h]
  bool v164; // [rsp+4Ch] [rbp-CFCh]
  unsigned int v165; // [rsp+4Ch] [rbp-CFCh]
  unsigned int v166; // [rsp+4Ch] [rbp-CFCh]
  unsigned __int64 v167; // [rsp+50h] [rbp-CF8h] BYREF
  unsigned __int64 v168; // [rsp+58h] [rbp-CF0h]
  __int64 v169; // [rsp+60h] [rbp-CE8h]
  void *v170; // [rsp+70h] [rbp-CD8h]
  char v171; // [rsp+80h] [rbp-CC8h] BYREF
  __int16 v172; // [rsp+90h] [rbp-CB8h]
  void *ptr; // [rsp+A0h] [rbp-CA8h] BYREF
  __int64 v174; // [rsp+A8h] [rbp-CA0h]
  _BYTE v175[32]; // [rsp+B0h] [rbp-C98h] BYREF
  __int64 v176; // [rsp+D0h] [rbp-C78h]
  __int64 v177; // [rsp+D8h] [rbp-C70h]
  __int64 v178; // [rsp+E0h] [rbp-C68h]
  int v179; // [rsp+E8h] [rbp-C60h]
  unsigned __int64 v180; // [rsp+F0h] [rbp-C58h]
  char v181; // [rsp+F8h] [rbp-C50h]
  void *v182; // [rsp+100h] [rbp-C48h] BYREF
  __int64 v183; // [rsp+108h] [rbp-C40h]
  _BYTE v184[3128]; // [rsp+110h] [rbp-C38h] BYREF

  v181 &= 0xE0u;
  v182 = v184;
  v183 = 0x8000000000LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 328LL);
  v4 = *(_DWORD *)(a1 + 32);
  ptr = v175;
  v174 = 0x800000000LL;
  v176 = v3;
  v180 = 0xFFFFFFFF00000000LL;
  v177 = 0;
  v178 = 0;
  v179 = 1;
  v124 = v4;
  if ( !v4 )
    return;
  v5 = *(const __m128i **)(a1 + 24);
  v6 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v126 = 0;
  v11 = v5;
  v125 = 0;
  while ( 1 )
  {
    v20 = v11[1].m128i_i16[0];
    v19 = v9 + 1;
    if ( v3 && (unsigned __int16)(v20 - 7) > 0xCu )
    {
      if ( v20 == 1 )
      {
        if ( !(_DWORD)v7 )
          goto LABEL_5;
        goto LABEL_26;
      }
      if ( v11->m128i_i64[1] == v3 )
      {
        v34 = v183;
        v35 = v11->m128i_i32[0];
        if ( v7 + 1 > (unsigned __int64)HIDWORD(v174) )
        {
          sub_2237220(&ptr, v175, v7 + 1, 4);
          v7 = (unsigned int)v174;
        }
        v9 += 2;
        v8 = 1;
        *((_DWORD *)ptr + v7) = 0;
        v180 = __PAIR64__(v34, v35);
        LODWORD(v174) = v174 + 1;
        goto LABEL_16;
      }
    }
    if ( !(_DWORD)v7 )
      goto LABEL_31;
    if ( v20 == 22 )
    {
      v66 = v11->m128i_i32[0];
      if ( v7 + 1 > (unsigned __int64)HIDWORD(v174) )
      {
        v154 = v11->m128i_i32[0];
        sub_2237220(&ptr, v175, v7 + 1, 4);
        v7 = (unsigned int)v174;
        v66 = v154;
      }
      *((_DWORD *)ptr + v7) = v66;
      v5 = *(const __m128i **)(v6 + 24);
      LODWORD(v7) = v174 + 1;
      LODWORD(v174) = v174 + 1;
    }
LABEL_26:
    v21 = &v5->m128i_i8[v10];
    if ( *((_WORD *)v21 + 8) == 23 )
    {
      LODWORD(v174) = v7 - 1;
      if ( (_DWORD)v7 == 1 )
      {
        v64 = v181;
        if ( (v181 & 6) != 0 )
        {
          sub_1467DF0(v6, (__int64 *)&v182, (__int64)&ptr, *(_DWORD *)v21, a2, a3);
        }
        else
        {
          v102 = v183;
          if ( HIDWORD(v180) == (_DWORD)v183 )
          {
            if ( (_DWORD)v183 && *((_WORD *)v182 + 12 * (unsigned int)v183 - 4) == 68 )
            {
              LODWORD(v183) = HIDWORD(v180) - 1;
              goto LABEL_86;
            }
            if ( v124 == (_DWORD)v19 || v5[1].m128i_i16[12 * (unsigned int)v19] != 68 )
              goto LABEL_86;
          }
          else
          {
            if ( (v181 & 8) != 0 )
            {
              v104 = (char *)v182 + 24 * HIDWORD(v180);
              if ( v104 != (char *)v182 + 24 * (unsigned int)v183 )
              {
                memmove((char *)v182 + 24 * HIDWORD(v180) - 24, v104, 24LL * (unsigned int)v183 - 24LL * HIDWORD(v180));
                v102 = v183;
                v64 = v181;
              }
              LODWORD(v183) = v102 - 1;
            }
            if ( (v64 & 0x10) == 0
              || v124 == (_DWORD)v19
              || *(_WORD *)(*(_QWORD *)(v6 + 24) + 24LL * (unsigned int)v19 + 16) != 68 )
            {
              goto LABEL_86;
            }
          }
          v103 = v9 + 2;
          ++v9;
          LODWORD(v19) = v103;
        }
LABEL_86:
        v181 &= 0xE0u;
        v180 = 0xFFFFFFFF00000000LL;
        v65 = v19;
        v19 = v9;
        v9 = v65;
        goto LABEL_16;
      }
    }
    if ( !v125 )
    {
      v125 = 1;
      v126 = sub_13F1050(*(_QWORD *)(v6 + 8), *(_QWORD *)v6, *(_QWORD *)(v6 + 16));
    }
    if ( !v126 )
      goto LABEL_81;
    v20 = v11[1].m128i_i16[0];
LABEL_31:
    if ( ((v20 - 67) & 0xFFFD) == 0 )
      break;
LABEL_5:
    v12 = 0;
    if ( (_DWORD)v183 )
      v12 = *((_WORD *)v182 + 12 * (unsigned int)v183 - 4) == 68;
    v13 = 0;
    if ( v9 )
      v13 = *(_WORD *)(*(_QWORD *)(v6 + 24) + 24LL * (v9 - 1) + 16) == 68;
    if ( v124 == (_DWORD)v19 )
    {
      v15 = 0;
      v148 = 0;
    }
    else
    {
      v14 = *(_WORD *)(*(_QWORD *)(v6 + 24) + 24LL * (unsigned int)v19 + 16);
      v15 = v14 == 68;
      v148 = v14 == 23;
    }
    if ( (unsigned __int16)(v20 - 7) <= 0xCu )
      goto LABEL_13;
    if ( v20 == 1 )
      goto LABEL_13;
    v54 = v11->m128i_i64[1];
    if ( !v54 )
      goto LABEL_13;
    v55 = *(_QWORD **)(*(_QWORD *)v6 + 8LL);
    v56 = &v55[*(unsigned int *)(*(_QWORD *)v6 + 24LL)];
    if ( v55 == v56 )
      goto LABEL_13;
    if ( v54 != *v55 )
    {
      v57 = *(_QWORD **)(*(_QWORD *)v6 + 8LL);
      while ( v56 != ++v57 )
      {
        if ( v54 == *v57 )
        {
          v58 = v57 - v55;
          if ( (_DWORD)v58 == -1 )
            break;
          goto LABEL_70;
        }
      }
LABEL_13:
      v16 = (unsigned int)v183 + 1LL;
      v17 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
      if ( v16 > HIDWORD(v183) )
      {
        v131 = v13;
        v152 = v12;
        if ( v182 > v11 || v17 <= (__m128 *)v11 )
        {
          sub_2237220(&v182, v184, v16, 24);
          v13 = v131;
          v12 = v152;
          v17 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
        }
        else
        {
          v91 = (char *)v11 - (_BYTE *)v182;
          sub_2237220(&v182, v184, v16, 24);
          v12 = v152;
          v13 = v131;
          v11 = (const __m128i *)((char *)v182 + v91);
          v17 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
        }
      }
      a3 = (__m128)_mm_loadu_si128(v11);
      *v17 = a3;
      v17[1].m128_u64[0] = v11[1].m128i_u64[0];
      v18 = (unsigned int)(v183 + 1);
      LODWORD(v183) = v183 + 1;
      if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
      {
        *((_WORD *)v182 + 12 * v18 - 3) |= 2u;
        v19 = v9;
        *(_BYTE *)(v6 + 64) &= ~4u;
        ++v9;
        goto LABEL_16;
      }
      if ( v12 || !v13 )
      {
LABEL_81:
        v19 = v9++;
        goto LABEL_16;
      }
      *((_WORD *)v182 + 12 * v18 - 3) &= ~2u;
      v19 = v9++;
      goto LABEL_16;
    }
    LODWORD(v58) = 0;
LABEL_70:
    v59 = *(_QWORD *)(v6 + 8);
    if ( v13 )
    {
      v164 = v15;
      v142 = v13;
      v127 = v12;
      v60 = (const void *)sub_13F0090(v59, v58);
      v61 = sub_13F0060((__int64)v60);
      v62 = v127;
      v63 = v61;
      if ( v61 )
        goto LABEL_135;
      if ( !v164 )
      {
        if ( !v127 )
        {
          if ( v148 && (_DWORD)v174 == 1 )
            v181 |= 0x10u;
          goto LABEL_77;
        }
        if ( (_DWORD)v174 && HIDWORD(v180) >= (unsigned int)v183 )
        {
          v181 |= 8u;
LABEL_77:
          v8 = *(_BYTE *)(*(_QWORD *)(v6 + 8) + 4LL);
          if ( !v8 )
            goto LABEL_78;
        }
        else
        {
          LODWORD(v183) = v183 - 1;
          v8 = *(_BYTE *)(*(_QWORD *)(v6 + 8) + 4LL);
          if ( !v8 )
          {
LABEL_78:
            v8 = v142;
            v19 = v9++;
            goto LABEL_16;
          }
        }
        sub_14665C0(v6, (__int64 *)&v182, 1, *(_QWORD *)v6, v58, *(_QWORD *)(v6 + 16));
        v19 = v9++;
        goto LABEL_16;
      }
      goto LABEL_128;
    }
    if ( *(_BYTE *)(v59 + 4) )
    {
      v143 = v15;
      v130 = v12;
      v8 = sub_14665C0(v6, (__int64 *)&v182, 0, *(_QWORD *)v6, v58, *(_QWORD *)(v6 + 16));
      if ( v8 )
        goto LABEL_81;
      v59 = *(_QWORD *)(v6 + 8);
      v15 = v143;
      v12 = v130;
    }
    if ( v15 )
    {
      v151 = v12;
      v60 = (const void *)sub_13F0090(v59, v58);
      v90 = sub_13F0060((__int64)v60);
      v62 = v151;
      v63 = v90;
      if ( !v90 )
      {
LABEL_128:
        v9 += 2;
        v8 = 1;
        goto LABEL_16;
      }
LABEL_135:
      v92 = (unsigned int)v183;
      if ( v62 )
      {
        if ( (unsigned int)v183 > 1uLL
          && *((_WORD *)v182 + 12 * (unsigned int)v183 - 16) == 66
          && *(_DWORD *)(*(_QWORD *)v6 + 24LL) - 1 == (_DWORD)v58
          && ((*(_BYTE *)(*(_QWORD *)v6 + 36LL) & 4) != 0 || (*(_BYTE *)(*(_QWORD *)v6 + 36LL) & 8) != 0) )
        {
          v105 = *((_DWORD *)v182 + 6 * (unsigned int)v183 - 6);
          v135 = v63;
          v106 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 48LL);
          v157 = v62;
          LODWORD(v183) = v183 - 1;
          sub_FC70B0((__int64)&v167, v106, v105, 1233);
          v62 = v157;
          v63 = v135;
          if ( (_BYTE)v172 )
          {
            sub_FC7790(v169, (__int64 *)&v167, SHIBYTE(v172));
            v63 = v135;
            v169 = 0;
            v172 = 0;
            v62 = v157;
          }
          if ( v170 != &v171 )
          {
            v136 = v63;
            v158 = v62;
            operator delete(v170);
            v63 = v136;
            v62 = v158;
          }
          v107 = v167;
          if ( v167 )
          {
            v108 = v168;
            if ( v168 )
            {
              if ( v167 < v168 || v167 > v168 + 14848 )
              {
                v109 = *(_QWORD *)(v167 + 528);
                if ( v109 != v109 + ((unsigned __int64)*(unsigned int *)(v167 + 536) << 6) )
                {
                  v159 = v9;
                  v110 = *(_QWORD *)(v167 + 528);
                  v137 = (void *)v167;
                  v111 = v62;
                  v146 = v6;
                  v112 = v109 + ((unsigned __int64)*(unsigned int *)(v167 + 536) << 6);
                  do
                  {
                    while ( 1 )
                    {
                      v112 -= 64;
                      v113 = *(void **)(v112 + 24);
                      if ( v113 == (void *)(v112 + 40) )
                        break;
                      v165 = v63;
                      operator delete(v113);
                      v63 = v165;
                      if ( v110 == v112 )
                        goto LABEL_190;
                    }
                  }
                  while ( v110 != v112 );
LABEL_190:
                  v62 = v111;
                  v9 = v159;
                  v107 = (__int64)v137;
                  v6 = v146;
                }
                v114 = *(void **)(v107 + 528);
                if ( v114 != (void *)(v107 + 544) )
                {
                  v138 = v63;
                  v160 = v62;
                  free(v114);
                  v63 = v138;
                  v62 = v160;
                }
                v115 = *(void **)(v107 + 416);
                if ( v115 != (void *)(v107 + 432) )
                {
                  v139 = v63;
                  v161 = v62;
                  free(v115);
                  v63 = v139;
                  v62 = v161;
                }
                v116 = (void **)(v107 + 384);
                v162 = v9;
                v140 = (void *)v107;
                v117 = (void **)(v107 + 64);
                v118 = v62;
                v147 = v6;
                v119 = v116;
                do
                {
                  while ( 1 )
                  {
                    v120 = *v119;
                    if ( *v119 == v119 + 2 )
                      break;
                    v119 -= 4;
                    v166 = v63;
                    operator delete(v120);
                    v63 = v166;
                    if ( v117 == v119 )
                      goto LABEL_200;
                  }
                  v119 -= 4;
                }
                while ( v117 != v119 );
LABEL_200:
                v121 = v118;
                v122 = v140;
                v9 = v162;
                v141 = v63;
                v6 = v147;
                v163 = v121;
                operator delete(v122, 0x3A0u);
                v63 = v141;
                v62 = v163;
              }
              else
              {
                v123 = *(unsigned int *)(v168 + 14976);
                *(_DWORD *)(v168 + 14976) = v123 + 1;
                *(_QWORD *)(v108 + 8 * v123 + 14848) = v107;
              }
            }
          }
          v92 = (unsigned int)v183;
        }
        else
        {
          v62 = 0;
        }
      }
      v93 = v63;
      v94 = v63;
      v95 = 24LL * v63;
      if ( v94 + v92 > (unsigned __int64)HIDWORD(v183) )
      {
        v145 = v94;
        v134 = (void *)v95;
        v156 = v62;
        sub_2237220(&v182, v184, v94 + v92, 24);
        v62 = v156;
        v95 = (size_t)v134;
        v92 = (unsigned int)v183;
        LODWORD(v94) = v145;
      }
      v132 = v94;
      v153 = v62;
      memcpy((char *)v182 + 24 * v92, v60, v95);
      v96 = v153;
      LODWORD(v183) = v132 + v183;
      v97 = (unsigned int *)((char *)v182 + 24 * (unsigned int)v183);
      v98 = (unsigned int *)((char *)v182 + 24 * ((unsigned int)v183 - v93));
      if ( v98 != v97 )
      {
        v99 = (unsigned int *)((char *)v182 + 24 * ((unsigned int)v183 - v93));
        do
        {
          if ( *((_WORD *)v99 + 8) == 68 )
            *((_WORD *)v99 + 8) = 0;
          v99 += 6;
        }
        while ( v99 != v97 );
      }
      if ( *(_DWORD *)(v6 + 40) )
      {
        sub_1468220(v6, v11->m128i_i32[0], v98, (unsigned __int64)v97);
        v96 = v153;
      }
      if ( !v96 )
      {
        v100 = (char *)v182 + 24 * ((unsigned int)v183 - v93);
        v101 = *((_WORD *)v100 + 9) & 0xFFFC | 2;
        if ( (*(_BYTE *)(v6 + 64) & 4) == 0 )
          v101 = *((_WORD *)v100 + 9) & 0xFFFC;
        *((_WORD *)v100 + 9) = v101;
      }
LABEL_121:
      v89 = v19;
      *(_BYTE *)(v6 + 64) &= ~4u;
      v19 = v9;
      v8 = 1;
      v9 = v89;
      goto LABEL_16;
    }
    v128 = v12;
    v67 = (_WORD *)sub_13F0090(v59, v58);
    v68 = sub_13F00C0(*(_QWORD *)(v6 + 8), (__int64)v67);
    v69 = v128;
    if ( v68 )
    {
      v70 = sub_13F0E90(*(_QWORD *)(v6 + 8), v58, *(_QWORD *)(v6 + 16));
      v69 = v128;
      v67 = (_WORD *)*v70;
    }
    if ( v67[8] != 1 )
    {
      v71 = (unsigned int)v183;
      v72 = sub_13F0060((__int64)v67);
      v73 = (unsigned int)v183;
      v74 = v72;
      v75 = 3LL * v72;
      v76 = 24LL * v72;
      v77 = 0xAAAAAAAAAAAAAAABLL * v75;
      v78 = v77 + (unsigned int)v183;
      if ( v78 > HIDWORD(v183) )
      {
        v144 = v77;
        v133 = (void *)v76;
        v155 = v74;
        sub_2237220(&v182, v184, v78, 24);
        LODWORD(v77) = v144;
        v76 = (size_t)v133;
        v73 = (unsigned int)v183;
        v74 = v155;
      }
      v79 = (char *)v182;
      if ( v76 )
      {
        v129 = v77;
        v150 = v74;
        memcpy((char *)v182 + 24 * v73, v67, v76);
        LODWORD(v77) = v129;
        v74 = v150;
        v79 = (char *)v182;
        LODWORD(v73) = v183;
      }
      LODWORD(v183) = v77 + v73;
      v80 = 24LL * (unsigned int)(v77 + v73);
      if ( (**(_BYTE **)(*(_QWORD *)(v6 + 16) + 56LL) & 0x20) != 0 && v74 == 1 )
      {
        v81 = (__int64)&v79[v80 - 24];
        if ( *(_WORD *)(v81 + 16) == 66 )
          *(_WORD *)(v81 + 18) |= 0x80u;
      }
      v82 = (unsigned __int64)&v79[v80];
      v83 = 24 * v71;
      v84 = (unsigned int *)&v79[v83];
      for ( i = v84; i != (unsigned int *)v82; i += 6 )
      {
        if ( *((_WORD *)i + 8) == 68 )
          *((_WORD *)i + 8) = 0;
      }
      if ( *(_DWORD *)(v6 + 40) )
      {
        sub_1468220(v6, v11->m128i_i32[0], v84, v82);
        v84 = (unsigned int *)((char *)v182 + v83);
      }
      v86 = *((_WORD *)v84 + 9);
      v87 = v86 & 0xFFFD;
      v88 = v86 | 2;
      if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
        v87 = v88;
      *((_WORD *)v84 + 9) = v87 & 0xFFFE;
      goto LABEL_121;
    }
    if ( v69 )
    {
      v181 |= 8u;
      v19 = v9;
      v8 = v69;
      ++v9;
    }
    else if ( v148 )
    {
      v8 = v148;
      v19 = v9;
      if ( (_DWORD)v174 == 1 )
        v181 |= 0x10u;
      ++v9;
    }
    else
    {
      v8 = 1;
      v19 = v9++;
    }
LABEL_16:
    if ( v124 == v9 )
      goto LABEL_41;
LABEL_17:
    v5 = *(const __m128i **)(v6 + 24);
    v10 = 24LL * v9;
    v11 = (const __m128i *)((char *)v5 + v10);
    if ( v9 && v5[1].m128i_i16[12 * v19] != 68 && (v11[1].m128i_i8[2] & 2) != 0 )
      *(_BYTE *)(v6 + 64) |= 4u;
    v3 = v176;
    v7 = (unsigned int)v174;
  }
  v22 = *(_QWORD *)v6;
  v23 = 0;
  v24 = *(_QWORD *)(v6 + 24) + 24LL * (unsigned int)v19;
  v25 = *(_WORD *)(v24 + 16);
  if ( (unsigned __int16)(v25 - 7) > 0xCu && v25 != 1 )
    v23 = *(_QWORD *)(v24 + 8);
  v26 = *(_QWORD **)(v22 + 8);
  v27 = v20 == 69;
  v28 = &v26[*(unsigned int *)(v22 + 24)];
  if ( v28 == v26 )
    goto LABEL_40;
  if ( v23 == *v26 )
  {
    LODWORD(v36) = 0;
LABEL_53:
    v37 = *(_DWORD *)(v6 + 56) & 0x7FFFFFFF;
    v38 = v11->m128i_i32[0] & 0x7FFFFFFF;
    v39 = v37 + *(_DWORD *)(v6 + 60);
    if ( v38 < v37 || v38 >= v39 )
      v40 = 0;
    else
      v40 = v38 - v37;
    v41 = *(_DWORD *)(v6 + 48);
    v42 = *(_DWORD *)v24 & 0x7FFFFFFF;
    v43 = v41 + v40;
    if ( v42 >= v37 )
    {
      v44 = v42 < v39;
      v45 = v41 - v37 + v42;
      if ( v44 )
        v41 = v45;
    }
    v149 = v27;
    v46 = sub_13F0090(*(_QWORD *)(v6 + 8), v36);
    sub_13F0100(
      (__int64)&v167,
      v46,
      *(_QWORD *)(v6 + 16),
      v149,
      v43,
      v41,
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64);
    v47 = v182;
    LOBYTE(v48) = BYTE2(v169);
    v49 = WORD1(v169) | 0x102;
    if ( (*(_BYTE *)(v6 + 64) & 4) == 0 )
    {
      HIBYTE(v48) = BYTE3(v169) | 1;
      v49 = v48;
    }
    WORD1(v169) = v49;
    v50 = (unsigned int)v183 + 1LL;
    v51 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
    v52 = (const __m128i *)&v167;
    if ( v50 > HIDWORD(v183) )
    {
      if ( v182 > &v167 || v51 <= (__m128 *)&v167 )
      {
        sub_2237220(&v182, v184, v50, 24);
        v51 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
        v52 = (const __m128i *)&v167;
      }
      else
      {
        sub_2237220(&v182, v184, v50, 24);
        v52 = (const __m128i *)((char *)v182 + (char *)&v167 - v47);
        v51 = (__m128 *)((char *)v182 + 24 * (unsigned int)v183);
      }
    }
    a2 = (__m128)_mm_loadu_si128(v52);
    v9 += 2;
    v8 = 1;
    *v51 = a2;
    v53 = v52[1].m128i_i64[0];
    LODWORD(v183) = v183 + 1;
    v51[1].m128_u64[0] = v53;
    *(_BYTE *)(v6 + 64) &= ~4u;
    goto LABEL_16;
  }
  v29 = *(_QWORD **)(v22 + 8);
  while ( ++v29 != v28 )
  {
    if ( *v29 == v23 )
    {
      v36 = v29 - v26;
      if ( (_DWORD)v36 == -1 )
        break;
      goto LABEL_53;
    }
  }
LABEL_40:
  v19 = v9;
  v181 = ((*(_BYTE *)(v6 + 64) & 4) != 0) | (4 * v27) | (2 * (v20 != 69)) | v181 & 0xF8;
  if ( v124 != ++v9 )
    goto LABEL_17;
LABEL_41:
  if ( v8 )
  {
    v30 = (unsigned int)v183;
    v31 = *(_QWORD *)(v6 + 16);
    v32 = v182;
    *(_DWORD *)(v6 + 32) = v183;
    v33 = sub_1445540(v31, v6, v32, v30);
    *(_BYTE *)(v6 + 64) &= ~8u;
    *(_QWORD *)(v6 + 24) = v33;
  }
  if ( ptr != v175 )
    free(ptr);
  if ( v182 != v184 )
    free(v182);
}
