unsigned __int8 *__fastcall sub_21E4F70(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned __int8 **v8; // r14
  __int64 v9; // rdx
  unsigned __int8 *v10; // r13
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __m128 v13; // xmm0
  __m128i v14; // xmm0
  __int64 v15; // rdx
  unsigned __int8 *v16; // rax
  char *v17; // rdi
  __int64 *v18; // rbp
  __m128 v19; // xmm0
  __m128i v20; // xmm0
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned __int8 *v26; // rbx
  unsigned __int8 *v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int8 *v30; // rbp
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 *v34; // rdi
  __int64 v35; // r9
  unsigned __int64 v36; // rdi
  unsigned __int8 *v37; // r13
  unsigned __int8 *v38; // rbp
  unsigned __int8 *v39; // rax
  void *v40; // rsi
  unsigned __int8 *v41; // r12
  void *v42; // rdi
  void **v43; // rcx
  void **v44; // rdx
  _OWORD *v45; // rdi
  _QWORD *v46; // r12
  void *v47; // rcx
  unsigned __int8 *v48; // rdx
  unsigned __int8 *v49; // rax
  __m128i v51; // xmm1
  unsigned __int8 *v52; // rbx
  _OWORD *v53; // rdi
  size_t v54; // rdx
  __m128i v55; // xmm0
  _BYTE *v56; // r13
  char *v57; // rdx
  __m128i v58; // xmm0
  _BYTE *v59; // r13
  char *v60; // rdx
  __int64 v61; // rbp
  char *v62; // rax
  __m128i v63; // xmm1
  unsigned __int8 *v64; // rdx
  __m128 v65; // xmm0
  __m128i v66; // xmm0
  __m128 v67; // xmm0
  __m128i v68; // xmm0
  __int64 v69; // rdx
  unsigned __int8 v70; // cl
  char v71; // r13
  size_t v72; // rax
  __int64 v73; // rax
  void *v74; // rdi
  void **v75; // rsi
  size_t v76; // r14
  bool v77; // al
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _BYTE *v82; // rax
  unsigned __int8 *v83; // rdx
  __int64 v84; // r14
  __int64 v85; // rbp
  char *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int8 *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r13
  __int64 v94; // rax
  __int64 *v95; // rax
  unsigned __int8 *v96; // rax
  char v97; // dl
  char v98; // al
  _BYTE *v99; // rdx
  char v100; // dl
  char v101; // dl
  char v102; // dl
  char v103; // dl
  char v104; // dl
  _BYTE *v105; // rax
  char *v106; // rax
  char *v107; // r13
  char v108; // r9
  __int64 v109; // rax
  unsigned __int8 *v110; // r14
  __int64 *v111; // rax
  unsigned __int8 *v112; // rax
  __int64 v113; // rdx
  char v114; // dl
  char v115; // dl
  char v116; // dl
  char v117; // dl
  unsigned __int8 v118; // bl
  __int64 *v119; // rdi
  char v120; // si
  char v121; // dl
  unsigned __int8 *v122; // rax
  __int64 v123; // rbp
  __int64 v124; // rbp
  unsigned __int64 *v125; // rax
  unsigned __int64 *v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rax
  unsigned __int8 *v129; // r13
  __int64 *v130; // rax
  unsigned __int8 *v131; // rax
  char v132; // bp
  char *v133; // rax
  char v134; // dl
  __int8 v135; // si
  void *v136; // rdx
  __int64 *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  unsigned __int64 v140; // rax
  int v141; // esi
  unsigned __int8 v142; // cl
  char v143; // dl
  __int64 v144; // rbx
  unsigned __int8 **v145; // rdi
  __int64 v146; // rbx
  __int64 v147; // rbx
  __int64 v148; // rdx
  _QWORD *v149; // rdx
  __int64 v150; // rax
  _QWORD *v151; // rax
  _QWORD *v152; // r13
  size_t v153; // rax
  char v154; // dl
  _QWORD *v155; // rcx
  __int64 v156; // rdi
  unsigned __int64 v157; // rax
  __int64 v158; // rdi
  char v159; // dl
  __int64 v160; // rsi
  unsigned __int64 v161; // rax
  unsigned __int8 **v162; // rdi
  char v163; // dl
  __int64 v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // rdi
  char v167; // dl
  __m128i v168; // [rsp+0h] [rbp-1D8h] BYREF
  char *v169; // [rsp+10h] [rbp-1C8h]
  _BYTE *v170; // [rsp+18h] [rbp-1C0h]
  __m128i v171; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned __int8 **v172; // [rsp+30h] [rbp-1A8h]
  unsigned __int8 **v173; // [rsp+38h] [rbp-1A0h]
  __int64 v174; // [rsp+40h] [rbp-198h] BYREF
  _QWORD *v175; // [rsp+48h] [rbp-190h] BYREF
  unsigned __int8 *v176; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int8 v177; // [rsp+58h] [rbp-180h]
  unsigned __int64 v178; // [rsp+60h] [rbp-178h]
  char v179; // [rsp+68h] [rbp-170h]
  void *v180; // [rsp+70h] [rbp-168h] BYREF
  __int64 v181; // [rsp+78h] [rbp-160h]
  _BYTE v182[128]; // [rsp+80h] [rbp-158h] BYREF
  __int64 *v183; // [rsp+100h] [rbp-D8h]
  void *ptr[2]; // [rsp+108h] [rbp-D0h]
  void **v185; // [rsp+118h] [rbp-C0h]
  _OWORD v186[2]; // [rsp+120h] [rbp-B8h] BYREF
  void *src[2]; // [rsp+140h] [rbp-98h] BYREF
  unsigned __int8 *v188; // [rsp+150h] [rbp-88h]
  _OWORD v189[4]; // [rsp+158h] [rbp-80h] BYREF
  _BYTE v190[64]; // [rsp+198h] [rbp-40h] BYREF

  v6 = (__int64)(a1 + 75);
  v8 = (unsigned __int8 **)a1[83];
  v9 = a1[84];
  LODWORD(v170) = a2;
  v10 = (unsigned __int8 *)a1[72];
  v183 = a1;
  v168.m128i_i64[0] = (__int64)v189;
  v11 = _mm_loadl_epi64(&v168);
  v169 = (char *)v189;
  v12 = _mm_unpacklo_epi64(v11, v11);
  v185 = src;
  ptr[0] = v186;
  ptr[1] = v186;
  memset(v186, 0, sizeof(v186));
  *(__m128i *)src = v12;
  v188 = v190;
  memset(v189, 0, sizeof(v189));
  if ( v8 != (unsigned __int8 **)(a1 + 86) )
  {
    v168.m128i_i64[0] = v9;
    v185 = (void **)a1[85];
    v13 = _mm_loadh_ps((const double *)v168.m128i_i64);
    v168.m128i_i64[0] = (__int64)(a1 + 86);
    *(__m128 *)ptr = v13;
    v14 = _mm_loadl_epi64(&v168);
    a1[85] = (__int64)(a1 + 90);
    *(__m128i *)(a1 + 83) = _mm_unpacklo_epi64(v14, v14);
    if ( (unsigned __int8 *)v6 != v10 )
    {
LABEL_3:
      v15 = a1[73];
      v16 = (unsigned __int8 *)a1[74];
LABEL_4:
      v17 = (char *)v6;
      v18 = a1;
      v168.m128i_i64[0] = v15;
      v188 = v16;
      a1[74] = (__int64)(a1 + 83);
      v19 = _mm_loadh_ps((const double *)v168.m128i_i64);
      v168.m128i_i64[0] = v6;
      *(__m128 *)src = v19;
      v20 = _mm_loadl_epi64(&v168);
      *((__m128i *)a1 + 36) = _mm_unpacklo_epi64(v20, v20);
      goto LABEL_5;
    }
    goto LABEL_36;
  }
  v171 = v12;
  v61 = v9 - (_QWORD)v8;
  if ( v8 == (unsigned __int8 **)v9 )
  {
    ptr[1] = (char *)v186 + v61;
    if ( (unsigned __int8 *)v6 != v10 )
      goto LABEL_3;
    goto LABEL_36;
  }
  v168.m128i_i64[0] = (__int64)(a1 + 75);
  v62 = (char *)memcpy(v186, v8, v9 - (_QWORD)v8);
  v6 = v168.m128i_i64[0];
  v17 = (char *)src[0];
  a1[84] = (__int64)v8;
  v63 = _mm_load_si128(&v171);
  ptr[1] = &v62[v61];
  if ( (unsigned __int8 *)v6 == v10 )
  {
    v168 = v63;
    if ( v17 != v169 )
    {
      free(v17);
      v51 = _mm_load_si128(&v168);
      v188 = v190;
      v10 = (unsigned __int8 *)a1[72];
      *(__m128i *)src = v51;
    }
LABEL_36:
    v52 = (unsigned __int8 *)a1[73];
    v53 = v189;
    v54 = v52 - v10;
    if ( v52 != v10 )
    {
      memmove(v189, v10, v54);
      v10 = (unsigned __int8 *)a1[72];
      v53 = src[0];
      v54 = v52 - v10;
    }
    v18 = v183;
    a1[73] = (__int64)v10;
    src[1] = (char *)v53 + v54;
    v17 = (char *)v18[72];
    goto LABEL_5;
  }
  v15 = a1[73];
  v16 = (unsigned __int8 *)a1[74];
  if ( v17 == v169 )
    goto LABEL_4;
  v18 = a1;
  v168.m128i_i64[0] = a1[73];
  v64 = v188;
  v188 = v16;
  a1[74] = (__int64)v64;
  v65 = _mm_loadh_ps((const double *)v168.m128i_i64);
  v168.m128i_i64[0] = (__int64)v17;
  *(__m128 *)src = v65;
  v66 = _mm_loadl_epi64(&v168);
  *((__m128i *)a1 + 36) = _mm_unpacklo_epi64(v66, v66);
LABEL_5:
  v21 = (unsigned __int8 *)v18[83];
  v18[73] = (__int64)v17;
  v18[84] = (__int64)v21;
  v22 = (unsigned __int8 *)*a1;
  v23 = a1[1];
  if ( *a1 == v23 )
    goto LABEL_8;
  v24 = *v22;
  if ( (_BYTE)v24 != 71 )
  {
    if ( (_BYTE)v24 != 84 )
    {
LABEL_8:
      v25 = a1[91] - a1[90];
      LOWORD(v176) = 0;
      HIDWORD(v176) = 0;
      v177 = 0;
      v178 = v25 >> 3;
      v179 = 0;
      v26 = (unsigned __int8 *)sub_21D8010((__int64)a1, (__int64)&v176);
      if ( !v26 )
        goto LABEL_22;
      v27 = (unsigned __int8 *)a1[90];
      v28 = v178;
      v29 = (a1[91] - (__int64)v27) >> 3;
      v30 = &v27[8 * v178];
      if ( v178 < v29 )
      {
        v31 = *(_QWORD *)v30;
        v32 = (unsigned __int8 *)a1[83];
        v33 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
        if ( (unsigned __int8 *)a1[84] == v32 )
          goto LABEL_58;
        v34 = *(__int64 **)v32;
        if ( !v34 )
          goto LABEL_58;
        v35 = *v34;
        v36 = (v34[1] - *v34) >> 3;
        if ( v33 >= v36 )
          goto LABEL_58;
        while ( 1 )
        {
          ++v28;
          *(_QWORD *)(v31 + 24) = *(_QWORD *)(v35 + 8 * v33);
          if ( v29 <= v28 )
            break;
          v31 = *(_QWORD *)&v27[8 * v28];
          v33 = *(_QWORD *)(v31 + 16);
          if ( v33 >= v36 )
            goto LABEL_58;
        }
      }
      a1[91] = (__int64)v30;
      v37 = (unsigned __int8 *)a1[1];
      v38 = (unsigned __int8 *)*a1;
      if ( (unsigned __int8 *)*a1 == v37 )
        goto LABEL_22;
      if ( (unsigned __int8)(*v38 - 46) <= 0x31u )
      {
        v69 = 0x2000000800001LL;
        if ( _bittest64(&v69, (unsigned int)*v38 - 46) )
          goto LABEL_22;
      }
      if ( !(_BYTE)v170 )
      {
        v39 = v38 + 1;
        *a1 = (__int64)(v38 + 1);
        if ( *v38 )
        {
          do
          {
            if ( v37 == v39 )
              break;
            *a1 = (__int64)++v39;
          }
          while ( *(v39 - 1) );
        }
        goto LABEL_22;
      }
      v75 = (void **)*a1;
      v76 = j__strlen("Ua9enable_ifI");
      v77 = sub_20D1BF0(v37 - v38, v38, v76, "Ua9enable_ifI");
      v168.m128i_i64[0] = 0;
      if ( v77 )
      {
        v122 = &v38[v76];
        v123 = a1[3] - a1[2];
        *a1 = (__int64)v122;
        v124 = v123 >> 3;
        while ( v122 == v37 || *v122 != 69 )
        {
          v180 = sub_21DE810((__int64)a1, (__int64)v75, v78, v79, v80, v81);
          if ( !v180 )
            goto LABEL_58;
          v75 = &v180;
          sub_20D8690((char **)a1 + 2, (__int64 *)&v180);
          v122 = (unsigned __int8 *)*a1;
          v37 = (unsigned __int8 *)a1[1];
        }
        *a1 = (__int64)(v122 + 1);
        v125 = (unsigned __int64 *)sub_21D4550(a1, v124, v78, v79, v80, v81);
        v180 = v182;
        v126 = v125;
        v171.m128i_i64[0] = v127;
        LOBYTE(v169) = *((_BYTE *)a1 + 937);
        v181 = 0x2000000000LL;
        sub_21D0C90((__int64)&v180, 0xAu, v125, v127);
        v170 = a1 + 113;
        v128 = sub_2223360(a1 + 113, &v180, &v175, off_2BE9FD0);
        v168.m128i_i64[0] = v128;
        if ( v128 )
        {
          v129 = (unsigned __int8 *)(v128 + 8);
          if ( v180 != v182 )
            free(v180);
          if ( !v129 )
            goto LABEL_58;
          v180 = v129;
          v130 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v180);
          if ( v130 )
          {
            v131 = (unsigned __int8 *)v130[1];
            if ( v131 )
              v129 = v131;
          }
          v168.m128i_i64[0] = (__int64)v129;
          if ( (unsigned __int8 *)a1[116] == v129 )
            *((_BYTE *)a1 + 936) = 1;
        }
        else
        {
          if ( (_BYTE)v169 )
          {
            v157 = sub_21D40A0(a1 + 101, 40, 3u);
            v158 = (__int64)v170;
            v159 = *(_BYTE *)(v157 + 18);
            *(_WORD *)(v157 + 16) = 16394;
            v168.m128i_i64[0] = v157 + 8;
            v160 = v171.m128i_i64[0];
            *(_QWORD *)v157 = 0;
            *(_QWORD *)(v157 + 32) = v160;
            *(_BYTE *)(v157 + 18) = v159 & 0xF0 | 5;
            *(_QWORD *)(v157 + 24) = v126;
            *(_QWORD *)(v157 + 8) = off_2BE6A80;
            sub_2223210(v158, v157, v175, off_2BE9FD0);
          }
          if ( v180 != v182 )
            free(v180);
          v150 = v168.m128i_i64[0];
          a1[115] = v168.m128i_i64[0];
          if ( !v150 )
            goto LABEL_58;
        }
      }
      v169 = nullptr;
      if ( !(_BYTE)v176 )
      {
        if ( BYTE1(v176) )
        {
          v169 = sub_21DFD40((__int64)a1);
          if ( !v169 )
          {
LABEL_58:
            v18 = v183;
            v26 = nullptr;
            v21 = (unsigned __int8 *)v183[83];
            goto LABEL_23;
          }
        }
      }
      v82 = (_BYTE *)*a1;
      v83 = (unsigned __int8 *)a1[1];
      if ( (unsigned __int8 *)*a1 == v83 || *v82 != 118 )
      {
        v84 = 0x2000000800001LL;
        v85 = (a1[3] - a1[2]) >> 3;
        v170 = v182;
        while ( 1 )
        {
          v86 = sub_21DFD40((__int64)a1);
          v174 = (__int64)v86;
          if ( !v86 )
            goto LABEL_58;
          if ( (a1[3] - a1[2]) >> 3 == v85 && v179 )
          {
            v135 = *((_BYTE *)a1 + 937);
            v181 = 0x2000000000LL;
            v171.m128i_i8[0] = v135;
            v180 = v170;
            sub_21D0240((__int64)&v180, 0x57u, (unsigned __int64)v86);
            v172 = (unsigned __int8 **)(a1 + 113);
            v164 = sub_2223360(a1 + 113, &v180, &v175, off_2BE9FD0);
            if ( v164 )
            {
              v136 = (void *)(v164 + 8);
              if ( v180 != v170 )
              {
                v171.m128i_i64[0] = v164 + 8;
                free(v180);
                v136 = (void *)v171.m128i_i64[0];
              }
              if ( !v136 )
                goto LABEL_58;
              v180 = v136;
              v171.m128i_i64[0] = (__int64)v136;
              v137 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v180);
              v138 = v171.m128i_i64[0];
              if ( v137 )
              {
                v139 = v137[1];
                if ( v139 )
                  v138 = v139;
              }
              if ( a1[116] == v138 )
                *((_BYTE *)a1 + 936) = 1;
              v174 = v138;
            }
            else
            {
              if ( v171.m128i_i8[0] )
              {
                v161 = sub_21D40A0(a1 + 101, 32, 3u);
                v162 = v172;
                *(_QWORD *)v161 = 0;
                v163 = *(_BYTE *)(v161 + 18);
                *(_WORD *)(v161 + 16) = 16471;
                v171.m128i_i64[0] = v161 + 8;
                *(_BYTE *)(v161 + 18) = v163 & 0xF0 | 5;
                *(_QWORD *)(v161 + 8) = off_2BE6DE0;
                *(_QWORD *)(v161 + 24) = v174;
                sub_2223210(v162, v161, v175, off_2BE9FD0);
                v164 = v171.m128i_i64[0];
              }
              if ( v180 != v170 )
              {
                v171.m128i_i64[0] = v164;
                free(v180);
                v164 = v171.m128i_i64[0];
              }
              a1[115] = v164;
              v174 = v164;
              if ( !v164 )
                goto LABEL_58;
            }
          }
          sub_20D8690((char **)a1 + 2, &v174);
          if ( *a1 != a1[1] )
          {
            v87 = *(unsigned __int8 *)*a1;
            if ( (unsigned __int8)(v87 - 46) > 0x31u || !_bittest64(&v84, (unsigned int)(v87 - 46)) && (_BYTE)v87 != 81 )
              continue;
          }
          v171.m128i_i64[0] = (__int64)sub_21D4550(a1, v85, v87, v88, v89, v90);
          v91 = (unsigned __int8 *)*a1;
          v170 = (_BYTE *)v92;
          v83 = (unsigned __int8 *)a1[1];
          goto LABEL_91;
        }
      }
      v170 = nullptr;
      v91 = v82 + 1;
      *a1 = (__int64)v91;
      v171.m128i_i64[0] = 0;
LABEL_91:
      v93 = 0;
      if ( v91 != v83 && *v91 == 81 )
      {
        v132 = *((_BYTE *)a1 + 778);
        *((_BYTE *)a1 + 778) = 1;
        *a1 = (__int64)(v91 + 1);
        v133 = sub_21D94E0((__int64)a1);
        *((_BYTE *)a1 + 778) = v132;
        v93 = (__int64)v133;
        if ( !v133 )
          goto LABEL_58;
      }
      LOBYTE(v172) = *((_BYTE *)a1 + 937);
      v181 = 0x2000000000LL;
      v180 = v182;
      sub_21D2310(
        (__int64)&v180,
        (__int64)v169,
        (__int64)v26,
        (unsigned __int64 *)v171.m128i_i64[0],
        (__int64)v170,
        v168.m128i_i64[0],
        v93,
        SHIDWORD(v176),
        v177);
      v173 = (unsigned __int8 **)(a1 + 113);
      v94 = sub_2223360(a1 + 113, &v180, &v175, off_2BE9FD0);
      if ( v94 )
      {
        v74 = v180;
        v26 = (unsigned __int8 *)(v94 + 8);
        if ( v180 == v182 )
          goto LABEL_96;
        goto LABEL_95;
      }
      if ( (_BYTE)v172 )
      {
        v140 = sub_21D40A0(a1 + 101, 80, 3u);
        v141 = HIDWORD(v176);
        v142 = v177;
        *(_WORD *)(v140 + 16) = 19;
        v143 = *(_BYTE *)(v140 + 18);
        *(_QWORD *)(v140 + 32) = v26;
        v144 = v171.m128i_i64[0];
        *(_QWORD *)v140 = 0;
        v145 = v173;
        *(_QWORD *)(v140 + 40) = v144;
        v146 = (__int64)v170;
        *(_BYTE *)(v140 + 18) = v143 & 0xF0 | 1;
        *(_QWORD *)(v140 + 48) = v146;
        v147 = v168.m128i_i64[0];
        *(_QWORD *)(v140 + 64) = v93;
        *(_QWORD *)(v140 + 8) = off_2BE6E40;
        v148 = (__int64)v169;
        *(_QWORD *)(v140 + 56) = v147;
        v26 = (unsigned __int8 *)(v140 + 8);
        *(_QWORD *)(v140 + 24) = v148;
        v149 = v175;
        *(_DWORD *)(v140 + 72) = v141;
        *(_BYTE *)(v140 + 76) = v142;
        sub_2223210(v145, v140, v149, off_2BE9FD0);
      }
      else
      {
        v26 = nullptr;
      }
LABEL_178:
      if ( v180 != v182 )
        free(v180);
      goto LABEL_112;
    }
    if ( v23 - (_QWORD)v22 != 1 )
    {
      switch ( v22[1] )
      {
        case 'A':
          v113 = (__int64)(v22 + 2);
          *a1 = v113;
          v26 = (unsigned __int8 *)sub_21DE810((__int64)a1, v24, v113, v23, v6, a6);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(
                                     a1 + 101,
                                     *((_BYTE *)a1 + 937),
                                     "template parameter object for ",
                                     (__int64 *)&v176);
          if ( v114 )
            goto LABEL_112;
          goto LABEL_104;
        case 'C':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21DFD40((__int64)a1);
          if ( !v26 )
            goto LABEL_22;
          if ( !sub_21CFC00((char **)a1, 1) )
            goto LABEL_58;
          v105 = (_BYTE *)*a1;
          if ( *a1 == a1[1] )
            goto LABEL_58;
          if ( *v105 != 95 )
            goto LABEL_58;
          *a1 = (__int64)(v105 + 1);
          v106 = sub_21DFD40((__int64)a1);
          v107 = v106;
          if ( !v106 )
            goto LABEL_58;
          v108 = *((_BYTE *)a1 + 937);
          v180 = v182;
          v169 = v182;
          LOBYTE(v170) = v108;
          v181 = 0x2000000000LL;
          sub_21D05E0((__int64)&v180, 0x16u, (unsigned __int64)v106, (unsigned __int64)v26);
          v168.m128i_i64[0] = (__int64)(a1 + 113);
          v109 = sub_2223360(a1 + 113, &v180, &v176, off_2BE9FD0);
          v110 = (unsigned __int8 *)v109;
          if ( v109 )
          {
            v110 = (unsigned __int8 *)(v109 + 8);
            if ( v180 != v169 )
              free(v180);
            if ( v110 )
            {
              v180 = v110;
              v111 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v180);
              if ( v111 )
              {
                v112 = (unsigned __int8 *)v111[1];
                if ( v112 )
                  v110 = v112;
              }
              if ( (unsigned __int8 *)a1[116] == v110 )
                *((_BYTE *)a1 + 936) = 1;
            }
          }
          else
          {
            if ( (_BYTE)v170 )
            {
              v165 = sub_21D40A0(a1 + 101, 40, 3u);
              v166 = v168.m128i_i64[0];
              v167 = *(_BYTE *)(v165 + 18);
              *(_QWORD *)(v165 + 24) = v107;
              v110 = (unsigned __int8 *)(v165 + 8);
              *(_QWORD *)v165 = 0;
              *(_WORD *)(v165 + 16) = 16406;
              *(_QWORD *)(v165 + 32) = v26;
              *(_BYTE *)(v165 + 18) = v167 & 0xF0 | 5;
              *(_QWORD *)(v165 + 8) = off_2BE6F60;
              sub_2223210(v166, v165, v176, off_2BE9FD0);
            }
            if ( v180 != v182 )
              free(v180);
            a1[115] = (__int64)v110;
          }
          v18 = v183;
          v26 = v110;
          v21 = (unsigned __int8 *)v183[83];
          break;
        case 'H':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21D8010((__int64)a1, 0);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(
                                     a1 + 101,
                                     *((_BYTE *)a1 + 937),
                                     "thread-local initialization routine for ",
                                     (__int64 *)&v176);
          if ( v104 )
            goto LABEL_112;
          goto LABEL_104;
        case 'I':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21DFD40((__int64)a1);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "typeinfo for ", (__int64 *)&v176);
          if ( v103 )
            goto LABEL_112;
          goto LABEL_104;
        case 'S':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21DFD40((__int64)a1);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "typeinfo name for ", (__int64 *)&v176);
          if ( v102 )
            goto LABEL_112;
          goto LABEL_104;
        case 'T':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21DFD40((__int64)a1);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "VTT for ", (__int64 *)&v176);
          if ( v101 )
            goto LABEL_112;
          goto LABEL_104;
        case 'V':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21DFD40((__int64)a1);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "vtable for ", (__int64 *)&v176);
          if ( v117 )
            goto LABEL_112;
          goto LABEL_104;
        case 'W':
          *a1 = (__int64)(v22 + 2);
          v26 = (unsigned __int8 *)sub_21D8010((__int64)a1, 0);
          v176 = v26;
          if ( !v26 )
            goto LABEL_22;
          v26 = (unsigned __int8 *)sub_21D4220(
                                     a1 + 101,
                                     *((_BYTE *)a1 + 937),
                                     "thread-local wrapper routine for ",
                                     (__int64 *)&v176);
          if ( v115 )
            goto LABEL_112;
          goto LABEL_104;
        case 'c':
          *a1 = (__int64)(v22 + 2);
          if ( (unsigned __int8)sub_21CFD00((__int64)a1) )
            goto LABEL_161;
          if ( (unsigned __int8)sub_21CFD00((__int64)a1) )
            goto LABEL_161;
          v176 = (unsigned __int8 *)sub_21E4F70(a1, 1);
          if ( !v176 )
            goto LABEL_161;
          v26 = (unsigned __int8 *)sub_21D4220(
                                     a1 + 101,
                                     *((_BYTE *)a1 + 937),
                                     "covariant return thunk to ",
                                     (__int64 *)&v176);
          if ( v116 )
            goto LABEL_112;
          goto LABEL_104;
        default:
          goto LABEL_154;
      }
      goto LABEL_23;
    }
