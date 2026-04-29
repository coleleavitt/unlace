__int64 __fastcall sub_21E40(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        void **a4,
        __int64 a5,
        double a6,
        __m128i item_end,
        double a8,
        __m128 a9)
{
  char v10; // al
  char v11; // bl
  void *v12; // rbp
  __int64 v13; // rdx
  void (__fastcall **v14)(__m128i *, __int64, __int64); // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v18; // xmm0
  _BYTE *v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rbx
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 *v29; // rbp
  __int64 v30; // rdx
  __int64 *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rsi
  int *v34; // r12
  int *v35; // r15
  __int64 v36; // rbp
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rbp
  __int64 v40; // r15
  __int64 v41; // r13
  __int64 v42; // r12
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r12
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r8
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // r15
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 j; // r12
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 func; // rsi
  _QWORD *v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rbx
  void *v66; // rax
  __m128i v67; // xmm0
  const char *v68; // rdx
  void *v69; // rax
  bool v70; // zf
  __m128i v71; // xmm0
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // rbx
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 i; // rbp
  __int64 v79; // rdx
  __int64 v80; // rdi
  void *v81; // rax
  __m128 v82; // xmm0
  char *v83; // rbx
  __int64 v84; // rbp
  void *v85; // r12
  void *v86; // r13
  void *v87; // rax
  __m128i v88; // xmm0
  _QWORD *v89; // rbp
  __int64 (__fastcall **v90)(__int64); // rax
  __int64 v91; // r12
  __int64 v92; // rbx
  __m128 v93; // xmm0
  void *v94; // rax
  __m128i v95; // xmm0
  const __m128i *v96; // rbp
  const __m128i *v97; // r12
  void *k; // rdi
  __m128 si128; // xmm0
  unsigned __int64 v100; // r13
  char v101; // al
  _QWORD *v102; // rax
  unsigned __int64 v103; // r15
  _QWORD *v104; // rdx
  __int64 v105; // rsi
  int flags; // eax
  __int64 strid; // rax
  const char *m; // rdi
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // rbx
  __m128 v112; // xmm0
  unsigned __int64 v113; // r13
  __int64 v114; // rsi
  _QWORD *v115; // rcx
  _QWORD *v116; // rax
  __m128i *v117; // rbp
  unsigned __int64 v118; // r12
  __int128 v119; // kr00_16
  __int64 v120; // rax
  void *v121; // rax
  __m128i v122; // xmm0
  unsigned __int64 v123; // rax
  __m128i *v124; // r12
  __int64 v125; // rbp
  unsigned __int64 v126; // rbp
  unsigned __int64 v127; // r15
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int128 v130; // kr10_16
  __int64 v131; // rax
  __int64 v132; // rdi
  __int64 (__fastcall *v133)(__int64); // rax
  char v134; // al
  char v135; // bp
  __int64 v136; // r8
  unsigned __int64 v137; // rdx
  __int64 v138; // rsi
  unsigned __int64 v139; // rbp
  __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 (__fastcall *v142)(__int64); // rax
  unsigned int v143; // eax
  __int64 v144; // r13
  void **v145; // r8
  void ***v146; // rax
  void ***v147; // rcx
  __m128 v148; // xmm0
  void **v149; // r8
  unsigned __int64 v150; // r15
  char v151; // r9
  void ***v152; // rax
  void ***v153; // rcx
  __int64 v154; // rsi
  __m128i v155; // xmm0
  __int64 v156; // [rsp+0h] [rbp-528h]
  char v157; // [rsp+0h] [rbp-528h]
  unsigned __int64 v158; // [rsp+0h] [rbp-528h]
  __int64 v159; // [rsp+8h] [rbp-520h]
  __int64 v160; // [rsp+8h] [rbp-520h]
  __m128 v161; // [rsp+10h] [rbp-518h] BYREF
  void **v162; // [rsp+20h] [rbp-508h]
  __int64 v163; // [rsp+28h] [rbp-500h]
  void **v164; // [rsp+30h] [rbp-4F8h]
  _BYTE *v165; // [rsp+38h] [rbp-4F0h]
  _BYTE *v166; // [rsp+40h] [rbp-4E8h]
  void **p_src; // [rsp+48h] [rbp-4E0h]
  __m128i *v168; // [rsp+50h] [rbp-4D8h]
  __int64 v169; // [rsp+58h] [rbp-4D0h]
  __m128i v170; // [rsp+60h] [rbp-4C8h] BYREF
  _QWORD v171[2]; // [rsp+70h] [rbp-4B8h] BYREF
  __m128i v172; // [rsp+80h] [rbp-4A8h] BYREF
  __int64 v173; // [rsp+90h] [rbp-498h] BYREF
  __int128 v174; // [rsp+98h] [rbp-490h]
  __int64 v175; // [rsp+B0h] [rbp-478h] BYREF
  __int128 v176; // [rsp+B8h] [rbp-470h]
  __int64 v177; // [rsp+D0h] [rbp-458h] BYREF
  __int128 v178; // [rsp+D8h] [rbp-450h]
  __int64 v179; // [rsp+F0h] [rbp-438h] BYREF
  __int128 v180; // [rsp+F8h] [rbp-430h]
  _BYTE v181[24]; // [rsp+110h] [rbp-418h] BYREF
  _BYTE v182[24]; // [rsp+130h] [rbp-3F8h] BYREF
  __m128i v183; // [rsp+150h] [rbp-3D8h] BYREF
  char v184; // [rsp+168h] [rbp-3C0h]
  __int64 v185; // [rsp+170h] [rbp-3B8h] BYREF
  __int128 v186; // [rsp+178h] [rbp-3B0h]
  unsigned __int64 v187; // [rsp+188h] [rbp-3A0h]
  __int64 v188; // [rsp+190h] [rbp-398h] BYREF
  __int128 v189; // [rsp+198h] [rbp-390h]
  unsigned __int64 v190; // [rsp+1A8h] [rbp-380h]
  __int64 v191; // [rsp+1B0h] [rbp-378h] BYREF
  __int128 v192; // [rsp+1B8h] [rbp-370h]
  unsigned __int64 v193; // [rsp+1C8h] [rbp-360h]
  __int64 v194; // [rsp+1D0h] [rbp-358h] BYREF
  __int128 v195; // [rsp+1D8h] [rbp-350h]
  unsigned __int64 v196; // [rsp+1E8h] [rbp-340h]
  const __m128i *v197; // [rsp+1F0h] [rbp-338h] BYREF
  __int128 v198; // [rsp+1F8h] [rbp-330h]
  __int64 v199; // [rsp+208h] [rbp-320h]
  int v200; // [rsp+210h] [rbp-318h]
  __int64 v201; // [rsp+220h] [rbp-308h] BYREF
  __int128 v202; // [rsp+228h] [rbp-300h]
  __int64 v203; // [rsp+238h] [rbp-2F0h]
  int v204; // [rsp+240h] [rbp-2E8h]
  _BYTE v205[24]; // [rsp+250h] [rbp-2D8h] BYREF
  char v206; // [rsp+268h] [rbp-2C0h]
  unsigned __int64 v207; // [rsp+270h] [rbp-2B8h]
  char v208; // [rsp+278h] [rbp-2B0h]
  char v209; // [rsp+280h] [rbp-2A8h]
  void *v210; // [rsp+290h] [rbp-298h] BYREF
  __m256i v211; // [rsp+298h] [rbp-290h] BYREF
  unsigned __int64 v212; // [rsp+2B8h] [rbp-270h]
  char v213; // [rsp+2C0h] [rbp-268h]
  char v214; // [rsp+2C8h] [rbp-260h]
  void *src; // [rsp+2D0h] [rbp-258h] BYREF
  __int64 v216; // [rsp+2D8h] [rbp-250h] BYREF
  __m128i v217; // [rsp+2E0h] [rbp-248h] BYREF
  __int64 v218; // [rsp+2F8h] [rbp-230h] BYREF
  __m128 v219; // [rsp+300h] [rbp-228h]
  __int64 *v220; // [rsp+310h] [rbp-218h]
  unsigned __int64 v221; // [rsp+318h] [rbp-210h]
  __int64 v222; // [rsp+320h] [rbp-208h]
  __m128i *v223; // [rsp+328h] [rbp-200h]
  __int128 v224; // [rsp+330h] [rbp-1F8h] BYREF
  char v225; // [rsp+340h] [rbp-1E8h]
  int v226; // [rsp+350h] [rbp-1D8h] BYREF
  __int64 v227; // [rsp+358h] [rbp-1D0h]
  int *v228; // [rsp+360h] [rbp-1C8h]
  int *v229; // [rsp+368h] [rbp-1C0h]
  __int64 v230; // [rsp+370h] [rbp-1B8h]
  __int64 v231; // [rsp+380h] [rbp-1A8h] BYREF
  __int64 v232; // [rsp+388h] [rbp-1A0h]
  __int64 *v233; // [rsp+390h] [rbp-198h]
  __int64 *v234; // [rsp+398h] [rbp-190h]
  __int64 v235; // [rsp+3A0h] [rbp-188h]
  int v236; // [rsp+3B0h] [rbp-178h] BYREF
  __int64 v237; // [rsp+3B8h] [rbp-170h]
  int *v238; // [rsp+3C0h] [rbp-168h]
  int *v239; // [rsp+3C8h] [rbp-160h]
  __int64 v240; // [rsp+3D0h] [rbp-158h]
  int v241; // [rsp+3E0h] [rbp-148h] BYREF
  __int64 v242; // [rsp+3E8h] [rbp-140h]
  int *v243; // [rsp+3F0h] [rbp-138h]
  int *v244; // [rsp+3F8h] [rbp-130h]
  __int64 v245; // [rsp+400h] [rbp-128h]
  int v246; // [rsp+410h] [rbp-118h] BYREF
  __int64 v247; // [rsp+418h] [rbp-110h]
  int *v248; // [rsp+420h] [rbp-108h]
  int *v249; // [rsp+428h] [rbp-100h]
  __int64 v250; // [rsp+430h] [rbp-F8h]
  _QWORD *v251; // [rsp+438h] [rbp-F0h]
  __int64 v252; // [rsp+440h] [rbp-E8h]
  __int64 v253; // [rsp+448h] [rbp-E0h]
  __int64 v254; // [rsp+450h] [rbp-D8h]
  int v255; // [rsp+458h] [rbp-D0h]
  __int64 v256; // [rsp+460h] [rbp-C8h]
  _QWORD v257[5]; // [rsp+468h] [rbp-C0h] BYREF
  int v258; // [rsp+490h] [rbp-98h]
  __int64 v259; // [rsp+498h] [rbp-90h]
  _QWORD v260[5]; // [rsp+4A0h] [rbp-88h] BYREF
  int v261; // [rsp+4C8h] [rbp-60h]
  __int64 v262; // [rsp+4D0h] [rbp-58h]
  _QWORD v263[10]; // [rsp+4D8h] [rbp-50h] BYREF

  v163 = a2;
  v165 = a3;
  v164 = a4;
  v166 = (_BYTE *)a5;
  v263[2] = __readfsqword(0x28u);
  v10 = sub_2FD00(a5);
  if ( v10 == -1 )
  {
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v11 = v10;
  v12 = *v164;
  v13 = (**((__int64 (__fastcall ***)(__int64))*v164 + 5))((__int64)*v164 + 40);
  v14 = *((void (__fastcall ***)(__m128i *, __int64, __int64))v12 + 7);
  v168 = &v183;
  (*v14)(&v183, (__int64)v12 + 56, v13);
  if ( v184 )
  {
    v15 = v183.m128i_i64[0];
    *(_BYTE *)(a1 + 24) = 1;
    v16 = _mm_loadu_si128((const __m128i *)&v183.m128i_u64[1]);
    *(_QWORD *)a1 = v15;
    *(__m128i *)(a1 + 8) = v16;
    return a1;
  }
  v18 = _mm_load_si128(&v183);
  v19 = v166;
  v185 = 0;
  v187 = 0;
  v170 = v18;
  v186 = 0;
  if ( v166 == (_BYTE *)-1LL )
  {
    v188 = 0;
    v20 = 0;
    v21 = 0;
    v190 = 0;
    v191 = 0;
    v193 = 0;
    v189 = 0;
    v192 = 0;
  }
  else
  {
    v185 = qvector_reserve(&v185, 0, 1, 8);
    *(_QWORD *)(v185 + 8 * v186) = v166;
    *(_QWORD *)&v186 = v186 + 1;
    v188 = 0;
    v190 = 0;
    v189 = 0;
    v188 = qvector_reserve(&v188, 0, 1, 8);
    *(_QWORD *)(v188 + 8 * v189) = v19;
    *(_QWORD *)&v189 = v189 + 1;
    v191 = 0;
    v193 = 0;
    v192 = 0;
    v191 = qvector_reserve(&v191, 0, 1, 8);
    *(_QWORD *)(v191 + 8 * v192) = v166;
    v21 = v187;
    *(_QWORD *)&v192 = v192 + 1;
    v20 = v186;
  }
  v194 = 0;
  p_src = &src;
  v161.m128_u64[0] = (unsigned __int64)&v173;
  v196 = 0;
  v173 = 0;
  v162 = (void **)&v191;
  v195 = 0;
  v174 = 0;
  while ( v21 < v20 )
  {
    v187 = v21 + 1;
    sub_30660(p_src, *(_QWORD *)(v185 + 8 * v21));
    if ( !(_BYTE)v243 )
    {
      v68 = "catch handler";
      if ( v187 == 1 )
        v68 = "main function";
      sub_19A90((__int64)&v210, (__int64)"no metadata for %s", v68);
      v69 = v210;
      v70 = (_BYTE)v243 == 0;
      *(_BYTE *)(a1 + 24) = 1;
      v71 = _mm_loadu_si128((const __m128i *)&v211);
      *(_QWORD *)a1 = v69;
      *(__m128i *)(a1 + 8) = v71;
      if ( !v70 )
      {
        LOBYTE(v243) = 0;
        if ( v234 )
        {
          v235 = 0;
          qfree(v234);
        }
        v72 = v231;
        if ( v231 )
        {
          v73 = v232;
          if ( v232 )
          {
            v74 = 0;
            do
            {
              v75 = v72 + 40 * v74;
              v76 = *(_QWORD *)(v75 + 16);
              if ( v76 )
              {
                v77 = *(_QWORD *)(v75 + 24);
                if ( v77 )
                {
                  for ( i = 0; i != v77; ++i )
                  {
                    v79 = v76 + 72 * i;
                    v80 = *(_QWORD *)(v79 + 32);
                    if ( v80 )
                    {
                      *(_QWORD *)(v79 + 40) = 0;
                      qfree(v80);
                      v76 = *(_QWORD *)(v75 + 16);
                    }
                  }
                }
                *(_QWORD *)(v75 + 24) = 0;
                qfree(v76);
                v72 = v231;
              }
              ++v74;
            }
            while ( v73 != v74 );
          }
          v232 = 0;
          qfree(v72);
        }
        if ( v229 )
        {
          v230 = 0;
          qfree(v229);
        }
        if ( v218 )
        {
          v219.m128_u64[0] = 0;
          qfree(v218);
        }
      }
      goto LABEL_124;
    }
    v28 = v224;
    if ( BYTE8(v224) && (_QWORD)v224 != -1 )
    {
      v63 = (_QWORD *)(v191 + 8 * v192);
      if ( (_QWORD *)v191 == v63 )
        goto LABEL_109;
      v64 = (_QWORD *)v191;
      while ( (_QWORD)v224 != *v64 )
      {
        if ( v63 == ++v64 )
          goto LABEL_109;
      }
      if ( v63 == v64 )
      {
LABEL_109:
        if ( *((_QWORD *)&v192 + 1) < (unsigned __int64)(v192 + 1) )
        {
          v191 = qvector_reserve(&v191, v191, v192 + 1, 8);
          v63 = (_QWORD *)(v191 + 8 * v192);
        }
        *v63 = v28;
        *(_QWORD *)&v192 = v192 + 1;
      }
    }
    v29 = v234;
    v30 = v174;
    v31 = &v234[2 * v235];
    if ( v234 != v31 )
    {
      do
      {
        v32 = *v29;
        v33 = v173;
        if ( *((_QWORD *)&v174 + 1) < (unsigned __int64)(v30 + 1) )
        {
          v173 = qvector_reserve(v161.m128_u64[0], v173, v30 + 1, 8);
          v30 = v174;
          v33 = v173;
        }
        *(_QWORD *)(v33 + 8 * v30) = v32;
        v29 += 2;
        v30 = v174 + 1;
        *(_QWORD *)&v174 = v174 + 1;
      }
      while ( v31 != v29 );
    }
    v34 = v229;
    v35 = &v229[8 * v230];
    if ( v35 != v229 )
    {
      do
      {
        v36 = *((_QWORD *)v34 + 2);
        if ( v36 != -1 )
        {
          v37 = (_QWORD *)(v191 + 8 * v192);
          if ( (_QWORD *)v191 == v37 )
            goto LABEL_80;
          v38 = (_QWORD *)v191;
          while ( v36 != *v38 )
          {
            if ( v37 == ++v38 )
              goto LABEL_80;
          }
          if ( v37 == v38 )
          {
LABEL_80:
            if ( *((_QWORD *)&v192 + 1) < (unsigned __int64)(v192 + 1) )
            {
              v191 = qvector_reserve(v162, v191, v192 + 1, 8);
              v37 = (_QWORD *)(v191 + 8 * v192);
            }
            *v37 = v36;
            *(_QWORD *)&v192 = v192 + 1;
          }
        }
        v34 += 8;
      }
      while ( v34 != v35 );
    }
    v39 = v231;
    v156 = v231 + 40 * v232;
    if ( v156 != v231 )
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)(v39 + 16);
        v41 = v40 + 72LL * *(_QWORD *)(v39 + 24);
        if ( v41 != v40 )
          break;
LABEL_57:
        v39 += 40;
        if ( v39 == v156 )
          goto LABEL_58;
      }
      while ( 2 )
      {
        v42 = *(_QWORD *)(v40 + 16);
        if ( v42 != -1 )
        {
          v43 = (_QWORD *)(v194 + 8 * v195);
          if ( (_QWORD *)v194 == v43 )
            goto LABEL_60;
          v44 = (_QWORD *)v194;
          while ( v42 != *v44 )
          {
            if ( v43 == ++v44 )
              goto LABEL_60;
          }
          if ( v43 == v44 )
          {
LABEL_60:
            if ( *((_QWORD *)&v195 + 1) < (unsigned __int64)(v195 + 1) )
            {
              v194 = qvector_reserve(&v194, v194, v195 + 1, 8);
              v43 = (_QWORD *)(v194 + 8 * v195);
            }
            *v43 = v42;
            *(_QWORD *)&v195 = v195 + 1;
          }
        }
        v45 = *(_QWORD *)(v40 + 8);
        if ( v45 != -1 )
        {
          v46 = (_QWORD *)(v191 + 8 * v192);
          if ( (_QWORD *)v191 != v46 )
          {
            v47 = (_QWORD *)v191;
            while ( v45 != *v47 )
            {
              if ( v46 == ++v47 )
                goto LABEL_76;
            }
            if ( v46 != v47 )
            {
LABEL_50:
              v48 = (_QWORD *)(v188 + 8 * v189);
              if ( (_QWORD *)v188 != v48 )
              {
                v49 = (_QWORD *)v188;
                while ( *v49 != v45 )
                {
                  if ( v48 == ++v49 )
                    goto LABEL_63;
                }
                if ( v48 != v49 )
                  break;
              }
LABEL_63:
              if ( *((_QWORD *)&v189 + 1) < (unsigned __int64)(v189 + 1) )
              {
                v188 = qvector_reserve(&v188, v188, v189 + 1, 8);
                v48 = (_QWORD *)(v188 + 8 * v189);
              }
              *v48 = v45;
              *(_QWORD *)&v189 = v189 + 1;
              if ( v11 == 4 )
              {
LABEL_66:
                if ( (unsigned __int8)sub_2FD00(*(_QWORD *)(v40 + 8)) != 0xFF )
                {
                  v50 = *(_QWORD *)(v40 + 8);
                  if ( v50 != -1 )
                  {
                    v51 = (_QWORD *)(v185 + 8 * v186);
                    if ( (_QWORD *)v185 == v51 )
                      goto LABEL_73;
                    v52 = (_QWORD *)v185;
                    while ( v50 != *v52 )
                    {
                      if ( v51 == ++v52 )
                        goto LABEL_73;
                    }
                    if ( v51 == v52 )
                    {
LABEL_73:
                      if ( *((_QWORD *)&v186 + 1) < (unsigned __int64)(v186 + 1) )
                      {
                        v169 = *(_QWORD *)(v40 + 8);
                        v185 = qvector_reserve(&v185, v185, v186 + 1, 8);
                        v50 = v169;
                        v51 = (_QWORD *)(v185 + 8 * v186);
                      }
                      *v51 = v50;
                      *(_QWORD *)&v186 = v186 + 1;
                    }
                  }
                }
              }
LABEL_56:
              v40 += 72;
              if ( v40 == v41 )
                goto LABEL_57;
              continue;
            }
          }
LABEL_76:
          if ( *((_QWORD *)&v192 + 1) < (unsigned __int64)(v192 + 1) )
          {
            v191 = qvector_reserve(v162, v191, v192 + 1, 8);
            v46 = (_QWORD *)(v191 + 8 * v192);
          }
          *v46 = v45;
          *(_QWORD *)&v192 = v192 + 1;
          v45 = *(_QWORD *)(v40 + 8);
          if ( v45 != -1 )
            goto LABEL_50;
        }
        break;
      }
      if ( v11 == 4 )
        goto LABEL_66;
      goto LABEL_56;
    }
