__int64 __fastcall sub_107780(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        char a7,
        __int64 *a8,
        __int64 *a9)
{
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r15
  size_t v16; // rsi
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  char v21; // al
  bool v22; // al
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v27; // rax
  const __m128i *v28; // rax
  __int64 *v29; // rdi
  _QWORD *m128i_i64; // r13
  unsigned __int64 v31; // r12
  __m128i v32; // xmm0
  __int64 *v33; // rsi
  _QWORD *v34; // rdi
  __int64 *v35; // r15
  unsigned __int8 v36; // al
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // r15
  int v40; // r13d
  __int64 v41; // rax
  int v42; // ebx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  _DWORD *v45; // rax
  unsigned __int8 v46; // al
  __int64 *v47; // r15
  __int64 *v48; // rax
  __int64 *v49; // rsi
  __m128i *v50; // r15
  __int64 *v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // r9
  size_t v55; // r11
  __int64 *v56; // rcx
  __m128i *v57; // rax
  __int32 *v58; // rsi
  __int64 v59; // rcx
  __int32 v60; // ebx
  __int32 *v61; // rdx
  __int32 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  void *v66; // rbp
  __m128i si128; // xmm0
  __int64 v68; // rax
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rsi
  bool v74; // al
  _QWORD *v75; // rdx
  _QWORD *v76; // rcx
  _QWORD *v77; // rax
  __int64 i; // rcx
  unsigned __int64 v79; // rsi
  __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 *v84; // rbx
  int v85; // esi
  int v86; // eax
  int v87; // ecx
  __int64 v88; // r15
  __int64 **v89; // rdx
  __int64 v90; // rcx
  __int64 *v91; // rax
  __int64 v92; // rsi
  __int64 *v93; // r13
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rdx
  _QWORD *v97; // rax
  _QWORD *v98; // rbp
  __int64 v99; // rax
  __int64 v100; // rbp
  __int64 v101; // r15
  __int64 v102; // rax
  int v103; // ecx
  char v104; // si
  __int64 v105; // rdx
  __int64 v106; // rax
  bool v107; // al
  unsigned int v108; // r12d
  int v109; // eax
  int v110; // esi
  __int64 v111; // rbp
  __int64 v112; // rax
  unsigned __int64 *v113; // r13
  unsigned int v114; // edx
  _QWORD *v115; // rax
  unsigned int v116; // edx
  unsigned __int8 v117; // cl
  _QWORD *v118; // r15
  __int64 v119; // rax
  unsigned __int8 v120; // dl
  _DWORD **v121; // rbp
  char v122; // si
  __int64 v123; // rdx
  __int64 v124; // rdx
  unsigned __int64 v125; // rdi
  unsigned __int64 v126; // r10
  _DWORD *v127; // rdi
  __int64 v128; // rax
  int *v129; // rbp
  int *j; // r13
  _QWORD *v131; // rcx
  int v132; // ebx
  __int64 v133; // rdx
  _DWORD *v134; // rax
  __int64 v135; // rax
  _QWORD *v136; // rax
  size_t v137; // r8
  _DWORD *v138; // rsi
  _DWORD *v139; // rax
  __int64 *v140; // rdx
  char v141; // al
  __int64 v142; // rax
  __int64 v143; // rdx
  size_t n[2]; // [rsp+0h] [rbp-1A8h] BYREF
  __m128i *v145; // [rsp+10h] [rbp-198h]
  __int64 *v146; // [rsp+18h] [rbp-190h]
  _QWORD *v147; // [rsp+20h] [rbp-188h]
  __int64 *v148; // [rsp+28h] [rbp-180h]
  __int64 v149; // [rsp+30h] [rbp-178h]
  __int64 v150; // [rsp+38h] [rbp-170h]
  __int64 **v151; // [rsp+40h] [rbp-168h]
  __int64 *v152; // [rsp+48h] [rbp-160h]
  unsigned int v153; // [rsp+54h] [rbp-154h]
  __int64 v154; // [rsp+58h] [rbp-150h]
  __int64 *v155; // [rsp+60h] [rbp-148h]
  __int64 *v156; // [rsp+68h] [rbp-140h]
  _DWORD *v157; // [rsp+70h] [rbp-138h]
  __int64 v158; // [rsp+78h] [rbp-130h]
  __int64 v159; // [rsp+80h] [rbp-128h]
  char v160; // [rsp+8Bh] [rbp-11Dh]
  int v161; // [rsp+8Ch] [rbp-11Ch]
  char v162; // [rsp+93h] [rbp-115h]
  unsigned int v163; // [rsp+94h] [rbp-114h]
  _QWORD *v164; // [rsp+98h] [rbp-110h]
  __int64 v165; // [rsp+A0h] [rbp-108h]
  int v166; // [rsp+A8h] [rbp-100h]
  int v167; // [rsp+ACh] [rbp-FCh]
  __int64 v168; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned __int8 v169; // [rsp+B8h] [rbp-F0h]
  __int64 *v170[2]; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v171; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v172; // [rsp+D8h] [rbp-D0h]
  __int64 *v173; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v174; // [rsp+F8h] [rbp-B0h]
  __int64 v175; // [rsp+108h] [rbp-A0h]
  char v176; // [rsp+110h] [rbp-98h]
  unsigned int v177; // [rsp+118h] [rbp-90h]
  int v178; // [rsp+11Ch] [rbp-8Ch]
  char v179; // [rsp+120h] [rbp-88h]
  __int64 v180; // [rsp+130h] [rbp-78h] BYREF
  __int128 v181; // [rsp+138h] [rbp-70h]
  __m128i v182; // [rsp+148h] [rbp-60h]
  unsigned __int64 v183; // [rsp+158h] [rbp-50h]
  char v184; // [rsp+160h] [rbp-48h]
  unsigned __int64 v185; // [rsp+168h] [rbp-40h]

  v145 = a1;
  v158 = a4;
  v148 = a8;
  v164 = a5;
  v156 = a9;
  v185 = __readfsqword(0x28u);
  v157 = *(_DWORD **)(a4 + 1504);
  if ( a1 != (__m128i *)(*a5 + 24LL * a1[1].m128i_i32[0]) )
  {
    if ( !under_debugger )
      sub_37EA20(50988);
    goto LABEL_207;
  }
  n[0] = a2 + 24;
  if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(a2 + 32) )
  {
    if ( !under_debugger )
      sub_37EA20(51891);
    goto LABEL_207;
  }
  sub_1030E0((unsigned __int64 *)v145, (__int64)v157);
  v12 = *(_BYTE *)(a2 + 32);
  v13 = *(_BYTE *)(a3 + 8);
  LOBYTE(v153) = v12;
  if ( v12 < v13 )
  {
    v166 = -1;
    v150 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    if ( v13 < v12 )
    {
      v16 = n[0];
      v17 = *(_BYTE *)(a3 + 8);
      v180 = *(_QWORD *)a3;
      *(_QWORD *)&v181 = v17;
      if ( !sub_1024C0((__int64)&v180, n[0]) )
        goto LABEL_15;
      goto LABEL_9;
    }
    v14 = *(_QWORD *)(a2 + 24);
    v15 = *(_QWORD *)a3;
    v150 = v14;
    if ( v14 < v15 )
    {
      v166 = -1;
    }
    else
    {
      if ( v14 > v15 )
      {
        v71 = *(int *)(a2 + 40);
        v180 = v15;
        v72 = *(int *)(a3 + 12);
        v73 = v71 + v150;
        LOBYTE(v71) = *(_BYTE *)(a3 + 8);
        v154 = v73;
        v147 = (_QWORD *)(v15 + v72);
        v146 = &v180;
        *(_QWORD *)&v181 = (char)v71;
        v74 = sub_1024C0((__int64)&v180, n[0]);
        v18 = (__int64)v147;
        if ( v74 )
        {
          if ( v154 >= (__int64)v147 )
          {
            v150 = v15;
            LOBYTE(v149) = v13;
            v166 = 1;
LABEL_20:
            if ( v154 <= v18 )
            {
              LOBYTE(v153) = v13;
              v154 = v18;
            }
LABEL_22:
            v16 = (unsigned __int8)v153;
            if ( (_BYTE)v149 == (_BYTE)v153 )
              goto LABEL_23;
LABEL_9:
            sub_100540(&v180, v16, v18, v19);
          }
        }
        else if ( v154 >= (__int64)v147 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_37EA20(51972);
          goto LABEL_207;
        }
        v150 = v15;
        LOBYTE(v153) = v13;
        LOBYTE(v149) = v13;
        v154 = (__int64)v147;
        v166 = 1;
        goto LABEL_23;
      }
      v166 = 0;
    }
  }
  v154 = *(_QWORD *)(a2 + 24) + *(int *)(a2 + 40);
  v20 = (_QWORD *)(*(_QWORD *)a3 + *(int *)(a3 + 12));
  v21 = *(_BYTE *)(a3 + 8);
  v180 = *(_QWORD *)a3;
  v16 = n[0];
  v147 = v20;
  v146 = &v180;
  *(_QWORD *)&v181 = v21;
  v22 = sub_1024C0((__int64)&v180, n[0]);
  v18 = (__int64)v147;
  if ( !v22 )
  {
    if ( v13 < (unsigned __int8)v153 )
      goto LABEL_15;
    if ( (unsigned __int8)v153 >= v13 )
    {
      if ( (__int64)v147 <= v154 )
        goto LABEL_15;
      goto LABEL_187;
    }
    v70 = v153;
    v154 = (__int64)v147;
    LOBYTE(v153) = v13;
    LOBYTE(v149) = v70;
    goto LABEL_22;
  }
  if ( (unsigned __int8)v153 < v13 )
    goto LABEL_9;
  if ( v13 >= (unsigned __int8)v153 )
  {
    LOBYTE(v149) = v153;
    if ( (__int64)v147 > v154 )
    {
LABEL_187:
      v141 = v153;
      v154 = (__int64)v147;
      LOBYTE(v153) = v13;
      LOBYTE(v149) = v141;
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  LOBYTE(v149) = v153;
LABEL_23:
  v165 = v154 - v150;
  LODWORD(v151) = v154 - v150;
  if ( (_BYTE)v149 == 1 )
  {
    if ( (a7 & 1) == 0 && (int)sub_1313D0(v157, 0, (unsigned int)v150, 0x7FFFFFFF, 0) < (int)v165
      || (unsigned __int8)sub_64160((_QWORD *)(v158 + 296), v150, (int)v151)
      && !(unsigned __int8)sub_64110((_QWORD *)(v158 + 296), v150, (int)v151) )
    {
      goto LABEL_30;
    }
    v38 = v157[17];
    if ( v38 > (int)v150 )
    {
      if ( v38 <= (int)v154 - 1 )
      {
        if ( !under_debugger )
          sub_37EA20(51962);
        goto LABEL_207;
      }
      v39 = (*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v157 + 184LL))(v157, (unsigned int)v150);
      LODWORD(v147) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v157 + 32LL))(v157, v39);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v157 + 264LL))(v157, (unsigned int)v39) )
      {
        if ( !(_DWORD)v147
          || (int)v150 < (unsigned __int64)(int)v39
          || (int)v147 + (__int64)(int)v39 - 1 < (unsigned __int64)((int)v150 + (__int64)(int)v165 - 1) )
        {
          goto LABEL_30;
        }
      }
      else
      {
        v108 = v39 + (_DWORD)v147;
        if ( (int)v154 > (int)v39 + (int)v147 )
        {
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v157 + 264LL))(v157, v108) )
              goto LABEL_30;
            v109 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v157 + 32LL))(v157, v108);
            if ( v109 <= 0 )
              break;
            v108 += v109;
            if ( (int)v154 <= (int)v108 )
              goto LABEL_69;
          }
          if ( !under_debugger )
            sub_37EA20(51963);
          goto LABEL_207;
        }
      }
    }
