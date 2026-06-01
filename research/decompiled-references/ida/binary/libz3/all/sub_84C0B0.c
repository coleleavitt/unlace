void __fastcall sub_84C0B0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  unsigned int **v14; // rax
  unsigned int **v15; // r15
  _QWORD *v16; // r12
  unsigned int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  __m128 v22; // xmm0
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rsi
  unsigned int v32; // ecx
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned int *v42; // r13
  unsigned int v43; // ebx
  unsigned int n; // ebp
  __int64 v45; // rcx
  int v46; // eax
  _QWORD *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  unsigned int v52; // r13d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 *v55; // rbx
  unsigned int v56; // r13d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r14
  _QWORD *v67; // rcx
  __int64 v68; // rax
  int v69; // edi
  unsigned int v70; // edx
  _QWORD *v71; // rsi
  __int64 v72; // rdx
  _QWORD *v73; // r8
  _QWORD *i; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // rsi
  __int64 v78; // rsi
  __int64 v79; // r14
  _QWORD *v80; // rcx
  __int64 v81; // rax
  int v82; // edi
  unsigned int v83; // edx
  _QWORD *v84; // rsi
  __int64 v85; // rdx
  _QWORD *v86; // r8
  _QWORD *j; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rdi
  unsigned __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rsi
  std::ostream *v93; // rax
  __int64 v94; // rdi
  _QWORD *v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rdi
  unsigned __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // r14
  _QWORD *v103; // rcx
  __int64 v104; // rax
  int v105; // edi
  unsigned int v106; // edx
  _QWORD *v107; // rsi
  __int64 v108; // rdx
  _QWORD *v109; // r8
  _QWORD *k; // rdx
  _QWORD *v111; // rax
  __int64 v112; // rdi
  unsigned __int64 v113; // rsi
  __int64 v114; // rsi
  __int64 v115; // r14
  _QWORD *v116; // rcx
  __int64 v117; // rax
  int v118; // edi
  unsigned int v119; // edx
  _QWORD *v120; // rsi
  __int64 v121; // rdx
  _QWORD *v122; // r8
  _QWORD *m; // rdx
  _QWORD *v124; // rax
  __int64 v125; // rdi
  unsigned __int64 v126; // rsi
  __int64 v127; // rsi
  __int64 v128; // rsi
  std::ostream *v129; // rax
  unsigned __int64 v130; // rbp
  __int64 *ii; // rbx
  __int64 v132; // rsi
  __int64 v133; // rsi
  unsigned __int64 v134; // rdi
  __int64 v135; // rsi
  unsigned __int64 v136; // rdi
  __int64 v137; // rsi
  unsigned __int64 v138; // rdi
  _QWORD *v139; // rbx
  void *v140; // rdi
  __int64 *v141; // rbx
  unsigned __int64 v142; // rbp
  __int64 v143; // rsi
  unsigned __int64 v144; // rdi
  __int64 *v145; // rbx
  unsigned __int64 v146; // rbp
  __int64 v147; // rsi
  unsigned __int64 v148; // rdi
  unsigned __int64 v149; // rbp
  __int64 v150; // rsi
  __int64 v151; // rdi
  _QWORD *v152; // rax
  __m128 *v153; // [rsp+0h] [rbp-418h]
  __int64 *v154; // [rsp+8h] [rbp-410h]
  __int64 v155; // [rsp+8h] [rbp-410h]
  __int64 v156; // [rsp+8h] [rbp-410h]
  unsigned int **v157; // [rsp+10h] [rbp-408h]
  __int64 v158; // [rsp+18h] [rbp-400h]
  __int64 v159; // [rsp+20h] [rbp-3F8h]
  _QWORD *v160; // [rsp+28h] [rbp-3F0h]
  __m128i *v161; // [rsp+30h] [rbp-3E8h]
  void *v162; // [rsp+38h] [rbp-3E0h]
  __int64 v163; // [rsp+40h] [rbp-3D8h]
  __int64 v164; // [rsp+40h] [rbp-3D8h]
  __int64 v165; // [rsp+40h] [rbp-3D8h]
  __int64 v166; // [rsp+40h] [rbp-3D8h]
  __int64 v167; // [rsp+40h] [rbp-3D8h]
  __int64 v168; // [rsp+40h] [rbp-3D8h]
  __int64 v169; // [rsp+40h] [rbp-3D8h]
  __int64 v170; // [rsp+40h] [rbp-3D8h]
  __int64 v171; // [rsp+40h] [rbp-3D8h]
  __int64 v172; // [rsp+40h] [rbp-3D8h]
  __int64 v173; // [rsp+60h] [rbp-3B8h]
  __int64 v174; // [rsp+60h] [rbp-3B8h]
  __int64 v175; // [rsp+60h] [rbp-3B8h]
  __int64 v176; // [rsp+60h] [rbp-3B8h]
  __int64 v177; // [rsp+68h] [rbp-3B0h]
  int v178[2]; // [rsp+80h] [rbp-398h] BYREF
  __int64 v179; // [rsp+88h] [rbp-390h]
  __m128 v180; // [rsp+90h] [rbp-388h] BYREF
  __int64 v181[2]; // [rsp+A0h] [rbp-378h] BYREF
  __int64 v182; // [rsp+B0h] [rbp-368h] BYREF
  __int64 v183; // [rsp+B8h] [rbp-360h]
  __int64 v184; // [rsp+C0h] [rbp-358h] BYREF
  __int64 v185; // [rsp+C8h] [rbp-350h]
  __int64 v186; // [rsp+D8h] [rbp-340h] BYREF
  void *ptr; // [rsp+E0h] [rbp-338h]
  __m128 v188; // [rsp+F0h] [rbp-328h] BYREF
  _BYTE v189[32]; // [rsp+100h] [rbp-318h] BYREF
  __m128i v190; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 *v191; // [rsp+130h] [rbp-2E8h]
  unsigned __int64 v192; // [rsp+138h] [rbp-2E0h]
  __int64 *v193; // [rsp+140h] [rbp-2D8h]
  __int64 v194; // [rsp+148h] [rbp-2D0h]
  __int64 v195; // [rsp+150h] [rbp-2C8h]
  __int64 v196; // [rsp+158h] [rbp-2C0h]
  unsigned __int64 v197; // [rsp+160h] [rbp-2B8h]
  __int64 *v198; // [rsp+168h] [rbp-2B0h]
  void *s; // [rsp+170h] [rbp-2A8h]
  __int64 v200; // [rsp+178h] [rbp-2A0h]
  void *v201; // [rsp+180h] [rbp-298h]
  __int64 v202; // [rsp+188h] [rbp-290h]
  int v203; // [rsp+190h] [rbp-288h]
  __int64 v204; // [rsp+198h] [rbp-280h]
  _QWORD v205[2]; // [rsp+1A0h] [rbp-278h] BYREF
  _QWORD v206[19]; // [rsp+1B0h] [rbp-268h] BYREF
  int v207; // [rsp+248h] [rbp-1D0h]
  __int64 v208; // [rsp+250h] [rbp-1C8h]
  _QWORD v209[19]; // [rsp+258h] [rbp-1C0h] BYREF
  int v210; // [rsp+2F0h] [rbp-128h]
  _QWORD v211[18]; // [rsp+2F8h] [rbp-120h] BYREF
  int v212; // [rsp+388h] [rbp-90h]
  __int64 v213; // [rsp+390h] [rbp-88h]
  unsigned __int64 v214; // [rsp+398h] [rbp-80h]
  __int64 v215; // [rsp+3A0h] [rbp-78h]
  unsigned __int64 v216; // [rsp+3A8h] [rbp-70h]
  __int64 v217; // [rsp+3B0h] [rbp-68h]
  unsigned __int64 v218; // [rsp+3B8h] [rbp-60h]
  __int64 v219; // [rsp+3C0h] [rbp-58h]
  _BYTE v220[80]; // [rsp+3C8h] [rbp-50h] BYREF

  v5 = *(_QWORD *)(a3 + 72);
  v159 = a2;
  v158 = a3;
  if ( !v5 || !*(_DWORD *)(v5 - 4) )
    return;
  v6 = *(_QWORD *)(a1 + 16);
  s = v205;
  v191 = nullptr;
  v192 = v6;
  v193 = nullptr;
  v194 = 0;
  v195 = 0;
  v196 = 0;
  v197 = v6;
  v198 = nullptr;
  v200 = 1;
  v201 = nullptr;
  v202 = 0;
  v203 = 1065353216;
  v204 = 0;
  v205[0] = 0;
  v160 = v206;
  v190 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  sub_1584DD0(v206, v6, 0);
  v207 = 0;
  v206[0] = &off_1C4CA60;
  v206[18] = v220;
  v208 = 0;
  sub_1584DD0(v209, v6, 0);
  v209[18] = 0;
  v210 = 0;
  v209[0] = &off_1C61DB8;
  sub_1584DD0(v211, v6, 0);
  v214 = v6;
  v212 = 0;
  v216 = v6;
  v211[0] = &off_1C61DE0;
  v206[0] = &off_1C4CA80;
  v13 = *(_QWORD *)(a1 + 16);
  v213 = 0;
  v177 = v13;
  v14 = *(unsigned int ***)(a3 + 72);
  v215 = 0;
  v217 = 0;
  v218 = v6;
  v219 = 0;
  v220[8] = 1;
  v186 = 0;
  ptr = nullptr;
  if ( !v14 || (v9 = 2LL * *((unsigned int *)v14 - 1), v10 = (_DWORD)v14 + v9 * 8, v157 = &v14[v9], v14 == &v14[v9]) )
  {
    sub_14EC260((unsigned int)&v190, a2, v9 * 8, v10, v11, v12);
    goto LABEL_228;
  }
  v15 = v14;
  v16 = nullptr;
  v17 = 0;
  v161 = &v190;
  while ( 1 )
  {
    v42 = *v15;
    v43 = **v15;
    if ( v43 >= v17 )
      break;
    v18 = ptr;
    v32 = **v15;
    if ( (*((_DWORD *)ptr + (v43 >> 5)) & (1 << v43)) == 0 )
      goto LABEL_7;
    v15 += 2;
    if ( v157 == v15 )
      goto LABEL_37;
LABEL_33:
    v17 = v186;
  }
  sub_186B510(&v186, v43 + 1, 0);
  v18 = ptr;
