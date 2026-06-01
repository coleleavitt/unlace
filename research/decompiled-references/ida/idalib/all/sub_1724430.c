unsigned __int64 __fastcall sub_1724430(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i *a9)
{
  char v9; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  char **v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 result; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r14
  __int64 *v34; // r15
  bool v35; // zf
  __int64 *v36; // rax
  __int64 v37; // rdx
  __m128 v38; // xmm0
  __m128i v39; // xmm0
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 *i; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  char **v50; // rdi
  char *v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // r13
  __int64 v56; // rax
  const char *v57; // r13
  size_t v58; // rdx
  unsigned __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r15
  unsigned __int8 v69; // al
  __int64 v70; // rsi
  const char *v71; // r13
  unsigned __int64 v72; // rcx
  unsigned int v73; // r14d
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  void *v85; // rbx
  __int64 v86; // rsi
  char **v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  char *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  _BYTE *v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  size_t v104; // r14
  _QWORD *v105; // rax
  size_t v106; // r13
  __int64 v107; // r9
  char **v108; // rdi
  char *v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // r14
  unsigned int v116; // eax
  unsigned int v117; // eax
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  char **v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  unsigned __int64 *v127; // rcx
  __int64 v128; // rax
  int v129; // esi
  __m128i *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  unsigned __int64 v135; // rax
  char v136; // al
  char **v137; // rdi
  char v138; // al
  __int64 v139; // rdx
  char v140; // al
  __int64 v141; // rsi
  char **v142; // rbp
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  char *v147; // rsi
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  char **v152; // rbx
  __m128i v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  char *v157; // rsi
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned __int64 v163; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v164; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v165; // [rsp+8h] [rbp-1A0h]
  char *v167; // [rsp+18h] [rbp-190h] BYREF
  void **v168; // [rsp+20h] [rbp-188h]
  __int64 v169; // [rsp+28h] [rbp-180h]
  __int64 *v170; // [rsp+30h] [rbp-178h]
  __int64 v171; // [rsp+38h] [rbp-170h]
  __int64 *v172; // [rsp+40h] [rbp-168h]
  char *v173; // [rsp+48h] [rbp-160h]
  __int64 v174; // [rsp+50h] [rbp-158h]
  __int64 *v175; // [rsp+58h] [rbp-150h]
  __int64 v176; // [rsp+68h] [rbp-140h] BYREF
  __int64 v177; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v178; // [rsp+78h] [rbp-130h] BYREF
  __int128 v179; // [rsp+80h] [rbp-128h] BYREF
  __int64 v180; // [rsp+90h] [rbp-118h]
  void *v181; // [rsp+A0h] [rbp-108h] BYREF
  size_t v182; // [rsp+A8h] [rbp-100h]
  _QWORD v183[2]; // [rsp+B0h] [rbp-F8h] BYREF
  void *v184[2]; // [rsp+C0h] [rbp-E8h] BYREF
  char v185; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v186; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v187[16]; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v188; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v189; // [rsp+110h] [rbp-98h] BYREF
  __int16 v190; // [rsp+120h] [rbp-88h]
  _OWORD v191[2]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v192; // [rsp+150h] [rbp-58h]
  __int64 *v193; // [rsp+158h] [rbp-50h]
  _QWORD *v194; // [rsp+160h] [rbp-48h]

  v9 = (char)a5;
  v176 = *(_QWORD *)a1;
  v13 = *(_QWORD *)(v176 + 16);
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v13 & 4) != 0 )
    v14 = *(_QWORD *)v14;
  sub_15A5C40(a4, v14, (__int64)a3, a4, a5, a6);
  if ( v9 )
  {
    v55 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = *(_QWORD *)a1;
      v56 = sub_A92C20((__int64)a3, *(_QWORD *)a1, nullptr);
      if ( v56
        || (*(_BYTE *)(v55 + 28) & 0x7F) == 0x12
        && (v14 = 1, (v59 = sub_BACEB0(v55, 1)) != 0)
        && (v14 = v59, (v56 = sub_A92C20((__int64)a3, v59, nullptr)) != 0) )
      {
        if ( (*(_BYTE *)(v56 + 32) & 2) != 0 )
          v57 = *(const char **)(v56 + 24);
        else
          v57 = (const char *)sub_ED2880(v56, a3, v15, v16, v17, v18);
        v58 = 0;
        if ( v57 )
          v58 = j__strlen(v57);
        v14 = (unsigned __int64)v57;
        sub_15A5E30(a4, v57, v58, v16, v17, v18);
      }
    }
  }
  v19 = v176;
  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v20 = *(char ***)a4;
    sub_B86A00((__int64)&v188, (__int64 *)(v176 + 40));
    LOWORD(v192) = 260;
    *(_QWORD *)&v191[0] = &v188;
    v24 = sub_15A4EB0(v20, (const void ***)v191, v21, 260, v22, v23);
    sub_15A2F70(a4, (__int64)v24);
    if ( (__m128i *)v188.m128i_i64[0] != &v189 )
      operator delete((void *)v188.m128i_i64[0]);
    sub_15A2FD0(a4, (__int64)"::");
    return sub_15A5CA0(a4, (__int64)"::", v25, v26, v27, v28);
  }
  if ( (*(_BYTE *)(v176 + 29) & 1) != 0 )
  {
    v30 = sub_B8C3D0(v176, v14, v15, v16, v17, v18);
    v32 = *((unsigned int *)v30 + 2);
    v33 = *v30 + 8 * v32;
    if ( (*(_BYTE *)(v176 + 29) & 1) != 0 )
      v34 = (__int64 *)*sub_B8C3D0(v176, v14, v32, v31, v17, v18);
    else
      v34 = nullptr;
    v35 = v34 == (__int64 *)v33;
    if ( (unsigned __int64)v34 >= v33 )
      goto LABEL_24;
LABEL_13:
    v36 = v34;
    do
    {
      if ( *(_WORD *)(*v36 + 36) == 91 )
      {
        while ( 1 )
        {
LABEL_19:
          v46 = *v34;
          for ( i = v34 + 1; *(_WORD *)(v46 + 36) != 91; ++i )
          {
            v46 = *i;
            v34 = i;
          }
          v48 = *(_QWORD *)(v46 + 48);
          v49 = *(unsigned int *)(v46 + 40);
          v50 = *(char ***)a4;
          LOWORD(v192) = 261;
          *(_QWORD *)&v191[0] = v48;
          *((_QWORD *)&v191[0] + 1) = v49;
          v51 = sub_15A4EB0(v50, (const void ***)v191, 261, v48, v17, v18);
          v52 = *(unsigned int *)(a4 + 136);
          v14 = *(unsigned int *)(a4 + 140);
          if ( v52 + 1 > v14 )
          {
            v14 = a4 + 144;
            v167 = v51;
            sub_2237220(a4 + 128, a4 + 144, v52 + 1, 8);
            v52 = *(unsigned int *)(a4 + 136);
            v51 = v167;
          }
          ++v34;
          *(_QWORD *)(*(_QWORD *)(a4 + 128) + 8 * v52) = v51;
          ++*(_DWORD *)(a4 + 136);
          v35 = v34 == (__int64 *)v33;
          if ( (unsigned __int64)v34 < v33 )
            goto LABEL_13;
LABEL_24:
          if ( v35 )
            goto LABEL_16;
          v53 = (__int64 *)(v33 + 8);
          if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 91 )
          {
            while ( v34 != v53 )
            {
              v54 = *v53++;
              if ( *(_WORD *)(v54 + 36) == 91 )
                goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
      }
      ++v36;
    }
    while ( (__int64 *)v33 != v36 );
LABEL_16:
    v19 = v176;
  }
  v37 = v19;
  v167 = (char *)a4;
  v38 = _mm_loadh_ps((const double *)&a9);
  v193 = &v176;
  v191[0] = v38;
  v192 = a1;
  v39 = (__m128i)_mm_loadh_ps((const double *)&v167);
  v194 = a2;
  v191[1] = v39;
  v40 = *(_BYTE *)(v19 + 28) & 0x7F;
  v41 = (unsigned int)(v40 - 34);
  if ( (unsigned int)v41 <= 5 )
  {
    sub_1723010((__int64)v191, (const char *)v19, v39, a8);
    return sub_15A5CA0(a4, v19, v42, v43, v44, v45);
  }
  if ( (unsigned int)(v40 - 40) <= 6 )
  {
    v60 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL), v14, v19, v41, v17, v18);
    if ( v60 )
    {
      v61 = v60[16];
      if ( v61 )
      {
        if ( (*(_BYTE *)(v61 + 10) & 0x20) != 0 )
        {
          v62 = sub_B96F60((__int64)v60);
          v63 = v62;
          if ( v62 )
          {
            if ( (*(_BYTE *)(v62 + 28) & 0x7Fu) - 34 <= 5 )
            {
              sub_1723010((__int64)v191, (const char *)v62, v39, a8);
              return sub_15A5CA0(a4, v63, v64, v65, v66, v67);
            }
          }
        }
      }
    }
    v37 = v176;
  }
  sub_1702F80(a3, a9, v37, *(_QWORD *)(a6 + 16), (char ***)a4);
  v68 = v176;
  v69 = *(_BYTE *)(v176 + 28) & 0x7F;
  if ( v69 == 71 )
  {
    v70 = *(_QWORD *)(a1 + 72);
    if ( v70 )
      sub_16FF7A0((char ***)a4, v70, (*(_BYTE *)(a1 + 64) & 4) != 0, a9);
    v71 = *(const char **)(v68 + 48);
    sub_171ACE0((int)a3, a9, (__int64)v71, (const __m128i *)a4);
    sub_1504FB0(v188.m128i_i64, *(_DWORD *)(*(_QWORD *)(v68 + 56) + 20LL) & 0x1FFFFFFF, 0);
    if ( (*(_BYTE *)(a1 + 64) & 0x40) != 0 )
      sub_1D3B500(a3, v68, &v188);
    if ( (v188.m128i_i8[0] & 1) != 0 )
    {
      v72 = (unsigned __int64)v188.m128i_i64[0] >> 58;
      v73 = (unsigned __int64)v188.m128i_i64[0] >> 58;
      if ( (unsigned __int64)v188.m128i_i64[0] >> 58 )
      {
        v74 = ~(-1LL << v72);
        v75 = 8LL * (unsigned int)(v72 - 1) + 24;
        v76 = ((unsigned __int64)v188.m128i_i64[0] >> 1) & v74;
        do
        {
          v77 = v73 - 1;
          if ( !_bittest64((const __int64 *)&v76, v77)
            && (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 56) + v75) + 72LL) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            goto LABEL_62;
          }
          v75 -= 8;
          --v73;
        }
        while ( (_DWORD)v77 );
      }
    }
    else
    {
      v73 = *(_DWORD *)(v188.m128i_i64[0] + 64);
      if ( v73 )
      {
        v97 = v73 - 1;
        v98 = 8 * v97 + 24;
        while ( 1 )
        {
          v99 = *(_QWORD *)(*(_QWORD *)v188.m128i_i64[0] + 8LL * ((unsigned int)v97 >> 6));
          if ( !_bittest64(&v99, v97)
            && (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 56) + v98) + 72LL) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            goto LABEL_62;
          }
          v98 -= 8;
          v73 = v97;
          if ( !(_DWORD)v97 )
            break;
          v97 = (unsigned int)(v97 - 1);
        }
      }
    }
    v73 = 0;
    if ( (*(_BYTE *)(a1 + 64) & 0x40) != 0 )
    {
LABEL_63:
      sub_15A3210(a4, 7, (char *)&byte_22F0C30);
      sub_1722CF0((__int64)a2, (__int64)a9, (__int64)v71, (const __m128i *)a4, 0, 0, v39, a8);
      sub_15A3210(a4, 8, (char *)&byte_22F0C30);
      sub_17132B0((char ***)a4, v71, v78, v79, v80);
      result = sub_15A5CA0(a4, (__int64)v71, v81, v82, v83, v84);
      v85 = (void *)v188.m128i_i64[0];
      if ( (v188.m128i_i8[0] & 1) == 0 && v188.m128i_i64[0] )
      {
        if ( *(_QWORD *)v188.m128i_i64[0] != v188.m128i_i64[0] + 16 )
        {
          v163 = result;
          free(*(void **)v188.m128i_i64[0]);
          result = v163;
        }
        v164 = result;
        operator delete(v85, 0x48u);
        return v164;
      }
      return result;
    }