LABEL_58:
    if ( (_BYTE)v243 )
    {
      LOBYTE(v243) = 0;
      if ( v234 )
      {
        v235 = 0;
        qfree(v234);
      }
      v53 = v231;
      if ( v231 )
      {
        v54 = v232;
        if ( v232 )
        {
          v157 = v11;
          v55 = 0;
          do
          {
            v56 = v53 + 40 * v55;
            v57 = *(_QWORD *)(v56 + 16);
            if ( v57 )
            {
              v58 = *(_QWORD *)(v56 + 24);
              if ( v58 )
              {
                for ( j = 0; j != v58; ++j )
                {
                  v60 = v57 + 72 * j;
                  v61 = *(_QWORD *)(v60 + 32);
                  if ( v61 )
                  {
                    *(_QWORD *)(v60 + 40) = 0;
                    qfree(v61);
                    v57 = *(_QWORD *)(v56 + 16);
                  }
                }
              }
              *(_QWORD *)(v56 + 24) = 0;
              qfree(v57);
              v53 = v231;
            }
            ++v55;
          }
          while ( v54 != v55 );
          v11 = v157;
        }
        v232 = 0;
        qfree(v53);
      }
      if ( v229 )
      {
        v230 = 0;
        qfree(v229);
      }
      if ( v218 )
      {
        v219.m128_u64[0] = 0;
        qfree(v218);
      }
    }
    v21 = v187;
    v20 = v186;
  }
  v197 = nullptr;
  v199 = 0;
  v200 = -1;
  v198 = 0;
  while ( 1 )
  {
    v22 = v193;
    if ( v193 >= (unsigned __int64)v192 )
      break;
    ++v193;
    func = get_func(*(_QWORD *)(v191 + 8 * v22));
    if ( func )
    {
      get_func_ranges(&v197, func);
    }
    else
    {
      if ( v193 == 1 )
      {
        sub_19A90((__int64)&src, (__int64)"no function for main function");
        v66 = src;
        *(_BYTE *)(a1 + 24) = 1;
        v67 = _mm_loadu_si128((const __m128i *)&v216);
        *(_QWORD *)a1 = v66;
        *(__m128i *)(a1 + 8) = v67;
        goto LABEL_122;
      }
      sub_BD80(
        (__int64)"collect_metadata_ranges(%a): no function for handler %a, skipping\n",
        0.0,
        *(double *)item_end.m128i_i64);
    }
  }
  v201 = 0;
  v203 = 0;
  v204 = -1;
  v202 = 0;
  while ( 1 )
  {
    v23 = v190;
    if ( v190 >= (unsigned __int64)v189 )
      break;
    ++v190;
    sub_2FE60(&src, *(_QWORD *)(v188 + 8 * v23));
    v65 = v216;
    if ( (_BYTE)v218 )
    {
      v81 = src;
      v82 = _mm_loadh_ps((const double *)v217.m128i_i64);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v81;
      *(__m128 *)(a1 + 8) = v82;
      goto LABEL_163;
    }
    v210 = nullptr;
    *(_OWORD *)v211.m256i_i8 = 0;
    if ( v216 )
    {
      v210 = (void *)qalloc_or_throw(16 * v216);
      v211.m256i_i64[1] = v65;
      memcpy(v210, src, 16 * v65);
      v211.m256i_i64[0] = v65;
    }
    v211.m256i_i64[2] = 0;
    v211.m256i_i32[6] = -1;
    rangeset_t_add2(&v201, &v210);
    if ( v210 )
    {
      v211.m256i_i64[0] = 0;
      qfree(v210);
    }
    if ( (_BYTE)v218 )
    {
      if ( src )
        goto LABEL_119;
    }
    else if ( src )
    {
LABEL_119:
      v216 = 0;
      qfree(src);
    }
  }
  v24 = (unsigned __int64 *)v173;
  v25 = (unsigned __int64 *)(v173 + 8 * v174);
  if ( v25 != (unsigned __int64 *)v173 )
  {
    do
    {
      v26 = *v24;
      v27 = get_func(*v24);
      if ( v27 )
      {
        get_func_ranges(&v197, v27);
      }
      else
      {
        item_end = (__m128i)(unsigned __int64)get_item_end(v26);
        *(__m128i *)v182 = _mm_unpacklo_epi64((__m128i)v26, item_end);
        rangeset_t_add(&v197, v182);
      }
      ++v24;
    }
    while ( v25 != v24 );
  }
  rangeset_t_add(v165, &v170);
  v83 = (char *)v170.m128i_i64[0];
  v84 = 0;
  v85 = v164[11];
  if ( v170.m128i_i64[0] == v170.m128i_i64[1] )
    goto LABEL_171;
  while ( 1 )
  {
    v86 = (void *)sub_73440(v85, v83);
    v159 = sub_73440(v85, v83 + 4);
    sub_73440(v85, v83 + 8);
    v210 = v86;
    v211.m256i_i64[0] = v159;
    if ( (unsigned __int8)rangeset_t_has_common(&v201, &v210, 0) )
    {
      src = v83;
      v216 = (__int64)(v83 + 12);
      rangeset_t_sub(v165, &src);
      ++v84;
    }
    if ( (char *)v170.m128i_i64[1] == v83 + 12 )
      break;
    v83 += 12;
  }
  if ( !v84 )
  {
LABEL_171:
    sub_19A90((__int64)&src, (__int64)"no relevant RUNTIME_FUNCTION entries");
    v87 = src;
    v88 = _mm_loadu_si128((const __m128i *)&v216);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v87;
    *(__m128i *)(a1 + 8) = v88;
    goto LABEL_163;
  }
  v171[0] = off_8BF78;
  v171[1] = v163;
  v90 = *((__int64 (__fastcall ***)(__int64))*v164 + 5);
  v91 = (__int64)*v164 + 40;
  src = *v164;
  v89 = src;
  v92 = (*v90)(v91);
  v216 = v92;
  (*(void (__fastcall **)(void **, __int64, __int64))(v89[5] + 16LL))(&v210, v91, v92);
  v217 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_8BAC8, (__m128i)(unsigned __int64)v171);
  if ( v211.m256i_i64[1] )
  {
    v93 = _mm_loadh_ps((const double *)&v211.m256i_i64[2]);
    LODWORD(v218) = v211.m256i_i32[0];
    v219 = v93;
    v220 = (__int64 *)v211.m256i_i64[3];
    *(_QWORD *)(v211.m256i_i64[1] + 8) = &v218;
    v211.m256i_i64[1] = 0;
    v221 = v212;
    v211.m256i_i64[2] = (__int64)&v211;
    v211.m256i_i64[3] = (__int64)&v211;
    v212 = 0;
  }
  else
  {
    LODWORD(v218) = 0;
    v219.m128_u64[0] = 0;
    v219.m128_u64[1] = (unsigned __int64)&v218;
    v220 = &v218;
    v221 = 0;
  }
  v222 = v92;
  v217.m128i_i64[0] = (__int64)off_8BF38;
  sub_21900(nullptr);
  v223 = &v217;
  v228 = &v226;
  v229 = &v226;
  v233 = &v231;
  v234 = &v231;
  v238 = &v236;
  v239 = &v236;
  v243 = &v241;
  v244 = &v241;
  v248 = &v246;
  v249 = &v246;
  v251 = v257;
  v224 = -1;
  v162 = &src;
  v225 = 0;
  v226 = 0;
  v227 = 0;
  v230 = 0;
  LODWORD(v231) = 0;
  v232 = 0;
  v235 = 0;
  v236 = 0;
  v237 = 0;
  v240 = 0;
  v241 = 0;
  v242 = 0;
  v245 = 0;
  v246 = 0;
  v247 = 0;
  v250 = 0;
  v252 = 1;
  v253 = 0;
  v254 = 0;
  v257[1] = v260;
  v256 = 0;
  v257[0] = 0;
  v257[2] = 1;
  v257[3] = 0;
  v257[4] = 0;
  v259 = 0;
  v260[0] = 0;
  v260[1] = v263;
  v260[2] = 1;
  v260[3] = 0;
  v260[4] = 0;
  v262 = 0;
  v263[0] = 0;
  v255 = 1065353216;
  v258 = 1065353216;
  v261 = 1065353216;
  sub_53D00(&v210, &src, 0, v165);
  if ( v211.m256i_i8[16] )
  {
    v94 = v210;
    *(_BYTE *)(a1 + 24) = 1;
    v95 = _mm_loadu_si128((const __m128i *)&v211);
    *(_QWORD *)a1 = v94;
    *(__m128i *)(a1 + 8) = v95;
    goto LABEL_177;
  }
  rangeset_t_add2(v163, &v197);
  rangeset_t_add(v163, &v170);
  v96 = v197;
  v175 = 0;
  v210 = nullptr;
  v97 = &v197[v198];
  v211.m256i_i64[0] = 0xFFFFFFFFLL;
  v211.m256i_i64[3] = -1;
  memset(v205, 0, sizeof(v205));
  v176 = 0;
  *(_OWORD *)&v211.m256i_u64[1] = 0;
  if ( v197 != v97 )
  {
    for ( k = nullptr; ; k = v210 )
    {
      si128 = (__m128)_mm_loadu_si128(v96);
      a9 = _mm_movehl_ps(a9, si128);
      v100 = si128.m128_u64[0];
      v211.m256i_i64[3] = si128.m128_u64[0];
      if ( k )
      {
        v161 = si128;
        lock_func_range(k, 0);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v161);
      }
      v210 = nullptr;
      v211.m256i_i32[0] = -1;
      v101 = v100 < a9.m128_u64[0];
      *(__m128 *)&v211.m256i_u64[1] = si128;
      while ( v101 )
      {
        if ( (unsigned __int8)xrefblk_t_first_from(v182, v211.m256i_i64[3], 9) )
        {
          do
          {
            v102 = (_QWORD *)v175;
            v103 = *(_QWORD *)&v182[8];
            v104 = (_QWORD *)(v175 + 8 * v176);
            if ( (_QWORD *)v175 != v104 )
            {
              while ( *(_QWORD *)&v182[8] != *v102 )
              {
                if ( v104 == ++v102 )
                  goto LABEL_193;
              }
              if ( v104 != v102 )
                continue;
            }
LABEL_193:
            v105 = get_func(*(_QWORD *)&v182[8]);
            if ( v105 )
            {
              get_func_ranges(v163, v105);
            }
            else
            {
              *(__m128i *)v181 = _mm_unpacklo_epi64((__m128i)v103, (__m128i)(unsigned __int64)get_item_end(v103));
              rangeset_t_add(v163, v181);
            }
            flags = get_flags_ex(v103, 4);
            if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 )
            {
              strid = get_strid(v103);
              if ( (unsigned __int8)get_tid_name(v205, strid) )
              {
                if ( *(_QWORD *)&v205[8] )
                {
                  for ( m = *(const char **)v205; *m == 95; ++m )
                    ;
                  if ( !strncmp(m, "ThrowInfo", 9u) )
                  {
                    v109 = v176;
                    v110 = v175;
                    if ( *((_QWORD *)&v176 + 1) < (unsigned __int64)(v176 + 1) )
                    {
                      v175 = qvector_reserve(&v175, v175, v176 + 1, 8);
                      v110 = v175;
                      v109 = v176;
                    }
                    *(_QWORD *)(v110 + 8 * v109) = v103;
                    *(_QWORD *)&v176 = v176 + 1;
                  }
                }
              }
            }
          }
          while ( (unsigned __int8)xrefblk_t_next_from(v182) );
        }
        v101 = func_item_iterator_next(&v210, sub_20F60, 0);
      }
      if ( v97 == ++v96 )
        break;
    }
    if ( *(_QWORD *)v205 )
    {
      *(_QWORD *)&v205[8] = 0;
      qfree(*(_QWORD *)v205);
    }
  }
  if ( v210 )
    lock_func_range(v210, 0);
  v111 = v175;
  v165 = v181;
  v177 = 0;
  v179 = 0;
  v161.m128_u64[0] = v175 + 8 * v176;
  v178 = 0;
  v180 = 0;
  if ( v161.m128_u64[0] == v175 )
  {
    while ( 1 )
    {
LABEL_239:
      v123 = v196;
      if ( v196 >= (unsigned __int64)v195 )
      {
        sub_51C10(v164);
        *(_BYTE *)a1 = 1;
        *(_BYTE *)(a1 + 24) = 0;
        goto LABEL_233;
      }
      v124 = v223;
      ++v196;
      v125 = *(_QWORD *)(v194 + 8 * v123);
      memset(&v211.m256i_u64[1], 0, 24);
      sub_73C50(v205, v223, v125);
      if ( v206 )
        break;
      v210 = *(void **)v205;
      sub_73C50(v205, v124, v125 + 8);
      if ( v206 )
        break;
      v126 = v125 + 16;
      v211.m256i_i64[0] = *(_QWORD *)v205;
      while ( 1 )
      {
        v127 = v126 + 1;
        if ( v126 == -1 )
        {
          sub_19A90((__int64)v205, (__int64)"[%a,%a): bad range", -1, 0);
          goto LABEL_252;
        }
        sub_74B30(v182, &v124[1], v126);
        if ( !v182[16] )
        {
          sub_19A90((__int64)v205, (__int64)"[%a,%a): no associated segment", v126, v126 + 1);
          goto LABEL_252;
        }
        if ( v126 < *(_QWORD *)v182 || v126 >= *(_QWORD *)&v182[8] )
        {
          sub_19A90(
            (__int64)v205,
            (__int64)"[%a,%a): does not fit in segment [%a,%a)",
            0.0,
            *(double *)item_end.m128i_i64,
            COERCE_DOUBLE(v171),
            *(double *)a9.m128_u64);
          v130 = *(_OWORD *)v205;
          v131 = *(_QWORD *)&v205[16];
          goto LABEL_249;
        }
        v133 = *(__int64 (__fastcall **)(__int64))v124->m128i_i64[0];
        v134 = v133 == sub_15B80
             ? (**(__int64 (__fastcall ***)(__int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD))v124->m128i_i64[1])(
                 v124->m128i_i64[1],
                 v126,
                 v128,
                 v129,
                 *(_QWORD *)v182,
                 *(_QWORD *)&v182[8])
             : ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64, __int64, _QWORD, _QWORD))v133)(
                 v124,
                 v126,
                 v128,
                 v129,
                 *(_QWORD *)v182,
                 *(_QWORD *)&v182[8]);
        v135 = v134;
        if ( !v134 )
          break;
        v136 = v211.m256i_i64[2];
        v137 = 2;
        if ( v211.m256i_i64[2] )
        {
          v137 = v211.m256i_i64[2] + 1;
          v136 = v211.m256i_i64[2] - 1;
        }
        v138 = v211.m256i_i64[1];
        if ( v211.m256i_i64[3] < v137 )
        {
          v160 = v136;
          v158 = v137;
          v211.m256i_i64[1] = qvector_reserve(&v211.m256i_u64[1], v211.m256i_i64[1], v137, 1);
          v136 = v160;
          v138 = v211.m256i_i64[1];
          v137 = v158;
        }
        v211.m256i_i64[2] = v137;
        *(_BYTE *)(v138 + v136) = v135;
        v126 = v127;
        *(_BYTE *)(v211.m256i_i64[1] + v136 + 1) = 0;
      }
      v139 = (unsigned __int64)v210;
      v140 = get_func(v210);
      if ( v140 )
      {
        get_func_ranges(v163, v140);
      }
      else
      {
        *(__m128i *)v205 = _mm_unpacklo_epi64((__m128i)v139, (__m128i)(unsigned __int64)get_item_end(v139));
        rangeset_t_add(v163, v205);
      }
      if ( v211.m256i_i64[1] )
      {
        v211.m256i_i64[2] = 0;
        qfree(v211.m256i_i64[1]);
      }
    }
