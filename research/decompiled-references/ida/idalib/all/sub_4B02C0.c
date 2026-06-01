unsigned __int64 __fastcall sub_4B02C0(_QWORD *a1)
{
  __int64 v1; // rax
  size_t v2; // rsi
  void **v3; // rax
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r14
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  const __m128i *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned int v22; // r13d
  __int128 v23; // xmm0
  unsigned int v24; // ebx
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm2
  __m128i v35; // xmm2
  __int64 v36; // rax
  __m128i v37; // xmm2
  __m128i v38; // xmm2
  __m128i v39; // xmm2
  __m128i v40; // xmm2
  __m128i v41; // xmm2
  __m128i v42; // xmm2
  __m128i v43; // xmm1
  __int64 v44; // rdx
  __m128i v45; // xmm2
  __m128i v46; // xmm2
  unsigned __int64 v47; // rax
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // r12
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  _QWORD *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  const char *v56; // rsi
  _QWORD *v57; // r13
  int v58; // ebx
  const __m128i *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // r12
  __int64 v62; // r15
  __int64 v63; // rcx
  __int64 v64; // rbp
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rbp
  unsigned int v68; // ecx
  __int64 v69; // r15
  __int64 *v70; // r10
  __int64 *v71; // rbx
  unsigned int v72; // r14d
  __int64 *v73; // r10
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rbx
  bool v78; // cf
  __int64 v79; // rcx
  __int64 v80; // r14
  __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rdi
  __int64 v84; // r14
  char *v85; // rdx
  __int64 v86; // rbp
  __int64 v87; // rbx
  char *v88; // rax
  void *v89; // rdi
  char *v90; // r12
  char *v91; // r14
  __int64 v92; // r13
  __int64 v93; // rbp
  __int64 v94; // rbx
  __int64 v95; // rdi
  __int64 v97; // rax
  __int64 v98; // rcx
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  __int64 *v101; // r14
  __int64 v102; // rdx
  __int64 v103; // r12
  __int64 *v104; // rbx
  __int64 v105; // r14
  __int64 v106; // rbp
  __int64 v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rdi
  __int64 *v110; // r14
  __int64 v111; // rsi
  const __m128i *v112; // r8
  void *v113; // rbx
  __int64 v114; // rcx
  void *v115; // rdi
  __m128i si128; // xmm0
  void *v117; // rbx
  __int64 v118; // rcx
  void *v119; // rdi
  __m128i v120; // xmm0
  unsigned __int64 v121; // rbx
  size_t v122; // r9
  size_t v123; // r10
  char *v124; // rdx
  __m128i v125; // xmm0
  __int64 v126; // rcx
  __int64 v127; // rbx
  __int64 v128; // rbp
  char *v129; // rax
  void *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rcx
  void *v133; // rbx
  void *v134; // rdi
  __m128i v135; // xmm0
  __int64 v136; // rbp
  char *v137; // rdi
  __m128i v138; // xmm0
  __int64 v139; // rdx
  __int64 v140; // rbx
  __int64 v141; // rbp
  char *v142; // r12
  void *v143; // rdi
  void *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rdi
  unsigned int v147; // r8d
  __int64 v148; // r14
  __int64 v149; // rax
  unsigned __int64 v150; // rsi
  unsigned __int64 v151; // rdx
  __int64 *v152; // r14
  __int64 v153; // rdx
  __int64 v154; // r12
  __int64 v155; // rbx
  __int64 v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rdi
  unsigned int v159; // ecx
  __int64 v160; // rbx
  __int64 v161; // r9
  size_t v162; // rdx
  __int64 v163; // rdi
  void *v164; // rax
  size_t v165; // rdx
  const void **v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rbx
  const void *v169; // rbp
  void *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rsi
  __m128i v173; // [rsp+0h] [rbp-6A8h] BYREF
  const char *v174; // [rsp+10h] [rbp-698h]
  __int64 *v175; // [rsp+18h] [rbp-690h]
  __int64 v176; // [rsp+20h] [rbp-688h]
  __int64 v177; // [rsp+28h] [rbp-680h]
  size_t n[2]; // [rsp+30h] [rbp-678h] BYREF
  __int64 v179; // [rsp+40h] [rbp-668h]
  _QWORD *v180; // [rsp+48h] [rbp-660h]
  __m128i v181; // [rsp+50h] [rbp-658h] BYREF
  _QWORD *v182; // [rsp+60h] [rbp-648h]
  const __m128i *v183; // [rsp+68h] [rbp-640h]
  const __m128i *v184; // [rsp+70h] [rbp-638h]
  _BYTE *v185; // [rsp+78h] [rbp-630h]
  void **v186; // [rsp+80h] [rbp-628h]
  const char *v187; // [rsp+88h] [rbp-620h]
  size_t v188; // [rsp+90h] [rbp-618h]
  __int64 v189; // [rsp+98h] [rbp-610h]
  void *ptr; // [rsp+A0h] [rbp-608h] BYREF
  __int128 v191; // [rsp+A8h] [rbp-600h]
  __int64 v192; // [rsp+C0h] [rbp-5E8h] BYREF
  __int128 v193; // [rsp+C8h] [rbp-5E0h]
  __int64 v194; // [rsp+D8h] [rbp-5D0h]
  __int128 v195; // [rsp+E0h] [rbp-5C8h]
  __int64 v196; // [rsp+F0h] [rbp-5B8h]
  __int128 v197; // [rsp+F8h] [rbp-5B0h]
  __int64 v198; // [rsp+108h] [rbp-5A0h]
  __int128 v199; // [rsp+110h] [rbp-598h]
  __int64 v200; // [rsp+120h] [rbp-588h]
  __int128 v201; // [rsp+128h] [rbp-580h]
  int v202; // [rsp+138h] [rbp-570h]
  __int64 v203; // [rsp+140h] [rbp-568h]
  __int128 v204; // [rsp+148h] [rbp-560h]
  __int64 v205; // [rsp+158h] [rbp-550h]
  __int128 v206; // [rsp+160h] [rbp-548h]
  __int64 v207; // [rsp+170h] [rbp-538h]
  char v208; // [rsp+178h] [rbp-530h]
  __int64 v209; // [rsp+180h] [rbp-528h]
  __int128 v210; // [rsp+188h] [rbp-520h]
  __int64 v211; // [rsp+198h] [rbp-510h]
  __int128 v212; // [rsp+1A0h] [rbp-508h]
  __int64 v213; // [rsp+1B0h] [rbp-4F8h]
  __int128 v214; // [rsp+1B8h] [rbp-4F0h]
  __int64 v215; // [rsp+1C8h] [rbp-4E0h]
  __int16 v216; // [rsp+1D0h] [rbp-4D8h]
  char v217; // [rsp+1D2h] [rbp-4D6h]
  __int64 v218; // [rsp+1D8h] [rbp-4D0h]
  __int128 v219; // [rsp+1E0h] [rbp-4C8h]
  const char *v220; // [rsp+1F0h] [rbp-4B8h]
  __int64 v221; // [rsp+1F8h] [rbp-4B0h]
  __int64 v222; // [rsp+200h] [rbp-4A8h]
  __int64 v223; // [rsp+208h] [rbp-4A0h]
  __int64 v224; // [rsp+210h] [rbp-498h]
  __int64 v225; // [rsp+218h] [rbp-490h]
  _OWORD v226[2]; // [rsp+220h] [rbp-488h] BYREF
  __int64 v227; // [rsp+240h] [rbp-468h]
  __int128 v228; // [rsp+248h] [rbp-460h]
  __int64 v229; // [rsp+258h] [rbp-450h]
  __int16 v230; // [rsp+260h] [rbp-448h]
  __int64 v231; // [rsp+270h] [rbp-438h] BYREF
  __m128i v232; // [rsp+278h] [rbp-430h] BYREF
  __int64 v233; // [rsp+288h] [rbp-420h]
  __m128i v234; // [rsp+290h] [rbp-418h] BYREF
  __int64 v235; // [rsp+2A0h] [rbp-408h]
  __m128i v236; // [rsp+2A8h] [rbp-400h] BYREF
  __int64 v237; // [rsp+2B8h] [rbp-3F0h]
  __m128i v238; // [rsp+2C0h] [rbp-3E8h] BYREF
  __int64 v239; // [rsp+2D0h] [rbp-3D8h]
  __m128i v240; // [rsp+2D8h] [rbp-3D0h] BYREF
  int v241; // [rsp+2E8h] [rbp-3C0h]
  __int64 v242; // [rsp+2F0h] [rbp-3B8h]
  __m128i v243; // [rsp+2F8h] [rbp-3B0h] BYREF
  __int64 v244; // [rsp+308h] [rbp-3A0h]
  __m128i v245; // [rsp+310h] [rbp-398h] BYREF
  __int64 v246; // [rsp+320h] [rbp-388h]
  char v247; // [rsp+328h] [rbp-380h]
  __int64 v248; // [rsp+330h] [rbp-378h]
  __m128i v249; // [rsp+338h] [rbp-370h] BYREF
  __int64 v250; // [rsp+348h] [rbp-360h]
  __m128i v251; // [rsp+350h] [rbp-358h] BYREF
  __int64 v252; // [rsp+360h] [rbp-348h]
  __m128i v253; // [rsp+368h] [rbp-340h] BYREF
  __int64 v254; // [rsp+378h] [rbp-330h]
  __int16 v255; // [rsp+380h] [rbp-328h]
  char v256; // [rsp+382h] [rbp-326h]
  __int64 v257; // [rsp+388h] [rbp-320h]
  __m128i v258; // [rsp+390h] [rbp-318h] BYREF
  __int128 *v259; // [rsp+3A0h] [rbp-308h]
  unsigned __int64 v260; // [rsp+3A8h] [rbp-300h]
  __int64 v261; // [rsp+3B0h] [rbp-2F8h]
  __int64 v262; // [rsp+3B8h] [rbp-2F0h]
  __m128i v263; // [rsp+3C0h] [rbp-2E8h] BYREF
  __int128 v264; // [rsp+3D0h] [rbp-2D8h] BYREF
  __m128i v265; // [rsp+3E0h] [rbp-2C8h] BYREF
  __int64 v266; // [rsp+3F0h] [rbp-2B8h]
  __m128i v267; // [rsp+3F8h] [rbp-2B0h] BYREF
  __int64 v268; // [rsp+408h] [rbp-2A0h]
  __int16 v269; // [rsp+410h] [rbp-298h]
  __int64 v270; // [rsp+418h] [rbp-290h]
  __int64 v271; // [rsp+420h] [rbp-288h] BYREF
  __m128i v272; // [rsp+428h] [rbp-280h]
  __int64 v273; // [rsp+438h] [rbp-270h]
  __m128i v274; // [rsp+440h] [rbp-268h]
  __int64 v275; // [rsp+450h] [rbp-258h]
  __m128i v276; // [rsp+458h] [rbp-250h]
  __int64 v277; // [rsp+468h] [rbp-240h]
  __m128i v278; // [rsp+470h] [rbp-238h]
  __int64 v279; // [rsp+480h] [rbp-228h]
  __m128i v280; // [rsp+488h] [rbp-220h]
  int v281; // [rsp+498h] [rbp-210h]
  __int64 v282; // [rsp+4A0h] [rbp-208h]
  __m128i v283; // [rsp+4A8h] [rbp-200h]
  __int64 v284; // [rsp+4B8h] [rbp-1F0h]
  __m128i v285; // [rsp+4C0h] [rbp-1E8h]
  __int64 v286; // [rsp+4D0h] [rbp-1D8h]
  char v287; // [rsp+4D8h] [rbp-1D0h]
  __int64 v288; // [rsp+4E0h] [rbp-1C8h]
  __m128i v289; // [rsp+4E8h] [rbp-1C0h]
  __int64 v290; // [rsp+4F8h] [rbp-1B0h]
  __m128i v291; // [rsp+500h] [rbp-1A8h]
  __int64 v292; // [rsp+510h] [rbp-198h]
  __m128i v293; // [rsp+518h] [rbp-190h]
  __int64 v294; // [rsp+528h] [rbp-180h]
  __int16 v295; // [rsp+530h] [rbp-178h]
  char v296; // [rsp+532h] [rbp-176h]
  __int64 v297; // [rsp+538h] [rbp-170h]
  __m128i v298; // [rsp+540h] [rbp-168h]
  __int128 *v299; // [rsp+550h] [rbp-158h]
  unsigned __int64 v300; // [rsp+558h] [rbp-150h]
  _QWORD v301[2]; // [rsp+560h] [rbp-148h] BYREF
  __m128i v302; // [rsp+570h] [rbp-138h]
  _QWORD v303[2]; // [rsp+580h] [rbp-128h] BYREF
  __m128i v304; // [rsp+590h] [rbp-118h]
  __int64 v305; // [rsp+5A0h] [rbp-108h]
  __m128i v306; // [rsp+5A8h] [rbp-100h]
  __int64 v307; // [rsp+5B8h] [rbp-F0h]
  __int16 v308; // [rsp+5C0h] [rbp-E8h]
  __int64 v309; // [rsp+5C8h] [rbp-E0h]
  __m128i v310; // [rsp+5D0h] [rbp-D8h] BYREF
  __m128i v311; // [rsp+5E0h] [rbp-C8h]
  _QWORD v312[2]; // [rsp+5F0h] [rbp-B8h] BYREF
  _BYTE v313[48]; // [rsp+600h] [rbp-A8h] BYREF
  char v314; // [rsp+630h] [rbp-78h] BYREF
  void *v315; // [rsp+648h] [rbp-60h] BYREF
  __int128 v316; // [rsp+650h] [rbp-58h]
  __int64 v317; // [rsp+660h] [rbp-48h]
  unsigned __int64 v318; // [rsp+668h] [rbp-40h]

  v180 = a1;
  v318 = __readfsqword(0x28u);
  v186 = &v315;
  v1 = a1[1];
  v2 = *(int *)(v1 + 28);
  v179 = v1;
  v312[0] = v1;
  v182 = v312;
  v3 = (void **)v313;
  LODWORD(v174) = v2;
  v4 = (unsigned __int64 *)v313;
  n[0] = v2;
  v312[1] = v2;
  v185 = v313;
  do
  {
    *v3 = nullptr;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v315 != v3 );
  v5 = n[0];
  v315 = nullptr;
  v317 = 0;
  ptr = nullptr;
  v316 = 0;
  v191 = 0;
  if ( n[0] )
  {
    v6 = (char *)qvector_reserve(&ptr, 0, n[0], 24);
    v7 = v191;
    ptr = v6;
    if ( (unsigned __int64)v191 < n[0] )
    {
      v8 = 24 * v191;
      v9 = &v6[24 * v191];
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      v10 = v7 + 1;
      if ( v7 + 1 < v5 )
      {
        v11 = v8 + 24;
        do
        {
          ++v10;
          v12 = (char *)ptr + v11;
          v11 += 24;
          *(_QWORD *)v12 = 0;
          *(_OWORD *)(v12 + 8) = 0;
        }
        while ( v5 != v10 );
      }
    }
    *(_QWORD *)&v191 = n[0];
  }
  v13 = *(_QWORD **)(switch_dbctx(*(int *)(v179 + 16)) + 1672);
  v14 = switch_dbctx(*(int *)(v179 + 20));
  v15 = *(int *)(v179 + 24);
  v16 = nullptr;
  v173.m128i_i64[0] = *(_QWORD *)(v14 + 1672);
  if ( (_DWORD)v15 != -1 )
    v16 = *(_QWORD **)(switch_dbctx(v15) + 1672);
  v17 = 1;
  v18 = 1;
  do
  {
    v18 = sub_49A750((__int64)v13, v173.m128i_i64[0], v16, v18);
    v17 = sub_49A750(v173.m128i_i64[0], v13, v16, v17);
  }
  while ( v18 != (unsigned int)sub_64E0C0(v13, v13[1]) );
  v19 = (const __m128i *)&v192;
  v176 = 0;
  if ( (int)v174 > 0 )
  {
    do
    {
      v20 = *(int *)(v179 + 4 * v176 + 16);
      v173.m128i_i32[0] = v176;
      v21 = *(_QWORD *)(switch_dbctx(v20) + 1672);
      v177 = 24 * v176;
      v22 = sub_64E0C0(v21, 0);
      v23 = 0;
      v24 = 1;
      v174 = (const char *)v226;
      if ( v22 > 1 )
      {
        do
        {
          v208 = 0;
          v192 = 0;
          v194 = 0;
          v220 = v174;
          v196 = 0;
          v198 = 0;
          v200 = 0;
          v202 = 0;
          v203 = 0;
          v205 = 0;
          v207 = 0;
          v209 = 0;
          v211 = 0;
          v213 = 0;
          v215 = -1;
          v216 = 0;
          v217 = 0;
          v218 = 0;
          v221 = 1;
          v222 = 0;
          v193 = v23;
          v195 = v23;
          v197 = v23;
          v199 = v23;
          v201 = v23;
          v204 = v23;
          v206 = v23;
          v210 = v23;
          v212 = v23;
          v214 = v23;
          v219 = v23;
          v223 = 0;
          v224 = 1065353216;
          v225 = 0;
          v227 = 0;
          v229 = 0;
          v230 = 0;
          v226[0] = v23;
          v226[1] = v23;
          v228 = v23;
          if ( (unsigned __int8)sub_4991B0((__int64)v19, v173.m128i_u32[0], 0, v24, 1) )
          {
            if ( !HIDWORD(v207) )
            {
              v175 = &v231;
              sub_49D3B0((__int64)&v231, v19);
              v28 = *v4;
              v29 = v4[2];
              v270 = -1;
              if ( (unsigned __int64)&v231 < v28 || (unsigned __int64)&v231 >= v28 + 432 * v29 )
              {
                v49 = v4[1];
                if ( v29 < v49 + 1 )
                {
                  v98 = qvector_reserve(v4, 0, v49 + 1, 432);
                  v99 = v4[1];
                  v100 = v4[2];
                  v4[2] = v29;
                  v101 = (__int64 *)*v4;
                  v181.m128i_i64[0] = v100;
                  v102 = v99 - 1;
                  if ( v102 >= 0 )
                  {
                    LODWORD(v183) = v24;
                    v103 = v98;
                    v104 = v101;
                    v105 = v98;
                    v184 = v19;
                    v106 = v102;
                    do
                    {
                      v107 = v103;
                      v103 += 432;
                      sub_49B590(v107, v104);
                      v108 = v104[53];
                      v109 = (__int64)v104;
                      v104 += 54;
                      *(_QWORD *)(v103 - 8) = v108;
                      sub_496580(v109);
                      v78 = v106-- == 0;
                    }
                    while ( !v78 );
                    v98 = v105;
                    v24 = (unsigned int)v183;
                    v19 = v184;
                    v101 = (__int64 *)*v4;
                  }
                  v183 = (const __m128i *)v98;
                  qfree(v101);
                  v28 = (unsigned __int64)v183;
                  v4[2] = v181.m128i_i64[0];
                  v49 = v4[1];
                  *v4 = v28;
                }
                v50 = v28 + 432 * v49;
                sub_49B590(v50, v175);
                *(_QWORD *)(v50 + 424) = v270;
              }
              else
              {
                v30 = v231;
                v31 = _mm_load_si128(&v234);
                v231 = 0;
                v32 = _mm_loadu_si128(&v232);
                v271 = v30;
                v274 = v31;
                v33 = _mm_loadu_si128(&v236);
                v273 = v233;
                v276 = v33;
                v34 = _mm_load_si128(&v238);
                v275 = v235;
                v278 = v34;
                v35 = _mm_loadu_si128(&v240);
                v277 = v237;
                v272 = v32;
                v279 = v239;
                v232 = 0;
                v234 = 0;
                v236 = 0;
                v238 = 0;
                v280 = v35;
                v240 = 0;
                v233 = 0;
                v235 = 0;
                v237 = 0;
                v239 = 0;
                v281 = v241;
                v36 = v242;
                v37 = _mm_loadu_si128(&v243);
                v242 = 0;
                v282 = v36;
                v283 = v37;
                v38 = _mm_load_si128(&v245);
                v284 = v244;
                v285 = v38;
                v39 = _mm_loadu_si128(&v249);
                v286 = v246;
                v289 = v39;
                v40 = _mm_load_si128(&v251);
                v287 = v247;
                v291 = v40;
                v41 = _mm_loadu_si128(&v253);
                v288 = v248;
                v243 = 0;
                v290 = v250;
                v245 = 0;
                v292 = v252;
                v249 = 0;
                v251 = 0;
                v244 = 0;
                v248 = 0;
                v250 = 0;
                v252 = 0;
                v293 = v41;
                v253 = 0;
                v294 = v254;
                v42 = _mm_load_si128(&v258);
                v258 = 0;
                v43 = _mm_load_si128(&v263);
                v295 = v255;
                v301[1] = v262;
                v296 = v256;
                v299 = v259;
                v297 = v257;
                v257 = 0;
                v300 = v260;
                v301[0] = v261;
                v303[0] = 0;
                v298 = v42;
                v302 = v43;
                if ( v259 == &v264 )
                {
                  v299 = (__int128 *)v303;
                  v303[0] = v264;
                }
                v44 = -1;
                if ( v261 )
                {
                  *((_QWORD *)v299 + *(_QWORD *)(v261 + 8) % v260) = v301;
                  v44 = v270;
                  v29 = v4[2];
                }
                v45 = _mm_load_si128(&v265);
                v309 = v44;
                v263.m128i_i64[1] = 0;
                v303[1] = *((_QWORD *)&v264 + 1);
                v304 = v45;
                v46 = _mm_loadu_si128(&v267);
                v305 = v266;
                v260 = 1;
                v307 = v268;
                v259 = &v264;
                v308 = v269;
                v47 = v4[1];
                v261 = 0;
                v264 = 0;
                v262 = 0;
                v266 = 0;
                v265 = 0;
                v306 = v46;
                v267 = 0;
                if ( v29 < v47 + 1 )
                {
                  v149 = qvector_reserve(v4, 0, v47 + 1, 432);
                  v150 = v4[2];
                  v151 = v4[1];
                  v181.m128i_i64[0] = v149;
                  v4[2] = v29;
                  v152 = (__int64 *)*v4;
                  v183 = (const __m128i *)v150;
                  v153 = v151 - 1;
                  if ( v153 >= 0 )
                  {
                    LODWORD(v184) = v24;
                    v154 = v149;
                    v155 = v153;
                    do
                    {
                      v156 = v154;
                      v154 += 432;
                      sub_49B590(v156, v152);
                      v157 = v152[53];
                      v158 = (__int64)v152;
                      v152 += 54;
                      *(_QWORD *)(v154 - 8) = v157;
                      sub_496580(v158);
                      v78 = v155-- == 0;
                    }
                    while ( !v78 );
                    v24 = (unsigned int)v184;
                    v152 = (__int64 *)*v4;
                  }
                  qfree(v152);
                  *v4 = v181.m128i_i64[0];
                  v4[2] = (unsigned __int64)v183;
                  v47 = v4[1];
                }
                v48 = *v4 + 432 * v47;
                sub_49B590(v48, &v271);
                *(_QWORD *)(v48 + 424) = v309;
                sub_496580((__int64)&v271);
              }
              ++v4[1];
              sub_496580((__int64)v175);
            }
          }
          else
          {
            v25 = (__int64 *)((char *)ptr + v177);
            v26 = *(_QWORD *)((char *)ptr + v177 + 8);
            v27 = *(_QWORD *)((char *)ptr + v177);
            if ( *(_QWORD *)((char *)ptr + v177 + 16) < (unsigned __int64)(v26 + 1) )
            {
              v97 = qvector_reserve((char *)ptr + v177, v27, v26 + 1, 4);
              *v25 = v97;
              v27 = v97;
              v26 = v25[1];
            }
            *(_DWORD *)(v27 + 4 * v26) = v24;
            ++v25[1];
          }
          ++v24;
          sub_496580((__int64)v19);
          v23 = 0;
        }
        while ( v24 != v22 );
      }
      ++v176;
      v4 += 3;
    }
    while ( n[0] != v176 );
  }
  v311 = 0u;
  v310 = 0;
  v173 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B2CBD0), (__m128i)(unsigned __int64)sub_492720);
  if ( sub_4927E0 )
  {
    v51 = _mm_load_si128(&v173);
    v310.m128i_i64[0] = (__int64)sub_4927E0;
    v311 = v51;
  }
  sub_4AE940(v182, &v310, 1);
  sub_377BA0((__int64)&v310);
  v311 = 0u;
  v310 = 0;
  if ( sub_492950 )
  {
    v52 = _mm_load_si128(&v173);
    v310.m128i_i64[0] = (__int64)sub_492950;
    v311 = v52;
  }
  v53 = v182;
  sub_4AE940(v182, &v310, 0);
  sub_377BA0((__int64)&v310);
  sub_49DF20(v53, v180 + 19, 1);
  v55 = v180[19];
  v56 = (const char *)v180[20];
  v57 = (_QWORD *)v180[21];
  v173.m128i_i64[0] = v55;
  v174 = v56;
  if ( v57 )
  {
    v176 = (__int64)(v57 + 5);
    v58 = *(_DWORD *)(v179 + 20);
    if ( get_dbctx_qty(v53, v56, v54, v55) )
    {
      v59 = (const __m128i *)v58;
      LODWORD(v175) = get_dbctx_id();
      v272.m128i_i64[0] = switch_dbctx(v58);
      v61 = *(_QWORD *)(v173.m128i_i64[0] + 48);
      if ( v61 )
        goto LABEL_41;
LABEL_49:
      if ( (_DWORD)v175 != -1 )
      {
        v66 = (int)v175;
        if ( v66 < get_dbctx_qty(v59, v56, v60, v63) )
        {
          if ( (unsigned __int8)sub_3FB5F0() )
            switch_dbctx(v66);
        }
      }
      v61 = *(_QWORD *)(v173.m128i_i64[0] + 48);
    }
    else
    {
      v59 = (const __m128i *)v58;
      v272.m128i_i64[0] = switch_dbctx(v58);
      LODWORD(v175) = -1;
      v61 = *(_QWORD *)(v173.m128i_i64[0] + 48);
      if ( v61 )
      {
LABEL_41:
        v62 = 0;
        v184 = (const __m128i *)(v173.m128i_i64[0] + 40);
        v187 = v174 + 40;
        while ( 1 )
        {
          v63 = v173.m128i_i64[0];
          v64 = 424 * v62;
          v65 = 424 * v62 + *(_QWORD *)(v173.m128i_i64[0] + 40);
          if ( !*(_DWORD *)(v65 + 176) )
            goto LABEL_48;
          v63 = (__int64)v174;
          v60 = v64 + *((_QWORD *)v174 + 5);
          if ( !*(_DWORD *)(v60 + 176) )
            goto LABEL_48;
          v63 = v57[5];
          if ( *(_DWORD *)(v63 + v64 + 176) )
            goto LABEL_48;
          v63 = *(_QWORD *)(v65 + 160);
          if ( *(_QWORD *)(v60 + 160) )
          {
            v56 = *(const char **)(v60 + 152);
            v59 = (const __m128i *)haystack;
            if ( !v63 )
            {
              if ( strcmp(haystack, v56) )
                goto LABEL_102;
              goto LABEL_48;
            }
          }
          else
          {
            v56 = haystack;
            if ( !v63 )
              goto LABEL_48;
          }
          v59 = *(const __m128i **)(v65 + 152);
          if ( strcmp(v59->m128i_i8, v56) )
          {
LABEL_102:
            sub_49B900((__int64)v184);
            sub_49B900(v176);
            v110 = sub_49B900((__int64)v187);
            v177 = v64 + *((_QWORD *)v174 + 5);
            sub_4939F0((__int64)v110, v177);
            sub_493950((__int64)(v110 + 3), v177 + 24);
            sub_493950((__int64)(v110 + 6), v177 + 48);
            sub_4939F0((__int64)(v110 + 9), v177 + 72);
            sub_493950((__int64)(v110 + 12), v177 + 96);
            v111 = v177 + 128;
            *((_DWORD *)v110 + 30) = *(_DWORD *)(v177 + 120);
            sub_493950((__int64)(v110 + 16), v111);
            sub_4939F0((__int64)(v110 + 19), v177 + 152);
            v112 = (const __m128i *)v177;
            v113 = nullptr;
            *((_DWORD *)v110 + 44) = *(_DWORD *)(v177 + 176);
            *((_DWORD *)v110 + 45) = v112[11].m128i_i32[1];
            *((_BYTE *)v110 + 184) = v112[11].m128i_i8[8];
            v114 = v112[12].m128i_i64[1];
            if ( v114 )
            {
              v181.m128i_i64[0] = v112[12].m128i_i64[1];
              n[0] = 4 * v114;
              v113 = (void *)qalloc_or_throw(4 * v114);
              memcpy(v113, *(const void **)(v177 + 192), n[0]);
              v114 = v181.m128i_i64[0];
              v112 = (const __m128i *)v177;
            }
            v115 = (void *)v110[24];
            si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v114, (__m128i)(unsigned __int64)v114);
            if ( v115 )
            {
              v110[25] = 0;
              v177 = (__int64)v112;
              *(__m128i *)n = si128;
              qfree(v115);
              si128 = _mm_load_si128((const __m128i *)n);
              v112 = (const __m128i *)v177;
            }
            v110[24] = (__int64)v113;
            v117 = nullptr;
            *(__m128i *)(v110 + 25) = si128;
            v118 = v112[14].m128i_i64[0];
            if ( v118 )
            {
              v177 = (__int64)v112;
              v181.m128i_i64[0] = v118;
              n[0] = 16 * v118;
              v117 = (void *)qalloc_or_throw(16 * v118);
              memcpy(v117, *(const void **)(v177 + 216), n[0]);
              v118 = v181.m128i_i64[0];
              v112 = (const __m128i *)v177;
            }
            v119 = (void *)v110[27];
            v120 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v118, (__m128i)(unsigned __int64)v118);
            if ( v119 )
            {
              v110[28] = 0;
              v177 = (__int64)v112;
              *(__m128i *)n = v120;
              qfree(v119);
              v120 = _mm_load_si128((const __m128i *)n);
              v112 = (const __m128i *)v177;
            }
            v110[27] = (__int64)v117;
            *((__m128i *)v110 + 14) = v120;
            if ( v110 + 30 != (__int64 *)&v112[15] )
            {
              v121 = v112[15].m128i_u64[1];
              if ( v121 && (v122 = v121 - 1, v121 != 1) )
              {
                v169 = (const void *)v112[15].m128i_i64[0];
                v170 = (void *)v110[30];
                if ( v110[32] < v121 )
                {
                  v171 = v112[15].m128i_i64[1];
                  v172 = v110[30];
                  n[0] = v121 - 1;
                  v177 = (__int64)v112;
                  v170 = (void *)qvector_reserve(v110 + 30, v172, v171, 1);
                  v110[30] = (__int64)v170;
                  v122 = n[0];
                  v112 = (const __m128i *)v177;
                }
                v110[31] = v121;
                v177 = (__int64)v112;
                memmove(v170, v169, v122);
                v112 = (const __m128i *)v177;
                *(_BYTE *)(v110[30] + v121 - 1) = 0;
              }
              else
              {
                v110[31] = 0;
              }
            }
            v177 = 0;
            v110[33] = v112[16].m128i_i64[1];
            *((_BYTE *)v110 + 272) = v112[17].m128i_i8[0];
            *((_BYTE *)v110 + 273) = v112[17].m128i_i8[1];
            *((_BYTE *)v110 + 274) = v112[17].m128i_i8[2];
            v123 = v112[18].m128i_u64[0];
            if ( v123 )
            {
              v181.m128i_i64[0] = (__int64)v112;
              n[0] = v123;
              v177 = qalloc_or_throw(32 * v123);
              v112 = (const __m128i *)v181.m128i_i64[0];
              v160 = v177;
              v161 = 0;
              v123 = n[0];
              do
              {
                v118 = v112[17].m128i_i64[1] + 32 * v161;
                *(_OWORD *)(v160 + 8) = 0;
                *(_QWORD *)v160 = 0;
                v162 = *(_QWORD *)(v118 + 8);
                if ( v162 )
                {
                  v163 = *(_QWORD *)(v118 + 8);
                  v189 = v161;
                  v181.m128i_i64[0] = v118;
                  v188 = v123;
                  v183 = v112;
                  n[0] = v162;
                  v164 = (void *)qalloc_or_throw(v163);
                  v165 = n[0];
                  v166 = (const void **)v181.m128i_i64[0];
                  *(_QWORD *)v160 = v164;
                  *(_QWORD *)(v160 + 16) = v165;
                  memcpy(v164, *v166, v165);
                  v112 = v183;
                  v161 = v189;
                  v123 = v188;
                  *(_QWORD *)(v160 + 8) = n[0];
                  v118 = v181.m128i_i64[0];
                }
                ++v161;
                v160 += 32;
                *(_QWORD *)(v160 - 8) = *(_QWORD *)(v118 + 24);
              }
              while ( v123 != v161 );
            }
            v124 = (char *)v110[35];
            v125 = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
            if ( v124 )
            {
              v126 = v110[36];
              if ( v126 )
              {
                n[0] = (size_t)v112;
                v127 = 0;
                v128 = v126;
                v181 = v125;
                do
                {
                  v129 = &v124[32 * v127];
                  v130 = *(void **)v129;
                  if ( *(_QWORD *)v129 )
                  {
                    *((_QWORD *)v129 + 1) = 0;
                    qfree(v130);
                    v124 = (char *)v110[35];
                  }
                  ++v127;
                }
                while ( v128 != v127 );
                v112 = (const __m128i *)n[0];
                v125 = _mm_load_si128(&v181);
              }
              v110[36] = 0;
              n[0] = (size_t)v112;
              v181 = v125;
              qfree(v124);
              v125 = _mm_load_si128(&v181);
              v112 = (const __m128i *)n[0];
            }
            v131 = v177;
            *((__m128i *)v110 + 18) = v125;
            v110[35] = v131;
            if ( &v112[19] != (const __m128i *)(v110 + 38) )
            {
              v177 = (__int64)v112;
              sub_4A0090((unsigned __int64)(v110 + 38), v112 + 19, (__int64)v124, v118, (__int64)v112);
              v112 = (const __m128i *)v177;
            }
            v132 = v112[23].m128i_i64[0];
            v133 = nullptr;
            if ( v132 )
            {
              v177 = (__int64)v112;
              v181.m128i_i64[0] = v132;
              n[0] = 8 * v132;
              v133 = (void *)qalloc_or_throw(8 * v132);
              memcpy(v133, *(const void **)(v177 + 360), n[0]);
              v132 = v181.m128i_i64[0];
              v112 = (const __m128i *)v177;
            }
            v134 = (void *)v110[45];
            v135 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v132, (__m128i)(unsigned __int64)v132);
            if ( v134 )
            {
              v110[46] = 0;
              v177 = (__int64)v112;
              *(__m128i *)n = v135;
              qfree(v134);
              v135 = _mm_load_si128((const __m128i *)n);
              v112 = (const __m128i *)v177;
            }
            v110[45] = (__int64)v133;
            *((__m128i *)v110 + 23) = v135;
            v136 = v112[24].m128i_i64[1];
            v183 = nullptr;
            if ( v136 )
            {
              v177 = (__int64)v112;
              v167 = qalloc_or_throw(144 * v136);
              v183 = (const __m128i *)v167;
              v112 = (const __m128i *)v177;
              v168 = 0;
              do
              {
                v181.m128i_i64[0] = (__int64)v112;
                v177 = v167;
                n[0] = v112[24].m128i_i64[0] + v167 - (_QWORD)v183;
                sub_495840(v167, n[0]);
                ++v168;
                v112 = (const __m128i *)v181.m128i_i64[0];
                v167 = v177 + 144;
                *(_DWORD *)(v177 + 140) = *(_DWORD *)(n[0] + 140);
              }
              while ( v136 != v168 );
            }
            v137 = (char *)v110[48];
            v138 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v136, (__m128i)(unsigned __int64)v136);
            if ( v137 )
            {
              v139 = v110[49];
              if ( v139 )
              {
                v177 = (__int64)v112;
                v140 = 0;
                v141 = v139;
                v181.m128i_i64[0] = v61;
                *(__m128i *)n = v138;
                do
                {
                  v142 = &v137[144 * v140];
                  clear_tinfo_t(v142 + 64);
                  v143 = *((void **)v142 + 5);
                  if ( v143 )
                  {
                    *((_QWORD *)v142 + 6) = 0;
                    qfree(v143);
                  }
                  v144 = *((void **)v142 + 2);
                  if ( v144 )
                  {
                    *((_QWORD *)v142 + 3) = 0;
                    qfree(v144);
                  }
                  ++v140;
                  v137 = (char *)v110[48];
                }
                while ( v141 != v140 );
                v112 = (const __m128i *)v177;
                v138 = _mm_load_si128((const __m128i *)n);
                v61 = v181.m128i_i64[0];
              }
              v110[49] = 0;
              v177 = (__int64)v112;
              *(__m128i *)n = v138;
              qfree(v137);
              v138 = _mm_load_si128((const __m128i *)n);
              v112 = (const __m128i *)v177;
            }
            v145 = (__int64)v183;
            *(__m128i *)(v110 + 49) = v138;
            v56 = nullptr;
            v59 = v112;
            v110[48] = v145;
            *((_DWORD *)v110 + 102) = v112[25].m128i_i32[2];
            *((_DWORD *)v110 + 103) = v112[25].m128i_i32[3];
            *((_BYTE *)v110 + 416) = v112[26].m128i_i8[0];
            *((_BYTE *)v110 + 417) = v112[26].m128i_i8[1];
            sub_495AD0((__int64)v112, 0);
          }
