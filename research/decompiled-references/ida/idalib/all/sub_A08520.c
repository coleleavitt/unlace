__int64 __fastcall sub_A08520(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v58; // r9
  __int64 *v59; // r13
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v62; // r15
  int v63; // esi
  int v64; // esi
  __int64 v65; // r8
  unsigned int v66; // ecx
  _QWORD *v67; // rdx
  __int64 v68; // rdi
  int v69; // esi
  __int64 v70; // rdi
  __int64 v71; // rsi
  int v72; // eax
  int v73; // edi
  int v74; // esi
  int v75; // r9d
  __int64 v76; // rsi
  __int64 v77; // r10
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  _QWORD *m; // rdx
  __int64 *v85; // rax
  __int64 v86; // r15
  int v87; // edx
  int v88; // r8d
  __int64 v89; // rdi
  unsigned int v90; // ecx
  _QWORD *v91; // rdx
  __int64 v92; // rsi
  int v93; // esi
  int v94; // edi
  unsigned int v95; // r13d
  __int64 v96; // rax
  __int64 v97; // rdx
  size_t v98; // r13
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  char v102; // dl
  __int64 v103; // r12
  char *v104; // rsi
  __int64 v105; // rdi
  char *v106; // rcx
  char *v107; // rax
  char *v108; // rsi
  char *v109; // rax
  char v110; // dl
  __int64 v111; // r12
  char *v112; // rsi
  __int64 v113; // rdi
  char *v114; // rcx
  char *v115; // rax
  char *v116; // rsi
  char *v117; // rax
  unsigned __int64 v118; // r12
  __int64 v119; // rax
  _QWORD *v120; // r13
  __int64 v121; // rcx
  _QWORD *v122; // rcx
  _QWORD *v123; // rdx
  __int64 v124; // rcx
  _QWORD *v125; // rcx
  _QWORD *v126; // rdx
  char v127; // dl
  __int64 v128; // r13
  unsigned __int64 v129; // rdx
  _WORD *v130; // rax
  __int64 v131; // rdx
  unsigned __int64 v132; // rdx
  __int64 v133; // rax
  unsigned __int64 v134; // rdx
  char *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  unsigned __int64 v143; // r15
  _QWORD *v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 *v147; // r9
  __int64 v148; // rax
  __int64 v149; // rax
  int v150; // r13d
  _QWORD *v151; // rax
  __int64 *v152; // rdi
  __int64 v153; // rcx
  _DWORD *v154; // rax
  _DWORD *v155; // rdx
  __int64 v156; // rax
  int v157; // r14d
  __int64 v158; // [rsp+0h] [rbp-248h]
  __int64 v159; // [rsp+0h] [rbp-248h]
  unsigned __int64 v160; // [rsp+0h] [rbp-248h]
  __int64 v161; // [rsp+10h] [rbp-238h]
  char *v162; // [rsp+10h] [rbp-238h]
  char *v163; // [rsp+10h] [rbp-238h]
  char *v164; // [rsp+10h] [rbp-238h]
  __int64 v165; // [rsp+10h] [rbp-238h]
  _QWORD *v166; // [rsp+10h] [rbp-238h]
  void *src; // [rsp+18h] [rbp-230h]
  void *srce; // [rsp+18h] [rbp-230h]
  void *srca; // [rsp+18h] [rbp-230h]
  char *srcf; // [rsp+18h] [rbp-230h]
  void *srcb; // [rsp+18h] [rbp-230h]
  int srcc; // [rsp+18h] [rbp-230h]
  _QWORD *srcd; // [rsp+18h] [rbp-230h]
  void *v174; // [rsp+20h] [rbp-228h]
  size_t v175; // [rsp+20h] [rbp-228h]
  int n; // [rsp+20h] [rbp-228h]
  __int64 v177; // [rsp+28h] [rbp-220h]
  __int64 v178; // [rsp+28h] [rbp-220h]
  __int64 v179; // [rsp+30h] [rbp-218h]
  _QWORD v180[4]; // [rsp+40h] [rbp-208h] BYREF
  __int16 v181; // [rsp+60h] [rbp-1E8h]
  _QWORD *v182[4]; // [rsp+70h] [rbp-1D8h] BYREF
  __int16 v183; // [rsp+90h] [rbp-1B8h]
  _QWORD *v184[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  __int16 v185; // [rsp+C0h] [rbp-188h]
  _QWORD *v186; // [rsp+D0h] [rbp-178h] BYREF
  char v187; // [rsp+D8h] [rbp-170h]
  __int16 v188; // [rsp+F0h] [rbp-158h]
  void *v189; // [rsp+100h] [rbp-148h] BYREF
  __int64 v190; // [rsp+108h] [rbp-140h]
  int v191; // [rsp+110h] [rbp-138h]
  char v192; // [rsp+114h] [rbp-134h]
  char v193; // [rsp+118h] [rbp-130h] BYREF
  void *ptr; // [rsp+138h] [rbp-110h] BYREF
  __int64 v195; // [rsp+140h] [rbp-108h]
  _BYTE v196[40]; // [rsp+148h] [rbp-100h] BYREF
  void *v197; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h]
  _BYTE v199[192]; // [rsp+188h] [rbp-C0h] BYREF

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
      v72 = sub_10212A0(v20, (unsigned int)a3);
      v20 = *(_DWORD **)a2;
      a3 = v72;
    }
    v21 = a3 & 0x7FFFFFFF;
    if ( v21 < v20[119] || v21 >= v20[120] )
      v22 = sub_101D590(v20);
    else
      v22 = v20[118];
    if ( v22 )
    {
      v23 = *(_QWORD **)a2;
      LOBYTE(v197) = 0;
      if ( (unsigned int)(v22 + 1) > 1 )
      {
        if ( v22 >= 0 )
        {
          v24 = v23[23] + 24LL * (unsigned int)v22;
          goto LABEL_18;
        }
        v118 = (unsigned int)(-2 - v22);
        v119 = *(_QWORD *)(v23[40] + 8LL * ((unsigned int)(-2 - v22) >> 6));
        if ( _bittest64(&v119, v118) )
        {
          v120 = (_QWORD *)(v23[34] + 8 * ((unsigned __int64)(int)v118 >> 5));
          if ( *v120 )
          {
            v24 = *v120 + 24 * (v118 & 0x1F);
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
            v190 = 4;
            v28 = *((_QWORD *)v27 + 2);
            v192 = 1;
            v191 = 0;
            v161 = v28;
            v189 = &v193;
            ptr = v196;
            v195 = 0x400000000LL;
            v158 = a2 + 48;
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
                v74 = 1;
                if ( v34 != -4096 )
                  break;
              }
LABEL_69:
              sub_A06990(
                (__m128 *)&v197,
                (_QWORD *)(v31 + 16LL * (unsigned int)v29),
                (_QWORD *)(v31 + 16LL * (unsigned int)v29),
                v158,
                1);
              v35 = v197;
LABEL_25:
              v36 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL * *(unsigned int *)(a2 + 64));
              sub_A06990((__m128 *)&v197, v36, v36, v158, 1);
              if ( v197 != v35 )
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
                    v160 = v35[1] & 0xFFFFFFFFFFFFFFF8LL;
                    sub_2237220(v7, v6, v41 + 1, 8);
                    v41 = *(unsigned int *)(v7 + 8);
                    v40 = v160;
                  }
                  *(_QWORD *)(*(_QWORD *)v7 + 8 * v41) = v40;
                  v42 = (unsigned int)v195;
                  ++*(_DWORD *)(v7 + 8);
                  goto LABEL_31;
                }
                v110 = v192;
                v111 = *(_QWORD *)(i + 8);
                if ( v192 )
                {
                  v112 = (char *)v189;
                  v40 = HIDWORD(v190);
                  v113 = 8LL * HIDWORD(v190);
                  v114 = (char *)v189 + v113;
                  if ( v189 != (char *)v189 + v113 )
                  {
                    v115 = (char *)v189;
                    if ( v111 == *(_QWORD *)v189 )
                    {
LABEL_161:
                      v110 = 0;
LABEL_120:
                      v37 = HIDWORD(v190);
                      v116 = &v112[8 * HIDWORD(v190)];
                      goto LABEL_121;
                    }
                    while ( 1 )
                    {
                      v115 += 8;
                      if ( v114 == v115 )
                        break;
                      if ( v111 == *(_QWORD *)v115 )
                        goto LABEL_161;
                    }
                  }
                  if ( HIDWORD(v190) < (unsigned int)v190 )
                  {
                    v40 = (unsigned int)++HIDWORD(v190);
                    *(_QWORD *)v114 = v111;
                    v112 = (char *)v189;
                    v115 = (char *)v189 + v113;
                    goto LABEL_120;
                  }
                }
                v115 = (char *)sub_2236760(&v189, v111);
                v112 = (char *)v189;
                if ( v192 )
                  goto LABEL_120;
                v37 = (unsigned int)v190;
                v116 = (char *)v189 + 8 * (unsigned int)v190;