LABEL_7:
  *((_DWORD *)v18 + (v43 >> 5)) |= 1 << v43;
  v19 = *(_QWORD *)(v158 + 8);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  sub_157BE40(
    (int)v178,
    (int)v160,
    (int)v42,
    v20,
    v19,
    v12,
    (int)v153,
    (__int64)v154,
    (int)v157,
    v158,
    v159,
    (int)v160,
    (__int64)v161,
    v162);
  v21 = *(_QWORD *)v178;
  v22 = _mm_loadh_ps((const double *)(a1 + 16));
  v180 = v22;
  if ( *(_QWORD *)v178 )
    ++*(_DWORD *)(*(_QWORD *)v178 + 8LL);
  sub_1374250(v181, *(_QWORD *)(a1 + 176), v21);
  v153 = &v188;
  sub_848420(&v188, a1, v181[0]);
  v23 = v181[0];
  v24 = v188.m128_u64[0];
  v188.m128_u64[0] = v181[0];
  v181[0] = v24;
  if ( v188.m128_u64[0] )
  {
    v25 = v188.m128_u64[1];
    v26 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v26 )
    {
      sub_15D7BC0(v25, v23);
      v24 = v181[0];
    }
  }
  v27 = sub_842C40(a1 + 32, v180.m128_i64[0], v24);
  sub_14EA0D0(v161, v180.m128_u64[0], v27);
  v162 = *(void **)(a1 + 16);
  v28 = sub_15E1B70((int)v162);
  v29 = *(_QWORD *)(a1 + 176);
  v30 = v28;
  if ( v28 )
  {
    ++*(_DWORD *)(v28 + 8);
    v31 = v28;
    if ( !(unsigned __int8)sub_13742D0(v29, v28) )
    {
LABEL_16:
      ++*(_DWORD *)(v30 + 8);
      goto LABEL_17;
    }
  }
  else
  {
    v31 = 0;
    if ( !(unsigned __int8)sub_13742D0(v29, 0) )
    {
LABEL_17:
      if ( v16 )
        goto LABEL_18;
LABEL_95:
      v95 = (_QWORD *)sub_186B270(0x18u);
      v16 = v95 + 1;
      *v95 = 2;
      v35 = 1;
      v18 = v16;
      goto LABEL_20;
    }
  }
  sub_180B130(v29);
  if ( (unsigned __int8)sub_186A530(*(double *)v22.m128_u64) )
  {
    sub_186A4C0(*(double *)v22.m128_u64);
    v155 = sub_180B150(v29, v31);
    sub_1606360(&v188, v27, *(_QWORD *)(a1 + 16), 0, 0, 0);
    v163 = sub_160E8B0(v155, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v154 = &v184;
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v27);
    sub_160EBE0(v163, &v184);
    std::__ostream_insert<char,std::char_traits<char>>();
    v60 = v184;
    if ( v184 )
    {
      v61 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v61, v60);
    }
    sub_18572D0(v189);
    v62 = sub_180B150(v189, v60);
    v164 = sub_160EC40(v62, &v180);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1374250(&v188, *(_QWORD *)(a1 + 176), v180.m128_u64[0]);
    v63 = sub_160EBE0(v164, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v64 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v63 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v63, v64);
    }
    v65 = sub_180B150(v63, v64);
    v66 = sub_160EBE0(v65, v181);
    std::__ostream_insert<char,std::char_traits<char>>();
    v165 = *(_QWORD *)(a1 + 176);
    v173 = sub_792250(*(_QWORD *)a1);
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v180.m128_u64[0]);
    v67 = *(_QWORD **)v173;
    v68 = *(unsigned int *)(v173 + 8);
    v69 = *(_DWORD *)(v184 + 12);
    v70 = v68 - 1;
    v68 *= 16;
    v71 = (_QWORD *)(*(_QWORD *)v173 + v68);
    v72 = 16LL * (v69 & v70);
    v73 = (_QWORD *)(*(_QWORD *)v173 + v72);
    if ( v72 != v68 )
    {
      for ( i = (_QWORD *)(*(_QWORD *)v173 + v72); v71 != i; i += 2 )
      {
        v75 = (_QWORD *)*i;
        if ( *i > 1u )
        {
          if ( *((_DWORD *)v75 + 3) == v69 && (_QWORD *)v184 == v75 )
          {
            v75 = i;
            goto LABEL_70;
          }
        }
        else if ( !v75 )
        {
          goto LABEL_70;
        }
      }
    }
    if ( v67 == v73 )
    {
LABEL_225:
      v75 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v75 = (_QWORD *)*v67;
          if ( *v67 > 1u )
            break;
          if ( !v75 )
            goto LABEL_70;
          v67 += 2;
          if ( v73 == v67 )
            goto LABEL_225;
        }
        if ( *((_DWORD *)v75 + 3) == v69 && (_QWORD *)v184 == v75 )
          break;
        v67 += 2;
        if ( v73 == v67 )
          goto LABEL_225;
      }
      v75 = v67;
    }