LABEL_154:
    v118 = 0;
    *a1 = (__int64)(v22 + 1);
    if ( (unsigned __int8 *)v23 != v22 + 1 )
      v118 = v22[1];
    if ( !(unsigned __int8)sub_21CFD00((__int64)a1) )
    {
      v176 = (unsigned __int8 *)sub_21E4F70(a1, 1);
      if ( v176 )
      {
        v119 = a1 + 101;
        v120 = *((_BYTE *)a1 + 937);
        if ( v118 == 118 )
        {
          v26 = (unsigned __int8 *)sub_21D4220(v119, v120, "virtual thunk to ", (__int64 *)&v176);
          if ( v134 )
            goto LABEL_112;
        }
        else
        {
          v26 = (unsigned __int8 *)sub_21D4220(v119, v120, "non-virtual thunk to ", (__int64 *)&v176);
          if ( v121 )
            goto LABEL_112;
        }
LABEL_104:
        if ( v26 )
        {
          v180 = v26;
          v95 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v180);
          if ( v95 )
          {
LABEL_98:
            v96 = (unsigned __int8 *)v95[1];
            if ( v96 )
              v26 = v96;
          }
LABEL_100:
          if ( (unsigned __int8 *)a1[116] == v26 )
            *((_BYTE *)a1 + 936) = 1;
        }
LABEL_22:
        v18 = v183;
        v21 = (unsigned __int8 *)v183[83];
        goto LABEL_23;
      }
    }
