__int64 *__fastcall sub_6516E0(__int64 *a1, int a2, unsigned __int64 *a3, __int64 a4, double a5, double a6, __m128 a7)
{
  char **v7; // r14
  __int64 v8; // rdx
  char **exception; // r14
  __int64 v10; // rdx
  __int64 v12; // r15
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  __int64 v15; // r12
  char v16; // r13
  unsigned __int64 *v17; // r15
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // eax
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  size_t v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 *v31; // r14
  __int64 i; // rsi
  __int64 *v33; // r14
  __int64 v34; // rbx
  __int64 j; // rsi
  __int64 v36; // rbx
  unsigned __int64 *v37; // r14
  unsigned __int64 k; // rsi
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rbx
  _DWORD *v44; // rax
  char *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  char *v48; // rcx
  char *v49; // rbx
  __int64 *v50; // rax
  __int64 *v51; // r14
  __int64 v52; // rsi
  __int64 *v53; // rax
  __int64 *v54; // rbx
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // r14
  __int64 v58; // r13
  __int64 *v59; // r12
  unsigned __int64 v60; // r13
  __int64 v61; // rsi
  __int64 v62; // rdi
  bool v63; // zf
  __int64 *result; // rax
  __int64 v65; // rsi
  const char *v66; // rax
  __int64 v67; // r12
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // r14
  __int64 v70; // r12
  __int64 v71; // rcx
  __int64 m; // rax
  __int64 v73; // rdx
  __int64 *v74; // rbx
  __int64 v75; // r13
  int v76; // r12d
  __int64 v77; // rax
  int v78; // r8d
  int v79; // r9d
  size_t v80; // r13
  __int64 v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // rax
  int v84; // ecx
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 *v88; // rbx
  std::ios_base *v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdi
  unsigned __int64 v92; // r13
  __m128i *v93; // r12
  unsigned __int64 v94; // rcx
  int v95; // r8d
  size_t v96; // r14
  __int64 v97; // rax
  char *v98; // rsi
  char *v99; // rax
  int v100; // edx
  unsigned __int64 v101; // rcx
  __int64 v102; // r12
  __int64 v103; // rdi
  __m128i v104; // xmm4
  _BYTE *v105; // rax
  size_t v106; // rax
  size_t v107; // r8
  _QWORD *v108; // r9
  std::ios_base *v109; // rdi
  char *v110; // rax
  int v111; // edx
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __m128i *v114; // rsi
  __m128i *v115; // rax
  __m128i *v116; // rdi
  __int32 v117; // edx
  size_t v118; // rdx
  unsigned __int64 v119; // rdi
  _QWORD *v120; // rax
  size_t v121; // r8
  _QWORD *v122; // r9
  _QWORD *v123; // rax
  __int32 v124; // eax
  void *v125; // rsi
  size_t *v126; // rax
  unsigned __int64 v127; // rdi
  std::ostream *v128; // rdi
  __int64 v129; // rax
  __m128i *v130; // rax
  int v131; // ecx
  __m128i *v132; // rdx
  const __m128i *v133; // rbx
  std::locale *v134; // rax
  __int64 v135; // rdx
  __m128i *v136; // rsi
  __m128i *v137; // rdx
  __int64 v138; // rbx
  __int64 *v139; // rbx
  std::ios_base *v140; // rax
  __int64 v141; // rsi
  __int64 v142; // rdi
  unsigned int v143; // eax
  unsigned int v144; // r12d
  __int64 v145; // rax
  __int64 v146; // rax
  int v147; // [rsp-8h] [rbp-788h]
  void *v148; // [rsp+0h] [rbp-780h]
  int v149; // [rsp+0h] [rbp-780h]
  int v150; // [rsp+0h] [rbp-780h]
  __int64 *v151; // [rsp+8h] [rbp-778h]
  int v152; // [rsp+8h] [rbp-778h]
  __int64 *v153; // [rsp+10h] [rbp-770h]
  int v154; // [rsp+10h] [rbp-770h]
  int s; // [rsp+18h] [rbp-768h]
  char *sa; // [rsp+18h] [rbp-768h]
  int sb; // [rsp+18h] [rbp-768h]
  size_t n; // [rsp+20h] [rbp-760h]
  size_t na; // [rsp+20h] [rbp-760h]
  int nb; // [rsp+20h] [rbp-760h]
  int v161; // [rsp+28h] [rbp-758h]
  _QWORD *v162; // [rsp+28h] [rbp-758h]
  char v163; // [rsp+28h] [rbp-758h]
  void *v164; // [rsp+28h] [rbp-758h]
  __int64 v165; // [rsp+30h] [rbp-750h]
  size_t v166; // [rsp+30h] [rbp-750h]
  int v167; // [rsp+30h] [rbp-750h]
  int v168; // [rsp+38h] [rbp-748h]
  __int64 v169; // [rsp+38h] [rbp-748h]
  int v170; // [rsp+38h] [rbp-748h]
  _OWORD *ptr; // [rsp+40h] [rbp-740h]
  void *ptra; // [rsp+40h] [rbp-740h]
  int ptrb; // [rsp+40h] [rbp-740h]
  int v174; // [rsp+48h] [rbp-738h]
  void *v175; // [rsp+48h] [rbp-738h]
  int v176; // [rsp+50h] [rbp-730h]
  int v177; // [rsp+50h] [rbp-730h]
  char v178; // [rsp+56h] [rbp-72Ah]
  char v179; // [rsp+56h] [rbp-72Ah]
  char v180; // [rsp+57h] [rbp-729h]
  char v181; // [rsp+57h] [rbp-729h]
  char *v182; // [rsp+58h] [rbp-728h] BYREF
  __m128i v183; // [rsp+60h] [rbp-720h] BYREF
  void *v184; // [rsp+70h] [rbp-710h]
  __int64 *v185; // [rsp+78h] [rbp-708h]
  __int64 v186; // [rsp+80h] [rbp-700h]
  int v187[2]; // [rsp+88h] [rbp-6F8h]
  int v188[4]; // [rsp+90h] [rbp-6F0h] BYREF
  std::locale *v189; // [rsp+A0h] [rbp-6E0h]
  int v190[2]; // [rsp+A8h] [rbp-6D8h]
  __int64 *v191; // [rsp+B0h] [rbp-6D0h]
  std::ios_base *v192; // [rsp+B8h] [rbp-6C8h]
  unsigned __int64 v193; // [rsp+C0h] [rbp-6C0h]
  int v194[2]; // [rsp+C8h] [rbp-6B8h]
  int v195; // [rsp+D0h] [rbp-6B0h]
  char v196; // [rsp+D6h] [rbp-6AAh]
  char v197; // [rsp+D7h] [rbp-6A9h]
  __int64 v198; // [rsp+D8h] [rbp-6A8h] BYREF
  char *v199; // [rsp+E0h] [rbp-6A0h] BYREF
  char *v200; // [rsp+E8h] [rbp-698h] BYREF
  __int64 v201; // [rsp+F0h] [rbp-690h] BYREF
  __int64 v202; // [rsp+F8h] [rbp-688h]
  __int64 v203; // [rsp+100h] [rbp-680h] BYREF
  unsigned __int64 *v204; // [rsp+108h] [rbp-678h]
  void *v205; // [rsp+110h] [rbp-670h] BYREF
  _BYTE v206[12]; // [rsp+118h] [rbp-668h]
  int v207; // [rsp+128h] [rbp-658h]
  _OWORD *v208; // [rsp+130h] [rbp-650h] BYREF
  __int64 v209; // [rsp+138h] [rbp-648h]
  int v210; // [rsp+140h] [rbp-640h]
  int v211; // [rsp+148h] [rbp-638h]
  void *v212; // [rsp+150h] [rbp-630h] BYREF
  __int64 v213; // [rsp+158h] [rbp-628h]
  int v214; // [rsp+160h] [rbp-620h]
  int v215; // [rsp+168h] [rbp-618h]
  int v216; // [rsp+16Ch] [rbp-614h]
  void *p_dest; // [rsp+170h] [rbp-610h] BYREF
  size_t v218; // [rsp+178h] [rbp-608h] BYREF
  size_t dest; // [rsp+180h] [rbp-600h] BYREF
  int v220; // [rsp+188h] [rbp-5F8h]
  __int64 *v221; // [rsp+190h] [rbp-5F0h] BYREF
  void *v222; // [rsp+198h] [rbp-5E8h]
  int v223; // [rsp+1A0h] [rbp-5E0h]
  int v224; // [rsp+1A8h] [rbp-5D8h]
  void *v225; // [rsp+1B0h] [rbp-5D0h]
  int v226; // [rsp+1B8h] [rbp-5C8h]
  char v227; // [rsp+1C0h] [rbp-5C0h]
  __int64 v228; // [rsp+298h] [rbp-4E8h]
  __int64 v229[10]; // [rsp+2A0h] [rbp-4E0h] BYREF
  void *v230; // [rsp+2F0h] [rbp-490h]
  void *v231; // [rsp+2F8h] [rbp-488h]
  int v232[4]; // [rsp+310h] [rbp-470h] BYREF
  __int128 v233; // [rsp+320h] [rbp-460h] BYREF
  void *src[2]; // [rsp+330h] [rbp-450h]
  __int128 v235; // [rsp+340h] [rbp-440h]
  char v236[8]; // [rsp+350h] [rbp-430h] BYREF
  int v237; // [rsp+358h] [rbp-428h]
  void *v238; // [rsp+360h] [rbp-420h]
  size_t v239; // [rsp+368h] [rbp-418h]
  _QWORD v240[2]; // [rsp+370h] [rbp-410h] BYREF
  _QWORD v241[28]; // [rsp+380h] [rbp-400h] BYREF
  __int16 v242; // [rsp+460h] [rbp-320h]
  __int128 v243; // [rsp+468h] [rbp-318h]
  __int128 v244; // [rsp+478h] [rbp-308h]
  __int64 v245; // [rsp+490h] [rbp-2F0h] BYREF
  void *v246; // [rsp+498h] [rbp-2E8h]
  __int64 v247; // [rsp+4A0h] [rbp-2E0h]
  int v248; // [rsp+4A8h] [rbp-2D8h]
  __int64 *v249; // [rsp+4B0h] [rbp-2D0h] BYREF
  void *v250; // [rsp+4B8h] [rbp-2C8h]
  void *v251; // [rsp+4D0h] [rbp-2B0h]
  __int64 v252; // [rsp+5B8h] [rbp-1C8h]
  __int64 v253[10]; // [rsp+5C0h] [rbp-1C0h] BYREF
  void *v254; // [rsp+610h] [rbp-170h]
  void *v255; // [rsp+618h] [rbp-168h]
  int v256; // [rsp+628h] [rbp-158h]
  __int64 v257; // [rsp+630h] [rbp-150h]
  int v258; // [rsp+638h] [rbp-148h]
  __int64 v259; // [rsp+640h] [rbp-140h]
  int v260; // [rsp+648h] [rbp-138h]
  __int64 v261; // [rsp+650h] [rbp-130h]
  __int64 v262; // [rsp+660h] [rbp-120h]
  void *v263; // [rsp+668h] [rbp-118h]
  __int64 v264[2]; // [rsp+670h] [rbp-110h] BYREF
  __int64 v265; // [rsp+680h] [rbp-100h]
  char v266[8]; // [rsp+688h] [rbp-F8h] BYREF
  __int64 v267; // [rsp+690h] [rbp-F0h]
  __int64 v268; // [rsp+698h] [rbp-E8h]
  __int64 v269; // [rsp+6A0h] [rbp-E0h]
  __int64 v270; // [rsp+6A8h] [rbp-D8h]
  __int64 v271; // [rsp+6B0h] [rbp-D0h]
  __int64 v272; // [rsp+6B8h] [rbp-C8h]
  __int64 (__fastcall **v273)(); // [rsp+6C0h] [rbp-C0h]
  void *v274; // [rsp+6D8h] [rbp-A8h]
  void *v275; // [rsp+6F0h] [rbp-90h]
  __int64 v276; // [rsp+6F8h] [rbp-88h]
  __int64 *v277; // [rsp+700h] [rbp-80h]
  __int64 v278; // [rsp+708h] [rbp-78h]
  __int64 v279; // [rsp+748h] [rbp-38h]

  v12 = *a1;
  v191 = a1;
  *(_QWORD *)v194 = a4;
  *(_QWORD *)v187 = v12;
  v245 = v12;
  v13 = (_OWORD *)sub_186B270(0x40u);
  v246 = v13;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v248 = 0;
  v247 = 8;
  sub_655A10(&v249, v12);
  v257 = 0;
  v256 = 0;
  v259 = 0;
  v258 = 0;
  v261 = 0;
  v260 = 0;
  v262 = 0;
  v263 = nullptr;
  v264[0] = v12;
  v264[1] = 0;
  v265 = 0;
  sub_15C0990(v266, v12);
  v14 = (_OWORD *)sub_186B270(0x40u);
  v184 = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  *(_QWORD *)&v206[4] = 0;
  v15 = v191[368];
  if ( v15 )
    LODWORD(v189) = *(_DWORD *)(v15 - 4);
  else
    LODWORD(v189) = 0;
  v201 = *(_QWORD *)v187;
  v203 = *(_QWORD *)v187;
  v180 = sub_1859630(*(_QWORD *)v191[4], "print_fixedpoint_extensions", v191[4] + 8, 1);
  sub_1859630(*(_QWORD *)v191[4], "print_low_level_smt2", v191[4] + 8, 0);
  v16 = sub_1859630(*(_QWORD *)v191[4], "print_with_variable_declarations", v191[4] + 8, 1);
  v202 = 0;
  v204 = nullptr;
  v198 = 0;
  sub_64F660((__int64)v191, (__int64)&v201, (__int64)&v203, &v198, 0.0, a6, a7);
  v17 = v204;
  v185 = (__int64 *)v202;
  v168 = v198;
  if ( a2 )
  {
    v18 = &a3[a2];
    v19 = *a3;
    v193 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    if ( v17 )
      goto LABEL_11;
    v20 = (_QWORD *)sub_186B270(0x18u);
    v17 = v20 + 1;
    *v20 = 2;
    v21 = 1;
    v22 = v17;
    while ( 1 )
    {
      ++a3;
      *v22 = v193;
      *((_DWORD *)v17 - 1) = v21;
      if ( v18 == a3 )
        break;
      v23 = *a3;
      v193 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
LABEL_11:
      v24 = *((_DWORD *)v17 - 1);
      if ( v24 == *((_DWORD *)v17 - 2) )
      {
        v26 = (3 * v24 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v27 || v24 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_104888((__int64 *)v232, "Overflow encountered when expanding vector", v10);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v232);
          sub_233E40((__int64)v232);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v192) = (3 * v24 + 1) >> 1;
        v28 = sub_186B300(v17 - 1, v27);
        v17 = (unsigned __int64 *)(v28 + 8);
        *(_DWORD *)v28 = (_DWORD)v192;
        LODWORD(v28) = *(_DWORD *)(v28 + 4);
        v22 = &v17[(unsigned int)v28];
        v21 = v28 + 1;
      }
      else
      {
        v25 = v24;
        v21 = v24 + 1;
        v22 = &v17[v25];
      }
    }
  }
  sub_655A10(&v221, *(_QWORD *)v187);
  v29 = (_QWORD *)sub_186B270(0x80u);
  *v29 = 0;
  v30 = (unsigned int)v189;
  v29[1] = 0;
  v29[2] = 0;
  v29[3] = 0;
  v29[4] = 0;
  v29[5] = 0;
  v29[6] = 0;
  v29[7] = 0;
  v29[8] = 0;
  v29[9] = 0;
  v29[10] = 0;
  v29[11] = 0;
  v29[12] = 0;
  v29[13] = 0;
  v29[14] = 0;
  v29[15] = 0;
  v212 = v29;
  v214 = 0;
  v213 = 8;
  LOBYTE(v215) = 65;
  v216 = 0;
  *(_QWORD *)v190 = &v245;
  sub_168ACD0(&v245, v30, v15);
  if ( v30 )
  {
    v31 = (__int64 *)v15;
    v193 = v15 + 8LL * (unsigned int)v189;
    do
    {
      for ( i = *v31; *(_WORD *)(i + 4) == 2; i = *(_QWORD *)(i + 24) )
        ;
      sub_13405C0(&v212, i);
      ++v31;
    }
    while ( (__int64 *)v193 != v31 );
  }
  if ( v185 )
  {
    v33 = v185;
    v34 = *((unsigned int *)v185 - 1);
    sub_168ACD0(*(_QWORD *)v190, v34, v185);
    if ( (_DWORD)v34 )
    {
      v193 = (unsigned __int64)&v185[v34];
      do
      {
        for ( j = *v33; *(_WORD *)(j + 4) == 2; j = *(_QWORD *)(j + 24) )
          ;
        sub_13405C0(&v212, j);
        ++v33;
      }
      while ( (__int64 *)v193 != v33 );
    }
  }
  else
  {
    sub_168ACD0(*(_QWORD *)v190, 0, 0);
  }
  if ( v17 )
  {
    v36 = *((unsigned int *)v17 - 1);
    sub_168ACD0(*(_QWORD *)v190, v36, v17);
    if ( (_DWORD)v36 )
    {
      v37 = v17;
      v193 = (unsigned __int64)&v17[v36];
      do
      {
        for ( k = *v37; *(_WORD *)(k + 4) == 2; k = *(_QWORD *)(k + 24) )
          ;
        sub_13405C0(&v212, k);
        ++v37;
      }
      while ( v37 != (unsigned __int64 *)v193 );
    }
  }
  else
  {
    sub_168ACD0(*(_QWORD *)v190, 0, 0);
  }
  ptr = (_OWORD *)sub_186B270(0x40u);
  *ptr = 0;
  ptr[1] = 0;
  ptr[2] = 0;
  ptr[3] = 0;
  v210 = 0;
  v209 = 8;
  v42 = v269;
  if ( v269 && (v39 = *(unsigned int *)(v269 - 4), (_DWORD)v39) )
  {
    v43 = 8 * v39;
    v193 = 0;
    LODWORD(v192) = 8;
    while ( 1 )
    {
      v39 = *(_QWORD *)(v42 + v193);
      v44 = *(_DWORD **)(v39 + 24);
      if ( !v44 || *v44 == -1 )
      {
        if ( sub_64AC60((_QWORD *)v191[286], *((_DWORD *)v191 + 574), v39) && v180 )
        {
          v200 = v45;
          v205 = v184;
          *(_DWORD *)v206 = (_DWORD)v192;
          sub_656920(&v205, &v200, v45, v46, v47);
          v184 = v205;
          LODWORD(v192) = *(_DWORD *)v206;
        }
        else
        {
          p_dest = v45;
          v208 = ptr;
          sub_656920(&v208, &p_dest, v45, v46, v47);
          ptr = v208;
        }
      }
      v193 += 8LL;
      if ( v193 == v43 )
        break;
      v42 = v269;
    }
  }
  else
  {
    LODWORD(v192) = 8;
  }
  if ( !v180 )
    std::__ostream_insert<char,std::char_traits<char>>();
  v48 = (char *)v184 + 8 * (unsigned int)v192;
  v49 = (char *)v184;
  if ( v48 == v184 )
  {
    sub_168C010(
      v190[0],
      v194[0],
      v39,
      (int)v48,
      v40,
      v41,
      v148,
      (__int64)&v203,
      (int)&v201,
      s,
      n,
      v161,
      v165,
      v168,
      (int)ptr,
      (int)&v221,
      v176,
      (int)v182,
      v183.m128i_i32[0],
      v183.m128i_i32[2],
      (int)v184,
      (__int64)v185,
      v186,
      v187[0],
      *(void **)v188,
      v188[2],
      (int)v189,
      *(void **)v190);
  }
  else
  {
    v50 = (__int64 *)((char *)v184 + 8 * (unsigned int)v192);
    while ( *(_QWORD *)v49 <= 1u )
    {
      v49 += 8;
      if ( v48 == v49 )
      {
LABEL_149:
        v51 = v50;
        goto LABEL_57;
      }
    }
    v51 = (__int64 *)((char *)v184 + 8 * (unsigned int)v192);
    if ( v48 != v49 )
    {
      v52 = *(_QWORD *)v49;
      while ( 2 )
      {
        sub_168B340(*(_QWORD *)v190, v52);
        v53 = (__int64 *)(v49 + 8);
        if ( v51 != (__int64 *)(v49 + 8) )
        {
          LODWORD(v48) = (_DWORD)v184 + 8 * (_DWORD)v192;
          while ( 1 )
          {
            v52 = *v53;
            v49 = (char *)v53;
            if ( (unsigned __int64)*v53 > 1 )
              break;
            if ( v51 == ++v53 )
            {
              v50 = (__int64 *)((char *)v184 + 8 * (unsigned int)v192);
              goto LABEL_149;
            }
          }
          if ( v51 != v53 )
            continue;
        }
        break;
      }
    }
LABEL_57:
    sub_168C010(
      v190[0],
      v194[0],
      v39,
      (int)v48,
      v40,
      v41,
      v148,
      (__int64)&v203,
      (int)&v201,
      s,
      n,
      v161,
      v165,
      v168,
      (int)ptr,
      (int)&v221,
      v176,
      (int)v182,
      v183.m128i_i32[0],
      v183.m128i_i32[2],
      (int)v184,
      (__int64)v185,
      v186,
      v187[0],
      *(void **)v188,
      v188[2],
      (int)v189,
      *(void **)v190);
    v54 = (__int64 *)v184;
    while ( (unsigned __int64)*v54 <= 1 )
    {
      if ( v51 == ++v54 )
        goto LABEL_67;
    }
    if ( v51 != v54 )
    {
      v55 = *v54;
      do
      {
        sub_64E950(v191, *(__int64 *)v194, v55);
        v56 = v54 + 1;
        if ( v51 == v54 + 1 )
          break;
        while ( 1 )
        {
          v55 = *v56;
          v54 = v56;
          if ( (unsigned __int64)*v56 > 1 )
            break;
          if ( v51 == ++v56 )
            goto LABEL_67;
        }
      }
      while ( v51 != v56 );
    }
  }
