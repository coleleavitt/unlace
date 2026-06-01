__int64 __fastcall sub_AF86C0(__int64 a1, __int64 a2)
{
  char **exception; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int ***v11; // rcx
  unsigned int ***v12; // r12
  unsigned int ***v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int **v16; // rax
  __int64 v17; // r13
  int v18; // r8d
  int v19; // r9d
  unsigned int *v20; // rax
  unsigned int *v21; // r14
  _QWORD *v22; // rax
  unsigned __int32 v23; // eax
  __int64 v24; // r13
  int v25; // r14d
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // r13d
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  unsigned __int64 v33; // rdi
  _QWORD *v34; // rsi
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 *v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rax
  int *v48; // r12
  char v49; // r14
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 *v52; // rdx
  __int64 v53; // rdi
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rsi
  int v57; // r8d
  int v58; // r9d
  char v59; // r13
  unsigned int v60; // eax
  char *v61; // r12
  unsigned int v62; // eax
  __int64 v63; // rsi
  char v64; // r13
  unsigned int *v65; // rax
  __int64 v66; // r12
  unsigned int v67; // eax
  __int64 v68; // r13
  __int64 v69; // rdi
  char v70; // al
  unsigned int v71; // ebx
  int v73; // r13d
  int v74; // eax
  int v75; // r8d
  int v76; // r9d
  __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // r8d
  int v80; // r9d
  __m128i *v81; // r13
  bool v82; // zf
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rax
  int v86; // r8d
  int v87; // r9d
  __m128 v88; // xmm0
  __int64 v89; // rax
  int v90; // r8d
  int v91; // r9d
  __m128i v92; // xmm0
  __int64 v93; // rax
  int v94; // eax
  __int64 v95; // rdi
  unsigned int v96; // eax
  __int64 v97; // rdi
  unsigned int v98; // r8d
  __int64 v99; // rax
  __int64 v100; // r14
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // r13d
  unsigned int v104; // eax
  unsigned int v105; // r14d
  unsigned int v106; // eax
  __m128i *i; // rdx
  __int64 v108; // rax
  __m128i *v109; // rax
  int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rdi
  unsigned int v114; // r13d
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  _QWORD *v118; // rax
  unsigned __int64 v119; // rdi
  int v120; // [rsp+10h] [rbp-2F0h]
  int v121; // [rsp+10h] [rbp-2F0h]
  int v122; // [rsp+10h] [rbp-2F0h]
  int v123; // [rsp+10h] [rbp-2F0h]
  unsigned int v124; // [rsp+14h] [rbp-2ECh]
  int v125; // [rsp+18h] [rbp-2E8h]
  __m128 *v126; // [rsp+18h] [rbp-2E8h]
  int v127; // [rsp+18h] [rbp-2E8h]
  int v128; // [rsp+18h] [rbp-2E8h]
  int v129; // [rsp+18h] [rbp-2E8h]
  int v130[2]; // [rsp+20h] [rbp-2E0h]
  int v131; // [rsp+20h] [rbp-2E0h]
  int v132; // [rsp+20h] [rbp-2E0h]
  int v133; // [rsp+20h] [rbp-2E0h]
  _QWORD *v134; // [rsp+28h] [rbp-2D8h]
  int v135; // [rsp+28h] [rbp-2D8h]
  int v136; // [rsp+28h] [rbp-2D8h]
  int v137; // [rsp+28h] [rbp-2D8h]
  _BYTE *v138; // [rsp+30h] [rbp-2D0h]
  int v139; // [rsp+30h] [rbp-2D0h]
  int v140; // [rsp+30h] [rbp-2D0h]
  int v141; // [rsp+30h] [rbp-2D0h]
  __int64 *v142; // [rsp+38h] [rbp-2C8h]
  int v143; // [rsp+38h] [rbp-2C8h]
  unsigned int v144; // [rsp+38h] [rbp-2C8h]
  char v145; // [rsp+38h] [rbp-2C8h]
  char v146; // [rsp+38h] [rbp-2C8h]
  char v147; // [rsp+38h] [rbp-2C8h]
  int v148; // [rsp+38h] [rbp-2C8h]
  int v149; // [rsp+38h] [rbp-2C8h]
  __m128i *v150; // [rsp+38h] [rbp-2C8h]
  __m128i v151; // [rsp+40h] [rbp-2C0h] BYREF
  unsigned __int64 v152; // [rsp+50h] [rbp-2B0h]
  int v153[2]; // [rsp+58h] [rbp-2A8h]
  __m128i v154; // [rsp+60h] [rbp-2A0h] BYREF
  __m128i v155; // [rsp+70h] [rbp-290h] BYREF
  int v156[2]; // [rsp+80h] [rbp-280h]
  int v157[2]; // [rsp+88h] [rbp-278h]
  unsigned int *v158; // [rsp+90h] [rbp-270h]
  unsigned int ***v159; // [rsp+98h] [rbp-268h]
  unsigned int v160; // [rsp+A4h] [rbp-25Ch]
  unsigned __int64 v161; // [rsp+A8h] [rbp-258h] BYREF
  __int64 v162; // [rsp+B0h] [rbp-250h] BYREF
  __int64 v163; // [rsp+B8h] [rbp-248h] BYREF
  void *s; // [rsp+C0h] [rbp-240h] BYREF
  __int64 v165; // [rsp+C8h] [rbp-238h]
  __m128i v166; // [rsp+D0h] [rbp-230h] BYREF
  __m128 v167; // [rsp+E0h] [rbp-220h] BYREF
  int v168[4]; // [rsp+F0h] [rbp-210h] BYREF
  int v169[4]; // [rsp+100h] [rbp-200h] BYREF
  int v170[4]; // [rsp+110h] [rbp-1F0h] BYREF
  int v171[4]; // [rsp+130h] [rbp-1D0h] BYREF
  __int64 v172; // [rsp+140h] [rbp-1C0h]
  int v173; // [rsp+148h] [rbp-1B8h]
  __int64 v174; // [rsp+150h] [rbp-1B0h]
  __int32 v175; // [rsp+158h] [rbp-1A8h]
  _BYTE v176[48]; // [rsp+160h] [rbp-1A0h] BYREF
  __int64 v177; // [rsp+190h] [rbp-170h]

  *(_QWORD *)v130 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v130 + 24LL) + 8LL);
  if ( *(_BYTE *)(v4 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v5 = *(_DWORD **)v4;
  *(_QWORD *)v157 = *(_QWORD *)(a1 + 24);
  v138 = v176;
  *(_QWORD *)v153 = v5;
  sub_AFC790(v176);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 8696);
  LODWORD(v159) = *v5;
  v10 = (unsigned int)v159 + 0x80000000;
  if ( !v9 || (unsigned int)v10 >= *(_DWORD *)(v9 - 4) )
  {
    v11 = *(unsigned int ****)(v8 + 8704);
    if ( v11 )
      goto LABEL_5;
LABEL_64:
    v47 = *(_QWORD *)(a2 + 40);
    if ( !v47 )
      goto LABEL_61;
    LOBYTE(v134) = 0;
    LODWORD(v158) = *(_DWORD *)(v47 - 4);
    if ( !(_DWORD)v158 )
      goto LABEL_61;
    goto LABEL_40;
  }
  v11 = *(unsigned int ****)(v9 + 8 * v10);
  if ( !v11 )
    goto LABEL_64;
LABEL_5:
  v12 = &v11[*((unsigned int *)v11 - 1)];
  if ( v11 == v12 )
  {
    v47 = *(_QWORD *)(a2 + 40);
    if ( !v47 )
      goto LABEL_61;
    LOBYTE(v134) = 0;
    LODWORD(v158) = *(_DWORD *)(v47 - 4);
    if ( !(_DWORD)v158 )
      goto LABEL_61;
LABEL_40:
    v159 = nullptr;
    v126 = &v167;
    while ( 1 )
    {
      v48 = *(int **)(v47 + 8LL * (_QWORD)v159);
      v49 = *((_BYTE *)v48 + 16);
      if ( v49 )
      {
        v50 = *(_QWORD *)(a1 + 32);
        v143 = *v48;
        v51 = *(__int64 **)(v50 + 8LL * (unsigned int)v48[5]);
        v52 = *(__int64 **)(v50 + 8LL * (unsigned int)v48[6]);
        v53 = v51[1];
        v154.m128i_i64[0] = *v51;
        v155.m128i_i64[0] = *v52;
        v54 = sub_B39350(v53, *(unsigned int *)(a1 + 8));
        v55 = (unsigned int)v48[6];
        v56 = *(unsigned int *)(a1 + 8);
        v156[0] = v54;
        v160 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v55) + 8LL), v56);
        v59 = v160;
        if ( !v177 )
          break;
        v60 = *(_DWORD *)(v177 - 4);
        if ( v156[0] >= v60 || v160 >= v60 )
          break;
        v61 = nullptr;
        v124 = v160 >> 5;
        LODWORD(v152) = (v160 >> 5) + 1;
        v151.m128i_i64[0] = (__int64)&s;
        do
        {
          do
          {
            s = v61;
            sub_2FD3F0((unsigned int **)v151.m128i_i64[0]);
            v61 = (char *)s;
          }
          while ( !s );
          v62 = v152;
        }
        while ( *((_DWORD *)s - 2) < (unsigned int)v152 );
        *((_DWORD *)s - 1) = v152;
        memset(v61, 0, 4LL * v62);
        v63 = (unsigned int)v156[0];
        *(_DWORD *)&v61[4 * v124] |= 1 << v59;
        s = v61;
        v165 = 0;
        v64 = sub_AFB050(v138, v63, v151.m128i_i64[0]);
        if ( v165 )
          sub_186B220((void *)(v165 - 8));
        sub_186B220(v61 - 8);
        if ( !v64 )
          break;
      }