LABEL_70:
    sub_1374250(&v188, v165, *(_QWORD *)v75[1]);
    v76 = sub_160EBE0(v66, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v77 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v76 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v76, v77);
    }
    v78 = v184;
    if ( v184 )
    {
      v76 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v76, v78);
    }
    v166 = sub_180B150(v76, v78);
    sub_1374250(&v182, *(_QWORD *)(a1 + 176), v27);
    v79 = sub_160EBE0(v166, &v182);
    std::__ostream_insert<char,std::char_traits<char>>();
    v167 = *(_QWORD *)(a1 + 176);
    v174 = sub_792250(*(_QWORD *)a1);
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v27);
    v80 = *(_QWORD **)v174;
    v81 = *(unsigned int *)(v174 + 8);
    v82 = *(_DWORD *)(v184 + 12);
    v83 = v81 - 1;
    v81 *= 16;
    v84 = (_QWORD *)(*(_QWORD *)v174 + v81);
    v85 = 16LL * (v82 & v83);
    v86 = (_QWORD *)(*(_QWORD *)v174 + v85);
    if ( v85 != v81 )
    {
      for ( j = (_QWORD *)(*(_QWORD *)v174 + v85); v84 != j; j += 2 )
      {
        v88 = (_QWORD *)*j;
        if ( *j > 1u )
        {
          if ( *((_DWORD *)v88 + 3) == v82 && (_QWORD *)v184 == v88 )
          {
            v88 = j;
            goto LABEL_83;
          }
        }
        else if ( !v88 )
        {
          goto LABEL_83;
        }
      }
    }
    if ( v80 == v86 )
    {
LABEL_207:
      v88 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v88 = (_QWORD *)*v80;
          if ( *v80 > 1u )
            break;
          if ( !v88 )
            goto LABEL_83;
          v80 += 2;
          if ( v86 == v80 )
            goto LABEL_207;
        }
        if ( *((_DWORD *)v88 + 3) == v82 && (_QWORD *)v184 == v88 )
          break;
        v80 += 2;
        if ( v86 == v80 )
          goto LABEL_207;
      }
      v88 = v80;
    }