LABEL_67:
  if ( v16 && v181 )
  {
    sub_64FE60(v191, v153, (int)&v212, v194[0]);
    if ( !(_DWORD)v189 )
    {
      if ( !v185 || !*((_DWORD *)v185 - 1) )
        goto LABEL_171;
      goto LABEL_157;
    }
    v193 = v15;
    if ( v178 )
      goto LABEL_71;
    do
    {
LABEL_154:
      std::__ostream_insert<char,std::char_traits<char>>();
      v65 = *(_QWORD *)v193;
      *(_QWORD *)v232 = 0;
      sub_160DF70(v194[0], v65, v174, (int)v232, 0, 0, nullptr);
      sub_18572D0(v232);
      std::__ostream_insert<char,std::char_traits<char>>();
      v193 += 8LL;
    }
    while ( v15 + 8LL * (unsigned int)v189 != v193 );
    if ( !v185 )
      goto LABEL_76;
    goto LABEL_156;
  }
  if ( !(_DWORD)v189 )
    goto LABEL_75;
  if ( v181 != 1 )
  {
    v7 = (char **)__cxa_allocate_exception(0x28u);
    sub_104888((__int64 *)v232, "Background axioms cannot be used with SMT-LIB2 HORN format", v8);
    *v7 = (char *)off_1C63128;
    sub_2333C0(v7 + 1, v232);
    sub_233E40((__int64)v232);
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v193 = v15;
  if ( !v178 )
    goto LABEL_154;
LABEL_71:
  v57 = v15 + 8LL * (unsigned int)v189;
  do
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v58 = *(_QWORD *)v193;
    sub_1651B90(v232, *(_QWORD *)v187);
    sub_1655780(
      (unsigned int)v232,
      v194[0],
      v58,
      0,
      0,
      0,
      v149,
      (_DWORD)v151,
      (_DWORD)v153,
      (_DWORD)sa,
      na,
      (__int64)v162,
      v166,
      v169,
      (__int64)ptra,
      v174,
      v177,
      (_DWORD)v182,
      v183.m128i_i32[0],
      v183.m128i_i32[2],
      (_DWORD)v184,
      (_DWORD)v185,
      v186,
      v187[0],
      v188[0],
      v188[2],
      (_DWORD)v189,
      v190[0],
      (_DWORD)v191,
      (_DWORD)v192,
      v193,
      v194[0],
      v195,
      v198,
      (_DWORD)v199,
      (_DWORD)v200,
      v201,
      v202,
      v203,
      (_DWORD)v204,
      (_DWORD)v205,
      *(__int64 *)v206,
      v206[8],
      v207,
      (_DWORD)v208,
      v209,
      v210,
      v211,
      (_DWORD)v212,
      v213,
      v214,
      v215,
      (_DWORD)p_dest,
      v218,
      dest,
      v220,
      (_DWORD)v221,
      (_DWORD)v222,
      v223,
      v224,
      (_DWORD)v225,
      v226,
      v227);
    if ( v238 != v240 )
      operator delete(v238, v240[0] + 1LL);
    sub_2334C0((__int64 *)&v233 + 1);
    sub_2334C0((__int64 *)&v232[2]);
    std::__ostream_insert<char,std::char_traits<char>>();
    v193 += 8LL;
  }
  while ( v193 != v57 );