LABEL_62:
    sub_15A3210(a4, 13, (char *)&byte_22F0C30);
    sub_171A7C0((int)a3, a9, v68, (const __m128i *)a4, v73, 0, 0);
    sub_15A3210(a4, 14, (char *)&byte_22F0C30);
    goto LABEL_63;
  }
  if ( (unsigned int)v69 - 68 <= 6 )
  {
    v86 = *(_QWORD *)(a1 + 72);
    if ( v86 )
      sub_16FF7A0((char ***)a4, v86, (*(_BYTE *)(a1 + 64) & 4) != 0, a9);
    v87 = *(char ***)a4;
    sub_B86A00((__int64)&v186, (__int64 *)(v68 + 40));
    v188.m128i_i64[0] = (__int64)&v186;
    v190 = 260;
    v92 = sub_15A4EB0(v87, (const void ***)&v188, v88, v89, v90, v91);
    sub_15A2F70(a4, (__int64)v92);
    if ( (_BYTE *)v186.m128i_i64[0] != v187 )
      operator delete((void *)v186.m128i_i64[0]);
    sub_15A3210(a4, 13, (char *)&byte_22F0C30);
    sub_171A7C0((int)a3, a9, v68, (const __m128i *)a4, 0, 0, 0);
    sub_15A3210(a4, 14, (char *)&byte_22F0C30);
    return sub_15A5CA0(a4, 14, v93, v94, v95, v96);
  }
  if ( v69 == 18 )
  {
    v177 = *(_QWORD *)(v176 + 40);
    if ( (v177 & 3) == 1 )
    {
      v152 = *(char ***)a4;
      v153.m128i_i64[0] = sub_FDE9A0(&v177, 0);
      v190 = 261;
      v188 = v153;
      v157 = sub_15A4EB0(v152, (const void ***)&v188, v153.m128i_i64[1], v154, v155, v156);
      sub_15A2F70(a4, (__int64)v157);
      return sub_15A5CA0(a4, (__int64)v157, v158, v159, v160, v161);
    }
    v172 = &v177;
    v100 = (_BYTE *)sub_FDE9A0(&v177, 0);
    if ( v100 )
    {
      v168 = &v181;
      v181 = v183;
      v167 = (char *)v183;
      sub_1700210(&v181, v100, (__int64)&v100[v101]);
      v104 = v182;
      v102 = (__int64)v167;
      v105 = v181;
      v106 = v182 + 1;
      if ( v181 == v167 )
        v101 = 15;
      else
        v101 = v183[0];
      if ( v101 < v106 )
      {
        sub_998B30((__int64)v168, v182, 0, nullptr, 1u);
        v105 = v181;
      }
    }
    else
    {
      LOBYTE(v183[0]) = 0;
      v106 = 1;
      v104 = 0;
      v168 = &v181;
      v105 = v183;
      v181 = v183;
    }
    *((_BYTE *)v105 + v104) = 58;
    v182 = v106;
    *((_BYTE *)v181 + v106) = 0;
    v107 = *(unsigned int *)(a1 + 20);
    v108 = *(char ***)a4;
    v190 = 260;
    v188.m128i_i64[0] = (__int64)v168;
    if ( (_DWORD)v107 )
    {
      v109 = sub_15A4EB0(v108, (const void ***)&v188, v101, v102, v103, v107);
      sub_15A30F0(a4, (__int64)v109);
      v114 = *(unsigned int *)(v68 + 104);
      if ( (_DWORD)v114 == 1 )
      {
        v109 = (char *)&byte_22F0C30;
        sub_15A2F70(a4, (__int64)&byte_22F0C30);
        v114 = *(unsigned int *)(v68 + 104);
      }
    }
    else
    {
      v109 = sub_15A4EB0(v108, (const void ***)&v188, v101, v102, v103, v107);
      sub_15A2F70(a4, (__int64)v109);
      v114 = *(unsigned int *)(v68 + 104);
    }
    v115 = *(_QWORD *)(v68 + 96);
    LODWORD(v167) = 0;
    v171 = v115 + 8 * v114;
    if ( v171 != v115 )
    {
      v175 = a3;
      v173 = &v185;
      v169 = v68;
      v170 = (__int64 *)&v178;
      while ( 1 )
      {
        v116 = sub_FDE930(v172);
        v111 = (unsigned int)v167;
        if ( (unsigned int)v167 >= v116 )
        {
LABEL_143:
          v68 = v169;
          goto LABEL_144;
        }
        v117 = *(_DWORD *)(a1 + 20);
        if ( (_DWORD)v167 )
        {
          v187[0] = 0;
          v186.m128i_i64[0] = (__int64)v187;
          v186.m128i_i64[1] = 0;
          if ( (unsigned int)v167 > v117 )
            sub_15A3210(a4, 19, (char *)&byte_22F0C30);
          v118 = sub_FDE960(v172, (unsigned int)v167);
          if ( v118 )
            sub_A6F5E0(&v186, (_BYTE *)(*(_QWORD *)(v118 + 16) + 16LL), **(unsigned int **)(v118 + 16));
          sub_9EE7C0(&v186, ":");
          v123 = *(char ***)a4;
          if ( (unsigned int)v167 < *(_DWORD *)(a1 + 20) || (*(_BYTE *)(a1 + 64) & 0x10) != 0 )
          {
            v188.m128i_i64[0] = (__int64)&v186;
            v190 = 260;
            v109 = sub_15A4EB0(v123, (const void ***)&v188, v119, v120, 260, v122);
            sub_15A30F0(a4, (__int64)v109);
          }
          else
          {
            v188.m128i_i64[0] = (__int64)&v186;
            v190 = 260;
            v109 = sub_15A4EB0(v123, (const void ***)&v188, v119, v120, v121, v122);
            sub_15A2F70(a4, (__int64)v109);
          }
          if ( (_BYTE *)v186.m128i_i64[0] != v187 )
            operator delete((void *)v186.m128i_i64[0]);
          v117 = *(_DWORD *)(a1 + 20);
        }
        v115 += 8;
        if ( (unsigned int)v167 >= v117 )
          break;
LABEL_95:
        LODWORD(v167) = (_DWORD)v167 + 1;
        if ( v171 == v115 )
          goto LABEL_143;
      }
      v185 = 0;
      v184[1] = nullptr;
      v184[0] = v173;
      v124 = *(_QWORD *)(v115 - 8);
      v125 = *(_QWORD *)(a6 + 16);
      v179 = 0;
      v180 = 0;
      v126 = *(_QWORD *)(v124 + 48);
      v174 = v125;
      v178 = v126;
      v127 = (unsigned __int64 *)(v125 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v127 )
      {
        sub_F69E10((__int64)&v179, *v127, v169 + 48, (__int64)v127, v112, v113);
        v138 = v180;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 11
          && (*(_BYTE *)(a1 + 64) & 0x20) == 0 )
        {
LABEL_137:
          v139 = *(_QWORD *)(v115 - 8);
          LOBYTE(v180) = v138;
          sub_171B530(&v188, a9, v139, 1, 0, v113, v179, *((__int64 *)&v179 + 1), v180);
          sub_A0AAD0((__int64)v184, &v188);
          if ( (__m128i *)v188.m128i_i64[0] != &v189 )
            operator delete((void *)v188.m128i_i64[0]);
LABEL_128:
          if ( (*(_BYTE *)(v169 + 58) & 4) != 0 && v171 == v115 )
            sub_9EE7C0(v184, ", ...");
          v136 = *(_BYTE *)(a1 + 64);
          v137 = *(char ***)a4;
          v190 = 260;
          v188.m128i_i64[0] = (__int64)v184;
          if ( (v136 & 0x20) != 0 )
          {
            v109 = sub_15A4EB0(v137, (const void ***)&v188, v131, 260, v132, v133);
            sub_15A2FD0(a4, (__int64)v109);
          }
          else if ( (v136 & 0x10) != 0 )
          {
            v109 = sub_15A4EB0(v137, (const void ***)&v188, v131, 260, v132, v133);
            sub_15A30F0(a4, (__int64)v109);
          }
          else
          {
            v109 = sub_15A4EB0(v137, (const void ***)&v188, v131, 260, v132, v133);
            sub_15A3090(a4, (__int64)v109);
          }
          if ( v184[0] != v173 )
            operator delete(v184[0]);
          goto LABEL_95;
        }
        if ( (_BYTE)v180 )
          v178 = sub_F69C10(v170, (__int64)v175, v179, *((__int64 *)&v179 + 1), 2);
      }
      else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v126 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL) == 11 )
      {
        v138 = 0;
        if ( (*(_BYTE *)(a1 + 64) & 0x20) == 0 )
          goto LABEL_137;
      }
      v128 = *(_QWORD *)(v115 - 8);
      LOBYTE(v129) = 0;
      if ( (*(_BYTE *)(v128 + 97) & 0x10) != 0 )
        v129 = (*(_DWORD *)(v128 + 96) >> 13) & 0x7F;
      sub_1713010((__int64)&v186, v129, v170);
      v130 = (__m128i *)sub_99BDC0(&v186, 0, 0, "(", 1u);
      v188.m128i_i64[0] = (__int64)&v189;
      if ( (__m128i *)v130->m128i_i64[0] == &v130[1] )
      {
        v189 = _mm_loadu_si128(v130 + 1);
      }
      else
      {
        v188.m128i_i64[0] = v130->m128i_i64[0];
        v189.m128i_i64[0] = v130[1].m128i_i64[0];
      }
      v188.m128i_i64[1] = v130->m128i_i64[1];
      v130->m128i_i64[0] = (__int64)v130[1].m128i_i64;
      v130->m128i_i64[1] = 0;
      v130[1].m128i_i8[0] = 0;
      sub_A0AAD0((__int64)v184, &v188);
      if ( (__m128i *)v188.m128i_i64[0] != &v189 )
        operator delete((void *)v188.m128i_i64[0]);
      if ( (_BYTE *)v186.m128i_i64[0] != v187 )
        operator delete((void *)v186.m128i_i64[0]);
      sub_F785A0((__int64)&v186, (unsigned __int64 *)v170, a9);
      sub_10E1980(&v188, &v186, ")");
      sub_9EE560(v184, v188.m128i_i64[0], v188.m128i_u64[1]);
      if ( (__m128i *)v188.m128i_i64[0] != &v189 )
        operator delete((void *)v188.m128i_i64[0]);
      if ( (_BYTE *)v186.m128i_i64[0] != v187 )
        operator delete((void *)v186.m128i_i64[0]);
      v134 = *(_QWORD *)(*(_QWORD *)(v115 - 8) + 40LL);
      if ( (v134 & 7) == 0 )
      {
        v135 = v134 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v135 )
        {
          if ( (*(_BYTE *)(a1 + 64) & 0x20) != 0
            || (v131 = *(_BYTE *)(a1 + 64) & 0x10, (*(_BYTE *)(a1 + 64) & 0x10) != 0) )
          {
            sub_A6F5E0(v184, (_BYTE *)(*(_QWORD *)(v135 + 16) + 16LL), **(unsigned int **)(v135 + 16));
          }
        }
      }
      goto LABEL_128;
    }
