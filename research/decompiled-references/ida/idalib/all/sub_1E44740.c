unsigned int *__fastcall sub_1E44740(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128i a7,
        __m128i a8,
        double a9,
        double a10,
        __m128 a11,
        __m128i a12)
{
  __int64 *v12; // rbp
  unsigned int *v13; // rbx
  unsigned __int64 v14; // rax
  _WORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int *v24; // r13
  __int64 v26; // rdi
  bool v27; // r8
  __int64 v28; // rsi
  char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  unsigned __int8 v43; // cl
  __int64 v44; // rax
  _QWORD *v45; // rdx
  void *v46; // rdi
  void *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r15
  int v52; // rax^4
  unsigned __int64 v53; // rax
  char v54; // cl
  _QWORD *v55; // r13
  _WORD *v56; // r14
  char v57; // al
  _WORD *v58; // r14
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // ecx
  _WORD *v65; // r15
  _QWORD *v66; // rdx
  int v67; // r14d
  __int64 v68; // rax
  _WORD *v69; // rsi
  __int64 v70; // rdi
  unsigned __int64 v71; // r14
  __m128i *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r9
  double v76; // xmm4_8
  double v77; // xmm5_8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdi
  bool v85; // r13
  bool v86; // dl
  bool v87; // cl
  int v88; // eax
  __m128 v89; // xmm0
  unsigned __int64 v90; // rsi
  unsigned int *v91; // rax
  void **v92; // rsi
  __int64 *v93; // rdi
  int v94; // eax
  __int64 v95; // rcx
  const __m128i *v96; // rsi
  unsigned int *v97; // r9
  __int64 v98; // rcx
  __int64 *v99; // r15
  __int64 *v100; // r12
  __int64 *v101; // rbp
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  _WORD *v104; // rax
  unsigned __int64 v105; // rdx
  _WORD *v106; // r13
  __int64 v107; // rax
  __int16 v108; // cx
  __int16 v109; // dx
  int v110; // eax
  _WORD *v111; // r13
  int v112; // r14d
  int v113; // eax
  unsigned __int64 v114; // r8
  _BYTE *v115; // rdx
  _DWORD *v116; // rax
  __int64 *v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rcx
  _WORD *v120; // rdi
  __int64 v121; // r13
  unsigned __int8 v122; // al
  __int64 v123; // rsi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r13
  bool v127; // zf
  __int64 v128; // r9
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rcx
  unsigned int *v135; // rax
  _WORD *v136; // rbx
  __int16 v137; // ax
  __int16 v138; // dx
  _WORD *v139; // rax
  char v140; // r14
  char v141; // r15
  __int64 v142; // rax
  _WORD *v143; // r14
  char v144; // r13
  __int64 v145; // rax
  _WORD *v146; // r13
  unsigned __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 *v154; // r15
  __int64 *v155; // rax
  __int64 *v156; // r13
  __int64 *v157; // r14
  __int64 v158; // r12
  _QWORD *v159; // r15
  __int64 v160; // rax
  __int64 v161; // r9
  unsigned int v162; // eax
  unsigned __int64 v163; // rax
  __int64 v164; // r13
  unsigned __int64 v165; // rax
  unsigned __int64 v166; // rax
  _WORD *v167; // r13
  _QWORD *v168; // rax
  __int64 v169; // r8
  __int64 v170; // r9
  unsigned __int64 v171; // r13
  _QWORD *v172; // rax
  unsigned __int64 v173; // rax
  unsigned __int8 v174; // dl
  char v176; // [rsp+Fh] [rbp-379h]
  __int64 v177; // [rsp+20h] [rbp-368h]
  __int64 v178; // [rsp+20h] [rbp-368h]
  int v180; // [rsp+28h] [rbp-360h]
  _WORD *v181; // [rsp+28h] [rbp-360h]
  __int64 v182; // [rsp+28h] [rbp-360h]
  const __m128i *v183; // [rsp+28h] [rbp-360h]
  __int64 v184; // [rsp+38h] [rbp-350h]
  const void *v185; // [rsp+38h] [rbp-350h]
  bool v186; // [rsp+38h] [rbp-350h]
  _WORD *v187; // [rsp+38h] [rbp-350h]
  char v188; // [rsp+38h] [rbp-350h]
  __int64 v189; // [rsp+40h] [rbp-348h]
  bool v190; // [rsp+40h] [rbp-348h]
  int v191; // [rsp+40h] [rbp-348h]
  char v192; // [rsp+48h] [rbp-340h]
  __int64 v193; // [rsp+48h] [rbp-340h]
  __int64 v194; // [rsp+48h] [rbp-340h]
  _WORD *v195; // [rsp+50h] [rbp-338h]
  unsigned __int64 *v196; // [rsp+68h] [rbp-320h] BYREF
  unsigned __int64 v197; // [rsp+70h] [rbp-318h] BYREF
  unsigned int *v198; // [rsp+78h] [rbp-310h] BYREF
  _WORD *v199[2]; // [rsp+80h] [rbp-308h] BYREF
  __m128i v200; // [rsp+90h] [rbp-2F8h] BYREF
  __m128i v201[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  void *v202; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 v203; // [rsp+C8h] [rbp-2C0h]
  _BYTE v204[32]; // [rsp+D0h] [rbp-2B8h] BYREF
  _QWORD v205[2]; // [rsp+F0h] [rbp-298h] BYREF
  char v206; // [rsp+100h] [rbp-288h] BYREF
  _QWORD v207[2]; // [rsp+140h] [rbp-248h] BYREF
  _QWORD v208[2]; // [rsp+150h] [rbp-238h] BYREF
  char v209; // [rsp+160h] [rbp-228h]
  bool v210; // [rsp+161h] [rbp-227h]
  char v211; // [rsp+162h] [rbp-226h]
  __int64 v212; // [rsp+168h] [rbp-220h]
  __int64 v213; // [rsp+180h] [rbp-208h] BYREF
  _QWORD *v214; // [rsp+188h] [rbp-200h] BYREF
  __int64 v215; // [rsp+190h] [rbp-1F8h]
  _BYTE v216[64]; // [rsp+198h] [rbp-1F0h] BYREF
  void *v217[2]; // [rsp+1D8h] [rbp-1B0h]
  __int64 v218; // [rsp+1E8h] [rbp-1A0h]
  __int64 v219; // [rsp+1F0h] [rbp-198h]
  unsigned __int64 v220; // [rsp+1F8h] [rbp-190h]
  int v221; // [rsp+200h] [rbp-188h]
  _QWORD v222[2]; // [rsp+208h] [rbp-180h] BYREF
  int v223; // [rsp+218h] [rbp-170h]
  int v224; // [rsp+21Ch] [rbp-16Ch]
  bool v225; // [rsp+220h] [rbp-168h]
  bool v226; // [rsp+221h] [rbp-167h]
  char v227; // [rsp+222h] [rbp-166h]
  bool v228; // [rsp+223h] [rbp-165h]
  bool v229; // [rsp+224h] [rbp-164h]
  char v230; // [rsp+225h] [rbp-163h]
  __int16 v231; // [rsp+226h] [rbp-162h]
  void *v232[2]; // [rsp+230h] [rbp-158h] BYREF
  void *ptr[2]; // [rsp+240h] [rbp-148h] BYREF
  __int128 v234; // [rsp+250h] [rbp-138h]
  __int64 v235; // [rsp+340h] [rbp-48h]

  v12 = a1;
  v13 = (unsigned int *)a2;
  v14 = sub_B77A30(a2);
  v15 = (_WORD *)v14;
  if ( !v14 )
  {
    if ( (*(_WORD *)(a2 + 30) & 0x180) == 0 )
    {
      v176 = 0;
      goto LABEL_13;
    }
    v26 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18360LL);
    if ( !v26 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 128LL))(v26, a2) )
    {
      v176 = 1;
      goto LABEL_13;
    }
    goto LABEL_81;
  }
  v176 = 0;
  if ( (*(_WORD *)(v14 + 30) & 0x180) != 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18360LL);
    if ( !v16 )
    {
LABEL_83:
      v176 = 1;
      goto LABEL_5;
    }
    v176 = 1;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 128LL))(v16, a2) )
      goto LABEL_5;