LABEL_75:
  if ( !v185 )
    goto LABEL_76;
LABEL_156:
  if ( !*((_DWORD *)v185 - 1) )
    goto LABEL_76;
LABEL_157:
  v186 = 0;
  v182 = (char *)&`vtable for'std::ostringstream + 24;
  v66 = "(assert ";
  if ( v181 )
    v66 = "(rule ";
  v183 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  sa = (char *)v66;
  while ( 2 )
  {
    strlen(sa);
    std::__ostream_insert<char,std::char_traits<char>>();
    v67 = v185[v186];
    v199 = *(char **)(v169 + 8 * v186);
    if ( v199 )
      std::__ostream_insert<char,std::char_traits<char>>();
    if ( v178 )
    {
      sub_1651B90(v232, *(_QWORD *)v187);
      sub_1655780(
        (unsigned int)v232,
        v194[0],
        v67,
        0,
        0,
        0,
        v149,
        (_DWORD)v151,
        (_DWORD)v153,
        (_DWORD)sa,
        na,
        (__int64)v162,
        v166,
        v169,
        (__int64)ptra,
        v174,
        v177,
        (_DWORD)v182,
        v183.m128i_i32[0],
        v183.m128i_i32[2],
        (_DWORD)v184,
        (_DWORD)v185,
        v186,
        v187[0],
        v188[0],
        v188[2],
        (_DWORD)v189,
        v190[0],
        (_DWORD)v191,
        (_DWORD)v192,
        v193,
        v194[0],
        v195,
        v198,
        (_DWORD)v199,
        (_DWORD)v200,
        v201,
        v202,
        v203,
        (_DWORD)v204,
        (_DWORD)v205,
        *(__int64 *)v206,
        v206[8],
        v207,
        (_DWORD)v208,
        v209,
        v210,
        v211,
        (_DWORD)v212,
        v213,
        v214,
        v215,
        (_DWORD)p_dest,
        v218,
        dest,
        v220,
        (_DWORD)v221,
        (_DWORD)v222,
        v223,
        v224,
        (_DWORD)v225,
        v226,
        v227);
      if ( v238 != v240 )
        operator delete(v238, v240[0] + 1LL);
      sub_2334C0((__int64 *)&v233 + 1);
      sub_2334C0((__int64 *)&v232[2]);
    }
    else
    {
      *(_QWORD *)v232 = 0;
      sub_160DF70(v194[0], v67, v174, (int)v232, 0, 0, nullptr);
      sub_18572D0(v232);
    }
    if ( !v199 )
      goto LABEL_164;
    std::__ostream_insert<char,std::char_traits<char>>();
    v192 = (std::ios_base *)v241;
LABEL_207:
    v92 = (unsigned __int64)v199;
    v93 = (__m128i *)v212;
    if ( v199 )
    {
      if ( ((unsigned __int8)v199 & 7) == 1 )
        v94 = (unsigned __int64)v199 >> 3;
      else
        LODWORD(v94) = *((_DWORD *)v199 - 2);
    }
    else
    {
      LODWORD(v94) = -1640531495;
    }
    v95 = v213 - 1;
    v96 = 16LL * (unsigned int)v213;
    v97 = 16LL * ((unsigned int)v94 & ((_DWORD)v213 - 1));
    v193 = (unsigned __int64)v212 + v96;
    v98 = (char *)v212 + v97;
    if ( v97 == v96 )
      goto LABEL_240;
    v99 = (char *)v212 + v97;
    do
    {
      v100 = *((_DWORD *)v99 + 1);
      if ( v100 == 2 )
      {
        if ( (_DWORD)v94 == *(_DWORD *)v99 && v199 == *((char **)v99 + 1) )
        {
LABEL_217:
          std::ios_base::ios_base(v192);
          v242 = 0;
          v243 = 0;
          v244 = 0;
          v241[0] = (char *)&`vtable for'std::ios + 16;
          v241[27] = 0;
          v101 = `VTT for'std::ostringstream[1];
          v102 = `VTT for'std::ostringstream[2];
          v103 = *(_QWORD *)(v101 - 24);
          *(_QWORD *)v232 = v101;
          v193 = v101;
          *(_QWORD *)((char *)v232 + v103) = v102;
          std::ios::init();
          v104 = _mm_load_si128(&v183);
          v233 = 0;
          *(__m128i *)v232 = v104;
          v241[0] = (char *)&`vtable for'std::ostringstream + 64;
          v189 = (std::locale *)v236;
          *(_OWORD *)src = 0;
          v235 = 0;
          std::locale::locale((std::locale *)v236);
          v237 = 16;
          v238 = v240;
          *(_QWORD *)&v232[2] = (char *)&`vtable for'std::stringbuf + 16;
          v239 = 0;
          LOBYTE(v240[0]) = 0;
          std::ios::init();
          if ( ((unsigned __int8)v199 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v199 )
              strlen(v199);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          v196 = 33;
          if ( *(void **)((char *)&src[-2] + *(_QWORD *)(*(_QWORD *)v232 - 24LL)) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put((std::ostream *)v232, 33);
          v105 = (_BYTE *)v235;
          v218 = 0;
          p_dest = &dest;
          LOBYTE(dest) = 0;
          if ( !(_QWORD)v235 )
          {
            v118 = v239;
            if ( v239 > 0xF )
            {
              if ( (v239 & 0x8000000000000000LL) != 0LL )
              {
                *(_QWORD *)v188 = &p_dest;
                std::__throw_length_error("basic_string::_M_create");
              }
              if ( v239 <= 0x1D )
              {
                v166 = 30;
                v127 = 31;
              }
              else
              {
                v127 = v239 + 1;
                if ( (__int64)(v239 + 1) < 0 )
                {
                  *(_QWORD *)v188 = &p_dest;
                  std::__throw_bad_alloc();
                }
                v166 = v239;
              }
              v162 = (_QWORD *)v239;
              *(_QWORD *)v188 = &p_dest;
              *(_QWORD *)v188 = operator new(v127);
              sub_233E40((__int64)&p_dest);
              v126 = *(size_t **)v188;
              v125 = v238;
              v118 = (size_t)v162;
              p_dest = *(void **)v188;
              dest = v166;
            }
            else
            {
              if ( !v239 )
              {
LABEL_270:
                v218 = v239;
                *((_BYTE *)&dest + v239) = 0;
                goto LABEL_234;
              }
              v125 = v238;
              v126 = &dest;
              if ( v239 == 1 )
              {
                LOBYTE(dest) = *(_BYTE *)v238;
                goto LABEL_270;
              }
            }
            *(_QWORD *)v188 = v118;
            memcpy(v126, v125, v118);
            v218 = *(_QWORD *)v188;
            *((_BYTE *)p_dest + *(_QWORD *)v188) = 0;
            goto LABEL_234;
          }
          if ( src[0] >= (void *)v235 )
            v105 = src[0];
          if ( !src[0] )
            v105 = (_BYTE *)v235;
          v106 = v105 - (char *)src[1];
          v107 = v106;
          if ( (v106 & 0x8000000000000000LL) != 0LL )
          {
            *(_QWORD *)v188 = &p_dest;
            std::__throw_length_error("basic_string::_M_replace");
          }
          if ( v106 > 0xF )
          {
            if ( v106 > 0x1D )
            {
              v119 = v106 + 1;
              if ( (__int64)(v106 + 1) < 0 )
              {
                *(_QWORD *)v188 = &p_dest;
                std::__throw_bad_alloc();
              }
              v166 = v106;
            }
            else
            {
              v166 = 30;
              v119 = 31;
            }
            na = v106;
            v164 = src[1];
            *(_QWORD *)v188 = &p_dest;
            v120 = (_QWORD *)operator new(v119);
            v121 = na;
            v122 = v120;
            if ( v164 )
            {
              *(_QWORD *)v188 = na;
              v123 = memcpy(v120, v164, na);
              v121 = *(_QWORD *)v188;
              v122 = v123;
            }
            v162 = v122;
            *(_QWORD *)v188 = v121;
            sub_233E40((__int64)&p_dest);
            v108 = v162;
            v107 = *(_QWORD *)v188;
            p_dest = v162;
            dest = v166;
          }
          else
          {
            *(_QWORD *)v188 = &p_dest;
            if ( src[1] == &dest )
            {
              v166 = v106;
              std::string::_M_replace_cold();
              v107 = v166;
              v108 = p_dest;
            }
            else
            {
              if ( v106 )
              {
                if ( v106 == 1 )
                {
                  LOBYTE(dest) = *(_BYTE *)src[1];
                }
                else
                {
                  *(_QWORD *)v188 = v106;
                  memcpy(&dest, src[1], v106);
                  v107 = *(_QWORD *)v188;
                }
              }
              v108 = &dest;
            }
          }
          v218 = v107;
          *((_BYTE *)v108 + v107) = 0;
LABEL_234:
          *(__m128i *)v188 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&v182),
                               (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
          sub_180C5A0(&v200, p_dest);
          v199 = v200;
          if ( p_dest != &dest )
            operator delete(p_dest, dest + 1);
          *(__m128i *)v232 = _mm_load_si128((const __m128i *)v188);
          v241[0] = (char *)&`vtable for'std::ostringstream + 64;
          if ( v238 != v240 )
            operator delete(v238, v240[0] + 1LL);
          *(_QWORD *)&v232[2] = (char *)&`vtable for'std::streambuf + 16;
          std::locale::~locale(v189);
          v109 = v192;
          *(_QWORD *)v232 = v193;
          *(_QWORD *)((char *)v232 + *(_QWORD *)(v193 - 24)) = v102;
          v241[0] = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base(v109);
          goto LABEL_207;
        }
      }
      else if ( !v100 )
      {
        v193 = (unsigned __int64)v212 + v96;
        goto LABEL_248;
      }
      v99 += 16;
    }
    while ( (char *)v212 + v96 != v99 );
    v193 = (unsigned __int64)v212 + v96;
