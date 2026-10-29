__int64 __fastcall sub_1398530(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  int v5; // r13d
  int v6; // ecx
  int v7; // ebx
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 result; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  __int64 v13; // rbx
  __int64 v14; // r14
  char v15; // dl
  __int64 v16; // rbp
  unsigned __int64 *v17; // r12
  __int64 v18; // r13
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  _QWORD *v21; // r14
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  const __m128i *v28; // rax
  __m128 v29; // xmm0
  __m128 v30; // xmm4
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  __m128i v34; // xmm2
  __m128i v35; // xmm0
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm1
  __m128i v39; // xmm3
  unsigned __int64 v40; // rdx
  unsigned __int64 *v41; // rax
  _BYTE *v42; // rcx
  unsigned int v43; // r12d
  unsigned int v44; // r13d
  _QWORD *v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rbp
  __int64 v49; // r14
  __int64 (__fastcall *v50)(__int64); // rax
  _QWORD *v51; // r13
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // ebp
  unsigned int v56; // ecx
  unsigned int v57; // r13d
  unsigned int v58; // r15d
  unsigned int v59; // r8d
  unsigned int v60; // ebp
  int v61; // edx
  int v62; // edx
  _QWORD *v63; // r9
  __int64 v64; // rcx
  unsigned __int64 v65; // r13
  unsigned int v66; // r12d
  int v67; // ecx
  unsigned int v68; // ebp
  unsigned int v69; // ecx
  int v70; // ebp
  _QWORD *v71; // r12
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // edx
  int v75; // r11d
  unsigned int v76; // r14d
  char v77; // cl
  char v78; // di
  unsigned int v79; // r9d
  unsigned __int64 v80; // rax
  unsigned int v81; // ebp
  unsigned int v82; // edx
  int v83; // r10d
  int v84; // edx
  unsigned int v85; // r12d
  char v86; // cl
  unsigned int v87; // r12d
  _QWORD *v88; // r14
  __int64 v89; // rcx
  unsigned int v90; // ecx
  int v91; // ebp
  __int64 v92; // r15
  unsigned int v93; // r14d
  unsigned int v94; // ebp
  int v95; // ecx
  unsigned int v96; // r12d
  unsigned int v97; // ecx
  int v98; // r12d
  char v99; // dl
  __int64 v100; // rsi
  int v101; // r8d
  unsigned int v102; // r12d
  char v103; // cl
  unsigned int v104; // r9d
  unsigned __int64 v105; // r11
  unsigned int v106; // ebp
  unsigned int v107; // edx
  int v108; // eax
  int v109; // r10d
  int v110; // edx
  unsigned int v111; // r12d
  char v112; // cl
  unsigned int v113; // r12d
  _QWORD *v114; // r15
  __int64 v115; // rcx
  _QWORD *v116; // r13
  __int64 v117; // rcx
  int v118; // edx
  unsigned int v119; // ebp
  _QWORD *v120; // r12
  __int64 v121; // rax
  int v122; // eax
  unsigned int v123; // edx
  _QWORD *v124; // r14
  int v125; // r15d
  __int64 v126; // rax
  char v127; // cl
  unsigned int v128; // edx
  int v129; // ebp
  __int64 v130; // rax
  _QWORD *v131; // r12
  __int64 v132; // rax
  int v133; // eax
  unsigned int v134; // edx
  unsigned int v135; // r13d
  unsigned int v136; // r14d
  int v137; // ebp
  unsigned int v138; // r13d
  unsigned int v139; // edx
  int v140; // r10d
  int v141; // edx
  unsigned int v142; // ebp
  char v143; // cl
  unsigned int v144; // ebp
  _QWORD *v145; // r12
  __int64 v146; // rcx
  __int64 *v147; // [rsp+0h] [rbp-98h]
  int v148; // [rsp+8h] [rbp-90h]
  unsigned int v150; // [rsp+18h] [rbp-80h]
  unsigned int v151; // [rsp+18h] [rbp-80h]
  int v152; // [rsp+18h] [rbp-80h]
  unsigned int v153; // [rsp+18h] [rbp-80h]
  unsigned int v154; // [rsp+18h] [rbp-80h]
  unsigned int v156; // [rsp+28h] [rbp-70h]
  _QWORD *v157; // [rsp+28h] [rbp-70h]
  unsigned int v158; // [rsp+28h] [rbp-70h]
  unsigned int v159; // [rsp+28h] [rbp-70h]
  __int64 v160; // [rsp+28h] [rbp-70h]
  __int64 v161; // [rsp+28h] [rbp-70h]
  unsigned int v162; // [rsp+28h] [rbp-70h]
  __int64 v163; // [rsp+28h] [rbp-70h]
  unsigned int v164; // [rsp+28h] [rbp-70h]
  unsigned int v165; // [rsp+28h] [rbp-70h]
  unsigned int v166; // [rsp+28h] [rbp-70h]
  unsigned int v167; // [rsp+28h] [rbp-70h]
  unsigned int v168; // [rsp+28h] [rbp-70h]
  unsigned int v169; // [rsp+30h] [rbp-68h]
  int v170; // [rsp+30h] [rbp-68h]
  int v171; // [rsp+30h] [rbp-68h]
  __int64 v172; // [rsp+30h] [rbp-68h]
  unsigned int v173; // [rsp+30h] [rbp-68h]
  unsigned int v174; // [rsp+30h] [rbp-68h]
  __int64 v175; // [rsp+30h] [rbp-68h]
  int v176; // [rsp+30h] [rbp-68h]
  unsigned int v177; // [rsp+30h] [rbp-68h]
  int v178; // [rsp+3Ch] [rbp-5Ch]
  int v179; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v180; // [rsp+3Ch] [rbp-5Ch]
  int v181; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 v182; // [rsp+40h] [rbp-58h]
  int v183; // [rsp+40h] [rbp-58h]
  unsigned int v184; // [rsp+40h] [rbp-58h]
  unsigned int v185; // [rsp+48h] [rbp-50h]
  unsigned __int64 v186; // [rsp+48h] [rbp-50h]
  unsigned int v187; // [rsp+48h] [rbp-50h]
  __int64 v188; // [rsp+50h] [rbp-48h]
  unsigned int v189; // [rsp+58h] [rbp-40h]
  unsigned int v190; // [rsp+58h] [rbp-40h]

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = a2 << v6;
  v8 = v5 + v6;
  v9 = *(_DWORD *)(a1 + 52) | v7;
  v147 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  *(_DWORD *)(a1 + 52) = v9;
  if ( v8 > 0x1F )
  {
    v71 = *(_QWORD **)(a1 + 24);
    v72 = v71[1];
    if ( (unsigned __int64)(v72 + 4) > v71[2] )
    {
      sub_2236E10(v71, v71 + 3, v72 + 4, 1);
      v72 = v71[1];
      v4 = a1;
    }
    *(_DWORD *)(*v71 + v72) = v9;
    v73 = *(_DWORD *)(v4 + 48);
    v74 = 0;
    v71[1] += 4LL;
    if ( v73 )
      v74 = a2 >> (32 - v73);
    *(_DWORD *)(v4 + 52) = v74;
    *(_DWORD *)(v4 + 48) = ((_BYTE)v5 + (_BYTE)v73) & 0x1F;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v8;
  }
  result = *((unsigned int *)v147 + 2);
  v148 = result;
  if ( (_DWORD)result )
  {
    v11 = 0;
    v12 = 0;
    v13 = v4;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = *v147;
        result = *v147 + 16LL * v11;
        if ( (*(_BYTE *)(result + 8) & 1) != 0 )
          goto LABEL_52;
        v15 = (*(_BYTE *)(result + 8) >> 1) & 7;
        if ( v15 == 3 )
          break;
        v16 = 8LL * v12;
        v17 = (unsigned __int64 *)(a3 + v16);
        if ( v15 != 5 )
        {
          v65 = *v17;
          if ( v15 == 2 )
          {
            result = *(_QWORD *)result;
            v152 = result;
            if ( result )
            {
              v75 = result;
              v76 = *v17;
              v77 = result - 1;
              v78 = result - 1;
              v79 = 1 << (result - 1);
              if ( v65 == (unsigned int)v65 )
              {
                if ( v79 <= (unsigned int)v65 )
                {
                  v187 = v12;
                  v138 = *(_DWORD *)(v13 + 52);
                  v139 = *(_DWORD *)(v13 + 48);
                  v184 = v11;
                  v140 = ~(-1 << v78);
                  do
                  {
                    v143 = v139;
                    v139 += v75;
                    v144 = v79 | v140 & v76;
                    v138 |= v144 << v143;
                    *(_DWORD *)(v13 + 52) = v138;
                    if ( v139 > 0x1F )
                    {
                      v145 = *(_QWORD **)(v13 + 24);
                      v146 = v145[1];
                      if ( (unsigned __int64)(v146 + 4) > v145[2] )
                      {
                        v181 = v140;
                        v176 = v75;
                        v167 = v79;
                        sub_2236E10(*(_QWORD *)(v13 + 24), v145 + 3, v146 + 4, 1);
                        v146 = v145[1];
                        v140 = v181;
                        v75 = v176;
                        v79 = v167;
                      }
                      *(_DWORD *)(*v145 + v146) = v138;
                      v141 = *(_DWORD *)(v13 + 48);
                      v138 = 0;
                      v145[1] += 4LL;
                      v142 = v144 >> (32 - v141);
                      if ( v141 )
                        v138 = v142;
                      v139 = ((_BYTE)v75 + (_BYTE)v141) & 0x1F;
                      *(_DWORD *)(v13 + 52) = v138;
                    }
                    *(_DWORD *)(v13 + 48) = v139;
                    v76 >>= v78;
                  }
                  while ( v79 <= v76 );
                  v11 = v184;
                  v12 = v187;
                }
                v177 = v12;
                v168 = v11;
                result = sub_A1FEC0(v13, v76, v152);
                v11 = v168;
                v12 = v177;
              }
              else
              {
                v80 = v79;
                v81 = *(_DWORD *)(v13 + 52);
                v82 = *(_DWORD *)(v13 + 48);
                if ( v65 >= v79 )
                {
                  v189 = v12;
                  v185 = v11;
                  v83 = ~(-1 << v77);
                  do
                  {
                    v86 = v82;
                    v82 += v75;
                    v87 = v79 | v65 & v83;
                    v81 |= v87 << v86;
                    *(_DWORD *)(v13 + 52) = v81;
                    if ( v82 > 0x1F )
                    {
                      v88 = *(_QWORD **)(v13 + 24);
                      v89 = v88[1];
                      if ( (unsigned __int64)(v89 + 4) > v88[2] )
                      {
                        v182 = v80;
                        v178 = v83;
                        v170 = v75;
                        v159 = v79;
                        sub_2236E10(*(_QWORD *)(v13 + 24), v88 + 3, v89 + 4, 1);
                        v89 = v88[1];
                        v80 = v182;
                        v83 = v178;
                        v75 = v170;
                        v79 = v159;
                      }
                      *(_DWORD *)(*v88 + v89) = v81;
                      v84 = *(_DWORD *)(v13 + 48);
                      v81 = 0;
                      v88[1] += 4LL;
                      v85 = v87 >> (32 - v84);
                      if ( v84 )
                        v81 = v85;
                      v82 = ((_BYTE)v75 + (_BYTE)v84) & 0x1F;
                      *(_DWORD *)(v13 + 52) = v81;
                    }
                    *(_DWORD *)(v13 + 48) = v82;
                    v65 >>= v78;
                  }
                  while ( v65 >= v80 );
                  v11 = v185;
                  v12 = v189;
                  v76 = v65;
                }
                v127 = v82;
                v128 = v152 + v82;
                result = v76 << v127;
                v129 = result | v81;
                *(_DWORD *)(v13 + 52) = v129;
                if ( v128 > 0x1F )
                {
                  v131 = *(_QWORD **)(v13 + 24);
                  v132 = v131[1];
                  if ( (unsigned __int64)(v132 + 4) > v131[2] )
                  {
                    v174 = v12;
                    v166 = v11;
                    sub_2236E10(*(_QWORD *)(v13 + 24), v131 + 3, v132 + 4, 1);
                    v132 = v131[1];
                    v12 = v174;
                    v11 = v166;
                  }
                  *(_DWORD *)(*v131 + v132) = v129;
                  v133 = *(_DWORD *)(v13 + 48);
                  v134 = 0;
                  v131[1] += 4LL;
                  if ( v133 )
                    v134 = v76 >> (32 - v133);
                  *(_DWORD *)(v13 + 52) = v134;
                  result = ((_BYTE)v152 + (_BYTE)v133) & 0x1F;
                  *(_DWORD *)(v13 + 48) = result;
                }
                else
                {
                  *(_DWORD *)(v13 + 48) = v128;
                }
              }
            }
          }
          else if ( v15 == 4 )
          {
            result = (unsigned int)(v65 - 97);
            if ( (unsigned __int8)(v65 - 97) <= 0x19u )
            {
              v66 = (char)v65 - 97;
            }
            else if ( (unsigned __int8)(v65 - 65) <= 0x19u )
            {
              v66 = (char)v65 - 39;
            }
            else
            {
              result = (unsigned int)(v65 - 48);
              v66 = (char)v65 + 4;
              if ( (unsigned __int8)(v65 - 48) > 9u )
                v66 = ((_BYTE)v65 != 46) + 62;
            }
            v67 = *(_DWORD *)(v13 + 48);
            v68 = v66 << v67;
            v69 = v67 + 6;
            v70 = *(_DWORD *)(v13 + 52) | v68;
            *(_DWORD *)(v13 + 52) = v70;
            if ( v69 > 0x1F )
            {
              v51 = *(_QWORD **)(v13 + 24);
              v52 = v51[1];
              if ( (unsigned __int64)(v52 + 4) > v51[2] )
              {
                v165 = v12;
                v154 = v11;
                sub_2236E10(*(_QWORD *)(v13 + 24), v51 + 3, v52 + 4, 1);
                v52 = v51[1];
                v12 = v165;
                v11 = v154;
              }
              *(_DWORD *)(*v51 + v52) = v70;
              v53 = *(_DWORD *)(v13 + 48);
              v54 = 0;
              v51[1] += 4LL;
              if ( v53 )
                v54 = v66 >> (32 - v53);
              *(_DWORD *)(v13 + 52) = v54;
              result = ((_BYTE)v53 + 6) & 0x1F;
              *(_DWORD *)(v13 + 48) = result;
            }
            else
            {
              *(_DWORD *)(v13 + 48) = v69;
            }
          }
          else
          {
LABEL_72:
            if ( *(_QWORD *)result )
            {
              v158 = v12;
              v151 = v11;
              result = sub_A1FEC0(v13, v65, *(_QWORD *)result);
              v11 = v151;
              v12 = v158;
            }
          }
LABEL_52:
          ++v12;
          goto LABEL_53;
        }
        v156 = v12;
        v150 = v11;
        v18 = a4 - v12;
        sub_1397670(v13, a4 - v12);
        v19 = v150;
        v20 = v156;
        if ( *(_DWORD *)(v13 + 48) )
        {
          v124 = *(_QWORD **)(v13 + 24);
          v125 = *(_DWORD *)(v13 + 52);
          v126 = v124[1];
          if ( (unsigned __int64)(v126 + 4) > v124[2] )
          {
            sub_2236E10(*(_QWORD *)(v13 + 24), v124 + 3, v126 + 4, 1);
            v126 = v124[1];
            v20 = v156;
            v19 = v150;
          }
          *(_DWORD *)(*v124 + v126) = v125;
          v124[1] += 4LL;
          *(_QWORD *)(v13 + 48) = 0;
        }
        v21 = *(_QWORD **)(v13 + 24);
        v22 = 8 * v18;
        v23 = v21[1];
        v24 = v22 >> 3;
        v25 = (v22 >> 3) + v23;
        if ( v25 > v21[2] )
        {
          v164 = v20;
          v153 = v19;
          sub_2236E10(*(_QWORD *)(v13 + 24), v21 + 3, v25, 1);
          v23 = v21[1];
          v20 = v164;
          v19 = v153;
          v25 = v24 + v23;
        }
        v26 = *v21 + v23;
        if ( v22 > 0 )
        {
          if ( ((unsigned __int64)v17 >= *v21 + v25 || v26 >= a3 + v22 + v16) && v22 > 120 )
          {
            v27 = v26;
            v28 = (const __m128i *)(a3 + v16);
            do
            {
              v29 = (__m128)_mm_loadu_si128(v28);
              v30 = (__m128)_mm_loadu_si128(v28 + 1);
              v27 += 16LL;
              v28 += 8;
              v31 = (__m128i)_mm_shuffle_ps(v29, v30, 136);
              v32 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v28 - 6), (__m128)_mm_loadu_si128(v28 - 5), 136);
              v33 = _mm_unpacklo_epi16(v31, v32);
              v34 = _mm_unpackhi_epi16(v31, v32);
              v35 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v33, v34), _mm_unpackhi_epi16(v33, v34));
              v36 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v28 - 2), (__m128)_mm_loadu_si128(v28 - 1), 136);
              v37 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v28 - 4), (__m128)_mm_loadu_si128(v28 - 3), 136);
              v38 = _mm_unpacklo_epi16(v37, v36);
              v39 = _mm_unpackhi_epi16(v37, v36);
              *(__m128i *)(v27 - 16) = _mm_packus_epi16(
                                         _mm_and_si128(v35, (__m128i)xmmword_23A8D80),
                                         _mm_and_si128(
                                           _mm_unpacklo_epi16(
                                             _mm_unpacklo_epi16(v38, v39),
                                             _mm_unpackhi_epi16(v38, v39)),
                                           (__m128i)xmmword_23A8D80));
            }
            while ( v26 + (v24 & 0xFFFFFFFFFFFFFFF0LL) != v27 );
            v40 = v24 - (v24 & 0xFFFFFFFFFFFFFFF0LL);
            v41 = &v17[v24 & 0xFFFFFFFFFFFFFFF0LL];
            v42 = (_BYTE *)((v24 & 0xFFFFFFFFFFFFFFF0LL) + v26);
            if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != v24 )
            {
              *v42 = *v41;
              if ( v40 != 1 )
              {
                v42[1] = v41[1];
                if ( v40 != 2 )
                {
                  v42[2] = v41[2];
                  if ( v40 != 3 )
                  {
                    v42[3] = v41[3];
                    if ( v40 != 4 )
                    {
                      v42[4] = v41[4];
                      if ( v40 != 5 )
                      {
                        v42[5] = v41[5];
                        if ( v40 != 6 )
                        {
                          v42[6] = v41[6];
                          if ( v40 != 7 )
                          {
                            v42[7] = v41[7];
                            if ( v40 != 8 )
                            {
                              v42[8] = v41[8];
                              if ( v40 != 9 )
                              {
                                v42[9] = v41[9];
                                if ( v40 != 10 )
                                {
                                  v42[10] = v41[10];
                                  if ( v40 != 11 )
                                  {
                                    v42[11] = v41[11];
                                    if ( v40 != 12 )
                                    {
                                      v42[12] = v41[12];
                                      if ( v40 != 13 )
                                      {
                                        v42[13] = v41[13];
                                        if ( v40 != 14 )
                                          v42[14] = v41[14];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v130 = 0;
            do
            {
              *(_BYTE *)(v26 + v130) = v17[v130];
              ++v130;
            }
            while ( v24 - v130 > 0 );
          }
          v25 = v24 + v21[1];
        }
        v21[1] = v25;
        v43 = v19;
        v44 = v20;
        while ( 1 )
        {
          result = *(_QWORD *)(v13 + 24);
          v47 = *(_QWORD *)(v13 + 32);
          v48 = *(_QWORD *)(result + 8);
          if ( v47 )
          {
            result = sub_227D8A0(v47);
            if ( (_BYTE)result )
            {
              v49 = *(_QWORD *)(v13 + 32);
              if ( !v49 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v13 + 32)) )
                BUG();
              v50 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 80LL);
              if ( v50 == sub_A1EA60 )
                result = *(_QWORD *)(v49 + 88);
              else
                result = v50(v49);
              LOBYTE(v48) = result + *(_BYTE *)(v49 + 32) - *(_BYTE *)(v49 + 16) + v48;
            }
          }
          if ( (v48 & 3) == 0 )
            break;
          v45 = *(_QWORD **)(v13 + 24);
          v46 = v45[1];
          if ( (unsigned __int64)(v46 + 1) > v45[2] )
          {
            sub_2236E10(*(_QWORD *)(v13 + 24), v45 + 3, v46 + 1, 1);
            v46 = v45[1];
          }
          *(_BYTE *)(*v45 + v46) = 0;
          ++v45[1];
        }
        v12 = v44;
        v11 = v43 + 1;
        if ( v148 == v43 + 1 )
          return result;
      }
      v55 = *(_DWORD *)(v13 + 52);
      v56 = *(_DWORD *)(v13 + 48);
      v57 = a4 - v12;
      if ( (unsigned int)a4 - v12 > 0x1F )
      {
        v58 = v11;
        v59 = *(_DWORD *)(v13 + 52);
        v60 = v12;
        do
        {
          v62 = (v57 & 0x1F | 0x20) << v56;
          v56 += 6;
          v59 |= v62;
          *(_DWORD *)(v13 + 52) = v59;
          if ( v56 > 0x1F )
          {
            v63 = *(_QWORD **)(v13 + 24);
            v64 = v63[1];
            if ( (unsigned __int64)(v64 + 4) > v63[2] )
            {
              v169 = v59;
              v157 = *(_QWORD **)(v13 + 24);
              sub_2236E10(v157, v63 + 3, v64 + 4, 1);
              v63 = v157;
              v59 = v169;
              v64 = v157[1];
            }
            *(_DWORD *)(*v63 + v64) = v59;
            v61 = *(_DWORD *)(v13 + 48);
            v59 = 0;
            v63[1] += 4LL;
            if ( v61 )
              v59 = (v57 & 0x1F | 0x20) >> (32 - v61);
            v56 = ((_BYTE)v61 + 6) & 0x1F;
            *(_DWORD *)(v13 + 52) = v59;
          }
          v57 >>= 5;
          *(_DWORD *)(v13 + 48) = v56;
        }
        while ( v57 > 0x1F );
        v12 = v60;
        v55 = v59;
        v11 = v58;
      }
      result = v57 << v56;
      v90 = v56 + 6;
      v91 = result | v55;
      *(_DWORD *)(v13 + 52) = v91;
      if ( v90 > 0x1F )
      {
        v120 = *(_QWORD **)(v13 + 24);
        v121 = v120[1];
        if ( (unsigned __int64)(v121 + 4) > v120[2] )
        {
          v173 = v12;
          v162 = v11;
          sub_2236E10(*(_QWORD *)(v13 + 24), v120 + 3, v121 + 4, 1);
          v121 = v120[1];
          v12 = v173;
          v11 = v162;
        }
        *(_DWORD *)(*v120 + v121) = v91;
        v122 = *(_DWORD *)(v13 + 48);
        v123 = 0;
        v120[1] += 4LL;
        if ( v122 )
          v123 = v57 >> (32 - v122);
        *(_DWORD *)(v13 + 52) = v123;
        result = ((_BYTE)v122 + 6) & 0x1F;
        *(_DWORD *)(v13 + 48) = result;
      }
      else
      {
        *(_DWORD *)(v13 + 48) = v90;
      }
      ++v11;
      if ( (_DWORD)a4 != v12 )
        break;
LABEL_53:
      if ( v148 == ++v11 )
        return result;
    }
    v190 = v11;
    v92 = v14 + 16LL * v11;
    v93 = v12;
    result = v92;
    while ( 1 )
    {
      v65 = *(_QWORD *)(a3 + 8LL * v93);
      v99 = (*(_BYTE *)(result + 8) >> 1) & 7;
      if ( v99 == 2 )
        break;
      if ( v99 == 4 )
      {
        if ( (unsigned __int8)(v65 - 97) <= 0x19u )
        {
          v94 = (char)v65 - 97;
        }
        else if ( (unsigned __int8)(v65 - 65) <= 0x19u )
        {
          v94 = (char)v65 - 39;
        }
        else
        {
          v94 = (char)v65 + 4;
          if ( (unsigned __int8)(v65 - 48) > 9u )
            v94 = ((_BYTE)v65 != 46) + 62;
        }
        v95 = *(_DWORD *)(v13 + 48);
        v96 = v94 << v95;
        v97 = v95 + 6;
        v98 = *(_DWORD *)(v13 + 52) | v96;
        *(_DWORD *)(v13 + 52) = v98;
        if ( v97 > 0x1F )
        {
          v116 = *(_QWORD **)(v13 + 24);
          v117 = v116[1];
          if ( (unsigned __int64)(v117 + 4) > v116[2] )
          {
            v163 = result;
            sub_2236E10(*(_QWORD *)(v13 + 24), v116 + 3, v117 + 4, 1);
            v117 = v116[1];
            result = v163;
          }
          *(_DWORD *)(*v116 + v117) = v98;
          v118 = *(_DWORD *)(v13 + 48);
          v116[1] += 4LL;
          v119 = v94 >> (32 - v118);
          if ( !v118 )
            v119 = 0;
          *(_DWORD *)(v13 + 52) = v119;
          *(_DWORD *)(v13 + 48) = ((_BYTE)v118 + 6) & 0x1F;
        }
        else
        {
          *(_DWORD *)(v13 + 48) = v97;
        }
LABEL_101:
        if ( (_DWORD)a4 == ++v93 )
          goto LABEL_107;
      }
      else
      {
        if ( v99 != 1 )
          goto LABEL_72;
        if ( !*(_QWORD *)result )
          goto LABEL_101;
        v160 = result;
        ++v93;
        sub_A1FEC0(v13, v65, *(_QWORD *)result);
        result = v160;
        if ( (_DWORD)a4 == v93 )
        {
LABEL_107:
          v11 = v190;
          v12 = v93;
          goto LABEL_53;
        }
      }
    }
    v100 = *(_QWORD *)result;
    v161 = *(_QWORD *)result;
    if ( *(_QWORD *)result )
    {
      v101 = *(_QWORD *)result;
      v102 = *(_QWORD *)(a3 + 8LL * v93);
      v103 = v100 - 1;
      v104 = 1 << (v100 - 1);
      if ( v65 == (unsigned int)v65 )
      {
        if ( v104 <= (unsigned int)v65 )
        {
          v175 = result;
          v135 = 1 << (v100 - 1);
          v180 = v93;
          v136 = *(_QWORD *)(a3 + 8LL * v93);
          v137 = ~(-1 << v103);
          do
          {
            sub_A1FEC0(v13, v135 | v136 & v137, v100);
            v136 >>= v100 - 1;
          }
          while ( v135 <= v136 );
          result = v175;
          v102 = v136;
          v93 = v180;
        }
      }
      else
      {
        v105 = v104;
        if ( v65 >= v104 )
        {
          v106 = *(_DWORD *)(v13 + 52);
          v107 = *(_DWORD *)(v13 + 48);
          v188 = result;
          v108 = v100 - 1;
          v109 = ~(-1 << v103);
          do
          {
            v112 = v107;
            v107 += v101;
            v113 = (1 << (v100 - 1)) | v65 & v109;
            v106 |= v113 << v112;
            *(_DWORD *)(v13 + 52) = v106;
            if ( v107 > 0x1F )
            {
              v114 = *(_QWORD **)(v13 + 24);
              v115 = v114[1];
              if ( (unsigned __int64)(v115 + 4) > v114[2] )
              {
                v183 = v108;
                v186 = v105;
                v179 = v109;
                v171 = v101;
                sub_2236E10(*(_QWORD *)(v13 + 24), v114 + 3, v115 + 4, 1);
                v115 = v114[1];
                v105 = v186;
                v108 = v183;
                v109 = v179;
                v101 = v171;
              }
              *(_DWORD *)(*v114 + v115) = v106;
              v110 = *(_DWORD *)(v13 + 48);
              v106 = 0;
              v114[1] += 4LL;
              v111 = v113 >> (32 - v110);
              if ( v110 )
                v106 = v111;
              v107 = ((_BYTE)v101 + (_BYTE)v110) & 0x1F;
              *(_DWORD *)(v13 + 52) = v106;
            }
            *(_DWORD *)(v13 + 48) = v107;
            v65 >>= v108;
          }
          while ( v65 >= v105 );
          result = v188;
          v102 = v65;
        }
      }
      v172 = result;
      sub_A1FEC0(v13, v102, v161);
      result = v172;
    }
    goto LABEL_101;
  }
  return result;
}
