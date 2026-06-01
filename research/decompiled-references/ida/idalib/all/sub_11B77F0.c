__int64 __fastcall sub_11B77F0(__int64 a1, __int64 **a2, _DWORD *a3, void **a4, __int64 a5, __int64 a6, __int64 a7)
{
  void **v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  _DWORD *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __m128 *v19; // rbp
  __int64 v20; // r9
  _DWORD *v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int32 v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  void *v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *v31; // rbp
  _QWORD *v32; // r13
  _QWORD *v33; // rax
  __int64 v34; // rsi
  int v35; // eax
  _QWORD *v36; // rax
  __int64 v37; // rbx
  int v38; // r14d
  void *v39; // r15
  unsigned int v40; // edx
  int *v41; // rsi
  void *v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // r12
  __int64 v45; // rdx
  void *v46; // rax
  __int64 v47; // rax
  int v48; // edx
  const char **v49; // r12
  const char *v50; // rdx
  size_t v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  const char **v58; // r12
  const char *v59; // rdx
  size_t v60; // rax
  unsigned __int64 v61; // rax
  __m128i *v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  _BYTE *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  void *v80; // rax
  size_t v81; // rax
  __int32 v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rax
  const char *v85; // r15
  char *v86; // r14
  __int64 v87; // rax
  int v88; // r15d
  void *v89; // r14
  unsigned int v90; // edx
  int *v91; // rsi
  void *v92; // rax
  int v93; // r15d
  void *v94; // r14
  unsigned int v95; // edx
  int *v96; // rsi
  void *v97; // rax
  __int64 v98; // rax
  int v99; // r15d
  void *v100; // r14
  unsigned int v101; // edx
  int *v102; // rsi
  void *v103; // rax
  int i; // ecx
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  char *v110; // rsi
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _BYTE *v114; // rax
  __int64 v115; // rax
  __int64 *v116; // rbp
  __int64 *v117; // rbx
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rbx
  const char **v121; // rax
  size_t v122; // rsi
  const char *v123; // rbp
  __int64 v124; // rcx
  __int64 v125; // rbp
  int v126; // esi
  __int64 v127; // rbx
  int j; // ecx
  int v130; // esi
  int v131; // esi
  __int64 v132; // rbx
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // r13
  __int64 v136; // rax
  __int64 v137; // rbp
  __int64 (__fastcall *v138)(__int64, void **); // r13
  void (__fastcall *v139)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD); // r12
  size_t v140; // rax
  char v141; // bp
  __int64 v142; // r13
  __int64 v143; // rax
  __int64 v144; // r13
  __int64 v145; // rax
  int v146; // eax
  int v147; // edx
  unsigned __int64 v148; // rax
  int v149; // ecx
  __int64 v150; // rax
  int v151; // ecx
  __int64 *v152; // rbp
  __int64 v153; // rbx
  __int64 v154; // rsi
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rax
  size_t v161; // rax
  char v162; // al
  __int64 v163; // rax
  __int64 v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 v169; // rax
  size_t v170; // rax
  char v171; // al
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned __int64 v174; // rax
  __int64 v175; // [rsp-8h] [rbp-3D0h]
  __int64 v176; // [rsp+0h] [rbp-3C8h]
  __int64 v177; // [rsp+0h] [rbp-3C8h]
  __int64 v178; // [rsp+0h] [rbp-3C8h]
  __int64 v179; // [rsp+0h] [rbp-3C8h]
  __int64 v180; // [rsp+0h] [rbp-3C8h]
  __int64 m; // [rsp+8h] [rbp-3C0h]
  __int64 k; // [rsp+8h] [rbp-3C0h]
  void *v183; // [rsp+10h] [rbp-3B8h]
  __m128i v184; // [rsp+10h] [rbp-3B8h]
  __m128i v185; // [rsp+10h] [rbp-3B8h]
  __int64 (__fastcall *v186)(__int64, void **); // [rsp+10h] [rbp-3B8h]
  char v187; // [rsp+10h] [rbp-3B8h]
  __m128i v188; // [rsp+10h] [rbp-3B8h]
  __m128i v189; // [rsp+10h] [rbp-3B8h]
  __m128i v190; // [rsp+10h] [rbp-3B8h]
  __m128i v191; // [rsp+10h] [rbp-3B8h]
  __int64 (__fastcall *v192)(__int64, void **); // [rsp+10h] [rbp-3B8h]
  char v193; // [rsp+10h] [rbp-3B8h]
  __m128i v194; // [rsp+10h] [rbp-3B8h]
  __m128i v195; // [rsp+10h] [rbp-3B8h]
  void (__fastcall *v196)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD); // [rsp+18h] [rbp-3B0h]
  void (__fastcall *v197)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD); // [rsp+18h] [rbp-3B0h]
  unsigned __int64 v198; // [rsp+20h] [rbp-3A8h]
  const char **v199; // [rsp+20h] [rbp-3A8h]
  __int64 v200; // [rsp+20h] [rbp-3A8h]
  __int64 v201; // [rsp+20h] [rbp-3A8h]
  __int64 v202; // [rsp+28h] [rbp-3A0h]
  __int64 v203; // [rsp+30h] [rbp-398h]
  unsigned __int64 v204; // [rsp+30h] [rbp-398h]
  const char *v205; // [rsp+30h] [rbp-398h]
  __int64 v206; // [rsp+30h] [rbp-398h]
  const char *v207; // [rsp+38h] [rbp-390h]
  __int64 v208; // [rsp+38h] [rbp-390h]
  __int64 v209; // [rsp+38h] [rbp-390h]
  __int64 v210; // [rsp+38h] [rbp-390h]
  __int64 v211; // [rsp+60h] [rbp-368h]
  unsigned __int32 v212; // [rsp+6Ch] [rbp-35Ch]
  __int64 v214; // [rsp+78h] [rbp-350h]
  unsigned __int32 *v215; // [rsp+80h] [rbp-348h]
  __int64 v217; // [rsp+90h] [rbp-338h]
  __int64 v220; // [rsp+B0h] [rbp-318h] BYREF
  int v221; // [rsp+B8h] [rbp-310h]
  int v222; // [rsp+BCh] [rbp-30Ch]
  unsigned int v223; // [rsp+C0h] [rbp-308h]
  __int64 v224; // [rsp+D0h] [rbp-2F8h] BYREF
  int v225; // [rsp+D8h] [rbp-2F0h]
  int v226; // [rsp+DCh] [rbp-2ECh]
  unsigned int v227; // [rsp+E0h] [rbp-2E8h]
  void *v228[2]; // [rsp+F0h] [rbp-2D8h] BYREF
  _BYTE v229[16]; // [rsp+100h] [rbp-2C8h] BYREF
  void *v230[2]; // [rsp+110h] [rbp-2B8h] BYREF
  _QWORD v231[2]; // [rsp+120h] [rbp-2A8h] BYREF
  __m128i v232; // [rsp+130h] [rbp-298h] BYREF
  __m128i v233; // [rsp+140h] [rbp-288h] BYREF
  __m128i v234; // [rsp+150h] [rbp-278h] BYREF
  _BYTE v235[16]; // [rsp+160h] [rbp-268h] BYREF
  __int16 v236; // [rsp+170h] [rbp-258h]
  __m128i v237; // [rsp+180h] [rbp-248h] BYREF
  _BYTE v238[16]; // [rsp+190h] [rbp-238h] BYREF
  __int16 v239; // [rsp+1A0h] [rbp-228h]
  void *v240[2]; // [rsp+1B0h] [rbp-218h] BYREF
  __int64 v241; // [rsp+1C0h] [rbp-208h] BYREF
  void *v242; // [rsp+1C8h] [rbp-200h]
  __int16 v243; // [rsp+1D0h] [rbp-1F8h]
  void *v244; // [rsp+1E0h] [rbp-1E8h] BYREF
  __int64 v245; // [rsp+1E8h] [rbp-1E0h]
  _BYTE v246[128]; // [rsp+1F0h] [rbp-1D8h] BYREF
  __m128 v247; // [rsp+270h] [rbp-158h] BYREF
  __m128i v248; // [rsp+280h] [rbp-148h] BYREF
  __int32 v249; // [rsp+290h] [rbp-138h]
  __int64 v250; // [rsp+294h] [rbp-134h]
  __int32 v251; // [rsp+29Ch] [rbp-12Ch]
  __int64 v252; // [rsp+2A0h] [rbp-128h]
  void *ptr[2]; // [rsp+300h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+310h] [rbp-B8h] BYREF
  __m128i v255; // [rsp+320h] [rbp-A8h]
  __m128i v256; // [rsp+330h] [rbp-98h]
  __m128i v257; // [rsp+340h] [rbp-88h]
  __m128i v258; // [rsp+350h] [rbp-78h]
  __m128i v259; // [rsp+360h] [rbp-68h]
  __int64 v260; // [rsp+370h] [rbp-58h]
  _BYTE v261[80]; // [rsp+378h] [rbp-50h] BYREF

  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23A9A80);
  v260 = 0x38E00000389LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9A90);
  v255 = _mm_load_si128((const __m128i *)&xmmword_23A9AA0);
  v256 = _mm_load_si128((const __m128i *)&xmmword_23A9AB0);
  v257 = _mm_load_si128((const __m128i *)&xmmword_23A9AC0);
  v258 = _mm_load_si128((const __m128i *)&xmmword_23A9AD0);
  v259 = _mm_load_si128((const __m128i *)&xmmword_23A9AE0);
  sub_119E9D0((__int64)&v220, 32, (__int64)a3, (__int64)a4, a5, a6);
  v8 = ptr;
  do
  {
    while ( (unsigned __int8)sub_11A15A0(&v220, (int *)v8, &v244) )
    {
      v8 = (void **)((char *)v8 + 4);
      sub_11B75C0(&v247, (int *)v244, (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
      if ( v8 == (void **)v261 )
        goto LABEL_9;
    }
    v14 = v244;
    v15 = v221 + 1;
    v16 = 2 * v223;
    v17 = (unsigned int)(4 * (v221 + 1));
    v247.m128_u64[0] = (unsigned __int64)v244;
    if ( (unsigned int)v17 >= 3 * v223 )
    {
      v130 = 2 * v223;
    }
    else
    {
      v16 = v223 - v222 - v15;
      if ( (unsigned int)v16 > v223 >> 3 )
        goto LABEL_6;
      v130 = v223;
    }
    sub_11B7620((__int64)&v220, v130, v223, v16, v17, v13);
    sub_11A15A0(&v220, (int *)v8, &v247);
    v14 = (_DWORD *)v247.m128_u64[0];
    v15 = v221 + 1;
LABEL_6:
    v221 = v15;
    if ( *v14 != -1 )
      --v222;
    v18 = *(_DWORD *)v8;
    v8 = (void **)((char *)v8 + 4);
    *v14 = v18;
    v244 = v14;
    sub_11B75C0(&v247, v14, (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
  }
  while ( v8 != (void **)v261 );
LABEL_9:
  v247.m128_u64[0] = 0xDE4000009A1LL;
  sub_119E9D0((__int64)&v224, 2, v9, v10, v11, v12);
  v19 = &v247;
  do
  {
    while ( (unsigned __int8)sub_11A15A0(&v224, (int *)v19, &v244) )
    {
      v19 = (__m128 *)((char *)v19 + 4);
      sub_11B75C0((__m128 *)ptr, (int *)v244, (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
      if ( v19 == (__m128 *)&v247.m128_u16[4] )
        goto LABEL_17;
    }
    v21 = v244;
    v22 = v225 + 1;
    v23 = 2 * v227;
    v24 = (unsigned int)(4 * (v225 + 1));
    ptr[0] = v244;
    if ( (unsigned int)v24 >= 3 * v227 )
    {
      v131 = 2 * v227;
    }
    else
    {
      v23 = v227 - v226 - v22;
      if ( (unsigned int)v23 > v227 >> 3 )
        goto LABEL_14;
      v131 = v227;
    }
    sub_11B7620((__int64)&v224, v131, v227, v23, v24, v20);
    sub_11A15A0(&v224, (int *)v19, ptr);
    v21 = ptr[0];
    v22 = v225 + 1;
LABEL_14:
    v225 = v22;
    if ( *v21 != -1 )
      --v226;
    v25 = v19->m128_i32[0];
    v19 = (__m128 *)((char *)v19 + 4);
    *v21 = v25;
    v244 = v21;
    sub_11B75C0((__m128 *)ptr, v21, (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
  }
  while ( v19 != (__m128 *)&v247.m128_u16[4] );
LABEL_17:
  v176 = a6;
  v244 = v246;
  v245 = 0x1000000000LL;
  v217 = (__int64)(a2 + 3);
  v215 = (unsigned __int32 *)&unk_25FFBD0;
  while ( 2 )
  {
    v212 = *v215;
    LODWORD(ptr[0]) = *v215;
    v26 = sub_10E0830(v217, (int *)ptr);
    v214 = v27;
    v211 = v26;
    if ( v26 == v27 )
      goto LABEL_71;
    while ( 2 )
    {
      while ( 2 )
      {
        v28 = *(_QWORD *)(v211 + 40);
        v247.m128_u64[1] = 0x1000000000LL;
        ptr[1] = (void *)0x1000000000LL;
        v247.m128_u64[0] = (unsigned __int64)&v248;
        ptr[0] = &si128;
        v29 = (void *)j__strlen(&byte_22F0C30);
        v30 = sub_10D5E20((size_t)a2, (_QWORD *)v28, (void *)&byte_22F0C30, v29, v212);
        v31 = *(_QWORD **)(v30 + 8);
        v198 = v30;
        v32 = &v31[*(unsigned int *)(v30 + 16)];
        if ( v32 == v31 )
          goto LABEL_34;
        v33 = v31 + 1;
        if ( !*v31 )
        {
          do
          {
            v31 = v33;
            if ( v32 == v33 )
              goto LABEL_34;
            ++v33;
          }
          while ( !*(v33 - 1) );
        }
        v203 = v28;
        while ( 2 )
        {
          v37 = *v31;
          if ( (unsigned __int8)sub_21B9810(*v31, 3556) )
          {
            v34 = **(_QWORD **)(v37 + 48);
            v35 = (int)ptr[1];
            if ( HIDWORD(ptr[1]) <= LODWORD(ptr[1]) )
            {
              sub_10DC5D0((__int64)ptr, v34);
            }
            else
            {
              *((_QWORD *)ptr[0] + LODWORD(ptr[1])) = v34;
              LODWORD(ptr[1]) = v35 + 1;
            }
            goto LABEL_24;
          }
          v38 = *(_DWORD *)(*(_QWORD *)v37 + 40LL);
          sub_119EA90((__m128 *)v240, (int *)(v220 + 4LL * v223), (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
          v39 = v240[0];
          if ( !v223 )
            goto LABEL_124;
          v40 = (v223 - 1) & (37 * v38);
          v41 = (int *)(v220 + 4LL * v40);
          if ( v38 == *v41 )
            goto LABEL_30;
          if ( *v41 != -1 )
          {
            for ( i = 1; ; ++i )
            {
              v40 = (v223 - 1) & (i + v40);
              v41 = (int *)(v220 + 4LL * v40);
              if ( v38 == *v41 )
                break;
              if ( *v41 == -1 )
                goto LABEL_124;
            }
LABEL_30:
            sub_119EA90((__m128 *)v240, v41, (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
            v42 = v240[0];
          }
          else
          {
LABEL_124:
            sub_119EA90((__m128 *)v240, (int *)(v220 + 4LL * v223), (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
            v42 = v240[0];
          }
          if ( v42 == v39 )
          {
            if ( !sub_21BB380(*(_QWORD *)(v37 + 8), *(unsigned __int16 *)(*(_QWORD *)v37 + 56LL)) )
              goto LABEL_118;
            v88 = *(_DWORD *)(sub_21BB380(*(_QWORD *)(v37 + 8), *(unsigned __int16 *)(*(_QWORD *)v37 + 56LL)) + 40);
            sub_119EA90((__m128 *)v240, (int *)(v220 + 4LL * v223), (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
            v89 = v240[0];
            if ( v223 )
            {
              v90 = (v223 - 1) & (37 * v88);
              v91 = (int *)(v220 + 4LL * v90);
              if ( *v91 == v88 )
              {
LABEL_116:
                sub_119EA90((__m128 *)v240, v91, (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
                v92 = v240[0];
                goto LABEL_117;
              }
              if ( *v91 != -1 )
              {
                v149 = 1;
                do
                {
                  v90 = (v223 - 1) & (v149 + v90);
                  v91 = (int *)(v220 + 4LL * v90);
                  if ( v88 == *v91 )
                    goto LABEL_116;
                  ++v149;
                }
                while ( *v91 != -1 );
              }
            }
            sub_119EA90((__m128 *)v240, (int *)(v220 + 4LL * v223), (int *)(v220 + 4LL * v223), (__int64)&v220, 1);
            v92 = v240[0];
LABEL_117:
            if ( v92 != v89 )
              goto LABEL_32;
LABEL_118:
            v93 = *(_DWORD *)(*(_QWORD *)v37 + 40LL);
            sub_119EA90((__m128 *)v240, (int *)(v224 + 4LL * v227), (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
            v94 = v240[0];
            if ( v227 )
            {
              v95 = (v227 - 1) & (37 * v93);
              v96 = (int *)(v224 + 4LL * v95);
              if ( v93 == *v96 )
              {
LABEL_120:
                sub_119EA90((__m128 *)v240, v96, (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
                v97 = v240[0];
                goto LABEL_121;
              }
              if ( *v96 != -1 )
              {
                for ( j = 1; ; ++j )
                {
                  v95 = (v227 - 1) & (j + v95);
                  v96 = (int *)(v224 + 4LL * v95);
                  if ( v93 == *v96 )
                    break;
                  if ( *v96 == -1 )
                    goto LABEL_144;
                }
                goto LABEL_120;
              }
            }
LABEL_144:
            sub_119EA90((__m128 *)v240, (int *)(v224 + 4LL * v227), (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
            v97 = v240[0];
LABEL_121:
            if ( v94 != v97 )
            {
LABEL_122:
              sub_21B5A40(v37, v176, ptr);
              goto LABEL_24;
            }
            if ( !sub_21BB380(*(_QWORD *)(v37 + 8), *(unsigned __int16 *)(*(_QWORD *)v37 + 56LL)) )
            {
LABEL_24:
              v36 = v31 + 1;
              if ( v31 + 1 == v32 )
                goto LABEL_33;
              goto LABEL_25;
            }
            v99 = *(_DWORD *)(sub_21BB380(*(_QWORD *)(v37 + 8), *(unsigned __int16 *)(*(_QWORD *)v37 + 56LL)) + 40);
            sub_119EA90((__m128 *)v240, (int *)(v224 + 4LL * v227), (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
            v100 = v240[0];
            if ( v227 )
            {
              v101 = (v227 - 1) & (37 * v99);
              v102 = (int *)(v224 + 4LL * v101);
              if ( *v102 == v99 )
              {
LABEL_140:
                sub_119EA90((__m128 *)v240, v102, (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
                v103 = v240[0];
                goto LABEL_141;
              }
              if ( *v102 != -1 )
              {
                v151 = 1;
                do
                {
                  v101 = (v227 - 1) & (v151 + v101);
                  v102 = (int *)(v224 + 4LL * v101);
                  if ( v99 == *v102 )
                    goto LABEL_140;
                  ++v151;
                }
                while ( *v102 != -1 );
              }
            }
            sub_119EA90((__m128 *)v240, (int *)(v224 + 4LL * v227), (int *)(v224 + 4LL * v227), (__int64)&v224, 1);
            v103 = v240[0];
LABEL_141:
            if ( v100 != v103 )
              goto LABEL_122;
            goto LABEL_24;
          }
LABEL_32:
          sub_21B5A40(v37, v176, &v247);
          v36 = v31 + 1;
          if ( v31 + 1 == v32 )
            goto LABEL_33;
LABEL_25:
          if ( v31[1] )
          {
LABEL_26:
            v31 = v36;
            continue;
          }
          break;
        }
        while ( v32 != ++v36 )
        {
          if ( *v36 )
            goto LABEL_26;
        }
LABEL_33:
        v28 = v203;
LABEL_34:
        sub_21B7150(&v237, v198, 3079);
        v43 = v237.m128i_i64[1];
        v44 = (__int64 *)v237.m128i_i64[0];
        if ( v237.m128i_i64[0] != v237.m128i_i64[1] )
        {
          do
          {
            while ( 1 )
            {
              v45 = *v44;
              v46 = (void *)v44[1];
              v240[0] = "--should-extract=";
              v241 = v45;
              v243 = 1283;
              v242 = v46;
              v47 = sub_10DA6C0(v176, (__int64)v240);
              v48 = v245;
              if ( HIDWORD(v245) <= (unsigned int)v245 )
                break;
              v44 += 4;
              *((_QWORD *)v244 + (unsigned int)v245) = v47;
              LODWORD(v245) = v48 + 1;
              if ( (__int64 *)v43 == v44 )
                goto LABEL_39;
            }
            v44 += 4;
            sub_10DC5D0((__int64)&v244, v47);
          }
          while ( (__int64 *)v43 != v44 );
        }
LABEL_39:
        sub_9B4A30((void ***)&v237);
        if ( v212 == 4 && !sub_10DCD30(v176, 0xBCAu) && ((*(_DWORD *)(v28 + 48) - 25) & 0xFFFFFFEE) == 0 )
        {
          v105 = (int)ptr[1];
          if ( HIDWORD(ptr[1]) <= LODWORD(ptr[1]) )
          {
            sub_10DC5D0((__int64)ptr, (__int64)"-lompdevice");
          }
          else
          {
            *((_QWORD *)ptr[0] + LODWORD(ptr[1])) = "-lompdevice";
            LODWORD(ptr[1]) = v105 + 1;
          }
        }
        v49 = (const char **)v247.m128_u64[0];
        v204 = v247.m128_u64[0] + 8LL * v247.m128_u32[2];
        if ( v247.m128_u64[0] != v204 )
        {
          do
          {
            while ( 1 )
            {
              v50 = *v49;
              v51 = 0;
              if ( *v49 )
              {
                v207 = *v49;
                v51 = j__strlen(*v49);
                v50 = v207;
              }
              v237.m128i_i64[1] = v51;
              v239 = 261;
              v237.m128i_i64[0] = (__int64)v50;
              v228[0] = v229;
              sub_1189220(v228, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
              sub_E7ED70((__m128i *)v230, "--device-compiler=", v228);
              sub_10E1980(&v232, (__m128i *)v230, "=");
              v236 = 260;
              v234.m128i_i64[0] = (__int64)&v232;
              sub_A41580((__m128i *)v240, &v234, &v237, v52, v53, v54);
              v55 = sub_10DA6C0(v176, (__int64)v240);
              v56 = (unsigned int)v245;
              v57 = (unsigned int)v245 + 1LL;
              if ( v57 > HIDWORD(v245) )
              {
                v208 = v55;
                sub_2237220(&v244, v246, v57, 8);
                v56 = (unsigned int)v245;
                v55 = v208;
              }
              *((_QWORD *)v244 + v56) = v55;
              LODWORD(v245) = v245 + 1;
              if ( (__m128i *)v232.m128i_i64[0] != &v233 )
                operator delete((void *)v232.m128i_i64[0]);
              if ( v230[0] != v231 )
                operator delete(v230[0]);
              if ( v228[0] == v229 )
                break;
              operator delete(v228[0]);
              if ( (const char **)v204 == ++v49 )
                goto LABEL_51;
            }
            ++v49;
          }
          while ( (const char **)v204 != v49 );
        }
LABEL_51:
        v58 = (const char **)ptr[0];
        v199 = (const char **)((char *)ptr[0] + 8 * LODWORD(ptr[1]));
        if ( ptr[0] == v199 )
        {
LABEL_65:
          v69 = *((_DWORD *)*a2 + 11);
          if ( v69 == 1 )
            goto LABEL_129;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v59 = *v58;
              v60 = 0;
              if ( *v58 )
              {
                v205 = *v58;
                v60 = j__strlen(*v58);
                v59 = v205;
              }
              v237.m128i_i64[1] = v60;
              v239 = 261;
              v228[0] = v229;
              v237.m128i_i64[0] = (__int64)v59;
              sub_1189220(v228, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
              sub_E7ED70((__m128i *)v230, "--device-linker=", v228);
              v61 = j__strlen("=");
              if ( v61 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v230[1] )
                std::__throw_length_error("basic_string::append");
              v62 = (__m128i *)sub_9EE560(v230, "=", v61);
              v232.m128i_i64[0] = (__int64)&v233;
              if ( (__m128i *)v62->m128i_i64[0] == &v62[1] )
              {
                v233 = _mm_loadu_si128(v62 + 1);
              }
              else
              {
                v232.m128i_i64[0] = v62->m128i_i64[0];
                v233.m128i_i64[0] = v62[1].m128i_i64[0];
              }
              v232.m128i_i64[1] = v62->m128i_i64[1];
              v65 = v232.m128i_i64[1];
              v62->m128i_i64[0] = (__int64)v62[1].m128i_i64;
              v62->m128i_i64[1] = 0;
              v62[1].m128i_i8[0] = 0;
              v236 = 260;
              v234.m128i_i64[0] = (__int64)&v232;
              sub_A41580((__m128i *)v240, &v234, &v237, v65, v63, v64);
              v66 = sub_10DA6C0(v176, (__int64)v240);
              v67 = (unsigned int)v245;
              v68 = (unsigned int)v245 + 1LL;
              if ( v68 > HIDWORD(v245) )
              {
                v206 = v66;
                sub_2237220(&v244, v246, v68, 8);
                v67 = (unsigned int)v245;
                v66 = v206;
              }
              *((_QWORD *)v244 + v67) = v66;
              LODWORD(v245) = v245 + 1;
              if ( (__m128i *)v232.m128i_i64[0] != &v233 )
                operator delete((void *)v232.m128i_i64[0]);
              if ( v230[0] != v231 )
                operator delete(v230[0]);
              if ( v228[0] == v229 )
                break;
              operator delete(v228[0]);
              if ( v199 == ++v58 )
                goto LABEL_65;
            }
            ++v58;
          }
          while ( v199 != v58 );
          v69 = *((_DWORD *)*a2 + 11);
          if ( v69 == 1 )
          {
LABEL_129:
            v232.m128i_i64[0] = (__int64)&v233;
            sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
            sub_E7ED70(&v234, "--device-compiler=", &v232);
            sub_10E1980(&v237, &v234, "=-flto=full");
            v240[0] = &v237;
            v243 = 260;
            goto LABEL_130;
          }
        }
        if ( v69 == 2 )
        {
          v232.m128i_i64[0] = (__int64)&v233;
          sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
          sub_E7ED70(&v234, "--device-compiler=", &v232);
          sub_10E1980(&v237, &v234, "=-flto=thin");
          v243 = 260;
          v240[0] = &v237;
          v106 = sub_10DA6C0(v176, (__int64)v240);
          sub_10DC5D0((__int64)&v244, v106);
          if ( (_BYTE *)v237.m128i_i64[0] != v238 )
            operator delete((void *)v237.m128i_i64[0]);
          if ( (_BYTE *)v234.m128i_i64[0] != v235 )
            operator delete((void *)v234.m128i_i64[0]);
          if ( (__m128i *)v232.m128i_i64[0] != &v233 )
            operator delete((void *)v232.m128i_i64[0]);
          if ( (unsigned int)(*(_DWORD *)(v28 + 48) - 25) <= 1 )
          {
            v232.m128i_i64[0] = (__int64)&v233;
            sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
            sub_E7ED70(&v234, "--device-linker=", &v232);
            sub_10E1980(&v237, &v234, "=-plugin-opt=-force-import-all");
            v243 = 260;
            v240[0] = &v237;
            v107 = sub_10DA6C0(v176, (__int64)v240);
            sub_10DC5D0((__int64)&v244, v107);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (__m128i *)v232.m128i_i64[0] != &v233 )
              operator delete((void *)v232.m128i_i64[0]);
            v232.m128i_i64[0] = (__int64)&v233;
            sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
            sub_E7ED70(&v234, "--device-linker=", &v232);
            sub_10E1980(&v237, &v234, "=-plugin-opt=-avail-extern-to-local");
            v243 = 260;
            v240[0] = &v237;
            v108 = sub_10DA6C0(v176, (__int64)v240);
            sub_10DC5D0((__int64)&v244, v108);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (__m128i *)v232.m128i_i64[0] != &v233 )
              operator delete((void *)v232.m128i_i64[0]);
            v232.m128i_i64[0] = (__int64)&v233;
            sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
            sub_E7ED70(&v234, "--device-linker=", &v232);
            sub_10E1980(&v237, &v234, "=-plugin-opt=-avail-extern-gv-in-addrspace-to-local=3");
            v243 = 260;
            v240[0] = &v237;
            v109 = sub_10DA6C0(v176, (__int64)v240);
            sub_10DC5D0((__int64)&v244, v109);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (__m128i *)v232.m128i_i64[0] != &v233 )
              operator delete((void *)v232.m128i_i64[0]);
            if ( v212 == 4 )
            {
              v232.m128i_i64[0] = (__int64)&v233;
              sub_1189220(&v232, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
              sub_E7ED70(&v234, "--device-linker=", &v232);
              sub_10E1980(&v237, &v234, "=-plugin-opt=-amdgpu-internalize-symbols");
              v240[0] = &v237;
              v243 = 260;
LABEL_130:
              v98 = sub_10DA6C0(v176, (__int64)v240);
              sub_10DC5D0((__int64)&v244, v98);
              if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                operator delete((void *)v237.m128i_i64[0]);
              if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                operator delete((void *)v234.m128i_i64[0]);
              if ( (__m128i *)v232.m128i_i64[0] != &v233 )
                operator delete((void *)v232.m128i_i64[0]);
            }
          }
        }
        if ( ptr[0] != &si128 )
          free(ptr[0]);
        if ( (__m128i *)v247.m128_u64[0] != &v248 )
        {
          free((void *)v247.m128_u64[0]);
          v211 = std::_Rb_tree_increment(v211);
          if ( v214 == v211 )
            goto LABEL_71;
          continue;
        }
        break;
      }
      v211 = std::_Rb_tree_increment(v211);
      if ( v211 != v214 )
        continue;
      break;
    }
LABEL_71:
    if ( &unk_25FFBE0 != (_UNKNOWN *)++v215 )
      continue;
    break;
  }
  v70 = v176;
  v71 = *(_QWORD *)(a1 + 24);
  v240[0] = &v241;
  sub_1189220(v240, *(_BYTE **)(v71 + 16), *(_QWORD *)(v71 + 16) + *(_QWORD *)(v71 + 24));
  sub_E7ED70((__m128i *)&v247, "--host-triple=", v240);
  v255.m128i_i16[0] = 260;
  ptr[0] = &v247;
  v72 = sub_10DA6C0(v176, (__int64)ptr);
  sub_10DC5D0((__int64)&v244, v72);
  if ( (__m128i *)v247.m128_u64[0] != &v248 )
    operator delete((void *)v247.m128_u64[0]);
  if ( v240[0] != &v241 )
    operator delete(v240[0]);
  if ( sub_10DCD30(v176, 0xD45u) )
    sub_10DC5D0((__int64)&v244, (__int64)"--wrapper-verbose");
  v73 = sub_10DCD30(v176, 0xF3u);
  if ( v73 )
  {
    v77 = **(_BYTE ***)(v73 + 48);
    LOWORD(v249) = 257;
    if ( *v77 )
    {
      v247.m128_u64[0] = (unsigned __int64)v77;
      LOBYTE(v249) = 3;
    }
    v243 = 259;
    v240[0] = "--cuda-path=";
    sub_A41580((__m128i *)ptr, (const __m128i *)v240, (const __m128i *)&v247, v74, v75, v76);
    v78 = sub_10DA6C0(v176, (__int64)ptr);
    sub_10DC5D0((__int64)&v244, v78);
  }
  (*(void (__fastcall **)(_QWORD, __int64 **, _DWORD *, void **, __int64, __int64, __int64))(**(_QWORD **)(a1 + 32)
                                                                                           + 72LL))(
    *(_QWORD *)(a1 + 32),
    a2,
    a3,
    a4,
    a5,
    v176,
    a7);
  v202 = (__int64)&a2[19][*((unsigned int *)a2 + 40) - 1];
  sub_10DC500((__int64)v240, v176, 0xDAEu);
  v80 = v240[0];
  *(__m128i *)v230 = _mm_load_si128((const __m128i *)v240);
  v231[0] = v241;
  if ( v240[0] != v242 )
  {
    v183 = v242;
    while ( 1 )
    {
      v84 = *(_QWORD *)(*(_QWORD *)v80 + 48LL);
      v85 = *(const char **)v84;
      v86 = *(char **)(v84 + 8);
      if ( !*(_QWORD *)v84 || (v81 = j__strlen(*(const char **)v84)) == 0 )
      {
        LOWORD(v249) = 257;
        if ( *v86 )
        {
          v247.m128_u64[0] = (unsigned __int64)v86;
          LOBYTE(v249) = 3;
        }
        v239 = 259;
        v237.m128i_i64[0] = (__int64)"--device-linker=";
        sub_A41580((__m128i *)ptr, &v237, (const __m128i *)&v247, v79, 259, 257);
        v87 = sub_10DA6C0(v176, (__int64)ptr);
        sub_10DC5D0((__int64)&v244, v87);
        goto LABEL_102;
      }
      if ( v85 == (const char *)-1LL )
      {
        v248.m128i_i8[0] = 0;
        v247.m128_u64[0] = (unsigned __int64)&v248;
        v247.m128_u64[1] = 0;
      }
      else
      {
        v247.m128_u64[0] = (unsigned __int64)&v248;
        sub_11892E0(&v247, (_BYTE *)v85 + 1, (__int64)&v85[v81]);
      }
      sub_22B9ED0(ptr, &v247);
      if ( (__m128i *)v247.m128_u64[0] != &v248 )
        operator delete((void *)v247.m128_u64[0]);
      if ( !v255.m128i_i32[2] || (v82 = v255.m128i_i32[3]) == 0 )
      {
        v110 = "nvptx-nvidia-cuda";
        switch ( v255.m128i_i32[0] )
        {
          case 0x29:
            goto LABEL_193;
          case 0x2A:
            v110 = "nvptx64-nvidia-cuda";
LABEL_193:
            sub_1189430(&v237, v110);
            sub_22B9ED0(&v247, &v237);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
LABEL_195:
            if ( ptr[0] != &si128 )
              operator delete(ptr[0]);
            goto LABEL_94;
          case 0x1A:
            sub_10DA8A0((__int64)&v247, "amdgcn-amd-amdhsa");
            goto LABEL_195;
        }
        v82 = v255.m128i_i32[3];
      }
      v247.m128_u64[0] = (unsigned __int64)&v248;
      if ( ptr[0] == &si128 )
      {
        v248 = _mm_load_si128(&si128);
      }
      else
      {
        v247.m128_u64[0] = (unsigned __int64)ptr[0];
        v248.m128i_i64[0] = si128.m128i_i64[0];
      }
      v249 = v255.m128i_i32[0];
      v250 = *(__int64 *)((char *)v255.m128i_i64 + 4);
      v247.m128_u64[1] = (unsigned __int64)ptr[1];
      v251 = v82;
      v252 = v256.m128i_i64[0];
LABEL_94:
      sub_C05100((__int64)&v232, "--device-linker=", (__int64)&v247);
      sub_10E1980(&v234, &v232, "=");
      sub_10E1980(&v237, &v234, v86);
      ptr[0] = &v237;
      v255.m128i_i16[0] = 260;
      v83 = sub_10DA6C0(v176, (__int64)ptr);
      sub_10DC5D0((__int64)&v244, v83);
      if ( (_BYTE *)v237.m128i_i64[0] != v238 )
        operator delete((void *)v237.m128i_i64[0]);
      if ( (_BYTE *)v234.m128i_i64[0] != v235 )
        operator delete((void *)v234.m128i_i64[0]);
      if ( (__m128i *)v232.m128i_i64[0] != &v233 )
        operator delete((void *)v232.m128i_i64[0]);
      if ( (__m128i *)v247.m128_u64[0] != &v248 )
        operator delete((void *)v247.m128_u64[0]);
LABEL_102:
      v230[0] = (char *)v230[0] + 8;
      sub_10DFFA0((__int64)v230);
      v80 = v230[0];
      if ( v230[0] == v183 )
      {
        v70 = v176;
        break;
      }
    }
  }
  sub_21B7CF0(v70, 3502);
  if ( (unsigned __int8)sub_21B7850(v70, 1557, 1263, 0) )
    sub_10DC5D0((__int64)&v244, (__int64)"--embed-bitcode");
  if ( sub_10DCD30(v70, 0xCA7u) || sub_10DCD30(v70, 0xCA8u) )
    sub_10DC5D0((__int64)&v244, (__int64)"--save-temps");
  if ( (unsigned __int8)sub_21B7850(v70, 3091, 3018, 1) && !sub_118FE10(v70, 0xBF0u, 0xCA4u, 0xBDDu, 0xBE4u, 3041) )
  {
    v232.m128i_i64[1] = v70;
    v232.m128i_i64[0] = (__int64)&v244;
    v233.m128i_i64[1] = (__int64)a2;
    v132 = *(_QWORD *)(a1 + 24);
    v233.m128i_i64[0] = a1;
    if ( ((*(_DWORD *)(v132 + 48) - 25) & 0xFFFFFFEE) == 0 )
    {
      sub_1131210((__int64)ptr, v132);
      if ( v255.m128i_i8[0] )
      {
        if ( ptr[0] != &si128 )
          operator delete(ptr[0]);
        v133 = v232.m128i_i64[1];
        v177 = v232.m128i_i64[0];
        v247.m128_u64[0] = (unsigned __int64)&v248;
        sub_1189220(&v247, *(_BYTE **)(v132 + 16), *(_QWORD *)(v132 + 16) + *(_QWORD *)(v132 + 24));
        sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
        sub_10E1980(&v237, (__m128i *)v240, "=");
        sub_10E1980(&v234, &v237, "-lc");
        v255.m128i_i16[0] = 260;
        ptr[0] = &v234;
        v134 = sub_10DA6C0(v133, (__int64)ptr);
        sub_10DC5D0(v177, v134);
        if ( (_BYTE *)v234.m128i_i64[0] != v235 )
          operator delete((void *)v234.m128i_i64[0]);
        if ( (_BYTE *)v237.m128i_i64[0] != v238 )
          operator delete((void *)v237.m128i_i64[0]);
        if ( v240[0] != &v241 )
          operator delete(v240[0]);
        if ( (__m128i *)v247.m128_u64[0] != &v248 )
          operator delete((void *)v247.m128_u64[0]);
        v135 = v232.m128i_i64[1];
        v178 = v232.m128i_i64[0];
        v247.m128_u64[0] = (unsigned __int64)&v248;
        sub_1189220(&v247, *(_BYTE **)(v132 + 16), *(_QWORD *)(v132 + 16) + *(_QWORD *)(v132 + 24));
        sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
        sub_10E1980(&v237, (__m128i *)v240, "=");
        sub_10E1980(&v234, &v237, "-lm");
        ptr[0] = &v234;
        v255.m128i_i16[0] = 260;
        v136 = sub_10DA6C0(v135, (__int64)ptr);
        sub_10DC5D0(v178, v136);
        if ( (_BYTE *)v234.m128i_i64[0] != v235 )
          operator delete((void *)v234.m128i_i64[0]);
        if ( (_BYTE *)v237.m128i_i64[0] != v238 )
          operator delete((void *)v237.m128i_i64[0]);
        if ( v240[0] != &v241 )
          operator delete(v240[0]);
        if ( (__m128i *)v247.m128_u64[0] != &v248 )
          operator delete((void *)v247.m128_u64[0]);
      }
      v137 = sub_112C5D0(*(_QWORD *)(v233.m128i_i64[0] + 24));
      v138 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v137 + 96LL);
      v139 = *(void (__fastcall **)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD))(*(_QWORD *)v132 + 304LL);
      v140 = j__strlen("builtins");
      v139(&v247, v132, v232.m128i_i64[1], "builtins", v140, 1, 0);
      v255.m128i_i16[0] = 260;
      ptr[0] = &v247;
      v141 = v138(v137, ptr);
      v111 = v175;
      if ( (__m128i *)v247.m128_u64[0] != &v248 )
        operator delete((void *)v247.m128_u64[0]);
      if ( v141 )
      {
        v142 = v232.m128i_i64[1];
        v179 = v232.m128i_i64[0];
        v247.m128_u64[0] = (unsigned __int64)&v248;
        sub_1189220(&v247, *(_BYTE **)(v132 + 16), *(_QWORD *)(v132 + 16) + *(_QWORD *)(v132 + 24));
        sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
        sub_10E1980(&v237, (__m128i *)v240, "=");
        sub_10E1980(&v234, &v237, "-lclang_rt.builtins");
        v255.m128i_i16[0] = 260;
        ptr[0] = &v234;
        v143 = sub_10DA6C0(v142, (__int64)ptr);
        sub_10DC5D0(v179, v143);
        if ( (_BYTE *)v234.m128i_i64[0] != v235 )
          operator delete((void *)v234.m128i_i64[0]);
        if ( (_BYTE *)v237.m128i_i64[0] != v238 )
          operator delete((void *)v237.m128i_i64[0]);
        if ( v240[0] != &v241 )
          operator delete(v240[0]);
        if ( (__m128i *)v247.m128_u64[0] != &v248 )
          operator delete((void *)v247.m128_u64[0]);
        if ( *(_DWORD *)(*(_QWORD *)v233.m128i_i64[1] + 16LL) == 4 )
        {
          v144 = v232.m128i_i64[1];
          v180 = v232.m128i_i64[0];
          v247.m128_u64[0] = (unsigned __int64)&v248;
          sub_1189220(&v247, *(_BYTE **)(v132 + 16), *(_QWORD *)(v132 + 16) + *(_QWORD *)(v132 + 24));
          sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
          sub_10E1980(&v237, (__m128i *)v240, "=");
          sub_10E1980(&v234, &v237, "-lflang_rt.runtime");
          ptr[0] = &v234;
          v255.m128i_i16[0] = 260;
          v145 = sub_10DA6C0(v144, (__int64)ptr);
          sub_10DC5D0(v180, v145);
          if ( (_BYTE *)v234.m128i_i64[0] != v235 )
            operator delete((void *)v234.m128i_i64[0]);
          if ( (_BYTE *)v237.m128i_i64[0] != v238 )
            operator delete((void *)v237.m128i_i64[0]);
          if ( v240[0] != &v241 )
            operator delete(v240[0]);
          if ( (__m128i *)v247.m128_u64[0] != &v248 )
            operator delete((void *)v247.m128_u64[0]);
        }
      }
    }
    v146 = a3[15];
    if ( (v146 & 2) != 0 )
    {
      v155 = sub_1192F50((__int64)a2);
    }
    else
    {
      v147 = a3[16];
      if ( v147 == 2 )
        goto LABEL_396;
      if ( (v146 & 8) != 0 )
      {
        v155 = sub_1193010((__int64)a2);
      }
      else
      {
        if ( v147 != 8 )
          goto LABEL_283;
LABEL_396:
        v155 = sub_10E0B00((__int64)a2);
      }
    }
    sub_1198340((__int64)&v232, *(_QWORD *)(v155 + 40));
    v146 = a3[15];
LABEL_283:
    if ( (v146 & 4) != 0 )
    {
      LODWORD(ptr[0]) = 4;
      v165 = sub_10E0830(v217, (int *)ptr);
      v201 = v166;
      for ( k = v165; k != v201; k = std::_Rb_tree_increment(k) )
      {
        v167 = *(_QWORD *)(k + 40);
        if ( ((*(_DWORD *)(v167 + 48) - 25) & 0xFFFFFFEE) == 0 )
        {
          sub_1131210((__int64)ptr, *(_QWORD *)(k + 40));
          if ( v255.m128i_i8[0] )
          {
            if ( ptr[0] != &si128 )
              operator delete(ptr[0]);
            v247.m128_u64[0] = (unsigned __int64)&v248;
            v190 = v232;
            sub_1189220(&v247, *(_BYTE **)(v167 + 16), *(_QWORD *)(v167 + 16) + *(_QWORD *)(v167 + 24));
            sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
            sub_10E1980(&v237, (__m128i *)v240, "=");
            sub_10E1980(&v234, &v237, "-lc");
            v255.m128i_i16[0] = 260;
            ptr[0] = &v234;
            v168 = sub_10DA6C0(v190.m128i_i64[1], (__int64)ptr);
            sub_10DC5D0(v190.m128i_i64[0], v168);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( v240[0] != &v241 )
              operator delete(v240[0]);
            if ( (__m128i *)v247.m128_u64[0] != &v248 )
              operator delete((void *)v247.m128_u64[0]);
            v247.m128_u64[0] = (unsigned __int64)&v248;
            v191 = v232;
            sub_1189220(&v247, *(_BYTE **)(v167 + 16), *(_QWORD *)(v167 + 16) + *(_QWORD *)(v167 + 24));
            sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
            sub_10E1980(&v237, (__m128i *)v240, "=");
            sub_10E1980(&v234, &v237, "-lm");
            v255.m128i_i16[0] = 260;
            ptr[0] = &v234;
            v169 = sub_10DA6C0(v191.m128i_i64[1], (__int64)ptr);
            sub_10DC5D0(v191.m128i_i64[0], v169);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( v240[0] != &v241 )
              operator delete(v240[0]);
            if ( (__m128i *)v247.m128_u64[0] != &v248 )
              operator delete((void *)v247.m128_u64[0]);
          }
          v210 = sub_112C5D0(*(_QWORD *)(v233.m128i_i64[0] + 24));
          v192 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v210 + 96LL);
          v197 = *(void (__fastcall **)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD))(*(_QWORD *)v167 + 304LL);
          v170 = j__strlen("builtins");
          v197(&v247, v167, v232.m128i_i64[1], "builtins", v170, 1, 0);
          v255.m128i_i16[0] = 260;
          ptr[0] = &v247;
          v171 = v192(v210, ptr);
          if ( (__m128i *)v247.m128_u64[0] != &v248 )
          {
            v193 = v171;
            operator delete((void *)v247.m128_u64[0]);
            v171 = v193;
          }
          if ( v171 )
          {
            v247.m128_u64[0] = (unsigned __int64)&v248;
            v194 = v232;
            sub_1189220(&v247, *(_BYTE **)(v167 + 16), *(_QWORD *)(v167 + 16) + *(_QWORD *)(v167 + 24));
            sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
            sub_10E1980(&v237, (__m128i *)v240, "=");
            sub_10E1980(&v234, &v237, "-lclang_rt.builtins");
            v255.m128i_i16[0] = 260;
            ptr[0] = &v234;
            v172 = sub_10DA6C0(v194.m128i_i64[1], (__int64)ptr);
            sub_10DC5D0(v194.m128i_i64[0], v172);
            if ( (_BYTE *)v234.m128i_i64[0] != v235 )
              operator delete((void *)v234.m128i_i64[0]);
            if ( (_BYTE *)v237.m128i_i64[0] != v238 )
              operator delete((void *)v237.m128i_i64[0]);
            if ( v240[0] != &v241 )
              operator delete(v240[0]);
            if ( (__m128i *)v247.m128_u64[0] != &v248 )
              operator delete((void *)v247.m128_u64[0]);
            if ( *(_DWORD *)(*(_QWORD *)v233.m128i_i64[1] + 16LL) == 4 )
            {
              v247.m128_u64[0] = (unsigned __int64)&v248;
              v195 = v232;
              sub_1189220(&v247, *(_BYTE **)(v167 + 16), *(_QWORD *)(v167 + 16) + *(_QWORD *)(v167 + 24));
              sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
              sub_10E1980(&v237, (__m128i *)v240, "=");
              sub_10E1980(&v234, &v237, "-lflang_rt.runtime");
              ptr[0] = &v234;
              v255.m128i_i16[0] = 260;
              v173 = sub_10DA6C0(v195.m128i_i64[1], (__int64)ptr);
              sub_10DC5D0(v195.m128i_i64[0], v173);
              if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                operator delete((void *)v234.m128i_i64[0]);
              if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                operator delete((void *)v237.m128i_i64[0]);
              if ( v240[0] != &v241 )
                operator delete(v240[0]);
              if ( (__m128i *)v247.m128_u64[0] != &v248 )
                operator delete((void *)v247.m128_u64[0]);
            }
          }
        }
      }
    }
    else
    {
      if ( a3[16] != 4 )
      {
LABEL_285:
        if ( (v146 & 0x10) != 0 )
        {
          LODWORD(ptr[0]) = 16;
          v156 = sub_10E0830(v217, (int *)ptr);
          v200 = v157;
          for ( m = v156; m != v200; m = std::_Rb_tree_increment(m) )
          {
            v158 = *(_QWORD *)(m + 40);
            if ( ((*(_DWORD *)(v158 + 48) - 25) & 0xFFFFFFEE) == 0 )
            {
              sub_1131210((__int64)ptr, *(_QWORD *)(m + 40));
              if ( v255.m128i_i8[0] )
              {
                if ( ptr[0] != &si128 )
                  operator delete(ptr[0]);
                v247.m128_u64[0] = (unsigned __int64)&v248;
                v184 = v232;
                sub_1189220(&v247, *(_BYTE **)(v158 + 16), *(_QWORD *)(v158 + 16) + *(_QWORD *)(v158 + 24));
                sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
                sub_10E1980(&v237, (__m128i *)v240, "=");
                sub_10E1980(&v234, &v237, "-lc");
                v255.m128i_i16[0] = 260;
                ptr[0] = &v234;
                v159 = sub_10DA6C0(v184.m128i_i64[1], (__int64)ptr);
                sub_10DC5D0(v184.m128i_i64[0], v159);
                if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                  operator delete((void *)v234.m128i_i64[0]);
                if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                  operator delete((void *)v237.m128i_i64[0]);
                if ( v240[0] != &v241 )
                  operator delete(v240[0]);
                if ( (__m128i *)v247.m128_u64[0] != &v248 )
                  operator delete((void *)v247.m128_u64[0]);
                v247.m128_u64[0] = (unsigned __int64)&v248;
                v185 = v232;
                sub_1189220(&v247, *(_BYTE **)(v158 + 16), *(_QWORD *)(v158 + 16) + *(_QWORD *)(v158 + 24));
                sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
                sub_10E1980(&v237, (__m128i *)v240, "=");
                sub_10E1980(&v234, &v237, "-lm");
                ptr[0] = &v234;
                v255.m128i_i16[0] = 260;
                v160 = sub_10DA6C0(v185.m128i_i64[1], (__int64)ptr);
                sub_10DC5D0(v185.m128i_i64[0], v160);
                if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                  operator delete((void *)v234.m128i_i64[0]);
                if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                  operator delete((void *)v237.m128i_i64[0]);
                if ( v240[0] != &v241 )
                  operator delete(v240[0]);
                if ( (__m128i *)v247.m128_u64[0] != &v248 )
                  operator delete((void *)v247.m128_u64[0]);
              }
              v209 = sub_112C5D0(*(_QWORD *)(v233.m128i_i64[0] + 24));
              v186 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v209 + 96LL);
              v196 = *(void (__fastcall **)(__m128 *, __int64, __int64, char *, size_t, __int64, _QWORD))(*(_QWORD *)v158 + 304LL);
              v161 = j__strlen("builtins");
              v196(&v247, v158, v232.m128i_i64[1], "builtins", v161, 1, 0);
              v255.m128i_i16[0] = 260;
              ptr[0] = &v247;
              v162 = v186(v209, ptr);
              if ( (__m128i *)v247.m128_u64[0] != &v248 )
              {
                v187 = v162;
                operator delete((void *)v247.m128_u64[0]);
                v162 = v187;
              }
              if ( v162 )
              {
                v247.m128_u64[0] = (unsigned __int64)&v248;
                v188 = v232;
                sub_1189220(&v247, *(_BYTE **)(v158 + 16), *(_QWORD *)(v158 + 16) + *(_QWORD *)(v158 + 24));
                sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
                sub_10E1980(&v237, (__m128i *)v240, "=");
                sub_10E1980(&v234, &v237, "-lclang_rt.builtins");
                v255.m128i_i16[0] = 260;
                ptr[0] = &v234;
                v163 = sub_10DA6C0(v188.m128i_i64[1], (__int64)ptr);
                sub_10DC5D0(v188.m128i_i64[0], v163);
                if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                  operator delete((void *)v234.m128i_i64[0]);
                if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                  operator delete((void *)v237.m128i_i64[0]);
                if ( v240[0] != &v241 )
                  operator delete(v240[0]);
                if ( (__m128i *)v247.m128_u64[0] != &v248 )
                  operator delete((void *)v247.m128_u64[0]);
                if ( *(_DWORD *)(*(_QWORD *)v233.m128i_i64[1] + 16LL) == 4 )
                {
                  v247.m128_u64[0] = (unsigned __int64)&v248;
                  v189 = v232;
                  sub_1189220(&v247, *(_BYTE **)(v158 + 16), *(_QWORD *)(v158 + 16) + *(_QWORD *)(v158 + 24));
                  sub_E7ED70((__m128i *)v240, "--device-linker=", &v247);
                  sub_10E1980(&v237, (__m128i *)v240, "=");
                  sub_10E1980(&v234, &v237, "-lflang_rt.runtime");
                  v255.m128i_i16[0] = 260;
                  ptr[0] = &v234;
                  v164 = sub_10DA6C0(v189.m128i_i64[1], (__int64)ptr);
                  sub_10DC5D0(v189.m128i_i64[0], v164);
                  if ( (_BYTE *)v234.m128i_i64[0] != v235 )
                    operator delete((void *)v234.m128i_i64[0]);
                  if ( (_BYTE *)v237.m128i_i64[0] != v238 )
                    operator delete((void *)v237.m128i_i64[0]);
                  if ( v240[0] != &v241 )
                    operator delete(v240[0]);
                  if ( (__m128i *)v247.m128_u64[0] != &v248 )
                    operator delete((void *)v247.m128_u64[0]);
                }
              }
            }
          }
        }
        else if ( a3[16] == 16 )
        {
          v148 = sub_10E0B00((__int64)a2);
          sub_1198340((__int64)&v232, *(_QWORD *)(v148 + 40));
        }
        goto LABEL_203;
      }
      v174 = sub_10E0B00((__int64)a2);
      sub_1198340((__int64)&v232, *(_QWORD *)(v174 + 40));
    }
    v146 = a3[15];
    goto LABEL_285;
  }
LABEL_203:
  v114 = *(_BYTE **)(*(_QWORD *)v202 + 40LL);
  LOWORD(v249) = 257;
  if ( *v114 )
  {
    v247.m128_u64[0] = (unsigned __int64)v114;
    LOBYTE(v249) = 3;
  }
  v243 = 259;
  v240[0] = "--linker-path=";
  sub_A41580((__m128i *)ptr, (const __m128i *)v240, (const __m128i *)&v247, v111, v112, v113);
  v115 = sub_10DA6C0(v70, (__int64)ptr);
  sub_10DC5D0((__int64)&v244, v115);
  if ( a3[3] == 58 )
  {
    ptr[0] = "-o";
    ptr[1] = *a4;
    sub_118FFD0((__int64)&v244, ptr, &si128);
    v152 = *(__int64 **)a5;
    v153 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
    if ( *(_QWORD *)a5 != v153 )
    {
      do
      {
        v154 = *v152;
        v152 += 5;
        sub_10DC5D0((__int64)&v244, v154);
      }
      while ( (__int64 *)v153 != v152 );
    }
    sub_10DC5D0((__int64)&v244, (__int64)"-r");
  }
  else
  {
    v116 = *(__int64 **)(*(_QWORD *)v202 + 56LL);
    v117 = &v116[*(unsigned int *)(*(_QWORD *)v202 + 64LL)];
    while ( v117 != v116 )
    {
      v118 = *v116++;
      sub_10DC5D0((__int64)&v244, v118);
    }
  }
  sub_11BC9D0(v70, &v244);
  v119 = sub_10DCD30(v70, 0xC0Eu);
  v120 = v119;
  if ( v119 )
  {
    v121 = *(const char ***)(v119 + 48);
    v122 = 0;
    v123 = *v121;
    if ( *v121 )
      v122 = j__strlen(*v121);
    if ( !(unsigned __int8)sub_2247A50(v123, v122, 10, ptr)
      && ptr[0] == (void *)SLODWORD(ptr[0])
      && SLODWORD(ptr[0]) > 0 )
    {
      LODWORD(v240[0]) = ptr[0];
      v243 = 266;
      v247.m128_u64[0] = (unsigned __int64)"--wrapper-jobs=";
      LOWORD(v249) = 259;
      sub_A41580((__m128i *)ptr, (const __m128i *)&v247, (const __m128i *)v240, v124, 266, 259);
      v150 = sub_10DA6C0(v70, (__int64)ptr);
      sub_10DC5D0((__int64)&v244, v150);
    }
    else
    {
      sub_FC70B0((__int64)ptr, **a2, 0, 382);
      sub_21B5FF0(&v247, v120, v70);
      sub_AEC220((unsigned __int8 **)ptr, v247.m128_u64[0], v247.m128_i64[1]);
      sub_1188FA0((unsigned __int8 **)ptr, **(_QWORD **)(v120 + 48));
      if ( (__m128i *)v247.m128_u64[0] != &v248 )
        operator delete((void *)v247.m128_u64[0]);
      sub_AEA040((__int64)ptr);
    }
  }
  sub_112D530(&v247, *(_QWORD *)(a1 + 24), "clang-linker-wrapper");
  ptr[0] = &v247;
  v255.m128i_i16[0] = 260;
  v125 = sub_10DA6C0(v70, (__int64)ptr);
  if ( (__m128i *)v247.m128_u64[0] != &v248 )
    operator delete((void *)v247.m128_u64[0]);
  v126 = v245;
  v127 = *(_QWORD *)v202;
  *(_QWORD *)(*(_QWORD *)v202 + 40LL) = v125;
  ptr[0] = &si128;
  ptr[1] = (void *)0x1000000000LL;
  if ( v126 )
    sub_10DED70(ptr, (char **)&v244);
  sub_10E02C0((char ***)(v127 + 56), (char ***)ptr);
  if ( ptr[0] != &si128 )
    free(ptr[0]);
  if ( v244 != v246 )
    free(v244);
  operator delete(v224, 4LL * v227, 4);
  return operator delete(v220, 4LL * v223, 4);
}