LABEL_121:
                if ( v116 != v115 && *(_QWORD *)v115 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v117 = v115 + 8;
                  do
                  {
                    v37 = (unsigned __int64)v117;
                    if ( v116 == v117 )
                      break;
                    v117 += 8;
                  }
                  while ( *(_QWORD *)v37 >= 0xFFFFFFFFFFFFFFFELL );
                }
                if ( v110 )
                {
                  v133 = (unsigned int)v195;
                  v37 = HIDWORD(v195);
                  v134 = (unsigned int)v195 + 1LL;
                  if ( v134 > HIDWORD(v195) )
                  {
                    sub_2237220(&ptr, v196, v134, 8);
                    v133 = (unsigned int)v195;
                  }
                  *((_QWORD *)ptr + v133) = v111;
                  LODWORD(v195) = v195 + 1;
                }
                i = v35[1] & 0xFFFFFFFFFFFFFFF8LL;
                goto LABEL_128;
              }
              srcb = (void *)(i + 32);
              v175 = *(_QWORD *)i;
              v96 = sub_228AB90(i + 32, *(_QWORD *)i, 0);
              if ( v97 != 10 || *(_QWORD *)v96 != 0x6F77656D6172662ELL || *(_WORD *)(v96 + 8) != 27506 )
              {
                v98 = *(_QWORD *)i;
                v197 = v199;
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                if ( v98 > 0x80 )
                {
                  sub_2236E10(&v197, v199, v98, 1);
                  v135 = (char *)v197 + si128.m128i_i64[0];
                }
                else
                {
                  if ( !v98 )
                  {
LABEL_91:
                    si128.m128i_i64[0] = v98;
                    v188 = 257;
                    v180[0] = "APINotes.";
                    v180[2] = "apinotes";
                    v185 = 257;
                    v183 = 257;
                    v181 = 771;
                    sub_228A3B0(&v197, v180, v182, v184, &v186);
                    sub_FD9C70(&v186, v161, v197, si128.m128i_i64[0], 0, 1, 1);
                    if ( (v187 & 1) != 0 )
                    {
                      v182[0] = v186;
                      v186 = nullptr;
                      sub_A05760(v184, v182);
                      if ( v182[0] )
                        (*(void (__fastcall **)(_QWORD *))(*v182[0] + 8LL))(v182[0]);
                      sub_A04D90((__int64 *)&v186);
                    }
                    else
                    {
                      v177 = (__int64)v186;
                      sub_A04D90((__int64 *)&v186);
                      if ( v177 && !(unsigned __int8)sub_A074A0(a2, *(_QWORD *)(i + 8), v177) )
                      {
                        v186 = *(_QWORD **)(i + 8);
                        v156 = *sub_A04E00(v158, (__int64 *)&v186, v99, v100, v101, (__int64 *)v38);
                        if ( v156 && (v156 & 4) != 0 && (v156 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                          sub_A04DB0(v7, v156 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( v197 != v199 )
                          free(v197);
                        goto LABEL_129;
                      }
                    }
                    if ( v197 != v199 )
                      free(v197);
                    goto LABEL_96;
                  }
                  v135 = v199;
                }
                memcpy(v135, srcb, v98);
                v98 += si128.m128i_i64[0];
                goto LABEL_91;
              }
              v136 = sub_228AAA0(srcb, v175, 0);
              v138 = v137;
              v179 = v136;
              v178 = sub_A080F0(a2, srcb, v175, v136, v137, 1);
              v139 = sub_A080F0(a2, srcb, v175, v179, v138, 0);
              if ( v178 )
              {
                v143 = v139;
                v197 = *(void **)(i + 8);
                *sub_A04E00(v158, (__int64 *)&v197, v140, v141, v142, (__int64 *)v38) = 0;
                v148 = (unsigned int)v195;
                if ( !(_DWORD)v195 )
                  goto LABEL_203;
                v144 = ptr;
                if ( *((_QWORD *)ptr + (unsigned int)v195 - 1) == *(_QWORD *)(v178 + 8) )
                {
                  sub_A05430((__int64)&v189);
                  i = v178;
                  goto LABEL_203;
                }
                if ( !v143 )
                {
LABEL_203:
                  v197 = *(void **)(i + 8);
                  v149 = *sub_A04E00(v158, (__int64 *)&v197, (__int64)v144, v145, v146, v147);
                  if ( v149 && (v149 & 4) != 0 && (v149 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    sub_A04DB0(v7, v149 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_129:
                  v42 = (unsigned int)v195;
                  goto LABEL_31;
                }
LABEL_227:
                if ( v144[v148 - 1] == *(_QWORD *)(v143 + 8) )
                {
                  i = v143;
                  sub_A05430((__int64)&v189);
                }
                goto LABEL_203;
              }
              if ( v139 )
              {
                v143 = v139;
                v197 = *(void **)(i + 8);
                *sub_A04E00(v158, (__int64 *)&v197, v140, v141, v142, (__int64 *)v38) = 0;
                v148 = (unsigned int)v195;
                if ( !(_DWORD)v195 )
                  goto LABEL_203;
                v144 = ptr;
                goto LABEL_227;
              }
LABEL_96:
              v102 = v192;
              v103 = *(_QWORD *)(i + 8);
              if ( v192 )
              {
                v104 = (char *)v189;
                v40 = HIDWORD(v190);
                v105 = 8LL * HIDWORD(v190);
                v106 = (char *)v189 + v105;
                if ( v189 != (char *)v189 + v105 )
                {
                  v107 = (char *)v189;
                  if ( v103 == *(_QWORD *)v189 )
                  {
LABEL_157:
                    v102 = 0;
                    goto LABEL_104;
                  }
                  while ( 1 )
                  {
                    v107 += 8;
                    if ( v106 == v107 )
                      break;
                    if ( v103 == *(_QWORD *)v107 )
                      goto LABEL_157;
                  }
                }
                if ( HIDWORD(v190) < (unsigned int)v190 )
                {
                  v40 = (unsigned int)++HIDWORD(v190);
                  *(_QWORD *)v106 = v103;
                  v104 = (char *)v189;
                  v107 = (char *)v189 + v105;
LABEL_104:
                  v37 = HIDWORD(v190);
                  v108 = &v104[8 * HIDWORD(v190)];
                  goto LABEL_105;
                }
              }
              v107 = (char *)sub_2236760(&v189, v103);
              v104 = (char *)v189;
              if ( v192 )
                goto LABEL_104;
              v37 = (unsigned int)v190;
              v108 = (char *)v189 + 8 * (unsigned int)v190;
LABEL_105:
              if ( v108 != v107 && *(_QWORD *)v107 >= 0xFFFFFFFFFFFFFFFELL )
              {
                v109 = v107 + 8;
                do
                {
                  v37 = (unsigned __int64)v109;
                  if ( v108 == v109 )
                    break;
                  v109 += 8;
                }
                while ( *(_QWORD *)v37 >= 0xFFFFFFFFFFFFFFFELL );
              }
              v42 = (unsigned int)v195;
              if ( !v102 )
              {
                i = 0;
                goto LABEL_31;
              }
              if ( (unsigned __int64)(unsigned int)v195 + 1 > HIDWORD(v195) )
              {
                sub_2237220(&ptr, v196, (unsigned int)v195 + 1LL, 8);
                v42 = (unsigned int)v195;
              }
              *((_QWORD *)ptr + v42) = v103;
              LODWORD(v195) = v195 + 1;
              v128 = sub_228A4B0(srcb, v175, 0);
              for ( i = v129; ; i = v132 )
              {
                v130 = (_WORD *)sub_228AAA0(v128, i, 0);
                if ( v131 != 2 || *v130 != 11822 )
                  break;
                v128 = sub_228A4B0(v128, i, 0);
              }
              if ( !i )
                goto LABEL_129;
              sub_FD9440(&v197, v161, v128, i, 1);
              if ( (si128.m128i_i8[0] & 1) != 0 )
              {
                v151 = v197;
                v197 = nullptr;
                v184[0] = v151;
                sub_A05760(&v186, v184);
                if ( v184[0] )
                  (*(void (__fastcall **)(_QWORD *))(*v184[0] + 8LL))(v184[0]);
                i = 0;
                sub_A04D70((__int64 *)&v197);
                v42 = (unsigned int)v195;
LABEL_31:
                v43 = ptr;
                v44 = (char *)ptr + 8 * v42;
                if ( v44 == ptr )
                  goto LABEL_58;
                v45 = 0;
                v159 = v7;
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
                    v162 = v44;
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
                    v56 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v55, 8, v54, v37, v40, v38);
                    v44 = v162;
                    v47 = src;
                    *(_QWORD *)(a2 + 48) = v56;
                    if ( v53 )
                    {
                      v57 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v58 = 2LL * v51;
                      v59 = &v53[v58];
                      for ( j = &v56[2 * v57]; j != v56; v56 += 2 )
                        *v56 = -4096;
                      for ( k = v53; v59 != k; k += 2 )
                      {
                        v62 = *k;
                        if ( *k != -8192 && v62 != -4096 )
                        {
                          v63 = *(_DWORD *)(a2 + 64);
                          if ( !v63 )
                          {
                            *(_QWORD *)&dword_0 = *k;
                            BUG();
                          }
                          v64 = v63 - 1;
                          v65 = *(_QWORD *)(a2 + 48);
                          v66 = v64 & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
                          v67 = (_QWORD *)(v65 + 16LL * v66);
                          v68 = *v67;
                          if ( v62 != *v67 && v68 != -4096 )
                          {
                            v166 = nullptr;
                            for ( srcc = 1; ; ++srcc )
                            {
                              if ( v68 == -8192 )
                              {
                                if ( v166 )
                                  v67 = v166;
                                v166 = v67;
                              }
                              v66 = v64 & (srcc + v66);
                              v67 = (_QWORD *)(v65 + 16LL * v66);
                              v68 = *v67;
                              if ( v62 == *v67 )
                                break;
                              if ( v68 == -4096 )
                              {
                                if ( v166 )
                                  v67 = v166;
                                break;
                              }
                            }
                          }
                          *v67 = v62;
                          v67[1] = k[1];
                          ++*(_DWORD *)(a2 + 56);
                        }
                      }
                      srce = v47;
                      v163 = v44;
                      operator delete(v53, v58 * 8, 8);
                      v56 = *(_QWORD **)(a2 + 48);
                      v69 = *(_DWORD *)(a2 + 64);
                      v44 = v163;
                      v47 = srce;
                      v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    }
                    else
                    {
                      v121 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v69 = v121;
                      v122 = &v56[2 * v121];
                      if ( v56 != v122 )
                      {
                        v123 = v56;
                        do
                        {
                          *v123 = -4096;
                          v123 += 2;
                        }
                        while ( v122 != v123 );
                      }
                      v37 = 1;
                    }
                    if ( !v69 )
                      goto LABEL_249;
                    v40 = (unsigned int)(v69 - 1);
                    LODWORD(v70) = v40 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
                    v50 = &v56[2 * (unsigned int)v70];
                    v71 = *v50;
                    if ( v52 == *v50 )
                      goto LABEL_53;
                    v38 = 0;
                    v150 = 1;
                    if ( v71 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v38 && v71 == -8192 )
                          v38 = (unsigned __int64)v50;
                        v70 = (unsigned int)v40 & ((_DWORD)v70 + v150);
                        v50 = &v56[2 * v70];
                        v71 = *v50;
                        if ( v52 == *v50 )
                          goto LABEL_53;
                        if ( v71 == -4096 )
                        {
                          if ( !v38 )
                            break;
                          v71 = *(_QWORD *)v38;
                          v50 = (__int64 *)v38;
                          goto LABEL_53;
                        }
                        ++v150;
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
                    v73 = 1;
                    if ( v37 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v38 && v37 == -8192 )
                          v38 = (unsigned __int64)v50;
                        v40 = (unsigned int)(v73 + 1);
                        v49 = v48 & (v73 + v49);
                        v50 = &v53[2 * v49];
                        v37 = *v50;
                        if ( v52 == *v50 )
                          goto LABEL_36;
                        if ( v37 == -4096 )
                          break;
                        ++v73;
                      }
                      if ( v38 )
                        v50 = (__int64 *)v38;
                    }
                    v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    if ( 4 * (int)v37 >= 3 * v51 )
                      goto LABEL_38;
                    if ( v51 - *(_DWORD *)(a2 + 60) - (unsigned int)v37 > v51 >> 3 )
                    {
                      v71 = *v50;
                      goto LABEL_53;
                    }
                    srca = v47;
                    v164 = v44;
                    v78 = (((v48 >> 1) | v48) >> 2) | (v48 >> 1) | v48;
                    v79 = (((v78 >> 4) | v78) >> 8) | (v78 >> 4) | v78;
                    v80 = v79 >> 16;
                    v81 = ((v79 >> 16) | v79) + 1;
                    if ( (unsigned int)v81 < 0x40 )
                      LODWORD(v81) = 64;
                    *(_DWORD *)(a2 + 64) = v81;
                    v82 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v81, 8, v80, v37, v40, v38);
                    v44 = v164;
                    v47 = srca;
                    *(_QWORD *)(a2 + 48) = v82;
                    if ( v53 )
                    {
                      v83 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v165 = 2LL * v51;
                      for ( m = &v82[2 * v83]; m != v82; v82 += 2 )
                        *v82 = -4096;
                      v85 = v53;
                      do
                      {
                        v86 = *v85;
                        if ( *v85 != -4096 && v86 != -8192 )
                        {
                          v87 = *(_DWORD *)(a2 + 64);
                          if ( !v87 )
                          {
                            *(_QWORD *)&dword_0 = *v85;
                            BUG();
                          }
                          v88 = v87 - 1;
                          v89 = *(_QWORD *)(a2 + 48);
                          v90 = (v87 - 1) & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
                          v91 = (_QWORD *)(v89 + 16LL * v90);
                          v92 = *v91;
                          if ( v86 != *v91 && v92 != -4096 )
                          {
                            srcd = nullptr;
                            for ( n = 1; ; ++n )
                            {
                              if ( !srcd )
                              {
                                if ( v92 != -8192 )
                                  v91 = nullptr;
                                srcd = v91;
                              }
                              v90 = v88 & (n + v90);
                              v91 = (_QWORD *)(v89 + 16LL * v90);
                              v92 = *v91;
                              if ( v86 == *v91 )
                                break;
                              if ( v92 == -4096 )
                              {
                                if ( srcd )
                                  v91 = srcd;
                                break;
                              }
                            }
                          }
                          *v91 = v86;
                          v91[1] = v85[1];
                          ++*(_DWORD *)(a2 + 56);
                        }
                        v85 += 2;
                      }
                      while ( &v53[v165] != v85 );
                      v174 = v47;
                      srcf = v44;
                      operator delete(v53, v165 * 8, 8);
                      v82 = *(_QWORD **)(a2 + 48);
                      v93 = *(_DWORD *)(a2 + 64);
                      v44 = srcf;
                      v47 = v174;
                      v37 = (unsigned int)(*(_DWORD *)(a2 + 56) + 1);
                    }
                    else
                    {
                      v124 = *(unsigned int *)(a2 + 64);
                      *(_QWORD *)(a2 + 56) = 0;
                      v93 = v124;
                      v125 = &v82[2 * v124];
                      if ( v82 != v125 )
                      {
                        v126 = v82;
                        do
                        {
                          *v126 = -4096;
                          v126 += 2;
                        }
                        while ( v125 != v126 );
                      }
                      v37 = 1;
                    }
                    if ( !v93 )
                    {
LABEL_249:
                      ++*(_DWORD *)(a2 + 56);
                      BUG();
                    }
                    v94 = v93 - 1;
                    v95 = (v93 - 1) & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
                    v50 = &v82[2 * v95];
                    v71 = *v50;
                    if ( v52 != *v50 )
                    {
                      v40 = 0;
                      v38 = 1;
                      if ( v71 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v71 == -8192 && !v40 )
                            v40 = (unsigned __int64)v50;
                          v157 = v38 + 1;
                          v38 = v94 & (v95 + (unsigned int)v38);
                          v95 = v38;
                          v50 = &v82[2 * (unsigned int)v38];
                          v71 = *v50;
                          if ( v52 == *v50 )
                            goto LABEL_53;
                          if ( v71 == -4096 )
                          {
                            if ( !v40 )
                              goto LABEL_86;
                            v71 = *(_QWORD *)v40;
                            v50 = (__int64 *)v40;
                            goto LABEL_53;
                          }
                          LODWORD(v38) = v157;
                        }
                      }
                      goto LABEL_86;
                    }
LABEL_53:
                    *(_DWORD *)(a2 + 56) = v37;
                    if ( v71 != -4096 )
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
                    v7 = v159;
                    v43 = ptr;
LABEL_58:
                    if ( v43 != v196 )
                      free(v43);
                    if ( !v192 )
                      free(v189);
                    return v7;
                  }
                  continue;
                }
              }
              i = (unsigned __int64)v197;
              sub_A04D70((__int64 *)&v197);
