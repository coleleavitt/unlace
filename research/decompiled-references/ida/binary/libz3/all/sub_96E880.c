__int64 __fastcall sub_96E880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  char **v7; // r13
  char **v8; // r12
  char **exception; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r13
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // rdx
  __int64 v21; // rax
  size_t v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  size_t v25; // r14
  __int64 v26; // rcx
  char *v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r11
  _BYTE *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rdi
  char *v33; // r13
  int v34; // edx
  __int64 v35; // rbx
  unsigned int v36; // esi
  char *v37; // rcx
  char *v38; // rax
  char *v39; // r12
  char *v40; // rbx
  void *v41; // rdi
  unsigned int v42; // ebx
  __int64 v43; // r12
  unsigned __int64 *v44; // rbx
  unsigned __int64 *v45; // r15
  _QWORD *v46; // rax
  __m128 *v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  char *v51; // rax
  _QWORD *v52; // rax
  int v53; // r15d
  char *v54; // rdi
  int v55; // ecx
  __int64 v56; // rsi
  char *v57; // rax
  char *v58; // rdx
  __int64 v59; // rbx
  unsigned int v60; // r12d
  size_t v61; // rbx
  _OWORD *v62; // rdx
  _OWORD *v63; // rcx
  _OWORD *v64; // rax
  __int64 v65; // rsi
  char *v66; // rdi
  int v67; // ecx
  __int64 v68; // rsi
  char *v69; // rax
  char *v70; // rdx
  __int64 v71; // rbx
  unsigned int v72; // r12d
  size_t v73; // rbx
  _OWORD *v74; // rdx
  _OWORD *v75; // rcx
  _OWORD *v76; // rax
  __int64 v77; // rsi
  char *v78; // rdi
  int v79; // edx
  __int64 v80; // rsi
  char *v81; // rcx
  char *v82; // rax
  __int64 v83; // rbx
  unsigned int v84; // ebx
  unsigned int v85; // ebx
  __int64 v86; // rcx
  _QWORD *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rcx
  bool v90; // zf
  _DWORD *v91; // rax
  __int64 v92; // r15
  int v93; // ebx
  int v94; // eax
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r13
  unsigned int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rsi
  int v103; // eax
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  __m128 *v106; // rbx
  int v107; // r8d
  __int64 v108; // rcx
  __m128 *v109; // r12
  int v110; // esi
  __int64 v111; // r8
  __m128 *v112; // rdi
  __m128 *v113; // rax
  __m128 *v114; // rcx
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // rsi
  unsigned int v118; // ebx
  size_t v119; // rsi
  unsigned int *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  int v123; // r9d
  __m128 *v124; // rdx
  __m128 *v125; // rax
  __int64 v126; // rsi
  const __m128i *v127; // r15
  __m128i *v128; // r10
  __int64 v129; // rdx
  __m128 *v130; // rsi
  __int64 v131; // rdi
  __m128i *v132; // rdx
  __m128i v133; // xmm0
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 v136; // r13
  _DWORD *v137; // rax
  __int64 v138; // r12
  int v139; // r15d
  int v140; // eax
  int v141; // r8d
  int v142; // r9d
  __int64 v143; // rax
  unsigned int *v144; // rbx
  __int64 v145; // r15
  __int64 v146; // rax
  __int64 *v147; // rdx
  unsigned int v148; // eax
  __int64 v149; // rcx
  int v150; // eax
  __int64 *v151; // rcx
  __m128 *v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rdx
  __int32 v155; // r12d
  unsigned int v156; // esi
  __m128 *v157; // rbx
  __int32 v158; // eax
  __int64 v159; // rcx
  __int64 v160; // rax
  __m128 *v161; // rsi
  __m128 *v162; // rax
  __m128 *v163; // rcx
  __int32 v164; // edx
  __int64 v165; // rsi
  unsigned int v166; // eax
  __int32 v168; // eax
  __m128 *v169; // rax
  int v170; // r8d
  __m128 *v171; // r9
  __m128 *v172; // rdx
  __int64 v173; // rdx
  const __m128i *v174; // r15
  __m128i *v175; // r10
  __int64 v176; // rdx
  __m128 *v177; // rsi
  __m128 *v178; // rdx
  unsigned int v179; // ecx
  size_t v180; // rsi
  __int64 v181; // rax
  __m128 *v182; // rdx
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  _BYTE *v185; // rdi
  __m128 *v186; // rdi
  void *v187; // rdx
  __int64 v188; // rdi
  void *v189; // rax
  void *v190; // rax
  __int64 v191; // rbx
  __int64 v192; // rdx
  unsigned int v193; // eax
  __int64 v194; // r13
  __int64 v195; // rbx
  unsigned int v196; // esi
  __int64 v197; // rsi
  __int64 *v198; // r13
  __int64 v199; // r8
  __int64 *v200; // r12
  int v201; // ebx
  unsigned int v202; // eax
  __int64 *v203; // rax
  __int64 v204; // rdi
  int v205; // eax
  __int64 v206; // rdi
  _DWORD *v207; // rdi
  _DWORD *v208; // rdx
  int v209; // esi
  __int64 v210; // rcx
  __int64 v211; // rcx
  char v212; // dl
  void *v213; // rsi
  void *v214; // rdi
  void (__fastcall ***v215)(_QWORD); // rbx
  int v216; // esi
  _DWORD *v217; // rdi
  _DWORD *v218; // rax
  __int64 v219; // rcx
  __int64 v220; // rdi
  __int64 v221; // rdi
  __int64 v222; // rbx
  __int64 v223; // rax
  __int64 v224; // rdi
  __int64 v225; // r11
  __int64 v226; // rdx
  __int64 v227; // rcx
  size_t v228; // rsi
  unsigned int v229; // esi
  size_t v230; // rsi
  unsigned int v231; // esi
  __m128 *v232; // r10
  int v233; // esi
  _DWORD *v234; // rdi
  __m128 *v235; // rax
  __int64 v236; // rcx
  __int64 v237; // rbx
  __int64 v238; // rax
  __int64 v239; // rdi
  __int64 v240; // rax
  __int64 v241; // rax
  __int32 v242; // r9d
  __int64 v243; // rax
  unsigned int v244; // r13d
  unsigned int v245; // ebx
  __int64 v246; // rax
  __int32 v247; // r9d
  __int64 v248; // rax
  unsigned int v249; // r13d
  unsigned int v250; // ebx
  __int64 v251; // rax
  __int64 v252; // [rsp-8h] [rbp-348h]
  char v253; // [rsp+0h] [rbp-340h]
  __int64 v254; // [rsp+0h] [rbp-340h]
  int v255; // [rsp+0h] [rbp-340h]
  int v256; // [rsp+0h] [rbp-340h]
  int v257; // [rsp+8h] [rbp-338h]
  int v258; // [rsp+8h] [rbp-338h]
  int v259; // [rsp+8h] [rbp-338h]
  int v260; // [rsp+10h] [rbp-330h]
  int v261; // [rsp+10h] [rbp-330h]
  int v262; // [rsp+10h] [rbp-330h]
  int v263; // [rsp+14h] [rbp-32Ch]
  int v264; // [rsp+18h] [rbp-328h]
  int v265; // [rsp+18h] [rbp-328h]
  int v266; // [rsp+18h] [rbp-328h]
  __int64 v267; // [rsp+20h] [rbp-320h]
  int v268; // [rsp+20h] [rbp-320h]
  int v269; // [rsp+20h] [rbp-320h]
  __int64 v270; // [rsp+28h] [rbp-318h]
  char v271; // [rsp+28h] [rbp-318h]
  char v272; // [rsp+28h] [rbp-318h]
  __int64 v273; // [rsp+30h] [rbp-310h]
  int v274; // [rsp+30h] [rbp-310h]
  int v275; // [rsp+30h] [rbp-310h]
  int v276; // [rsp+38h] [rbp-308h]
  int v277; // [rsp+38h] [rbp-308h]
  int v278; // [rsp+38h] [rbp-308h]
  __int64 v279; // [rsp+40h] [rbp-300h]
  int v280; // [rsp+40h] [rbp-300h]
  int v281; // [rsp+40h] [rbp-300h]
  void **v282; // [rsp+48h] [rbp-2F8h]
  void *v283; // [rsp+48h] [rbp-2F8h]
  void *v284; // [rsp+48h] [rbp-2F8h]
  unsigned int v285; // [rsp+48h] [rbp-2F8h]
  __int64 v286; // [rsp+50h] [rbp-2F0h]
  int v287; // [rsp+50h] [rbp-2F0h]
  __int64 v288; // [rsp+58h] [rbp-2E8h]
  __int64 v289; // [rsp+58h] [rbp-2E8h]
  __int64 v290; // [rsp+58h] [rbp-2E8h]
  unsigned int v291; // [rsp+58h] [rbp-2E8h]
  unsigned int v292; // [rsp+58h] [rbp-2E8h]
  __m128i *v293; // [rsp+60h] [rbp-2E0h]
  void *ptr; // [rsp+68h] [rbp-2D8h]
  __int64 v295; // [rsp+70h] [rbp-2D0h]
  __m128i v296; // [rsp+78h] [rbp-2C8h] BYREF
  __m128 *v297; // [rsp+88h] [rbp-2B8h] BYREF
  __m128i v298; // [rsp+90h] [rbp-2B0h] BYREF
  int v299; // [rsp+A0h] [rbp-2A0h]
  void *v300; // [rsp+A8h] [rbp-298h] BYREF
  int v301; // [rsp+B0h] [rbp-290h] BYREF
  __int64 v302; // [rsp+B8h] [rbp-288h] BYREF
  unsigned __int64 v303; // [rsp+C0h] [rbp-280h] BYREF
  void *v304; // [rsp+C8h] [rbp-278h] BYREF
  __int64 v305; // [rsp+D0h] [rbp-270h] BYREF
  void *v306; // [rsp+D8h] [rbp-268h] BYREF
  char *format; // [rsp+E0h] [rbp-260h] BYREF
  __int64 v308; // [rsp+E8h] [rbp-258h] BYREF
  _QWORD v309[2]; // [rsp+F0h] [rbp-250h] BYREF
  void *v310; // [rsp+100h] [rbp-240h] BYREF
  __int64 *v311; // [rsp+108h] [rbp-238h] BYREF
  _QWORD v312[2]; // [rsp+110h] [rbp-230h] BYREF
  void *v313; // [rsp+120h] [rbp-220h] BYREF
  size_t n; // [rsp+128h] [rbp-218h] BYREF
  _QWORD v315[2]; // [rsp+130h] [rbp-210h] BYREF
  void *src[2]; // [rsp+140h] [rbp-200h] BYREF
  _QWORD v317[2]; // [rsp+150h] [rbp-1F0h] BYREF
  _QWORD v318[2]; // [rsp+160h] [rbp-1E0h] BYREF
  int v319[8]; // [rsp+170h] [rbp-1D0h] BYREF
  __m128i v320; // [rsp+190h] [rbp-1B0h] BYREF
  __int128 v321; // [rsp+1A0h] [rbp-1A0h]
  __int128 v322; // [rsp+1B0h] [rbp-190h]
  __int128 v323; // [rsp+1C0h] [rbp-180h]
  char v324[8]; // [rsp+1D0h] [rbp-170h] BYREF
  int v325; // [rsp+1D8h] [rbp-168h]
  void *v326; // [rsp+1E0h] [rbp-160h]
  size_t v327; // [rsp+1E8h] [rbp-158h]
  _QWORD v328[2]; // [rsp+1F0h] [rbp-150h] BYREF
  _QWORD v329[28]; // [rsp+200h] [rbp-140h] BYREF
  __int16 v330; // [rsp+2E0h] [rbp-60h]
  __int128 v331; // [rsp+2E8h] [rbp-58h]
  __int128 v332; // [rsp+2F8h] [rbp-48h]

  v11 = *(_QWORD **)(a2 + 8);
  v270 = a2;
  v298.m128i_i64[0] = a3;
  v273 = a4;
  v267 = a5;
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 != v12 )
    {
      while ( 1 )
      {
        v14 = *v11;
        if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 104), *v11) )
          break;
        if ( v12 == ++v11 )
        {
          v298.m128i_i64[0] = a3;
          goto LABEL_32;
        }
      }
      v15 = *(_QWORD *)(a1 + 104);
      v297 = (__m128 *)v317;
      src[0] = v317;
      strcpy((char *)v317, " is not Boolean");
      src[1] = byte_9 + 6;
      v298.m128i_i64[0] = (__int64)v318;
      sub_1606360(v318, v14, v15, 0, 0, 0);
      v311 = (_QWORD *)(byte_9 + 2);
      v310 = v312;
      strcpy((char *)v312, "assumption ");
      std::ios_base::ios_base((std::ios_base *)v329);
      v330 = 0;
      v331 = 0;
      v332 = 0;
      v329[0] = (char *)&`vtable for'std::ios + 16;
      v329[27] = 0;
      v16 = `VTT for'std::ostringstream[1];
      v17 = `VTT for'std::ostringstream[2];
      v18 = *(_QWORD *)(v16 - 24);
      v320.m128i_i64[0] = v16;
      *(__int64 *)((char *)v320.m128i_i64 + v18) = v17;
      std::ios::init();
      v329[0] = (char *)&`vtable for'std::ostringstream + 64;
      v296.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
      v296.m128i_i64[1] = (__int64)v324;
      v320 = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      v321 = 0;
      v322 = 0;
      v323 = 0;
      std::locale::locale((std::locale *)v324);
      v325 = 16;
      v326 = v328;
      LOBYTE(v328[0]) = 0;
      v320.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
      v327 = 0;
      std::ios::init();
      v19 = std::__ostream_insert<char,std::char_traits<char>>();
      sub_160E8B0(v19, v298.m128i_i64[0]);
      v20 = v326;
      if ( (_QWORD)v323 )
      {
        v21 = v322;
        if ( !(_QWORD)v322 || (unsigned __int64)v322 < (unsigned __int64)v323 )
          v21 = v323;
        v327 = v21 - *((_QWORD *)&v322 + 1);
        *((_BYTE *)v326 + v21 - *((_QWORD *)&v322 + 1)) = 0;
        v20 = v326;
        v313 = v315;
        if ( v326 != v328 )
          goto LABEL_10;
      }
      else
      {
        v313 = v315;
        if ( v326 != v328 )
        {
LABEL_10:
          v313 = v20;
          v315[0] = v328[0];
          v22 = v327;
          goto LABEL_11;
        }
      }
      v22 = v327;
      v207 = v315;
      v208 = v328;
      v209 = v327 + 1;
      if ( (unsigned int)(v327 + 1) >= 8 )
      {
        v225 = v298.m128i_i64[0];
        LODWORD(v226) = 0;
        do
        {
          v227 = (unsigned int)v226;
          v226 = (unsigned int)(v226 + 8);
          *(_QWORD *)((char *)v315 + v227) = *(_QWORD *)((char *)v328 + v227);
        }
        while ( (unsigned int)v226 < (v209 & 0xFFFFFFF8) );
        v207 = (_DWORD *)((char *)v315 + v226);
        v298.m128i_i64[0] = v225;
        v208 = (_DWORD *)((char *)v328 + v226);
      }
      v210 = 0;
      if ( (v209 & 4) != 0 )
      {
        *v207 = *v208;
        v210 = 4;
      }
      if ( (v209 & 2) != 0 )
      {
        *(_WORD *)((char *)v207 + v210) = *(_WORD *)((char *)v208 + v210);
        v210 += 2;
      }
      if ( (v209 & 1) != 0 )
        *((_BYTE *)v207 + v210) = *((_BYTE *)v208 + v210);