LABEL_41:
      v159 = (unsigned int ***)((char *)v159 + 1);
      if ( (unsigned int)v159 >= (unsigned int)v158 )
        goto LABEL_60;
      v47 = *(_QWORD *)(a2 + 40);
    }
    v167 = _mm_loadh_ps((const double *)v155.m128i_i64);
    v65 = (unsigned int *)sub_15DC610(
                            v157[0],
                            v153[0],
                            2,
                            (int)v126,
                            v57,
                            v58,
                            v120,
                            (int)v126,
                            v130[0],
                            (int)v134,
                            (int)v138,
                            v143,
                            v167.m128_i32[0],
                            v167.m128_i32[2],
                            v152,
                            *(void **)v153);
    v66 = (__int64)v65;
    if ( v65 )
      ++v65[2];
    sub_AEE2E0(a1, v65);
    v67 = sub_B645B0(*(_QWORD *)(a1 + 16), v66);
    v68 = *(_QWORD *)(a1 + 16);
    v156[0] = v67;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v68 + 7488) + 48LL))(
      *(_QWORD *)(v68 + 7488),
      *(_QWORD *)(*(_QWORD *)(v68 + 8840) + 8LL * (v67 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v68 + 7488) + 64LL))(*(_QWORD *)(v68 + 7488));
    v69 = *(_QWORD *)(a1 + 16);
    v70 = *(_BYTE *)(*(_QWORD *)(v69 + 8848) + (unsigned int)v156[0]);
    if ( v70 == -1 )
    {
      v152 = *(_QWORD *)a2;
      v73 = v152;
      v74 = sub_AEDDD0(a2);
      *(__m128i *)v171 = _mm_load_si128(&v151);
      v77 = sub_15DC610(
              v73,
              v74,
              2,
              (int)v171,
              v75,
              v76,
              v120,
              (int)v126,
              v130[0],
              (int)v134,
              (int)v138,
              v144,
              v151.m128i_i32[0],
              v151.m128i_i32[2],
              v152,
              *(void **)v153);
      v81 = (__m128i *)v77;
      v154 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v154), (__m128i)(unsigned __int64)v77);
      if ( v77 )
      {
        v82 = (*(_DWORD *)(v77 + 8))++ == -1;
        if ( v82 )
          sub_15D7BC0(v152, v77);
      }
      sub_AEE360(a1, v153[0], v81, v78, v79, v80);
      *(__m128i *)v168 = _mm_load_si128(&v154);
      v85 = sub_15DC610(
              v157[0],
              v153[0],
              2,
              (int)v168,
              v83,
              v84,
              v121,
              v127,
              v131,
              v135,
              v139,
              v145,
              v151.m128i_i32[0],
              v151.m128i_i32[2],
              v152,
              *(void **)v153);
      v154.m128i_i64[0] = v85;
      v88 = _mm_loadh_ps((const double *)v155.m128i_i64);
      if ( v85 )
        ++*(_DWORD *)(v85 + 8);
      *(__m128 *)v169 = v88;
      v89 = sub_15DC610(
              v157[0],
              v132,
              2,
              (int)v169,
              v86,
              v87,
              v122,
              v128,
              v132,
              v136,
              v140,
              v146,
              v88.m128_i32[0],
              v88.m128_i32[2],
              v152,
              *(void **)v153);
      v155.m128i_i64[0] = v89;
      v92 = _mm_load_si128(&v151);
      if ( v89 )
        ++*(_DWORD *)(v89 + 8);
      *(__m128i *)v170 = v92;
      v93 = sub_15DC610(
              v157[0],
              v153[0],
              2,
              (int)v170,
              v90,
              v91,
              v123,
              v129,
              v133,
              v137,
              v141,
              v147,
              v151.m128i_i32[0],
              v151.m128i_i32[2],
              v152,
              *(void **)v153);
      v151.m128i_i64[0] = v93;
      if ( v93 )
        ++*(_DWORD *)(v93 + 8);
      sub_AEE2E0(a1, (unsigned int *)v154.m128i_i64[0]);
      sub_AEE2E0(a1, (unsigned int *)v155.m128i_i64[0]);
      sub_AEE2E0(a1, (unsigned int *)v151.m128i_i64[0]);
      v94 = sub_B645B0(*(_QWORD *)(a1 + 16), v155.m128i_i64[0]);
      v95 = *(_QWORD *)(a1 + 16);
      LODWORD(v152) = v94;
      v96 = sub_B645B0(v95, v154.m128i_i64[0]);
      v97 = *(_QWORD *)(a1 + 16);
      v98 = v96;
      v99 = *(_QWORD *)(v97 + 8848);
      if ( *(_BYTE *)(v99 + (unsigned int)v152) == 1 && *(_BYTE *)(v99 + v98) == 1 )
      {
        v100 = *(_QWORD *)v157;
        sub_AEDAF0(v151.m128i_i64[0], *(__int64 *)v157);
        sub_AEDAF0(v155.m128i_i64[0], v100);
        sub_AEDAF0(v154.m128i_i64[0], v100);
        if ( !v81 )
          goto LABEL_59;
        v49 = (char)v134;
      }
      else
      {
        v149 = 2 * v148 + 1;
        sub_B6A4A0(v97, *(_DWORD *)(a1 + 8), v149, v156[0], v98, 0, 0);
        sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v149, v156[0], v152, 0, 0);
        if ( !v81->m128i_i16[2] )
        {
          for ( i = v81; ; i = v150 )
          {
            *(_QWORD *)v156 = i;
            v108 = sub_AEDDD0(a2);
            if ( *(_QWORD *)(*(_QWORD *)v156 + 16LL) != v108 )
              break;
            v109 = *(__m128i **)(*(_QWORD *)v156 + 32LL);
            v152 = *(_QWORD *)(*(_QWORD *)v156 + 40LL);
            v150 = v109;
            v156[0] = sub_966380(a1, v81, v109);
            v110 = sub_966380(a1, v81, (_DWORD *)v152);
            v111 = *(_QWORD *)(a1 + 16);
            LODWORD(v152) = v110;
            sub_9936C0(v111, (unsigned int)v156[0] >> 1);
            sub_9936C0(*(_QWORD *)(a1 + 16), (unsigned int)v152 >> 1);
            v112 = *(_QWORD *)(a1 + 16);
            v162 = 2;
            sub_993680(v112, v156[0] ^ 1, &v162, 0);
            v113 = *(_QWORD *)(a1 + 16);
            v163 = 2;
            sub_993680(v113, v152 ^ 1, &v163, 0);
            if ( v150->m128i_i16[2] )
              break;
          }
        }
        *(_QWORD *)v156 = *(_QWORD *)(a1 + 16);
        v101 = sub_B645B0(*(_QWORD *)v156, v151.m128i_i64[0]);
        sub_8F18B0(*(__int64 *)v156, v101 >> 1);
        sub_AEDAF0(v151.m128i_i64[0], *(__int64 *)v157);
        sub_AEDAF0(v155.m128i_i64[0], *(__int64 *)v157);
        sub_AEDAF0(v154.m128i_i64[0], *(__int64 *)v157);
      }
      v82 = v81->m128i_i32[2]-- == 1;
      if ( v82 )
        sub_15D7BC0(*(_QWORD *)v157, v81);
    }
    else
    {
      if ( v70 )
      {
LABEL_59:
        sub_AEDAF0(v66, *(__int64 *)v157);
        goto LABEL_41;
      }
      sub_8F18B0(v69, v144);
    }
    LOBYTE(v134) = v49;
    goto LABEL_59;
  }
  v159 = v11;
  *(_QWORD *)v156 = &v166;
  v13 = v11;
  LOBYTE(v134) = 0;
  while ( 1 )
  {
    v16 = *v13;
    if ( *(unsigned int ***)(v8 + 8648) == v16 )
      v14 = dword_1C7ED10;
    else
      v14 = 2 * *(_DWORD *)(*(_QWORD *)(v8 + 8832) + 4LL * **v16);
    v15 = *(_QWORD *)(v8 + 8848);
    v169[0] = v14;
    if ( *(_BYTE *)(v15 + v14) == 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v8 + 8840) + 8LL * (v14 >> 1));
      if ( !(unsigned int)sub_8E7030(v8)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 7488) + 56LL))(
             *(_QWORD *)(v8 + 7488),
             v17) )
      {
        v155 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL)
                                                           + 8LL * ((unsigned int)v169[0] >> 1))
                                               + 32LL));
        v166 = v155;
        v20 = (unsigned int *)sub_15DC610(
                                v157[0],
                                v130[0],
                                2,
                                v156[0],
                                v18,
                                v19,
                                v120,
                                v125,
                                v130[0],
                                (int)v134,
                                (int)v138,
                                (char)v142,
                                v151.m128i_i32[0],
                                v151.m128i_i32[2],
                                v152,
                                *(void **)v153);
        v158 = v20;
        if ( v20 )
          ++v20[2];
        v21 = v20;
        v22 = sub_AEE2E0(a1, v20);
        if ( (unsigned int)sub_8E81B0(*(_QWORD **)(a1 + 16), v22) == 1 )
        {
          v102 = sub_966D70(a1, (unsigned int *)v155.m128i_i64[0]);
          v103 = sub_B39350(
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v102) + 8LL),
                   *(unsigned int *)(a1 + 8));
          v104 = sub_966D70(a1, (unsigned int *)v155.m128i_i64[1]);
          v105 = sub_B39350(
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v104) + 8LL),
                   *(unsigned int *)(a1 + 8));
          sub_AFBF00(v138, v103);
          sub_AFBF00(v138, v105);
          *(_QWORD *)v171 = 0;
          v106 = sub_AF1F90((__int64)v138, v103, v105, 0, v171);
          sub_AFBE30(v138, v106);