LABEL_69:
    v13 = *(_BYTE *)(a3 + 8);
  }
  if ( v13 == 5 )
  {
    v23 = *(_QWORD *)a3;
    v24 = *(unsigned int *)(a3 + 12);
    if ( *(int *)(v158 + 116) > 0 )
    {
      v25 = *(_QWORD *)(v158 + 136);
      if ( v25 != v23 && v25 >= v23 && (_DWORD)v24 && (int)v24 + v23 - 1 >= v25 )
        goto LABEL_30;
    }
    v27 = *(_QWORD *)(v158 + 144);
    if ( v27 != v23 && v27 >= v23 && (_DWORD)v24 && (int)v24 + v23 - 1 >= v27 )
      goto LABEL_30;
    if ( (unsigned __int8)sub_226360(v158, v23, v24, 0) )
      goto LABEL_30;
  }
  v180 = 0;
  v184 = 1;
  v182.m128i_i64[0] = v150;
  v181 = 0;
  v182.m128i_i8[8] = v149;
  v183 = 0xFFFFFFFF00000001LL;
  v28 = (const __m128i *)sub_102CA0((unsigned __int64 *)v145, (__int64)v146);
  v29 = (__int64 *)v145->m128i_i64[0];
  m128i_i64 = v28->m128i_i64;
  if ( (const __m128i *)v145->m128i_i64[0] != v28 )
  {
    v31 = (unsigned __int64)&v28[1].m128i_u64[1];
    if ( v28[3].m128i_i8[8] == (_BYTE)v149 && v28[3].m128i_i64[0] == v150 )
      goto LABEL_46;
    if ( !v28[2].m128i_i64[0] )
    {
      v180 = 0;
      v181 = 0;
      v32 = _mm_loadu_si128(v28 + 3);
      v183 = 0xFFFFFFFF00000001LL;
      v184 = 1;
      v182 = v32;
      v33 = sub_1013C0(v29, (__int64)v146);
      if ( v29 != v33 )
        sub_106A40((unsigned __int64 **)v145, v33);
      goto LABEL_41;
    }
LABEL_30:
    v173 = 0;
    v174.m128i_i64[0] = 0;
    sub_32C310(n[0], &v173);
    v180 = 0;
    *(_QWORD *)&v181 = 0;
    sub_32C310(a3, v146);
    sub_1ECE30(v157, v148, &v173, *(unsigned int *)(a2 + 40), v146, *(unsigned int *)(a3 + 12));
    sub_105A50(v158, a2, (__int64)v164, a6);
    cleanup_argloc();
    cleanup_argloc();
    return 0;
  }