LABEL_83:
    sub_1374250(&v188, v167, *(_QWORD *)v88[1]);
    v89 = sub_160EBE0(v79, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v90 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v89 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v89, v90);
    }
    v91 = v184;
    if ( v184 )
    {
      v89 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v89, v91);
    }
    v92 = v182;
    if ( v182 )
    {
      v89 = v183;
      v26 = (*(_DWORD *)(v182 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v89, v92);
    }
    v93 = (std::ostream *)sub_180B150(v89, v92);
    v94 = sub_13525A0(v93, *(_QWORD *)(a1 + 176));
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v94, "\n");
  }
  else
  {
    v156 = sub_180B150(v29, v31);
    sub_1606360(&v188, v27, *(_QWORD *)(a1 + 16), 0, 0, 0);
    v168 = sub_160E8B0(v156, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v154 = &v184;
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v27);
    sub_160EBE0(v168, &v184);
    std::__ostream_insert<char,std::char_traits<char>>();
    v96 = v184;
    if ( v184 )
    {
      v97 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v97, v96);
    }
    sub_18572D0(v189);
    v98 = sub_180B150(v189, v96);
    v169 = sub_160EC40(v98, &v180);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1374250(&v188, *(_QWORD *)(a1 + 176), v180.m128_u64[0]);
    v99 = sub_160EBE0(v169, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v100 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v99 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v99, v100);
    }
    v101 = sub_180B150(v99, v100);
    v102 = sub_160EBE0(v101, v181);
    std::__ostream_insert<char,std::char_traits<char>>();
    v170 = *(_QWORD *)(a1 + 176);
    v175 = sub_792250(*(_QWORD *)a1);
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v180.m128_u64[0]);
    v103 = *(_QWORD **)v175;
    v104 = *(unsigned int *)(v175 + 8);
    v105 = *(_DWORD *)(v184 + 12);
    v106 = v104 - 1;
    v104 *= 16;
    v107 = (_QWORD *)(*(_QWORD *)v175 + v104);
    v108 = 16LL * (v105 & v106);
    v109 = (_QWORD *)(*(_QWORD *)v175 + v108);
    if ( v108 != v104 )
    {
      for ( k = (_QWORD *)(*(_QWORD *)v175 + v108); v107 != k; k += 2 )
      {
        v111 = (_QWORD *)*k;
        if ( *k > 1u )
        {
          if ( *((_DWORD *)v111 + 3) == v105 && (_QWORD *)v184 == v111 )
          {
            v111 = k;
            goto LABEL_110;
          }
        }
        else if ( !v111 )
        {
          goto LABEL_110;
        }
      }
    }
    if ( v103 == v109 )
    {
LABEL_216:
      v111 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v111 = (_QWORD *)*v103;
          if ( *v103 > 1u )
            break;
          if ( !v111 )
            goto LABEL_110;
          v103 += 2;
          if ( v109 == v103 )
            goto LABEL_216;
        }
        if ( *((_DWORD *)v111 + 3) == v105 && (_QWORD *)v184 == v111 )
          break;
        v103 += 2;
        if ( v109 == v103 )
          goto LABEL_216;
      }
      v111 = v103;
    }
