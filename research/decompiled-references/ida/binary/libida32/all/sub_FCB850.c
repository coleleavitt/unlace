__int64 __fastcall sub_FCB850(unsigned __int8 **a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  char v6; // cl
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  _BYTE *v9; // rdi
  unsigned __int8 *v10; // rbp
  unsigned __int8 *v11; // r12
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  char v15; // al
  unsigned __int8 *v16; // rsi
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // rsi
  unsigned __int8 *v19; // rdx
  void *v20; // rax
  __m128i *v21; // rdx
  _WORD *v22; // rdx
  char v23; // al
  void *v24; // rdx
  unsigned __int8 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 i; // r13
  _WORD *v29; // rdx
  unsigned __int8 *v30; // rax
  size_t v31; // rdx
  const void *v32; // rsi
  char v33; // al
  _BYTE *v34; // rax
  __m128i *v35; // r12
  size_t v36; // rdx
  _QWORD *v37; // rbp
  __int64 v38; // r13
  _QWORD *v39; // rdi
  unsigned __int64 v40; // rbx
  const void *v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  void **v54; // r14
  void **v55; // r13
  int *v56; // rbx
  int *v57; // rbp
  _QWORD *v58; // rdi
  void **v59; // rax
  unsigned __int64 v60; // rdx
  size_t v61; // r8
  void *v62; // rsi
  __int64 v63; // rax
  _BYTE *v64; // rax
  _WORD *v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  size_t v68; // rbx
  _QWORD *v69; // r13
  _QWORD *v70; // r12
  unsigned int j; // ebp
  int v72; // eax
  __int64 v73; // rbp
  __int64 v74; // r13
  __int64 v75; // rdx
  __int64 *v76; // rsi
  char *v77; // rdx
  char *v78; // rax
  int v79; // eax
  __int64 v80; // rbp
  __int64 v81; // r12
  __int64 v82; // rdx
  __int64 v83; // rax
  const char *v84; // r14
  size_t v85; // rax
  __int64 v86; // rcx
  _BYTE *v87; // rax
  __int64 **v88; // rbp
  __int64 **v89; // r13
  __int64 v90; // rsi
  __int64 *v91; // r14
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // rax
  _BYTE *v96; // rdx
  int v97; // eax
  __int64 v98; // rbp
  __int64 v99; // r14
  _DWORD *v100; // rdx
  _BYTE *v101; // rax
  int v102; // eax
  __int64 v103; // rbp
  __int64 v104; // r12
  _DWORD *v105; // rdx
  _BYTE *v106; // rax
  int v107; // eax
  __int64 v108; // rbp
  __int64 v109; // r12
  __int64 v110; // rdx
  _BYTE *v111; // rdx
  _BYTE *v112; // rax
  _BYTE *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rbp
  __int64 v116; // r12
  __int64 v117; // rdx
  __int64 v118; // rdx
  _WORD *v119; // rdx
  unsigned __int64 v120; // rax
  __int64 v121; // rbp
  __int64 v122; // r12
  __int64 v123; // r15
  __int64 v124; // rdx
  __int64 v125; // rdx
  _WORD *v126; // rdx
  _WORD *v127; // rdx
  __int64 v129; // rdx
  _BYTE *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rdi
  __int64 v133; // rdi
  unsigned int v134; // edx
  __int64 v135; // rsi
  void *v136; // rdx
  _WORD *v137; // rdx
  __int64 v138; // rdx
  int v139; // ebp
  __int64 v140; // r13
  int v141; // r14d
  unsigned __int8 *v142; // rax
  _BYTE *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rdi
  __int64 v146; // rax
  _BYTE *v147; // rdx
  void *v148; // rdx
  unsigned __int8 *v149; // rsi
  __int64 v150; // rdx
  unsigned __int8 *v151; // rsi
  unsigned __int8 *v152; // rdx
  void *v153; // rax
  void *v154; // rdx
  _WORD *v155; // rdx
  _WORD *v156; // rdx
  _BYTE *v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __m128i si128; // xmm0
  size_t v162; // [rsp+18h] [rbp-180h] BYREF
  __m128i *v163; // [rsp+20h] [rbp-178h]
  void **v164; // [rsp+28h] [rbp-170h]
  unsigned __int8 v165; // [rsp+33h] [rbp-165h]
  int v166; // [rsp+34h] [rbp-164h]
  size_t v167; // [rsp+38h] [rbp-160h]
  __m128i *v168; // [rsp+40h] [rbp-158h] BYREF
  void *v169; // [rsp+48h] [rbp-150h]
  __m128i v170; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v171[2]; // [rsp+60h] [rbp-138h] BYREF
  __m128i v172; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int8 *v173; // [rsp+80h] [rbp-118h]
  void *v174[2]; // [rsp+90h] [rbp-108h] BYREF
  __m128i v175; // [rsp+A0h] [rbp-F8h] BYREF
  void *v176; // [rsp+B0h] [rbp-E8h]
  __int64 v177; // [rsp+B8h] [rbp-E0h]
  __m128i v178; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int8 *v179; // [rsp+D0h] [rbp-C8h]
  char v180; // [rsp+D8h] [rbp-C0h]
  void *v181; // [rsp+E0h] [rbp-B8h] BYREF
  void *v182; // [rsp+E8h] [rbp-B0h]
  __m128i v183; // [rsp+F0h] [rbp-A8h] BYREF
  void *v184; // [rsp+100h] [rbp-98h] BYREF
  __int64 v185; // [rsp+108h] [rbp-90h]
  __m128i v186; // [rsp+110h] [rbp-88h] BYREF
  unsigned __int8 *v187; // [rsp+120h] [rbp-78h]
  const char *v188; // [rsp+128h] [rbp-70h]
  __int64 v189; // [rsp+130h] [rbp-68h]
  int v190; // [rsp+138h] [rbp-60h]
  const char *v191; // [rsp+140h] [rbp-58h]
  __int64 v192; // [rsp+148h] [rbp-50h]
  int v193; // [rsp+150h] [rbp-48h]

  v4 = a2;
  v166 = a4;
  v165 = a4;
  sub_2259350(a2, a3);
  v6 = *((_BYTE *)a1 + 904);
  v7 = *(_QWORD **)(a2 + 32);
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 9u )
    {
      qmemcpy(v7, "framework ", 10);
      v7 = (_QWORD *)(*(_QWORD *)(a2 + 32) + 10LL);
      *(_QWORD *)(a2 + 32) = v7;
    }
    else
    {
      sub_22581D0(a2, "framework ", 10);
      v7 = *(_QWORD **)(a2 + 32);
    }
    v6 = *((_BYTE *)a1 + 904);
  }
  v8 = *(_QWORD *)(a2 + 24) - (_QWORD)v7;
  if ( (v6 & 0x20) != 0 )
  {
    if ( v8 > 8 )
    {
      *((_BYTE *)v7 + 8) = 32;
      *v7 = 0x746963696C707865LL;
      v7 = (_QWORD *)(*(_QWORD *)(a2 + 32) + 9LL);
      *(_QWORD *)(a2 + 32) = v7;
    }
    else
    {
      sub_22581D0(a2, "explicit ", 9);
      v7 = *(_QWORD **)(a2 + 32);
    }
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 <= 6u )
      goto LABEL_4;
