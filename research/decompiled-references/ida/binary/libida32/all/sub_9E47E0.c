__int64 __fastcall sub_9E47E0(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  bool v12; // cf
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rdi
  _DWORD *v20; // rdi
  unsigned int v21; // edx
  int v22; // eax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 i; // r12
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 *v33; // rsi
  __int64 v34; // r9
  _QWORD *v35; // r13
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE *v43; // rdi
  char *v44; // r11
  unsigned __int64 v45; // rax
  __int64 *v46; // rbp
  void *v47; // r10
  unsigned __int64 v48; // rax
  unsigned int v49; // esi
  __int64 *v50; // rdx
  unsigned int v51; // r15d
  __int64 v52; // r12
  __int64 *v53; // r14
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 *v58; // r13
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v61; // r15
  int v62; // esi
  int v63; // esi
  __int64 v64; // r8
  unsigned int v65; // ecx
  _QWORD *v66; // rdx
  __int64 v67; // rdi
  int v68; // esi
  __int64 v69; // rdi
  __int64 v70; // rsi
  int v71; // eax
  int v72; // edi
  int v73; // esi
  int v74; // r9d
  __int64 v75; // rsi
  __int64 v76; // r10
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _QWORD *m; // rdx
  __int64 *v84; // rax
  __int64 v85; // r15
  int v86; // edx
  int v87; // r8d
  __int64 v88; // rdi
  unsigned int v89; // ecx
  _QWORD *v90; // rdx
  __int64 v91; // rsi
  int v92; // esi
  int v93; // edi
  unsigned int v94; // r13d
  __int64 v95; // rax
  __int64 v96; // rdx
  size_t v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  char v101; // dl
  __int64 v102; // r12
  char *v103; // rsi
  __int64 v104; // rdi
  char *v105; // rcx
  char *v106; // rax
  char *v107; // rsi
  char *v108; // rax
  char v109; // dl
  __int64 v110; // r12
  char *v111; // rsi
  __int64 v112; // rdi
  char *v113; // rcx
  char *v114; // rax
  char *v115; // rsi
  char *v116; // rax
  unsigned __int64 v117; // r12
  __int64 v118; // rax
  _QWORD *v119; // r13
  __int64 v120; // rcx
  _QWORD *v121; // rcx
  _QWORD *v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // rcx
  _QWORD *v125; // rdx
  char v126; // dl
  __int64 v127; // r13
  unsigned __int64 v128; // rdx
  _WORD *v129; // rax
  __int64 v130; // rdx
  unsigned __int64 v131; // rdx
  __int64 v132; // rax
  unsigned __int64 v133; // rdx
  char *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r13
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  unsigned __int64 v142; // r15
  _QWORD *v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 *v146; // r9
  __int64 v147; // rax
  __int64 v148; // rax
  int v149; // r13d
  _QWORD *v150; // rax
  __int64 *v151; // rdi
  __int64 v152; // rcx
  _DWORD *v153; // rax
  _DWORD *v154; // rdx
  __int64 v155; // rax
  int v156; // r14d
  __int64 v157; // [rsp+0h] [rbp-248h]
  __int64 v158; // [rsp+0h] [rbp-248h]
  unsigned __int64 v159; // [rsp+0h] [rbp-248h]
  __int64 v160; // [rsp+10h] [rbp-238h]
  char *v161; // [rsp+10h] [rbp-238h]
  char *v162; // [rsp+10h] [rbp-238h]
  char *v163; // [rsp+10h] [rbp-238h]
  __int64 v164; // [rsp+10h] [rbp-238h]
  _QWORD *v165; // [rsp+10h] [rbp-238h]
  void *src; // [rsp+18h] [rbp-230h]
  void *srce; // [rsp+18h] [rbp-230h]
  void *srca; // [rsp+18h] [rbp-230h]
  char *srcf; // [rsp+18h] [rbp-230h]
  void *srcb; // [rsp+18h] [rbp-230h]
  int srcc; // [rsp+18h] [rbp-230h]
  _QWORD *srcd; // [rsp+18h] [rbp-230h]
  void *v173; // [rsp+20h] [rbp-228h]
  size_t v174; // [rsp+20h] [rbp-228h]
  int n; // [rsp+20h] [rbp-228h]
  __int64 v176; // [rsp+28h] [rbp-220h]
  __int64 v177; // [rsp+28h] [rbp-220h]
  __int64 v178; // [rsp+30h] [rbp-218h]
  _QWORD v179[4]; // [rsp+40h] [rbp-208h] BYREF
  __int16 v180; // [rsp+60h] [rbp-1E8h]
  _QWORD *v181[4]; // [rsp+70h] [rbp-1D8h] BYREF
  __int16 v182; // [rsp+90h] [rbp-1B8h]
  _QWORD *v183[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int16 v184; // [rsp+C0h] [rbp-188h]
  _QWORD *v185; // [rsp+D0h] [rbp-178h] BYREF
  char v186; // [rsp+D8h] [rbp-170h]
  __int16 v187; // [rsp+F0h] [rbp-158h]
  void *v188; // [rsp+100h] [rbp-148h] BYREF
  __int64 v189; // [rsp+108h] [rbp-140h]
  int v190; // [rsp+110h] [rbp-138h]
  char v191; // [rsp+114h] [rbp-134h]
  char v192; // [rsp+118h] [rbp-130h] BYREF
  void *ptr; // [rsp+138h] [rbp-110h] BYREF
  __int64 v194; // [rsp+140h] [rbp-108h]
  _BYTE v195[40]; // [rsp+148h] [rbp-100h] BYREF
  void *v196; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h]
  _BYTE v198[192]; // [rsp+188h] [rbp-C0h] BYREF

  v6 = a1 + 2;
  v7 = (__int64)a1;
  v9 = *(_QWORD *)(a2 + 40);
  a1[1] = 0x200000000LL;
  *a1 = a1 + 2;
  if ( *(_QWORD *)(a2 + 32) | v9 )
  {
    v10 = a2 + 32;
    v11 = v9 == 0 ? 8 : 16;
    v12 = v9 == 0;
    a1[2] = *(_QWORD *)(a2 + 32);
    *(_QWORD *)((char *)v6 + v11 - 8) = *(_QWORD *)(a2 + v11 + 24);
    v13 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v10 - ((_QWORD)v6 - v13);
    v15 = ((_DWORD)v6 - v13 + v11) & 0xFFFFFFF8;
    if ( v15 >= 8 )
    {
      v16 = v15 & 0xFFFFFFF8;
      v17 = 0;
      do
      {
        v18 = v17;
        v17 += 8;
        *(_QWORD *)(v13 + v18) = *(_QWORD *)(v14 + v18);
      }
      while ( v17 < v16 );
    }
    *(_DWORD *)(v7 + 8) = 2 - v12;
    return v7;
  }
  if ( *(_BYTE *)(a2 + 8) && a3 )
  {
    v20 = *(_DWORD **)a2;
    if ( a3 < 0 )
    {
      v71 = sub_FFD560(v20, (unsigned int)a3);
      v20 = *(_DWORD **)a2;
      a3 = v71;
    }
    v21 = a3 & 0x7FFFFFFF;
    if ( v21 < v20[119] || v21 >= v20[120] )
      v22 = sub_FF9850(v20);
    else
      v22 = v20[118];
    if ( v22 )
    {
      v23 = *(_QWORD **)a2;
      LOBYTE(v196) = 0;
      if ( (unsigned int)(v22 + 1) > 1 )
      {
        if ( v22 >= 0 )
        {
          v24 = v23[23] + 24LL * (unsigned int)v22;
          goto LABEL_18;
        }
        v117 = (unsigned int)(-2 - v22);
        v118 = *(_QWORD *)(v23[40] + 8LL * ((unsigned int)(-2 - v22) >> 6));
        if ( _bittest64(&v118, v117) )
        {
          v119 = (_QWORD *)(v23[34] + 8 * ((unsigned __int64)(int)v117 >> 5));
          if ( *v119 )
          {
            v24 = *v119 + 24 * (v117 & 0x1F);
LABEL_18:
            if ( !v24 )
              return v7;
            if ( *(char *)(v24 + 3) < 0 )
              return v7;
            v25 = *(_QWORD *)((*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
            if ( !v25 )
              return v7;
            i = *(_QWORD *)(v25 + 16);
            v27 = *(_DWORD **)a2;
            v189 = 4;
            v28 = *((_QWORD *)v27 + 2);
            v191 = 1;
            v190 = 0;
            v160 = v28;
            v188 = &v192;
            ptr = v195;
            v194 = 0x400000000LL;
            v157 = a2 + 48;
            while ( 1 )
            {
              v29 = *(unsigned int *)(a2 + 64);
              v30 = *(_QWORD *)(i + 8);
              v31 = *(_QWORD *)(a2 + 48);
              if ( (_DWORD)v29 )
              {
                v32 = (v29 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
                v33 = (__int64 *)(v31 + 16LL * v32);
                v34 = *v33;
                if ( v30 == *v33 )
                  goto LABEL_24;
                v73 = 1;
                if ( v34 != -4096 )
                  break;
              }
LABEL_69:
              sub_9E2C50(
                (__m128 *)&v196,
                (_QWORD *)(v31 + 16LL * (unsigned int)v29),
                (_QWORD *)(v31 + 16LL * (unsigned int)v29),
                v157,
                1);
              v35 = v196;
LABEL_25:
              v36 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL * *(unsigned int *)(a2 + 64));
              sub_9E2C50((__m128 *)&v196, v36, v36, v157, 1);
              if ( v196 != v35 )
              {
                v39 = v35[1];
                v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v39 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  goto LABEL_129;
                if ( (v39 & 4) != 0 )
                {
                  v41 = *(unsigned int *)(v7 + 8);
                  v37 = *(unsigned int *)(v7 + 12);
                  if ( v41 + 1 > v37 )
                  {
                    v159 = v35[1] & 0xFFFFFFFFFFFFFFF8LL;
                    sub_22134E0(v7, v6, v41 + 1, 8);
                    v41 = *(unsigned int *)(v7 + 8);
                    v40 = v159;
                  }
                  *(_QWORD *)(*(_QWORD *)v7 + 8 * v41) = v40;
                  v42 = (unsigned int)v194;
                  ++*(_DWORD *)(v7 + 8);
                  goto LABEL_31;
                }
                v109 = v191;
                v110 = *(_QWORD *)(i + 8);
                if ( v191 )
                {
                  v111 = (char *)v188;
                  v40 = HIDWORD(v189);
                  v112 = 8LL * HIDWORD(v189);
                  v113 = (char *)v188 + v112;
                  if ( v188 != (char *)v188 + v112 )
                  {
                    v114 = (char *)v188;
                    if ( v110 == *(_QWORD *)v188 )
                    {
LABEL_161:
                      v109 = 0;
LABEL_120:
                      v37 = HIDWORD(v189);
                      v115 = &v111[8 * HIDWORD(v189)];
                      goto LABEL_121;
                    }
                    while ( 1 )
                    {
                      v114 += 8;
                      if ( v113 == v114 )
                        break;
                      if ( v110 == *(_QWORD *)v114 )
                        goto LABEL_161;
                    }
                  }
                  if ( HIDWORD(v189) < (unsigned int)v189 )
                  {
                    v40 = (unsigned int)++HIDWORD(v189);
                    *(_QWORD *)v113 = v110;
                    v111 = (char *)v188;
                    v114 = (char *)v188 + v112;
                    goto LABEL_120;
                  }
                }
                v114 = (char *)sub_2212A20(&v188, v110);
                v111 = (char *)v188;
                if ( v191 )
                  goto LABEL_120;
                v37 = (unsigned int)v189;
                v115 = (char *)v188 + 8 * (unsigned int)v189;
LABEL_121:
                if ( v115 != v114 && *(_QWORD *)v114 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v116 = v114 + 8;
                  do
                  {
                    v37 = (unsigned __int64)v116;
                    if ( v115 == v116 )
                      break;
                    v116 += 8;
                  }
                  while ( *(_QWORD *)v37 >= 0xFFFFFFFFFFFFFFFELL );
                }
                if ( v109 )
                {
                  v132 = (unsigned int)v194;
                  v37 = HIDWORD(v194);
                  v133 = (unsigned int)v194 + 1LL;
                  if ( v133 > HIDWORD(v194) )
                  {
                    sub_22134E0(&ptr, v195, v133, 8);
                    v132 = (unsigned int)v194;
                  }
                  *((_QWORD *)ptr + v132) = v110;
                  LODWORD(v194) = v194 + 1;
                }
                i = v35[1] & 0xFFFFFFFFFFFFFFF8LL;
                goto LABEL_128;
              }
              srcb = (void *)(i + 32);
              v174 = *(_QWORD *)i;
              v95 = sub_2266E50(i + 32, *(_QWORD *)i, 0);
              if ( v96 != 10 || *(_QWORD *)v95 != 0x6F77656D6172662ELL || *(_WORD *)(v95 + 8) != 27506 )
              {
                v97 = *(_QWORD *)i;
                v196 = v198;
                si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
                if ( v97 > 0x80 )
                {
                  sub_22130D0(&v196, v198, v97, 1);
                  v134 = (char *)v196 + si128.m128i_i64[0];
                }
                else
                {
                  if ( !v97 )
                  {
LABEL_91:
                    si128.m128i_i64[0] = v97;
                    v187 = 257;
                    v179[0] = "APINotes.";
                    v179[2] = "apinotes";
                    v184 = 257;
                    v182 = 257;
                    v180 = 771;
                    sub_2266670(&v196, v179, v181, v183, &v185);
                    sub_FB5F30(&v185, v160, v196, si128.m128i_i64[0], 0, 1, 1);
                    if ( (v186 & 1) != 0 )
                    {
                      v181[0] = v185;
                      v185 = nullptr;
                      sub_9E1A20(v183, v181);
                      if ( v181[0] )
                        (*(void (__fastcall **)(_QWORD *))(*v181[0] + 8LL))(v181[0]);
                      sub_9E1050((__int64 *)&v185);
                    }
                    else
                    {
                      v176 = (__int64)v185;
                      sub_9E1050((__int64 *)&v185);
                      if ( v176 && !(unsigned __int8)sub_9E3760(a2, *(_QWORD *)(i + 8), v176) )
                      {
                        v185 = *(_QWORD **)(i + 8);
                        v155 = *sub_9E10C0(v157, (__int64 *)&v185, v98, v99, v100, (__int64 *)v38);
                        if ( v155 && (v155 & 4) != 0 && (v155 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                          sub_9E1070(v7, v155 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( v196 != v198 )
                          free(v196);
                        goto LABEL_129;
                      }
                    }
                    if ( v196 != v198 )
                      free(v196);
                    goto LABEL_96;
                  }
                  v134 = v198;
                }
                memcpy(v134, srcb, v97);
                v97 += si128.m128i_i64[0];
                goto LABEL_91;
              }
              v135 = sub_2266D60(srcb, v174, 0);
              v137 = v136;
              v178 = v135;
              v177 = sub_9E43B0(a2, srcb, v174, v135, v136, 1);
              v138 = sub_9E43B0(a2, srcb, v174, v178, v137, 0);
              if ( v177 )
              {
                v142 = v138;
                v196 = *(void **)(i + 8);
                *sub_9E10C0(v157, (__int64 *)&v196, v139, v140, v141, (__int64 *)v38) = 0;
                v147 = (unsigned int)v194;
                if ( !(_DWORD)v194 )
                  goto LABEL_203;
                v143 = ptr;
                if ( *((_QWORD *)ptr + (unsigned int)v194 - 1) == *(_QWORD *)(v177 + 8) )
                {
                  sub_9E16F0((__int64)&v188);
                  i = v177;
                  goto LABEL_203;
                }
                if ( !v142 )
                {
LABEL_203:
                  v196 = *(void **)(i + 8);
                  v148 = *sub_9E10C0(v157, (__int64 *)&v196, (__int64)v143, v144, v145, v146);
                  if ( v148 && (v148 & 4) != 0 && (v148 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    sub_9E1070(v7, v148 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_129:
                  v42 = (unsigned int)v194;
                  goto LABEL_31;
                }
LABEL_227:
                if ( v143[v147 - 1] == *(_QWORD *)(v142 + 8) )
                {
                  i = v142;
                  sub_9E16F0((__int64)&v188);
                }
                goto LABEL_203;
              }
              if ( v138 )
              {
                v142 = v138;
                v196 = *(void **)(i + 8);
                *sub_9E10C0(v157, (__int64 *)&v196, v139, v140, v141, (__int64 *)v38) = 0;
                v147 = (unsigned int)v194;
                if ( !(_DWORD)v194 )
                  goto LABEL_203;
                v143 = ptr;
                goto LABEL_227;
              }
LABEL_96:
              v101 = v191;
              v102 = *(_QWORD *)(i + 8);
              if ( v191 )
              {
                v103 = (char *)v188;
                v40 = HIDWORD(v189);
                v104 = 8LL * HIDWORD(v189);
                v105 = (char *)v188 + v104;
                if ( v188 != (char *)v188 + v104 )
                {
                  v106 = (char *)v188;
                  if ( v102 == *(_QWORD *)v188 )
                  {
LABEL_157:
                    v101 = 0;
                    goto LABEL_104;
                  }
                  while ( 1 )
                  {
                    v106 += 8;
                    if ( v105 == v106 )
                      break;
                    if ( v102 == *(_QWORD *)v106 )
                      goto LABEL_157;
                  }
                }
                if ( HIDWORD(v189) < (unsigned int)v189 )
                {
                  v40 = (unsigned int)++HIDWORD(v189);
                  *(_QWORD *)v105 = v102;
                  v103 = (char *)v188;
                  v106 = (char *)v188 + v104;
LABEL_104:
                  v37 = HIDWORD(v189);
                  v107 = &v103[8 * HIDWORD(v189)];
                  goto LABEL_105;
                }
              }
              v106 = (char *)sub_2212A20(&v188, v102);
              v103 = (char *)v188;
              if ( v191 )
                goto LABEL_104;
              v37 = (unsigned int)v189;
              v107 = (char *)v188 + 8 * (unsigned int)v189;
LABEL_105:
              if ( v107 != v106 && *(_QWORD *)v106 >= 0xFFFFFFFFFFFFFFFELL )
              {
                v108 = v106 + 8;
                do
                {
                  v37 = (unsigned __int64)v108;
                  if ( v107 == v108 )
                    break;
                  v108 += 8;
                }
                while ( *(_QWORD *)v37 >= 0xFFFFFFFFFFFFFFFELL );
              }
              v42 = (unsigned int)v194;
              if ( !v101 )
              {
                i = 0;
                goto LABEL_31;
              }
              if ( (unsigned __int64)(unsigned int)v194 + 1 > HIDWORD(v194) )
              {
                sub_22134E0(&ptr, v195, (unsigned int)v194 + 1LL, 8);
                v42 = (unsigned int)v194;
              }
              *((_QWORD *)ptr + v42) = v102;
              LODWORD(v194) = v194 + 1;
              v127 = sub_2266770(srcb, v174, 0);
              for ( i = v128; ; i = v131 )
              {
                v129 = (_WORD *)sub_2266D60(v127, i, 0);
                if ( v130 != 2 || *v129 != 11822 )
                  break;
                v127 = sub_2266770(v127, i, 0);
              }
              if ( !i )
                goto LABEL_129;
              sub_FB5700(&v196, v160, v127, i, 1);
              if ( (si128.m128i_i8[0] & 1) != 0 )
              {
                v150 = v196;
                v196 = nullptr;
                v183[0] = v150;
                sub_9E1A20(&v185, v183);
                if ( v183[0] )
                  (*(void (__fastcall **)(_QWORD *))(*v183[0] + 8LL))(v183[0]);
                i = 0;
                sub_9E1030((__int64 *)&v196);
                v42 = (unsigned int)v194;
LABEL_31:
                v43 = ptr;
                v44 = (char *)ptr + 8 * v42;
                if ( v44 == ptr )
                  goto LABEL_58;
                v45 = 0;
                v158 = v7;
                v46 = (__int64 *)ptr;
                if ( i )
                  v45 = i & 0xFFFFFFFFFFFFFFFBLL;
                v47 = (void *)v45;
                while ( 2 )
                {
                  v51 = *(_DWORD *)(a2 + 64);
                  v52 = *v46;
                  v53 = *(__int64 **)(a2 + 48);
                  if ( !v51 )
                  {
LABEL_38:
                    src = v47;
                    v161 = v44;
                    v54 = ((((((((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                             | (2 * v51 - 1)
                             | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 4)
                           | (((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                           | (2 * v51 - 1)
                           | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 8)
                         | (((((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                           | (2 * v51 - 1)
                           | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 4)
                         | (((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                         | (2 * v51 - 1)
                         | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 16;
                    v55 = (v54
                         | (((((((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                             | (2 * v51 - 1)
                             | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 4)
                           | (((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                           | (2 * v51 - 1)
                           | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 8)
                         | (((((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                           | (2 * v51 - 1)
                           | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 4)
                         | (((2 * v51 - 1) | ((unsigned __int64)(2 * v51 - 1) >> 1)) >> 2)
                         | (2 * v51 - 1)
                         | ((unsigned __int64)(2 * v51 - 1) >> 1))
                        + 1;
                    if ( (unsigned int)v55 < 0x40 )
                      LODWORD(v55) = 64;
                    *(_DWORD *)(a2 + 64) = v55;
                    v56 = (_QWORD *)sub_220C370(16LL * (unsigned int)v55, 8, v54, v37, v40, v38);
                    v44 = v161;
                    v47 = src;
                    *(_QWORD *)(a2 + 48) = v56;
                    if ( v53 )
                    {
                      v57 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v58 = &v53[2 * v51];
                      for ( j = &v56[2 * v57]; j != v56; v56 += 2 )
                        *v56 = -4096;
                      for ( k = v53; v58 != k; k += 2 )
                      {
                        v61 = *k;
                        if ( *k != -8192 && v61 != -4096 )
                        {
                          v62 = *(_DWORD *)(a2 + 64);
                          if ( !v62 )
                          {
                            *(_QWORD *)&dword_0 = *k;
                            BUG();
                          }
                          v63 = v62 - 1;
                          v64 = *(_QWORD *)(a2 + 48);
                          v65 = v63 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
                          v66 = (_QWORD *)(v64 + 16LL * v65);
                          v67 = *v66;
                          if ( v61 != *v66 && v67 != -4096 )
                          {
                            v165 = nullptr;
                            for ( srcc = 1; ; ++srcc )
                            {
                              if ( v67 == -8192 )
                              {
                                if ( v165 )
                                  v66 = v165;
                                v165 = v66;
                              }
                              v65 = v63 & (srcc + v65);
                              v66 = (_QWORD *)(v64 + 16LL * v65);
                              v67 = *v66;
                              if ( v61 == *v66 )
                                break;
                              if ( v67 == -4096 )
                              {
                                if ( v165 )
                                  v66 = v165;
                                break;
                              }
                            }
                          }
                          *v66 = v61;
                          v66[1] = k[1];
                          ++*(_DWORD *)(a2 + 56);
                        }
                      }
                      srce = v47;
                      v162 = v44;
                      operator delete();
                      v56 = *(_QWORD **)(a2 + 48);
                      v68 = *(_DWORD *)(a2 + 64);
                      v44 = v162;
                      v47 = srce;
                      v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    }
                    else
                    {
                      v120 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v68 = v120;
                      v121 = &v56[2 * v120];
                      if ( v56 != v121 )
                      {
                        v122 = v56;
                        do
                        {
                          *v122 = -4096;
                          v122 += 2;
                        }
                        while ( v121 != v122 );
                      }
                      v37 = 1;
                    }
                    if ( !v68 )
                      goto LABEL_249;
                    v40 = (unsigned int)(v68 - 1);
                    LODWORD(v69) = v40 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
                    v50 = &v56[2 * (unsigned int)v69];
                    v70 = *v50;
                    if ( v52 == *v50 )
                      goto LABEL_53;
                    v38 = 0;
                    v149 = 1;
                    if ( v70 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v38 && v70 == -8192 )
                          v38 = (unsigned __int64)v50;
                        v69 = (unsigned int)v40 & ((_DWORD)v69 + v149);
                        v50 = &v56[2 * v69];
                        v70 = *v50;
                        if ( v52 == *v50 )
                          goto LABEL_53;
                        if ( v70 == -4096 )
                        {
                          if ( !v38 )
                            break;
                          v70 = *(_QWORD *)v38;
                          v50 = (__int64 *)v38;
                          goto LABEL_53;
                        }
                        ++v149;
                      }
                    }
LABEL_86:
                    *(_DWORD *)(a2 + 56) = v37;
                    goto LABEL_55;
                  }
                  v48 = v51 - 1;
                  v49 = v48 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
                  v50 = &v53[2 * v49];
                  v37 = *v50;
                  if ( v52 != *v50 )
                  {
                    v38 = 0;
                    v72 = 1;
                    if ( v37 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v38 && v37 == -8192 )
                          v38 = (unsigned __int64)v50;
                        v40 = (unsigned int)(v72 + 1);
                        v49 = v48 & (v72 + v49);
                        v50 = &v53[2 * v49];
                        v37 = *v50;
                        if ( v52 == *v50 )
                          goto LABEL_36;
                        if ( v37 == -4096 )
                          break;
                        ++v72;
                      }
                      if ( v38 )
                        v50 = (__int64 *)v38;
                    }
                    v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    if ( 4 * (int)v37 >= 3 * v51 )
                      goto LABEL_38;
                    if ( v51 - *(_DWORD *)(a2 + 60) - (unsigned int)v37 > v51 >> 3 )
                    {
                      v70 = *v50;
                      goto LABEL_53;
                    }
                    srca = v47;
                    v163 = v44;
                    v77 = (((v48 >> 1) | v48) >> 2) | (v48 >> 1) | v48;
                    v78 = (((v77 >> 4) | v77) >> 8) | (v77 >> 4) | v77;
                    v79 = v78 >> 16;
                    v80 = ((v78 >> 16) | v78) + 1;
                    if ( (unsigned int)v80 < 0x40 )
                      LODWORD(v80) = 64;
                    *(_DWORD *)(a2 + 64) = v80;
                    v81 = (_QWORD *)sub_220C370(16LL * (unsigned int)v80, 8, v79, v37, v40, v38);
                    v44 = v163;
                    v47 = srca;
                    *(_QWORD *)(a2 + 48) = v81;
                    if ( v53 )
                    {
                      v82 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v164 = 2LL * v51;
                      for ( m = &v81[2 * v82]; m != v81; v81 += 2 )
                        *v81 = -4096;
                      v84 = v53;
                      do
                      {
                        v85 = *v84;
                        if ( *v84 != -4096 && v85 != -8192 )
                        {
                          v86 = *(_DWORD *)(a2 + 64);
                          if ( !v86 )
                          {
                            *(_QWORD *)&dword_0 = *v84;
                            BUG();
                          }
                          v87 = v86 - 1;
                          v88 = *(_QWORD *)(a2 + 48);
                          v89 = (v86 - 1) & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
                          v90 = (_QWORD *)(v88 + 16LL * v89);
                          v91 = *v90;
                          if ( v85 != *v90 && v91 != -4096 )
                          {
                            srcd = nullptr;
                            for ( n = 1; ; ++n )
                            {
                              if ( !srcd )
                              {
                                if ( v91 != -8192 )
                                  v90 = nullptr;
                                srcd = v90;
                              }
                              v89 = v87 & (n + v89);
                              v90 = (_QWORD *)(v88 + 16LL * v89);
                              v91 = *v90;
                              if ( v85 == *v90 )
                                break;
                              if ( v91 == -4096 )
                              {
                                if ( srcd )
                                  v90 = srcd;
                                break;
                              }
                            }
                          }
                          *v90 = v85;
                          v90[1] = v84[1];
                          ++*(_DWORD *)(a2 + 56);
                        }
                        v84 += 2;
                      }
                      while ( &v53[v164] != v84 );
                      v173 = v47;
                      srcf = v44;
                      operator delete();
                      v81 = *(_QWORD **)(a2 + 48);
                      v92 = *(_DWORD *)(a2 + 64);
                      v44 = srcf;
                      v47 = v173;
                      v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    }
                    else
                    {
                      v123 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v92 = v123;
                      v124 = &v81[2 * v123];
                      if ( v81 != v124 )
                      {
                        v125 = v81;
                        do
                        {
                          *v125 = -4096;
                          v125 += 2;
                        }
                        while ( v124 != v125 );
                      }
                      v37 = 1;
                    }
                    if ( !v92 )
                    {
LABEL_249:
                      ++*(_DWORD *)(a2 + 56);
                      BUG();
                    }
                    v93 = v92 - 1;
                    v94 = (v92 - 1) & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
                    v50 = &v81[2 * v94];
                    v70 = *v50;
                    if ( v52 != *v50 )
                    {
                      v40 = 0;
                      v38 = 1;
                      if ( v70 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v70 == -8192 && !v40 )
                            v40 = (unsigned __int64)v50;
                          v156 = v38 + 1;
                          v38 = v93 & (v94 + (unsigned int)v38);
                          v94 = v38;
                          v50 = &v81[2 * (unsigned int)v38];
                          v70 = *v50;
                          if ( v52 == *v50 )
                            goto LABEL_53;
                          if ( v70 == -4096 )
                          {
                            if ( !v40 )
                              goto LABEL_86;
                            v70 = *(_QWORD *)v40;
                            v50 = (__int64 *)v40;
                            goto LABEL_53;
                          }
                          LODWORD(v38) = v156;
                        }
                      }
                      goto LABEL_86;
                    }
LABEL_53:
                    *(_DWORD *)(a2 + 56) = v37;
                    if ( v70 != -4096 )
                      --*(_DWORD *)(a2 + 60);
LABEL_55:
                    *v50 = v52;
                    v50[1] = 0;
                  }
LABEL_36:
                  ++v46;
                  v50[1] = (__int64)v47;
                  if ( v44 == (char *)v46 )
                  {
                    v7 = v158;
                    v43 = ptr;
LABEL_58:
                    if ( v43 != v195 )
                      free(v43);
                    if ( !v191 )
                      free(v188);
                    return v7;
                  }
                  continue;
                }
              }
              i = (unsigned __int64)v196;
              sub_9E1030((__int64 *)&v196);
LABEL_128:
              if ( !i )
                goto LABEL_129;
            }
            while ( 1 )
            {
              v74 = v73 + 1;
              v75 = ((_DWORD)v29 - 1) & (v32 + v73);
              v32 = v75;
              v33 = (__int64 *)(v31 + 16 * v75);
              v76 = *v33;
              if ( v30 == *v33 )
                break;
              v73 = v74;
              if ( v76 == -4096 )
                goto LABEL_69;
            }
LABEL_24:
            sub_9E2C50((__m128 *)&v196, v33, (_QWORD *)(16 * v29 + v31), v157, 1);
            v35 = v196;
            goto LABEL_25;
          }
          v151 = (__int64 *)(v23[36] & 0xFFFFFFFFFFFFFFF8LL);
          v152 = *v151;
          v151[10] += 768;
          v153 = (_DWORD *)((v152 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v151[1] >= (unsigned __int64)(v153 + 192) && v152 )
            *v151 = (__int64)(v153 + 192);
          else
            v153 = (_DWORD *)sub_962430((__int64)v151, 768, 768, 3, a5, a6);
          *v119 = v153;
          v154 = v153 + 192;
          do
          {
            *v153 = 0;
            v153 += 6;
            *((_OWORD *)v153 - 1) = 0;
            *((_QWORD *)v153 - 1) = 0;
          }
          while ( v153 != v154 );
          v126 = (char)v196;
          v24 = *v119 + 24 * (v117 & 0x1F);
        }
        else
        {
          v24 = sub_FFBBF0(v23, (unsigned int)v117, &v196);
          v126 = (char)v196;
        }
        if ( v126 )
          return v7;
        goto LABEL_18;
      }
    }
  }
  return v7;
}