LABEL_240:
    if ( v212 != v98 )
    {
      v110 = (char *)v212;
      while ( 1 )
      {
        v111 = *((_DWORD *)v110 + 1);
        if ( v111 != 2 )
          break;
        if ( (_DWORD)v94 == *(_DWORD *)v110 )
        {
          if ( v199 == *((char **)v110 + 1) )
            goto LABEL_217;
          v110 += 16;
          if ( v98 == v110 )
            goto LABEL_248;
        }
        else
        {
LABEL_243:
          v110 += 16;
          if ( v98 == v110 )
            goto LABEL_248;
        }
      }
      if ( !v111 )
        goto LABEL_248;
      goto LABEL_243;
    }
LABEL_248:
    if ( 3 * (int)v213 < (unsigned int)(4 * (HIDWORD(v213) + v214)) )
    {
      LODWORD(v193) = 2 * v213;
      v96 = 16LL * (unsigned int)(2 * v213);
      v130 = (__m128i *)sub_186B270(v96);
      v131 = v193;
      v93 = v130;
      v132 = &v130[v96 / 0x10];
      if ( (_DWORD)v193 )
      {
        do
        {
          v130->m128i_i64[0] = 0;
          ++v130;
          v130[-1].m128i_i64[1] = 0;
        }
        while ( v132 != v130 );
      }
      v133 = (const __m128i *)v212;
      v95 = v131 - 1;
      v193 = (unsigned __int64)&v93[v96 / 0x10];
      v134 = (std::locale *)((char *)v212 + 16 * (unsigned int)v213);
      if ( v212 != v134 )
      {
        do
        {
          while ( v133->m128i_i32[1] != 2 )
          {
            if ( v134 == (std::locale *)++v133 )
              goto LABEL_316;
          }
          v135 = 16LL * (v133->m128i_i32[0] & (unsigned int)v95);
          v136 = &v93[(unsigned __int64)v135 / 0x10];
          if ( v96 == v135 )
          {
LABEL_321:
            if ( v93 == v136 )
            {
LABEL_328:
              v188[0] = v131;
              v189 = v134;
              LODWORD(v192) = v131 - 1;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v137 = v93;
            while ( v137->m128i_i32[1] )
            {
              if ( v136 == ++v137 )
                goto LABEL_328;
            }
          }
          else
          {
            v137 = &v93[(unsigned __int64)v135 / 0x10];
            while ( v137->m128i_i32[1] )
            {
              if ( (__m128i *)v193 == ++v137 )
                goto LABEL_321;
            }
          }
          *v137 = _mm_loadu_si128(v133++);
        }
        while ( v134 != (std::locale *)v133 );
LABEL_316:
        v134 = (std::locale *)v212;
      }
      if ( v134 )
      {
        LODWORD(v189) = v131;
        LODWORD(v192) = v131 - 1;
        sub_186B220(v134);
        v131 = (int)v189;
        v95 = (int)v192;
      }
      v212 = v93;
      LODWORD(v213) = v131;
      v214 = 0;
    }
    if ( v92 )
    {
      if ( (v92 & 7) == 1 )
        v112 = v92 >> 3;
      else
        LODWORD(v112) = *(_DWORD *)(v92 - 8);
    }
    else
    {
      LODWORD(v112) = -1640531495;
    }
    v113 = 16LL * ((unsigned int)v112 & v95);
    v114 = &v93[(unsigned __int64)v113 / 0x10];
    if ( v96 == v113 )
    {
      v116 = nullptr;
LABEL_281:
      if ( v93 == v114 )
      {
LABEL_304:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v124 = v93->m128i_i32[1];
        if ( v124 == 2 )
        {
          if ( (_DWORD)v112 == v93->m128i_i32[0] && v92 == v93->m128i_i64[1] )
          {
            v93->m128i_i64[1] = v92;
            v93->m128i_i32[1] = 2;
            goto LABEL_301;
          }
        }
        else
        {
          if ( !v124 )
          {
            if ( !v116 )
            {
              v116 = v93;
              goto LABEL_300;
            }
LABEL_299:
            --v214;
            goto LABEL_300;
          }
          v116 = v93;
        }
        if ( v114 == ++v93 )
          goto LABEL_304;
      }
    }
    v115 = &v93[(unsigned __int64)v113 / 0x10];
    v116 = nullptr;
    while ( 1 )
    {
      v117 = v115->m128i_i32[1];
      if ( v117 != 2 )
        break;
      if ( (_DWORD)v112 == v115->m128i_i32[0] && v92 == v115->m128i_i64[1] )
      {
        v115->m128i_i64[1] = v92;
        v115->m128i_i32[1] = 2;
        goto LABEL_301;
      }
LABEL_256:
      if ( (__m128i *)v193 == ++v115 )
        goto LABEL_281;
    }
    if ( v117 )
    {
      v116 = v115;
      goto LABEL_256;
    }
    if ( v116 )
      goto LABEL_299;
    v116 = v115;
LABEL_300:
    v116->m128i_i64[1] = v92;
    v116->m128i_i32[1] = 2;
    v116->m128i_i32[0] = v112;
    ++HIDWORD(v213);
LABEL_301:
    v128 = (std::ostream *)sub_64DB20(*(_QWORD *)v194, &v199);
    v129 = *(_QWORD *)v128;
    v197 = 41;
    if ( *(_QWORD *)((char *)v128 + *(_QWORD *)(v129 - 24) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(v128, 41);
LABEL_164:
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (unsigned int)++v186 < *((_DWORD *)v185 - 1) )
      continue;
    break;
  }
LABEL_76:
  if ( !v181 )
  {
    if ( v17 )
    {
      v143 = *((_DWORD *)v17 - 1);
      if ( v143 )
      {
        v144 = 0;
        if ( v178 )
        {
          do
          {
            if ( v143 != 1 )
              std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v145 = sub_15E1A70(v187[0]);
            v193 = v145;
            if ( v145 )
              ++*(_DWORD *)(v145 + 8);
            sub_1651B90(v232, *(_QWORD *)v187);
            sub_1655780(
              (unsigned int)v232,
              v194[0],
              v193,
              0,
              0,
              0,
              v149,
              (_DWORD)v151,
              (_DWORD)v153,
              (_DWORD)sa,
              na,
              (__int64)v162,
              v166,
              v169,
              (__int64)ptra,
              v174,
              v177,
              (_DWORD)v182,
              v183.m128i_i32[0],
              v183.m128i_i32[2],
              (_DWORD)v184,
              (_DWORD)v185,
              v186,
              v187[0],
              v188[0],
              v188[2],
              (_DWORD)v189,
              v190[0],
              (_DWORD)v191,
              (_DWORD)v192,
              v193,
              v194[0],
              v195,
              v198,
              (_DWORD)v199,
              (_DWORD)v200,
              v201,
              v202,
              v203,
              (_DWORD)v204,
              (_DWORD)v205,
              *(__int64 *)v206,
              v206[8],
              v207,
              (_DWORD)v208,
              v209,
              v210,
              v211,
              (_DWORD)v212,
              v213,
              v214,
              v215,
              (_DWORD)p_dest,
              v218,
              dest,
              v220,
              (_DWORD)v221,
              (_DWORD)v222,
              v223,
              v224,
              (_DWORD)v225,
              v226,
              v227);
            if ( v238 != v240 )
              operator delete(v238, v240[0] + 1LL);
            sub_2334C0((__int64 *)&v233 + 1);
            sub_2334C0((__int64 *)&v232[2]);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *((_DWORD *)v17 - 1) > 1u )
              std::__ostream_insert<char,std::char_traits<char>>();
            ++v144;
            sub_64AD00(v193, *(__int64 *)v187);
            v143 = *((_DWORD *)v17 - 1);
          }
          while ( v144 < v143 );
        }
        else
        {
          do
          {
            if ( v143 != 1 )
              std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v146 = sub_15E1A70(v187[0]);
            v193 = v146;
            if ( v146 )
              ++*(_DWORD *)(v146 + 8);
            *(_QWORD *)v232 = 0;
            sub_160DF70(v194[0], v146, v174, (int)v232, 0, 0, nullptr);
            sub_18572D0(v232);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( *((_DWORD *)v17 - 1) > 1u )
              std::__ostream_insert<char,std::char_traits<char>>();
            ++v144;
            sub_64AD00(v193, *(__int64 *)v187);
            v143 = *((_DWORD *)v17 - 1);
          }
          while ( v144 < v143 );
        }
      }
    }
    goto LABEL_78;
  }