LABEL_267:
    *(_DWORD *)v7 = 1969516397;
    *((_WORD *)v7 + 2) = 25964;
    *((_BYTE *)v7 + 6) = 32;
    v9 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 7LL);
    *(_QWORD *)(a2 + 32) = v9;
    goto LABEL_5;
  }
  if ( v8 > 6 )
    goto LABEL_267;
LABEL_4:
  sub_22581D0(a2, "module ", 7);
  v9 = *(_BYTE **)(a2 + 32);
LABEL_5:
  v10 = a1[1];
  v11 = *a1;
  if ( !v10 )
    goto LABEL_7;
  v12 = *v11;
  if ( (byte_23ED5E0[2 * v12] & 0xE0) == 0 )
    goto LABEL_7;
  if ( &v10[(_QWORD)v11] != v11 )
  {
    if ( !byte_23D3460[v12] )
    {
LABEL_7:
      if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v9 )
      {
LABEL_48:
        sub_2257CD0(a2, 34);
      }
      else
      {
LABEL_8:
        *(_QWORD *)(a2 + 32) = v9 + 1;
        *v9 = 34;
      }
      sub_2257D50(a2, v11, v10, 0);
      v13 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a2 + 24) )
      {
        sub_2257CD0(a2, 34);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v13 + 1;
        *v13 = 34;
      }
      goto LABEL_11;
    }
    v30 = *a1;
    while ( &v10[(_QWORD)v11] != ++v30 )
    {
      if ( !byte_23D3460[*v30] )
      {
        if ( *(_QWORD *)(a2 + 24) > (unsigned __int64)v9 )
          goto LABEL_8;
        goto LABEL_48;
      }
    }
  }
  v31 = (size_t)a1[1];
  v32 = *a1;
  if ( (unsigned __int64)v10 <= *(_QWORD *)(v4 + 24) - (_QWORD)v9 )
  {
    memcpy(v9, v32, v31);
    *(_QWORD *)(v4 + 32) += v10;
    if ( ((_BYTE)a1[113] & 0xC0) == 0 )
      goto LABEL_12;
    goto LABEL_51;
  }
  sub_22581D0(v4, v32, v31);
LABEL_11:
  if ( ((_BYTE)a1[113] & 0xC0) == 0 )
    goto LABEL_12;
LABEL_51:
  sub_2259350(v4, a3 + 2);
  v33 = *((_BYTE *)a1 + 904);
  if ( (v33 & 0x40) != 0 )
  {
    v159 = *(_QWORD *)(v4 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v159) > 8 )
    {
      *(_BYTE *)(v159 + 8) = 93;
      *(_QWORD *)v159 = 0x6D65747379735B20LL;
      *(_QWORD *)(v4 + 32) += 9LL;
    }
    else
    {
      sub_22581D0(v4, " [system]", 9);
    }
    v33 = *((_BYTE *)a1 + 904);
  }
  if ( v33 < 0 )
    sub_971800(v4, " [extern_c]");
