void __fastcall sub_1FCE250(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  unsigned int v18; // r9d
  int v19; // r15d
  unsigned int v20; // ecx
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // r14
  _QWORD *v29; // r15
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rax
  void **v32; // r15
  __int64 v33; // rdi
  char *v34; // rax
  char *v35; // rsi
  _QWORD *v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // rsi
  _QWORD *v39; // r14
  _DWORD *v40; // r15
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // r10
  __int64 v50; // r11
  __int64 v51; // rcx
  __int64 v52; // rbx
  unsigned __int64 v53; // rdx
  const __m128i *v54; // rax
  __m128 v55; // xmm0
  __m128 v56; // xmm4
  __m128i v57; // xmm2
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __m128i v60; // xmm2
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm1
  __m128i v65; // xmm3
  unsigned __int64 v66; // rax
  _QWORD *v67; // rsi
  __int64 *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // r12
  _QWORD *v72; // rbx
  __int64 (__fastcall *v73)(__int64); // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // r14
  _QWORD *v78; // rbp
  __int64 (__fastcall *v79)(__int64); // rax
  __int64 v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rbx
  __int64 v83; // r8
  unsigned int v84; // edx
  unsigned __int64 *v85; // rax
  unsigned __int64 v86; // rdi
  __int64 *v87; // rdi
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // r15d
  _QWORD *v91; // r14
  __int64 v92; // rax
  int v93; // eax
  unsigned int v94; // r9d
  int v95; // esi
  int v96; // r10d
  __int64 v97; // r8
  unsigned int v98; // esi
  __int64 v99; // rbx
  unsigned int v100; // esi
  char v101; // al
  __int64 v102; // rbx
  unsigned int v103; // ebp
  __int64 v104; // r12
  __int64 v105; // r14
  unsigned __int64 v106; // r13
  unsigned int v107; // eax
  int v108; // ebx
  unsigned int v109; // ecx
  unsigned __int64 v110; // r12
  int v111; // eax
  int v112; // eax
  _QWORD *v113; // rbp
  __int64 v114; // rax
  unsigned int v115; // r13d
  int v116; // ebx
  _QWORD *v117; // r13
  __int64 v118; // rcx
  int v119; // edx
  unsigned int v120; // eax
  unsigned int v121; // esi
  _QWORD *v122; // r10
  int v123; // r11d
  __int64 v124; // rcx
  int v125; // r10d
  unsigned __int64 *v126; // r11
  int v127; // edi
  bool v128; // zf
  __int64 v129; // rax
  __int64 *v130; // [rsp+0h] [rbp-3C8h]
  _QWORD *v131; // [rsp+0h] [rbp-3C8h]
  unsigned int v132; // [rsp+0h] [rbp-3C8h]
  int v133; // [rsp+18h] [rbp-3B0h]
  __int64 v134; // [rsp+18h] [rbp-3B0h]
  unsigned int v135; // [rsp+18h] [rbp-3B0h]
  _QWORD *v136; // [rsp+20h] [rbp-3A8h]
  __int64 v137; // [rsp+20h] [rbp-3A8h]
  unsigned int v138; // [rsp+28h] [rbp-3A0h]
  __int64 v139; // [rsp+28h] [rbp-3A0h]
  unsigned int v140; // [rsp+30h] [rbp-398h]
  _QWORD *v141; // [rsp+30h] [rbp-398h]
  _QWORD *v142; // [rsp+30h] [rbp-398h]
  __int64 v143; // [rsp+38h] [rbp-390h]
  __int64 *v144; // [rsp+40h] [rbp-388h]
  __int64 v145; // [rsp+48h] [rbp-380h]
  unsigned __int64 v146; // [rsp+50h] [rbp-378h]
  __int64 v147; // [rsp+50h] [rbp-378h]
  int v148; // [rsp+50h] [rbp-378h]
  __int64 v149; // [rsp+58h] [rbp-370h]
  unsigned __int64 v150; // [rsp+60h] [rbp-368h]
  unsigned __int64 v151; // [rsp+60h] [rbp-368h]
  unsigned __int64 v152; // [rsp+68h] [rbp-360h] BYREF
  __m128 v153; // [rsp+70h] [rbp-358h] BYREF
  __int64 v154; // [rsp+80h] [rbp-348h] BYREF
  __int64 v155; // [rsp+88h] [rbp-340h] BYREF
  __int64 v156; // [rsp+90h] [rbp-338h]
  void **v157; // [rsp+98h] [rbp-330h]
  void *v158; // [rsp+A0h] [rbp-328h]
  __int64 v159; // [rsp+A8h] [rbp-320h]
  __int64 v160; // [rsp+B0h] [rbp-318h] BYREF
  void *ptr; // [rsp+130h] [rbp-298h]
  __int64 v162; // [rsp+138h] [rbp-290h]
  _BYTE v163[32]; // [rsp+140h] [rbp-288h] BYREF
  __int64 v164; // [rsp+160h] [rbp-268h]
  __int64 v165; // [rsp+168h] [rbp-260h]
  __int64 *v166; // [rsp+170h] [rbp-258h]
  unsigned int v167; // [rsp+178h] [rbp-250h]
  char v168; // [rsp+17Ch] [rbp-24Ch]
  void *v169; // [rsp+180h] [rbp-248h] BYREF
  __int64 v170; // [rsp+188h] [rbp-240h]
  _BYTE v171[568]; // [rsp+190h] [rbp-238h] BYREF

  ++*(_DWORD *)(a1 + 3072);
  v6 = &v154;
  v152 = a3;
  v169 = v171;
  v157 = &v169;
  v158 = &v160;
  v159 = 0x1000000000LL;
  ptr = v163;
  v170 = 0x4000000000LL;
  v154 = a1;
  v155 = a2;
  v156 = a1;
  v162 = 0x800000000LL;
  v164 = 148;
  v165 = 0;
  v166 = &v155;
  v168 = 0;
  if ( !a3 )
  {
    v102 = *(_QWORD *)(a1 + 16);
    sub_A1FEC0(v102, 3u, *(_DWORD *)(v102 + 56));
    sub_1FC2270(v102, 0x94u);
    sub_1FC2270(v102, 0);
    goto LABEL_98;
  }
  v7 = *(_QWORD *)(a1 + 1032);
  v130 = (__int64 *)(a1 + 1032);
  v8 = *(unsigned int *)(a1 + 1048);
  if ( (_DWORD)v8 )
  {
    v9 = (v8 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v10 = (__int64 *)(v7 + 16LL * v9);
    v11 = *v10;
    if ( a3 == *v10 )
    {
LABEL_4:
      sub_1FCC390(&v153, v10, (_QWORD *)(16 * v8 + v7), (__int64)v130, 1);
      v12 = v153.m128_u64[0];
      goto LABEL_5;
    }
    v95 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v96 = v95 + 1;
        v9 = (v8 - 1) & (v95 + v9);
        v10 = (__int64 *)(v7 + 16LL * v9);
        v97 = *v10;
        if ( a3 == *v10 )
          goto LABEL_4;
        v95 = v96;
      }
      while ( v97 != -4096 );
    }
  }
  sub_1FCC390(
    &v153,
    (_QWORD *)(v7 + 16LL * (unsigned int)v8),
    (_QWORD *)(v7 + 16LL * (unsigned int)v8),
    (__int64)v130,
    1);
  v12 = v153.m128_u64[0];