LABEL_171:
  if ( v17 && *((_DWORD *)v17 - 1) )
  {
    v193 = 0;
    v189 = (std::locale *)&v218;
    do
    {
      v68 = v193;
      v69 = v17[v193];
      if ( *(_WORD *)(v69 + 4)
        || (v70 = *(_QWORD *)(v69 + 16), !sub_64AC60((_QWORD *)v191[286], *((_DWORD *)v191 + 574), v70)) )
      {
LABEL_182:
        v74 = v191 + 357;
        sub_157E9E0((_DWORD)v191 + 2856, v69);
        sub_157CA60(v74, *(_QWORD *)(*(_QWORD *)v187 + 840LL));
        v75 = v191[360];
        p_dest = *(void **)v187;
        v192 = *(std::ios_base **)(*(_QWORD *)v187 + 840LL);
        if ( v75 )
          v76 = *(_DWORD *)(v75 - 4);
        else
          v76 = 0;
        sub_180C5A0(v232, "");
        *(_QWORD *)v188 = &v200;
        sub_180C5A0(&v200, "q");
        v77 = sub_15E3D10(
                v187[0],
                v188[0],
                (int)v232,
                v76,
                v75,
                (int)v192,
                1,
                v147,
                v149,
                (int)v151,
                (int)v153,
                (int)sa,
                na,
                (int)v162,
                v166,
                v169,
                (int)ptra,
                v174,
                v177,
                (int)v182,
                v183.m128i_i32[0],
                v183.m128i_i32[2],
                (int)v184,
                (int)v185,
                v186,
                v187[0],
                v188[0],
                v188[2],
                (int)v189,
                *(void **)v190,
                (int)v191,
                (__int64)v192);
        v70 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        sub_64E950(v191, *(__int64 *)v194, v77);
        v80 = 0;
        v81 = v191[360];
        if ( !v81 )
          goto LABEL_378;
        v82 = 0;
        do
        {
          if ( v82 >= *(_DWORD *)(v81 - 4) )
            break;
          LODWORD(v192) = v82;
          v83 = sub_15DB5C0(*(_QWORD *)v187, v82, *(_QWORD *)(v81 + 8LL * v82));
          *(_QWORD *)v232 = v83;
          v84 = (int)v192;
          if ( v83 )
            ++*(_DWORD *)(v83 + 8);
          LODWORD(v192) = v84;
          v218 = v80;
          sub_64DC20(v189, v232);
          v80 = v218;
          v81 = v191[360];
          v82 = (_DWORD)v192 + 1;
        }
        while ( v81 );
        if ( v80 )
          v85 = *(_DWORD *)(v80 - 4);
        else
LABEL_378:
          v85 = 0;
        sub_15DC610(v187[0], v70, v85, v80, v78, v79, v150, v152, v154, sb, nb, v163, v167, v170, ptrb, v175);
        v86 = sub_15E1B70(v187[0]);
        v87 = v86;
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v179 )
        {
          sub_1651B90(v232, *(_QWORD *)v187);
          sub_1655780(
            (unsigned int)v232,
            v194[0],
            v87,
            0,
            0,
            0,
            v149,
            (_DWORD)v151,
            (_DWORD)v153,
            (_DWORD)sa,
            na,
            (__int64)v162,
            v166,
            v169,
            (__int64)ptra,
            v174,
            v177,
            (_DWORD)v182,
            v183.m128i_i32[0],
            v183.m128i_i32[2],
            (_DWORD)v184,
            (_DWORD)v185,
            v186,
            v187[0],
            v188[0],
            v188[2],
            (_DWORD)v189,
            v190[0],
            (_DWORD)v191,
            (_DWORD)v192,
            v193,
            v194[0],
            v195,
            v198,
            (_DWORD)v199,
            (_DWORD)v200,
            v201,
            v202,
            v203,
            (_DWORD)v204,
            (_DWORD)v205,
            *(__int64 *)v206,
            v206[8],
            v207,
            (_DWORD)v208,
            v209,
            v210,
            v211,
            (_DWORD)v212,
            v213,
            v214,
            v215,
            (_DWORD)p_dest,
            v218,
            dest,
            v220,
            (_DWORD)v221,
            (_DWORD)v222,
            v223,
            v224,
            (_DWORD)v225,
            v226,
            v227);
          if ( v238 != v240 )
            operator delete(v238, v240[0] + 1LL);
          v88 = (__int64 *)src[0];
          if ( src[0] )
          {
            if ( src[0] >= (char *)src[0] + 8 * *((unsigned int *)src[0] - 1) )
              goto LABEL_343;
            v89 = (std::ios_base *)v193;
            v193 = (unsigned __int64)src[0] + 8 * *((unsigned int *)src[0] - 1);
            v192 = v89;
            do
            {
              v90 = *v88;
              if ( *v88 )
              {
                v91 = *((_QWORD *)&v233 + 1);
                v63 = (*(_DWORD *)(v90 + 8))-- == 1;
                if ( v63 )
                  sub_15D7BC0(v91, v90);
              }
              ++v88;
            }
            while ( (unsigned __int64)v88 < v193 );
            v88 = (__int64 *)src[0];
            v193 = (unsigned __int64)v192;
            if ( src[0] )
LABEL_343:
              sub_186B220(v88 - 1);
          }
          v139 = (__int64 *)v233;
          if ( (_QWORD)v233 )
          {
            if ( (unsigned __int64)v233 >= (unsigned __int64)v233 + 8LL * *(unsigned int *)(v233 - 4) )
              goto LABEL_376;
            v140 = (std::ios_base *)v193;
            v193 = v233 + 8LL * *(unsigned int *)(v233 - 4);
            v192 = v140;
            do
            {
              v141 = *v139;
              if ( *v139 )
              {
                v142 = *(_QWORD *)&v232[2];
                v63 = (*(_DWORD *)(v141 + 8))-- == 1;
                if ( v63 )
                  sub_15D7BC0(v142, v141);
              }
              ++v139;
            }
            while ( (unsigned __int64)v139 < v193 );
            v139 = (__int64 *)v233;
            v193 = (unsigned __int64)v192;
            if ( (_QWORD)v233 )
LABEL_376:
              sub_186B220(v139 - 1);
          }
        }
        else
        {
          *(_QWORD *)v232 = 0;
          sub_160DF70(v194[0], v87, v174, (int)v232, 0, 0, nullptr);
          sub_18572D0(v232);
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v218 = v80;
        sub_2334C0((__int64 *)&p_dest);
        sub_64AD00(v87, *(__int64 *)v187);
      }
      else
      {
        v71 = *(unsigned int *)(v69 + 24);
        if ( (_DWORD)v71 )
        {
          for ( m = 0; m != v71; ++m )
          {
            v73 = *(_QWORD *)(v69 + 8 * m + 32);
            if ( *(_WORD *)(v73 + 4) != 1 || *(_DWORD *)(v73 + 16) != (_DWORD)m )
            {
              v193 = v68;
              goto LABEL_182;
            }
          }
          v193 = v68;
        }
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
      }
      v138 = *(_QWORD *)v194;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_64DB20(v138, v70 + 16);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v70 )
      {
        v63 = (*(_DWORD *)(v70 + 8))-- == 1;
        if ( v63 )
          sub_15D7BC0(*(_QWORD *)v187, v70);
      }
      ++v193;
    }
    while ( (unsigned int)v193 < *((_DWORD *)v17 - 1) );
  }