LABEL_12:
  v14 = *(_QWORD *)(v4 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v14) > 2 )
  {
    *(_BYTE *)(v14 + 2) = 10;
    *(_WORD *)v14 = 31520;
    *(_QWORD *)(v4 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(v4, " {\n", 3);
  }
  if ( *((_DWORD *)a1 + 202) )
  {
    sub_2259350(v4, a3 + 2);
    v138 = *(_QWORD *)(v4 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v138) > 8 )
    {
      *(_BYTE *)(v138 + 8) = 32;
      *(_QWORD *)v138 = 0x7365726975716572LL;
      *(_QWORD *)(v4 + 32) += 9LL;
    }
    else
    {
      sub_22581D0(v4, "requires ", 9);
    }
    v139 = *((_DWORD *)a1 + 202);
    v140 = 0;
    v141 = 0;
    if ( v139 )
    {
      v142 = a1[100];
      if ( !v142[32] )
        goto LABEL_304;
      while ( 1 )
      {
        ++v141;
        sub_22581D0(v4, *(_QWORD *)v142, *((_QWORD *)v142 + 1));
        if ( v139 == v141 )
          break;
        v156 = *(_WORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v156 > 1u )
        {
          *v156 = 8236;
          *(_QWORD *)(v4 + 32) += 2LL;
        }
        else
        {
          sub_22581D0(v4, ", ", 2);
        }
        v140 += 40;
        v142 = &a1[100][v140];
        if ( !v142[32] )
        {
LABEL_304:
          v157 = *(_BYTE **)(v4 + 32);
          if ( *(_BYTE **)(v4 + 24) == v157 )
          {
            sub_22581D0(v4, "!", 1);
          }
          else
          {
            *v157 = 33;
            ++*(_QWORD *)(v4 + 32);
          }
          v142 = &a1[100][v140];
        }
      }
    }
    v143 = *(_BYTE **)(v4 + 32);
    if ( *(_BYTE **)(v4 + 24) == v143 )
    {
      sub_22581D0(v4, "\n", 1);
    }
    else
    {
      *v143 = 10;
      ++*(_QWORD *)(v4 + 32);
    }
  }
  v15 = *((_BYTE *)a1 + 96);
  if ( v15 == 1 )
  {
    v16 = a1[16];
    v17 = a1[17];
    v164 = &v181;
    v181 = &v183;
    sub_FC9480(&v181, v16, (__int64)&v17[(_QWORD)v16]);
    v18 = a1[20];
    v19 = a1[21];
    v184 = &v186;
    sub_FC9480(&v184, v18, (__int64)&v19[(_QWORD)v18]);
    v187 = a1[11];
    v174[0] = &v175;
    if ( v181 == &v183 )
    {
      v175 = _mm_load_si128(&v183);
    }
    else
    {
      v174[0] = v181;
      v175.m128i_i64[0] = v183.m128i_i64[0];
    }
    v20 = v182;
    v182 = nullptr;
    v183.m128i_i8[0] = 0;
    v174[1] = v20;
    v181 = v164 + 2;
    v176 = &v178;
    if ( v184 == v164 + 6 )
    {
      v178 = _mm_load_si128(&v186);
    }
    else
    {
      v176 = v184;
      v178.m128i_i64[0] = v186.m128i_i64[0];
    }
    v180 = 1;
    v177 = v185;
    v179 = v187;
    sub_2259350(v4, a3 + 2);
    v21 = *(__m128i **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v21 > 0x10u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385320);
      v21[1].m128i_i8[0] = 34;
      *v21 = si128;
      *(_QWORD *)(v4 + 32) += 17LL;
    }
    else
    {
      sub_22581D0(v4, "umbrella header \"", 17);
    }
    sub_2257D50(v4, v174[0], v174[1], 0);
    v22 = *(_WORD **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v22 > 1u )
    {
      *v22 = 2594;
      *(_QWORD *)(v4 + 32) += 2LL;
    }
    else
    {
      sub_22581D0(v4, "\"\n", 2);
    }
    v23 = v180;
    goto LABEL_25;
  }
  v180 = 0;
  if ( v15 == 2 )
  {
    v149 = a1[16];
    v150 = (__int64)&a1[17][(_QWORD)v149];
    v168 = &v170;
    sub_FC9480(&v168, v149, v150);
    v151 = a1[20];
    v152 = a1[21];
    v171[0] = &v172;
    sub_FC9480(v171, v151, (__int64)&v152[(_QWORD)v151]);
    v173 = a1[11];
    v164 = &v181;
    v181 = &v183;
    if ( v168 == &v170 )
    {
      v183 = _mm_load_si128(&v170);
    }
    else
    {
      v181 = v168;
      v183.m128i_i64[0] = v170.m128i_i64[0];
    }
    v153 = v169;
    v170.m128i_i8[0] = 0;
    v169 = nullptr;
    v182 = v153;
    v168 = &v170;
    v184 = v164 + 6;
    if ( (__m128i *)v171[0] == &v172 )
    {
      v186 = _mm_load_si128(&v172);
    }
    else
    {
      v184 = (void *)v171[0];
      v186.m128i_i64[0] = v172.m128i_i64[0];
    }
    LOBYTE(v188) = 1;
    v185 = v171[1];
    v187 = v173;
    sub_2259350(v4, a3 + 2);
    v154 = *(void **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v154 > 9u )
    {
      qmemcpy(v154, "umbrella \"", 10);
      *(_QWORD *)(v4 + 32) += 10LL;
    }
    else
    {
      sub_22581D0(v4, "umbrella \"", 10);
    }
    sub_2257D50(v4, v181, v182, 0);
    v155 = *(_WORD **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v155 > 1u )
    {
      *v155 = 2594;
      *(_QWORD *)(v4 + 32) += 2LL;
    }
    else
    {
      sub_22581D0(v4, "\"\n", 2);
    }
    if ( (_BYTE)v188 )
    {
      if ( v184 != v164 + 6 )
        operator delete(v184);
      if ( v181 != v164 + 2 )
        operator delete(v181);
    }
    v23 = v180;
LABEL_25:
    if ( v23 )
    {
      if ( v176 != &v178 )
        operator delete(v176);
      if ( v174[0] != &v175 )
        operator delete(v174[0]);
    }
    if ( a1[213] != a1[214] )
      goto LABEL_31;
LABEL_247:
    if ( (*((_BYTE *)a1 + 905) & 0x10) == 0 )
      goto LABEL_56;
    goto LABEL_31;
  }
  v164 = &v181;
  if ( a1[213] == a1[214] )
    goto LABEL_247;