LABEL_48:
          if ( ++v62 == v61 )
            goto LABEL_49;
        }
      }
    }
    v57 = (_QWORD *)v176;
  }
  else
  {
    v61 = *(_QWORD *)(v55 + 48);
  }
  if ( v61 )
  {
    v67 = 424 * v61 - 424;
    while ( 1 )
    {
      --v61;
      v69 = 0;
      v70 = (__int64 *)(v67 + *(_QWORD *)(v173.m128i_i64[0] + 40));
      v71 = (__int64 *)(v67 + *((_QWORD *)v174 + 5));
      if ( v57 )
        v69 = v67 + *v57;
      v72 = *((_DWORD *)v70 + 44);
      if ( v72 )
      {
        v68 = *((_DWORD *)v71 + 44);
        if ( v68 )
        {
          v176 = v67 + *(_QWORD *)(v173.m128i_i64[0] + 40);
          v146 = *(_QWORD *)(v179 + 8);
          LODWORD(v175) = v68;
          sub_4A0820(v146, 1, 0, v68, v72, 1);
          sub_4A1140(v179, 0, v72, 1, (unsigned __int32)v175, 1);
          v70 = (__int64 *)v176;
          if ( v69 )
          {
            v147 = *(_DWORD *)(v69 + 176);
            if ( v147 )
            {
              v159 = *((_DWORD *)v71 + 44);
              v175 = (__int64 *)v176;
              sub_4A1660(v179, 1, 2, v159, v147, 1);
              v70 = v175;
            }
          }
          if ( (v70[51] & 4) == 0 || (v71[51] & 4) == 0 )
            goto LABEL_146;
        }
        else if ( (v70[51] & 4) == 0 || (v71[51] & 4) == 0 )
        {
          goto LABEL_58;
        }
      }
      else if ( (v70[51] & 4) == 0 || (v71[51] & 4) == 0 )
      {
        goto LABEL_64;
      }
      v148 = v179;
      v175 = v70;
      sub_4955E0((__int64)v70, *(_DWORD *)(v179 + 16));
      sub_4955E0((__int64)v71, *(_DWORD *)(v148 + 20));
      v70 = v175;
LABEL_146:
      if ( *((_DWORD *)v70 + 44) )
      {
LABEL_58:
        v67 -= 424;
        if ( !v61 )
          break;
      }
      else
      {
LABEL_64:
        if ( *((_DWORD *)v71 + 44) )
          goto LABEL_58;
        v175 = v70;
        sub_496580((__int64)v70);
        v73 = v175;
        v74 = *(_QWORD *)(v173.m128i_i64[0] + 48);
        v75 = 0x21CFB2B78C13521DLL * ((*(_QWORD *)(v173.m128i_i64[0] + 40) + 424 * v74 - (__int64)v175) >> 3) - 2;
        if ( v75 >= 0 )
        {
          v175 = v71;
          v76 = (__int64)v73;
          v77 = v75;
          do
          {
            sub_49B590(v76, (__int64 *)(v76 + 424));
            sub_496580(v76 + 424);
            v76 += 424;
            v78 = v77-- == 0;
          }
          while ( !v78 );
          v71 = v175;
          v74 = *(_QWORD *)(v173.m128i_i64[0] + 48);
        }
        *(_QWORD *)(v173.m128i_i64[0] + 48) = v74 - 1;
        sub_496580((__int64)v71);
        v79 = *((_QWORD *)v174 + 6);
        v80 = 0x21CFB2B78C13521DLL * ((*((_QWORD *)v174 + 5) + 424 * v79 - (__int64)v71) >> 3) - 2;
        if ( v80 >= 0 )
        {
          v81 = (__int64)v71;
          do
          {
            sub_49B590(v81, (__int64 *)(v81 + 424));
            sub_496580(v81 + 424);
            v81 += 424;
            v78 = v80-- == 0;
          }
          while ( !v78 );
          v79 = *((_QWORD *)v174 + 6);
        }
        *((_QWORD *)v174 + 6) = v79 - 1;
        if ( !v69 )
          goto LABEL_58;
        sub_4955E0(v69, *(_DWORD *)(v179 + 24));
        sub_496580(v69);
        v82 = v57[1];
        if ( 0x21CFB2B78C13521DLL * ((*v57 + 424 * v82 - v69) >> 3) - 2 >= 0 )
        {
          v83 = v69;
          v84 = 0x21CFB2B78C13521DLL * ((*v57 + 424 * v82 - v69) >> 3) - 2;
          do
          {
            sub_49B590(v83, (__int64 *)(v83 + 424));
            sub_496580(v83 + 424);
            v83 += 424;
            v78 = v84-- == 0;
          }
          while ( !v78 );
          v82 = v57[1];
        }
        v67 -= 424;
        v57[1] = v82 - 1;
        if ( !v61 )
          break;
      }
    }
  }
  sub_4A0F70((__int64)v180, &ptr);
  v85 = (char *)ptr;
  if ( ptr )
  {
    v86 = v191;
    if ( (_QWORD)v191 )
    {
      v87 = 0;
      do
      {
        v88 = &v85[24 * v87];
        v89 = *(void **)v88;
        if ( *(_QWORD *)v88 )
        {
          *((_QWORD *)v88 + 1) = 0;
          qfree(v89);
          v85 = (char *)ptr;
        }
        ++v87;
      }
      while ( v86 != v87 );
    }
    *(_QWORD *)&v191 = 0;
    qfree(v85);
  }
  if ( v315 )
  {
    *(_QWORD *)&v316 = 0;
    qfree(v315);
  }
  v90 = &v314;
  v91 = (char *)(v182 - 1);
  do
  {
    if ( *(_QWORD *)v90 )
    {
      v92 = *((_QWORD *)v90 + 1);
      v93 = 0;
      v94 = 0;
      if ( v92 )
      {
        do
        {
          ++v94;
          v95 = v93 + *(_QWORD *)v90;
          v93 += 432;
          sub_496580(v95);
        }
        while ( v92 != v94 );
      }
      *((_QWORD *)v90 + 1) = 0;
      qfree(*(void **)v90);
    }
    v90 -= 24;
  }
  while ( v91 != v90 );
  return v318 - __readfsqword(0x28u);
}
