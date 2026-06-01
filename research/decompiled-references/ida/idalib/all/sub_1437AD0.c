void __fastcall sub_1437AD0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r12
  int v11; // ebp
  __int64 v12; // rax
  int v13; // ebx
  __int64 *p_ptr; // r12
  __int64 v15; // rbx
  size_t v16; // rax
  char *v17; // r14
  int *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 **v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 **v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rsi
  unsigned __int64 *v29; // rcx
  int v30; // esi
  int v31; // r11d
  unsigned __int64 v32; // rdx
  unsigned int i; // eax
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // rdi
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rbx
  char *v40; // rax
  size_t v41; // r15
  char *v42; // rbp
  _QWORD *v43; // r14
  unsigned __int64 v44; // rdx
  void *v45; // rax
  volatile signed __int32 *v46; // rbx
  signed __int32 v47; // eax
  signed __int32 v48; // eax
  _BYTE *v49; // rsi
  __int64 v50; // rdx
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  size_t v53; // rax
  char v54; // dl
  void *v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // r14
  unsigned int v59; // eax
  size_t v60; // rdx
  size_t *v61; // rcx
  size_t k; // rax
  unsigned __int64 v63; // rax
  size_t v64; // rbx
  size_t v65; // rax
  unsigned __int8 *v66; // rbx
  _BYTE *v67; // rsi
  __int64 v68; // r8
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  void **v74; // rbx
  _BYTE *v75; // rdi
  __int64 v76; // rax
  unsigned __int8 *v77; // rbx
  signed __int64 v78; // r8
  _BYTE *v79; // rsi
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  void **v85; // rbx
  _BYTE *v86; // rdi
  __int64 v87; // rax
  void **v88; // rbx
  unsigned __int64 v89; // rax
  __int64 v90; // r13
  int *v91; // r14
  void **v92; // rbp
  __int64 v93; // rbx
  void *v94; // rdi
  void **v95; // rdi
  void **v96; // rdi
  void **v97; // r13
  size_t v98; // rax
  char *v99; // rbx
  size_t v100; // r8
  size_t v101; // rax
  _QWORD *v102; // rdx
  __int64 j; // rax
  unsigned __int64 v104; // rax
  void *v105; // rax
  unsigned __int64 v106; // rdx
  size_t v107; // rdx
  size_t v108; // rdx
  __int64 v109; // rdx
  __int64 *v110; // rdi
  __int64 v111; // rcx
  _DWORD *v112; // rax
  _DWORD *v113; // rdx
  unsigned __int64 v114; // rdx
  int v115; // eax
  unsigned __int64 v116; // rdx
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  signed __int64 v122; // r12
  __int64 v123; // rbp
  unsigned __int8 *v124; // r14
  __int64 v125; // rbx
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rbp
  unsigned __int8 *v132; // r14
  __int64 v133; // rbx
  __int64 v134; // r13
  void *v135; // rdi
  unsigned int v136; // [rsp+Ch] [rbp-2ACh]
  _QWORD *v137; // [rsp+18h] [rbp-2A0h]
  size_t *v138; // [rsp+18h] [rbp-2A0h]
  char *v139; // [rsp+18h] [rbp-2A0h]
  void **v140; // [rsp+18h] [rbp-2A0h]
  __int64 v141; // [rsp+18h] [rbp-2A0h]
  __int64 v142; // [rsp+18h] [rbp-2A0h]
  signed __int64 v143; // [rsp+18h] [rbp-2A0h]
  signed __int64 v144; // [rsp+18h] [rbp-2A0h]
  size_t v145; // [rsp+18h] [rbp-2A0h]
  _BYTE *v146; // [rsp+18h] [rbp-2A0h]
  __int64 *v147; // [rsp+18h] [rbp-2A0h]
  __int64 v148; // [rsp+20h] [rbp-298h]
  size_t *v149; // [rsp+30h] [rbp-288h]
  __int64 *v150; // [rsp+38h] [rbp-280h]
  _BYTE *v151; // [rsp+40h] [rbp-278h]
  int *v152; // [rsp+40h] [rbp-278h]
  _QWORD *v153; // [rsp+50h] [rbp-268h]
  size_t v154; // [rsp+50h] [rbp-268h]
  size_t v155; // [rsp+50h] [rbp-268h]
  size_t v156; // [rsp+50h] [rbp-268h]
  char *v157; // [rsp+50h] [rbp-268h]
  int *v158; // [rsp+50h] [rbp-268h]
  char *v159; // [rsp+58h] [rbp-260h]
  int *v160; // [rsp+60h] [rbp-258h]
  char *v161; // [rsp+68h] [rbp-250h]
  unsigned __int64 v162; // [rsp+70h] [rbp-248h]
  char *v163; // [rsp+78h] [rbp-240h]
  int v164; // [rsp+80h] [rbp-238h] BYREF
  __int64 v165; // [rsp+88h] [rbp-230h]
  char v166[8]; // [rsp+90h] [rbp-228h] BYREF
  __int64 v167; // [rsp+98h] [rbp-220h]
  volatile signed __int32 *v168; // [rsp+A0h] [rbp-218h]
  void *src; // [rsp+B0h] [rbp-208h] BYREF
  size_t n; // [rsp+B8h] [rbp-200h]
  _WORD v171[16]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v172; // [rsp+E0h] [rbp-1D8h] BYREF
  size_t v173; // [rsp+E8h] [rbp-1D0h]
  _QWORD v174[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int16 v175; // [rsp+100h] [rbp-1B8h]
  void *v176; // [rsp+110h] [rbp-1A8h] BYREF
  size_t v177; // [rsp+118h] [rbp-1A0h]
  _QWORD v178[2]; // [rsp+120h] [rbp-198h] BYREF
  __int16 v179; // [rsp+130h] [rbp-188h]
  void *v180; // [rsp+140h] [rbp-178h] BYREF
  unsigned __int64 v181; // [rsp+148h] [rbp-170h]
  __int64 v182; // [rsp+150h] [rbp-168h]
  void *v183; // [rsp+160h] [rbp-158h]
  __int64 v184; // [rsp+170h] [rbp-148h] BYREF
  __int16 v185; // [rsp+180h] [rbp-138h]
  void *v186; // [rsp+190h] [rbp-128h]
  size_t v187; // [rsp+198h] [rbp-120h]
  __m128i si128; // [rsp+1A0h] [rbp-118h] BYREF
  void *v189; // [rsp+1B0h] [rbp-108h]
  __int64 v190; // [rsp+1B8h] [rbp-100h]
  __m128i v191; // [rsp+1C0h] [rbp-F8h] BYREF
  unsigned __int64 v192; // [rsp+1D0h] [rbp-E8h]
  char v193; // [rsp+1D8h] [rbp-E0h]
  void *ptr; // [rsp+1E0h] [rbp-D8h] BYREF
  size_t v195[2]; // [rsp+1E8h] [rbp-D0h] BYREF
  _QWORD v196[2]; // [rsp+200h] [rbp-B8h] BYREF
  __m128i v197; // [rsp+210h] [rbp-A8h] BYREF
  unsigned __int64 v198; // [rsp+220h] [rbp-98h]

  v2 = a1;
  if ( *(_BYTE *)(a2 + 96) == 1 )
  {
    v49 = *(_BYTE **)(a2 + 128);
    v50 = (__int64)&v49[*(_QWORD *)(a2 + 136)];
    ptr = &v195[1];
    sub_14360A0(&ptr, v49, v50);
    v51 = *(_BYTE **)(a2 + 160);
    v52 = *(_QWORD *)(a2 + 168);
    v196[0] = &v197;
    sub_14360A0(v196, v51, (__int64)&v51[v52]);
    v198 = *(_QWORD *)(a2 + 88);
    v186 = &si128;
    if ( ptr == &v195[1] )
    {
      si128 = _mm_load_si128((const __m128i *)&v195[1]);
    }
    else
    {
      v186 = ptr;
      si128.m128i_i64[0] = v195[1];
    }
    v53 = v195[0];
    v195[0] = 0;
    LOBYTE(v195[1]) = 0;
    v187 = v53;
    ptr = &v195[1];
    v189 = &v191;
    if ( (__m128i *)v196[0] == &v197 )
    {
      v191 = _mm_load_si128(&v197);
    }
    else
    {
      v189 = (void *)v196[0];
      v191.m128i_i64[0] = v197.m128i_i64[0];
    }
    v193 = 1;
    v190 = v196[1];
    v192 = v198;
  }
  else
  {
    v193 = 0;
  }
  v4 = a1[11];
  v5 = v192;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !v6 )
      break;
    v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) == 0 || !v5 )
      goto LABEL_7;
  }
  v5 = 0;
