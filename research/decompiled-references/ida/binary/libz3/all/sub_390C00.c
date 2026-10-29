__int64 __fastcall sub_390C00(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r12
  char *v9; // rdx
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  char *v15; // rbx
  __m128i si128; // xmm1
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 *v21; // r15
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 *v26; // rax
  int v27; // r13d
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  bool v31; // zf
  int v32; // ecx
  __int64 v33; // rax
  int v34; // edx
  __int64 *v35; // rax
  unsigned int v36; // r13d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // r12
  __int64 v42; // r13
  int v43; // eax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 *v48; // rdx
  int v49; // eax
  __m128i *v50; // r12
  __int64 v51; // r13
  size_t v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // r13
  __int64 v57; // rax
  void (__fastcall ***v58)(void *); // r12
  __int64 v59; // rax
  size_t v60; // rdx
  __int64 *v61; // rax
  __int64 *v62; // r12
  __int64 v63; // rax
  __int64 v64; // r13
  _DWORD *v65; // r12
  __int64 v66; // r14
  __int64 v67; // rdi
  size_t v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r12
  void (__fastcall ***v71)(void *); // r13
  size_t v72; // rdx
  __m128i v73; // xmm0
  void (***v74)(void); // rdi
  __int64 *v75; // r14
  std::ios_base *v76; // rdi
  __int64 *v77; // r12
  __int64 v78; // rsi
  __int64 v79; // rbx
  _QWORD *v81; // rax
  __int64 v82; // r13
  _QWORD *v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rcx
  int v86; // eax
  _QWORD *v87; // rcx
  unsigned int v88; // esi
  unsigned int v89; // ecx
  size_t v90; // rdx
  int v91; // r8d
  __int64 *v92; // r9
  _QWORD *v93; // r12
  int v94; // ecx
  __int64 v95; // r8
  _QWORD *v96; // rsi
  _QWORD *v97; // rax
  _QWORD *v98; // rdi
  size_t v99; // r10
  __int64 v100; // rdx
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rdx
  char k; // al
  int v108; // eax
  int v109; // eax
  __int64 *v110; // rsi
  __int64 v111; // rax
  int v112; // edx
  int v113; // ecx
  int v114; // r8d
  int v115; // r9d
  void *v116; // r13
  size_t *v117; // r12
  size_t v118; // rax
  unsigned int v119; // edx
  unsigned int v120; // eax
  __int64 v121; // r12
  size_t v122; // rsi
  void *v123; // rdi
  _QWORD *v124; // r12
  size_t v125; // rdx
  int v126; // ecx
  int v127; // r8d
  int v128; // r9d
  __int64 v129; // r14
  int v130; // eax
  __int64 v131; // rsi
  __int64 v132; // rdx
  size_t v133; // rax
  __int64 v134; // rsi
  __int64 v135; // rdi
  void (__fastcall **v136)(size_t); // rax
  void *v137; // r14
  void (**v138)(void); // rax
  unsigned int v139; // edi
  unsigned int v140; // ecx
  unsigned int *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // r13
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // r12
  __int64 v147; // rsi
  unsigned int v148; // ebx
  unsigned int v149; // eax
  __int64 *v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdi
  __int64 *v153; // rcx
  __int64 v154; // rax
  int v155; // ecx
  __int64 v156; // rsi
  __int64 v157; // rbx
  _QWORD *v158; // rdx
  int i; // eax
  __int64 v160; // rbx
  __int64 v161; // rdx
  unsigned int v162; // ecx
  __int64 v163; // rdi
  unsigned int v164; // eax
  __int64 v165; // rax
  __int64 v166; // rdi
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 *v170; // r12
  __int64 *j; // r13
  __int64 v172; // rsi
  size_t v173; // rax
  unsigned int v174; // eax
  __int64 v175; // rdx
  unsigned int v176; // edx
  size_t v177; // rsi
  __int64 v178; // rax
  _DWORD *v179; // rdi
  unsigned int v180; // edi
  size_t v181; // rsi
  unsigned int *v182; // rax
  __int64 v183; // rdx
  _QWORD *v184; // rdi
  size_t v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rax
  int v188; // esi
  __int64 v189; // r12
  void *v190; // rax
  int v191; // ecx
  char *v192; // r10
  char *v193; // rax
  size_t v194; // rdi
  __int64 v195; // rdx
  _QWORD *v196; // rsi
  _QWORD *v197; // rdx
  __int64 v198; // rsi
  size_t v199; // rax
  _QWORD *v200; // rdx
  size_t v201; // r10
  __int64 m; // rax
  __int64 v203; // r12
  __int64 v204; // r14
  __int64 v205; // rdx
  __int64 v206; // rsi
  _QWORD *exception; // rax
  _BYTE *v208; // r13
  _QWORD *v209; // r12
  size_t v210; // r13
  _QWORD *v211; // rdx
  size_t v212; // rcx
  _QWORD *v213; // rax
  __int64 v214; // rax
  int v215; // ecx
  __int64 *v216; // rax
  unsigned int v217; // eax
  unsigned __int64 v218; // rdi
  void *v219; // rax
  void *v220; // rsi
  _QWORD *v221; // r13
  unsigned __int64 v222; // rdi
  unsigned __int64 v223; // rsi
  char *v224; // rdx
  char *v225; // r14
  unsigned int v226; // eax
  unsigned int v227; // eax
  unsigned int v228; // edx
  __int64 v229; // rdi
  char **v230; // r14
  __int64 v231; // rdx
  char **v232; // r14
  __int64 v233; // rdx
  __int64 *v234; // r13
  __int64 *v235; // rsi
  char **v236; // rbx
  __int64 v237; // rdx
  __int64 *v238; // r14
  __int64 *v239; // rsi
  char **v240; // r12
  __int64 v241; // rdx
  int v242; // [rsp-8h] [rbp-338h]
  _Unwind_Exception *v243; // [rsp+0h] [rbp-330h]
  int v244; // [rsp+0h] [rbp-330h]
  int v245; // [rsp+0h] [rbp-330h]
  _Unwind_Exception *v246; // [rsp+0h] [rbp-330h]
  __int64 v247; // [rsp+8h] [rbp-328h]
  int v248; // [rsp+8h] [rbp-328h]
  int v249; // [rsp+8h] [rbp-328h]
  _QWORD *v250; // [rsp+10h] [rbp-320h]
  int v251; // [rsp+10h] [rbp-320h]
  int v252; // [rsp+10h] [rbp-320h]
  __m128i v253; // [rsp+18h] [rbp-318h] BYREF
  std::locale *v254; // [rsp+28h] [rbp-308h]
  void *v255; // [rsp+30h] [rbp-300h]
  char *v256; // [rsp+38h] [rbp-2F8h]
  char *v257; // [rsp+40h] [rbp-2F0h]
  _QWORD *v258; // [rsp+48h] [rbp-2E8h]
  __int64 v259; // [rsp+50h] [rbp-2E0h]
  __int64 v260; // [rsp+58h] [rbp-2D8h]
  char *v261; // [rsp+60h] [rbp-2D0h]
  char *v262; // [rsp+68h] [rbp-2C8h]
  void *v263; // [rsp+70h] [rbp-2C0h]
  int v264[2]; // [rsp+78h] [rbp-2B8h]
  _OWORD *v265; // [rsp+80h] [rbp-2B0h]
  _QWORD *v266; // [rsp+88h] [rbp-2A8h]
  __int64 v267; // [rsp+90h] [rbp-2A0h]
  __int64 v268; // [rsp+98h] [rbp-298h]
  int *v269; // [rsp+A0h] [rbp-290h]
  void *v270; // [rsp+A8h] [rbp-288h]
  __m128i v271; // [rsp+B0h] [rbp-280h] BYREF
  __m128i ptr; // [rsp+C0h] [rbp-270h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-260h] BYREF
  char v274[8]; // [rsp+E0h] [rbp-250h] BYREF
  __int64 v275; // [rsp+E8h] [rbp-248h] BYREF
  size_t v276; // [rsp+F0h] [rbp-240h] BYREF
  __int64 v277; // [rsp+F8h] [rbp-238h] BYREF
  __int64 v278; // [rsp+100h] [rbp-230h] BYREF
  __int64 v279; // [rsp+108h] [rbp-228h]
  __int64 v280; // [rsp+110h] [rbp-220h]
  int v281[2]; // [rsp+120h] [rbp-210h] BYREF
  __int64 v282; // [rsp+128h] [rbp-208h]
  void *v283; // [rsp+130h] [rbp-200h] BYREF
  size_t v284; // [rsp+138h] [rbp-1F8h]
  _QWORD dest[6]; // [rsp+140h] [rbp-1F0h] BYREF
  char *v286; // [rsp+170h] [rbp-1C0h] BYREF
  __int64 v287; // [rsp+178h] [rbp-1B8h]
  _OWORD v288[2]; // [rsp+180h] [rbp-1B0h] BYREF
  void *src[2]; // [rsp+1A0h] [rbp-190h]
  __int128 v290; // [rsp+1B0h] [rbp-180h]
  char v291[8]; // [rsp+1C0h] [rbp-170h] BYREF
  int v292; // [rsp+1C8h] [rbp-168h]
  void *v293; // [rsp+1D0h] [rbp-160h]
  __int64 v294; // [rsp+1D8h] [rbp-158h]
  _QWORD v295[2]; // [rsp+1E0h] [rbp-150h] BYREF
  _QWORD v296[28]; // [rsp+1F0h] [rbp-140h] BYREF
  __int16 v297; // [rsp+2D0h] [rbp-60h]
  __int128 v298; // [rsp+2D8h] [rbp-58h]
  __int128 v299; // [rsp+2E8h] [rbp-48h]

  v266 = (_QWORD *)a3;
  v4 = *(_QWORD *)a2;
  v271.m128i_i64[0] = a2;
  v256 = v274;
  sub_EE4940(v274, "horn", v4);
  v5 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 123LL) & 8) == 0 )
  {
LABEL_4:
    v6 = *(_QWORD *)(v5 + 72);
    v255 = &v286;
    if ( v6 )
      goto LABEL_5;
LABEL_166:
    v8 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_64AF30(a1 + 4) )
  {
    v5 = *(_QWORD *)v271.m128i_i64[0];
    goto LABEL_4;
  }
  v131 = *(_QWORD *)a1[8];
  v255 = &v286;
  sub_1858590(&v286, v131);
  sub_1862300(&v286, "generate_proof_trace", 1);
  sub_64C4C0(a1 + 4, &v286);
  sub_18572D0(&v286);
  v6 = *(_QWORD *)(*(_QWORD *)v271.m128i_i64[0] + 72LL);
  if ( !v6 )
    goto LABEL_166;