LABEL_252:
    v131 = *(_QWORD *)&v205[16];
    v130 = *(_OWORD *)v205;
LABEL_249:
    v132 = v211.m256i_i64[1];
    *(_OWORD *)a1 = v130;
    *(_QWORD *)(a1 + 16) = v131;
    *(_BYTE *)(a1 + 24) = 1;
    if ( v132 )
    {
      v211.m256i_i64[2] = 0;
      qfree(v132);
    }
    goto LABEL_233;
  }
  while ( 1 )
  {
    v112 = _mm_loadh_ps((const double *)&v224 + 1);
    *(_QWORD *)v181 = v223;
    *(__m128 *)&v181[8] = v112;
    sub_5EC60(&v210, v165);
    if ( v214 )
    {
      v121 = v210;
      *(_BYTE *)(a1 + 24) = 1;
      v122 = _mm_loadu_si128((const __m128i *)&v211);
      *(_QWORD *)a1 = v121;
      *(__m128i *)(a1 + 8) = v122;
      goto LABEL_233;
    }
    v113 = v212;
    if ( v213 )
    {
      if ( v212 != -1 )
      {
        v114 = v177;
        v115 = (_QWORD *)(v177 + 8 * v178);
        if ( (_QWORD *)v177 == v115 )
          break;
        v116 = (_QWORD *)v177;
        while ( v212 != *v116 )
        {
          if ( v115 == ++v116 )
            goto LABEL_223;
        }
        if ( v116 == v115 )
          break;
      }
    }
LABEL_214:
    v111 += 8;
    if ( v161.m128_u64[0] == v111 )
      goto LABEL_239;
  }