LABEL_7:
  v7 = sub_10210B0(v4, v5);
  v10 = (_QWORD *)v2[11];
  LOBYTE(ptr) = 0;
  v11 = v7;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_68;
  if ( v7 < 0 )
  {
    v56 = (unsigned int)(-2 - v7);
    v57 = *(_QWORD *)(v10[40] + 8LL * ((unsigned int)(-2 - v7) >> 6));
    if ( _bittest64(&v57, v56) )
    {
      v58 = (_QWORD *)(v10[34] + 8 * ((unsigned __int64)(int)v56 >> 5));
      if ( *v58 )
      {
        v12 = *v58 + 24 * (v56 & 0x1F);
        goto LABEL_10;
      }
      v110 = (__int64 *)(v10[36] & 0xFFFFFFFFFFFFFFF8LL);
      v111 = *v110;
      v110[10] += 768;
      v112 = (_DWORD *)((v111 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v110[1] >= (unsigned __int64)(v112 + 192) && v111 )
        *v110 = (__int64)(v112 + 192);
      else
        v112 = (_DWORD *)sub_986170((__int64)v110, 768, 768, 3, v8, v9);
      *v58 = v112;
      v113 = v112 + 192;
      do
      {
        *v112 = 0;
        v112 += 6;
        *((_OWORD *)v112 - 1) = 0;
        *((_QWORD *)v112 - 1) = 0;
      }
      while ( v112 != v113 );
      v54 = (char)ptr;
      v12 = *v58 + 24 * (v56 & 0x1F);
    }
    else
    {
      v12 = sub_101F930((__int64)v10, v56, &ptr);
      v54 = (char)ptr;
    }
    if ( v54 )
    {
LABEL_68:
      v136 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v12 = v10[23] + 24LL * (unsigned int)v7;
  }
LABEL_10:
  if ( !v12 || *(char *)(v12 + 3) < 0 )
    goto LABEL_68;
  v13 = *(_DWORD *)v12;
  v136 = (v13 & 0x7FFFFFFF) + sub_101FBC0((__int64)v10, v11);
LABEL_13:
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v2[6] + 32LL), 0x58Du, v136, v2[6], v8, v9) == 1 )
    goto LABEL_58;
  p_ptr = (__int64 *)&ptr;
  v148 = v2[13] + 632LL;
  v164 = 0;
  v149 = (size_t *)sub_FEF250(a2);
  v15 = *(_QWORD *)(v2[10] + 8LL);
  v165 = std::_V2::system_category((std::_V2 *)a2);
  v16 = *v149;
  v17 = v166;
  LOWORD(v196[0]) = 261;
  v18 = &v164;
  ptr = v149 + 4;
  v195[0] = v16;
  sub_2261190(v166, v15, &ptr, &v164);
  v19 = v167;
  if ( !v167 || v164 )
    goto LABEL_50;
  v150 = (__int64 *)a2;
  while ( 2 )
  {
    v20 = sub_228AB90(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) - 16LL) + 8LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) - 16LL) + 16LL),
            0);
    if ( v21 == 2 )
    {
      if ( *(_WORD *)v20 != 26670 && *(_WORD *)v20 != 18478 )
        goto LABEL_19;
    }
    else if ( v21 == 3 )
    {
      if ( *(_WORD *)v20 != 26670 || *(_BYTE *)(v20 + 2) != 104 )
        goto LABEL_19;
    }
    else if ( v21 != 4 || *(_DWORD *)v20 != 1886414894 )
    {
      goto LABEL_19;
    }
    sub_FD9C70(
      (__int64)p_ptr,
      v2[10],
      *(const void **)(*(_QWORD *)(*(_QWORD *)(v167 + 8) - 16LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v167 + 8) - 16LL) + 16LL),
      0,
      1,
      1);
    if ( (v195[0] & 1) != 0 )
    {
      v55 = ptr;
      ptr = nullptr;
      v176 = v55;
      sub_A05760(&v180, (_QWORD **)&v176);
      if ( v176 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v176 + 8LL))(v176);
      sub_A04D90(p_ptr);
      goto LABEL_19;
    }
    v22 = (unsigned __int64 **)ptr;
    v137 = ptr;
    sub_A04D90(p_ptr);
    if ( !v22 )
      goto LABEL_19;
    v23 = v2[11];
    v24 = v22;
    while ( 1 )
    {
      v25 = (unsigned __int64)v24[1];
      if ( !v25 )
        break;
      v25 &= 0xFFFFFFFFFFFFFFF8LL;
      v26 = (unsigned __int64)v24[1] & 4;
      v24 = (unsigned __int64 **)v25;
      if ( !v26 || !v25 )
        goto LABEL_31;
    }
    v24 = nullptr;