LABEL_11:
      n = v22;
      v326 = v328;
      v327 = 0;
      LOBYTE(v328[0]) = 0;
      std::stringbuf::_M_sync();
      v23 = _mm_loadl_epi64(&v296);
      v329[0] = (char *)&`vtable for'std::ostringstream + 64;
      v320 = _mm_unpacklo_epi64(v23, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
      if ( v326 != v328 )
        operator delete(v326, v328[0] + 1LL);
      v320.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
      std::locale::~locale((std::locale *)v296.m128i_i64[1]);
      v24 = *(_QWORD *)(v16 - 24);
      v320.m128i_i64[0] = v16;
      *(__int64 *)((char *)v320.m128i_i64 + v24) = v17;
      v329[0] = (char *)&`vtable for'std::ios + 16;
      std::ios_base::~ios_base((std::ios_base *)v329);
      v25 = n;
      v26 = (__int64)v313;
      v27 = (char *)src[1] + n;
      if ( v313 == v315 )
      {
        v29 = (unsigned __int64)src[0];
        if ( (unsigned __int64)v27 > 0xF )
        {
          if ( src[0] == v297 )
            goto LABEL_309;
          v28 = 15;
          goto LABEL_16;
        }
        if ( (void *)(0x7FFFFFFFFFFFFFFFLL - n) < src[1] )
          goto LABEL_457;
      }
      else
      {
        v28 = v315[0];
        v29 = (unsigned __int64)src[0];
        if ( v315[0] < (unsigned __int64)v27 )
        {
          if ( src[0] == v297 )
          {
            if ( (unsigned __int64)v27 > 0xF )
            {
              if ( (void *)(0x7FFFFFFFFFFFFFFFLL - n) >= src[1] )
                goto LABEL_309;
              goto LABEL_457;
            }
            if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1] >= n )
            {
LABEL_287:
              if ( (unsigned __int64)v313 >= v29 && (char *)src[1] + v29 >= v313 )
              {
                std::string::_M_replace_cold();
                v29 = (unsigned __int64)src[0];
                goto LABEL_295;
              }
              if ( src[1] )
              {
                if ( !n )
                {
LABEL_295:
                  src[1] = v27;
                  v186 = v297;
                  v27[v29] = 0;
                  format = (char *)v309;
                  v187 = src[1];
                  if ( src[0] == v186 )
                  {
                    v232 = v186;
                    v233 = LODWORD(src[1]) + 1;
                    v234 = v309;
                    v235 = v232;
                    if ( (unsigned int)(LODWORD(src[1]) + 1) >= 8 )
                    {
                      v237 = v298.m128i_i64[0];
                      LODWORD(v238) = 0;
                      do
                      {
                        v239 = (unsigned int)v238;
                        v238 = (unsigned int)(v238 + 8);
                        *(_QWORD *)((char *)v309 + v239) = *(unsigned __int64 *)((char *)v232->m128_u64 + v239);
                      }
                      while ( (unsigned int)v238 < (v233 & 0xFFFFFFF8) );
                      v234 = (_DWORD *)((char *)v309 + v238);
                      v298.m128i_i64[0] = v237;
                      v235 = (__m128 *)((char *)v297 + v238);
                    }
                    v236 = 0;
                    if ( (v233 & 4) != 0 )
                    {
                      *v234 = v235->m128_i32[0];
                      v236 = 2;
                    }
                    if ( (v233 & 2) != 0 )
                    {
                      *(_WORD *)((char *)v234 + v236 * 2) = v235->m128_i16[v236];
                      ++v236;
                    }
                    if ( (v233 & 1) != 0 )
                      *((_BYTE *)v234 + v236 * 2) = v235->m128_i8[v236 * 2];
                  }
                  else
                  {
                    format = (char *)src[0];
                    v309[0] = v317[0];
                  }
                  v308 = (__int64)v187;
                  src[1] = nullptr;
                  src[0] = v297;
                  LOBYTE(v317[0]) = 0;
                  if ( v313 != v315 )
                    operator delete(v313, v315[0] + 1LL);
LABEL_26:
                  if ( v310 != v312 )
                    operator delete(v310, v312[0] + 1LL);
                  sub_18572D0(v319);
                  if ( src[0] != v297 )
                    operator delete(src[0], v317[0] + 1LL);
                  sub_1875640(format, v253);
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v320.m128i_i64, format);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v320);
                  sub_233E40((__int64)&v320);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v185 = (_BYTE *)(v29 + n);
                if ( src[1] == (char *)&dword_0 + 1 )
                {
                  *v185 = *(_BYTE *)v29;
                }
                else
                {
                  v296.m128i_i64[0] = (__int64)v313;
                  v296.m128i_i64[1] = v29;
                  memmove(v185, (const void *)v29, (size_t)src[1]);
                  v29 = v296.m128i_u64[1];
                  v26 = v296.m128i_i64[0];
                }
              }
              else if ( !n )
              {
                goto LABEL_295;
              }
              if ( v25 == 1 )
                *(_BYTE *)v29 = *(_BYTE *)v26;
              else
                memcpy((void *)v29, (const void *)v26, v25);
              v29 = (unsigned __int64)src[0];
              goto LABEL_295;
            }