LABEL_5:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 1032) + 16LL * *(unsigned int *)(a1 + 1048));
  sub_1FCC390(&v153, v13, v13, (__int64)v130, 1);
  if ( v153.m128_u64[0] == v12 )
  {
    sub_1FCCF00((__int64)&v154, v152, a4);
    if ( v168 )
    {
      *(_QWORD *)(*(_QWORD *)v166[2] + 8LL * v167) = (unsigned int)v165;
      v168 = 0;
      v165 = 0;
    }
    LODWORD(v25) = HIDWORD(v164);
    v140 = v164;
    sub_1FCF370(&v155);
    v26 = *(_QWORD *)(v156 + 16);
    v27 = *(_QWORD *)(v26 + 32);
    v28 = *(_QWORD *)(*(_QWORD *)(v26 + 24) + 8LL);
    if ( v27 && (unsigned __int8)sub_227D8A0(v27) )
    {
      v29 = *(_QWORD **)(v26 + 32);
      if ( !v29 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v26 + 32)) )
        goto LABEL_208;
      v30 = *(__int64 (__fastcall **)(__int64))(*v29 + 80LL);
      if ( v30 == sub_A1EA60 )
        v31 = v29[11];
      else
        v31 = v30((__int64)v29);
      v28 += v29[4] - v29[2] + v31;
    }
    v32 = v157;
    v33 = *(unsigned int *)(v26 + 48) + 8 * v28;
    v34 = (char *)ptr;
    v35 = (char *)ptr + 4 * (unsigned int)v162;
    if ( ptr != v35 )
    {
      do
      {
        v36 = (char *)*v32 + 8 * *(unsigned int *)v34;
        if ( *v36 )
        {
          *v36 = v33 - *v36;
          v32 = v157;
        }
        v34 += 4;
      }
      while ( v35 != v34 );
    }
    LODWORD(v162) = 0;
    v37 = *(_QWORD *)(v156 + 16);
    if ( (_DWORD)v25 )
    {
      LODWORD(v38) = v25;
      v39 = *v32;
      v138 = *((_DWORD *)v32 + 2);
      v40 = *(_DWORD **)(*(_QWORD *)(v37 + 64) + 16LL * (unsigned int)(v25 - 4));
      v136 = v40;
      sub_A1FEC0(*(_QWORD *)(v156 + 16), v25, *(_DWORD *)(v37 + 56));
      v45 = *(_QWORD *)v40;
      v133 = v40[2];
      if ( (*(_BYTE *)(*(_QWORD *)v40 + 8LL) & 1) == 0 )
      {
        v41 = (*(_BYTE *)(v45 + 8) >> 1) & 7;
        switch ( (_BYTE)v41 )
        {
          case 2:
            v41 = *(_QWORD *)v45;
            if ( *(_QWORD *)v45 )
              sub_A1FFA0(v37, v140, v41);
            break;
          case 4:
            if ( (unsigned __int8)(v140 - 97) <= 0x19u )
            {
              v121 = (char)v140 - 97;
            }
            else if ( (unsigned __int8)(v140 - 65) <= 0x19u )
            {
              v121 = (char)v140 - 39;
            }
            else
            {
              v121 = (char)v140 + 4;
              if ( (unsigned __int8)(v140 - 48) > 9u )
                v121 = ((_BYTE)v140 != 46) + 62;
            }
            sub_1FC21C0(v37, v121);
            break;
          case 1:
            v41 = *(_QWORD *)v45;
            if ( *(_QWORD *)v45 )
              sub_A1FEC0(v37, v140, v41);
            break;
          default:
            goto LABEL_131;
        }
      }
      LODWORD(v40) = 0;
      LODWORD(v25) = 1;
      v145 = v138;
      if ( v133 != 1 )
      {
        v143 = a1;
        v144 = &v154;
        v6 = (__int64 *)v37;
        while ( 1 )
        {
          v41 = *v136 + 16LL * (unsigned int)v25;
          if ( (*(_BYTE *)(v41 + 8) & 1) == 0 )
          {
            v42 = (*(_BYTE *)(v41 + 8) >> 1) & 7;
            if ( (unsigned __int8)v42 == 3 )
            {
              v25 = (unsigned int)(v25 + 1);
              v99 = *v136 + 16 * v25;
              sub_1FC2270((__int64)v6, v138 - (_DWORD)v40);
              if ( (_DWORD)v40 != v138 )
              {
                while ( 1 )
                {
                  v38 = v39[(unsigned int)v40];
                  v101 = (*(_BYTE *)(v99 + 8) >> 1) & 7;
                  switch ( v101 )
                  {
                    case 2:
                      v41 = *(_QWORD *)v99;
                      if ( *(_QWORD *)v99 )
                        sub_A1FFA0((__int64)v6, v38, v41);
                      break;
                    case 4:
                      if ( (unsigned __int8)(v38 - 97) <= 0x19u )
                      {
                        v100 = (char)v38 - 97;
                      }
                      else if ( (unsigned __int8)(v38 - 65) <= 0x19u )
                      {
                        v100 = (char)v38 - 39;
                      }
                      else if ( (unsigned __int8)(v38 - 48) <= 9u )
                      {
                        v100 = (char)v38 + 4;
                      }
                      else
                      {
                        v100 = ((_BYTE)v38 != 46) + 62;
                      }
                      sub_1FC21C0((__int64)v6, v100);
                      break;
                    case 1:
                      v41 = *(_QWORD *)v99;
                      if ( *(_QWORD *)v99 )
                        sub_A1FEC0((__int64)v6, v38, v41);
                      break;
                    default:
                      goto LABEL_131;
                  }
                  LODWORD(v40) = (_DWORD)v40 + 1;
                  if ( v138 == (_DWORD)v40 )
                    goto LABEL_75;
                }
              }
              goto LABEL_75;
            }
            v46 = (unsigned int)v40;
            v44 = (unsigned __int64)&v39[v46];
            if ( (unsigned __int8)v42 == 5 )
            {
              v146 = (unsigned __int64)&v39[v46];
              v47 = v145 - (unsigned int)v40;
              sub_1FC2270((__int64)v6, v138 - (_DWORD)v40);
              v44 = v146;
              v48 = 8LL * (unsigned int)v40;
              if ( *((_DWORD *)v6 + 12) )
              {
                v122 = (_QWORD *)v6[3];
                v123 = *((_DWORD *)v6 + 13);
                v124 = v122[1];
                if ( (unsigned __int64)(v124 + 4) > v122[2] )
                {
                  v151 = v146;
                  v148 = *((_DWORD *)v6 + 13);
                  v142 = (_QWORD *)v6[3];
                  sub_2236E10(v142, v122 + 3, v124 + 4, 1);
                  v122 = v142;
                  v44 = v151;
                  v48 = 8LL * (unsigned int)v40;
                  v123 = v148;
                  v124 = v142[1];
                }
                *(_DWORD *)(*v122 + v124) = v123;
                v122[1] += 4LL;
                v6[6] = 0;
              }
              v49 = (_QWORD *)v6[3];
              v50 = 8 * v47;
              v51 = v49[1];
              v52 = (8 * v47) >> 3;
              v41 = v52 + v51;
              if ( (unsigned __int64)(v52 + v51) > v49[2] )
              {
                v150 = v44;
                v149 = v48;
                v147 = v50;
                v141 = (_QWORD *)v6[3];
                sub_2236E10(v141, v49 + 3, v41, 1);
                v49 = v141;
                v44 = v150;
                v48 = v149;
                v50 = v147;
                v51 = v141[1];
                v41 = v52 + v51;
              }
              v42 = *v49 + v51;
              if ( v50 > 0 )
              {
                if ( (v44 >= *v49 + v41 || v42 >= (unsigned __int64)v39 + v50 + v48) && v50 > 120 )
                {
                  v53 = v42;
                  v54 = (const __m128i *)v44;
                  do
                  {
                    v55 = (__m128)_mm_loadu_si128(v54);
                    v56 = (__m128)_mm_loadu_si128(v54 + 1);
                    v53 += 16LL;
                    v54 += 8;
                    v57 = (__m128i)_mm_shuffle_ps(v55, v56, 136);
                    v58 = (__m128i)_mm_shuffle_ps(
                                     (__m128)_mm_loadu_si128(v54 - 6),
                                     (__m128)_mm_loadu_si128(v54 - 5),
                                     136);
                    v59 = _mm_unpacklo_epi16(v57, v58);
                    v60 = _mm_unpackhi_epi16(v57, v58);
                    v61 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v59, v60), _mm_unpackhi_epi16(v59, v60));
                    v62 = (__m128i)_mm_shuffle_ps(
                                     (__m128)_mm_loadu_si128(v54 - 2),
                                     (__m128)_mm_loadu_si128(v54 - 1),
                                     136);
                    v63 = (__m128i)_mm_shuffle_ps(
                                     (__m128)_mm_loadu_si128(v54 - 4),
                                     (__m128)_mm_loadu_si128(v54 - 3),
                                     136);
                    v64 = _mm_unpacklo_epi16(v63, v62);
                    v65 = _mm_unpackhi_epi16(v63, v62);
                    *(__m128i *)(v53 - 16) = _mm_packus_epi16(
                                               _mm_and_si128(v61, (__m128i)xmmword_23A8D80),
                                               _mm_and_si128(
                                                 _mm_unpacklo_epi16(
                                                   _mm_unpacklo_epi16(v64, v65),
                                                   _mm_unpackhi_epi16(v64, v65)),
                                                 (__m128i)xmmword_23A8D80));
                  }
                  while ( v42 + (v52 & 0xFFFFFFFFFFFFFFF0LL) != v53 );
                  v66 = v52 - (v52 & 0xFFFFFFFFFFFFFFF0LL);
                  v67 = (_QWORD *)(v44 + 8 * (v52 & 0xFFFFFFFFFFFFFFF0LL));
                  v42 += v52 & 0xFFFFFFFFFFFFFFF0LL;
                  if ( (v52 & 0xFFFFFFFFFFFFFFF0LL) != v52 )
                  {
                    *(_BYTE *)v42 = *v67;
                    if ( v66 != 1 )
                    {
                      *(_BYTE *)(v42 + 1) = v67[1];
                      if ( v66 != 2 )
                      {
                        *(_BYTE *)(v42 + 2) = v67[2];
                        if ( v66 != 3 )
                        {
                          *(_BYTE *)(v42 + 3) = v67[3];
                          if ( v66 != 4 )
                          {
                            *(_BYTE *)(v42 + 4) = v67[4];
                            if ( v66 != 5 )
                            {
                              *(_BYTE *)(v42 + 5) = v67[5];
                              if ( v66 != 6 )
                              {
                                *(_BYTE *)(v42 + 6) = v67[6];
                                if ( v66 != 7 )
                                {
                                  *(_BYTE *)(v42 + 7) = v67[7];
                                  if ( v66 != 8 )
                                  {
                                    *(_BYTE *)(v42 + 8) = v67[8];
                                    if ( v66 != 9 )
                                    {
                                      *(_BYTE *)(v42 + 9) = v67[9];
                                      if ( v66 != 10 )
                                      {
                                        *(_BYTE *)(v42 + 10) = v67[10];
                                        if ( v66 != 11 )
                                        {
                                          *(_BYTE *)(v42 + 11) = v67[11];
                                          if ( v66 != 12 )
                                          {
                                            *(_BYTE *)(v42 + 12) = v67[12];
                                            if ( v66 != 13 )
                                            {
                                              *(_BYTE *)(v42 + 13) = v67[13];
                                              if ( v66 != 14 )
                                                *(_BYTE *)(v42 + 14) = v67[14];
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
                  v129 = 0;
                  do
                  {
                    *(_BYTE *)(v42 + v129) = *(_QWORD *)(v44 + 8 * v129);
                    ++v129;
                  }
                  while ( v52 - v129 > 0 );
                }
                v41 = v49[1] + v52;
              }
              v49[1] = v41;
              while ( 1 )
              {
                v70 = v6[4];
                v71 = *(_QWORD *)(v6[3] + 8);
                if ( v70 && (unsigned __int8)sub_227D8A0(v70) )
                {
                  v72 = (_QWORD *)v6[4];
                  if ( !v72 || !(unsigned __int8)sub_227D8A0(v6[4]) )
                    goto LABEL_208;
                  v73 = *(__int64 (__fastcall **)(__int64))(*v72 + 80LL);
                  if ( v73 == sub_A1EA60 )
                    v74 = v72[11];
                  else
                    LOBYTE(v74) = v73((__int64)v72);
                  v41 = v71 + v72[4] - v72[2];
                  LOBYTE(v71) = v41 + v74;
                }
                if ( (v71 & 3) == 0 )
                  goto LABEL_75;
                v68 = (__int64 *)v6[3];
                v69 = v68[1];
                if ( v69 + 1 > (unsigned __int64)v68[2] )
                {
                  sub_2236E10(v6[3], v68 + 3, v69 + 1, 1);
                  v69 = v68[1];
                }
                v41 = *v68;
                *(_BYTE *)(*v68 + v69) = 0;
                ++v68[1];
              }
            }
            v38 = *(_QWORD *)v44;
            if ( (_BYTE)v42 == 2 )
            {
              v41 = *(_QWORD *)v41;
              if ( v41 )
                sub_A1FFA0((__int64)v6, v38, v41);
            }
            else if ( (_BYTE)v42 == 4 )
            {
              if ( (unsigned __int8)(v38 - 97) <= 0x19u )
              {
                v98 = (char)v38 - 97;
              }
              else if ( (unsigned __int8)(v38 - 65) <= 0x19u )
              {
                v98 = (char)v38 - 39;
              }
              else if ( (unsigned __int8)(v38 - 48) <= 9u )
              {
                v98 = (char)v38 + 4;
              }
              else
              {
                v98 = ((_BYTE)v38 != 46) + 62;
              }
              sub_1FC21C0((__int64)v6, v98);
            }
            else
            {
LABEL_131:
              v41 = *(_QWORD *)v41;
              if ( v41 )
                sub_A1FEC0((__int64)v6, v38, v41);
            }
          }
          LODWORD(v40) = (_DWORD)v40 + 1;
LABEL_75:
          LODWORD(v25) = v25 + 1;
          if ( v133 == (_DWORD)v25 )
          {
            a1 = v143;
            v6 = v144;
            break;
          }
        }
      }
    }
    else
    {
      v103 = *((_DWORD *)v32 + 2);
      sub_A1FEC0(*(_QWORD *)(v156 + 16), 3u, *(_DWORD *)(v37 + 56));
      sub_1FC2270(v37, v140);
      sub_1FC2270(v37, v103);
      if ( v103 )
      {
        v139 = a1;
        v104 = 0;
        v105 = v37;
        v137 = 8LL * (v103 - 1) + 8;
        do
        {
          v106 = *(_QWORD *)((char *)*v32 + v104);
          v107 = v106;
          if ( v106 == (unsigned int)v106 )
          {
            sub_1FC2270(v105, v106);
          }
          else
          {
            v108 = *(_DWORD *)(v105 + 52);
            v109 = *(_DWORD *)(v105 + 48);
            if ( v106 > 0x1F )
            {
              v134 = v104;
              v110 = *(_QWORD *)((char *)*v32 + v104);
              do
              {
                v112 = (v110 & 0x1F | 0x20) << v109;
                v109 += 6;
                v108 |= v112;
                *(_DWORD *)(v105 + 52) = v108;
                if ( v109 > 0x1F )
                {
                  v113 = *(_QWORD **)(v105 + 24);
                  v114 = v113[1];
                  if ( (unsigned __int64)(v114 + 4) > v113[2] )
                  {
                    sub_2236E10(*(_QWORD *)(v105 + 24), v113 + 3, v114 + 4, 1);
                    v114 = v113[1];
                  }
                  *(_DWORD *)(*v113 + v114) = v108;
                  v111 = *(_DWORD *)(v105 + 48);
                  v113[1] += 4LL;
                  v108 = (v110 & 0x1F | 0x20) >> (32 - (unsigned __int8)v111);
                  if ( !v111 )
                    v108 = 0;
                  v109 = ((_BYTE)v111 + 6) & 0x1F;
                  *(_DWORD *)(v105 + 52) = v108;
                }
                v110 >>= 5;
                *(_DWORD *)(v105 + 48) = v109;
              }
              while ( v110 > 0x1F );
              v115 = v110;
              v104 = v134;
              v107 = v115;
            }
            v41 = v107 << v109;
            v42 = v109 + 6;
            v116 = v41 | v108;
            *(_DWORD *)(v105 + 52) = v116;
            if ( (unsigned int)v42 > 0x1F )
            {
              v117 = *(_QWORD **)(v105 + 24);
              v118 = v117[1];
              if ( (unsigned __int64)(v118 + 4) > v117[2] )
              {
                v135 = v107;
                sub_2236E10(*(_QWORD *)(v105 + 24), v117 + 3, v118 + 4, 1);
                v118 = v117[1];
                v107 = v135;
              }
              *(_DWORD *)(*v117 + v118) = v116;
              v119 = *(_DWORD *)(v105 + 48);
              v117[1] += 4LL;
              v120 = v107 >> (32 - v119);
              v42 = 0;
              if ( !v119 )
                v120 = 0;
              v41 = ((_BYTE)v119 + 6) & 0x1F;
              *(_DWORD *)(v105 + 52) = v120;
              *(_DWORD *)(v105 + 48) = v41;
            }
            else
            {
              *(_DWORD *)(v105 + 48) = v42;
            }
          }
          v104 += 8;
        }
        while ( v137 != v104 );
        a1 = v139;
        v6 = &v154;
      }
    }
    v75 = *(_QWORD *)(v156 + 16);
    v76 = *(_QWORD *)(v75 + 32);
    v77 = *(_QWORD *)(*(_QWORD *)(v75 + 24) + 8LL);
    if ( !v76 || !(unsigned __int8)sub_227D8A0(v76) )
    {
LABEL_84:
      v81 = *(_DWORD *)(a1 + 1048);
      v82 = *(unsigned int *)(v75 + 48) + 8 * v77;
      if ( v81 )
      {
        v42 = v152;
        v44 = v81 - 1;
        v83 = *(_QWORD *)(a1 + 1032);
        v84 = v44 & (((unsigned int)v152 >> 9) ^ ((unsigned int)v152 >> 4));
        v85 = (unsigned __int64 *)(v83 + 16LL * v84);
        v86 = *v85;
        if ( v152 == *v85 )
          goto LABEL_86;
        v125 = 1;
        v126 = nullptr;
        if ( v86 != -4096 )
        {
          while ( 1 )
          {
            if ( !v126 && v86 == -8192 )
              v126 = v85;
            v84 = v44 & (v125 + v84);
            v85 = (unsigned __int64 *)(v83 + 16LL * v84);
            v86 = *v85;
            if ( v152 == *v85 )
              break;
            if ( v86 == -4096 )
            {
              if ( v126 )
                v85 = v126;
              goto LABEL_183;
            }
            ++v125;
          }
LABEL_86:
          v87 = (__int64 *)ptr;
          v85[1] = v82;
          if ( v87 == v6 + 24 )
            goto LABEL_88;
          goto LABEL_87;
        }
LABEL_183:
        v127 = *(_DWORD *)(a1 + 1040);
        v153.m128_u64[0] = (unsigned __int64)v85;
        v41 = (unsigned int)(v127 + 1);
        v43 = (unsigned int)(4 * v41);
        if ( (unsigned int)v43 < 3 * v81 )
        {
          v43 = v81 >> 3;
          if ( v81 - *(_DWORD *)(a1 + 1044) - (unsigned int)v41 > (unsigned int)v43 )
          {
LABEL_185:
            v128 = *v85 == -4096;
            *(_DWORD *)(a1 + 1040) = v41;
            if ( !v128 )
              --*(_DWORD *)(a1 + 1044);
            *v85 = v42;
            v85[1] = 0;
            goto LABEL_86;
          }
LABEL_190:
          sub_1FCE040((__int64)v130, v81, v41, v42, v43, v44);
          sub_1FCBFA0(v130, (__int64 *)&v152, &v153);
          v42 = v152;
          LODWORD(v41) = *(_DWORD *)(a1 + 1040) + 1;
          v85 = (unsigned __int64 *)v153.m128_u64[0];
          goto LABEL_185;
        }
      }
      else
      {
        v153.m128_u64[0] = 0;
      }
      v81 *= 2;
      goto LABEL_190;
    }
    v78 = *(_QWORD **)(v75 + 32);
    if ( v78 && (unsigned __int8)sub_227D8A0(*(_QWORD *)(v75 + 32)) )
    {
      v79 = *(__int64 (__fastcall **)(__int64))(*v78 + 80LL);
      if ( v79 == sub_A1EA60 )
        v80 = v78[11];
      else
        v80 = v79((__int64)v78);
      v41 = v77 + v78[4] - v78[2];
      v77 = v41 + v80;
      goto LABEL_84;
    }
LABEL_208:
    BUG();
  }
  sub_9B9C90((__int64)&v169, *(_QWORD *)(v12 + 8));
  v14 = *(_QWORD *)(a1 + 16);
  v15 = v170;
  sub_A1FEC0(v14, 3u, *(_DWORD *)(v14 + 56));
  sub_1FC2270(v14, 0x95u);
  sub_1FC2270(v14, v15);
  if ( v15 )
  {
    v16 = 0;
    do
    {
      v17 = *(_QWORD *)((char *)v169 + v16);
      v18 = v17;
      if ( v17 == (unsigned int)v17 )
      {
        sub_1FC2270(v14, v17);
      }
      else
      {
        v19 = *(_DWORD *)(v14 + 52);
        v20 = *(_DWORD *)(v14 + 48);
        if ( v17 > 0x1F )
        {
          do
          {
            v22 = (v17 & 0x1F | 0x20) << v20;
            v20 += 6;
            v19 |= v22;
            *(_DWORD *)(v14 + 52) = v19;
            if ( v20 > 0x1F )
            {
              v23 = *(_QWORD **)(v14 + 24);
              v24 = v23[1];
              if ( (unsigned __int64)(v24 + 4) > v23[2] )
              {
                v131 = *(_QWORD **)(v14 + 24);
                sub_2236E10(v131, v23 + 3, v24 + 4, 1);
                v23 = v131;
                v24 = v131[1];
              }
              *(_DWORD *)(*v23 + v24) = v19;
              v19 = 0;
              v23[1] += 4LL;
              v21 = *(_DWORD *)(v14 + 48);
              if ( v21 )
                v19 = (v17 & 0x1F | 0x20) >> (32 - (unsigned __int8)v21);
              v20 = ((_BYTE)v21 + 6) & 0x1F;
              *(_DWORD *)(v14 + 52) = v19;
            }
            v17 >>= 5;
            *(_DWORD *)(v14 + 48) = v20;
          }
          while ( v17 > 0x1F );
          v18 = v17;
        }
        v88 = v18 << v20;
        v89 = v20 + 6;
        v90 = v88 | v19;
        *(_DWORD *)(v14 + 52) = v90;
        if ( v89 > 0x1F )
        {
          v91 = *(_QWORD **)(v14 + 24);
          v92 = v91[1];
          if ( (unsigned __int64)(v92 + 4) > v91[2] )
          {
            v132 = v18;
            sub_2236E10(*(_QWORD *)(v14 + 24), v91 + 3, v92 + 4, 1);
            v92 = v91[1];
            v18 = v132;
          }
          *(_DWORD *)(*v91 + v92) = v90;
          v93 = *(_DWORD *)(v14 + 48);
          v91[1] += 4LL;
          v94 = v18 >> (32 - v93);
          if ( !v93 )
            v94 = 0;
          *(_DWORD *)(v14 + 52) = v94;
          *(_DWORD *)(v14 + 48) = ((_BYTE)v93 + 6) & 0x1F;
        }
        else
        {
          *(_DWORD *)(v14 + 48) = v89;
        }
      }
      v16 += 8;
    }
    while ( 8LL * (v15 - 1) + 8 != v16 );
    v6 = &v154;
  }
LABEL_98:
  v87 = (__int64 *)ptr;
  if ( ptr != v163 )
LABEL_87:
    free(v87);
LABEL_88:
  if ( v158 != v6 + 6 )
    free(v158);
  if ( v169 != v171 )
    free(v169);
}