LABEL_31:
    v27 = *(_QWORD *)(v23 + 120);
    v28 = *(unsigned int *)(v23 + 136);
    v29 = (unsigned __int64 *)(v27 + 16 * v28);
    if ( !(_DWORD)v28 )
      goto LABEL_40;
    v30 = v28 - 1;
    v31 = 1;
    v32 = 0x9DDFEA08EB382D69LL * (HIDWORD(v25) ^ (((8 * v25) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
    for ( i = v30
            & (-348639895
             * ((-348639895 * ((v32 >> 47) ^ v32 ^ HIDWORD(v25)))
              ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v32 >> 47) ^ v32 ^ HIDWORD(v25))) >> 32) >> 15))); ; i = v30 & v59 )
    {
      v34 = (unsigned __int64 *)(v27 + 16LL * i);
      v35 = *v34;
      if ( *v34 != -4096 && v35 != -8192 )
        break;
      if ( v35 == -4096 )
        goto LABEL_40;
LABEL_89:
      v59 = v31 + i;
      ++v31;
    }
    while ( 1 )
    {
      v36 = *(_QWORD *)(v35 + 8);
      if ( !v36 )
        break;
      v35 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v36 & 4) == 0 || !v35 )
        goto LABEL_38;
    }
    v35 = 0;