LABEL_31:
  sub_2259350(v4, a3 + 2);
  v24 = *(void **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v24 > 0xDu )
  {
    qmemcpy(v24, "config_macros ", 14);
    *(_QWORD *)(v4 + 32) += 14LL;
  }
  else
  {
    sub_22581D0(v4, "config_macros ", 14);
  }
  if ( (*((_BYTE *)a1 + 905) & 0x10) != 0 )
  {
    v148 = *(void **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v148 > 0xBu )
    {
      qmemcpy(v148, "[exhaustive]", 12);
      *(_QWORD *)(v4 + 32) += 12LL;
    }
    else
    {
      sub_22581D0(v4, "[exhaustive]", 12);
    }
  }
  v25 = a1[213];
  v26 = (a1[214] - v25) >> 5;
  if ( (_DWORD)v26 )
  {
    v27 = (unsigned int)(v26 - 1);
    for ( i = 0; ; ++i )
    {
      sub_22581D0(v4, *(_QWORD *)&v25[32 * i], *(_QWORD *)&v25[32 * i + 8]);
      if ( v27 == i )
        break;
      if ( (_DWORD)i != -1 )
      {
        v29 = *(_WORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v29 <= 1u )
        {
          sub_22581D0(v4, ", ", 2);
        }
        else
        {
          *v29 = 8236;
          *(_QWORD *)(v4 + 32) += 2LL;
        }
      }
      v25 = a1[213];
    }
  }
  v34 = *(_BYTE **)(v4 + 32);
  if ( *(_BYTE **)(v4 + 24) == v34 )
  {
    sub_22581D0(v4, "\n", 1);
  }
  else
  {
    *v34 = 10;
    ++*(_QWORD *)(v4 + 32);
  }
LABEL_56:
  v182 = nullptr;
  v181 = (void *)&byte_22CD811;
  v183.m128i_i64[1] = (__int64)"textual ";
  v186.m128i_i64[0] = (__int64)"private ";
  v188 = "private textual ";
  v191 = "exclude ";
  v183.m128i_i32[0] = 0;
  v35 = (__m128i *)v164;
  v184 = byte_8;
  LODWORD(v185) = 1;
  v186.m128i_i64[1] = 8;
  LODWORD(v187) = 2;
  v189 = 16;
  v190 = 3;
  v192 = 8;
  v193 = 4;
  v163 = (__m128i *)(v164 + 15);
  v162 = (size_t)a1;
  do
  {
    v36 = v162 + 4LL * v35[1].m128i_i32[0];
    v37 = (_QWORD *)(72LL * *(unsigned int *)(v36 + 420) + *(_QWORD *)(v162 + 448));
    v38 = *(_QWORD *)(v162 + 448) + 72LL * *(unsigned int *)(v36 + 424);
    if ( v37 != (_QWORD *)v38 )
    {
      while ( 1 )
      {
        sub_2259350(v4, a3 + 2);
        v39 = *(_QWORD **)(v4 + 32);
        v40 = v35->m128i_u64[1];
        v41 = (const void *)v35->m128i_i64[0];
        v42 = *(_QWORD *)(v4 + 24) - (_QWORD)v39;
        if ( v42 < v40 )
        {
          v43 = sub_22581D0(v4, v41, v35->m128i_i64[1]);
          v39 = *(_QWORD **)(v43 + 32);
          if ( *(_QWORD *)(v43 + 24) - (_QWORD)v39 <= 7u )
            goto LABEL_62;
        }
        else
        {
          v43 = v4;
          if ( v40 )
          {
            memcpy(v39, v41, v35->m128i_u64[1]);
            v129 = *(_QWORD *)(v4 + 24);
            v43 = v4;
            v39 = (_QWORD *)(*(_QWORD *)(v4 + 32) + v40);
            *(_QWORD *)(v4 + 32) = v39;
            v42 = v129 - (_QWORD)v39;
          }
          if ( v42 <= 7 )
          {
LABEL_62:
            sub_22581D0(v43, "header \"", 8);
            goto LABEL_63;
          }
        }
        *v39 = 0x2220726564616568LL;
        *(_QWORD *)(v43 + 32) += 8LL;
LABEL_63:
        sub_2257D50(v4, *v37, v37[1], 0);
        v44 = *(_QWORD *)(v4 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v44) > 8 )
        {
          *(_BYTE *)(v44 + 8) = 32;
          v45 = v4;
          *(_QWORD *)v44 = 0x657A6973207B2022LL;
          *(_QWORD *)(v4 + 32) += 9LL;
        }
        else
        {
          v45 = sub_22581D0(v4, "\" { size ", 9);
        }
        v46 = v37[8];
        while ( 1 )
        {
          v47 = *(_QWORD *)(v46 + 8);
          if ( !v47 )
            break;
          v46 = v47 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v47 & 4) == 0 || !v46 )
            goto LABEL_69;
        }
        v46 = 0;
LABEL_69:
        v48 = sub_2257BF0(v45, *(_QWORD *)(v46 + 32));
        v49 = *(_QWORD *)(v48 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v48 + 24) - v49) > 6 )
        {
          *(_DWORD *)v49 = 1769237792;
          *(_WORD *)(v49 + 4) = 25965;
          *(_BYTE *)(v49 + 6) = 32;
          *(_QWORD *)(v48 + 32) += 7LL;
        }
        else
        {
          v48 = sub_22581D0(v48, " mtime ", 7);
        }
        v50 = v37[8];
        while ( 1 )
        {
          v51 = *(_QWORD *)(v50 + 8);
          if ( !v51 )
            break;
          v50 = v51 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v51 & 4) == 0 || !v50 )
            goto LABEL_75;
        }
        v50 = 0;