LABEL_223:
  if ( *((_QWORD *)&v178 + 1) < (unsigned __int64)(v178 + 1) )
  {
    v177 = qvector_reserve(&v177, v177, v178 + 1, 8);
    v114 = v177;
  }
  *(_QWORD *)(v114 + 8 * v178) = v113;
  v117 = v223;
  *(_QWORD *)&v178 = v178 + 1;
  v118 = v113 + 4;
  if ( v113 >= 0xFFFFFFFFFFFFFFFCLL )
  {
    sub_19A90((__int64)v205, (__int64)"[%a,%a): bad range", v113, v113 + 4);
    goto LABEL_227;
  }
  v166 = v182;
  sub_74B30(v182, &v223[1], v113);
  if ( !v182[16] )
  {
    sub_19A90((__int64)v205, (__int64)"[%a,%a): no associated segment", v113, v113 + 4);
LABEL_227:
    v119 = *(_OWORD *)v205;
    v120 = *(_QWORD *)&v205[16];
LABEL_228:
    *(_OWORD *)a1 = v119;
    *(_QWORD *)(a1 + 16) = v120;
    *(_BYTE *)(a1 + 24) = 1;
    goto LABEL_229;
  }
  if ( v113 + 3 < *(_QWORD *)v182 || v113 + 3 >= *(_QWORD *)&v182[8] )
  {
    sub_19A90(
      (__int64)v205,
      (__int64)"[%a,%a): does not fit in segment [%a,%a)",
      *(double *)v112.m128_u64,
      *(double *)item_end.m128i_i64,
      COERCE_DOUBLE(v171),
      *(double *)a9.m128_u64);
    v120 = *(_QWORD *)&v205[16];
    v119 = *(_OWORD *)v205;
    goto LABEL_228;
  }
  v142 = *(__int64 (__fastcall **)(__int64))(v117->m128i_i64[0] + 16);
  if ( v142 == sub_15A20 )
    v143 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD, _QWORD))(*(_QWORD *)v117->m128i_i64[1] + 16LL))(
             v117->m128i_i64[1],
             v113,
             sub_15A20,
             v141,
             *(_QWORD *)v182,
             *(_QWORD *)&v182[8]);
  else
    v143 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD, _QWORD))v142)(
             v117,
             v113,
             sub_15A20,
             v141,
             *(_QWORD *)v182,
             *(_QWORD *)&v182[8]);
  if ( !v143 )
  {
LABEL_300:
    if ( v214 && v210 )
    {
      v211.m256i_i64[0] = 0;
      qfree(v210);
    }
    goto LABEL_214;
  }
  v144 = v113 + 4 + 4LL * v143;
  while ( 1 )
  {
    sub_73FB0(v205, v117, v118);
    if ( v206 )
      break;
    v145 = *(void ***)v205;
    if ( *(_QWORD *)v205 == -1 )
      goto LABEL_299;
    v146 = (void ***)(v179 + 8 * v180);
    if ( (void ***)v179 != v146 )
    {
      v147 = (void ***)v179;
      while ( *(void ***)v205 != *v147 )
      {
        if ( v146 == ++v147 )
          goto LABEL_284;
      }
      if ( v147 != v146 )
        goto LABEL_299;
    }
LABEL_284:
    if ( *((_QWORD *)&v180 + 1) < (unsigned __int64)(v180 + 1) )
    {
      p_src = *(void ***)v205;
      v179 = qvector_reserve(&v179, v179, v180 + 1, 8);
      v145 = p_src;
      v146 = (void ***)(v179 + 8 * v180);
    }
    *v146 = v145;
    *(_QWORD *)&v180 = v180 + 1;
    v148 = _mm_loadh_ps((const double *)&v224 + 1);
    *(_QWORD *)v182 = v223;
    *(__m128 *)&v182[8] = v148;
    sub_5E7A0(v205, v166);
    if ( v209 )
      break;
    v149 = *(void ***)&v205[8];
    v150 = v207;
    v151 = v208;
    if ( *(_QWORD *)&v205[8] != -1 )
    {
      v152 = (void ***)(v194 + 8 * v195);
      if ( (void ***)v194 == v152 )
        goto LABEL_305;
      v153 = (void ***)v194;
      while ( *(void ***)&v205[8] != *v153 )
      {
        if ( v152 == ++v153 )
          goto LABEL_305;
      }
      if ( v152 == v153 )
      {
LABEL_305:
        if ( *((_QWORD *)&v195 + 1) < (unsigned __int64)(v195 + 1) )
        {
          LOBYTE(v169) = v208;
          p_src = *(void ***)&v205[8];
          v194 = qvector_reserve(&v194, v194, v195 + 1, 8);
          v151 = v169;
          v149 = p_src;
          v152 = (void ***)(v194 + 8 * v195);
        }
        *v152 = v149;
        *(_QWORD *)&v195 = v195 + 1;
        if ( v151 )
        {
LABEL_294:
          v154 = get_func(v150);
          if ( v154 )
          {
            get_func_ranges(v163, v154);
          }
          else
          {
            v172 = _mm_unpacklo_epi64((__m128i)v150, (__m128i)(unsigned __int64)get_item_end(v150));
            rangeset_t_add(v163, &v172);
          }
        }
        if ( v209 && *(_QWORD *)v205 )
        {
          *(_QWORD *)&v205[8] = 0;
          qfree(*(_QWORD *)v205);
        }
        goto LABEL_299;
      }
    }
    if ( v208 )
      goto LABEL_294;
LABEL_299:
    v118 += 4LL;
    if ( v118 == v144 )
      goto LABEL_300;
  }
  *(_QWORD *)a1 = *(_QWORD *)v205;
  v155 = _mm_loadu_si128((const __m128i *)&v205[8]);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v155;