LABEL_38:
    if ( (unsigned __int64 **)v35 != v24 )
      goto LABEL_89;
    if ( v29 != v34 )
      goto LABEL_19;
LABEL_40:
    if ( (unsigned __int8)sub_1403880(v148, (unsigned __int64)v22) )
      goto LABEL_19;
    v37 = v2[10];
    ptr = p_ptr + 3;
    *(__m128i *)v195 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v38 = v22[2];
    v39 = *v38;
    v40 = (char *)(v38 + 4);
    v163 = v40;
    v162 = v39;
    if ( v39 )
    {
      v153 = v2;
      v41 = v149[1];
      v160 = v18;
      v42 = v40;
      v161 = v17;
      while ( 1 )
      {
        sub_FD9440((__int64)&v180, v37, v42, v39, 1);
        if ( (v181 & 1) != 0 )
        {
          v45 = v180;
          v180 = nullptr;
          v172 = v45;
          sub_A05760(&v176, (_QWORD **)&v172);
          if ( v172 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v172 + 8LL))(v172);
          sub_A04D70((__int64 *)&v180);
        }
        else
        {
          v43 = v180;
          sub_A04D70((__int64 *)&v180);
          if ( v43 && v41 == v43[1] )
          {
            v2 = v153;
            v18 = v160;
            v17 = v161;
            if ( v162 < v39 )
            {
              v100 = 0;
              v101 = 0;
            }
            else
            {
              v195[0] = 0;
              v98 = v162 - v39;
              v99 = &v163[v39];
              v100 = v98;
              v101 = 0;
              if ( v100 > v195[1] )
              {
                v154 = v100;
                sub_2236E10(p_ptr, p_ptr + 3, v100, 1);
                v101 = v195[0];
                v100 = v154;
              }
              if ( v100 )
              {
                v155 = v100;
                memcpy((char *)ptr + v101, v99, v100);
                v101 = v195[0];
                v100 = v155;
              }
            }
            v102 = v137;
            v195[0] = v100 + v101;
            v171[8] = 257;
            v175 = 257;
            v179 = 257;
            for ( j = v137[1]; j; j = *(_QWORD *)(v104 + 8) )
            {
              if ( (j & 4) == 0 )
                break;
              v104 = j & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v104 )
                break;
              v102 = (_QWORD *)v104;
            }
            v105 = (void *)sub_228AA60(v102 + 4, *v102, 0);
            LOWORD(v183) = 261;
            v181 = v106;
            v180 = v105;
            sub_228A3B0(p_ptr, &v180, &v176, &v172, &src);
            goto LABEL_100;
          }
        }
        v42 = (char *)sub_228A4B0(v42, v39, 0);
        v39 = v44;
        if ( !v44 )
        {
          v2 = v153;
          v18 = v160;
          v17 = v161;
          v60 = v195[1];
          v61 = v137;
          goto LABEL_91;
        }
      }
    }
    v60 = 128;
    v61 = v137;