LABEL_110:
    sub_1374250(&v188, v170, *(_QWORD *)v111[1]);
    v112 = sub_160EBE0(v102, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v113 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v112 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v112, v113);
    }
    v114 = v184;
    if ( v184 )
    {
      v112 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v112, v114);
    }
    v171 = sub_180B150(v112, v114);
    sub_1374250(&v182, *(_QWORD *)(a1 + 176), v27);
    v115 = sub_160EBE0(v171, &v182);
    std::__ostream_insert<char,std::char_traits<char>>();
    v172 = *(_QWORD *)(a1 + 176);
    v176 = sub_792250(*(_QWORD *)a1);
    sub_1374250(&v184, *(_QWORD *)(a1 + 176), v27);
    v116 = *(_QWORD **)v176;
    v117 = *(unsigned int *)(v176 + 8);
    v118 = *(_DWORD *)(v184 + 12);
    v119 = v117 - 1;
    v117 *= 16;
    v120 = (_QWORD *)(*(_QWORD *)v176 + v117);
    v121 = 16LL * (v118 & v119);
    v122 = (_QWORD *)(*(_QWORD *)v176 + v121);
    if ( v121 != v117 )
    {
      for ( m = (_QWORD *)(*(_QWORD *)v176 + v121); v120 != m; m += 2 )
      {
        v124 = (_QWORD *)*m;
        if ( *m > 1u )
        {
          if ( *((_DWORD *)v124 + 3) == v118 && (_QWORD *)v184 == v124 )
          {
            v124 = m;
            goto LABEL_123;
          }
        }
        else if ( !v124 )
        {
          goto LABEL_123;
        }
      }
    }
    if ( v116 == v122 )
    {
LABEL_198:
      v124 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v124 = (_QWORD *)*v116;
          if ( *v116 > 1u )
            break;
          if ( !v124 )
            goto LABEL_123;
          v116 += 2;
          if ( v122 == v116 )
            goto LABEL_198;
        }
        if ( *((_DWORD *)v124 + 3) == v118 && (_QWORD *)v184 == v124 )
          break;
        v116 += 2;
        if ( v122 == v116 )
          goto LABEL_198;
      }
      v124 = v116;
    }