LABEL_161:
    v26 = nullptr;
    goto LABEL_22;
  }
  v26 = nullptr;
  if ( v23 - (_QWORD)v22 == 1 )
    goto LABEL_23;
  v70 = v22[1];
  switch ( v70 )
  {
    case 'R':
      *a1 = (__int64)(v22 + 2);
      v175 = sub_21D8010((__int64)a1, 0);
      if ( !v175 )
        goto LABEL_161;
      v98 = sub_21CFDE0((char **)a1, (__int64 *)&v176);
      v99 = (_BYTE *)*a1;
      if ( *a1 != a1[1] && *v99 == 95 )
      {
        *a1 = (__int64)(v99 + 1);
      }
      else if ( !v98 )
      {
        goto LABEL_161;
      }
      v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "reference temporary for ", (__int64 *)&v175);
      if ( !v100 )
        goto LABEL_104;
LABEL_112:
      a1[115] = (__int64)v26;
      goto LABEL_22;
    case 'V':
      *a1 = (__int64)(v22 + 2);
      v26 = (unsigned __int8 *)sub_21D8010((__int64)a1, 0);
      v176 = v26;
      if ( !v26 )
        goto LABEL_22;
      v26 = (unsigned __int8 *)sub_21D4220(a1 + 101, *((_BYTE *)a1 + 937), "guard variable for ", (__int64 *)&v176);
      if ( !v97 )
        goto LABEL_104;
      goto LABEL_112;
    case 'I':
      v175 = nullptr;
      *a1 = (__int64)(v22 + 2);
      if ( (unsigned __int8)sub_21D7C10((__int64)a1, (__int64 *)&v175) )
        goto LABEL_22;
      v26 = (unsigned __int8 *)v175;
      if ( !v175 )
        goto LABEL_22;
      v71 = *((_BYTE *)a1 + 937);
      v181 = 0x2000000000LL;
      v180 = v182;
      sub_9B7040((__int64)&v180, 21);
      sub_21CFFC0((__int64)&v180);
      v72 = j__strlen("initializer for module ");
      sub_21CFEF0((__int64)&v180, v72, (__int64)"initializer for module ");
      sub_9B7040((__int64)&v180, (int)v26);
      sub_9B7040((__int64)&v180, SHIDWORD(v26));
      v168.m128i_i64[0] = (__int64)(a1 + 113);
      v73 = sub_2223360(a1 + 113, &v180, &v176, off_2BE9FD0);
      v26 = (unsigned __int8 *)v73;
      if ( v73 )
      {
        v74 = v180;
        v26 = (unsigned __int8 *)(v73 + 8);
        if ( v180 == v182 )
        {
LABEL_96:
          if ( v26 )
          {
            v180 = v26;
            v95 = sub_21D4F30((__int64)(a1 + 118), (__int64 *)&v180);
            if ( v95 )
              goto LABEL_98;
            goto LABEL_100;
          }
          goto LABEL_22;
        }
LABEL_95:
        free(v74);
        goto LABEL_96;
      }
      if ( v71 )
      {
        v151 = (_QWORD *)sub_21D40A0(a1 + 101, 48, 3u);
        *v151 = 0;
        v152 = v151;
        v26 = (unsigned __int8 *)(v151 + 1);
        v153 = j__strlen("initializer for module ");
        v154 = *((_BYTE *)v152 + 18);
        v155 = v175;
        v152[3] = v153;
        v156 = v168.m128i_i64[0];
        v152[5] = v155;
        *((_WORD *)v152 + 8) = 16405;
        *((_BYTE *)v152 + 18) = v154 & 0xF0 | 5;
        v152[4] = "initializer for module ";
        v152[1] = off_2BE6F00;
        sub_2223210(v156, v152, v176, off_2BE9FD0);
      }
      goto LABEL_178;
  }