LABEL_229:
  if ( v214 && v210 )
  {
    v211.m256i_i64[0] = 0;
    qfree(v210);
  }
LABEL_233:
  if ( v179 )
  {
    *(_QWORD *)&v180 = 0;
    qfree(v179);
  }
  if ( v177 )
  {
    *(_QWORD *)&v178 = 0;
    qfree(v177);
  }
  if ( v175 )
  {
    *(_QWORD *)&v176 = 0;
    qfree(v175);
  }
LABEL_177:
  sub_21B60((__int64)v162);
LABEL_163:
  if ( v201 )
  {
    *(_QWORD *)&v202 = 0;
    qfree(v201);
  }
LABEL_122:
  if ( v197 )
  {
    *(_QWORD *)&v198 = 0;
    qfree(v197);
  }
LABEL_124:
  if ( v173 )
  {
    *(_QWORD *)&v174 = 0;
    qfree(v173);
  }
  if ( v194 )
  {
    *(_QWORD *)&v195 = 0;
    qfree(v194);
  }
  if ( v191 )
  {
    *(_QWORD *)&v192 = 0;
    qfree(v191);
  }
  if ( v188 )
  {
    *(_QWORD *)&v189 = 0;
    qfree(v188);
  }
  if ( v185 )
  {
    *(_QWORD *)&v186 = 0;
    qfree(v185);
  }
  if ( v184 && v183.m128i_i64[0] )
  {
    v183.m128i_i64[1] = 0;
    qfree(v183.m128i_i64[0]);
  }
  return a1;
}