LABEL_144:
    if ( (*(_BYTE *)(v68 + 58) & 4) != 0 )
    {
      if ( !*(_DWORD *)(v68 + 104) )
      {
        v140 = *(_BYTE *)(a1 + 64);
        if ( (v140 & 0x20) != 0 )
        {
          sub_15A2FD0(a4, (__int64)", ...");
        }
        else if ( (v140 & 0x10) != 0 )
        {
          sub_15A30F0(a4, (__int64)", ...");
        }
        else
        {
          sub_15A3090(a4, (__int64)", ...");
        }
      }
      v109 = (char *)v68;
      sub_1722B20(a2, v68, a4, v111, v112, v113);
    }
    result = sub_15A5CA0(a4, (__int64)v109, v110, v111, v112, v113);
    if ( v181 != v168 + 2 )
    {
      v165 = result;
      operator delete(v181);
      return v165;
    }
  }
  else
  {
    v141 = *(_QWORD *)(a1 + 72);
    if ( v141 )
    {
      sub_16FF7A0((char ***)a4, v141, (*(_BYTE *)(a1 + 64) & 4) != 0, a9);
      v68 = v176;
    }
    v142 = *(char ***)a4;
    sub_B86A00((__int64)&v186, (__int64 *)(v68 + 40));
    v188.m128i_i64[0] = (__int64)&v186;
    v190 = 260;
    v147 = sub_15A4EB0(v142, (const void ***)&v188, v143, v144, v145, v146);
    sub_15A2F70(a4, (__int64)v147);
    if ( (_BYTE *)v186.m128i_i64[0] != v187 )
      operator delete((void *)v186.m128i_i64[0]);
    return sub_15A5CA0(a4, (__int64)v147, v148, v149, v150, v151);
  }
  return result;
}