LABEL_78:
  if ( ptra )
    sub_186B220(ptra);
  if ( v212 )
    sub_186B220(v212);
  v221 = (__int64 *)&off_1C63D10;
  if ( v231 )
    sub_186B220(v231);
  if ( v230 )
    sub_186B220(v230);
  sub_2334C0(v229);
  if ( v228 )
    sub_186B220((void *)(v228 - 8));
  v221 = qword_1C7A350;
  if ( v225 )
    sub_186B220(v225);
  if ( v222 )
    sub_186B220(v222);
  if ( v169 )
    sub_186B220((void *)(v169 - 8));
  v204 = v17;
  sub_2334C0(v151);
  sub_2334C0(v153);
  if ( v184 )
    sub_186B220(v184);
  if ( v279 )
    sub_186B220((void *)(v279 - 8));
  if ( v278 )
    sub_186B220((void *)(v278 - 8));
  v59 = v277;
  if ( v277 )
  {
    v60 = (unsigned __int64)&v277[*((unsigned int *)v277 - 1)];
    if ( (unsigned __int64)v277 >= v60 )
      goto LABEL_108;
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v62 = v276;
          v63 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v63 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v60 )
          goto LABEL_107;
      }
      sub_15D7BC0(v62, v61);
      ++v59;
    }
    while ( (unsigned __int64)v59 < v60 );