LABEL_75:
        v52 = sub_2257BF0(v48, *(_QWORD *)(v50 + 40));
        v53 = *(_QWORD *)(v52 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v53) > 2 )
        {
          v37 += 9;
          *(_BYTE *)(v53 + 2) = 10;
          *(_WORD *)v53 = 32032;
          *(_QWORD *)(v52 + 32) += 3LL;
          if ( (_QWORD *)v38 == v37 )
            break;
        }
        else
        {
          v37 += 9;
          sub_22581D0(v52, " }\n", 3);
          if ( (_QWORD *)v38 == v37 )
            break;
        }
      }
    }
    v35 = (__m128i *)((char *)v35 + 24);
  }
  while ( v163 != v35 );
  v54 = v164;
  v167 = v162;
  v162 += 704LL;
  v55 = v174;
  v163 = &v175;
  *(__m128 *)v174 = _mm_loadh_ps((const double *)&v162);
  do
  {
    v56 = *(int **)*v55;
    v57 = &v56[20 * *((unsigned int *)*v55 + 2)];
    if ( v56 != v57 )
    {
      while ( 1 )
      {
        sub_2259350(v4, a3 + 2);
        v58 = *(_QWORD **)(v4 + 32);
        v59 = &v54[3 * *v56];
        v60 = *(_QWORD *)(v4 + 24) - (_QWORD)v58;
        v61 = (size_t)v59[1];
        v62 = *v59;
        if ( v61 > v60 )
        {
          v63 = sub_22581D0(v4, v62, v59[1]);
          v58 = *(_QWORD **)(v63 + 32);
          if ( *(_QWORD *)(v63 + 24) - (_QWORD)v58 <= 7u )
            goto LABEL_84;
        }
        else
        {
          v63 = v4;
          if ( v61 )
          {
            v162 = v61;
            memcpy(v58, v62, v61);
            v131 = *(_QWORD *)(v4 + 24);
            v63 = v4;
            v58 = (_QWORD *)(v162 + *(_QWORD *)(v4 + 32));
            *(_QWORD *)(v4 + 32) = v58;
            v60 = v131 - (_QWORD)v58;
          }
          if ( v60 <= 7 )
          {
LABEL_84:
            sub_22581D0(v63, "header \"", 8);
            goto LABEL_85;
          }
        }
        *v58 = 0x2220726564616568LL;
        *(_QWORD *)(v63 + 32) += 8LL;
LABEL_85:
        sub_2257D50(v4, *((_QWORD *)v56 + 1), *((_QWORD *)v56 + 2), 0);
        v64 = *(_BYTE **)(v4 + 32);
        if ( *(_BYTE **)(v4 + 24) == v64 )
        {
          sub_22581D0(v4, "\"", 1);
          v65 = *(_WORD **)(v4 + 32);
        }
        else
        {
          *v64 = 34;
          v65 = (_WORD *)(*(_QWORD *)(v4 + 32) + 1LL);
          *(_QWORD *)(v4 + 32) = v65;
        }
        if ( !*((_BYTE *)v56 + 56) && !*((_BYTE *)v56 + 72) )
          goto LABEL_95;
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v65 > 1u )
        {
          *v65 = 31520;
          v66 = *(_QWORD *)(v4 + 32) + 2LL;
          *(_QWORD *)(v4 + 32) = v66;
        }
        else
        {
          sub_22581D0(v4, " {", 2);
          v66 = *(_QWORD *)(v4 + 32);
        }
        v67 = *(_QWORD *)(v4 + 24) - v66;
        if ( *((_BYTE *)v56 + 56) )
        {
          if ( v67 > 5 )
          {
            *(_DWORD *)v66 = 2053731104;
            v133 = v4;
            *(_WORD *)(v66 + 4) = 8293;
            *(_QWORD *)(v4 + 32) += 6LL;
          }
          else
          {
            v133 = sub_22581D0(v4, " size ", 6);
          }
          sub_2257BF0(v133, *((_QWORD *)v56 + 6));
          v66 = *(_QWORD *)(v4 + 32);
          v67 = *(_QWORD *)(v4 + 24) - v66;
        }
        if ( *((_BYTE *)v56 + 72) )
        {
          if ( v67 > 6 )
          {
            *(_DWORD *)v66 = 1769237792;
            *(_WORD *)(v66 + 4) = 25965;
            v132 = v4;
            *(_BYTE *)(v66 + 6) = 32;
            *(_QWORD *)(v4 + 32) += 7LL;
          }
          else
          {
            v132 = sub_22581D0(v4, " mtime ", 7);
          }
          sub_2257BF0(v132, *((_QWORD *)v56 + 8));
          v66 = *(_QWORD *)(v4 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v66) > 1 )
          {
LABEL_212:
            *(_WORD *)v66 = 32032;
            v65 = (_WORD *)(*(_QWORD *)(v4 + 32) + 2LL);
            *(_QWORD *)(v4 + 32) = v65;
            goto LABEL_95;
          }
        }
        else if ( v67 > 1 )
        {
          goto LABEL_212;
        }
        sub_22581D0(v4, " }", 2);
        v65 = *(_WORD **)(v4 + 32);
LABEL_95:
        if ( v65 == *(_WORD **)(v4 + 24) )
        {
          v56 += 20;
          sub_22581D0(v4, "\n", 1);
          if ( v57 == v56 )
            break;
        }
        else
        {
          v56 += 20;
          *(_BYTE *)v65 = 10;
          ++*(_QWORD *)(v4 + 32);
          if ( v57 == v56 )
            break;
        }
      }
    }
    ++v55;
  }
  while ( v163 != (__m128i *)v55 );
  v68 = v167;
  if ( *(_QWORD *)(v167 + 200) )
  {
    sub_2259350(v4, a3 + 2);
    v144 = *(_QWORD *)(v4 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v144) > 8 )
    {
      *(_BYTE *)(v144 + 8) = 115;
      v145 = v4;
      *(_QWORD *)v144 = 0x615F74726F707865LL;
      *(_QWORD *)(v4 + 32) += 9LL;
    }
    else
    {
      v145 = sub_22581D0(v4, "export_as", 9);
    }
    v146 = sub_22581D0(v145, *(_QWORD *)(v68 + 192), *(_QWORD *)(v68 + 200));
    v147 = *(_BYTE **)(v146 + 32);
    if ( *(_BYTE **)(v146 + 24) == v147 )
    {
      sub_22581D0(v146, "\n", 1);
    }
    else
    {
      *v147 = 10;
      ++*(_QWORD *)(v146 + 32);
    }
  }
  v69 = *(_QWORD **)(v68 + 264);
  v70 = *(_QWORD **)(v68 + 256);
  for ( j = v165; v69 != v70; ++v70 )
  {
    if ( (*(_WORD *)(*v70 + 904LL) & 0x110) != 0x100 )
      sub_FCB850(*v70, v4, a3 + 2, j);
  }
  v72 = *(_DWORD *)(v68 + 1040);
  if ( v72 )
  {
    v73 = 0;
    v74 = 8LL * (unsigned int)(v72 - 1) + 8;
    while ( 1 )
    {
      sub_2259350(v4, a3 + 2);
      v75 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v75) > 6 )
      {
        *(_DWORD *)v75 = 1869641829;
        *(_WORD *)(v75 + 4) = 29810;
        *(_BYTE *)(v75 + 6) = 32;
        *(_QWORD *)(v4 + 32) += 7LL;
      }
      else
      {
        sub_22581D0(v4, "export ", 7);
      }
      v76 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v68 + 1032) + v73) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v76 )
      {
        sub_FCB120((__int64)v174, v76, 1);
        sub_22581D0(v4, v174[0], v174[1]);
        if ( v174[0] != &v175 )
          operator delete(v174[0]);
        v77 = *(char **)(v4 + 24);
        v78 = *(char **)(v4 + 32);
        if ( (*(_BYTE *)(*(_QWORD *)(v68 + 1032) + v73) & 4) == 0 )
          goto LABEL_111;
        if ( (unsigned __int64)(v77 - v78) > 1 )
        {
          *(_WORD *)v78 = 10798;
          v78 = (char *)(*(_QWORD *)(v4 + 32) + 2LL);
          *(_QWORD *)(v4 + 32) = v78;
        }
        else
        {
          sub_22581D0(v4, ".*", 2);
          v78 = *(char **)(v4 + 32);
        }
      }
      else
      {
        v130 = *(_BYTE **)(v4 + 32);
        if ( *(_BYTE **)(v4 + 24) == v130 )
        {
          sub_22581D0(v4, "*", 1);
          v78 = *(char **)(v4 + 32);
        }
        else
        {
          *v130 = 42;
          v78 = (char *)(*(_QWORD *)(v4 + 32) + 1LL);
          *(_QWORD *)(v4 + 32) = v78;
        }
      }
      v77 = *(char **)(v4 + 24);