LABEL_81:
    v232[0] = nullptr;
    if ( (unsigned __int8)sub_B7F5F0((_QWORD *)a2, v232, v17, v18, v19, v20) )
    {
      v13 = (unsigned int *)v232[0];
      v15 = (_WORD *)sub_B77A30((__int64)v232[0]);
    }
    goto LABEL_83;
  }
LABEL_5:
  if ( !v15 || a3 )
  {
LABEL_13:
    v27 = 1;
    if ( a3 )
      goto LABEL_14;
    goto LABEL_30;
  }
  v21 = *(_QWORD *)v12[4];
  v22 = *(_QWORD *)(v21 + 8);
  v23 = *(_QWORD *)(v21 + 16);
  v232[0] = nullptr;
  v24 = (unsigned int *)sub_BC3B30(v15, v22, v23, (__int64)v232);
  if ( !v24 )
  {
LABEL_30:
    v42 = v12[3];
    v43 = *(_BYTE *)(v42 + 8) & 0x7F;
    if ( v43 <= 0x12u )
    {
      v27 = 1;
      if ( ((1LL << v43) & 0x40182) != 0 )
        goto LABEL_14;
      goto LABEL_32;
    }
    v27 = 1;
    if ( ((v43 + 94) & 0x7Fu) > 5 )
    {
LABEL_32:
      v44 = sub_B8C1B0(v42);
      v27 = sub_B8C200(v44, 0) != nullptr;
    }
LABEL_14:
    v28 = *v12;
    v205[1] = 1;
    v29 = &v206;
    v205[0] = v28;
    do
    {
      *(_QWORD *)v29 = -4096;
      v29 += 16;
    }
    while ( v29 != (char *)v207 );
    v209 = 0;
    v210 = v27;
    v211 = 0;
    v207[0] = v208;
    v207[1] = 0x100000000LL;
    v30 = *(_QWORD *)(v28 + 11280);
    v212 = 0;
    v208[1] = v30;
    *(_QWORD *)(v28 + 11280) = v205;
    if ( (v13[7] & 0x7F) == 0x27 )
    {
      v31 = sub_1E01710(*v12, v12[4], *((_QWORD *)v13 + 22), a5, a6);
      v32 = v31;
      if ( (v31 & 3) == 2 && (v31 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        v24 = nullptr;
LABEL_87:
        sub_1CB3BA0((__int64)v205);
        return v24;
      }
    }
    else
    {
      v32 = 0;
    }
    v202 = v204;
    v203 = 0x400000000LL;
    v33 = sub_1E02EA0((__int64)v12, (__int64)v13, (__int64)&v202, a5, a6);
    v196 = (unsigned __int64 *)v33;
    if ( v33 )
    {
      v197 = sub_1DFFA40(*(_QWORD *)(*v12 + 248), (__int64)v13, (__int64)v33, v34);
      if ( a3 )
      {
        v35 = *(_DWORD *)(a3 + 20) & 0x1FFFFFFF;
        if ( v35 )
        {
          v114 = 8LL * v35;
          v115 = *(_BYTE **)(a3 + 24 + v114 - 8);
          if ( (v115[28] & 0x7F) == 0x43 && (v115[29] & 2) != 0 && (v115[60] & 2) != 0 )
          {
            v116 = nullptr;
            if ( (*(_BYTE *)(a3 + 23) & 0x40) != 0 )
              v116 = *(_DWORD **)(a3 + v114 + 24);
            a3 = sub_BC21A0(
                   *(_QWORD **)(*v12 + 248),
                   *(_DWORD *)(a3 + 8),
                   *(_DWORD *)(a3 + 12),
                   a3 + 24,
                   v114 >> 3,
                   *(unsigned int *)(a3 + 16),
                   v116);
          }
        }
      }
      v36 = *((_QWORD *)v13 + 7);
      if ( (v36 & 4) == 0 )
      {
        v184 = 0;
        v177 = 0;
        goto LABEL_23;
      }
      v147 = v36 & 0xFFFFFFFFFFFFFFF8LL;
      v177 = *(_QWORD *)v147;
      v184 = *(_QWORD *)(v147 + 8);
      if ( !*(_QWORD *)v147 )
      {
LABEL_150:
        a7 = _mm_loadu_si128((const __m128i *)(v147 + 40));
        v200 = a7;
        if ( (*((_BYTE *)v13 + 31) & 8) == 0 )
          goto LABEL_24;
        goto LABEL_151;
      }
      v148 = sub_1DEB190(*v12, *(_QWORD *)v147, *(void **)(v147 + 8), v12[4]);
      v184 = v149;
      v177 = v148;
      if ( v148 )
      {
        v150 = *((_QWORD *)v13 + 7);
        if ( (v150 & 4) == 0 )
        {
LABEL_23:
          a6 = (__m128)_mm_loadu_si128(&xmmword_23DED40);
          v200 = (__m128i)a6;
          if ( (*((_BYTE *)v13 + 31) & 8) == 0 )
          {
LABEL_24:
            if ( v177 && v176 )
            {
              a5 = 0;
              *(_OWORD *)v232 = 0;
              *(_OWORD *)ptr = 0;
              v234 = 0;
              sub_15AB8B0((__int64)v232, v177, v184);
              v24 = (unsigned int *)sub_16A2930(*v12, (__int64)v232, 0, v37, v38, v39);
              v198 = v24;
              if ( !v24 )
              {
                if ( HIDWORD(ptr[1]) )
                  free(ptr[0]);
                goto LABEL_85;
              }
              if ( HIDWORD(ptr[1]) )
                free(ptr[0]);
            }
            else
            {
              v45 = (_QWORD *)(*((_QWORD *)v13 + 2) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*((_QWORD *)v13 + 2) & 4) != 0 )
                v45 = (_QWORD *)*v45;
              v198 = (unsigned int *)sub_1E39240(*v12, v13[6], (__int64)v45, v12[4], a5, a6, a7);
            }
LABEL_36:
            v46 = *((void **)v13 + 5);
            v47 = *((void **)v13 + 20);
            v48 = *v12;
            LODWORD(v232[1]) = v13[6];
            v49 = v12[4];
            v232[0] = v46;
            ptr[0] = v47;
            sub_1DD8EB0(v201, v48, (const __m128i *)v232, v49, v40, v41, a5, a6);
            if ( a4 )
              sub_1E05D70((__int64)v12, (__int64)v13, (__int64 *)&v197, &v196, v201[0].m128i_i64);
            v50 = *(_QWORD *)v13;
            if ( (v13[7] & 0x7F) == 0x27 )
            {
              v51 = *((_QWORD *)v13 + 21);
              v189 = *((_QWORD *)v13 + 23);
              v192 = *((_BYTE *)v13 + 85) & 3;
              v52 = (unsigned __int64)(*(__int64 (__fastcall **)(unsigned int *))(v50 + 16))(v13) >> 32;
              v53 = sub_B97710(
                      *(_QWORD **)(*v12 + 248),
                      (__int64)v198,
                      v13[16],
                      v32,
                      v201[0].m128i_i64,
                      v197,
                      (__int64)v196,
                      v52,
                      v51,
                      v192,
                      (__int64)&v200,
                      v189 & 0xFFFFFFFFFFFFFFF8LL,
                      (v189 >> 1) & 3);
              v54 = *((_BYTE *)v13 + 29);
              v199[0] = (_WORD *)v53;
              *(_BYTE *)(v53 + 29) = v54 & 0x60 | *(_BYTE *)(v53 + 29) & 0x9F;
            }
            else
            {
              v140 = v13[21] & 3;
              v141 = BYTE2(*((_QWORD *)v13 + 10));
              v193 = (*((_QWORD *)v13 + 10) >> 43) & 1LL;
              v142 = (*(__int64 (__fastcall **)(unsigned int *))(v50 + 32))(v13);
              v199[0] = (_WORD *)sub_B7CBC0(
                                   *(_QWORD *)(*v12 + 248),
                                   (__int64)v198,
                                   v13[16],
                                   v201[0].m128i_i64,
                                   v197,
                                   (__int64)v196,
                                   *(_BYTE *)(v142 + 81) >> 5,
                                   v193,
                                   (v141 & 2) != 0,
                                   (v141 & 0x20) != 0,
                                   v140,
                                   (__int64)&v200);
              v143 = v199[0];
              v144 = *(_BYTE *)((*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v13 + 32LL))(v13) + 85);
              v145 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v143 + 32LL))(v143);
              *(_BYTE *)(v145 + 85) = *(_BYTE *)(v145 + 85) & 0xEF | (16 * ((v144 & 0x10) != 0));
              v146 = v199[0];
              *((_DWORD *)v146 + 35) = (unsigned __int64)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v13 + 16LL))(v13) >> 32;
            }
            if ( (*((_BYTE *)v13 + 82) & 1) != 0 )
              *((_BYTE *)v199[0] + 82) |= 1u;
            if ( v177 )
              sub_B7BD70((__int64)v199[0], v177, v184);
            if ( (*((_BYTE *)v13 + 31) & 8) != 0 )
            {
              v106 = v199[0];
              v107 = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v199[0] + 48LL))(v199[0]);
              v108 = v106[15] & 0x3FDF;
              v109 = v106[15] & 0x37DF | 0x800 | v106[15] & 0xC000;
              v106[15] = v109;
              if ( v107 && (*(_BYTE *)(v107 + 30) & 0x20) != 0 )
                v106[15] = v108 | 0x820 | v109 & 0xC000;
              v55 = (_QWORD *)v12[3];
              if ( v176 )
                goto LABEL_132;
            }
            else
            {
              v55 = (_QWORD *)v12[3];
              if ( v176 )
                goto LABEL_46;
            }
            if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v13 + 24LL))(v13) )
            {
              if ( (*((_BYTE *)v13 + 31) & 8) == 0 )
              {
                v55 = (_QWORD *)(*((_QWORD *)v13 + 2) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*((_QWORD *)v13 + 2) & 4) != 0 )
                  v55 = (_QWORD *)*v55;
LABEL_46:
                v56 = v199[0];
                v57 = sub_B74C20((__int64)v13);
                sub_B74C40((__int64)v56, v57);
                v58 = v199[0];
                v59 = sub_B74C70((__int64)v13);
                sub_B74C90((__int64)v58, v59);
                sub_B90130((__int64)v199[0], (__int64)v55, v60, v61, v62, v63);
                v64 = v203;
                v65 = v199[0];
                v66 = v202;
                if ( (_DWORD)v203 )
                {
                  v67 = 0;
                  v68 = 0;
                  v69 = v199[0];
                  do
                  {
                    v70 = v66[v68];
                    if ( v70 )
                    {
                      if ( v69 )
                        v69 += 36;
                      sub_B8C080(v70, (__int64)v69);
                      v64 = v203;
                      v69 = v199[0];
                      v66 = v202;
                    }
                    v68 = (unsigned int)(v67 + 1);
                    v67 = v68;
                  }
                  while ( (unsigned int)v68 < v64 );
                  v65 = v69;
                  v71 = v64;
                }
                else
                {
                  v71 = 0;
                }
                v185 = v66;
                v72 = (__m128i *)sub_B8C330((__int64)v65);
                sub_B7C440((__int64)v65, (__int64)v72, v185, v71);
                if ( v200.m128i_i64[0] )
                {
                  v72 = &v200;
                  sub_B7BE40((__int64)v199[0], (__int64)&v200);
                }
                if ( a3 )
                {
                  v15 = (_WORD *)sub_BBDCA0(
                                   *(_QWORD *)(*v12 + 248),
                                   (__int64)v198,
                                   *((_DWORD *)v199[0] + 6),
                                   *((_QWORD *)v199[0] + 5),
                                   a3,
                                   (__int64)v199[0]);
                  sub_B77A70((__int64)v199[0], (__int64)v15);
                  sub_B90130((__int64)v15, (__int64)v55, v78, v79, v80, v81);
                  if ( !v176 )
                    goto LABEL_58;
                  if ( (unsigned __int8)sub_B726C0((__int64)v13, (__int64)v55, v82, v83) )
                  {
                    v171 = sub_B77A30((__int64)v13);
                    *(_BYTE *)(*((_QWORD *)v15 + 6) + 83LL) |= 0x80u;
                    v172 = (_QWORD *)sub_BC3640(v15);
                    *v172 = *v172 & 7LL | v171;
                  }
                  goto LABEL_137;
                }
                if ( !v15
                  || (v74 = *v12,
                      *(_DWORD *)(*(_QWORD *)(*v12 + 11312)
                                + ((unsigned __int64)*(unsigned int *)(*v12 + 11320) << 6)
                                - 64) == 25) )
                {
                  if ( !a4 )
                  {
                    if ( !v176 )
                    {
                      sub_B77AA0((__int64)v199[0], (__int64)v13);
                      goto LABEL_58;
                    }
                    if ( (unsigned __int8)sub_B726C0((__int64)v13, (__int64)v72, v73, v74) )
                    {
                      v167 = v199[0];
                      v168 = (_QWORD *)sub_B8C330((__int64)v199[0]);
                      sub_B7DAE0((__int64)v167, v168, (__int64)v13, 1, v169, v170);
                    }
LABEL_137:
                    sub_17A0130(v199[0], 0);
                    v139 = (_WORD *)sub_B77A30((__int64)v199[0]);
                    if ( v139 )
                      sub_17A0130(v139, 0);
LABEL_58:
                    if ( (unsigned __int8)sub_1E41F90(
                                            v12,
                                            (__int64)v199[0],
                                            (__int64)v13,
                                            a5,
                                            a6,
                                            a7,
                                            a8,
                                            v76,
                                            v77,
                                            a11,
                                            a12) )
                      sub_B88650((__int64)v199[0], 1);
                    v84 = *v12;
                    if ( (*((_BYTE *)v13 + 31) & 8) != 0 )
                    {
                      v85 = 0;
                      v86 = 1;
                      v87 = 1;
                    }
                    else
                    {
                      v110 = sub_1A3A250(v84);
                      v84 = *v12;
                      v87 = v110 != 0;
                      v86 = v110 == 2;
                      v85 = v110 == 0;
                      if ( (*((_BYTE *)v13 + 31) & 8) == 0 )
                      {
                        v88 = 0;
LABEL_63:
                        v89 = 0;
                        v190 = v87;
                        v90 = *((_QWORD *)v199[0] + 5);
                        v219 = v84;
                        v214 = v216;
                        *(_OWORD *)v217 = 0;
                        v220 = v90;
                        v186 = v86;
                        v180 = v88;
                        v213 = 0;
                        v215 = 0x800000000LL;
                        v218 = 0;
                        v221 = 0;
                        sub_B85890(v222, v90);
                        v228 = v85;
                        v225 = v190;
                        v223 = v180;
                        v226 = v186;
                        v229 = v85;
                        v231 = 0;
                        v222[1] = 0;
                        v224 = 0;
                        v227 = 1;
                        v230 = 0;
                        sub_1A395A0((__int64)&v213);
                        v91 = (unsigned int *)sub_B77C50((__int64)v13);
                        v24 = v91;
                        if ( v91 )
                        {
                          v92 = *((void ***)v91 + 1);
                          v93 = (__int64 *)*v12;
                          v232[1] = (void *)0x800000000LL;
                          v235 = 0;
                          v232[0] = ptr;
                          if ( v92 )
                          {
                            v94 = *(_DWORD *)v92;
                            v95 = v12[4];
                            v96 = (const __m128i *)(v92 + 2);
                            LODWORD(v235) = v94;
                            HIDWORD(v235) = v96[-1].m128i_i32[1];
                            if ( (unsigned __int8)sub_1DD74F0(
                                                    (__int64)v93,
                                                    v96,
                                                    v96[-1].m128i_u32[2],
                                                    v95,
                                                    (__int64)v232,
                                                    (__m128)0LL,
                                                    a6) )
                            {
LABEL_142:
                              if ( v232[0] != ptr )
                                free(v232[0]);
                              v24 = nullptr;
                              goto LABEL_129;
                            }
                            v97 = v24 + 4;
                            v93 = (__int64 *)*v12;
                            v98 = (__int64)&v24[2 * *v24 + 4];
                            if ( (unsigned int *)v98 != v24 + 4 )
                            {
LABEL_67:
                              v187 = v15;
                              v99 = (__int64 *)v98;
                              v100 = v12;
                              v101 = (__int64 *)v97;
                              while ( 1 )
                              {
                                v102 = sub_1E38470((__int64)v93, v13[6], *v101, v100[4], 0, (__m128)0LL, a6, a7);
                                if ( !v102 )
                                  goto LABEL_142;
                                v103 = (unsigned int)v215;
                                v104 = (_WORD *)((*(_BYTE *)(v102 + 29) >> 5) & 3 | v102);
                                v105 = (unsigned int)v215 + 1LL;
                                v199[1] = v104;
                                if ( v105 > HIDWORD(v215) )
                                {
                                  v181 = v104;
                                  sub_2237220(&v214, v216, v105, 8);
                                  v103 = (unsigned int)v215;
                                  v104 = v181;
                                }
                                ++v101;
                                v214[v103] = v104;
                                LODWORD(v213) = 2;
                                LODWORD(v215) = v215 + 1;
                                if ( v99 == v101 )
                                {
                                  v12 = v100;
                                  v15 = v187;
                                  v93 = (__int64 *)*v12;
                                  break;
                                }
                                v93 = (__int64 *)*v100;
                              }
                            }
                            v92 = *((void ***)v24 + 1);
                            if ( v92 )
                              v92 = v232;
                          }
                          else
                          {
                            v97 = v91 + 4;
                            v98 = (__int64)&v91[2 * *v91 + 4];
                            if ( (unsigned int *)v98 != v91 + 4 )
                              goto LABEL_67;
                          }
                          v117 = (__int64 *)v92;
                          v90 = (unsigned __int64)v199[0];
                          if ( !(unsigned __int8)sub_1CC2B70(v93, (__int64)v199[0], v117, (__int64)&v213, 0, 0.0, a6) )
                            goto LABEL_103;
                        }
                        else
                        {
                          v183 = (const __m128i *)sub_B77B80((__int64)v13);
                          if ( !v183 )
                          {
                            v188 = 0;
                            v182 = (a3 != 0) | (unsigned __int8)(v15 == nullptr);
                            if ( a3 != 0 || v15 == nullptr )
                            {
                              v164 = *v12;
                              v165 = sub_B8EAA0((__int64)v198);
                              v90 = (unsigned __int64)&v213;
                              sub_1A48440(v164, (__int64)&v213, v165, 0);
                              if ( (_DWORD)v213 == 2 )
                              {
                                v173 = *v214 & 0xFFFFFFFFFFFFFFF8LL;
                                v174 = *(_BYTE *)(v173 + 28) & 0x7F;
                                v119 = (v174 + 52) & 0x7F;
                                if ( (unsigned __int8)v119 <= 1u
                                  || (v118 = (unsigned int)v174 - 53, (unsigned int)v118 <= 1) )
                                {
                                  v173 = sub_B72ED0(*v214 & 0xFFFFFFFFFFFFFFF8LL);
                                }
                                if ( (*(_BYTE *)(v173 + 28) & 0x7Fu) - 58 <= 4 )
                                {
                                  LODWORD(v213) = 0;
                                  LODWORD(v215) = 0;
                                  if ( v217[0] )
                                    sub_1A39780((char *)v217[0]);
                                  v89 = 0;
                                  LOBYTE(v231) = 0;
                                  *(_OWORD *)v217 = 0;
                                }
                              }
                              if ( !v177 && v176 )
                              {
                                v90 = (unsigned __int64)&v213;
                                sub_17A32D0(*v12, (int *)&v213, (__int64)v198, nullptr, 1, 0);
                                LOBYTE(v182) = a3 != 0;
                                v188 = 0;
                              }
                              else
                              {
                                LOBYTE(v182) = a3 != 0;
                                v188 = 0;
                              }
                            }
LABEL_106:
                            v120 = v199[0];
                            if ( (*((_BYTE *)v199[0] + 31) & 8) != 0 )
                            {
                              v154 = *((__int64 **)v199[0] + 15);
                              v155 = &v154[(unsigned int)sub_B76070((__int64)v199[0], v90, v118, v119)];
                              if ( v155 != v154 )
                              {
                                v156 = v155;
                                v157 = v154;
                                v195 = v15;
                                do
                                {
                                  v158 = *v157;
                                  if ( sub_B74820(*v157) )
                                  {
                                    v90 = v13[16];
                                    if ( (unsigned __int8)sub_1DC3F20(*v12, v90, v158, v12[4], 0, v89, a6) )
                                    {
                                      v159 = (_QWORD *)sub_B74810(v158);
                                      v160 = *v12;
                                      v161 = v159[1];
                                      v232[0] = v159;
                                      v178 = v160;
                                      v194 = v161;
                                      v191 = sub_EEC140((unsigned __int64)v159);
                                      v162 = sub_EEB7E0((unsigned __int64)v159, v90, *(double *)v89.m128_u64);
                                      v90 = v162;
                                      v163 = sub_18C4330(v178, v162, v191, v232, 1, v194);
                                      if ( v163 > 1 )
                                      {
                                        v90 = v163 & 0xFFFFFFFFFFFFFFFELL;
                                        sub_B74780(v158, v163 & 0xFFFFFFFFFFFFFFFELL);
                                      }
                                    }
                                  }
                                  ++v157;
                                }
                                while ( v156 != v157 );
                                v15 = v195;
                              }
                              v120 = v199[0];
                            }
                            v121 = *v12;
                            v122 = sub_B726C0((__int64)v120, v90, v118, v119);
                            v123 = 0;
                            sub_17F3F10(
                              v121,
                              0,
                              v199[0],
                              (__int64)&v213,
                              v188,
                              v122,
                              (__m128i)v89,
                              *(double *)a6.m128_u64);
                            if ( (_BYTE)v182 )
                            {
                              if ( v176 )
                              {
                                v124 = *((_QWORD *)v15 + 8);
                                if ( (((unsigned __int8)v124 | (unsigned __int8)(v124 >> 1)) & 1) == 0
                                  && (v124 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                                {
                                  v126 = *v12;
                                  v127 = (unsigned __int8)sub_B726C0((__int64)v199[0], 0, v124, v125) == 0;
                                  v129 = *((_QWORD *)v15 + 8);
                                  if ( (((unsigned __int8)v129 | (unsigned __int8)(v129 >> 1)) & 1) != 0 )
                                    BUG();
                                  v123 = a3;
                                  sub_1CBDF60(
                                    v126,
                                    a3,
                                    *(_QWORD *)((v129 & 0xFFFFFFFFFFFFFFFCLL) + 56),
                                    (unsigned int)!v127 + 4,
                                    0,
                                    v128,
                                    v89);
                                }
                                goto LABEL_113;
                              }
                            }
                            else if ( v176 )
                            {
LABEL_113:
                              if ( (unsigned __int8)sub_B726C0((__int64)v13, v123, v124, v125) )
                              {
                                if ( sub_B8C400((__int64)v199[0], 0) )
                                {
                                  v166 = sub_B77930((__int64)v199[0]);
                                  if ( v166 )
                                  {
                                    if ( !*(_DWORD *)(v166 + 8) )
                                    {
                                      LODWORD(v232[0]) = v13[6];
                                      *(_DWORD *)(v166 + 8) = v232[0];
                                      sub_1E0AE40((_QWORD *)(*v12 + 15600), (__int64 *)v199, v232);
                                    }
                                  }
                                }
                              }
                            }
                            if ( (*((_BYTE *)v13 + 83) & 4) == 0
                              || (v24 = nullptr,
                                  !(unsigned __int8)sub_1E39900(
                                                      (__int64)v12,
                                                      (unsigned __int64)v199[0],
                                                      (__int64)v13,
                                                      v89,
                                                      a6,
                                                      a7)) )
                            {
                              if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v13 + 32LL))(v13)
                                             + 82)
                                  & 0x40) != 0 )
                              {
                                v134 = 0;
                                if ( (*((_BYTE *)v13 + 83) & 8) != 0 )
                                {
                                  v135 = *((unsigned int **)v13 + 16);
                                  if ( *((_BYTE *)v135 + 4) )
                                    v134 = *(_QWORD *)&v135[2 * *v135 + 2];
                                }
                                sub_1869020(*v12, (__int64)v199[0], v13[6], v134);
                              }
                              if ( !a3 )
                                v15 = v199[0];
                              if ( v176
                                || (v136 = v199[0], (*((_BYTE *)v199[0] + 31) & 8) != 0)
                                && !sub_AEADA0((__int64 *)v199[0] + 13) )
                              {
                                sub_B94A80((__int64)v198, (__int64)v15, v130, v131, v132, v133);
                                v136 = v199[0];
                              }
                              if ( (unsigned int)sub_B77890((__int64)v136) )
                              {
                                if ( ((*((_BYTE *)v198 + 8) + 70) & 0x7Fu) > 3 )
                                {
                                  v137 = v15[15];
                                  v138 = v137 & 0x3FFF;
                                  if ( (v137 & 0x20) != 0 )
                                  {
                                    HIBYTE(v138) |= 4u;
                                    v15[15] = v138 | v137 & 0xC000;
                                  }
                                }
                              }
                              v24 = (unsigned int *)v199[0];
                            }
LABEL_129:
                            sub_169D230((__int64)&v213);
LABEL_85:
                            if ( v202 != v204 )
                              free(v202);
                            goto LABEL_87;
                          }
                          sub_1A48440(*v12, (__int64)&v213, (__int64)v198, 0);
                          v151 = *v12;
                          v152 = v12[4];
                          v153 = v183->m128i_i64[0];
                          v232[1] = (void *)0x800000000LL;
                          v232[0] = ptr;
                          v235 = v153;
                          if ( (unsigned __int8)sub_1DD74F0(
                                                  v151,
                                                  v183 + 1,
                                                  v183->m128i_u32[2],
                                                  v152,
                                                  (__int64)v232,
                                                  (__m128)0LL,
                                                  a6) )
                          {
                            if ( v232[0] != ptr )
                              free(v232[0]);
                            goto LABEL_129;
                          }
                          v90 = (unsigned __int64)v199[0];
                          if ( !(unsigned __int8)sub_1CC2B70(
                                                   (__int64 *)*v12,
                                                   (__int64)v199[0],
                                                   (__int64 *)v232,
                                                   (__int64)&v213,
                                                   0,
                                                   0.0,
                                                   a6) )
                          {
LABEL_103:
                            if ( v232[0] != ptr )
                              free(v232[0]);
                            v188 = 1;
                            LOBYTE(v182) = a3 != 0;
                            goto LABEL_106;
                          }
                        }
                        v90 = 1;
                        sub_B88650((__int64)v199[0], 1);
                        goto LABEL_103;
                      }
                    }
                    v88 = 9;
                    goto LABEL_63;
                  }
                }
                else
                {
                  v111 = v199[0];
                  v112 = (unsigned int)sub_BC1D90(
                                         *(_QWORD **)(v74 + 248),
                                         *(const __m128i **)(*(_QWORD *)v12[4] + 8LL),
                                         *(_QWORD *)(*(_QWORD *)v12[4] + 16LL),
                                         v74,
                                         0,
                                         v75);
                  v113 = sub_B8C330((__int64)v111);
                  sub_B77BD0((__int64)v111, v113, (__int64)v15, v112, 0, 1, 0, 0);
                }
                if ( !v176 )
                  goto LABEL_58;
                goto LABEL_137;
              }
LABEL_133:
              v55 = *(_QWORD **)(*v12 + 544);
              goto LABEL_46;
            }
LABEL_132:
            if ( (*((_BYTE *)v13 + 31) & 8) == 0 )
              goto LABEL_46;
            goto LABEL_133;
          }
LABEL_151:
          v198 = (unsigned int *)v12[3];
          sub_17A42D0((unsigned __int64 *)&v198);
          goto LABEL_36;
        }
        v147 = v150 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_150;
      }
    }
    v24 = nullptr;
    goto LABEL_85;
  }
  return v24;
}