LABEL_91:
    for ( k = v61[1]; k; k = *(_QWORD *)(v63 + 8) )
    {
      if ( (k & 4) == 0 )
        break;
      v63 = k & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v63 )
        break;
      v61 = (size_t *)v63;
    }
    v64 = *v61;
    v138 = v61;
    v65 = 0;
    v195[0] = 0;
    if ( v60 < v64 )
    {
      sub_2236E10(p_ptr, p_ptr + 3, v64, 1);
      v65 = v195[0];
    }
    if ( v64 )
    {
      memcpy((char *)ptr + v65, v138 + 4, v64);
      v65 = v195[0];
    }
    v195[0] = v64 + v65;
LABEL_100:
    sub_FC70B0((__int64)&v180, v2[6], v136, 1421);
    sub_FEEE60((__int64)&src, v150, 0);
    v66 = (unsigned __int8 *)v180;
    v67 = src;
    v68 = n;
    if ( !v180 )
    {
      v116 = v181;
      v117 = *(_DWORD *)(v181 + 14976);
      if ( v117 )
      {
        v127 = (unsigned int)(v117 - 1);
        *(_DWORD *)(v181 + 14976) = v127;
        v66 = *(unsigned __int8 **)(v116 + 8 * v127 + 14848);
        v128 = *((unsigned int *)v66 + 134);
        *v66 = 0;
        v129 = *((_QWORD *)v66 + 66);
        *((_DWORD *)v66 + 106) = 0;
        v130 = v129 + (v128 << 6);
        if ( v129 != v130 )
        {
          v158 = v18;
          v131 = v129;
          v159 = v17;
          v132 = v66;
          v133 = v130;
          v134 = v68;
          do
          {
            while ( 1 )
            {
              v133 -= 64;
              v135 = *(void **)(v133 + 24);
              if ( v135 == (void *)(v133 + 40) )
                break;
              operator delete(v135);
              if ( v131 == v133 )
                goto LABEL_211;
            }
          }
          while ( v131 != v133 );
LABEL_211:
          v68 = v134;
          v66 = v132;
          v18 = v158;
          v17 = v159;
        }
        *((_DWORD *)v66 + 134) = 0;
      }
      else
      {
        v156 = n;
        v146 = src;
        v66 = (unsigned __int8 *)operator new(0x3A0u);
        *v66 = 0;
        *((_QWORD *)v66 + 12) = v66 + 112;
        *((_QWORD *)v66 + 16) = v66 + 144;
        *((_QWORD *)v66 + 20) = v66 + 176;
        *((_QWORD *)v66 + 24) = v66 + 208;
        *((_QWORD *)v66 + 28) = v66 + 240;
        *((_QWORD *)v66 + 32) = v66 + 272;
        *((_QWORD *)v66 + 36) = v66 + 304;
        *((_QWORD *)v66 + 40) = v66 + 336;
        *((_QWORD *)v66 + 44) = v66 + 368;
        *((_QWORD *)v66 + 48) = v66 + 400;
        *((_QWORD *)v66 + 52) = v66 + 432;
        *((_QWORD *)v66 + 13) = 0;
        v66[112] = 0;
        *((_QWORD *)v66 + 17) = 0;
        v66[144] = 0;
        *((_QWORD *)v66 + 21) = 0;
        v66[176] = 0;
        *((_QWORD *)v66 + 25) = 0;
        v66[208] = 0;
        *((_QWORD *)v66 + 29) = 0;
        v66[240] = 0;
        *((_QWORD *)v66 + 33) = 0;
        v66[272] = 0;
        *((_QWORD *)v66 + 37) = 0;
        v66[304] = 0;
        *((_QWORD *)v66 + 41) = 0;
        v66[336] = 0;
        *((_QWORD *)v66 + 45) = 0;
        v66[368] = 0;
        *((_QWORD *)v66 + 49) = 0;
        v66[400] = 0;
        *((_QWORD *)v66 + 53) = 0x800000000LL;
        v67 = v146;
        *((_QWORD *)v66 + 66) = v66 + 544;
        v68 = v156;
        *((_QWORD *)v66 + 67) = 0x600000000LL;
      }
      v180 = v66;
    }
    v66[*v66 + 1] = 0;
    v176 = v178;
    if ( &v67[v68] && !v67 )
      goto LABEL_220;
    if ( (unsigned __int64)v68 > 0xF )
    {
      if ( v68 >= 0 )
      {
        v142 = v68;
        v69 = (_QWORD *)operator new(v68 + 1);
        v68 = v142;
        v176 = v69;
        v178[0] = v142;
        goto LABEL_163;
      }
      goto LABEL_219;
    }
    if ( v68 == 1 )
    {
      LOBYTE(v178[0]) = *v67;
      v69 = v178;
      goto LABEL_106;
    }
    v69 = v178;
    if ( v68 )
    {
LABEL_163:
      v141 = v68;
      memcpy(v69, v67, v68);
      v69 = v176;
      v68 = v141;
    }