LABEL_107:
    v59 = v277;
    if ( v277 )
LABEL_108:
      sub_186B220(v59 - 1);
  }
  v273 = &off_1C62200;
  if ( v275 )
    sub_186B220(v275);
  if ( v274 )
    sub_186B220(v274);
  if ( v272 )
    sub_186B220((void *)(v272 - 8));
  if ( v271 )
    sub_186B220((void *)(v271 - 8));
  if ( v270 )
    sub_186B220((void *)(v270 - 8));
  if ( v269 )
    sub_186B220((void *)(v269 - 8));
  if ( v268 )
    sub_186B220((void *)(v268 - 8));
  if ( v267 )
    sub_186B220((void *)(v267 - 8));
  if ( v265 )
    sub_186B220((void *)(v265 - 8));
  sub_2334C0(v264);
  if ( v263 )
    sub_186B220(v263);
  if ( v261 )
    sub_186B220((void *)(v261 - 8));
  if ( v259 )
    sub_186B220((void *)(v259 - 8));
  if ( v257 )
    sub_186B220((void *)(v257 - 8));
  v249 = (__int64 *)&off_1C63D10;
  if ( v255 )
    sub_186B220(v255);
  if ( v254 )
    sub_186B220(v254);
  sub_2334C0(v253);
  if ( v252 )
    sub_186B220((void *)(v252 - 8));
  result = qword_1C7A350;
  v249 = qword_1C7A350;
  if ( v251 )
    result = (__int64 *)sub_186B220(v251);
  if ( v250 )
    result = (__int64 *)sub_186B220(v250);
  if ( v246 )
    return (__int64 *)sub_186B220(v246);
  return result;
}

