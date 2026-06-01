__int64 *__fastcall sub_111A650(__int64 *a1, char **a2, __int64 a3)
{
  char **v3; // r15
  char **v4; // rcx
  char **v5; // rbp
  char **v6; // r12
  void **v7; // rbx
  void *v8; // r14
  _BYTE *v9; // rbx
  __int64 v10; // r13
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  __m128i *v13; // rbx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r13
  signed __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rcx
  __m128i v19; // xmm0
  _BYTE *v20; // rsi
  signed __int64 v21; // r13
  char *v22; // rbx
  _QWORD *v23; // r14
  _BYTE *v24; // rax
  signed __int64 v25; // r13
  signed __int64 v26; // rdx
  __int64 v27; // r13
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  _BYTE *v30; // rsi
  _BYTE *v31; // rsi
  _BYTE *v32; // rax
  _BYTE *v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  __m128i v38; // xmm0
  _BYTE *v39; // rsi
  size_t v40; // r8
  char **v41; // rax
  _QWORD *v42; // rbp
  _BYTE *v43; // r12
  char **v44; // r14
  size_t v45; // rbx
  _BYTE *v46; // rax
  char **v47; // rax
  const __m128i *v48; // rax
  char *v49; // rsi
  char *v50; // rcx
  __m128i *v51; // rdx
  unsigned __int64 v52; // r9
  const __m128i *v53; // r8
  char *v54; // rdi
  char *v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // r10
  __int64 v58; // rdi
  __int64 v59; // r10
  __int64 v60; // rdi
  const __m128i *v61; // rdi
  __m128i *v62; // r13
  void **v63; // rbp
  void **v64; // r14
  char *v65; // rdi
  char *v66; // rdi
  __m128 v67; // xmm0
  char *v68; // r13
  char *v69; // rbp
  void **v70; // r12
  void **v71; // rbx
  char *v72; // rdi
  char *v73; // rdi
  char **v75; // r12
  unsigned __int64 v76; // rdx
  signed __int64 v77; // rbp
  char *v78; // rbx
  __m128i v79; // xmm0
  char *v80; // r13
  _BYTE *v81; // rax
  _BYTE *v82; // r14
  signed __int64 v83; // rbp
  __int64 v84; // rbp
  char *v85; // rsi
  char *v86; // rdx
  char *v87; // rsi
  char *v88; // rdx
  char *v89; // rsi
  char *v90; // rdx
  __int64 v91; // rax
  char *v92; // r13
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rbx
  __m128i v97; // xmm0
  _BYTE *v98; // rax
  _BYTE *v99; // r14
  signed __int64 v100; // r12
  char **v101; // r14
  const __m128i *v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rcx
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // r10
  __m128i *v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r8
  const __m128i *v115; // r8
  __int64 v116; // r12
  void **v117; // r13
  void **v118; // rbx
  void *v119; // rdi
  void *v120; // rdi
  __m128 *v121; // rcx
  __int64 v122; // rdx
  const __m128i *v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rcx
  unsigned __int64 v126; // rdi
  unsigned __int64 v127; // r9
  __m128i *v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r8
  __int64 v131; // r8
  __int64 v132; // r10
  __int64 v133; // r8
  __int64 v134; // r10
  __int64 v135; // r8
  const __m128i *v136; // r8
  __m128i v137; // [rsp+0h] [rbp-3F0h] BYREF
  __m128i v138; // [rsp+10h] [rbp-3E0h] BYREF
  void **v139; // [rsp+20h] [rbp-3D0h]
  __m128i v140; // [rsp+28h] [rbp-3C8h] BYREF
  __int64 v141; // [rsp+38h] [rbp-3B8h]
  void *v142; // [rsp+40h] [rbp-3B0h]
  char *v143; // [rsp+48h] [rbp-3A8h]
  char **v144; // [rsp+50h] [rbp-3A0h]
  void **p_ptr; // [rsp+58h] [rbp-398h]
  void **v146; // [rsp+60h] [rbp-390h]
  char **v147; // [rsp+68h] [rbp-388h]
  void *v148; // [rsp+70h] [rbp-380h]
  __int64 v149; // [rsp+78h] [rbp-378h]
  unsigned __int64 v150; // [rsp+80h] [rbp-370h]
  char **v151; // [rsp+88h] [rbp-368h]
  __m128i *v152; // [rsp+90h] [rbp-360h]
  char **v153; // [rsp+98h] [rbp-358h]
  __int64 *v154; // [rsp+A0h] [rbp-350h]
  void *v155[2]; // [rsp+A8h] [rbp-348h] BYREF
  void *v156; // [rsp+B8h] [rbp-338h]
  char *v157; // [rsp+C8h] [rbp-328h] BYREF
  __int16 v158; // [rsp+E8h] [rbp-308h]
  char *v159; // [rsp+F8h] [rbp-2F8h] BYREF
  __int16 v160; // [rsp+118h] [rbp-2D8h]
  char *v161; // [rsp+128h] [rbp-2C8h] BYREF
  __int16 v162; // [rsp+148h] [rbp-2A8h]
  void *v163; // [rsp+158h] [rbp-298h] BYREF
  __int64 v164; // [rsp+160h] [rbp-290h]
  _BYTE v165[16]; // [rsp+168h] [rbp-288h] BYREF
  void *v166; // [rsp+178h] [rbp-278h] BYREF
  __int64 v167; // [rsp+180h] [rbp-270h]
  _BYTE v168[16]; // [rsp+188h] [rbp-268h] BYREF
  void *v169; // [rsp+198h] [rbp-258h] BYREF
  __int64 v170; // [rsp+1A0h] [rbp-250h]
  _BYTE v171[16]; // [rsp+1A8h] [rbp-248h] BYREF
  void *v172[2]; // [rsp+1B8h] [rbp-238h] BYREF
  __int64 v173; // [rsp+1C8h] [rbp-228h]
  void *v174; // [rsp+1D8h] [rbp-218h] BYREF
  __m128i si128; // [rsp+1E0h] [rbp-210h]
  char v176; // [rsp+1F0h] [rbp-200h] BYREF
  void *v177; // [rsp+278h] [rbp-178h] BYREF
  __m128i v178; // [rsp+280h] [rbp-170h]
  char v179; // [rsp+290h] [rbp-160h] BYREF
  __int16 v180; // [rsp+298h] [rbp-158h]
  void *ptr; // [rsp+318h] [rbp-D8h] BYREF
  __m128i v182; // [rsp+320h] [rbp-D0h]
  __int16 v183; // [rsp+338h] [rbp-B8h]

  v3 = a2;
  v4 = (char **)a1[1];
  v5 = (char **)*a1;
  v137.m128i_i64[1] = 120 * a3;
  v154 = a1;
  *(_OWORD *)v155 = 0;
  v156 = nullptr;
  v141 = (__int64)v4;
  v153 = &a2[15 * a3];
  if ( v5 != v4 )
  {
    if ( a2 != v153 )
    {
      v147 = a2;
      while ( 1 )
      {
        if ( (char **)v141 == v5 )
          goto LABEL_26;
        v6 = v147;
        v137.m128i_i64[0] = (__int64)&v161;
        p_ptr = &ptr;
        v142 = v147 + 4;
        v143 = (char *)(v147 + 8);
        v146 = &v174;
        v138.m128i_i64[1] = (__int64)&v159;
        v137.m128i_i64[1] = (__int64)&v176;
        v139 = &v177;
        v144 = &v157;
        v138.m128i_i64[0] = (__int64)&v179;
        while ( 1 )
        {
LABEL_6:
          v7 = p_ptr;
          LOWORD(v166) = 260;
          v174 = (void *)v137.m128i_i64[1];
          v180 = 260;
          v162 = 259;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v183 = 257;
          v161 = "/";
          v177 = v6;
          v163 = v5;
          sub_228A3B0(v146, v137.m128i_i64[0], &v163, v139, p_ptr);
          v183 = 257;
          v177 = (void *)v138.m128i_i64[0];
          LOWORD(v166) = 260;
          v163 = v142;
          v178 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v162 = 260;
          v160 = 259;
          v161 = (char *)(v5 + 4);
          v159 = "/";
          v8 = v7 + 3;
          sub_228A3B0(v139, v138.m128i_i64[1], v137.m128i_i64[0], &v163, v7);
          v161 = v143;
          v160 = 260;
          v159 = (char *)(v5 + 8);
          v182 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          LOWORD(v166) = 257;
          v162 = 260;
          v157 = "/";
          v158 = 259;
          ptr = v7 + 3;
          sub_228A3B0(v7, v144, v138.m128i_i64[1], v137.m128i_i64[0], &v163);
          v163 = v165;
          v9 = v177;
          v10 = v178.m128i_i64[0];
          v140.m128i_i64[0] = v182.m128i_i64[0];
          v140.m128i_i64[1] = (__int64)ptr;
          sub_1117C40(&v163, v174, (__int64)v174 + si128.m128i_i64[0]);
          v166 = v168;
          sub_1117C40(&v166, v9, (__int64)&v9[v10]);
          v169 = v171;
          sub_1117C40(&v169, (_BYTE *)v140.m128i_i64[1], v140.m128i_i64[1] + v140.m128i_i64[0]);
          v173 = 0;
          *(_OWORD *)v172 = 0;
          sub_1119A00((__int64)&v163);
          sub_1119A00((__int64)&v166);
          sub_1119A00((__int64)&v169);
          sub_1118C00((void ***)v172, (__int64)v172[1], v5[12], v5[13]);
          sub_1118C00((void ***)v172, (__int64)v172[1], v6[12], v6[13]);
          if ( ptr != v8 )
            free(ptr);
          if ( v177 != (void *)v138.m128i_i64[0] )
            free(v177);
          if ( v174 != (void *)v137.m128i_i64[1] )
            free(v174);
          if ( !(unsigned __int8)sub_111A410((__int64)&v163) )
            goto LABEL_13;
          v13 = (__m128i *)v155[1];
          if ( v155[1] == v156 )
          {
            v25 = (char *)v155[1] - (char *)v155[0];
            v148 = v155[0];
            v26 = ((char *)v155[1] - (char *)v155[0]) >> 3;
            if ( 0xEEEEEEEEEEEEEEEFLL * v26 )
            {
              v150 = 0xDDDDDDDDDDDDDDDELL * v26;
              if ( 0xDDDDDDDDDDDDDDDELL * v26 < 0xEEEEEEEEEEEEEEEFLL * v26 || v150 > 0x222222222222222LL )
              {
                v150 = -16;
                goto LABEL_58;
              }
              if ( !v150 )
              {
                v149 = 0;
LABEL_59:
                v27 = v149 + v25;
                v28 = v163;
                v29 = v164;
                *(_QWORD *)v27 = v27 + 16;
                sub_1117B80((_QWORD *)v27, v28, (__int64)&v28[v29]);
                v30 = v166;
                *(_QWORD *)(v27 + 32) = v27 + 48;
                sub_1117B80((_QWORD *)(v27 + 32), v30, (__int64)&v30[v167]);
                v31 = v169;
                *(_QWORD *)(v27 + 64) = v27 + 80;
                sub_1117B80((_QWORD *)(v27 + 64), v31, (__int64)&v31[v170]);
                v32 = v172[1];
                v33 = v172[0];
                *(_OWORD *)(v27 + 96) = 0;
                v140.m128i_i64[0] = (__int64)v32;
                v34 = v32 - v33;
                *(_QWORD *)(v27 + 112) = 0;
                v35 = (v32 - v33) >> 5;
                if ( v35 )
                {
                  if ( v35 <= 0x7FFFFFFFFFFFFFFLL )
                  {
                    v140.m128i_i64[1] = v34;
                    v36 = (_QWORD *)operator new(v34);
                    v33 = v172[0];
                    v34 = v140.m128i_u64[1];
                    v37 = v36;
                    v140.m128i_i64[0] = (__int64)v172[1];
                    goto LABEL_62;
                  }
LABEL_229:
                  std::__throw_bad_alloc();
                }
                v37 = nullptr;
LABEL_62:
                v140.m128i_i64[1] = (__int64)v37;
                v38 = _mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]);
                *(_QWORD *)(v27 + 112) = (char *)v37 + v34;
                *(__m128i *)(v27 + 96) = _mm_unpacklo_epi64(v38, v38);
                if ( (_BYTE *)v140.m128i_i64[0] == v33 )
                  goto LABEL_79;
                *v37 = v37 + 2;
                v39 = *(_BYTE **)v33;
                v40 = *((_QWORD *)v33 + 1);
                if ( v40 + *(_QWORD *)v33 && !v39 )
LABEL_46:
                  std::__throw_logic_error("basic_string::_M_construct null not valid");
                v41 = v5;
                v151 = v6;
                v42 = v37;
                v43 = v33;
                v152 = v13;
                v44 = v41;
                v45 = v40;
LABEL_66:
                if ( v45 > 0xF )
                  goto LABEL_73;
LABEL_67:
                v46 = (_BYTE *)*v42;
                if ( v45 == 1 )
                {
                  *v46 = *v39;
                  v46 = (_BYTE *)*v42;
                  goto LABEL_69;
                }
                if ( !v45 )
                  goto LABEL_69;
                while ( 1 )
                {
                  memcpy(v46, v39, v45);
                  v46 = (_BYTE *)*v42;
LABEL_69:
                  v42[1] = v45;
                  v43 += 32;
                  v42 += 4;
                  v46[v45] = 0;
                  if ( (_BYTE *)v140.m128i_i64[0] == v43 )
                  {
                    v47 = v44;
                    v6 = v151;
                    v37 = v42;
                    v13 = v152;
                    v5 = v47;
LABEL_79:
                    *(_QWORD *)(v27 + 104) = v37;
                    if ( v13 == v148 )
                    {
                      v140.m128i_i64[0] = v149 + 120;
                    }
                    else
                    {
                      v48 = (const __m128i *)((char *)v148 + 16);
                      v49 = (char *)v148 + 80;
                      v50 = (char *)v148 + 48;
                      v51 = (__m128i *)v149;
                      v52 = 8
                          * (0xEEEEEEEEEEEEEEF0LL
                           * ((unsigned __int64)((char *)&v13[-8].m128i_u64[1] - (_BYTE *)v148) >> 3)
                           - ((0xEEEEEEEEEEEEEEFLL
                             * ((unsigned __int64)((char *)&v13[-8].m128i_u64[1] - (_BYTE *)v148) >> 3))
                            & 0x1FFFFFFFFFFFFFFFLL));
                      v53 = (const __m128i *)((char *)v148 + v52 + 136);
                      do
                      {
                        v51->m128i_i64[0] = (__int64)v51[1].m128i_i64;
                        v61 = (const __m128i *)v48[-1].m128i_i64[0];
                        if ( v61 == v48 )
                        {
                          v51[1] = _mm_loadu_si128(v48);
                        }
                        else
                        {
                          v51->m128i_i64[0] = (__int64)v61;
                          v51[1].m128i_i64[0] = v48->m128i_i64[0];
                        }
                        v51->m128i_i64[1] = v48[-1].m128i_i64[1];
                        v48[-1].m128i_i64[0] = (__int64)v48;
                        v48[-1].m128i_i64[1] = 0;
                        v48->m128i_i8[0] = 0;
                        v51[2].m128i_i64[0] = (__int64)v51[3].m128i_i64;
                        v54 = (char *)v48[1].m128i_i64[0];
                        if ( v54 == v50 )
                        {
                          v51[3] = _mm_loadu_si128(v48 + 2);
                        }
                        else
                        {
                          v51[2].m128i_i64[0] = (__int64)v54;
                          v51[3].m128i_i64[0] = v48[2].m128i_i64[0];
                        }
                        v51[2].m128i_i64[1] = v48[1].m128i_i64[1];
                        v48[1].m128i_i64[0] = (__int64)v50;
                        v48[1].m128i_i64[1] = 0;
                        v48[2].m128i_i8[0] = 0;
                        v51[4].m128i_i64[0] = (__int64)v51[5].m128i_i64;
                        v55 = (char *)v48[3].m128i_i64[0];
                        if ( v55 == v49 )
                        {
                          v51[5] = _mm_loadu_si128(v48 + 4);
                        }
                        else
                        {
                          v51[4].m128i_i64[0] = (__int64)v55;
                          v51[5].m128i_i64[0] = v48[4].m128i_i64[0];
                        }
                        v56 = v48[3].m128i_i64[1];
                        v48 = (const __m128i *)((char *)v48 + 120);
                        v51 = (__m128i *)((char *)v51 + 120);
                        v50 += 120;
                        v51[-3].m128i_i64[0] = v56;
                        v48[-4].m128i_i8[8] = 0;
                        v48[-5].m128i_i64[1] = (__int64)v49;
                        v49 += 120;
                        v48[-4].m128i_i64[0] = 0;
                        *(__m128i *)((char *)&v51[-2] + 8) = 0;
                        v51[-1].m128i_i64[1] = 0;
                        v51[-2].m128i_i64[1] = v48[-3].m128i_i64[1];
                        v57 = v48[-2].m128i_i64[0];
                        v48[-3].m128i_i64[1] = 0;
                        v58 = v51[-1].m128i_i64[0];
                        v51[-1].m128i_i64[0] = v57;
                        v59 = v48[-2].m128i_i64[1];
                        v48[-2].m128i_i64[0] = v58;
                        v60 = v51[-1].m128i_i64[1];
                        v51[-1].m128i_i64[1] = v59;
                        v48[-2].m128i_i64[1] = v60;
                      }
                      while ( v53 != v48 );
                      v62 = (__m128i *)v148;
                      v140.m128i_i64[1] = (__int64)v5;
                      v140.m128i_i64[0] = v149 + v52 + 240;
                      do
                      {
                        while ( 1 )
                        {
                          v63 = (void **)v62[6].m128i_i64[1];
                          v64 = (void **)v62[6].m128i_i64[0];
                          if ( v63 != v64 )
                          {
                            do
                            {
                              while ( *v64 != v64 + 2 )
                              {
                                operator delete(*v64);
                                v64 += 4;
                                if ( v64 == v63 )
                                  goto LABEL_95;
                              }
                              v64 += 4;
                            }
                            while ( v63 != v64 );
LABEL_95:
                            v64 = (void **)v62[6].m128i_i64[0];
                          }
                          if ( v64 )
                            operator delete(v64);
                          v65 = (char *)v62[4].m128i_i64[0];
                          if ( v65 != (char *)&v62[5] )
                            operator delete(v65);
                          v66 = (char *)v62[2].m128i_i64[0];
                          if ( v66 != (char *)&v62[3] )
                            operator delete(v66);
                          if ( (__m128i *)v62->m128i_i64[0] == &v62[1] )
                            break;
                          operator delete((void *)v62->m128i_i64[0]);
                          v62 = (__m128i *)((char *)v62 + 120);
                          if ( v13 == v62 )
                            goto LABEL_104;
                        }
                        v62 = (__m128i *)((char *)v62 + 120);
                      }
                      while ( v13 != v62 );
LABEL_104:
                      v5 = (char **)v140.m128i_i64[1];
                    }
                    if ( v148 )
                      operator delete(v148);
                    v140.m128i_i64[1] = v149;
                    v67 = _mm_loadh_ps((const double *)v140.m128i_i64);
                    v156 = (void *)(v150 + v149);
                    *(__m128 *)v155 = v67;
LABEL_13:
                    v11 = v172[0];
                    goto LABEL_14;
                  }
                  *v42 = v42 + 2;
                  v39 = *(_BYTE **)v43;
                  v45 = *((_QWORD *)v43 + 1);
                  if ( !(v45 + *(_QWORD *)v43) )
                    goto LABEL_66;
                  if ( !v39 )
                    goto LABEL_46;
                  if ( v45 <= 0xF )
                    goto LABEL_67;
LABEL_73:
                  v140.m128i_i64[1] = (__int64)v39;
                  if ( (v45 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_228;
                  v46 = (_BYTE *)operator new(v45 + 1);
                  v42[2] = v45;
                  v39 = (_BYTE *)v140.m128i_i64[1];
                  *v42 = v46;
                }
              }
              v150 = 16 * v26;
            }
            else
            {
              v150 = 120;
            }
LABEL_58:
            v149 = operator new(v150);
            goto LABEL_59;
          }
          v14 = v155[1];
          *(_QWORD *)v155[1] = (char *)v155[1] + 16;
          sub_1117B80(v14, v163, (__int64)v163 + v164);
          v13[2].m128i_i64[0] = (__int64)v13[3].m128i_i64;
          sub_1117B80((__m128i *)v13[2].m128i_i64, v166, (__int64)v166 + v167);
          v13[4].m128i_i64[0] = (__int64)v13[5].m128i_i64;
          sub_1117B80((__m128i *)v13[4].m128i_i64, v169, (__int64)v169 + v170);
          v15 = (char *)v172[1] - (char *)v172[0];
          v16 = (char *)v172[1] - (char *)v172[0];
          v13[6] = 0;
          v17 = v16 >> 5;
          v13[7].m128i_i64[0] = 0;
          if ( v17 )
          {
            if ( v17 > 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_229;
            v18 = (_QWORD *)operator new(v15);
          }
          else
          {
            v18 = nullptr;
          }
          v140.m128i_i64[0] = (__int64)v18;
          v19 = _mm_loadl_epi64(&v140);
          v13[7].m128i_i64[0] = (__int64)v18 + v15;
          v13[6] = _mm_unpacklo_epi64(v19, v19);
          v11 = v172[0];
          v140.m128i_i64[0] = (__int64)v172[1];
          if ( v172[1] == v172[0] )
            goto LABEL_53;
          *v18 = v18 + 2;
          v20 = (_BYTE *)*v11;
          v21 = v11[1];
          if ( v21 + *v11 && !v20 )
            goto LABEL_46;
          v148 = v13;
          v22 = (char *)(v11 + 4);
          v23 = v18;
          while ( 1 )
          {
            if ( (unsigned __int64)v21 > 0xF )
            {
              v140.m128i_i64[1] = (__int64)v20;
              if ( v21 < 0 )
                goto LABEL_228;
              v24 = (_BYTE *)operator new(v21 + 1);
              v23[2] = v21;
              v20 = (_BYTE *)v140.m128i_i64[1];
              *v23 = v24;
LABEL_51:
              memcpy(v24, v20, v21);
              v24 = (_BYTE *)*v23;
              goto LABEL_43;
            }
            v24 = (_BYTE *)*v23;
            if ( v21 == 1 )
            {
              *v24 = *v20;
              v24 = (_BYTE *)*v23;
              goto LABEL_43;
            }
            if ( v21 )
              goto LABEL_51;
LABEL_43:
            v23[1] = v21;
            v23 += 4;
            v24[v21] = 0;
            if ( v22 == (char *)v140.m128i_i64[0] )
              break;
            v22 += 32;
            *v23 = v23 + 2;
            v20 = *((_BYTE **)v22 - 4);
            v21 = *((_QWORD *)v22 - 3);
            if ( &v20[v21] && !v20 )
              goto LABEL_46;
          }
          v18 = v23;
          v13 = (__m128i *)v148;
          v11 = v172[0];
LABEL_53:
          v13[6].m128i_i64[1] = (__int64)v18;
          v155[1] = (char *)v155[1] + 120;
LABEL_14:
          v12 = v172[1];
          if ( v11 != v172[1] )
          {
            do
            {
              while ( (_QWORD *)*v11 != v11 + 2 )
              {
                operator delete((void *)*v11);
                v11 += 4;
                if ( v11 == v12 )
                  goto LABEL_17;
              }
              v11 += 4;
            }
            while ( v12 != v11 );
LABEL_17:
            v12 = v172[0];
          }
          if ( v12 )
            operator delete(v12);
          if ( v169 != v171 )
            operator delete(v169);
          if ( v166 != v168 )
            operator delete(v166);
          if ( v163 == v165 )
            break;
          operator delete(v163);
          v5 += 15;
          if ( (char **)v141 == v5 )
            goto LABEL_26;
        }
        v5 += 15;
        if ( (char **)v141 != v5 )
          goto LABEL_6;
LABEL_26:
        v147 += 15;
        if ( v147 == v153 )
          break;
        v5 = (char **)*v154;
        v141 = v154[1];
      }
    }
    sub_11192D0(v154, (__int64 *)v155);
    v68 = (char *)v155[1];
    v69 = (char *)v155[0];
    goto LABEL_116;
  }
  if ( a2 == &a2[15 * a3] )
    return v154;
  v75 = v4;
  v137.m128i_i64[0] = a1[2];
  v76 = 0xEEEEEEEEEEEEEEEFLL * (v137.m128i_i64[1] >> 3);
  if ( v76 > 0xEEEEEEEEEEEEEEEFLL * ((v137.m128i_i64[0] - (__int64)v4) >> 3) )
  {
    if ( v76 > 0x222222222222222LL )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v76 )
    {
      v138.m128i_i64[1] = operator new(v137.m128i_u64[1]);
      v122 = *v154;
      if ( v141 == *v154 )
      {
        v84 = v138.m128i_i64[1];
      }
      else
      {
        v123 = (const __m128i *)(v122 + 16);
        v124 = v122 + 80;
        v125 = v122 + 48;
        v126 = (0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(v141 - 120 - v122) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
        v127 = v122 + 8 * (0xEEEEEEEEEEEEEEF0LL * ((unsigned __int64)(v141 - 120 - v122) >> 3) - v126) + 136;
        v128 = (__m128i *)v138.m128i_i64[1];
        do
        {
          v128->m128i_i64[0] = (__int64)v128[1].m128i_i64;
          v136 = (const __m128i *)v123[-1].m128i_i64[0];
          if ( v136 == v123 )
          {
            v128[1] = _mm_loadu_si128(v123);
          }
          else
          {
            v128->m128i_i64[0] = (__int64)v136;
            v128[1].m128i_i64[0] = v123->m128i_i64[0];
          }
          v128->m128i_i64[1] = v123[-1].m128i_i64[1];
          v123[-1].m128i_i64[0] = (__int64)v123;
          v123[-1].m128i_i64[1] = 0;
          v123->m128i_i8[0] = 0;
          v128[2].m128i_i64[0] = (__int64)v128[3].m128i_i64;
          v129 = v123[1].m128i_i64[0];
          if ( v129 == v125 )
          {
            v128[3] = _mm_loadu_si128(v123 + 2);
          }
          else
          {
            v128[2].m128i_i64[0] = v129;
            v128[3].m128i_i64[0] = v123[2].m128i_i64[0];
          }
          v128[2].m128i_i64[1] = v123[1].m128i_i64[1];
          v123[1].m128i_i64[0] = v125;
          v123[1].m128i_i64[1] = 0;
          v123[2].m128i_i8[0] = 0;
          v128[4].m128i_i64[0] = (__int64)v128[5].m128i_i64;
          v130 = v123[3].m128i_i64[0];
          if ( v130 == v124 )
          {
            v128[5] = _mm_loadu_si128(v123 + 4);
          }
          else
          {
            v128[4].m128i_i64[0] = v130;
            v128[5].m128i_i64[0] = v123[4].m128i_i64[0];
          }
          v131 = v123[3].m128i_i64[1];
          v123 = (const __m128i *)((char *)v123 + 120);
          v128 = (__m128i *)((char *)v128 + 120);
          v125 += 120;
          v128[-3].m128i_i64[0] = v131;
          v123[-4].m128i_i8[8] = 0;
          v123[-5].m128i_i64[1] = v124;
          v124 += 120;
          v123[-4].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v128[-2] + 8) = 0;
          v128[-1].m128i_i64[1] = 0;
          v128[-2].m128i_i64[1] = v123[-3].m128i_i64[1];
          v132 = v123[-2].m128i_i64[0];
          v123[-3].m128i_i64[1] = 0;
          v133 = v128[-1].m128i_i64[0];
          v128[-1].m128i_i64[0] = v132;
          v134 = v123[-2].m128i_i64[1];
          v123[-2].m128i_i64[0] = v133;
          v135 = v128[-1].m128i_i64[1];
          v128[-1].m128i_i64[1] = v134;
          v123[-2].m128i_i64[1] = v135;
        }
        while ( (const __m128i *)v127 != v123 );
        v84 = v138.m128i_i64[1] + 120 * (v126 + 1);
      }
    }
    else
    {
      v138.m128i_i64[1] = 0;
      v84 = 0;
    }
    while ( 1 )
    {
      v85 = *v3;
      v86 = v3[1];
      *(_QWORD *)v84 = v84 + 16;
      sub_1117B80((_QWORD *)v84, v85, (__int64)&v86[(_QWORD)v85]);
      v87 = v3[4];
      v88 = v3[5];
      *(_QWORD *)(v84 + 32) = v84 + 48;
      sub_1117B80((_QWORD *)(v84 + 32), v87, (__int64)&v88[(_QWORD)v87]);
      v89 = v3[8];
      v90 = v3[9];
      *(_QWORD *)(v84 + 64) = v84 + 80;
      sub_1117B80((_QWORD *)(v84 + 64), v89, (__int64)&v90[(_QWORD)v89]);
      v91 = (__int64)v3[13];
      v92 = v3[12];
      *(_OWORD *)(v84 + 96) = 0;
      v137.m128i_i64[0] = v91;
      v93 = v91 - (_QWORD)v92;
      *(_QWORD *)(v84 + 112) = 0;
      v94 = (v91 - (__int64)v92) >> 5;
      if ( v94 )
      {
        if ( v94 > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_229;
        v95 = (_QWORD *)operator new(v93);
        v92 = v3[12];
        v96 = v95;
        v137.m128i_i64[0] = (__int64)v3[13];
      }
      else
      {
        v96 = nullptr;
      }
      v138.m128i_i64[0] = (__int64)v96;
      v97 = _mm_loadl_epi64(&v138);
      *(_QWORD *)(v84 + 112) = (char *)v96 + v93;
      *(__m128i *)(v84 + 96) = _mm_unpacklo_epi64(v97, v97);
      if ( v92 != (char *)v137.m128i_i64[0] )
        break;
LABEL_179:
      *(_QWORD *)(v84 + 104) = v96;
      v3 += 15;
      v84 += 120;
      if ( v3 == v153 )
      {
        v101 = (char **)v154[1];
        if ( (char **)v141 != v101 )
        {
          v102 = (const __m128i *)(v141 + 16);
          v103 = v141 + 80;
          v104 = v141 + 48;
          v105 = (0xEEEEEEEEEEEEEEFLL * (((unsigned __int64)v101 - v141 - 120) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
          v106 = v141 + 8 * (0xEEEEEEEEEEEEEEF0LL * (((unsigned __int64)v101 - v141 - 120) >> 3) - v105) + 136;
          v107 = (__m128i *)v84;
          do
          {
            v107->m128i_i64[0] = (__int64)v107[1].m128i_i64;
            v115 = (const __m128i *)v102[-1].m128i_i64[0];
            if ( v115 == v102 )
            {
              v107[1] = _mm_loadu_si128(v102);
            }
            else
            {
              v107->m128i_i64[0] = (__int64)v115;
              v107[1].m128i_i64[0] = v102->m128i_i64[0];
            }
            v107->m128i_i64[1] = v102[-1].m128i_i64[1];
            v102[-1].m128i_i64[0] = (__int64)v102;
            v102[-1].m128i_i64[1] = 0;
            v102->m128i_i8[0] = 0;
            v107[2].m128i_i64[0] = (__int64)v107[3].m128i_i64;
            v108 = v102[1].m128i_i64[0];
            if ( v108 == v104 )
            {
              v107[3] = _mm_loadu_si128(v102 + 2);
            }
            else
            {
              v107[2].m128i_i64[0] = v108;
              v107[3].m128i_i64[0] = v102[2].m128i_i64[0];
            }
            v107[2].m128i_i64[1] = v102[1].m128i_i64[1];
            v102[1].m128i_i64[0] = v104;
            v102[1].m128i_i64[1] = 0;
            v102[2].m128i_i8[0] = 0;
            v107[4].m128i_i64[0] = (__int64)v107[5].m128i_i64;
            v109 = v102[3].m128i_i64[0];
            if ( v109 == v103 )
            {
              v107[5] = _mm_loadu_si128(v102 + 4);
            }
            else
            {
              v107[4].m128i_i64[0] = v109;
              v107[5].m128i_i64[0] = v102[4].m128i_i64[0];
            }
            v110 = v102[3].m128i_i64[1];
            v102 = (const __m128i *)((char *)v102 + 120);
            v107 = (__m128i *)((char *)v107 + 120);
            v104 += 120;
            v107[-3].m128i_i64[0] = v110;
            v102[-4].m128i_i8[8] = 0;
            v102[-5].m128i_i64[1] = v103;
            v103 += 120;
            v102[-4].m128i_i64[0] = 0;
            *(__m128i *)((char *)&v107[-2] + 8) = 0;
            v107[-1].m128i_i64[1] = 0;
            v107[-2].m128i_i64[1] = v102[-3].m128i_i64[1];
            v111 = v102[-2].m128i_i64[0];
            v102[-3].m128i_i64[1] = 0;
            v112 = v107[-1].m128i_i64[0];
            v107[-1].m128i_i64[0] = v111;
            v113 = v102[-2].m128i_i64[1];
            v102[-2].m128i_i64[0] = v112;
            v114 = v107[-1].m128i_i64[1];
            v107[-1].m128i_i64[1] = v113;
            v102[-2].m128i_i64[1] = v114;
          }
          while ( (const __m128i *)v106 != v102 );
          v84 += 120 * (v105 + 1);
          v101 = (char **)v154[1];
        }
        v116 = *v154;
        if ( (char **)*v154 != v101 )
        {
          do
          {
            while ( 1 )
            {
              v117 = *(void ***)(v116 + 104);
              v118 = *(void ***)(v116 + 96);
              if ( v117 != v118 )
              {
                do
                {
                  while ( *v118 != v118 + 2 )
                  {
                    operator delete(*v118);
                    v118 += 4;
                    if ( v117 == v118 )
                      goto LABEL_198;
                  }
                  v118 += 4;
                }
                while ( v117 != v118 );
LABEL_198:
                v118 = *(void ***)(v116 + 96);
              }
              if ( v118 )
                operator delete(v118);
              v119 = *(void **)(v116 + 64);
              if ( v119 != (void *)(v116 + 80) )
                operator delete(v119);
              v120 = *(void **)(v116 + 32);
              if ( v120 != (void *)(v116 + 48) )
                operator delete(v120);
              if ( *(_QWORD *)v116 == v116 + 16 )
                break;
              operator delete(*(void **)v116);
              v116 += 120;
              if ( v101 == (char **)v116 )
                goto LABEL_207;
            }
            v116 += 120;
          }
          while ( (char **)v116 != v101 );
LABEL_207:
          v101 = (char **)*v154;
        }
        if ( v101 )
          operator delete(v101);
        v121 = (__m128 *)v154;
        v68 = (char *)v155[1];
        v137.m128i_i64[0] = v84;
        v154[2] = v137.m128i_i64[1] + v138.m128i_i64[1];
        v69 = (char *)v155[0];
        *v121 = _mm_loadh_ps((const double *)v137.m128i_i64);
        goto LABEL_116;
      }
    }
    while ( 1 )
    {
      *v96 = v96 + 2;
      v99 = *(_BYTE **)v92;
      v100 = *((_QWORD *)v92 + 1);
      if ( v100 + *(_QWORD *)v92 && !v99 )
        goto LABEL_46;
      if ( (unsigned __int64)v100 > 0xF )
        break;
      v98 = (_BYTE *)*v96;
      if ( v100 == 1 )
      {
        *v98 = *v99;
        v98 = (_BYTE *)*v96;
      }
      else if ( v100 )
      {
        goto LABEL_176;
      }
LABEL_170:
      v96[1] = v100;
      v92 += 32;
      v96 += 4;
      v98[v100] = 0;
      if ( v92 == (char *)v137.m128i_i64[0] )
        goto LABEL_179;
    }
    if ( v100 < 0 )
LABEL_228:
      std::__throw_length_error("basic_string::_M_create");
    v98 = (_BYTE *)operator new(v100 + 1);
    v96[2] = v100;
    *v96 = v98;
LABEL_176:
    memcpy(v98, v99, v100);
    v98 = (_BYTE *)*v96;
    goto LABEL_170;
  }
  do
  {
    *v75 = (char *)(v75 + 2);
    sub_1117B80(v75, *v3, (__int64)&v3[1][(_QWORD)*v3]);
    v75[4] = (char *)(v75 + 6);
    sub_1117B80(v75 + 4, v3[4], (__int64)&v3[5][(_QWORD)v3[4]]);
    v75[8] = (char *)(v75 + 10);
    sub_1117B80(v75 + 8, v3[8], (__int64)&v3[9][(_QWORD)v3[8]]);
    v77 = v3[13] - v3[12];
    *((_OWORD *)v75 + 6) = 0;
    v75[14] = nullptr;
    if ( v77 >> 5 )
    {
      if ( (unsigned __int64)(v77 >> 5) > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_229;
      v78 = (char *)operator new(v77);
    }
    else
    {
      v78 = nullptr;
    }
    v137.m128i_i64[0] = (__int64)v78;
    v79 = _mm_loadl_epi64(&v137);
    v75[14] = &v78[v77];
    *((__m128i *)v75 + 6) = _mm_unpacklo_epi64(v79, v79);
    v80 = v3[12];
    v137.m128i_i64[0] = (__int64)v3[13];
    if ( (char *)v137.m128i_i64[0] != v80 )
    {
      while ( 1 )
      {
        *(_QWORD *)v78 = v78 + 16;
        v82 = *(_BYTE **)v80;
        v83 = *((_QWORD *)v80 + 1);
        if ( v83 + *(_QWORD *)v80 && !v82 )
          goto LABEL_46;
        if ( (unsigned __int64)v83 > 0xF )
          break;
        v81 = *(_BYTE **)v78;
        if ( v83 == 1 )
        {
          *v81 = *v82;
          v81 = *(_BYTE **)v78;
        }
        else if ( v83 )
        {
          goto LABEL_157;
        }
LABEL_148:
        *((_QWORD *)v78 + 1) = v83;
        v80 += 32;
        v78 += 32;
        v81[v83] = 0;
        if ( (char *)v137.m128i_i64[0] == v80 )
          goto LABEL_158;
      }
      if ( v83 < 0 )
        goto LABEL_228;
      v81 = (_BYTE *)operator new(v83 + 1);
      *((_QWORD *)v78 + 2) = v83;
      *(_QWORD *)v78 = v81;
LABEL_157:
      memcpy(v81, v82, v83);
      v81 = *(_BYTE **)v78;
      goto LABEL_148;
    }
LABEL_158:
    v75[13] = v78;
    v3 += 15;
    v75 += 15;
  }
  while ( v3 != v153 );
  v68 = (char *)v155[1];
  v69 = (char *)v155[0];
  v154[1] += v137.m128i_i64[1];
LABEL_116:
  if ( v68 != v69 )
  {
    do
    {
      while ( 1 )
      {
        v70 = *((void ***)v69 + 13);
        v71 = *((void ***)v69 + 12);
        if ( v70 != v71 )
        {
          do
          {
            while ( *v71 != v71 + 2 )
            {
              operator delete(*v71);
              v71 += 4;
              if ( v70 == v71 )
                goto LABEL_120;
            }
            v71 += 4;
          }
          while ( v70 != v71 );
LABEL_120:
          v71 = *((void ***)v69 + 12);
        }
        if ( v71 )
          operator delete(v71);
        v72 = *((char **)v69 + 8);
        if ( v72 != v69 + 80 )
          operator delete(v72);
        v73 = *((char **)v69 + 4);
        if ( v73 != v69 + 48 )
          operator delete(v73);
        if ( *(char **)v69 == v69 + 16 )
          break;
        operator delete(*(void **)v69);
        v69 += 120;
        if ( v68 == v69 )
          goto LABEL_129;
      }
      v69 += 120;
    }
    while ( v68 != v69 );
LABEL_129:
    v69 = (char *)v155[0];
  }
  if ( v69 )
    operator delete(v69);
  return v154;
}