LABEL_106:
    v177 = v68;
    *((_BYTE *)v69 + v68) = 0;
    v70 = v180;
    v71 = *(unsigned __int8 *)v180;
    *(_BYTE *)v180 = v71 + 1;
    v72 = (unsigned __int8)v71;
    v73 = 4 * (v71 + 3);
    v74 = (void **)&v70[v73];
    v75 = (_BYTE *)v70[v73];
    if ( v176 == v178 )
    {
      v108 = v177;
      if ( v177 )
      {
        if ( v177 == 1 )
          *v75 = v178[0];
        else
          memcpy(v75, v176, v177);
        v108 = v177;
        v75 = *v74;
      }
      v74[1] = (void *)v108;
      v75[v108] = 0;
      v75 = v176;
    }
    else
    {
      if ( v75 == (_BYTE *)&v70[v73 + 2] )
      {
        *v74 = v176;
        v74[1] = (void *)v177;
        v74[2] = (void *)v178[0];
      }
      else
      {
        v76 = v70[4 * v72 + 14];
        *v74 = v176;
        v74[1] = (void *)v177;
        v74[2] = (void *)v178[0];
        if ( v75 )
        {
          v176 = v75;
          v178[0] = v76;
          goto LABEL_110;
        }
      }
      v75 = v178;
      v176 = v178;
    }