LABEL_460:
            std::__throw_length_error("basic_string::_M_replace");
          }
LABEL_16:
          if ( v317[0] < (unsigned __int64)v27 )
          {
            if ( (void *)(0x7FFFFFFFFFFFFFFFLL - n) >= src[1] )
            {
              if ( v28 >= (unsigned __int64)v27 )
                goto LABEL_19;
LABEL_309:
              sub_23A830(&v313, n, 0, (char *)v29, (size_t)src[1]);
              v26 = (__int64)v313;
LABEL_23:
              n = (size_t)v27;
              v27[v26] = 0;
              format = (char *)v309;
              v31 = n;
              if ( v313 == v315 )
              {
                v216 = n + 1;
                v217 = v309;
                v218 = v315;
                if ( (unsigned int)(n + 1) >= 8 )
                {
                  v222 = v298.m128i_i64[0];
                  LODWORD(v223) = 0;
                  do
                  {
                    v224 = (unsigned int)v223;
                    v223 = (unsigned int)(v223 + 8);
                    *(_QWORD *)((char *)v309 + v224) = *(_QWORD *)((char *)v315 + v224);
                  }
                  while ( (unsigned int)v223 < (v216 & 0xFFFFFFF8) );
                  v217 = (_DWORD *)((char *)v309 + v223);
                  v298.m128i_i64[0] = v222;
                  v218 = (_DWORD *)((char *)v315 + v223);
                }
                v219 = 0;
                if ( (v216 & 4) != 0 )
                {
                  *v217 = *v218;
                  v219 = 4;
                }
                if ( (v216 & 2) != 0 )
                {
                  *(_WORD *)((char *)v217 + v219) = *(_WORD *)((char *)v218 + v219);
                  v219 += 2;
                }
                if ( (v216 & 1) != 0 )
                  *((_BYTE *)v217 + v219) = *((_BYTE *)v218 + v219);
              }
              else
              {
                format = (char *)v313;
                v309[0] = v315[0];
              }
              v308 = v31;
              goto LABEL_26;
            }
LABEL_457:
            std::__throw_length_error("basic_string::append");
          }
          if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1] >= n )
            goto LABEL_287;
          goto LABEL_460;
        }
        if ( (void *)(0x7FFFFFFFFFFFFFFFLL - n) < src[1] )
          goto LABEL_457;
      }
LABEL_19:
      if ( src[1] )
      {
        v30 = (char *)v313 + n;
        if ( src[1] == (char *)&dword_0 + 1 )
          *v30 = *(_BYTE *)v29;
        else
          memcpy(v30, (const void *)v29, (size_t)src[1]);
        v26 = (__int64)v313;
      }
      goto LABEL_23;
    }
  }