LABEL_85:
          sub_AEDAF0((__int64)v158, *(__int64 *)v157);
          goto LABEL_9;
        }
        v23 = sub_B645B0(*(_QWORD *)(a1 + 16), v21);
        v24 = *(_QWORD *)(a1 + 16);
        v154.m128i_i32[0] = v23;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v24 + 7488) + 48LL))(
          *(_QWORD *)(v24 + 7488),
          *(_QWORD *)(*(_QWORD *)(v24 + 8840) + 8LL * (v23 >> 1)));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 7488) + 64LL))(*(_QWORD *)(v24 + 7488));
        v25 = *(_DWORD *)(a1 + 8);
        v151.m128i_i64[0] = *(_QWORD *)(a1 + 16);
        sub_B727F0(v171, v151.m128i_i64[0], 1);
        v173 = v25;
        v174 = 0;
        *(_QWORD *)v171 = &off_1C57888;
        v175 = v154.m128i_i32[0];
        sub_B72CF0(v171, v151.m128i_i64[0]);
        v26 = sub_180C100(v151.m128i_i64[0] + 8400, 48);
        v152 = v26;
        v155.m128i_i8[0] = *(_BYTE *)(v26 + 8);
        *(_BYTE *)(v26 + 8) = v171[2] & 3 | v155.m128i_i8[0] & 0xFC;
        *(_DWORD *)(v26 + 12) = v171[3];
        *(_QWORD *)(v26 + 16) = v172;
        v142 = qword_1C6F870;
        *(_QWORD *)v26 = qword_1C6F870;
        v27 = v173;
        *(_QWORD *)(v26 + 32) = 0;
        *(_DWORD *)(v26 + 24) = v27;
        if ( v174 )
        {
          v28 = *(_DWORD *)(v174 - 4);
          v155.m128i_i32[0] = *(_DWORD *)(v174 - 8);
          v29 = (_QWORD *)sub_186B270(16LL * v155.m128i_u32[0] + 8);
          v30 = v29 + 1;
          v134 = v29 + 1;
          *v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v155.m128i_u32[0]), _mm_cvtsi32_si128(v28)).m128i_u64[0];
          v31 = v152;
          *(_QWORD *)(v152 + 32) = v30;
          v32 = v174;
          if ( !v174 )
          {
            *(_QWORD *)v31 = &off_1C57888;
            *(_DWORD *)(v31 + 40) = v175;
            goto LABEL_23;
          }
          v155.m128i_i64[0] = v174 + 16LL * *(unsigned int *)(v174 - 4);
          if ( v174 == v155.m128i_i64[0] )
          {
            v119 = v152;
            *(_QWORD *)v152 = &off_1C57888;
            *(_DWORD *)(v119 + 40) = v175;
            goto LABEL_23;
          }
          do
          {
            sub_15D0E50(v30, v32);
            v32 += 16;
            v30 += 2;
          }
          while ( v155.m128i_i64[0] != v32 );
          v33 = v152;
          v34 = *(_QWORD **)(v152 + 32);
          *(_QWORD *)v152 = &off_1C57888;
          v134 = v34;
          *(_DWORD *)(v33 + 40) = v175;
          if ( v34 )
          {
LABEL_23:
            if ( *((_DWORD *)v134 - 1) )
            {
              v35 = *(_QWORD **)(v151.m128i_i64[0] + 8600);
              if ( v35 )
              {
                v36 = *((_DWORD *)v35 - 1);
                if ( v36 == *((_DWORD *)v35 - 2) )
                {
                  v114 = (3 * v36 + 1) >> 1;
                  v115 = 8 * v114 + 8;
                  if ( 8 * v36 + 8 >= v115 || v36 >= v114 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_140FB4((__int64 *)v170, "Overflow encountered when expanding vector", v3);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v170);
                    sub_233E40((__int64)v170);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v116 = (unsigned int *)sub_186B300(v35 - 1, v115);
                  v117 = v116[1];
                  v35 = v116 + 2;
                  *(_QWORD *)(v151.m128i_i64[0] + 8600) = v116 + 2;
                  *v116 = v114;
                  LODWORD(v116) = v117;
                  v39 = &v35[v117];
                  v38 = (_DWORD)v116 + 1;
                }
                else
                {
                  v37 = v36;
                  v38 = v36 + 1;
                  v39 = &v35[v37];
                }
              }
              else
              {
                v118 = (_QWORD *)sub_186B270(0x18u);
                *v118 = 2;
                v35 = v118 + 1;
                *(_QWORD *)(v151.m128i_i64[0] + 8600) = v118 + 1;
                v39 = v118 + 1;
                v38 = 1;
              }
              *v39 = v152;
              *((_DWORD *)v35 - 1) = v38;
            }
          }
        }
        else
        {
          *(_QWORD *)v26 = &off_1C57888;
          *(_DWORD *)(v26 + 40) = v175;
        }
        v40 = v174;
        *(_QWORD *)v171 = qword_1C6F870;
        if ( v174 )
        {
          v41 = *(unsigned int *)(v174 - 4);
          if ( (_DWORD)v41 )
          {
            v42 = v174 + 16 * v41;
            do
            {
              v43 = v40;
              v40 += 16;
              sub_15D0DF0(v43);
            }
            while ( v42 != v40 );
            v40 = v174;
          }
          sub_186B220((void *)(v40 - 8));
        }
        v44 = *(_QWORD *)(a1 + 16);
        v45 = *(_QWORD *)(v44 + 8848);
        v161 = v152 | 3;
        v46 = *(_BYTE *)(v45 + v154.m128i_u32[0]);
        if ( v46 == -1 )
        {
          sub_8E8670(v44, (__int64 *)&v161, v154.m128i_i32[0] ^ 1);
        }
        else if ( !v46 )
        {
          sub_8F28B0(v44, v154.m128i_u32[0], v152 | 3, 0);
        }
        LOBYTE(v134) = 1;
        goto LABEL_85;
      }
    }
LABEL_9:
    v13 = ++v159;
    if ( v12 == v159 )
      break;
    v8 = *(_QWORD *)(a1 + 16);
  }
  v47 = *(_QWORD *)(a2 + 40);
  if ( v47 )
  {
    LODWORD(v158) = *(_DWORD *)(v47 - 4);
    if ( (_DWORD)v158 )
      goto LABEL_40;
  }
LABEL_60:
  if ( (_BYTE)v134 )
    v71 = -1;
  else
LABEL_61:
    v71 = sub_AF25D0(a1, a2);
  sub_AFACA0(v138);
  return v71;
}