LABEL_110:
    v177 = 0;
    *v75 = 0;
    if ( v176 != v178 )
      operator delete(v176);
    v77 = (unsigned __int8 *)v180;
    v78 = v195[0];
    v79 = ptr;
    if ( !v180 )
    {
      v114 = v181;
      v115 = *(_DWORD *)(v181 + 14976);
      if ( v115 )
      {
        v118 = (unsigned int)(v115 - 1);
        *(_DWORD *)(v181 + 14976) = v118;
        v77 = *(unsigned __int8 **)(v114 + 8 * v118 + 14848);
        v119 = *((unsigned int *)v77 + 134);
        *v77 = 0;
        v120 = *((_QWORD *)v77 + 66);
        *((_DWORD *)v77 + 106) = 0;
        v121 = v120 + (v119 << 6);
        if ( v120 != v121 )
        {
          v147 = p_ptr;
          v122 = v78;
          v152 = v18;
          v123 = v120;
          v157 = v17;
          v124 = v77;
          v125 = v121;
          do
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              operator delete(v126);
              if ( v123 == v125 )
                goto LABEL_203;
            }
          }
          while ( v123 != v125 );
LABEL_203:
          v78 = v122;
          v77 = v124;
          p_ptr = v147;
          v18 = v152;
          v17 = v157;
        }
        *((_DWORD *)v77 + 134) = 0;
      }
      else
      {
        v151 = ptr;
        v145 = v195[0];
        v77 = (unsigned __int8 *)operator new(0x3A0u);
        *v77 = 0;
        *((_QWORD *)v77 + 12) = v77 + 112;
        *((_QWORD *)v77 + 16) = v77 + 144;
        *((_QWORD *)v77 + 20) = v77 + 176;
        *((_QWORD *)v77 + 24) = v77 + 208;
        *((_QWORD *)v77 + 28) = v77 + 240;
        *((_QWORD *)v77 + 32) = v77 + 272;
        *((_QWORD *)v77 + 36) = v77 + 304;
        *((_QWORD *)v77 + 40) = v77 + 336;
        *((_QWORD *)v77 + 44) = v77 + 368;
        *((_QWORD *)v77 + 48) = v77 + 400;
        *((_QWORD *)v77 + 52) = v77 + 432;
        *((_QWORD *)v77 + 13) = 0;
        v77[112] = 0;
        *((_QWORD *)v77 + 17) = 0;
        v77[144] = 0;
        *((_QWORD *)v77 + 21) = 0;
        v77[176] = 0;
        *((_QWORD *)v77 + 25) = 0;
        v77[208] = 0;
        *((_QWORD *)v77 + 29) = 0;
        v77[240] = 0;
        *((_QWORD *)v77 + 33) = 0;
        v77[272] = 0;
        *((_QWORD *)v77 + 37) = 0;
        v77[304] = 0;
        *((_QWORD *)v77 + 41) = 0;
        v77[336] = 0;
        *((_QWORD *)v77 + 45) = 0;
        v77[368] = 0;
        *((_QWORD *)v77 + 49) = 0;
        v77[400] = 0;
        *((_QWORD *)v77 + 53) = 0x800000000LL;
        v78 = v145;
        *((_QWORD *)v77 + 66) = v77 + 544;
        v79 = v151;
        *((_QWORD *)v77 + 67) = 0x600000000LL;
      }
      v180 = v77;
    }
    v77[*v77 + 1] = 0;
    v172 = v174;
    if ( &v79[v78] )
    {
      if ( !v79 )
LABEL_220:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
    }
    if ( (unsigned __int64)v78 > 0xF )
    {
      if ( v78 >= 0 )
      {
        v144 = v78;
        v80 = (_QWORD *)operator new(v78 + 1);
        v78 = v144;
        v172 = v80;
        v174[0] = v144;
        goto LABEL_167;
      }
LABEL_219:
      std::__throw_length_error("basic_string::_M_create");
    }
    if ( v78 == 1 )
    {
      LOBYTE(v174[0]) = *v79;
      v80 = v174;
      goto LABEL_118;
    }
    v80 = v174;
    if ( v78 )
    {
LABEL_167:
      v143 = v78;
      memcpy(v80, v79, v78);
      v80 = v172;
      v78 = v143;
    }