LABEL_111:
      if ( v78 == v77 )
      {
        v73 += 8;
        sub_22581D0(v4, "\n", 1);
        if ( v73 == v74 )
          break;
      }
      else
      {
        v73 += 8;
        *v78 = 10;
        ++*(_QWORD *)(v4 + 32);
        if ( v74 == v73 )
          break;
      }
    }
  }
  v79 = *(_DWORD *)(v68 + 1072);
  if ( v79 )
  {
    v80 = 0;
    v81 = 112 * ((unsigned int)(v79 - 1) + 1LL);
    while ( 1 )
    {
      sub_2259350(v4, a3 + 2);
      v82 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v82) > 6 )
      {
        *(_DWORD *)v82 = 1869641829;
        *(_WORD *)(v82 + 4) = 29810;
        *(_BYTE *)(v82 + 6) = 32;
        *(_QWORD *)(v4 + 32) += 7LL;
      }
      else
      {
        sub_22581D0(v4, "export ", 7);
      }
      sub_FC9540(
        v4,
        *(unsigned __int8 ***)(v80 + *(_QWORD *)(v68 + 1064) + 8),
        (unsigned __int8 **)(*(_QWORD *)(v80 + *(_QWORD *)(v68 + 1064) + 8)
                           + 40LL * *(unsigned int *)(v80 + *(_QWORD *)(v68 + 1064) + 16)));
      v83 = v80 + *(_QWORD *)(v68 + 1064);
      if ( *(_BYTE *)(v83 + 104) )
      {
        v84 = ".*";
        if ( !*(_DWORD *)(v83 + 16) )
          v84 = "*";
        v85 = strlen(v84);
        v86 = *(_QWORD *)(v4 + 32);
        if ( v85 <= *(_QWORD *)(v4 + 24) - v86 )
        {
          if ( (_DWORD)v85 )
          {
            v134 = 0;
            do
            {
              v135 = v134++;
              *(_BYTE *)(v86 + v135) = v84[v135];
            }
            while ( v134 < (unsigned int)v85 );
            v86 = *(_QWORD *)(v4 + 32);
          }
          v87 = (_BYTE *)(v86 + v85);
          *(_QWORD *)(v4 + 32) = v87;
          goto LABEL_123;
        }
        sub_22581D0(v4, v84, v85);
      }
      v87 = *(_BYTE **)(v4 + 32);
LABEL_123:
      if ( v87 == *(_BYTE **)(v4 + 24) )
      {
        v80 += 112;
        sub_22581D0(v4, "\n", 1);
        if ( v80 == v81 )
          break;
      }
      else
      {
        v80 += 112;
        *v87 = 10;
        ++*(_QWORD *)(v4 + 32);
        if ( v81 == v80 )
          break;
      }
    }
  }
  if ( (_BYTE)v166 )
  {
    v88 = *(__int64 ***)(v68 + 944);
    v89 = &v88[*(unsigned int *)(v68 + 952)];
    if ( v89 != v88 )
    {
      LODWORD(v162) = a3 + 2;
      v163 = &v175;
      do
      {
        while ( 1 )
        {
          v90 = (unsigned int)v162;
          v91 = *v88;
          sub_2259350(v4, (unsigned int)v162);
          v92 = sub_2259990(v4, v90);
          v93 = *(_QWORD *)(v92 + 32);
          v94 = v92;
          if ( (unsigned __int64)(*(_QWORD *)(v92 + 24) - v93) > 6 )
          {
            *(_DWORD *)v93 = 1869639017;
            *(_WORD *)(v93 + 4) = 29810;
            *(_BYTE *)(v93 + 6) = 32;
            *(_QWORD *)(v92 + 32) += 7LL;
          }
          else
          {
            v94 = sub_22581D0(v92, "import ", 7);
          }
          sub_FCB120((__int64)v174, v91, 0);
          v95 = sub_22581D0(v94, v174[0], v174[1]);
          v96 = *(_BYTE **)(v95 + 32);
          if ( *(_BYTE **)(v95 + 24) == v96 )
          {
            sub_22581D0(v95, "\n", 1);
          }
          else
          {
            *v96 = 10;
            ++*(_QWORD *)(v95 + 32);
          }
          if ( v174[0] == v163 )
            break;
          operator delete(v174[0]);
          if ( v89 == ++v88 )
            goto LABEL_134;
        }
        ++v88;
      }
      while ( v89 != v88 );
    }
  }