LABEL_23:
  v40 = ptr[0];
  v41 = (unsigned __int8 *)(v18 + 86);
  if ( ptr[0] == v186 )
  {
    if ( v21 != v41 )
    {
      free(v21);
      v168.m128i_i64[0] = (__int64)(v18 + 86);
      v58 = _mm_loadl_epi64(&v168);
      v18[85] = (__int64)(v18 + 90);
      v40 = ptr[0];
      *(__m128i *)(v18 + 83) = _mm_unpacklo_epi64(v58, v58);
    }
    v59 = ptr[1];
    v60 = (char *)((char *)ptr[1] - (char *)v40);
    if ( ptr[1] != v40 )
    {
      memmove(v18 + 86, v40, (size_t)v60);
      v40 = ptr[0];
      v41 = (unsigned __int8 *)v18[83];
      v60 = (char *)(v59 - (char *)ptr[0]);
    }
    ptr[1] = v40;
    v18[84] = (__int64)&v60[(_QWORD)v41];
    v18 = v183;
  }
  else
  {
    v42 = ptr[1];
    v43 = v185;
    if ( v21 == v41 )
    {
      v168.m128i_i64[0] = (__int64)ptr[1];
      v18[85] = (__int64)v185;
      v185 = src;
      v67 = _mm_loadh_ps((const double *)v168.m128i_i64);
      v168.m128i_i64[0] = (__int64)v186;
      *(__m128 *)(v18 + 83) = v67;
      v68 = _mm_loadl_epi64(&v168);
      *(__m128i *)ptr = _mm_unpacklo_epi64(v68, v68);
    }
    else
    {
      v44 = (void **)v18[85];
      v18[83] = (__int64)ptr[0];
      ptr[0] = v21;
      v18[84] = (__int64)v42;
      v18[85] = (__int64)v43;
      v185 = v44;
      ptr[1] = v21;
    }
  }
  v45 = (_OWORD *)v18[72];
  v46 = v18 + 75;
  if ( src[0] == v189 )
  {
    if ( v45 == (_OWORD *)v46 )
    {
      v45 = src[0];
    }
    else
    {
      free(v45);
      v168.m128i_i64[0] = (__int64)(v18 + 75);
      v55 = _mm_loadl_epi64(&v168);
      v18[74] = (__int64)(v18 + 83);
      v45 = src[0];
      *((__m128i *)v18 + 36) = _mm_unpacklo_epi64(v55, v55);
    }
    v56 = src[1];
    v57 = (char *)((char *)src[1] - (char *)v45);
    if ( src[1] != v45 )
    {
      memmove(v18 + 75, v45, (size_t)v57);
      v45 = src[0];
      v46 = (_QWORD *)v18[72];
      v57 = (char *)(v56 - (char *)src[0]);
    }
    src[1] = v45;
    v18[73] = (__int64)v46 + (_QWORD)v57;
  }
  else
  {
    v47 = src[1];
    v48 = v188;
    if ( v45 == (_OWORD *)v46 )
    {
      v168.m128i_i64[0] = (__int64)src[1];
      v18[74] = (__int64)v188;
      *((__m128 *)v18 + 36) = _mm_loadh_ps((const double *)v168.m128i_i64);
      goto LABEL_31;
    }
    v18[72] = (__int64)src[0];
    v49 = (unsigned __int8 *)v18[74];
    src[0] = v45;
    v18[73] = (__int64)v47;
    v18[74] = (__int64)v48;
    v188 = v49;
    src[1] = v45;
  }
  if ( v45 != v189 )
    free(v45);
LABEL_31:
  if ( ptr[0] != v186 )
    free(ptr[0]);
  return v26;
}