LABEL_5:
  v7 = *(_BYTE *)(v6 + 3) >> 6;
  if ( !v7 )
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v7 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v7 );
    if ( v7 != 1 )
      goto LABEL_7;
LABEL_128:
    v8 = (unsigned int)(*(_DWORD *)(v6 + 4) + 1);
    goto LABEL_9;
  }
  if ( v7 == 1 )
    goto LABEL_128;
LABEL_7:
  if ( v7 == 2 )
    v8 = (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
  else
    v8 = *(unsigned int *)(v6 + 4);
LABEL_9:
  v253.m128i_i64[1] = (__int64)v296;
  v253.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  v267 = *a1;
  v280 = v267;
  *(__m128i *)n = _mm_unpacklo_epi64(
                    (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 64),
                    (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v296);
  v298 = 0;
  v9 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v299 = 0;
  v296[0] = (char *)&`vtable for'std::ios + 16;
  v297 = 0;
  v11 = *((_QWORD *)v9 - 3);
  v296[27] = 0;
  v286 = v9;
  *(char **)((char *)&v286 + v11) = v10;
  v261 = v10;
  v287 = 0;
  v262 = v9;
  std::ios::init();
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v265 = v288;
  *(_QWORD *)&v288[0] = v12;
  v13 = (_QWORD *)((char *)v288 + *(_QWORD *)(v12 - 24));
  v260 = v12;
  v14 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v13 = v14;
  v259 = v14;
  std::ios::init();
  v15 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)n);
  v258 = (_QWORD *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v17 = *(v258 - 3);
  v257 = v15;
  *(char **)((char *)&v286 + v17) = v15;
  v288[0] = si128;
  v288[1] = 0;
  v286 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)src = 0;
  v290 = 0;
  v296[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v254 = (std::locale *)v291;
  std::locale::locale((std::locale *)v291);
  v292 = 24;
  LOBYTE(v295[0]) = 0;
  *((_QWORD *)&v288[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v250 = v295;
  v293 = v295;
  v294 = 0;
  std::ios::init();
  v18 = (_QWORD *)a1[8];
  sub_180C5A0(&v277, "datalog");
  v19 = *v18;
  v269 = v281;
  sub_180C5A0(v281, "auto-config");
  v20 = sub_185A820(v19, "engine", v18 + 1, v281);
  if ( v277 == v20 )
    sub_C71A6("engine=datalog");
  if ( (unsigned __int8)sub_1859630(*v18, "datalog.generate_explanations", v18 + 1, 0) )
    sub_C71A6("datalog.generate_explanations");
  if ( (unsigned __int8)sub_1859630(*v18, "datalog.magic_sets_for_queries", v18 + 1, 0) )
    sub_C71A6("datalog.magic_sets_for_queries");
  if ( (unsigned __int8)sub_1859630(*v18, "xform.instantiate_arrays", v18 + 1, 0) )
    sub_C71A6("xform.instantiate_arrays");
  if ( (unsigned __int8)sub_1859630(*v18, "xform.magic", v18 + 1, 0) )
    sub_C71A6("xform.magic");
  if ( (unsigned __int8)sub_1859630(*v18, "xform.quantify_arrays", v18 + 1, 0) )
    sub_C71A6("xform.quantify_arrays");
  if ( (unsigned __int8)sub_1859630(*v18, "xform.scale", v18 + 1, 0) )
    sub_C71A6("xform.scale");
  v270 = a1 + 4;
  sub_64CDB0(a1 + 4);
  sub_64C320(a1 + 4);
  ptr.m128i_i64[1] = v267;
  if ( !(_DWORD)v8 )
  {
    v21 = nullptr;
    v22 = 0;
    goto LABEL_48;
  }
  v21 = nullptr;
  v22 = 0;
  n[0] = 0;
  ptr.m128i_i64[0] = (__int64)&v278;
  while ( 2 )
  {
    v27 = n[0];
    v28 = *(_QWORD *)v271.m128i_i64[0];
    v29 = **(_QWORD **)v271.m128i_i64[0];
    if ( (*(_BYTE *)(*(_QWORD *)v271.m128i_i64[0] + 123LL) & 0x20) != 0 )
    {
      v30 = *(_QWORD *)(v29 + 864);
      goto LABEL_28;
    }
    v33 = *(_QWORD *)(v28 + 72);
    v34 = 17;
    while ( 1 )
    {
      if ( *(char *)(v33 + 3) < 0 )
      {
        if ( *(_BYTE *)(v33 + 3) >> 6 != 2 )
        {
          v35 = (__int64 *)(*(_QWORD *)(v33 + 16) + 8 * n[0]);
          goto LABEL_39;
        }
        goto LABEL_41;
      }
      if ( *(_DWORD *)(v33 + 4) == LODWORD(n[0]) )
        break;
LABEL_41:
      v33 = *(_QWORD *)(v33 + 16);
      if ( !--v34 )
      {
        v268 = *(_QWORD *)v271.m128i_i64[0];
        sub_233F80((__int64 *)(v29 + 616), (_DWORD *)(v28 + 72));
        v35 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v268 + 72) + 16LL) + 8 * n[0]);
        goto LABEL_39;
      }
    }
    v35 = (__int64 *)(v33 + 8);
LABEL_39:
    v30 = *v35;
LABEL_28:
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    if ( v22 )
    {
      v31 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v31 )
      {
        v268 = v30;
        sub_15D7BC0(ptr.m128i_i64[1], v22);
        v30 = v268;
      }
    }
    v278 = v30;
    v279 = ptr.m128i_i64[1];
    v32 = sub_38FD40(a1, (__int64 *)ptr.m128i_i64[0]);
    v22 = v278;
    ptr.m128i_i64[1] = v279;
    if ( !v32 )
    {
      sub_64ECB0(v270, v278, &qword_18D6CD0, 0xFFFFFFFFLL);
      goto LABEL_25;
    }
    if ( v32 != 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v203 = *a1;
      v204 = *(_QWORD *)v271.m128i_i64[0];
      v205 = **(_QWORD **)v271.m128i_i64[0];
      if ( (*(_BYTE *)(*(_QWORD *)v271.m128i_i64[0] + 123LL) & 0x20) != 0 )
      {
        v206 = *(_QWORD *)(v205 + 864);
      }
      else
      {
        v214 = *(_QWORD *)(v204 + 72);
        v215 = 18;
        while ( --v215 )
        {
          if ( *(char *)(v214 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v214 + 4) == v27 )
            {
              v216 = (__int64 *)(v214 + 8);
              goto LABEL_286;
            }
          }
          else if ( *(_BYTE *)(v214 + 3) >> 6 != 2 )
          {
            v216 = (__int64 *)(*(_QWORD *)(v214 + 16) + 8 * n[0]);
            goto LABEL_286;
          }
          v214 = *(_QWORD *)(v214 + 16);
        }
        sub_233F80((__int64 *)(v205 + 616), (_DWORD *)(v204 + 72));
        v216 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v204 + 72) + 16LL) + 8 * n[0]);
LABEL_286:
        v206 = *v216;
      }
      *(_QWORD *)v264 = &v283;
      sub_1606360(&v283, v206, v203, 0, 0, 0);
      sub_160E8B0(v265, &v283);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(dest);
      exception = __cxa_allocate_exception(0x28u);
      v208 = (_BYTE *)v290;
      v283 = dest;
      v284 = 0;
      v209 = exception;
      LOBYTE(dest[0]) = 0;
      if ( (_QWORD)v290 )
      {
        if ( src[0] >= (void *)v290 )
          v208 = src[0];
        if ( !src[0] )
          v208 = (_BYTE *)v290;
        v210 = v208 - (char *)src[1];
        if ( (v210 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v210 > 0xF )
        {
          if ( v210 > 0x1D )
          {
            v271.m128i_i64[0] = v210;
            v218 = v210 + 1;
            if ( (__int64)(v210 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v271.m128i_i64[0] = 30;
            v218 = 31;
          }
          ptr.m128i_i64[0] = (__int64)src[1];
          v219 = (void *)operator new(v218);
          n[0] = (size_t)v219;
          if ( ptr.m128i_i64[0] )
            memcpy(v219, (const void *)ptr.m128i_i64[0], v210);
          if ( v283 != dest )
            operator delete(v283, dest[0] + 1LL);
          v283 = (void *)n[0];
          dest[0] = v271.m128i_i64[0];
        }
        else if ( src[1] == dest )
        {
          std::string::_M_replace_cold();
          n[0] = (size_t)v283;
        }
        else
        {
          if ( v210 )
          {
            if ( v210 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            else
              memcpy(dest, src[1], v210);
          }
          n[0] = (size_t)dest;
        }
        v284 = v210;
        *(_BYTE *)(n[0] + v210) = 0;
LABEL_278:
        v211 = v209 + 3;
        v212 = v284;
        *v209 = off_1C63670;
        v213 = v283;
        v209[1] = v209 + 3;
        if ( v213 == dest )
        {
          v217 = v212 + 1;
          if ( (unsigned int)(v212 + 1) >= 8 )
          {
            v209[3] = dest[0];
            *(_QWORD *)((char *)v211 + v217 - 8) = *(_QWORD *)((char *)&dest[-1] + v217);
            v223 = (unsigned __int64)(v209 + 4) & 0xFFFFFFFFFFFFFFF8LL;
            v224 = (char *)v211 - v223;
            v225 = (char *)((char *)dest - v224);
            v226 = ((_DWORD)v224 + v217) & 0xFFFFFFF8;
            if ( v226 >= 8 )
            {
              v227 = v226 & 0xFFFFFFF8;
              v228 = 0;
              do
              {
                v229 = v228;
                v228 += 8;
                *(_QWORD *)(v223 + v229) = *(_QWORD *)&v225[v229];
              }
              while ( v228 < v227 );
            }
          }
          else if ( (v217 & 4) != 0 )
          {
            *((_DWORD *)v209 + 6) = dest[0];
            *(_DWORD *)((char *)v211 + v217 - 4) = *(_DWORD *)((char *)&v284 + v217 + 4);
          }
          else if ( (_DWORD)v212 != -1 )
          {
            *((_BYTE *)v209 + 24) = dest[0];
            if ( (v217 & 2) != 0 )
              *(_WORD *)((char *)v211 + v217 - 2) = *(_WORD *)((char *)&v284 + v217 + 6);
          }
        }
        else
        {
          v209[1] = v213;
          v209[3] = dest[0];
        }
        v209[2] = v212;
        __cxa_throw(v209, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      n[0] = v294;
      if ( (unsigned __int64)v294 > 0xF )
      {
        if ( v294 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        if ( n[0] > 0x1D )
        {
          v271.m128i_i64[0] = n[0];
          v222 = n[0] + 1;
          if ( (signed __int64)(n[0] + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v271.m128i_i64[0] = 30;
          v222 = 31;
        }
        v221 = (_QWORD *)operator new(v222);
        if ( v283 != dest )
          operator delete(v283, dest[0] + 1LL);
        v283 = v221;
        v220 = v293;
        dest[0] = v271.m128i_i64[0];
      }
      else
      {
        if ( !n[0] )
        {
LABEL_310:
          v284 = n[0];
          *((_BYTE *)v283 + n[0]) = 0;
          goto LABEL_278;
        }
        v220 = v293;
        v221 = dest;
        if ( n[0] == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)v293;
          goto LABEL_310;
        }
      }
      memcpy(v221, v220, n[0]);
      goto LABEL_310;
    }
    if ( v278 )
      ++*(_DWORD *)(v278 + 8);
    if ( v21 )
    {
      v23 = *((_DWORD *)v21 - 1);
      if ( v23 == *((_DWORD *)v21 - 2) )
      {
        v36 = (3 * v23 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v37 || v23 >= v36 )
        {
          v230 = (char **)__cxa_allocate_exception(0x28u);
          sub_C7126((__int64 *)&v283, "Overflow encountered when expanding vector", v231);
          *v230 = (char *)off_1C63128;
          sub_2333C0(v230 + 1, &v283);
          sub_233E40((__int64)&v283);
          __cxa_throw(v230, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v21 - 1, v37);
        v21 = (__int64 *)(v38 + 2);
        *v38 = v36;
        v39 = v38[1];
        v40 = v39;
        v26 = &v21[v39];
        v25 = v40 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v21[v24];
      }
    }
    else
    {
      LODWORD(v268) = 1;
      v81 = (_QWORD *)sub_186B270(0x18u);
      v21 = v81 + 1;
      *v81 = 2;
      v25 = v268;
      v26 = v81 + 1;
    }
    *v26 = v22;
    *((_DWORD *)v21 - 1) = v25;
LABEL_25:
    if ( v8 != ++n[0] )
      continue;
    break;
  }
  if ( v21 && *((_DWORD *)v21 - 1) == 1 && !*((_BYTE *)a1 + 8) )
  {
    v111 = *v21;
    v265 = (_OWORD *)v111;
    if ( v111 )
      ++*(_DWORD *)(v111 + 8);
    goto LABEL_63;
  }
LABEL_48:
  v41 = *(_QWORD *)(*a1 + 840);
  v42 = *a1;
  sub_180C5A0(&v283, "query");
  v43 = sub_15E3D10(
          v42,
          (int)&v283,
          (int)&qword_18D6CD0,
          0,
          0,
          v41,
          1,
          v242,
          (int)v243,
          v247,
          (int)v295,
          v253.m128i_i32[0],
          v253.m128i_i32[2],
          (int)v254,
          (char)v255,
          (int)v256,
          (int)v257,
          (int)v258,
          v259,
          v260,
          (int)v261,
          (int)v262,
          (int)v263,
          (int)&v283,
          (int)v265,
          (int)v266,
          v267,
          v268,
          (int)v269,
          v270,
          v271.m128i_i32[0],
          v271.m128i_i64[1]);
  v46 = sub_15DC610(
          v42,
          v43,
          0,
          0,
          v44,
          v45,
          v244,
          v248,
          v251,
          v253.m128i_i32[0],
          v253.m128i_i32[2],
          (char)v254,
          (int)v255,
          (int)v256,
          (int)v257,
          v258);
  n[0] = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  sub_6511B0(v270, *(_QWORD *)(v46 + 16), 0);
  if ( v21 )
  {
    if ( *((_DWORD *)v21 - 1) )
    {
      v143 = 0;
      do
      {
        v144 = 0;
        ptr.m128i_i64[0] = *a1;
        v145 = sub_15E1B70(ptr.m128i_i32[0]);
        v146 = v145;
        if ( v145 )
          ++*(_DWORD *)(v145 + 8);
        if ( v22 )
        {
          v31 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v31 )
          {
            v144 = v22;
            sub_15D7BC0(ptr.m128i_i64[0], v22);
          }
        }
        sub_157C960(a1 + 478, v144);
        sub_157E9E0((_DWORD)a1 + 3824, v146);
        sub_157CA60(a1 + 478, *(_QWORD *)(*a1 + 840));
        v147 = a1[481];
        if ( v147 && (v148 = *(_DWORD *)(v147 - 4)) != 0 )
        {
          v149 = v148 - 1;
          v150 = (__int64 *)a1[481];
          if ( v148 >> 1 )
          {
            do
            {
              v151 = v149;
              v152 = *v150;
              --v149;
              ++v150;
              v153 = (__int64 *)(v147 + 8 * v151);
              *(v150 - 1) = *v153;
              *v153 = v152;
            }
            while ( v148 - 1 - (v148 >> 1) != v149 );
          }
          v154 = sub_186B270(0x18u) + 8;
          v155 = 0;
          v156 = a1[481];
          v157 = 8LL * (v148 - 1) + 1;
          *(_QWORD *)(v154 - 8) = 2;
          v158 = (_QWORD *)v154;
          ptr.m128i_i64[0] = v154;
          for ( i = 1; ; i = v178 + 1 )
          {
            *v158 = v157;
            v160 = ptr.m128i_i64[0];
            *(_DWORD *)(ptr.m128i_i64[0] - 4) = i;
            if ( !v156 )
              break;
            v161 = *(unsigned int *)(v156 - 4);
            v162 = v155 + 1;
            v163 = v160;
            if ( v162 >= (unsigned int)v161 )
            {
LABEL_196:
              v165 = v163;
              ptr.m128i_i64[0] = v163;
              v166 = *a1;
              v167 = v165;
              goto LABEL_197;
            }
            while ( 1 )
            {
              v164 = *(_DWORD *)(v163 - 4);
              v157 = 8LL * ((_DWORD)v161 - 1 - v162) + 1;
              if ( v164 == *(_DWORD *)(v163 - 8) )
                break;
              ++v162;
              *(_QWORD *)(v163 + 8LL * v164) = v157;
              *(_DWORD *)(v163 - 4) = v164 + 1;
              v161 = *(unsigned int *)(v156 - 4);
              if ( v162 >= (unsigned int)v161 )
                goto LABEL_196;
            }
            ptr.m128i_i64[0] = v163;
            v176 = (3 * v164 + 1) >> 1;
            v177 = 8 * v176 + 8;
            if ( 8 * v164 + 8 >= (unsigned int)v177 || v164 >= v176 )
            {
              v236 = (char **)__cxa_allocate_exception(0x28u);
              sub_C7126(*(__int64 **)v264, "Overflow encountered when expanding vector", v237);
              v238 = *(__int64 **)v264;
              v239 = *(__int64 **)v264;
              *v236 = (char *)off_1C63128;
              sub_2333C0(v236 + 1, v239);
              sub_233E40((__int64)v238);
              v263 = (void *)(ptr.m128i_i64[0] - 8);
              __cxa_throw(v236, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v265) = v162;
            LODWORD(v268) = (3 * v164 + 1) >> 1;
            v263 = (void *)(ptr.m128i_i64[0] - 8);
            v178 = sub_186B300((void *)(ptr.m128i_i64[0] - 8), v177);
            v179 = (_DWORD *)(v178 + 8);
            v156 = a1[481];
            ptr.m128i_i64[0] = v178 + 8;
            v155 = (int)v265;
            *(_DWORD *)v178 = v268;
            LODWORD(v178) = *(_DWORD *)(v178 + 4);
            v158 = &v179[2 * (unsigned int)v178];
          }
          v166 = *a1;
          v161 = 0;
          v167 = v160;
LABEL_197:
          v263 = (void *)(v167 - 8);
          v168 = sub_15DB6A0(v166, 0, v161, v156, v167, v146, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
          v22 = v168;
          if ( v168 )
            ++*(_DWORD *)(v168 + 8);
          if ( v146 )
          {
            v31 = (*(_DWORD *)(v146 + 8))-- == 1;
            if ( v31 )
            {
              v263 = (void *)(ptr.m128i_i64[0] - 8);
              sub_15D7BC0(ptr.m128i_i64[1], v146);
            }
          }
          sub_186B220((void *)(ptr.m128i_i64[0] - 8));
        }
        else
        {
          v22 = v146;
        }
        sub_64ECB0(v270, v22, &qword_18D6CD0, 0xFFFFFFFFLL);
        v169 = *((unsigned int *)v21 - 1);
        ++v143;
      }
      while ( (unsigned int)v143 < (unsigned int)v169 );
      v170 = &v21[v169];
      for ( j = v21; j < v170; ++j )
      {
        while ( 1 )
        {
          v172 = *j;
          if ( *j )
          {
            v31 = (*(_DWORD *)(v172 + 8))-- == 1;
            if ( v31 )
              break;
          }
          if ( ++j >= v170 )
            goto LABEL_210;
        }
        sub_15D7BC0(v267, v172);
      }
    }
LABEL_210:
    v173 = n[0];
    *((_DWORD *)v21 - 1) = 0;
    ++*(_DWORD *)(v173 + 8);
    v174 = *((_DWORD *)v21 - 1);
    if ( v174 == *((_DWORD *)v21 - 2) )
    {
      v180 = (3 * v174 + 1) >> 1;
      v181 = 8 * v180 + 8;
      if ( 8 * v174 + 8 >= (unsigned int)v181 || v174 >= v180 )
      {
        v232 = (char **)__cxa_allocate_exception(0x28u);
        sub_C7126(*(__int64 **)v264, "Overflow encountered when expanding vector", v233);
        v234 = *(__int64 **)v264;
        v235 = *(__int64 **)v264;
        *v232 = (char *)off_1C63128;
        sub_2333C0(v232 + 1, v235);
        sub_233E40((__int64)v234);
        __cxa_throw(v232, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v182 = (unsigned int *)sub_186B300(v21 - 1, v181);
      v183 = v182[1];
      v21 = (__int64 *)(v182 + 2);
      *v182 = v180;
      LODWORD(v182) = v183;
      v48 = &v21[v183];
      v49 = (_DWORD)v182 + 1;
    }
    else
    {
      v175 = v174;
      v49 = v174 + 1;
      v48 = &v21[v175];
    }
  }
  else
  {
    ++*(_DWORD *)(n[0] + 8);
    v47 = (_QWORD *)sub_186B270(0x18u);
    v48 = v47 + 1;
    *v47 = 2;
    v49 = 1;
    v21 = v48;
  }
  *v48 = n[0];
  *((_DWORD *)v21 - 1) = v49;
  v50 = (__m128i *)sub_186B270(0x50u);
  v50->m128i_i32[2] = 0;
  v51 = *a1;
  v50[1].m128i_i64[0] = 0;
  v52 = n[0];
  v50[1].m128i_i8[8] = 1;
  strcpy(&v50[3].m128i_i8[8], "horn");
  v50->m128i_i64[0] = (__int64)&off_1C60CE8;
  v50[3].m128i_i64[0] = 4;
  v50[4].m128i_i64[1] = 0;
  v50[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)&v50[3].m128i_u64[1]);
  v53 = *(_QWORD *)(v52 + 16);
  ptr.m128i_i64[0] = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v54 = sub_186B270(0x58u);
  *(_QWORD *)(v54 + 32) = v51;
  v55 = _mm_loadl_epi64(&ptr);
  v50[4].m128i_i64[1] = v54 + 8;
  *(_QWORD *)(v54 + 24) = 0;
  *(_DWORD *)(v54 + 40) = 0;
  *(_QWORD *)v54 = 0x100000002LL;
  *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64(v55, (__m128i)(unsigned __int64)v51);
  v56 = *(_QWORD *)v271.m128i_i64[0];
  v57 = sub_1336AB0(*(_QWORD *)(*(_QWORD *)v271.m128i_i64[0] + 8LL), v50);
  ptr.m128i_i64[0] = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v58 = *(void (__fastcall ****)(void *))(v56 + 8);
  if ( v58 )
  {
    v31 = (*((_DWORD *)v58 + 2))-- == 1;
    if ( v31 )
    {
      (**v58)(v58);
      sub_186B220(v58);
    }
  }
  *(_QWORD *)(v56 + 8) = ptr.m128i_i64[0];
  v59 = *v21;
  v265 = (_OWORD *)v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  v60 = n[0];
  ptr.m128i_i32[0] = *(_DWORD *)(n[0] + 8);
  v31 = ptr.m128i_i32[0] == 1;
  *(_DWORD *)(n[0] + 8) = ptr.m128i_i32[0] - 1;
  if ( v31 )
    sub_15D7BC0(v267, v60);
LABEL_63:
  v61 = *(__int64 **)v271.m128i_i64[0];
  v62 = *(__int64 **)v271.m128i_i64[0];
  if ( (*(_BYTE *)(*(_QWORD *)v271.m128i_i64[0] + 123LL) & 0x20) != 0 )
  {
    v104 = v61[11];
    v105 = *v61;
    if ( v104 )
    {
      v106 = v61[11];
      for ( k = *(_BYTE *)(v104 + 3) >> 6; !k; k = *(_BYTE *)(v106 + 3) >> 6 )
        v106 = *(_QWORD *)(v106 + 16);
      if ( k == 1 )
      {
        v108 = *(_DWORD *)(v106 + 4) + 1;
      }
      else if ( k == 2 )
      {
        v108 = *(_DWORD *)(v106 + 4) - 1;
      }
      else
      {
        v108 = *(_DWORD *)(v106 + 4);
      }
      if ( v108 )
      {
        v109 = 18;
        while ( --v109 )
        {
          if ( *(char *)(v104 + 3) >= 0 )
          {
            if ( !*(_DWORD *)(v104 + 4) )
            {
              v110 = (__int64 *)(v104 + 8);
              goto LABEL_140;
            }
          }
          else if ( *(_BYTE *)(v104 + 3) >> 6 != 2 )
          {
            v110 = *(__int64 **)(v104 + 16);
            goto LABEL_140;
          }
          v104 = *(_QWORD *)(v104 + 16);
        }
        sub_233F80((__int64 *)(v105 + 616), (_DWORD *)v62 + 22);
        v105 = *v62;
        v110 = *(__int64 **)(v62[11] + 16);
LABEL_140:
        v104 = *v110;
      }
      else
      {
        v104 = 0;
      }
    }
    v63 = sub_132F960(v105, v104);
  }
  else
  {
    v63 = v61[2];
  }
  ptr.m128i_i64[0] = v63;
  if ( v63 )
    ++*(_DWORD *)(v63 + 8);
  if ( *((_BYTE *)a1 + 8) )
  {
    *(_QWORD *)v281 = 0;
    v282 = *a1;
    v82 = *((_QWORD *)v265 + 2);
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    v83 = (_QWORD *)a1[328];
    if ( v83 )
    {
      v84 = *((_DWORD *)v83 - 1);
      if ( v84 == *((_DWORD *)v83 - 2) )
      {
        v139 = (3 * v84 + 1) >> 1;
        v140 = 8 * v139 + 8;
        if ( 8 * v84 + 8 >= v140 || v84 >= v139 )
        {
          v240 = (char **)__cxa_allocate_exception(0x28u);
          sub_C7126((__int64 *)&v283, "Overflow encountered when expanding vector", v241);
          *v240 = (char *)off_1C63128;
          sub_2333C0(v240 + 1, &v283);
          sub_233E40((__int64)&v283);
          __cxa_throw(v240, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v141 = (unsigned int *)sub_186B300(v83 - 1, v140);
        v142 = v141[1];
        v83 = v141 + 2;
        *v141 = v139;
        a1[328] = (__int64)(v141 + 2);
        LODWORD(v141) = v142;
        v87 = &v83[v142];
        v86 = (_DWORD)v141 + 1;
      }
      else
      {
        v85 = v84;
        v86 = v84 + 1;
        v87 = &v83[v85];
      }
    }
    else
    {
      v200 = (_QWORD *)sub_186B270(0x18u);
      *v200 = 2;
      v86 = 1;
      v83 = v200 + 1;
      a1[328] = (__int64)v83;
      v87 = v83;
    }
    *v87 = v82;
    *((_DWORD *)v83 - 1) = v86;
    v88 = *((_DWORD *)a1 + 638);
    v89 = 2 * v88;
    if ( 3 * v88 < 4 * (*((_DWORD *)a1 + 639) + *((_DWORD *)a1 + 640)) )
    {
      v189 = v89;
      v264[0] = 2 * v88;
      v268 = 8LL * v89;
      v190 = (void *)sub_186B270(v268);
      v191 = 2 * v88;
      n[0] = (size_t)v190;
      v92 = (__int64 *)v268;
      if ( 2 * v88 )
      {
        memset(v190, 0, 8 * v189);
        v92 = (__int64 *)v268;
        v191 = v264[0];
      }
      v192 = (char *)a1[318];
      v91 = v191 - 1;
      v193 = &v192[8 * *((unsigned int *)a1 + 638)];
      v93 = (__int64 *)((char *)v92 + n[0]);
      if ( v192 != v193 )
      {
        do
        {
          while ( *(_QWORD *)v192 <= 1u )
          {
            v192 += 8;
            if ( v193 == v192 )
              goto LABEL_241;
          }
          v194 = n[0];
          v195 = 8LL * (*(_DWORD *)(*(_QWORD *)v192 + 12LL) & (unsigned int)v91);
          v196 = (_QWORD *)(n[0] + v195);
          if ( v92 == (__int64 *)v195 )
          {
LABEL_245:
            v194 = n[0];
            if ( (_QWORD *)n[0] == v196 )
            {
LABEL_250:
              v263 = v192;
              *(_QWORD *)v264 = v193;
              LODWORD(v268) = v191 - 1;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v197 = (_QWORD *)n[0];
            while ( *v197 )
            {
              if ( v196 == ++v197 )
                goto LABEL_250;
            }
          }
          else
          {
            v197 = (_QWORD *)(n[0] + v195);
            while ( *v197 )
            {
              if ( v93 == ++v197 )
                goto LABEL_245;
            }
          }
          v198 = *(_QWORD *)v192;
          v192 += 8;
          n[0] = v194;
          *v197 = v198;
        }
        while ( v193 != v192 );
LABEL_241:
        v193 = (char *)a1[318];
      }
      if ( v193 )
      {
        LODWORD(v263) = v191;
        *(_QWORD *)v264 = v92;
        LODWORD(v268) = v191 - 1;
        sub_186B220(v193);
        v191 = (int)v263;
        v92 = *(__int64 **)v264;
        v91 = v268;
      }
      v199 = n[0];
      *((_DWORD *)a1 + 638) = v191;
      *((_DWORD *)a1 + 640) = 0;
      a1[318] = v199;
      v90 = v199;
    }
    else
    {
      v90 = a1[318];
      v91 = v88 - 1;
      v92 = (__int64 *)(8LL * v88);
      n[0] = v90;
      v93 = (__int64 *)((char *)v92 + v90);
    }
    v94 = *(_DWORD *)(v82 + 12);
    v95 = 8LL * (v94 & (unsigned int)v91);
    v96 = (_QWORD *)(v90 + v95);
    if ( (__int64 *)v95 == v92 )
    {
      v98 = nullptr;
      v101 = (_QWORD *)v90;
LABEL_117:
      if ( v101 == v96 )
      {
LABEL_125:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v102 = v101;
      while ( 1 )
      {
        while ( 1 )
        {
          v103 = *v102;
          if ( *v102 > 1u )
            break;
          if ( !v103 )
          {
            n[0] = (size_t)v102;
            v97 = v102;
            goto LABEL_147;
          }
          v98 = v102++;
          if ( v96 == v102 )
            goto LABEL_125;
        }
        if ( *(_DWORD *)(v103 + 12) == v94 && v82 == v103 )
          break;
        if ( v96 == ++v102 )
          goto LABEL_125;
      }
      v97 = v102;
LABEL_254:
      *v97 = v82;
    }
    else
    {
      v97 = (_QWORD *)(v90 + v95);
      v98 = nullptr;
      v99 = v90;
      while ( 1 )
      {
        while ( 1 )
        {
          v100 = *v97;
          if ( *v97 <= 1u )
            break;
          if ( *(_DWORD *)(v100 + 12) == v94 && v82 == v100 )
            goto LABEL_254;
          if ( v93 == ++v97 )
          {
LABEL_116:
            n[0] = v99;
            v101 = (_QWORD *)v99;
            goto LABEL_117;
          }
        }
        if ( !v100 )
          break;
        v98 = v97++;
        if ( v93 == v97 )
          goto LABEL_116;
      }
LABEL_147:
      if ( v98 )
        --*((_DWORD *)a1 + 640);
      else
        v98 = v97;
      *v98 = v82;
      ++*((_DWORD *)a1 + 639);
    }
    sub_654110(v270, v96);
    sub_5D9090((_DWORD)v270, (_DWORD)v96, v112, v113, v114, v115, (_DWORD)v243);
    *(_QWORD *)v264 = &v283;
    if ( (unsigned __int8)sub_64B330(v270) )
    {
      sub_6440D0(&v283, v270);
      n[0] = sub_186B270(0xA8u);
      sub_5BDEB0(n[0], v270);
      sub_644270(&v283, n[0]);
      sub_64C400(v270, &v283);
      sub_6440F0(&v283);
    }
    sub_1694970(*(_QWORD *)v264, *a1);
    sub_1692DB0(*(_QWORD *)v264, v265, *(_QWORD *)(*a1 + 864), 0, 0);
    v116 = (void *)sub_1434DE0(*a1, 0);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v116 + 24LL))(v116, *(_QWORD *)v264);
    v117 = (size_t *)v271.m128i_i64[0];
    *(_DWORD *)(*(_QWORD *)v271.m128i_i64[0] + 120LL) = (*(_DWORD *)(*(_QWORD *)v271.m128i_i64[0] + 120LL) + 1)
                                                      & 0x3FFFFFF
                                                      | *(_DWORD *)(*(_QWORD *)v271.m128i_i64[0] + 120LL) & 0xFC000000;
    sub_ED2DA0(*v117);
    v118 = *v117;
    n[0] = v118;
    if ( v118 )
      ++*(_DWORD *)(v118 + 32);
    v119 = *((_DWORD *)v266 + 2);
    v120 = *((_DWORD *)v266 + 3);
    if ( v119 >= v120 )
    {
      LODWORD(v268) = 2 * v120;
      v121 = sub_186B270(16LL * v120);
      v119 = *((_DWORD *)v266 + 2);
      v184 = (_QWORD *)*v266;
      if ( v119 )
      {
        if ( v119 - 1 <= 2 || (_QWORD *)v121 == v184 + 1 )
        {
          v201 = n[0];
          for ( m = 0; m != v119; ++m )
            *(_QWORD *)(v121 + m * 8) = v184[m];
          n[0] = v201;
        }
        else
        {
          v185 = n[0];
          v186 = 0;
          do
          {
            *(__m128i *)(v121 + v186 * 8) = _mm_loadu_si128((const __m128i *)&v184[v186]);
            v186 += 2;
          }
          while ( v186 != 2LL * (v119 >> 1) );
          n[0] = v185;
          if ( (v119 & 1) != 0 )
            *(_QWORD *)(v121 + 8LL * (v119 & 0xFFFFFFFE)) = v184[v119 & 0xFFFFFFFE];
        }
      }
      if ( v184 != v266 + 2 && v184 )
      {
        sub_186B220(v184);
        v119 = *((_DWORD *)v266 + 2);
      }
      v187 = (__int64)v266;
      v188 = v268;
      *v266 = v121;
      *(_DWORD *)(v187 + 12) = v188;
    }
    else
    {
      v121 = *v266;
    }
    v122 = n[0];
    v123 = v270;
    *(_QWORD *)(v121 + 8LL * v119) = n[0];
    *((_DWORD *)v266 + 2) = v119 + 1;
    sub_654110(v123, v122);
    v124 = (_QWORD *)a1[302];
    if ( v124 )
    {
      v268 = (__int64)&v124[*((unsigned int *)v124 - 1)];
      if ( v124 != (_QWORD *)v268 )
      {
        v266 = a1 + 86;
        do
        {
          sub_62E310(v266, *v124, v269);
          v129 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v116 + 16LL))(v116);
          v130 = v281[0];
          n[0] = *(_QWORD *)v281;
          if ( *(_QWORD *)v281 )
          {
            ++*(_DWORD *)(*(_QWORD *)v281 + 8LL);
            sub_1435270(
              (_DWORD)v116,
              v130,
              (_DWORD)v269,
              v126,
              v127,
              v128,
              v245,
              v247,
              (__int64)v250,
              v253.m128i_i64[0],
              v253.m128i_i64[1]);
            v125 = n[0];
            LODWORD(v270) = *(_DWORD *)(n[0] + 8);
            v31 = (_DWORD)v270 == 1;
            *(_DWORD *)(n[0] + 8) = (_DWORD)v270 - 1;
            if ( v31 )
              sub_15D7BC0(v129, v125);
          }
          else
          {
            sub_1435270(
              (_DWORD)v116,
              0,
              (_DWORD)v269,
              v126,
              v127,
              v128,
              v245,
              v247,
              (__int64)v250,
              v253.m128i_i64[0],
              v253.m128i_i64[1]);
          }
          sub_EDBA20(*(_QWORD *)v271.m128i_i64[0], v281[0], 0, v246, v249, v252, v253.m128i_i64[0], v253.m128i_i64[1]);
          ++v124;
        }
        while ( (_QWORD *)v268 != v124 );
      }
    }
    v132 = v271.m128i_i64[0];
    *(_BYTE *)(*(_QWORD *)v271.m128i_i64[0] + 123LL) |= 0xC0u;
    v133 = *(_QWORD *)(*(_QWORD *)v132 + 8LL);
    n[0] = v133;
    if ( v133 )
      ++*(_DWORD *)(v133 + 8);
    (**(void (__fastcall ***)(void *))v116)(v116);
    sub_186B220(v116);
    sub_1695230(*(_QWORD *)v264);
    v134 = *(_QWORD *)v281;
    if ( *(_QWORD *)v281 )
    {
      v135 = v282;
      v31 = (*(_DWORD *)(*(_QWORD *)v281 + 8LL))-- == 1;
      if ( v31 )
        sub_15D7BC0(v135, v134);
    }
  }
  else
  {
    v276 = 0;
    v275 = ptr.m128i_i64[0];
    sub_38F460(
      a1,
      (__int64)v265,
      v271.m128i_i64[0],
      (__int64)v266,
      (void **)&v276,
      (void **)&v275,
      v243,
      v247,
      (int)v250,
      v253.m128i_i64[0],
      v253.m128i_i64[1]);
    n[0] = v276;
    ptr.m128i_i64[0] = v275;
  }
  v64 = *(_QWORD *)v271.m128i_i64[0];
  if ( ptr.m128i_i64[0] )
    ++*(_DWORD *)(ptr.m128i_i64[0] + 8);
  v65 = *(_DWORD **)(v64 + 16);
  if ( v65 && (v31 = v65[2] == 1, --v65[2], v31) )
  {
    (**(void (__fastcall ***)(_DWORD *))v65)(v65);
    sub_186B220(v65);
    v66 = *(_QWORD *)v271.m128i_i64[0];
  }
  else
  {
    v66 = v64;
  }
  v67 = *(_QWORD *)(v66 + 8);
  v68 = n[0];
  *(_QWORD *)(v64 + 16) = ptr.m128i_i64[0];
  v69 = sub_1336AB0(v67, v68);
  v70 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  v71 = *(void (__fastcall ****)(void *))(v66 + 8);
  if ( v71 )
  {
    v31 = (*((_DWORD *)v71 + 2))-- == 1;
    if ( v31 )
    {
      (**v71)(v71);
      sub_186B220(v71);
    }
  }
  v72 = n[0];
  *(_QWORD *)(v66 + 8) = v70;
  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v253), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v72 )
  {
    v271.m128i_i32[0] = *(_DWORD *)(v72 + 8);
    v31 = v271.m128i_i32[0] == 1;
    *(_DWORD *)(v72 + 8) = v271.m128i_i32[0] - 1;
    if ( v31 )
    {
      v136 = *(void (__fastcall ***)(size_t))v72;
      v137 = (void *)v72;
      v271 = v73;
      (*v136)(v72);
      sub_186B220(v137);
      v73 = _mm_load_si128(&v271);
    }
  }
  v74 = (void (***)(void))ptr.m128i_i64[0];
  if ( ptr.m128i_i64[0] )
  {
    LODWORD(n[0]) = *(_DWORD *)(ptr.m128i_i64[0] + 8);
    v31 = LODWORD(n[0]) == 1;
    *(_DWORD *)(ptr.m128i_i64[0] + 8) = LODWORD(n[0]) - 1;
    if ( v31 )
    {
      v138 = *v74;
      *(__m128i *)n = v73;
      (*v138)();
      sub_186B220(v74);
      v73 = _mm_load_si128((const __m128i *)n);
    }
  }
  v288[0] = v73;
  v286 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v296[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v293 != v250 )
    operator delete(v293, v295[0] + 1LL);
  v75 = v21;
  *((_QWORD *)&v288[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v254);
  v76 = (std::ios_base *)v253.m128i_i64[1];
  *(char **)((char *)&v286 + *(v258 - 3)) = v257;
  *(_QWORD *)&v288[0] = v260;
  *(_QWORD *)((char *)v288 + *(_QWORD *)(v260 - 24)) = v259;
  v286 = v262;
  *(char **)((char *)&v286 + *((_QWORD *)v262 - 3)) = v261;
  v287 = 0;
  v296[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v76);
  v77 = &v21[*((unsigned int *)v21 - 1)];
  if ( v21 < v77 )
  {
    do
    {
      while ( 1 )
      {
        v78 = *v75;
        if ( *v75 )
        {
          v31 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( v31 )
            break;
        }
        if ( ++v75 >= v77 )
          goto LABEL_93;
      }
      sub_15D7BC0(v267, v78);
      ++v75;
    }
    while ( v75 < v77 );
  }
LABEL_93:
  sub_186B220(v21 - 1);
  if ( v22 )
  {
    v31 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(ptr.m128i_i64[1], v22);
  }
  v79 = (__int64)v265;
  if ( v265 )
  {
    LODWORD(n[0]) = *((_DWORD *)v265 + 2);
    v31 = LODWORD(n[0]) == 1;
    *((_DWORD *)v265 + 2) = LODWORD(n[0]) - 1;
    if ( v31 )
      sub_15D7BC0(v267, v79);
  }
  return sub_EE4A00(v256);
}