LABEL_134:
  v97 = *(_DWORD *)(v68 + 1312);
  if ( v97 )
  {
    v98 = 0;
    v99 = 8LL * (unsigned int)(v97 - 1) + 8;
    do
    {
      while ( 1 )
      {
        sub_2259350(v4, a3 + 2);
        v100 = *(_DWORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v100 > 3u )
        {
          *v100 = 543519605;
          *(_QWORD *)(v4 + 32) += 4LL;
        }
        else
        {
          sub_22581D0(v4, "use ", 4);
        }
        sub_FCB120((__int64)v174, *(__int64 **)(*(_QWORD *)(v68 + 1304) + v98), 1);
        sub_22581D0(v4, v174[0], v174[1]);
        if ( v174[0] != &v175 )
          operator delete(v174[0]);
        v101 = *(_BYTE **)(v4 + 32);
        if ( v101 != *(_BYTE **)(v4 + 24) )
          break;
        v98 += 8;
        sub_22581D0(v4, "\n", 1);
        if ( v98 == v99 )
          goto LABEL_142;
      }
      v98 += 8;
      *v101 = 10;
      ++*(_QWORD *)(v4 + 32);
    }
    while ( v98 != v99 );
  }
LABEL_142:
  v102 = *(_DWORD *)(v68 + 1344);
  if ( v102 )
  {
    v103 = 0;
    v104 = 32 * (3LL * (unsigned int)(v102 - 1) + 3);
    do
    {
      while ( 1 )
      {
        sub_2259350(v4, a3 + 2);
        v105 = *(_DWORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v105 > 3u )
        {
          *v105 = 543519605;
          *(_QWORD *)(v4 + 32) += 4LL;
        }
        else
        {
          sub_22581D0(v4, "use ", 4);
        }
        sub_FC9540(
          v4,
          *(unsigned __int8 ***)(v103 + *(_QWORD *)(v68 + 1336)),
          (unsigned __int8 **)(*(_QWORD *)(v103 + *(_QWORD *)(v68 + 1336))
                             + 40LL * *(unsigned int *)(v103 + *(_QWORD *)(v68 + 1336) + 8)));
        v106 = *(_BYTE **)(v4 + 32);
        if ( v106 != *(_BYTE **)(v4 + 24) )
          break;
        v103 += 96;
        sub_22581D0(v4, "\n", 1);
        if ( v104 == v103 )
          goto LABEL_148;
      }
      v103 += 96;
      *v106 = 10;
      ++*(_QWORD *)(v4 + 32);
    }
    while ( v103 != v104 );
  }
LABEL_148:
  v107 = *(_DWORD *)(v68 + 1608);
  if ( v107 )
  {
    v108 = 0;
    v109 = 8 * (5LL * (unsigned int)(v107 - 1) + 5);
    while ( 1 )
    {
      sub_2259350(v4, a3 + 2);
      v110 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v110) > 4 )
      {
        *(_DWORD *)v110 = 1802398060;
        *(_BYTE *)(v110 + 4) = 32;
        v111 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 5LL);
        *(_QWORD *)(v4 + 32) = v111;
      }
      else
      {
        sub_22581D0(v4, "link ", 5);
        v111 = *(_BYTE **)(v4 + 32);
      }
      v112 = *(_BYTE **)(v4 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v68 + 1600) + v108 + 32) )
      {
        if ( (unsigned __int64)(v112 - v111) > 9 )
        {
          qmemcpy(v111, "framework ", 10);
          v111 = (_BYTE *)(*(_QWORD *)(v4 + 32) + 10LL);
          *(_QWORD *)(v4 + 32) = v111;
        }
        else
        {
          sub_22581D0(v4, "framework ", 10);
          v111 = *(_BYTE **)(v4 + 32);
        }
        if ( v111 != *(_BYTE **)(v4 + 24) )
        {
LABEL_219:
          *v111 = 34;
          ++*(_QWORD *)(v4 + 32);
          goto LABEL_155;
        }
      }
      else if ( v111 != v112 )
      {
        goto LABEL_219;
      }
      sub_22581D0(v4, "\"", 1);