LABEL_118:
    v173 = v78;
    *((_BYTE *)v80 + v78) = 0;
    v81 = v180;
    v82 = *(unsigned __int8 *)v180;
    *(_BYTE *)v180 = v82 + 1;
    v83 = (unsigned __int8)v82;
    v84 = 4 * (v82 + 3);
    v85 = (void **)&v81[v84];
    v86 = (_BYTE *)v81[v84];
    if ( v172 == v174 )
    {
      v107 = v173;
      if ( v173 )
      {
        if ( v173 == 1 )
          *v86 = v174[0];
        else
          memcpy(v86, v174, v173);
        v107 = v173;
        v86 = *v85;
      }
      v85[1] = (void *)v107;
      v86[v107] = 0;
      v86 = v172;
    }
    else
    {
      if ( v86 == (_BYTE *)&v81[v84 + 2] )
      {
        *v85 = v172;
        v85[1] = (void *)v173;
        v85[2] = (void *)v174[0];
      }
      else
      {
        v87 = v81[4 * v83 + 14];
        *v85 = v172;
        v85[1] = (void *)v173;
        v85[2] = (void *)v174[0];
        if ( v86 )
        {
          v172 = v86;
          v174[0] = v87;
          goto LABEL_122;
        }
      }
      v172 = v174;
      v86 = v174;
    }
LABEL_122:
    v173 = 0;
    *v86 = 0;
    if ( v172 != v174 )
      operator delete(v172);
    if ( src != v171 )
      operator delete(src);
    if ( (_BYTE)v185 )
    {
      sub_FC7790(v182, (__int64 *)&v180, SHIBYTE(v185));
      v182 = 0;
      v185 = 0;
    }
    if ( v183 != &v184 )
      operator delete(v183);
    v88 = (void **)v180;
    if ( v180 )
    {
      v89 = v181;
      if ( v181 )
      {
        if ( (unsigned __int64)v180 < v181 || (unsigned __int64)v180 > v181 + 14848 )
        {
          v90 = *((_QWORD *)v180 + 66);
          if ( v90 != v90 + ((unsigned __int64)*((unsigned int *)v180 + 134) << 6) )
          {
            v139 = v17;
            v91 = v18;
            v92 = (void **)v180;
            v93 = v90 + ((unsigned __int64)*((unsigned int *)v180 + 134) << 6);
            do
            {
              while ( 1 )
              {
                v93 -= 64;
                v94 = *(void **)(v93 + 24);
                if ( v94 == (void *)(v93 + 40) )
                  break;
                operator delete(v94);
                if ( v90 == v93 )
                  goto LABEL_137;
              }
            }
            while ( v90 != v93 );
LABEL_137:
            v88 = v92;
            v18 = v91;
            v17 = v139;
          }
          v95 = (void **)v88[66];
          if ( v95 != v88 + 68 )
            free(v95);
          v96 = (void **)v88[52];
          v97 = v88 + 52;
          if ( v96 != v88 + 54 )
            free(v96);
          v140 = v88 + 12;
          do
          {
            while ( 1 )
            {
              v97 -= 4;
              if ( *v97 == v97 + 2 )
                break;
              operator delete(*v97);
              if ( v140 == v97 )
                goto LABEL_145;
            }
          }
          while ( v140 != v97 );
LABEL_145:
          operator delete(v88, 0x3A0u);
        }
        else
        {
          v109 = *(unsigned int *)(v181 + 14976);
          *(_DWORD *)(v181 + 14976) = v109 + 1;
          *(_QWORD *)(v89 + 8 * v109 + 14848) = v88;
        }
      }
    }
    if ( ptr != p_ptr + 3 )
      free(ptr);
LABEL_19:
    sub_2260F50(v17, v18);
    v19 = v167;
    if ( v167 && !v164 )
      continue;
    break;
  }
LABEL_50:
  v46 = v168;
  if ( v168 )
  {
    if ( &_pthread_key_create )
    {
      v47 = _InterlockedExchangeAdd(v168 + 2, 0xFFFFFFFF);
    }
    else
    {
      v47 = *((_DWORD *)v168 + 2);
      *((_DWORD *)v168 + 2) = v47 - 1;
    }
    if ( v47 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
      if ( &_pthread_key_create )
      {
        v48 = _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF);
      }
      else
      {
        v48 = *((_DWORD *)v46 + 3);
        *((_DWORD *)v46 + 3) = v48 - 1;
      }
      if ( v48 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 24LL))(v46);
    }
  }
LABEL_58:
  if ( v193 )
  {
    if ( v189 != &v191 )
      operator delete(v189);
    if ( v186 != &si128 )
      operator delete(v186);
  }
}