LABEL_123:
    sub_1374250(&v188, v172, *(_QWORD *)v124[1]);
    v125 = sub_160EBE0(v115, &v188);
    std::__ostream_insert<char,std::char_traits<char>>();
    v126 = v188.m128_u64[0];
    if ( v188.m128_u64[0] )
    {
      v125 = v188.m128_i64[1];
      v26 = (*(_DWORD *)(v188.m128_u64[0] + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v125, v126);
    }
    v127 = v184;
    if ( v184 )
    {
      v125 = v185;
      v26 = (*(_DWORD *)(v184 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v125, v127);
    }
    v128 = v182;
    if ( v182 )
    {
      v125 = v183;
      v26 = (*(_DWORD *)(v182 + 8))-- == 1;
      if ( v26 )
        sub_15D7BC0(v125, v128);
    }
    v129 = (std::ostream *)sub_180B150(v125, v128);
    sub_13525A0(v129, *(_QWORD *)(a1 + 176));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  if ( v30 )
    goto LABEL_16;
  if ( !v16 )
    goto LABEL_95;
LABEL_18:
  v33 = *((_DWORD *)v16 - 1);
  if ( v33 == *((_DWORD *)v16 - 2) )
  {
    v56 = (3 * v33 + 1) >> 1;
    v57 = 8 * v56 + 8;
    if ( 8 * v33 + 8 >= (unsigned int)v57 || v33 >= v56 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v188, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v188);
      sub_233E40((__int64)&v188);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v58 = (unsigned int *)sub_186B300(v16 - 1, v57);
    v59 = v58[1];
    v16 = v58 + 2;
    *v58 = v56;
    LODWORD(v58) = v59;
    v18 = &v16[v59];
    v35 = (_DWORD)v58 + 1;
  }
  else
  {
    v34 = v33;
    v35 = v33 + 1;
    v18 = &v16[v34];
  }
LABEL_20:
  *v18 = v30;
  *((_DWORD *)v16 - 1) = v35;
  if ( v30 )
  {
    v26 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v162, v30);
  }
  v36 = v181[0];
  if ( v181[0] )
  {
    v37 = v181[1];
    v26 = (*(_DWORD *)(v181[0] + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v37, v36);
  }
  v38 = v180.m128_u64[0];
  if ( v180.m128_u64[0] )
  {
    v39 = v180.m128_u64[1];
    v26 = (*(_DWORD *)(v180.m128_u64[0] + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v39, v38);
  }
  v40 = *(_QWORD *)v178;
  if ( *(_QWORD *)v178 )
  {
    v41 = v179;
    v26 = (*(_DWORD *)(*(_QWORD *)v178 + 8LL))-- == 1;
    if ( v26 )
      sub_15D7BC0(v41, v40);
  }
  v15 += 2;
  if ( v157 != v15 )
    goto LABEL_33;
LABEL_37:
  sub_14EC260((_DWORD)v161, v159, (_DWORD)v18, v32, v11, v12);
  if ( !v16 )
  {
LABEL_228:
    if ( ptr )
      sub_186B220(ptr);
    goto LABEL_142;
  }
  for ( n = 0; ; ++n )
  {
    v48 = *((unsigned int *)v16 - 1);
    if ( n >= (unsigned int)v48 )
      break;
    v49 = v16[n];
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v50 = *(_QWORD **)(v159 + 8);
    if ( v50 )
    {
      v51 = *((_DWORD *)v50 - 1);
      if ( v51 == *((_DWORD *)v50 - 2) )
      {
        v52 = (3 * v51 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v188, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v188);
          sub_233E40((__int64)&v188);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v50 - 1, v53);
        v50 = v54 + 2;
        *v54 = v52;
        *(_QWORD *)(v159 + 8) = v54 + 2;
        LODWORD(v54) = v54[1];
        v47 = &v50[(unsigned int)v54];
        v46 = (_DWORD)v54 + 1;
      }
      else
      {
        v45 = v51;
        v46 = v51 + 1;
        v47 = &v50[v45];
      }
    }
    else
    {
      v152 = (_QWORD *)sub_186B270(0x18u);
      v50 = v152 + 1;
      *v152 = 2;
      v47 = v152 + 1;
      *(_QWORD *)(v159 + 8) = v152 + 1;
      v46 = 1;
    }
    *v47 = v49;
    *((_DWORD *)v50 - 1) = v46;
  }
  if ( ptr )
  {
    sub_186B220(ptr);
    v48 = *((unsigned int *)v16 - 1);
  }
  v130 = (unsigned __int64)&v16[v48];
  for ( ii = v16; (unsigned __int64)ii < v130; ++ii )
  {
    while ( 1 )
    {
      v132 = *ii;
      if ( *ii )
      {
        v26 = (*(_DWORD *)(v132 + 8))-- == 1;
        if ( v26 )
          break;
      }
      if ( (unsigned __int64)++ii >= v130 )
        goto LABEL_141;
    }
    sub_15D7BC0(v177, v132);
  }
LABEL_141:
  sub_186B220(v16 - 1);
LABEL_142:
  v206[0] = &off_1C4CA60;
  if ( v219 )
    sub_186B220((void *)(v219 - 8));
  v133 = v217;
  if ( v217 )
  {
    v134 = v218;
    v26 = (*(_DWORD *)(v217 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v134, v133);
  }
  v135 = v215;
  if ( v215 )
  {
    v136 = v216;
    v26 = (*(_DWORD *)(v215 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v136, v135);
  }
  v137 = v213;
  if ( v213 )
  {
    v138 = v214;
    v26 = (*(_DWORD *)(v213 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v138, v137);
  }
  v211[0] = &qword_1C637E8;
  sub_15841B0(v211);
  v209[0] = &qword_1C637E8;
  sub_15841B0(v209);
  if ( v208 )
    sub_186B220((void *)(v208 - 8));
  sub_15841B0(v160);
  v139 = v201;
  if ( v201 )
  {
    do
    {
      v140 = v139;
      v139 = (_QWORD *)*v139;
      operator delete(v140, 0x18u);
    }
    while ( v139 );
  }
  memset(s, 0, 8 * v200);
  v202 = 0;
  v201 = nullptr;
  if ( s != v205 )
    operator delete(s, 8 * v200);
  v141 = v198;
  if ( v198 )
  {
    v142 = (unsigned __int64)&v198[*((unsigned int *)v198 - 1)];
    if ( (unsigned __int64)v198 >= v142 )
      goto LABEL_167;
    do
    {
      while ( 1 )
      {
        v143 = *v141;
        if ( *v141 )
        {
          v144 = v197;
          v26 = (*(_DWORD *)(v143 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v141 >= v142 )
          goto LABEL_166;
      }
      sub_15D7BC0(v144, v143);
      ++v141;
    }
    while ( (unsigned __int64)v141 < v142 );
LABEL_166:
    v141 = v198;
    if ( v198 )
LABEL_167:
      sub_186B220(v141 - 1);
  }
  if ( v196 )
    sub_186B220((void *)(v196 - 8));
  if ( v195 )
    sub_186B220((void *)(v195 - 8));
  if ( v194 )
    sub_186B220((void *)(v194 - 8));
  v145 = v193;
  if ( v193 )
  {
    v146 = (unsigned __int64)&v193[*((unsigned int *)v193 - 1)];
    if ( (unsigned __int64)v193 >= v146 )
      goto LABEL_182;
    do
    {
      while ( 1 )
      {
        v147 = *v145;
        if ( *v145 )
        {
          v148 = v192;
          v26 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v145 >= v146 )
          goto LABEL_181;
      }
      sub_15D7BC0(v148, v147);
      ++v145;
    }
    while ( (unsigned __int64)v145 < v146 );
LABEL_181:
    v145 = v193;
    if ( v193 )
LABEL_182:
      sub_186B220(v145 - 1);
  }
  v55 = v191;
  if ( v191 )
  {
    v149 = (unsigned __int64)&v191[*((unsigned int *)v191 - 1)];
    if ( (unsigned __int64)v191 >= v149 )
      goto LABEL_50;
    do
    {
      v150 = *v55;
      if ( *v55 )
      {
        v151 = v190.m128i_i64[1];
        v26 = (*(_DWORD *)(v150 + 8))-- == 1;
        if ( v26 )
          sub_15D7BC0(v151, v150);
      }
      ++v55;
    }
    while ( (unsigned __int64)v55 < v149 );
    v55 = v191;
    if ( v191 )
LABEL_50:
      sub_186B220(v55 - 1);
  }
}