LABEL_155:
      sub_2257D50(v4, *(_QWORD *)(v108 + *(_QWORD *)(v68 + 1600)), *(_QWORD *)(v108 + *(_QWORD *)(v68 + 1600) + 8), 0);
      v113 = *(_BYTE **)(v4 + 32);
      if ( v113 == *(_BYTE **)(v4 + 24) )
      {
        v108 += 40;
        sub_22581D0(v4, "\"", 1);
        if ( v109 == v108 )
          break;
      }
      else
      {
        v108 += 40;
        *v113 = 34;
        ++*(_QWORD *)(v4 + 32);
        if ( v109 == v108 )
          break;
      }
    }
  }
  v114 = (__int64)(*(_QWORD *)(v68 + 1736) - *(_QWORD *)(v68 + 1728)) >> 7;
  if ( (_DWORD)v114 )
  {
    v115 = 0;
    v116 = ((unsigned int)(v114 - 1) + 1LL) << 7;
    do
    {
      while ( 1 )
      {
        sub_2259350(v4, a3 + 2);
        v117 = *(_QWORD *)(v4 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v117) > 8 )
        {
          *(_QWORD *)v117 = 0x7463696C666E6F63LL;
          *(_BYTE *)(v117 + 8) = 32;
          *(_QWORD *)(v4 + 32) += 9LL;
        }
        else
        {
          sub_22581D0(v4, "conflict ", 9);
        }
        sub_FC9540(
          v4,
          *(unsigned __int8 ***)(v115 + *(_QWORD *)(v68 + 1728)),
          (unsigned __int8 **)(*(_QWORD *)(v115 + *(_QWORD *)(v68 + 1728))
                             + 40LL * *(unsigned int *)(v115 + *(_QWORD *)(v68 + 1728) + 8)));
        v118 = *(_QWORD *)(v4 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v118) > 2 )
        {
          *(_BYTE *)(v118 + 2) = 34;
          *(_WORD *)v118 = 8236;
          *(_QWORD *)(v4 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v4, ", \"", 3);
        }
        sub_2257D50(
          v4,
          *(_QWORD *)(v115 + *(_QWORD *)(v68 + 1728) + 96),
          *(_QWORD *)(v115 + *(_QWORD *)(v68 + 1728) + 104),
          0);
        v119 = *(_WORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v119 > 1u )
          break;
        v115 += 128;
        sub_22581D0(v4, "\"\n", 2);
        if ( v115 == v116 )
          goto LABEL_165;
      }
      v115 += 128;
      *v119 = 2594;
      *(_QWORD *)(v4 + 32) += 2LL;
    }
    while ( v116 != v115 );
  }
LABEL_165:
  v120 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(v68 + 1760) - *(_QWORD *)(v68 + 1752)) >> 3);
  if ( (_DWORD)v120 )
  {
    v121 = 0;
    v122 = v4;
    v123 = 8 * (5LL * (unsigned int)(v120 - 1) + 5);
    do
    {
      while ( 1 )
      {
        sub_2259350(v122, a3 + 2);
        v124 = *(_QWORD *)(v122 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v122 + 24) - v124) > 8 )
        {
          *(_QWORD *)v124 = 0x7463696C666E6F63LL;
          *(_BYTE *)(v124 + 8) = 32;
          *(_QWORD *)(v122 + 32) += 9LL;
        }
        else
        {
          sub_22581D0(v122, "conflict ", 9);
        }
        sub_FCB120((__int64)v174, *(__int64 **)(*(_QWORD *)(v68 + 1752) + v121), 1);
        sub_22581D0(v122, v174[0], v174[1]);
        if ( v174[0] != &v175 )
          operator delete(v174[0]);
        v125 = *(_QWORD *)(v122 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v122 + 24) - v125) > 2 )
        {
          *(_BYTE *)(v125 + 2) = 34;
          *(_WORD *)v125 = 8236;
          *(_QWORD *)(v122 + 32) += 3LL;
        }
        else
        {
          sub_22581D0(v122, ", \"", 3);
        }
        sub_2257D50(
          v122,
          *(_QWORD *)(v121 + *(_QWORD *)(v68 + 1752) + 8),
          *(_QWORD *)(v121 + *(_QWORD *)(v68 + 1752) + 16),
          0);
        v126 = *(_WORD **)(v122 + 32);
        if ( *(_QWORD *)(v122 + 24) - (_QWORD)v126 > 1u )
          break;
        v121 += 40;
        sub_22581D0(v122, "\"\n", 2);
        if ( v121 == v123 )
          goto LABEL_175;
      }
      v121 += 40;
      *v126 = 2594;
      *(_QWORD *)(v122 + 32) += 2LL;
    }
    while ( v121 != v123 );
LABEL_175:
    v4 = v122;
  }
  if ( (*(_BYTE *)(v68 + 905) & 2) != 0 )
  {
    sub_2259350(v4, a3 + 2);
    if ( (*(_BYTE *)(v68 + 905) & 4) != 0 )
    {
      v158 = *(_QWORD *)(v4 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v158) > 8 )
      {
        *(_BYTE *)(v158 + 8) = 32;
        *(_QWORD *)v158 = 0x746963696C707865LL;
        v136 = (void *)(*(_QWORD *)(v4 + 32) + 9LL);
        *(_QWORD *)(v4 + 32) = v136;
        goto LABEL_251;
      }
      sub_22581D0(v4, "explicit ", 9);
    }
    v136 = *(void **)(v4 + 32);
LABEL_251:
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v136 > 0xAu )
    {
      qmemcpy(v136, "module * {\n", 11);
      *(_QWORD *)(v4 + 32) += 11LL;
    }
    else
    {
      sub_22581D0(v4, "module * {\n", 11);
    }
    if ( (*(_BYTE *)(v68 + 905) & 8) != 0 )
    {
      sub_2259350(v4, a3 + 4);
      sub_971800(v4, "export *\n");
    }
    sub_2259350(v4, a3 + 2);
    v137 = *(_WORD **)(v4 + 32);
    if ( *(_QWORD *)(v4 + 24) - (_QWORD)v137 > 1u )
    {
      *v137 = 2685;
      *(_QWORD *)(v4 + 32) += 2LL;
    }
    else
    {
      sub_22581D0(v4, "}\n", 2);
    }
  }
  sub_2259350(v4, a3);
  v127 = *(_WORD **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v127 <= 1u )
    return sub_22581D0(v4, "}\n", 2);
  *v127 = 2685;
  *(_QWORD *)(v4 + 32) += 2LL;
  return 2685;
}