LABEL_32:
  if ( *(_DWORD *)(a1 + 10460) || *(_DWORD *)(a1 + 10464) )
  {
    v32 = *(unsigned int *)(a1 + 10456);
    v33 = *(char **)(a1 + 10448);
    v34 = 0;
    v35 = v298.m128i_i64[0];
    v36 = *(_DWORD *)(a1 + 10456);
    v37 = &v33[40 * v32];
    v38 = v33;
    if ( v33 == v37 )
      goto LABEL_279;
    do
    {
      while ( *((_DWORD *)v38 + 1) )
      {
        *((_DWORD *)v38 + 1) = 0;
        v38 += 40;
        if ( v37 == v38 )
          goto LABEL_38;
      }
      v38 += 40;
      ++v34;
    }
    while ( v37 != v38 );
LABEL_38:
    v298.m128i_i64[0] = v35;
    if ( v36 <= 0x10 || 3 * v36 >= 4 * v34 )
    {
LABEL_279:
      *(_QWORD *)(a1 + 10460) = 0;
      goto LABEL_48;
    }
    if ( v33 )
    {
      v39 = v33;
      v40 = &v33[40 * v32];
      do
      {
        while ( 1 )
        {
          v41 = *((void **)v39 + 2);
          if ( !v41 )
            break;
          sub_186B220(v41);
          v39 += 40;
          if ( v40 == v39 )
            goto LABEL_44;
        }
        v39 += 40;
      }
      while ( v40 != v39 );
LABEL_44:
      sub_186B220(v33);
      v42 = *(_DWORD *)(a1 + 10456);
      *(_QWORD *)(a1 + 10448) = 0;
      v42 >>= 1;
      *(_DWORD *)(a1 + 10456) = v42;
      v43 = v42;
      v297 = (__m128 *)sub_186B270(40LL * v42);
      if ( !v42 )
        goto LABEL_47;
    }
    else
    {
      *(_QWORD *)(a1 + 10448) = 0;
      v231 = v36 >> 1;
      v43 = v231;
      *(_DWORD *)(a1 + 10456) = v231;
      v297 = (__m128 *)sub_186B270(40LL * v231);
    }
    v44 = (unsigned __int64 *)v297;
    v45 = (unsigned __int64 *)v297 + 5 * v43;
    do
    {
      *v44 = 0;
      v46 = (_QWORD *)sub_186B270(0x60u);
      v44[2] = (unsigned __int64)v46;
      v44 += 5;
      *(v44 - 2) = 8;
      *((_DWORD *)v44 - 2) = 0;
      *v46 = 0;
      *(_QWORD *)((char *)v46 + 12) = 0;
      v46[3] = 0;
      *(_QWORD *)((char *)v46 + 36) = 0;
      v46[6] = 0;
      *(_QWORD *)((char *)v46 + 60) = 0;
      v46[9] = 0;
      *(_QWORD *)((char *)v46 + 84) = 0;
    }
    while ( v45 != v44 );
LABEL_47:
    v47 = v297;
    *(_QWORD *)(a1 + 10460) = 0;
    *(_QWORD *)(a1 + 10448) = v47;
  }
LABEL_48:
  *(_QWORD *)&v321 = 8;
  v48 = (_QWORD *)sub_186B270(0x60u);
  *v48 = 0;
  *(_QWORD *)((char *)v48 + 12) = 0;
  v48[3] = 0;
  *(_QWORD *)((char *)v48 + 36) = 0;
  v48[6] = 0;
  *(_QWORD *)((char *)v48 + 60) = 0;
  v48[9] = 0;
  *(_QWORD *)((char *)v48 + 84) = 0;
  v320.m128i_i64[1] = (__int64)v48;
  DWORD2(v321) = 0;
  v320.m128i_i32[0] = (unsigned int)dword_1C7EC8C >> 1;
  v293 = &v320;
  sub_9768E0(a1 + 10448, &v320, v49, v50);
  sub_186B220(v48);
  sub_8F91D0(a1);
  v51 = *(char **)(a1 + 104);
  v311 = nullptr;
  format = v51;
  v310 = v51;
  v52 = (_QWORD *)sub_186B270(0x60u);
  v53 = *(_DWORD *)(a1 + 10532);
  ptr = v52;
  *v52 = 0;
  *(_QWORD *)((char *)v52 + 12) = 0;
  v52[3] = 0;
  *(_QWORD *)((char *)v52 + 36) = 0;
  v52[6] = 0;
  *(_QWORD *)((char *)v52 + 60) = 0;
  v52[9] = 0;
  *(_QWORD *)((char *)v52 + 84) = 0;
  v318[1] = 8;
  v319[0] = 0;
  if ( v53 || *(_DWORD *)(a1 + 10536) )
  {
    v54 = *(char **)(a1 + 10520);
    v55 = 0;
    v56 = *(unsigned int *)(a1 + 10528);
    v57 = v54;
    v58 = &v54[16 * v56];
    if ( v54 == v58 )
      goto LABEL_64;
    v59 = v298.m128i_i64[0];
    do
    {
      while ( *(_QWORD *)v57 )
      {
        *(_QWORD *)v57 = 0;
        v57 += 16;
        if ( v58 == v57 )
          goto LABEL_55;
      }
      v57 += 16;
      ++v55;
    }
    while ( v58 != v57 );
LABEL_55:
    v298.m128i_i64[0] = v59;
    if ( (unsigned int)v56 <= 0x10 || 3 * (int)v56 >= (unsigned int)(4 * v55) )
      goto LABEL_64;
    if ( v54 )
    {
      sub_186B220(v54);
      v60 = *(_DWORD *)(a1 + 10528);
      *(_QWORD *)(a1 + 10520) = 0;
      v60 >>= 1;
      *(_DWORD *)(a1 + 10528) = v60;
      v61 = v60;
      v62 = (_OWORD *)sub_186B270(v61 * 16);
      if ( !v60 )
        goto LABEL_63;
    }
    else
    {
      *(_QWORD *)(a1 + 10520) = 0;
      v228 = (unsigned int)v56 >> 1;
      *(_DWORD *)(a1 + 10528) = v228;
      v61 = v228;
      v62 = (_OWORD *)sub_186B270(16 * v228);
    }
    v63 = &v62[v61];
    a6 = 0;
    v64 = v62;
    if ( ((v61 * 16) & 0x10) == 0 )
    {
      v65 = v298.m128i_i64[0];
      do
      {
LABEL_61:
        *v64 = 0;
        v64 += 2;
        *(v64 - 1) = 0;
      }
      while ( v64 != v63 );
      v298.m128i_i64[0] = v65;
      goto LABEL_63;
    }
    v64 = v62 + 1;
    v65 = v298.m128i_i64[0];
    *v62 = 0;
    if ( v62 + 1 != v63 )
      goto LABEL_61;
LABEL_63:
    *(_QWORD *)(a1 + 10520) = v62;
LABEL_64:
    *(_QWORD *)(a1 + 10532) = 0;
  }
  v254 = a1 + 10472;
  if ( *(_DWORD *)(a1 + 10484) || *(_DWORD *)(a1 + 10488) )
  {
    v66 = *(char **)(a1 + 10472);
    v67 = 0;
    v68 = *(unsigned int *)(a1 + 10480);
    v69 = v66;
    v70 = &v66[16 * v68];
    if ( v66 == v70 )
      goto LABEL_81;
    v71 = v298.m128i_i64[0];
    do
    {
      while ( *(_QWORD *)v69 )
      {
        *(_QWORD *)v69 = 0;
        v69 += 16;
        if ( v70 == v69 )
          goto LABEL_72;
      }
      v69 += 16;
      ++v67;
    }
    while ( v70 != v69 );
LABEL_72:
    v298.m128i_i64[0] = v71;
    if ( (unsigned int)v68 <= 0x10 || 3 * (int)v68 >= (unsigned int)(4 * v67) )
      goto LABEL_81;
    if ( v66 )
    {
      sub_186B220(v66);
      v72 = *(_DWORD *)(a1 + 10480);
      *(_QWORD *)(a1 + 10472) = 0;
      v72 >>= 1;
      *(_DWORD *)(a1 + 10480) = v72;
      v73 = v72;
      v74 = (_OWORD *)sub_186B270(v73 * 16);
      if ( !v72 )
        goto LABEL_80;
    }
    else
    {
      *(_QWORD *)(a1 + 10472) = 0;
      v230 = (unsigned int)v68 >> 1;
      *(_DWORD *)(a1 + 10480) = v230;
      v73 = v230;
      v74 = (_OWORD *)sub_186B270(16 * v230);
    }
    v75 = &v74[v73];
    a6 = 0;
    v76 = v74;
    if ( ((v73 * 16) & 0x10) == 0 )
    {
      v77 = v298.m128i_i64[0];
      do
      {
LABEL_78:
        *v76 = 0;
        v76 += 2;
        *(v76 - 1) = 0;
      }
      while ( v75 != v76 );
      v298.m128i_i64[0] = v77;
      goto LABEL_80;
    }
    v76 = v74 + 1;
    v77 = v298.m128i_i64[0];
    *v74 = 0;
    if ( v75 != v74 + 1 )
      goto LABEL_78;
LABEL_80:
    *(_QWORD *)(a1 + 10472) = v74;
LABEL_81:
    *(_QWORD *)(a1 + 10484) = 0;
  }
  if ( !*(_DWORD *)(a1 + 10508) && !*(_DWORD *)(a1 + 10512) )
    goto LABEL_101;
  v78 = *(char **)(a1 + 10496);
  v79 = 0;
  v80 = *(unsigned int *)(a1 + 10504);
  v81 = &v78[24 * v80];
  v82 = v78;
  if ( v78 != v81 )
  {
    v83 = v298.m128i_i64[0];
    do
    {
      while ( *((_DWORD *)v82 + 1) )
      {
        *((_DWORD *)v82 + 1) = 0;
        v82 += 24;
        if ( v81 == v82 )
          goto LABEL_89;
      }
      v82 += 24;
      ++v79;
    }
    while ( v81 != v82 );
LABEL_89:
    v298.m128i_i64[0] = v83;
    if ( (unsigned int)v80 > 0x10 && 3 * (int)v80 < (unsigned int)(4 * v79) )
    {
      if ( v78 )
      {
        sub_186B220(v78);
        v84 = *(_DWORD *)(a1 + 10504);
        *(_QWORD *)(a1 + 10496) = 0;
        v85 = v84 >> 1;
        *(_DWORD *)(a1 + 10504) = v85;
        v86 = sub_186B270(24LL * v85);
        if ( !v85 )
          goto LABEL_99;
      }
      else
      {
        *(_QWORD *)(a1 + 10496) = 0;
        v229 = (unsigned int)v80 >> 1;
        *(_DWORD *)(a1 + 10504) = v229;
        v85 = v229;
        v86 = sub_186B270(24LL * v229);
      }
      v87 = (_QWORD *)v86;
      if ( v85 != 1 )
      {
        v88 = v298.m128i_i64[0];
        do
        {
          *v87 = 0;
          v87 += 6;
          *(v87 - 3) = 0;
        }
        while ( v87 != (_QWORD *)(v86 + 48LL * (v85 >> 1)) );
        v298.m128i_i64[0] = v88;
        if ( (v85 & 1) == 0 )
          goto LABEL_99;
        v87 = (_QWORD *)(v86 + 24LL * (v85 & 0x7FFFFFFE));
      }
      *v87 = 0;
LABEL_99:
      *(_QWORD *)(a1 + 10496) = v86;
    }
  }
  *(_QWORD *)(a1 + 10508) = 0;