LABEL_41:
  v180 = 0;
  v182.m128i_i64[0] = v150;
  v181 = 0;
  v182.m128i_i8[8] = v149;
  v183 = *(_QWORD *)(a2 + 40);
  v184 = *(_BYTE *)(a2 + 48);
  sub_100700(v146, a2);
  v173 = v146;
  m128i_i64 = (_QWORD *)sub_106430(v145, (__int64)v146, &v173);
  if ( v180 )
  {
    *(_QWORD *)&v181 = 0;
    qfree();
  }
  if ( v156 )
    sub_63890(v156, v145[1].m128i_i32[0]);
  v31 = (unsigned __int64)(m128i_i64 + 3);
LABEL_46:
  v167 = *(_DWORD *)(v31 + 40);
  *(_DWORD *)(v31 + 40) = v165;
  v174 = 0;
  v152 = sub_105830(m128i_i64);
  v34 = (_QWORD *)v145->m128i_i64[0];
  if ( v152 != (__int64 *)v145->m128i_i64[0] )
  {
    v162 = 1;
    v161 = -1;
    v163 = 0;
    v160 = 0;
    v159 = -1;
    v155 = 0;
    while ( 1 )
    {
      v35 = v152 + 3;
      v36 = *((_BYTE *)v152 + 56);
      if ( v36 >= (unsigned __int8)v153 && ((unsigned __int8)v153 < v36 || v152[6] >= v154) )
        break;
      v40 = 0;
      v41 = 0;
      if ( v152[4] )
      {
        do
        {
          v42 = *(_DWORD *)(*v35 + 4 * v41);
          v43 = *(_QWORD **)(v31 + 8);
          v44 = *(_QWORD *)v31 + 4LL * (_QWORD)v43;
          if ( *(_QWORD *)v31 == v44 )
            goto LABEL_88;
          v45 = *(_DWORD **)v31;
          while ( v42 != *v45 )
          {
            if ( (_DWORD *)v44 == ++v45 )
              goto LABEL_88;
          }
          if ( v45 == (_DWORD *)v44 )
          {
LABEL_88:
            v148 = (__int64 *)(*(_QWORD *)v31 + 4LL * (_QWORD)v43);
            v52 = *a6;
            v147 = v43;
            v180 = 0;
            n[0] = v52 + 24LL * v42;
            v182.m128i_i64[0] = v150;
            v184 = 1;
            v182.m128i_i8[8] = v149;
            v181 = 0;
            v183 = (unsigned int)v151 | 0xFFFFFFFF00000000LL;
            v53 = sub_102CA0((unsigned __int64 *)n[0], (__int64)v146);
            v54 = v53;
            if ( v53 != *(_QWORD **)n[0] )
            {
              v55 = (size_t)(v53 + 3);
              if ( v53 != (_QWORD *)-24LL )
              {
                v56 = v148;
                if ( *(_QWORD *)(v31 + 16) < (unsigned __int64)v147 + 1 )
                {
                  v147 = v53;
                  n[0] = (size_t)(v53 + 3);
                  v63 = qvector_reserve();
                  v64 = *(_QWORD *)(v31 + 8);
                  v54 = v147;
                  *(_QWORD *)v31 = v63;
                  v55 = n[0];
                  v56 = (__int64 *)(v63 + 4 * v64);
                }
                *(_DWORD *)v56 = v42;
                v57 = v145;
                ++*(_QWORD *)(v31 + 8);
                v58 = (__int32 *)v54[3];
                v59 = *(_QWORD *)(v55 + 8);
                v60 = v57[1].m128i_i32[0];
                v61 = &v58[v59];
                if ( v58 == v61 )
                  goto LABEL_97;
                v62 = (__int32 *)v54[3];
                while ( v60 != *v62 )
                {
                  if ( v61 == ++v62 )
                    goto LABEL_97;
                }
                if ( v62 == v61 )
                {
LABEL_97:
                  if ( *(_QWORD *)(v55 + 16) < (unsigned __int64)(v59 + 1) )
                  {
                    v147 = v54;
                    n[0] = v55;
                    v69 = qvector_reserve();
                    v55 = n[0];
                    v147[3] = v69;
                    v61 = (__int32 *)(v69 + 4LL * *(_QWORD *)(v55 + 8));
                  }
                  *v61 = v60;
                  ++*(_QWORD *)(v55 + 8);
                }
              }
            }
          }
          v41 = ++v40;
        }
        while ( v40 < (unsigned __int64)v35[1] );
      }
      if ( (v35[6] & 4) != 0 )
        *(_BYTE *)(v31 + 48) |= 4u;
      v46 = *((_BYTE *)v35 + 32);
      if ( v46 >= (unsigned __int8)v153 && ((unsigned __int8)v153 < v46 || v35[3] + *((int *)v35 + 10) > v154) )
      {
        v65 = v35[1];
        v66 = 0;
        if ( v65 )
        {
          n[0] = 4 * v65;
          v66 = (void *)qalloc_or_throw();
          memcpy(v66, (const void *)*v35, n[0]);
        }
        si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v65, (__m128i)(unsigned __int64)v65);
        if ( v155 )
        {
          *(__m128i *)n = si128;
          qfree();
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v174 = si128;
        v68 = v35[3];
        v155 = (__int64 *)v66;
        v159 = v68;
        v160 = *((_BYTE *)v35 + 32);
        v163 = *((_DWORD *)v35 + 10);
        v161 = *((_DWORD *)v35 + 11);
        v162 = *((_BYTE *)v35 + 48);
      }
      v47 = v152;
      v48 = sub_105830(v152);
      v49 = v47;
      v50 = v145;
      v51 = v48;
      sub_106A40((unsigned __int64 **)v145, v49);
      if ( v156 )
        sub_63890(v156, v50[1].m128i_i32[0]);
      v34 = (_QWORD *)v145->m128i_i64[0];
      if ( (__int64 *)v145->m128i_i64[0] == v51 )
        break;
      v152 = v51;
    }
    if ( v166 != 1 )
    {
LABEL_52:
      LOBYTE(v150) = 0;
      if ( !v160 )
        goto LABEL_53;
      v180 = 0;
      v181 = 0;
      v182.m128i_i64[0] = v154;
      v173 = v155;
      v182.m128i_i8[8] = v153;
      v184 = v162;
      v175 = v159;
      v179 = v162;
      v178 = v161;
      v183 = __PAIR64__(v161, v163);
      v176 = v160;
      v177 = v163;
      sub_100700(v146, (__int64)&v173);
      v151 = v170;
      v170[0] = v146;
      v80 = (__int64 *)sub_106430(v145, (__int64)v146, v170);
      v83 = v180;
      v152 = v80;
      if ( v180 )
      {
        *(_QWORD *)&v181 = 0;
        qfree();
      }
      v84 = v152 + 3;
      if ( v160 != (_BYTE)v153 )
        sub_100540(v83, (unsigned __int8)v153, v81, v82);
      v85 = v159;
      v86 = v154;
      *((_DWORD *)v152 + 17) = -1;
      v87 = *((_DWORD *)v84 + 10);
      *((_BYTE *)v84 + 48) &= ~2u;
      v88 = v158;
      v89 = v151;
      v90 = (unsigned int)(v87 - (v86 - v85));
      v91 = v152;
      *((_DWORD *)v84 + 10) = v90;
      v92 = *(_QWORD *)(v88 + 1440);
      v93 = v91 + 6;
      v170[0] = 0;
      v172 = 0;
      v170[1] = 0;
      v171 = 0;
      sub_32C0E0(v91 + 6, v92, v89, v90);
      v94 = v145[1].m128i_u32[0];
      if ( (unsigned int)v94 >= *(_DWORD *)(v88 + 64) )
        sub_100560();
      v95 = *(_QWORD *)(*(_QWORD *)(v158 + 528) + 8 * v94);
      v96 = (_QWORD *)(v95 + 240);
      v97 = (_QWORD *)(v95 + 160);
      if ( (a7 & 2) == 0 )
        v96 = v97;
      v98 = v96;
      if ( (unsigned __int8)sub_63E80(v151, v96) )
      {
        v99 = v84[1];
      }
      else
      {
        LOBYTE(v150) = sub_314F20(&v171, v98 + 2);
        v99 = v84[1];
        v110 = v99 - 1;
        LODWORD(n[0]) = v99 - 1;
        if ( !(_BYTE)v150 )
        {
          v149 = 4LL * (unsigned int)v110;
          v148 = &v168;
          if ( v110 >= 0 )
          {
            do
            {
              v111 = v84[3];
              v112 = *(int *)(*v84 + v149);
              LOBYTE(v154) = *((_BYTE *)v84 + 32);
              LODWORD(v147) = v112;
              v113 = (unsigned __int64 *)(*a6 + 24 * v112);
              v114 = *((_DWORD *)v84 + 10);
              v182.m128i_i8[8] = v154;
              v180 = 0;
              v183 = v114 | 0xFFFFFFFF00000000LL;
              v153 = v114;
              v182.m128i_i64[0] = v111;
              v184 = 1;
              v181 = 0;
              v115 = sub_102CA0(v113, (__int64)v146);
              v116 = v153;
              v117 = v154;
              v118 = v115;
              if ( (_QWORD *)*v113 != v115 )
              {
                while ( 1 )
                {
                  v119 = v111 + (int)v116;
                  v120 = *((_BYTE *)v118 + 56);
                  v121 = (_DWORD **)(v118 + 3);
                  if ( v120 >= v117 && (v117 < v120 || v119 <= v118[6]) )
                    break;
                  if ( *(_BYTE *)(v31 + 32) != *((_BYTE *)v118 + 56)
                    || !*(_DWORD *)(v31 + 40)
                    || !*((_DWORD *)v118 + 16)
                    || (v125 = *(_QWORD *)(v31 + 24), v126 = v118[6], *(int *)(v31 + 40) + v125 - 1 < v126)
                    || *((int *)v118 + 16) + v126 - 1 < v125 )
                  {
                    v122 = *((_BYTE *)v118 + 56);
                    v123 = *((int *)v118 + 16);
                    v169 = v117;
                    v124 = v118[6] + v123;
                    v168 = v119;
                    v180 = v124;
                    LOBYTE(v181) = v122;
                    if ( !(unsigned __int8)sub_102F40((unsigned __int64 *)v145, v148, v146, (int)v147) )
                    {
                      v127 = *v121;
                      v128 = v118[3] + 4LL * v118[4];
                      if ( *v121 != (_DWORD *)v128 )
                      {
                        while ( v145[1].m128i_i32[0] != *v127 )
                        {
                          if ( (_DWORD *)v128 == ++v127 )
                            goto LABEL_153;
                        }
                        if ( (_DWORD *)v128 != v127 )
                        {
                          memmove(v127, v127 + 1, v128 - (_QWORD)v127 - 4);
                          --v118[4];
                        }
                      }
                    }
                  }
LABEL_153:
                  v118 = sub_105830(v118);
                  if ( v118 == (_QWORD *)*v113 )
                    break;
                  v116 = *((_DWORD *)v84 + 10);
                  v111 = v84[3];
                  v117 = *((_BYTE *)v84 + 32);
                }
              }
              --LODWORD(n[0]);
              v149 -= 4;
            }
            while ( LODWORD(n[0]) != -1 );
          }
          sub_106A40((unsigned __int64 **)v145, v152);
          goto LABEL_136;
        }
      }
      v100 = (unsigned int)(v99 - 1);
      v101 = 4 * v100;
      if ( (int)v100 >= 0 )
      {
        do
        {
          v102 = *(int *)(*v84 + v101);
          v103 = v145[1].m128i_i32[0];
          v104 = *((_BYTE *)v84 + 32);
          v180 = v84[3] + *((int *)v84 + 10);
          v105 = 3 * v102;
          v106 = *a6;
          LOBYTE(v181) = v104;
          if ( !(unsigned __int8)sub_102F40((unsigned __int64 *)(v106 + 8 * v105), v93, v146, v103) )
            memmove((void *)(v101 + *v84), (const void *)(v101 + *v84 + 4), 4 * v84[1]-- - 4 - v101);
          LODWORD(v100) = v100 - 1;
          v101 -= 4;
        }
        while ( (_DWORD)v100 != -1 );
      }
      LOBYTE(v150) = sub_1033A0(v158, v164, a6, v145[1].m128i_u32[0], (__int64)v84, 0);
LABEL_136:
      sub_92DA0((__int64)v151);
      goto LABEL_53;
    }
    goto LABEL_110;
  }
  if ( v166 == 1 )
  {
    v161 = -1;
    v160 = 0;
    v163 = 0;
    v162 = 1;
    v155 = 0;
    v159 = -1;
LABEL_110:
    v180 = 0;
    v184 = 1;
    v182.m128i_i64[0] = v150;
    v181 = 0;
    v182.m128i_i8[8] = v149;
    v183 = 0xFFFFFFFF00000001LL;
    v75 = sub_1013C0(v34, (__int64)v146);
    if ( v75 != v34 )
    {
      if ( v34 )
      {
        if ( !v145->m128i_i64[1] )
        {
LABEL_115:
          if ( (*v75 & 2) != 0 )
          {
            v77 = (_QWORD *)v75[2];
          }
          else
          {
            v76 = (_QWORD *)v75[1];
            if ( (*(_BYTE *)v76 & 2) != 0 )
            {
              v77 = (_QWORD *)(*v75 & 0xFFFFFFFFFFFFFFFCLL);
              for ( i = *v77; (i & 2) == 0; v77 = (_QWORD *)v79 )
              {
                if ( v75 != (_QWORD *)v77[1] )
                  break;
                v75 = v77;
                v79 = i & 0xFFFFFFFFFFFFFFFCLL;
                i = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              do
              {
                v77 = v76;
                v76 = (_QWORD *)v76[2];
              }
              while ( (*(_BYTE *)v76 & 2) == 0 );
            }
          }
          v129 = (int *)v77[3];
          for ( j = &v129[v77[4]]; j != v129; ++v129 )
          {
            v131 = *(_QWORD **)(v31 + 8);
            v132 = *v129;
            v133 = *(_QWORD *)v31 + 4LL * (_QWORD)v131;
            if ( *(_QWORD *)v31 == v133 )
              goto LABEL_176;
            v134 = *(_DWORD **)v31;
            while ( v132 != *v134 )
            {
              if ( (_DWORD *)v133 == ++v134 )
                goto LABEL_176;
            }
            if ( (_DWORD *)v133 == v134 )
            {
LABEL_176:
              v148 = (__int64 *)(*(_QWORD *)v31 + 4LL * (_QWORD)v131);
              v135 = *a6;
              v147 = v131;
              n[0] = v135 + 24LL * v132;
              v136 = sub_102CA0((unsigned __int64 *)n[0], v31);
              if ( v136 != *(_QWORD **)n[0] )
              {
                v137 = (size_t)(v136 + 3);
                if ( v136 != (_QWORD *)-24LL )
                {
                  v138 = (_DWORD *)v136[3];
                  v139 = &v138[v136[4]];
                  if ( v138 != v139 )
                  {
                    v140 = v148;
                    while ( v145[1].m128i_i32[0] != *v138 )
                    {
                      if ( v139 == ++v138 )
                        goto LABEL_174;
                    }
                    if ( v139 != v138 )
                    {
                      if ( *(_QWORD *)(v31 + 16) < (unsigned __int64)v147 + 1 )
                      {
                        n[0] = v137;
                        v142 = qvector_reserve();
                        v143 = *(_QWORD *)(v31 + 8);
                        v137 = n[0];
                        *(_QWORD *)v31 = v142;
                        v140 = (__int64 *)(v142 + 4 * v143);
                      }
                      *(_DWORD *)v140 = v132;
                      ++*(_QWORD *)(v31 + 8);
                      if ( (*(_BYTE *)(v137 + 48) & 4) != 0 )
                        *(_BYTE *)(v31 + 48) |= 4u;
                    }
                  }
                }
              }
            }
LABEL_174:
            ;
          }
          goto LABEL_52;
        }
        v34 = (_QWORD *)v34[1];
      }
      if ( v75 == v34 )
        goto LABEL_52;
      goto LABEL_115;
    }
    if ( !under_debugger )
      sub_37EA20(52035);
LABEL_207:
    BUG();
  }
  v155 = 0;
  LOBYTE(v150) = 0;
LABEL_53:
  v37 = v145[1].m128i_u32[0];
  if ( v37 && v167 < (int)v165 )
  {
    v107 = sub_1033A0(v158, v164, a6, v37, v31, v167);
    LOBYTE(v150) = v107 | v150;
  }
  sub_105AE0(v158, v31, (__int64)v164, a6);
  sub_1030E0((unsigned __int64 *)v145, (__int64)v157);
  if ( v155 )
    qfree();
  return (unsigned int)(unsigned __int8)v150 + 1;
}