LABEL_128:
              if ( !i )
                goto LABEL_129;
            }
            while ( 1 )
            {
              v75 = v74 + 1;
              v76 = ((_DWORD)v29 - 1) & (v32 + v74);
              v32 = v76;
              v33 = (__int64 *)(v31 + 16 * v76);
              v77 = *v33;
              if ( v30 == *v33 )
                break;
              v74 = v75;
              if ( v77 == -4096 )
                goto LABEL_69;
            }
LABEL_24:
            sub_A06990((__m128 *)&v197, v33, (_QWORD *)(16 * v29 + v31), v158, 1);
            v35 = v197;
            goto LABEL_25;
          }
          v152 = (__int64 *)(v23[36] & 0xFFFFFFFFFFFFFFF8LL);
          v153 = *v152;
          v152[10] += 768;
          v154 = (_DWORD *)((v153 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v152[1] >= (unsigned __int64)(v154 + 192) && v153 )
            *v152 = (__int64)(v154 + 192);
          else
            v154 = (_DWORD *)sub_986170((__int64)v152, 768, 768, 3, a5, a6);
          *v120 = v154;
          v155 = v154 + 192;
          do
          {
            *v154 = 0;
            v154 += 6;
            *((_OWORD *)v154 - 1) = 0;
            *((_QWORD *)v154 - 1) = 0;
          }
          while ( v154 != v155 );
          v127 = (char)v197;
          v24 = *v120 + 24 * (v118 & 0x1F);
        }
        else
        {
          v24 = sub_101F930(v23, (unsigned int)v118, &v197);
          v127 = (char)v197;
        }
        if ( v127 )
          return v7;
        goto LABEL_18;
      }
    }
  }
  return v7;
}