LABEL_101:
  v263 = *(_DWORD *)(a1 + 9464);
  v89 = *(_QWORD *)(v298.m128i_i64[0] + 8);
  v296.m128i_i64[0] = v89;
  if ( v89 )
  {
    v288 = v89 + 8LL * *(unsigned int *)(v89 - 4);
    if ( v89 == v288 )
    {
      LOBYTE(v295) = 0;
      v296.m128i_i64[0] = 0;
      goto LABEL_178;
    }
    v296.m128i_i64[1] = v89;
    LOBYTE(v295) = 0;
    v296.m128i_i64[0] = 0;
    v282 = &v306;
    while ( 1 )
    {
      v90 = *(_WORD *)(*(_QWORD *)v296.m128i_i64[1] + 4LL) == 0;
      v297 = *(__m128 **)v296.m128i_i64[1];
      if ( !v90 )
        break;
LABEL_105:
      if ( v297[1].m128_i32[2] )
        break;
      v91 = *(_DWORD **)(v297[1].m128_u64[0] + 24);
      if ( v91 )
      {
        if ( *v91 != -1 )
          break;
      }
      v134 = (__int64)v297;
      ++v297->m128_i32[2];
      v302 = v134;
      v298 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v134, (__m128i)(unsigned __int64)v134);
      v308 = v296.m128i_i64[0];
      sub_96A710(&v308, &v302);
      a6 = _mm_load_si128(&v298);
      v296.m128i_i64[0] = v308;
      *(__m128i *)src = a6;
      sub_686B20(v254, (const __m128i *)src);
      v296.m128i_i64[1] += 8;
      if ( v288 == v296.m128i_i64[1] )
        goto LABEL_178;
    }
    if ( !(_BYTE)v295 )
      sub_8F7BA0(a1, a6, a7);
    while ( 1 )
    {
      v92 = *(_QWORD *)(a1 + 104);
      v93 = sub_15D1F10(v297);
      sub_180C5A0(v282, "v");
      v94 = sub_15E3D10(
              v92,
              (int)v282,
              (int)&qword_18D6CD0,
              0,
              0,
              v93,
              1,
              v252,
              v254,
              v257,
              v260,
              v264,
              v267,
              v270,
              v273,
              v276,
              v279,
              (int)v282,
              v286,
              v288,
              (int)v293,
              (int)ptr,
              v92,
              v296.m128i_i32[0],
              v296.m128i_i32[2],
              (int)v297,
              v298.m128i_i32[0],
              v298.m128i_i32[2],
              v299,
              v300,
              v301,
              v302);
      v97 = sub_15DC610(v92, v94, 0, 0, v95, v96, v255, v258, v261, v265, v268, v271, v274, v277, v280, v283);
      v298.m128i_i64[0] = v97;
      if ( v97 )
        ++*(_DWORD *)(v97 + 8);
      v286 = *(_QWORD *)(a1 + 104);
      v98 = sub_15E1B70(v286);
      v99 = v98;
      if ( v98 )
        ++*(_DWORD *)(v98 + 8);
      sub_8F8A20(a1);
      if ( v298.m128i_i64[0] )
        ++*(_DWORD *)(v298.m128i_i64[0] + 8);
      if ( v296.m128i_i64[0] )
      {
        v100 = *(_DWORD *)(v296.m128i_i64[0] - 4);
        if ( v100 == *(_DWORD *)(v296.m128i_i64[0] - 8) )
        {
          v118 = (3 * v100 + 1) >> 1;
          v119 = 8 * v118 + 8;
          if ( 8 * v100 + 8 >= (unsigned int)v119 || v100 >= v118 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v293->m128i_i64, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v293);
            sub_233E40((__int64)v293);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v120 = (unsigned int *)sub_186B300((void *)(v296.m128i_i64[0] - 8), v119);
          v121 = v120[1];
          *v120 = v118;
          v296.m128i_i64[0] = (__int64)(v120 + 2);
          v102 = (__int64)(v120 + 2);
          LODWORD(v120) = v121;
          v104 = (_QWORD *)(v296.m128i_i64[0] + 8 * v121);
          v103 = (_DWORD)v120 + 1;
        }
        else
        {
          v101 = v100;
          v102 = v296.m128i_i64[0];
          v103 = v100 + 1;
          v104 = (_QWORD *)(v296.m128i_i64[0] + 8 * v101);
        }
      }
      else
      {
        v183 = (_QWORD *)sub_186B270(0x18u);
        *v183 = 2;
        v296.m128i_i64[0] = (__int64)(v183 + 1);
        v104 = v183 + 1;
        v102 = (__int64)(v183 + 1);
        v103 = 1;
      }
      *v104 = v298.m128i_i64[0];
      *(_DWORD *)(v102 - 4) = v103;
      v105 = *(unsigned int *)(a1 + 10480);
      if ( 3 * (int)v105 >= (unsigned int)(4 * (*(_DWORD *)(a1 + 10484) + *(_DWORD *)(a1 + 10488))) )
      {
        v106 = *(__m128 **)(a1 + 10472);
        v107 = v105 - 1;
        v108 = 16 * v105;
        v109 = (__m128 *)((char *)v106 + v108);
        goto LABEL_121;
      }
      v276 = 2 * v105;
      v279 = 16LL * (unsigned int)(2 * v105);
      v122 = sub_186B270(v279);
      v108 = v279;
      v123 = v276;
      v106 = (__m128 *)v122;
      v124 = (__m128 *)v122;
      v125 = (__m128 *)(v122 + v279);
      if ( v276 )
      {
        if ( (((_BYTE)v125 - (_BYTE)v106) & 0x10) == 0 )
        {
          v126 = v298.m128i_i64[0];
          do
          {
LABEL_154:
            *v124 = 0;
            v124 += 2;
            v124[-1] = 0;
          }
          while ( v125 != v124 );
          v298.m128i_i64[0] = v126;
          goto LABEL_156;
        }
        v124 = v106 + 1;
        v126 = v298.m128i_i64[0];
        *v106 = 0;
        if ( v125 != &v106[1] )
          goto LABEL_154;
      }
LABEL_156:
      v127 = *(const __m128i **)(a1 + 10472);
      v107 = v276 - 1;
      v109 = v125;
      v128 = (__m128i *)&v127[*(unsigned int *)(a1 + 10480)];
      if ( v127 != v128 )
      {
        do
        {
          while ( v127->m128i_i64[0] <= 1uLL )
          {
            if ( v128 == ++v127 )
              goto LABEL_165;
          }
          v129 = 16LL * (*(_DWORD *)(v127->m128i_i64[0] + 12) & (unsigned int)v107);
          v130 = &v106[(unsigned __int64)v129 / 0x10];
          if ( v279 == v129 )
          {
LABEL_169:
            if ( v106 == v130 )
            {
LABEL_273:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v131 = v298.m128i_i64[0];
            v132 = (__m128i *)v106;
            while ( v132->m128i_i64[0] )
            {
              if ( v130 == (__m128 *)++v132 )
                goto LABEL_273;
            }
          }
          else
          {
            v131 = v298.m128i_i64[0];
            v132 = (__m128i *)&v106[(unsigned __int64)v129 / 0x10];
            while ( v132->m128i_i64[0] )
            {
              if ( v125 == (__m128 *)++v132 )
                goto LABEL_169;
            }
          }
          v133 = _mm_loadu_si128(v127++);
          v298.m128i_i64[0] = v131;
          *v132 = v133;
        }
        while ( v128 != v127 );
LABEL_165:
        v128 = *(__m128i **)(a1 + 10472);
      }
      if ( v128 )
      {
        v264 = v276--;
        sub_186B220(v128);
        v123 = v264;
        v107 = v276;
        v108 = v279;
      }
      *(_QWORD *)(a1 + 10472) = v106;
      *(_DWORD *)(a1 + 10480) = v123;
      *(_DWORD *)(a1 + 10488) = 0;
LABEL_121:
      v110 = *(_DWORD *)(v298.m128i_i64[0] + 12);
      a6 = (__m128i)_mm_loadh_ps((const double *)&v297);
      v111 = 16LL * (v110 & (unsigned int)v107);
      v112 = &v106[(unsigned __int64)v111 / 0x10];
      if ( v111 == v108 )
      {
        v114 = nullptr;
LABEL_129:
        if ( v112 == v106 )
        {
LABEL_137:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v116 = v106->m128_u64[0];
            if ( v106->m128_u64[0] <= 1 )
              break;
            if ( *(_DWORD *)(v116 + 12) == v110 && v298.m128i_i64[0] == v116 )
            {
              *v106 = (__m128)a6;
              goto LABEL_138;
            }
            if ( v112 == ++v106 )
              goto LABEL_137;
          }
          if ( !v116 )
            break;
          v114 = v106++;
          if ( v112 == v106 )
            goto LABEL_137;
        }
        if ( v114 )
          goto LABEL_175;
        v114 = v106;
      }
      else
      {
        v113 = &v106[(unsigned __int64)v111 / 0x10];
        v114 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v115 = v113->m128_u64[0];
            if ( v113->m128_u64[0] <= 1 )
              break;
            if ( *(_DWORD *)(v115 + 12) == v110 && v298.m128i_i64[0] == v115 )
            {
              *v113 = (__m128)a6;
              goto LABEL_138;
            }
            if ( ++v113 == v109 )
              goto LABEL_129;
          }
          if ( !v115 )
            break;
          v114 = v113++;
          if ( v113 == v109 )
            goto LABEL_129;
        }
        if ( v114 )
LABEL_175:
          --*(_DWORD *)(a1 + 10488);
        else
          v114 = v113;
      }
      *v114 = (__m128)a6;
      ++*(_DWORD *)(a1 + 10484);
LABEL_138:
      if ( v99 )
      {
        v90 = (*(_DWORD *)(v99 + 8))-- == 1;
        if ( v90 )
          sub_15D7BC0(v286, v99);
      }
      v117 = v298.m128i_i64[0];
      LODWORD(v297) = *(_DWORD *)(v298.m128i_i64[0] + 8);
      v90 = (_DWORD)v297 == 1;
      *(_DWORD *)(v298.m128i_i64[0] + 8) = (_DWORD)v297 - 1;
      if ( v90 )
        sub_15D7BC0(v295, v117);
      v296.m128i_i64[1] += 8;
      if ( v288 == v296.m128i_i64[1] )
      {
        LOBYTE(v295) = 1;
        goto LABEL_178;
      }
      LOBYTE(v295) = 1;
      v90 = *(_WORD *)(*(_QWORD *)v296.m128i_i64[1] + 4LL) == 0;
      v297 = *(__m128 **)v296.m128i_i64[1];
      if ( v90 )
        goto LABEL_105;
    }
  }
  LOBYTE(v295) = 0;
LABEL_178:
  v135 = *(_QWORD *)(v270 + 8);
  if ( !v135 )
    goto LABEL_220;
  v289 = v135 + 8LL * *(unsigned int *)(v135 - 4);
  if ( v289 == v135 )
    goto LABEL_220;
  v298.m128i_i64[0] = *(_QWORD *)(v270 + 8);
  do
  {
    v136 = *(_QWORD *)v298.m128i_i64[0];
    if ( *(_WORD *)(*(_QWORD *)v298.m128i_i64[0] + 4LL)
      || *(_DWORD *)(v136 + 24)
      || (v137 = *(_DWORD **)(*(_QWORD *)(v136 + 16) + 24LL)) != nullptr && *v137 != -1 )
    {
      if ( !(_BYTE)v295 )
        sub_8F7BA0(a1, a6, a7);
      v138 = *(_QWORD *)(a1 + 104);
      v139 = sub_15D1F10(v136);
      sub_180C5A0(&v313, "a");
      v140 = sub_15E3D10(
               v138,
               (int)&v313,
               (int)&qword_18D6CD0,
               0,
               0,
               v139,
               1,
               v252,
               v254,
               v257,
               v260,
               v264,
               v267,
               v270,
               v273,
               v276,
               v279,
               (int)v282,
               v286,
               v289,
               (int)v293,
               (int)ptr,
               v295,
               v296.m128i_i32[0],
               v296.m128i_i32[2],
               (int)v297,
               v298.m128i_i32[0],
               v298.m128i_i32[2],
               v299,
               v300,
               v301,
               v302);
      v143 = sub_15DC610(v138, v140, 0, 0, v141, v142, v256, v259, v262, v266, v269, v272, v275, v278, v281, v284);
      v144 = (unsigned int *)v143;
      if ( v143 )
        ++*(_DWORD *)(v143 + 8);
      v145 = *(_QWORD *)(a1 + 104);
      v146 = sub_15E1B70(v145);
      v297 = (__m128 *)v146;
      if ( v146 )
        ++*(_DWORD *)(v146 + 8);
      sub_8F8A20(a1);
      if ( v144 )
        ++v144[2];
      v147 = v311;
      if ( v311 )
      {
        v148 = *((_DWORD *)v311 - 1);
        if ( v148 == *((_DWORD *)v311 - 2) )
        {
          v179 = (3 * v148 + 1) >> 1;
          v180 = 8 * v179 + 8;
          if ( 8 * v148 + 8 >= (unsigned int)v180 || v148 >= v179 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v293->m128i_i64, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v293);
            sub_233E40((__int64)v293);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v296.m128i_i32[2] = (3 * v148 + 1) >> 1;
          v181 = sub_186B300(v311 - 1, v180);
          v147 = (__int64 *)(v181 + 8);
          v311 = (__int64 *)(v181 + 8);
          *(_DWORD *)v181 = v296.m128i_i32[2];
          LODWORD(v181) = *(_DWORD *)(v181 + 4);
          v151 = &v147[(unsigned int)v181];
          v150 = v181 + 1;
        }
        else
        {
          v149 = v148;
          v150 = v148 + 1;
          v151 = &v311[v149];
        }
      }
      else
      {
        v184 = (_QWORD *)sub_186B270(0x18u);
        v147 = v184 + 1;
        *v184 = 2;
        v150 = 1;
        v311 = v147;
        v151 = v147;
      }
      *v151 = (__int64)v144;
      v152 = v297;
      *((_DWORD *)v147 - 1) = v150;
      if ( v152 )
      {
        v296.m128i_i32[2] = v152->m128_i32[2];
        v90 = v296.m128i_i32[2] == 1;
        v152->m128_i32[2] = v296.m128i_i32[2] - 1;
        if ( v90 )
          sub_15D7BC0(v145, v152);
        if ( !v144 )
          goto LABEL_202;
      }
      else if ( !v144 )
      {
        LOBYTE(v295) = 1;
        goto LABEL_205;
      }
      v90 = v144[2]-- == 1;
      if ( v90 )
        sub_15D7BC0(v138, v144);
LABEL_202:
      LOBYTE(v295) = 1;
      goto LABEL_203;
    }
    ++*(_DWORD *)(v136 + 8);
    v303 = v136;
    sub_96A710(&v311, &v303);
LABEL_203:
    if ( v311 )
      v144 = (unsigned int *)v311[*((_DWORD *)v311 - 1) - 1];
    else
      v144 = (unsigned int *)MEMORY[0x7FFFFFFF8];
LABEL_205:
    v153 = *(_QWORD *)(a1 + 8656);
    if ( !v153 || (v154 = *v144, (unsigned int)v154 >= *(_DWORD *)(v153 - 4)) || !*(_QWORD *)(v153 + 8 * v154) )
      sub_B6F780(a1);
    v320.m128i_i32[0] = (unsigned int)sub_B645B0(a1, v144) >> 1;
    v155 = v320.m128i_i32[0];
    v318[0] = ptr;
    sub_9765A0(v318, v293);
    v156 = *(_DWORD *)(a1 + 10504);
    ptr = (void *)v318[0];
    if ( 3 * v156 < 4 * (*(_DWORD *)(a1 + 10508) + *(_DWORD *)(a1 + 10512)) )
    {
      LODWORD(v286) = 2 * v156;
      v296.m128i_i64[1] = 48LL * v156;
      v297 = (__m128 *)v296.m128i_i64[1];
      v169 = (__m128 *)sub_186B270(v296.m128i_u64[1]);
      v170 = 2 * v156;
      v171 = v297;
      v157 = v169;
      v159 = v296.m128i_i64[1];
      if ( 2 * v156 )
      {
        v172 = &v169[3 * (v156 & 0x7FFFFFFF)];
        do
        {
          v169->m128_u64[0] = 0;
          v169 += 3;
          v169[-2].m128_u64[1] = 0;
        }
        while ( v169 != v172 );
      }
      v173 = *(unsigned int *)(a1 + 10504);
      v174 = *(const __m128i **)(a1 + 10496);
      v158 = v170 - 1;
      v297 = (__m128 *)((char *)v171 + (_QWORD)v157);
      v175 = (__m128i *)((char *)v174 + 24 * v173);
      if ( v174 == v175 )
      {
LABEL_254:
        if ( v175 )
        {
          LODWORD(v282) = v170;
          v286 = v159;
          v296.m128i_i32[2] = v170 - 1;
          sub_186B220(v175);
          v170 = (int)v282;
          v159 = v286;
          v158 = v296.m128i_i32[2];
        }
        *(_QWORD *)(a1 + 10496) = v157;
        *(_DWORD *)(a1 + 10504) = v170;
        *(_DWORD *)(a1 + 10512) = 0;
        goto LABEL_210;
      }
      while ( 1 )
      {
        while ( v174->m128i_i32[1] != 2 )
        {
LABEL_246:
          v174 = (const __m128i *)((char *)v174 + 24);
          if ( v175 == v174 )
            goto LABEL_253;
        }
        v176 = 24LL * (v174->m128i_i32[0] & (unsigned int)v158);
        v177 = (__m128 *)((char *)v157 + v176);
        if ( v171 == (__m128 *)v176 )
        {
LABEL_264:
          if ( v157 == v177 )
          {
LABEL_277:
            v296.m128i_i64[1] = (__int64)v175;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v182 = v157;
          while ( v182->m128_i32[1] )
          {
            v182 = (__m128 *)((char *)v182 + 24);
            if ( v177 == v182 )
              goto LABEL_277;
          }
          a6 = _mm_loadu_si128(v174);
          *v182 = (__m128)a6;
          v182[1].m128_u64[0] = v174[1].m128i_u64[0];
          goto LABEL_246;
        }
        v178 = (__m128 *)((char *)v157 + v176);
        while ( v178->m128_i32[1] )
        {
          v178 = (__m128 *)((char *)v178 + 24);
          if ( v297 == v178 )
            goto LABEL_264;
        }
        a6 = _mm_loadu_si128(v174);
        v174 = (const __m128i *)((char *)v174 + 24);
        *v178 = (__m128)a6;
        v178[1].m128_u64[0] = v174[-1].m128i_u64[1];
        if ( v175 == v174 )
        {
LABEL_253:
          v175 = *(__m128i **)(a1 + 10496);
          goto LABEL_254;
        }
      }
    }
    v157 = *(__m128 **)(a1 + 10496);
    v158 = v156 - 1;
    v159 = 24LL * v156;
    v297 = (__m128 *)((char *)v157 + v159);
LABEL_210:
    v160 = 24LL * (v155 & (unsigned int)v158);
    v161 = (__m128 *)((char *)v157 + v160);
    if ( v160 != v159 )
    {
      v162 = (__m128 *)((char *)v157 + v160);
      v163 = nullptr;
      while ( 1 )
      {
        v164 = v162->m128_i32[1];
        if ( v164 == 2 )
        {
          if ( v155 == v162->m128_i32[0] && v155 == v162->m128_i32[2] )
          {
            v162->m128_i32[2] = v155;
            v162[1].m128_u64[0] = v136;
            v162->m128_i32[1] = 2;
            goto LABEL_219;
          }
        }
        else
        {
          if ( !v164 )
          {
            if ( v163 )
              goto LABEL_239;
            v163 = v162;
            goto LABEL_240;
          }
          v163 = v162;
        }
        v162 = (__m128 *)((char *)v162 + 24);
        if ( v162 == v297 )
          goto LABEL_233;
      }
    }
    v163 = nullptr;
    while ( 1 )
    {
LABEL_233:
      if ( v161 == v157 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v168 = v157->m128_i32[1];
      if ( v168 != 2 )
        break;
      if ( v155 == v157->m128_i32[0] && v155 == v157->m128_i32[2] )
      {
        v157->m128_i32[2] = v155;
        v157[1].m128_u64[0] = v136;
        v157->m128_i32[1] = 2;
        goto LABEL_219;
      }
LABEL_232:
      v157 = (__m128 *)((char *)v157 + 24);
    }
    if ( v168 )
    {
      v163 = v157;
      goto LABEL_232;
    }
    if ( v163 )
LABEL_239:
      --*(_DWORD *)(a1 + 10512);
    else
      v163 = v157;
LABEL_240:
    v163->m128_i32[2] = v155;
    v163[1].m128_u64[0] = v136;
    v163->m128_i32[1] = 2;
    v163->m128_i32[0] = v155;
    ++*(_DWORD *)(a1 + 10508);
LABEL_219:
    v298.m128i_i64[0] += 8;
  }
  while ( v289 != v298.m128i_i64[0] );
LABEL_220:
  if ( v311 )
    v165 = *((unsigned int *)v311 - 1);
  else
    v165 = 0;
  LODWORD(v297) = sub_8FD5F0(a1, v165, v311, 1u, a6, a7);
  if ( (_DWORD)v297 == 1 )
  {
    v188 = *(_QWORD *)(a1 + 7472);
    if ( sub_953530(v188) )
    {
      if ( (unsigned int)sub_180B130(v188) )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)a6.m128i_i64) )
        {
          sub_186A4C0(*(double *)a6.m128i_i64);
          v220 = sub_180B150(v188, v165);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v220, "(get-consequences :unsupported-quantifiers)\n");
        }
        else
        {
          sub_180B150(v188, v165);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      LODWORD(v297) = 0;
    }
    else
    {
      v306 = nullptr;
      sub_8ECB50(a1, (void (****)(void))&v306);
      v189 = *(void **)(a1 + 104);
      n = 0;
      v320.m128i_i64[0] = 0;
      v313 = v189;
      v296.m128i_i64[1] = (__int64)&v301;
      sub_1360C00(&v301, v306, v293);
      sub_18572D0(v293);
      v190 = *(void **)(a1 + 104);
      src[0] = nullptr;
      src[1] = v190;
      if ( v296.m128i_i64[0] )
      {
        v290 = v296.m128i_i64[0] + 8LL * *(unsigned int *)(v296.m128i_i64[0] - 4);
        if ( v296.m128i_i64[0] != v290 )
        {
          v298.m128i_i64[0] = v296.m128i_i64[0];
          do
          {
            v191 = *(_QWORD *)v298.m128i_i64[0];
            sub_1361190(v296.m128i_i64[1], *(_QWORD *)v298.m128i_i64[0], src);
            if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 104), src[0]) )
            {
              v304 = src[0];
              if ( src[0] )
                ++*((_DWORD *)src[0] + 2);
              sub_96A710(&n, &v304);
              a6 = (__m128i)_mm_loadh_ps((const double *)src);
              v320 = a6;
              sub_686B20(a1 + 10520, v293);
            }
            else
            {
              v305 = v191;
              if ( v191 )
                ++*(_DWORD *)(v191 + 8);
              sub_96A710((_QWORD *)(v267 + 8), &v305);
            }
            v298.m128i_i64[0] += 8;
          }
          while ( v290 != v298.m128i_i64[0] );
        }
      }
      HIDWORD(v300) = 0;
      sub_8F9430(a1);
      v192 = *(_QWORD *)(a1 + 8920);
      if ( v192 )
      {
        v193 = *(_DWORD *)(v192 - 4);
        v291 = v193;
        if ( v193 )
        {
          v194 = 0;
          v298.m128i_i64[0] = (__int64)v318;
          v195 = 4LL * v193;
          while ( 1 )
          {
            v196 = *(_DWORD *)(v192 + v194);
            v318[0] = ptr;
            sub_96C170(a1, v196, v298.m128i_i64[0], v273);
            v194 += 4;
            if ( v194 == v195 )
              break;
            v192 = *(_QWORD *)(a1 + 8920);
          }
        }
      }
      else
      {
        v291 = 0;
      }
      HIDWORD(v300) = v291;
      sub_8F91D0(a1);
      *(double *)a6.m128i_i64 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8952) + 56LL))(*(_QWORD *)(a1 + 8952));
      v197 = (__int64)&v310;
      sub_8F5580(a1, (__int64)&v310, a6, a7);
      HIDWORD(v300) = 0;
      v287 = 0;
      v292 = 0;
      while ( *(_DWORD *)(a1 + 10532) )
      {
        v198 = *(__int64 **)(a1 + 10520);
        v199 = 2LL * *(unsigned int *)(a1 + 10528);
        v200 = &v198[v199];
        if ( v198 == &v198[v199] )
          goto LABEL_348;
        while ( (unsigned __int64)*v198 <= 1 )
        {
          v198 += 2;
          if ( v200 == v198 )
            goto LABEL_348;
        }
        if ( v200 == v198 )
          goto LABEL_348;
        v201 = 0;
        do
        {
          if ( (unsigned __int8)sub_8E6FA0(a1) )
            goto LABEL_374;
          v197 = *v198;
          v202 = sub_969220(a1, (_DWORD *)*v198, (_DWORD *)v198[1]);
          v298.m128i_i64[0] = v202;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8848) + v202) )
          {
            v285 = v202;
            v197 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v202 >> 1));
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), v197);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
            sub_8EC360(a1);
            v211 = *(_QWORD *)(a1 + 8848);
            v320.m128i_i64[0] = 2;
            v212 = *(_BYTE *)(v211 + v298.m128i_i64[0]);
            if ( v212 == -1 )
            {
              v197 = (__int64)v293;
              sub_8E8670(a1, v293->m128i_i64, v285 ^ 1);
            }
            else if ( !v212 )
            {
              v197 = v285;
              sub_8F28B0(a1, v285, 2, 1u);
            }
            do
            {
              if ( !(unsigned __int8)sub_8E8560(a1) || (unsigned __int8)sub_8F5330(a1, a6, a7) )
              {
                ++v201;
                goto LABEL_339;
              }
            }
            while ( (**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1)
                 || *(_QWORD *)(a1 + 8984) == qword_1C7EC80 && !*(_BYTE *)(a1 + 2416) );
            if ( (unsigned int)sub_180B130(a1) )
            {
              if ( (unsigned __int8)sub_186A530(*(double *)a6.m128i_i64) )
              {
                sub_186A4C0(*(double *)a6.m128i_i64);
                sub_180B150(a1, v197);
                std::__ostream_insert<char,std::char_traits<char>>();
                v221 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_186A500(v221, ")\n");
              }
              else
              {
                sub_180B150(a1, v197);
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
LABEL_374:
            LODWORD(v297) = 0;
            goto LABEL_375;
          }
LABEL_339:
          v203 = v198 + 2;
          if ( v200 == v198 + 2 )
            goto LABEL_348;
          while ( 1 )
          {
            v198 = v203;
            if ( (unsigned __int64)*v203 > 1 )
              break;
            v203 += 2;
            if ( v200 == v203 )
              goto LABEL_348;
          }
        }
        while ( v200 != v203 && v201 != 100 );
        while ( 1 )
        {
LABEL_348:
          v205 = sub_8FD0A0(a1);
          if ( v205 == 1 )
          {
            sub_96BAC0(a1, v267);
            goto LABEL_439;
          }
          v206 = *(unsigned int *)(a1 + 10308);
          if ( (_DWORD)v206 )
          {
            LODWORD(v297) = v205;
            goto LABEL_375;
          }
          if ( v205 )
            break;
          if ( (unsigned int)sub_180B130(v206) )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)a6.m128i_i64) )
            {
              sub_186A4C0(*(double *)a6.m128i_i64);
              v204 = sub_180B150(v206, v197);
              v197 = (__int64)"(get-consequences inc-limits)\n";
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v204, "(get-consequences inc-limits)\n");
            }
            else
            {
              sub_180B150(v206, v197);
              v197 = (__int64)"(get-consequences inc-limits)\n";
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          sub_8EAE80(a1);
        }
        if ( v205 == -1 )
        {
          v240 = qword_1C7EC80;
          *(_DWORD *)(a1 + 8992) = -2;
          *(_QWORD *)(a1 + 8984) = v240;
        }
LABEL_439:
        v318[0] = ptr;
        sub_96CCD0(a1, (unsigned int *)&v300 + 1, (__int64)v318, v273);
        v197 = v273;
        v287 += sub_96AAB0(a1, v273);
        ++v292;
        if ( (unsigned int)sub_180B130(a1) )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a6.m128i_i64) )
          {
            sub_186A4C0(*(double *)a6.m128i_i64);
            v246 = *(_QWORD *)(v267 + 8);
            if ( v246 )
              v247 = *(_DWORD *)(v246 - 4);
            else
              v247 = 0;
            v248 = *(_QWORD *)(v273 + 8);
            if ( v248 )
              v249 = *(_DWORD *)(v248 - 4);
            else
              v249 = 0;
            v298.m128i_i32[0] = v247;
            v250 = *(_DWORD *)(a1 + 10532);
            v251 = sub_180B150(a1, v273);
            sub_969330(a1, v251, v292, v250, v249, v298.m128i_u32[0], v287);
            v197 = v252;
            sub_186A500(a1, v252);
          }
          else
          {
            v241 = *(_QWORD *)(v267 + 8);
            if ( v241 )
              v242 = *(_DWORD *)(v241 - 4);
            else
              v242 = 0;
            v243 = *(_QWORD *)(v273 + 8);
            if ( v243 )
              v244 = *(_DWORD *)(v243 - 4);
            else
              v244 = 0;
            v298.m128i_i32[0] = v242;
            v245 = *(_DWORD *)(a1 + 10532);
            v197 = sub_180B150(a1, v273);
            sub_969330(a1, v197, v292, v245, v244, v298.m128i_u32[0], v287);
          }
        }
      }
      sub_8EAE70(a1);
LABEL_375:
      v213 = src[0];
      if ( src[0] )
      {
        v214 = src[1];
        v90 = (*((_DWORD *)src[0] + 2))-- == 1;
        if ( v90 )
          sub_15D7BC0(v214, v213);
      }
      sub_13606C0(v296.m128i_i64[1]);
      sub_2334C0((__int64 *)&v313);
      v215 = (void (__fastcall ***)(_QWORD))v306;
      if ( v306 )
      {
        v90 = (*((_DWORD *)v306 + 4))-- == 1;
        if ( v90 )
        {
          (**v215)(v215);
          sub_186B220(v215);
        }
      }
    }
  }
  v166 = *(_DWORD *)(a1 + 9464);
  if ( (unsigned int)(unsigned __int8)v295 + v263 < v166 )
    sub_8F7780(a1, v166 - v263 - (unsigned __int8)v295);
  if ( (_BYTE)v295 )
    sub_8F96B0(a1, 1u);
  if ( ptr )
    sub_186B220(ptr);
  sub_2334C0((__int64 *)&v310);
  v308 = v296.m128i_i64[0];
  sub_2334C0((__int64 *)&format);
  return (unsigned int)v297;
}

