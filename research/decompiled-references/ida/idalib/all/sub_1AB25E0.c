__m128 *__fastcall sub_1AB25E0(__m128 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rbx
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // bp
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // r8
  __m128i *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r14
  __int64 v22; // rcx
  const __m128i *v23; // r13
  unsigned __int64 v24; // rdx
  const __m128i *v25; // r11
  const __m128i *v26; // r13
  __int64 *v27; // r12
  const __m128i *v28; // rbx
  _BYTE *v29; // rsi
  __int64 *v30; // rax
  size_t v31; // r14
  unsigned __int64 v32; // rbp
  __int64 v33; // rbp
  unsigned __int64 v34; // rdi
  __int64 *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  unsigned __int8 *v38; // rbp
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // edx
  __int64 v44; // r14
  __int64 v45; // rcx
  const __m128i *v46; // r13
  char *v47; // rdx
  const __m128i *v48; // r11
  const __m128i *v49; // r13
  __int64 *v50; // r12
  const __m128i *v51; // rbx
  _BYTE *v52; // rsi
  __int64 *v53; // rax
  size_t v54; // r14
  unsigned __int64 v55; // rbp
  __int64 v56; // rbp
  unsigned __int64 v57; // rdi
  __int64 *v58; // rdi
  _BYTE *v59; // r14
  const __m128i *v60; // r11
  __int64 v61; // r13
  _BYTE *v62; // rdi
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  int v65; // ebp
  _BYTE *v66; // rdi
  char *v67; // rcx
  char *v68; // rsi
  __int64 v69; // r9
  __int64 v70; // rdx
  unsigned int v71; // eax
  void **v72; // rbp
  unsigned __int64 v73; // rax
  void **v74; // r13
  void **v75; // rbx
  void **v76; // rdi
  void **v77; // rdi
  void **v78; // rbx
  void **v79; // r13
  void **v80; // rbp
  unsigned __int64 v81; // rax
  void **v82; // r13
  void **v83; // rbx
  void **v84; // rdi
  void **v85; // rdi
  void **v86; // rbx
  void **v87; // r13
  _BYTE *v89; // r14
  const __m128i *v90; // r11
  __int64 v91; // r13
  _BYTE *v92; // rdi
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rax
  int v95; // ebp
  _BYTE *v96; // rdi
  char *v97; // rcx
  char *v98; // rsi
  __int64 v99; // r9
  __int64 v100; // rdx
  unsigned int v101; // eax
  void **v102; // rbp
  unsigned __int64 v103; // rax
  void **v104; // r13
  void **v105; // rbx
  void **v106; // rdi
  void **v107; // rdi
  void **v108; // rbx
  void **v109; // r13
  void **v110; // r13
  void **v111; // rbx
  void **v112; // rdi
  void **v113; // rdi
  void **v114; // rbx
  void **v115; // r13
  void *v116; // rdi
  __int64 v117; // r8
  __int64 v118; // r9
  unsigned __int8 *v119; // rbp
  _QWORD *v120; // rdx
  __int64 v121; // rax
  unsigned __int8 *v122; // rbp
  _QWORD *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  int v127; // edx
  unsigned __int64 v128; // r13
  __m128i *v129; // rcx
  const __m128i *v130; // r14
  char *v131; // rdx
  const __m128i *v132; // r11
  const __m128i *v133; // r14
  __m128i *v134; // r12
  const __m128i *v135; // rbx
  _BYTE *v136; // rsi
  _BYTE *v137; // rax
  size_t v138; // r13
  unsigned __int64 v139; // rbp
  __int64 v140; // rbp
  unsigned __int64 v141; // rdi
  _BYTE *v142; // rdi
  unsigned __int64 v143; // r13
  const __m128i *v144; // r11
  __m128 *v145; // r14
  unsigned __int64 v146; // rdi
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rax
  __int32 v149; // ebp
  _BYTE *v150; // rdi
  char *v151; // rcx
  __int64 v152; // rsi
  __int64 v153; // rax
  __int64 v154; // rsi
  __int64 v155; // r9
  char *v156; // rsi
  __int64 v157; // rdx
  char v158; // al
  void **v159; // rbp
  char v160; // r13
  unsigned __int64 v161; // rax
  void **v162; // r14
  void **v163; // r15
  void **v164; // rdi
  void **v165; // rdi
  void **v166; // r14
  void **v167; // r15
  void **v168; // rbp
  unsigned __int64 v169; // rax
  void **v170; // r14
  void **v171; // r15
  void **v172; // rdi
  void **v173; // rdi
  void **v174; // r14
  void **v175; // r15
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rbp
  __int64 v179; // r13
  __int64 v180; // rbp
  void *v181; // rdi
  __int64 v182; // rdx
  __int64 v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // rbp
  __int64 v186; // r13
  __int64 v187; // rbp
  void *v188; // rdi
  unsigned __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // r13
  __int64 v193; // r14
  __int64 v194; // r13
  void *v195; // rdi
  __int64 v196; // rsi
  __int64 v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 v202; // rbp
  __int64 v203; // r14
  __int64 v204; // rbp
  void *v205; // rdi
  unsigned __int64 v206; // rdx
  int v207; // eax
  __int64 v208; // rax
  __int64 v209; // r13
  __int64 v210; // r14
  __int64 v211; // r13
  void *v212; // rdi
  __int64 v213; // rsi
  __int64 v214; // rax
  __int64 v215; // rsi
  unsigned __int64 v216; // rdx
  int v217; // eax
  unsigned __int64 v218; // rdx
  int v219; // eax
  __int64 v220; // rsi
  __int64 v221; // rax
  __int64 v222; // rsi
  __int64 v223; // r13
  __int64 v224; // rax
  __int64 v225; // rdi
  __int64 v226; // rsi
  __int64 v227; // rcx
  __int64 v228; // rax
  __int64 v229; // rdx
  __int64 v230; // rsi
  unsigned __int64 v231; // rcx
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // r14
  __int64 v235; // r13
  __int64 v236; // r14
  void *v237; // rdi
  __int64 v238; // rax
  __int64 v239; // r14
  __int64 v240; // r13
  __int64 v241; // r14
  void *v242; // rdi
  __int64 *v243; // [rsp+0h] [rbp-138h] BYREF
  __int64 v244; // [rsp+8h] [rbp-130h]
  _BYTE *v245; // [rsp+10h] [rbp-128h]
  __m128 *v246; // [rsp+18h] [rbp-120h]
  unsigned __int64 v247; // [rsp+20h] [rbp-118h]
  __m128 *v248; // [rsp+28h] [rbp-110h]
  __int64 v249; // [rsp+30h] [rbp-108h]
  unsigned __int64 v250; // [rsp+38h] [rbp-100h]
  __m128i *v251; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v252; // [rsp+48h] [rbp-F0h]
  int v253; // [rsp+50h] [rbp-E8h]
  void *v254; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v255; // [rsp+68h] [rbp-D0h]
  int v256; // [rsp+70h] [rbp-C8h]
  void *v257; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v258; // [rsp+88h] [rbp-B0h]
  int v259; // [rsp+90h] [rbp-A8h]
  void *v260; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v261; // [rsp+A8h] [rbp-90h]
  int v262; // [rsp+B0h] [rbp-88h]
  void *v263; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v264; // [rsp+C8h] [rbp-70h]
  int v265; // [rsp+D0h] [rbp-68h]
  void *v266; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v267; // [rsp+E8h] [rbp-50h]
  int v268; // [rsp+F0h] [rbp-48h]

  v3 = (__int64)a2;
  v5 = a3;
  v6 = *(_WORD *)a3 & 0x1FF;
  if ( v6 > 0x75u )
  {
    if ( v6 <= 0x77u )
    {
      v7 = sub_BFB840(*(_QWORD *)(a3 + 16));
      v8 = *(_QWORD *)(v5 + 24);
      v243 = (__int64 *)v7;
      v9 = sub_BFB840(v8);
      v10 = *(_WORD *)(v5 + 2);
      v244 = v9;
      v11 = (v10 >> 3) & 0x3F;
      goto LABEL_4;
    }
LABEL_31:
    v36 = *a2;
    sub_168B9B0((__int64)&v266, v36, 5736);
    v38 = (unsigned __int8 *)v266;
    if ( !v266 )
    {
      v206 = v267;
      v207 = *(_DWORD *)(v267 + 14976);
      if ( v207 )
      {
        v208 = (unsigned int)(v207 - 1);
        *(_DWORD *)(v267 + 14976) = v208;
        v38 = *(unsigned __int8 **)(v206 + 8 * v208 + 14848);
        v209 = *((unsigned int *)v38 + 134);
        *v38 = 0;
        v210 = *((_QWORD *)v38 + 66);
        *((_DWORD *)v38 + 106) = 0;
        v211 = v210 + (v209 << 6);
        while ( v210 != v211 )
        {
          while ( 1 )
          {
            v211 -= 64;
            v212 = *(void **)(v211 + 24);
            if ( v212 == (void *)(v211 + 40) )
              break;
            operator delete(v212);
            if ( v210 == v211 )
              goto LABEL_279;
          }
        }
LABEL_279:
        *((_DWORD *)v38 + 134) = 0;
      }
      else
      {
        v38 = (unsigned __int8 *)operator new(0x3A0u);
        *v38 = 0;
        *((_QWORD *)v38 + 12) = v38 + 112;
        *((_QWORD *)v38 + 16) = v38 + 144;
        *((_QWORD *)v38 + 20) = v38 + 176;
        *((_QWORD *)v38 + 24) = v38 + 208;
        *((_QWORD *)v38 + 28) = v38 + 240;
        *((_QWORD *)v38 + 32) = v38 + 272;
        *((_QWORD *)v38 + 36) = v38 + 304;
        *((_QWORD *)v38 + 40) = v38 + 336;
        *((_QWORD *)v38 + 44) = v38 + 368;
        *((_QWORD *)v38 + 48) = v38 + 400;
        *((_QWORD *)v38 + 52) = v38 + 432;
        *((_QWORD *)v38 + 13) = 0;
        v38[112] = 0;
        *((_QWORD *)v38 + 17) = 0;
        v38[144] = 0;
        *((_QWORD *)v38 + 21) = 0;
        v38[176] = 0;
        *((_QWORD *)v38 + 25) = 0;
        v38[208] = 0;
        *((_QWORD *)v38 + 29) = 0;
        v38[240] = 0;
        *((_QWORD *)v38 + 33) = 0;
        v38[272] = 0;
        *((_QWORD *)v38 + 37) = 0;
        v38[304] = 0;
        *((_QWORD *)v38 + 41) = 0;
        v38[336] = 0;
        *((_QWORD *)v38 + 45) = 0;
        v38[368] = 0;
        *((_QWORD *)v38 + 49) = 0;
        v38[400] = 0;
        *((_QWORD *)v38 + 53) = 0x800000000LL;
        *((_QWORD *)v38 + 66) = v38 + 544;
        *((_QWORD *)v38 + 67) = 0x600000000LL;
      }
      v266 = v38;
    }
    v38[*v38 + 1] = 2;
    v39 = v266;
    v40 = *(unsigned __int8 *)v266;
    v41 = (unsigned int)(v40 + 1);
    *(_BYTE *)v266 = v40 + 1;
    v18 = v266 == nullptr;
    v39[v40 + 2] = 0;
    v263 = nullptr;
    v265 = v268;
    v42 = v267;
    v264 = v267;
    if ( !v18 )
    {
      v43 = *(_DWORD *)(v267 + 14976);
      if ( v43 )
      {
        v184 = (unsigned int)(v43 - 1);
        *(_DWORD *)(v267 + 14976) = v184;
        v44 = *(_QWORD *)(v42 + 8 * v184 + 14848);
        v185 = *(unsigned int *)(v44 + 536);
        *(_BYTE *)v44 = 0;
        v186 = *(_QWORD *)(v44 + 528);
        *(_DWORD *)(v44 + 424) = 0;
        v187 = v186 + (v185 << 6);
        while ( v186 != v187 )
        {
          while ( 1 )
          {
            v187 -= 64;
            v188 = *(void **)(v187 + 24);
            if ( v188 == (void *)(v187 + 40) )
              break;
            operator delete(v188);
            if ( v186 == v187 )
              goto LABEL_252;
          }
        }
LABEL_252:
        *(_DWORD *)(v44 + 536) = 0;
        v45 = v44 + 96;
      }
      else
      {
        v44 = operator new(0x3A0u);
        *(_BYTE *)v44 = 0;
        v45 = v44 + 96;
        *(_QWORD *)(v44 + 96) = v44 + 112;
        *(_QWORD *)(v44 + 128) = v44 + 144;
        *(_QWORD *)(v44 + 160) = v44 + 176;
        *(_QWORD *)(v44 + 192) = v44 + 208;
        *(_QWORD *)(v44 + 224) = v44 + 240;
        *(_QWORD *)(v44 + 256) = v44 + 272;
        *(_QWORD *)(v44 + 288) = v44 + 304;
        *(_QWORD *)(v44 + 320) = v44 + 336;
        *(_QWORD *)(v44 + 352) = v44 + 368;
        *(_QWORD *)(v44 + 384) = v44 + 400;
        *(_QWORD *)(v44 + 416) = v44 + 432;
        *(_QWORD *)(v44 + 104) = 0;
        *(_BYTE *)(v44 + 112) = 0;
        *(_QWORD *)(v44 + 136) = 0;
        *(_BYTE *)(v44 + 144) = 0;
        *(_QWORD *)(v44 + 168) = 0;
        *(_BYTE *)(v44 + 176) = 0;
        *(_QWORD *)(v44 + 200) = 0;
        *(_BYTE *)(v44 + 208) = 0;
        *(_QWORD *)(v44 + 232) = 0;
        *(_BYTE *)(v44 + 240) = 0;
        *(_QWORD *)(v44 + 264) = 0;
        *(_BYTE *)(v44 + 272) = 0;
        *(_QWORD *)(v44 + 296) = 0;
        *(_BYTE *)(v44 + 304) = 0;
        *(_QWORD *)(v44 + 328) = 0;
        *(_BYTE *)(v44 + 336) = 0;
        *(_QWORD *)(v44 + 360) = 0;
        *(_BYTE *)(v44 + 368) = 0;
        *(_QWORD *)(v44 + 392) = 0;
        *(_BYTE *)(v44 + 400) = 0;
        *(_QWORD *)(v44 + 424) = 0x800000000LL;
        *(_QWORD *)(v44 + 528) = v44 + 544;
        *(_QWORD *)(v44 + 536) = 0x600000000LL;
      }
      v46 = (const __m128i *)v266;
      v263 = (void *)v44;
      v47 = (char *)v266 + 16;
      *(_BYTE *)v44 = *(_BYTE *)v266;
      *(_BYTE *)(v44 + 1) = v46->m128i_i8[1];
      *(_BYTE *)(v44 + 2) = v46->m128i_i8[2];
      *(_BYTE *)(v44 + 3) = v46->m128i_i8[3];
      *(_BYTE *)(v44 + 4) = v46->m128i_i8[4];
      *(_BYTE *)(v44 + 5) = v46->m128i_i8[5];
      *(_BYTE *)(v44 + 6) = v46->m128i_i8[6];
      *(_BYTE *)(v44 + 7) = v46->m128i_i8[7];
      *(_BYTE *)(v44 + 8) = v46->m128i_i8[8];
      *(_BYTE *)(v44 + 9) = v46->m128i_i8[9];
      *(_BYTE *)(v44 + 10) = v46->m128i_i8[10];
      if ( (unsigned __int64)v47 < v44 + 32 && v44 + 16 < (unsigned __int64)&v46[2] )
      {
        *(_QWORD *)(v44 + 16) = v46[1].m128i_i64[0];
        *(_QWORD *)(v44 + 24) = v46[1].m128i_i64[1];
        *(_QWORD *)(v44 + 32) = v46[2].m128i_i64[0];
        *(_QWORD *)(v44 + 40) = v46[2].m128i_i64[1];
        *(_QWORD *)(v44 + 48) = v46[3].m128i_i64[0];
        *(_QWORD *)(v44 + 56) = v46[3].m128i_i64[1];
        *(_QWORD *)(v44 + 64) = v46[4].m128i_i64[0];
        *(_QWORD *)(v44 + 72) = v46[4].m128i_i64[1];
        *(_QWORD *)(v44 + 80) = v46[5].m128i_i64[0];
        *(_QWORD *)(v44 + 88) = v46[5].m128i_i64[1];
      }
      else
      {
        *(__m128i *)(v44 + 16) = _mm_loadu_si128(v46 + 1);
        *(__m128i *)(v44 + 32) = _mm_loadu_si128(v46 + 2);
        *(__m128i *)(v44 + 48) = _mm_loadu_si128(v46 + 3);
        *(__m128i *)(v44 + 64) = _mm_loadu_si128(v46 + 4);
        *(__m128i *)(v44 + 80) = _mm_loadu_si128(v46 + 5);
      }
      v48 = v46 + 6;
      v244 = (__int64)v46;
      v246 = a1;
      v49 = v46 + 26;
      v50 = (__int64 *)(v45 + 16);
      v247 = v5;
      v51 = v48;
      v245 = (_BYTE *)v44;
      do
      {
        if ( v51 != (const __m128i *)(v50 - 2) )
        {
          v53 = (__int64 *)*(v50 - 2);
          v54 = v51->m128i_u64[1];
          if ( v53 == v50 )
            v55 = 15;
          else
            v55 = *v50;
          if ( v54 > v55 )
          {
            if ( (v54 & 0x8000000000000000LL) != 0LL )
LABEL_356:
              std::__throw_length_error("basic_string::_M_create");
            v56 = 2 * v55;
            if ( v54 < v56 )
            {
              v57 = v56 + 1;
              if ( v56 < 0 )
              {
                v57 = 0x8000000000000000LL;
                v56 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v57 = v54 + 1;
              v56 = v51->m128i_i64[1];
            }
            v53 = (__int64 *)operator new(v57);
            v58 = (__int64 *)*(v50 - 2);
            if ( v58 != v50 )
            {
              v243 = v53;
              operator delete(v58);
              v53 = v243;
            }
            *(v50 - 2) = (__int64)v53;
            *v50 = v56;
          }
          if ( v54 )
          {
            v52 = (_BYTE *)v51->m128i_i64[0];
            if ( v54 == 1 )
              *(_BYTE *)v53 = *v52;
            else
              memcpy(v53, v52, v54);
            v53 = (__int64 *)*(v50 - 2);
          }
          *(v50 - 1) = v54;
          *((_BYTE *)v53 + v54) = 0;
        }
        v51 += 2;
        v50 += 4;
      }
      while ( v51 != v49 );
      v59 = v245;
      v60 = v51;
      v61 = v244;
      a1 = v246;
      v5 = v247;
      v62 = v245 + 416;
      if ( v245 + 416 != (_BYTE *)v60 )
      {
        v63 = *(unsigned int *)(v244 + 424);
        v64 = *((unsigned int *)v245 + 106);
        v65 = *(_DWORD *)(v244 + 424);
        if ( v63 <= v64 )
        {
          if ( *(_DWORD *)(v244 + 424) )
          {
            v226 = *((_QWORD *)v245 + 52);
            v227 = *(_QWORD *)(v244 + 416);
            v228 = 0;
            do
            {
              *(_QWORD *)(v226 + v228) = *(_QWORD *)(v227 + v228);
              *(_BYTE *)(v226 + v228 + 8) = *(_BYTE *)(v227 + v228 + 8);
              v228 += 12;
            }
            while ( 12 * v63 != v228 );
          }
        }
        else
        {
          if ( v63 > *((unsigned int *)v245 + 107) )
          {
            *((_DWORD *)v245 + 106) = 0;
            sub_2237220(v62, v59 + 432, v63, 12);
            v67 = *(char **)(v61 + 416);
            v66 = *((_BYTE **)v59 + 52);
            v69 = 0;
            v63 = *(unsigned int *)(v61 + 424);
            v68 = v67;
          }
          else
          {
            v66 = *((_BYTE **)v245 + 52);
            v67 = *(char **)(v244 + 416);
            if ( *((_DWORD *)v245 + 106) )
            {
              v220 = 3 * v64;
              v221 = 0;
              v222 = 4 * v220;
              v69 = v222;
              do
              {
                *(_QWORD *)&v66[v221] = *(_QWORD *)&v67[v221];
                v66[v221 + 8] = v67[v221 + 8];
                v221 += 12;
              }
              while ( v222 != v221 );
              v66 += v222;
              v63 = *(unsigned int *)(v61 + 424);
              v68 = &v67[v222];
            }
            else
            {
              v68 = *(char **)(v244 + 416);
              v69 = 0;
            }
          }
          v70 = 12 * v63;
          if ( v68 != &v67[v70] )
            memcpy(v66, v68, v70 - v69);
        }
        *((_DWORD *)v59 + 106) = v65;
      }
      v36 = v61 + 528;
      sub_9EED30((__int64)(v59 + 528), (__int64 *)(v61 + 528));
    }
    v71 = sub_C00A40(v5, v36, (__int64)v39, v41, v37);
    sub_1AAB2D0(v3, v71, (__int64)&v263);
    v72 = (void **)v263;
    if ( v263 )
    {
      v73 = v264;
      if ( v264 )
      {
        if ( (unsigned __int64)v263 < v264 || (unsigned __int64)v263 > v264 + 14848 )
        {
          v74 = *((void ***)v263 + 66);
          v75 = &v74[8 * (unsigned __int64)*((unsigned int *)v263 + 134)];
          if ( v74 != v75 )
          {
            do
            {
              while ( 1 )
              {
                v75 -= 8;
                v76 = (void **)v75[3];
                if ( v76 == v75 + 5 )
                  break;
                operator delete(v76);
                if ( v74 == v75 )
                  goto LABEL_70;
              }
            }
            while ( v74 != v75 );
LABEL_70:
            v75 = (void **)v72[66];
          }
          if ( v75 != v72 + 68 )
            free(v75);
          v77 = (void **)v72[52];
          if ( v77 != v72 + 54 )
            free(v77);
          v78 = v72 + 48;
          v79 = v72 + 8;
          do
          {
            while ( *v78 != v78 + 2 )
            {
              operator delete(*v78);
              v78 -= 4;
              if ( v78 == v79 )
                goto LABEL_78;
            }
            v78 -= 4;
          }
          while ( v79 != v78 );
LABEL_78:
          operator delete(v72, 0x3A0u);
        }
        else
        {
          v182 = *(unsigned int *)(v264 + 14976);
          *(_DWORD *)(v264 + 14976) = v182 + 1;
          *(_QWORD *)(v73 + 8 * v182 + 14848) = v72;
        }
      }
    }
    v80 = (void **)v266;
    if ( !v266 )
      goto LABEL_94;
    v81 = v267;
    if ( !v267 )
      goto LABEL_94;
    if ( (unsigned __int64)v266 < v267 || (unsigned __int64)v266 > v267 + 14848 )
    {
      v82 = *((void ***)v266 + 66);
      v83 = &v82[8 * (unsigned __int64)*((unsigned int *)v266 + 134)];
      if ( v82 != v83 )
      {
        do
        {
          while ( 1 )
          {
            v83 -= 8;
            v84 = (void **)v83[3];
            if ( v84 == v83 + 5 )
              break;
            operator delete(v84);
            if ( v82 == v83 )
              goto LABEL_85;
          }
        }
        while ( v82 != v83 );
LABEL_85:
        v83 = (void **)v80[66];
      }
      if ( v83 != v80 + 68 )
        free(v83);
      v85 = (void **)v80[52];
      if ( v85 != v80 + 54 )
        free(v85);
      v86 = v80 + 48;
      v87 = v80 + 8;
      do
      {
        while ( *v86 != v86 + 2 )
        {
          operator delete(*v86);
          v86 -= 4;
          if ( v87 == v86 )
            goto LABEL_93;
        }
        v86 -= 4;
      }
      while ( v86 != v87 );
      goto LABEL_93;
    }
LABEL_247:
    v183 = *(unsigned int *)(v81 + 14976);
    *(_DWORD *)(v81 + 14976) = v183 + 1;
    *(_QWORD *)(v81 + 8 * v183 + 14848) = v80;
    goto LABEL_94;
  }
  if ( v6 != 91 )
    goto LABEL_31;
  switch ( ((*(_BYTE *)(a3 + 3) >> 1) + 59) & 0x3F )
  {
    case 0:
      v11 = 5;
      goto LABEL_299;
    case 1:
      v11 = 6;
      goto LABEL_299;
    case 2:
      v11 = 2;
      goto LABEL_299;
    case 3:
      v11 = 3;
      goto LABEL_299;
    case 4:
      v11 = 4;
      goto LABEL_299;
    case 5:
      v11 = 17;
      goto LABEL_299;
    case 6:
      v11 = 16;
      goto LABEL_299;
    case 7:
      v11 = 18;
      goto LABEL_299;
    case 0xA:
      v11 = 21;
      goto LABEL_299;
    case 0xB:
      v11 = 10;
      goto LABEL_299;
    case 0xC:
      v11 = 11;
      goto LABEL_299;
    case 0xD:
      v11 = 25;
      goto LABEL_299;
    case 0xE:
      v11 = 26;
      goto LABEL_299;
    case 0xF:
      v11 = 22;
      goto LABEL_299;
    case 0x10:
      v11 = 23;
      goto LABEL_299;
    case 0x11:
      v11 = 24;
      goto LABEL_299;
    case 0x12:
      v11 = 30;
      goto LABEL_299;
    case 0x13:
      v11 = 29;
      goto LABEL_299;
    case 0x14:
      v11 = 31;
      goto LABEL_299;
    case 0x15:
      v11 = 7;
      goto LABEL_299;
    case 0x16:
      v11 = 8;
      goto LABEL_299;
    case 0x17:
      v11 = 27;
      goto LABEL_299;
    case 0x18:
      v11 = 28;
      goto LABEL_299;
    case 0x19:
      v11 = 14;
      goto LABEL_299;
    case 0x1A:
      v11 = 15;
      goto LABEL_299;
    case 0x1B:
      v11 = 12;
      goto LABEL_299;
    case 0x1C:
      v11 = 13;
      goto LABEL_299;
    case 0x1D:
      v11 = 9;
      goto LABEL_299;
    case 0x1E:
      v11 = 19;
      goto LABEL_299;
    case 0x1F:
      v11 = 20;
      goto LABEL_299;
    case 0x22:
      v11 = 32;
      goto LABEL_299;
    case 0x23:
      v11 = 1;
LABEL_299:
      if ( *(_DWORD *)(a3 + 16) != 2 )
        goto LABEL_31;
      v223 = 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL);
      v224 = sub_BFB840(*(_QWORD *)(a3 + v223 + 32));
      v225 = *(_QWORD *)(v5 + v223 + 40);
      v243 = (__int64 *)v224;
      v244 = sub_BFB840(v225);
      break;
    default:
      goto LABEL_31;
  }
LABEL_4:
  v12 = *a2;
  if ( v11 != 21 )
  {
    sub_168B9B0((__int64)&v251, v12, 5736);
    v14 = v251;
    if ( !v251 )
    {
      v189 = v252;
      v190 = *(_DWORD *)(v252 + 14976);
      if ( v190 )
      {
        v191 = (unsigned int)(v190 - 1);
        *(_DWORD *)(v252 + 14976) = v191;
        v14 = *(__m128i **)(v189 + 8 * v191 + 14848);
        v192 = v14[33].m128i_u32[2];
        v14->m128i_i8[0] = 0;
        v193 = v14[33].m128i_i64[0];
        v14[26].m128i_i32[2] = 0;
        v194 = v193 + (v192 << 6);
        while ( v193 != v194 )
        {
          while ( 1 )
          {
            v194 -= 64;
            v195 = *(void **)(v194 + 24);
            if ( v195 == (void *)(v194 + 40) )
              break;
            operator delete(v195);
            if ( v193 == v194 )
              goto LABEL_258;
          }
        }
LABEL_258:
        v14[33].m128i_i32[2] = 0;
      }
      else
      {
        v14 = (__m128i *)operator new(0x3A0u);
        v14->m128i_i8[0] = 0;
        v14[6].m128i_i64[0] = (__int64)v14[7].m128i_i64;
        v14[8].m128i_i64[0] = (__int64)v14[9].m128i_i64;
        v14[10].m128i_i64[0] = (__int64)v14[11].m128i_i64;
        v14[12].m128i_i64[0] = (__int64)v14[13].m128i_i64;
        v14[14].m128i_i64[0] = (__int64)v14[15].m128i_i64;
        v14[16].m128i_i64[0] = (__int64)v14[17].m128i_i64;
        v14[18].m128i_i64[0] = (__int64)v14[19].m128i_i64;
        v14[20].m128i_i64[0] = (__int64)v14[21].m128i_i64;
        v14[22].m128i_i64[0] = (__int64)v14[23].m128i_i64;
        v14[24].m128i_i64[0] = (__int64)v14[25].m128i_i64;
        v14[26].m128i_i64[0] = (__int64)v14[27].m128i_i64;
        v14[6].m128i_i64[1] = 0;
        v14[7].m128i_i8[0] = 0;
        v14[8].m128i_i64[1] = 0;
        v14[9].m128i_i8[0] = 0;
        v14[10].m128i_i64[1] = 0;
        v14[11].m128i_i8[0] = 0;
        v14[12].m128i_i64[1] = 0;
        v14[13].m128i_i8[0] = 0;
        v14[14].m128i_i64[1] = 0;
        v14[15].m128i_i8[0] = 0;
        v14[16].m128i_i64[1] = 0;
        v14[17].m128i_i8[0] = 0;
        v14[18].m128i_i64[1] = 0;
        v14[19].m128i_i8[0] = 0;
        v14[20].m128i_i64[1] = 0;
        v14[21].m128i_i8[0] = 0;
        v14[22].m128i_i64[1] = 0;
        v14[23].m128i_i8[0] = 0;
        v14[24].m128i_i64[1] = 0;
        v14[25].m128i_i8[0] = 0;
        v14[26].m128i_i64[1] = 0x800000000LL;
        v14[33].m128i_i64[0] = (__int64)v14[34].m128i_i64;
        v14[33].m128i_i64[1] = 0x600000000LL;
      }
      v251 = v14;
    }
    v14->m128i_i8[v14->m128i_u8[0] + 1] = 2;
    v15 = (__int64)v251;
    v16 = v251->m128i_u8[0];
    v17 = (unsigned int)(v16 + 1);
    v251->m128i_i8[0] = v16 + 1;
    v18 = v251 == nullptr;
    *(_QWORD *)(v15 + 8 * v16 + 16) = 0;
    v254 = nullptr;
    v256 = v253;
    v19 = v252;
    v255 = v252;
    if ( !v18 )
    {
      v20 = *(_DWORD *)(v252 + 14976);
      if ( v20 )
      {
        v177 = (unsigned int)(v20 - 1);
        *(_DWORD *)(v252 + 14976) = v177;
        v21 = *(_QWORD *)(v19 + 8 * v177 + 14848);
        v178 = *(unsigned int *)(v21 + 536);
        *(_BYTE *)v21 = 0;
        v179 = *(_QWORD *)(v21 + 528);
        *(_DWORD *)(v21 + 424) = 0;
        v180 = v179 + (v178 << 6);
        while ( v179 != v180 )
        {
          while ( 1 )
          {
            v180 -= 64;
            v181 = *(void **)(v180 + 24);
            if ( v181 == (void *)(v180 + 40) )
              break;
            operator delete(v181);
            if ( v179 == v180 )
              goto LABEL_211;
          }
        }
LABEL_211:
        *(_DWORD *)(v21 + 536) = 0;
        v22 = v21 + 96;
      }
      else
      {
        v21 = operator new(0x3A0u);
        *(_BYTE *)v21 = 0;
        v22 = v21 + 96;
        *(_QWORD *)(v21 + 96) = v21 + 112;
        *(_QWORD *)(v21 + 128) = v21 + 144;
        *(_QWORD *)(v21 + 160) = v21 + 176;
        *(_QWORD *)(v21 + 192) = v21 + 208;
        *(_QWORD *)(v21 + 224) = v21 + 240;
        *(_QWORD *)(v21 + 256) = v21 + 272;
        *(_QWORD *)(v21 + 288) = v21 + 304;
        *(_QWORD *)(v21 + 320) = v21 + 336;
        *(_QWORD *)(v21 + 352) = v21 + 368;
        *(_QWORD *)(v21 + 384) = v21 + 400;
        *(_QWORD *)(v21 + 416) = v21 + 432;
        *(_QWORD *)(v21 + 104) = 0;
        *(_BYTE *)(v21 + 112) = 0;
        *(_QWORD *)(v21 + 136) = 0;
        *(_BYTE *)(v21 + 144) = 0;
        *(_QWORD *)(v21 + 168) = 0;
        *(_BYTE *)(v21 + 176) = 0;
        *(_QWORD *)(v21 + 200) = 0;
        *(_BYTE *)(v21 + 208) = 0;
        *(_QWORD *)(v21 + 232) = 0;
        *(_BYTE *)(v21 + 240) = 0;
        *(_QWORD *)(v21 + 264) = 0;
        *(_BYTE *)(v21 + 272) = 0;
        *(_QWORD *)(v21 + 296) = 0;
        *(_BYTE *)(v21 + 304) = 0;
        *(_QWORD *)(v21 + 328) = 0;
        *(_BYTE *)(v21 + 336) = 0;
        *(_QWORD *)(v21 + 360) = 0;
        *(_BYTE *)(v21 + 368) = 0;
        *(_QWORD *)(v21 + 392) = 0;
        *(_BYTE *)(v21 + 400) = 0;
        *(_QWORD *)(v21 + 424) = 0x800000000LL;
        *(_QWORD *)(v21 + 528) = v21 + 544;
        *(_QWORD *)(v21 + 536) = 0x600000000LL;
      }
      v23 = v251;
      v254 = (void *)v21;
      v24 = (unsigned __int64)&v251[1];
      *(_BYTE *)v21 = v251->m128i_i8[0];
      *(_BYTE *)(v21 + 1) = v23->m128i_i8[1];
      *(_BYTE *)(v21 + 2) = v23->m128i_i8[2];
      *(_BYTE *)(v21 + 3) = v23->m128i_i8[3];
      *(_BYTE *)(v21 + 4) = v23->m128i_i8[4];
      *(_BYTE *)(v21 + 5) = v23->m128i_i8[5];
      *(_BYTE *)(v21 + 6) = v23->m128i_i8[6];
      *(_BYTE *)(v21 + 7) = v23->m128i_i8[7];
      *(_BYTE *)(v21 + 8) = v23->m128i_i8[8];
      *(_BYTE *)(v21 + 9) = v23->m128i_i8[9];
      *(_BYTE *)(v21 + 10) = v23->m128i_i8[10];
      if ( v24 < v21 + 32 && v21 + 16 < (unsigned __int64)&v23[2] )
      {
        *(_QWORD *)(v21 + 16) = v23[1].m128i_i64[0];
        *(_QWORD *)(v21 + 24) = v23[1].m128i_i64[1];
        *(_QWORD *)(v21 + 32) = v23[2].m128i_i64[0];
        *(_QWORD *)(v21 + 40) = v23[2].m128i_i64[1];
        *(_QWORD *)(v21 + 48) = v23[3].m128i_i64[0];
        *(_QWORD *)(v21 + 56) = v23[3].m128i_i64[1];
        *(_QWORD *)(v21 + 64) = v23[4].m128i_i64[0];
        *(_QWORD *)(v21 + 72) = v23[4].m128i_i64[1];
        *(_QWORD *)(v21 + 80) = v23[5].m128i_i64[0];
        *(_QWORD *)(v21 + 88) = v23[5].m128i_i64[1];
      }
      else
      {
        *(__m128i *)(v21 + 16) = _mm_loadu_si128(v23 + 1);
        *(__m128i *)(v21 + 32) = _mm_loadu_si128(v23 + 2);
        *(__m128i *)(v21 + 48) = _mm_loadu_si128(v23 + 3);
        *(__m128i *)(v21 + 64) = _mm_loadu_si128(v23 + 4);
        *(__m128i *)(v21 + 80) = _mm_loadu_si128(v23 + 5);
      }
      v25 = v23 + 6;
      v244 = (__int64)v23;
      v246 = a1;
      v26 = v23 + 26;
      v27 = (__int64 *)(v22 + 16);
      v247 = v5;
      v28 = v25;
      v245 = (_BYTE *)v21;
      do
      {
        if ( v28 != (const __m128i *)(v27 - 2) )
        {
          v30 = (__int64 *)*(v27 - 2);
          v31 = v28->m128i_u64[1];
          if ( v30 == v27 )
            v32 = 15;
          else
            v32 = *v27;
          if ( v31 > v32 )
          {
            if ( (v31 & 0x8000000000000000LL) != 0LL )
              goto LABEL_356;
            v33 = 2 * v32;
            if ( v31 < v33 )
            {
              v34 = v33 + 1;
              if ( v33 < 0 )
              {
                v34 = 0x8000000000000000LL;
                v33 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v34 = v31 + 1;
              v33 = v28->m128i_i64[1];
            }
            v30 = (__int64 *)operator new(v34);
            v35 = (__int64 *)*(v27 - 2);
            if ( v35 != v27 )
            {
              v243 = v30;
              operator delete(v35);
              v30 = v243;
            }
            *(v27 - 2) = (__int64)v30;
            *v27 = v33;
          }
          if ( v31 )
          {
            v29 = (_BYTE *)v28->m128i_i64[0];
            if ( v31 == 1 )
              *(_BYTE *)v30 = *v29;
            else
              memcpy(v30, v29, v31);
            v30 = (__int64 *)*(v27 - 2);
          }
          *(v27 - 1) = v31;
          *((_BYTE *)v30 + v31) = 0;
        }
        v28 += 2;
        v27 += 4;
      }
      while ( v28 != v26 );
      v89 = v245;
      v90 = v28;
      v91 = v244;
      a1 = v246;
      v5 = v247;
      v92 = v245 + 416;
      if ( v245 + 416 != (_BYTE *)v90 )
      {
        v93 = *(unsigned int *)(v244 + 424);
        v94 = *((unsigned int *)v245 + 106);
        v95 = *(_DWORD *)(v244 + 424);
        if ( v93 <= v94 )
        {
          if ( *(_DWORD *)(v244 + 424) )
          {
            v196 = *((_QWORD *)v245 + 52);
            v197 = *(_QWORD *)(v244 + 416);
            v198 = 0;
            do
            {
              *(_QWORD *)(v196 + v198) = *(_QWORD *)(v197 + v198);
              *(_BYTE *)(v196 + v198 + 8) = *(_BYTE *)(v197 + v198 + 8);
              v198 += 12;
            }
            while ( 12 * v93 != v198 );
          }
        }
        else
        {
          if ( v93 > *((unsigned int *)v245 + 107) )
          {
            *((_DWORD *)v245 + 106) = 0;
            sub_2237220(v92, v89 + 432, v93, 12);
            v97 = *(char **)(v91 + 416);
            v96 = *((_BYTE **)v89 + 52);
            v99 = 0;
            v93 = *(unsigned int *)(v91 + 424);
            v98 = v97;
          }
          else
          {
            v96 = *((_BYTE **)v245 + 52);
            v97 = *(char **)(v244 + 416);
            if ( *((_DWORD *)v245 + 106) )
            {
              v213 = 3 * v94;
              v214 = 0;
              v215 = 4 * v213;
              v99 = v215;
              do
              {
                *(_QWORD *)&v96[v214] = *(_QWORD *)&v97[v214];
                v96[v214 + 8] = v97[v214 + 8];
                v214 += 12;
              }
              while ( v215 != v214 );
              v96 += v215;
              v93 = *(unsigned int *)(v91 + 424);
              v98 = &v97[v215];
            }
            else
            {
              v98 = *(char **)(v244 + 416);
              v99 = 0;
            }
          }
          v100 = 12 * v93;
          if ( v98 != &v97[v100] )
            memcpy(v96, v98, v100 - v99);
        }
        *((_DWORD *)v89 + 106) = v95;
      }
      v12 = v91 + 528;
      sub_9EED30((__int64)(v89 + 528), (__int64 *)(v91 + 528));
    }
    v101 = sub_C00A40(v5, v12, v15, v17, v13);
    sub_1AAB2D0(v3, v101, (__int64)&v254);
    v102 = (void **)v254;
    if ( v254 )
    {
      v103 = v255;
      if ( v255 )
      {
        if ( (unsigned __int64)v254 >= v255 && (unsigned __int64)v254 <= v255 + 14848 )
        {
          v229 = *(unsigned int *)(v255 + 14976);
          *(_DWORD *)(v255 + 14976) = v229 + 1;
          *(_QWORD *)(v103 + 8 * v229 + 14848) = v102;
        }
        else
        {
          v104 = *((void ***)v254 + 66);
          v105 = &v104[8 * (unsigned __int64)*((unsigned int *)v254 + 134)];
          if ( v104 != v105 )
          {
            do
            {
              while ( 1 )
              {
                v105 -= 8;
                v106 = (void **)v105[3];
                if ( v106 == v105 + 5 )
                  break;
                operator delete(v106);
                if ( v104 == v105 )
                  goto LABEL_112;
              }
            }
            while ( v104 != v105 );
LABEL_112:
            v105 = (void **)v102[66];
          }
          if ( v105 != v102 + 68 )
            free(v105);
          v107 = (void **)v102[52];
          v108 = v102 + 52;
          if ( v107 != v102 + 54 )
            free(v107);
          v109 = v102 + 12;
          do
          {
            while ( 1 )
            {
              v108 -= 4;
              if ( *v108 == v108 + 2 )
                break;
              operator delete(*v108);
              if ( v108 == v109 )
                goto LABEL_120;
            }
          }
          while ( v108 != v109 );
LABEL_120:
          operator delete(v102, 0x3A0u);
        }
      }
    }
    v80 = (void **)v251;
    if ( !v251 )
      goto LABEL_94;
    v81 = v252;
    if ( !v252 )
      goto LABEL_94;
    if ( (unsigned __int64)v251 < v252 || (unsigned __int64)v251 > v252 + 14848 )
    {
      v110 = (void **)v251[33].m128i_i64[0];
      v111 = &v110[8 * (unsigned __int64)v251[33].m128i_u32[2]];
      if ( v110 != v111 )
      {
        do
        {
          while ( 1 )
          {
            v111 -= 8;
            v112 = (void **)v111[3];
            if ( v112 == v111 + 5 )
              break;
            operator delete(v112);
            if ( v110 == v111 )
              goto LABEL_128;
          }
        }
        while ( v110 != v111 );
LABEL_128:
        v111 = (void **)v80[66];
      }
      if ( v111 != v80 + 68 )
        free(v111);
      v113 = (void **)v80[52];
      if ( v113 != v80 + 54 )
        free(v113);
      v114 = v80 + 48;
      v115 = v80 + 8;
      while ( 1 )
      {
        v116 = *v114;
        if ( *v114 != v114 + 2 )
          break;
LABEL_137:
        v114 -= 4;
        if ( v114 == v115 )
          goto LABEL_93;
      }
      while ( 1 )
      {
        operator delete(v116);
        v114 -= 4;
        if ( v115 == v114 )
          break;
        v116 = *v114;
        if ( *v114 == v114 + 2 )
          goto LABEL_137;
      }
LABEL_93:
      operator delete(v80, 0x3A0u);
      goto LABEL_94;
    }
    goto LABEL_247;
  }
  sub_168B9B0((__int64)&v257, v12, 5739);
  v119 = (unsigned __int8 *)v257;
  if ( !v257 )
  {
    v216 = v258;
    v217 = *(_DWORD *)(v258 + 14976);
    if ( v217 )
    {
      v238 = (unsigned int)(v217 - 1);
      *(_DWORD *)(v258 + 14976) = v238;
      v119 = *(unsigned __int8 **)(v216 + 8 * v238 + 14848);
      v239 = *((unsigned int *)v119 + 134);
      *v119 = 0;
      v240 = *((_QWORD *)v119 + 66);
      *((_DWORD *)v119 + 106) = 0;
      v241 = v240 + (v239 << 6);
      while ( v240 != v241 )
      {
        while ( 1 )
        {
          v241 -= 64;
          v242 = *(void **)(v241 + 24);
          if ( v242 == (void *)(v241 + 40) )
            break;
          operator delete(v242);
          if ( v240 == v241 )
            goto LABEL_355;
        }
      }
LABEL_355:
      *((_DWORD *)v119 + 134) = 0;
    }
    else
    {
      v119 = (unsigned __int8 *)operator new(0x3A0u);
      *v119 = 0;
      *((_QWORD *)v119 + 12) = v119 + 112;
      *((_QWORD *)v119 + 16) = v119 + 144;
      *((_QWORD *)v119 + 20) = v119 + 176;
      *((_QWORD *)v119 + 24) = v119 + 208;
      *((_QWORD *)v119 + 28) = v119 + 240;
      *((_QWORD *)v119 + 32) = v119 + 272;
      *((_QWORD *)v119 + 36) = v119 + 304;
      *((_QWORD *)v119 + 40) = v119 + 336;
      *((_QWORD *)v119 + 44) = v119 + 368;
      *((_QWORD *)v119 + 48) = v119 + 400;
      *((_QWORD *)v119 + 52) = v119 + 432;
      *((_QWORD *)v119 + 13) = 0;
      v119[112] = 0;
      *((_QWORD *)v119 + 17) = 0;
      v119[144] = 0;
      *((_QWORD *)v119 + 21) = 0;
      v119[176] = 0;
      *((_QWORD *)v119 + 25) = 0;
      v119[208] = 0;
      *((_QWORD *)v119 + 29) = 0;
      v119[240] = 0;
      *((_QWORD *)v119 + 33) = 0;
      v119[272] = 0;
      *((_QWORD *)v119 + 37) = 0;
      v119[304] = 0;
      *((_QWORD *)v119 + 41) = 0;
      v119[336] = 0;
      *((_QWORD *)v119 + 45) = 0;
      v119[368] = 0;
      *((_QWORD *)v119 + 49) = 0;
      v119[400] = 0;
      *((_QWORD *)v119 + 53) = 0x800000000LL;
      *((_QWORD *)v119 + 66) = v119 + 544;
      *((_QWORD *)v119 + 67) = 0x600000000LL;
    }
    v257 = v119;
  }
  v119[*v119 + 1] = 2;
  v120 = v257;
  v121 = *(unsigned __int8 *)v257;
  *(_BYTE *)v257 = v121 + 1;
  v122 = (unsigned __int8 *)v257;
  v120[v121 + 2] = 0;
  if ( !v122 )
  {
    v218 = v258;
    v219 = *(_DWORD *)(v258 + 14976);
    if ( v219 )
    {
      v233 = (unsigned int)(v219 - 1);
      *(_DWORD *)(v258 + 14976) = v233;
      v122 = *(unsigned __int8 **)(v218 + 8 * v233 + 14848);
      v234 = *((unsigned int *)v122 + 134);
      *v122 = 0;
      v235 = *((_QWORD *)v122 + 66);
      *((_DWORD *)v122 + 106) = 0;
      v236 = v235 + (v234 << 6);
      while ( v235 != v236 )
      {
        while ( 1 )
        {
          v236 -= 64;
          v237 = *(void **)(v236 + 24);
          if ( v237 == (void *)(v236 + 40) )
            break;
          operator delete(v237);
          if ( v235 == v236 )
            goto LABEL_350;
        }
      }
LABEL_350:
      *((_DWORD *)v122 + 134) = 0;
    }
    else
    {
      v122 = (unsigned __int8 *)operator new(0x3A0u);
      *v122 = 0;
      *((_QWORD *)v122 + 12) = v122 + 112;
      *((_QWORD *)v122 + 16) = v122 + 144;
      *((_QWORD *)v122 + 20) = v122 + 176;
      *((_QWORD *)v122 + 24) = v122 + 208;
      *((_QWORD *)v122 + 28) = v122 + 240;
      *((_QWORD *)v122 + 32) = v122 + 272;
      *((_QWORD *)v122 + 36) = v122 + 304;
      *((_QWORD *)v122 + 40) = v122 + 336;
      *((_QWORD *)v122 + 44) = v122 + 368;
      *((_QWORD *)v122 + 48) = v122 + 400;
      *((_QWORD *)v122 + 52) = v122 + 432;
      *((_QWORD *)v122 + 13) = 0;
      v122[112] = 0;
      *((_QWORD *)v122 + 17) = 0;
      v122[144] = 0;
      *((_QWORD *)v122 + 21) = 0;
      v122[176] = 0;
      *((_QWORD *)v122 + 25) = 0;
      v122[208] = 0;
      *((_QWORD *)v122 + 29) = 0;
      v122[240] = 0;
      *((_QWORD *)v122 + 33) = 0;
      v122[272] = 0;
      *((_QWORD *)v122 + 37) = 0;
      v122[304] = 0;
      *((_QWORD *)v122 + 41) = 0;
      v122[336] = 0;
      *((_QWORD *)v122 + 45) = 0;
      v122[368] = 0;
      *((_QWORD *)v122 + 49) = 0;
      v122[400] = 0;
      *((_QWORD *)v122 + 53) = 0x800000000LL;
      *((_QWORD *)v122 + 66) = v122 + 544;
      *((_QWORD *)v122 + 67) = 0x600000000LL;
    }
    v257 = v122;
  }
  v122[*v122 + 1] = 2;
  v123 = v257;
  v124 = *(unsigned __int8 *)v257;
  v125 = (unsigned int)(v124 + 1);
  *(_BYTE *)v257 = v124 + 1;
  v18 = v257 == nullptr;
  v123[v124 + 2] = 0;
  v260 = nullptr;
  v262 = v259;
  v126 = v258;
  v261 = v258;
  if ( !v18 )
  {
    v127 = *(_DWORD *)(v258 + 14976);
    if ( v127 )
    {
      v201 = (unsigned int)(v127 - 1);
      *(_DWORD *)(v258 + 14976) = v201;
      v128 = *(_QWORD *)(v126 + 8 * v201 + 14848);
      v202 = *(unsigned int *)(v128 + 536);
      *(_BYTE *)v128 = 0;
      v203 = *(_QWORD *)(v128 + 528);
      *(_DWORD *)(v128 + 424) = 0;
      v204 = v203 + (v202 << 6);
      while ( v203 != v204 )
      {
        while ( 1 )
        {
          v204 -= 64;
          v205 = *(void **)(v204 + 24);
          if ( v205 == (void *)(v204 + 40) )
            break;
          operator delete(v205);
          if ( v203 == v204 )
            goto LABEL_273;
        }
      }
LABEL_273:
      *(_DWORD *)(v128 + 536) = 0;
      v129 = (__m128i *)(v128 + 96);
    }
    else
    {
      v128 = operator new(0x3A0u);
      *(_BYTE *)v128 = 0;
      v129 = (__m128i *)(v128 + 96);
      *(_QWORD *)(v128 + 96) = v128 + 112;
      *(_QWORD *)(v128 + 128) = v128 + 144;
      *(_QWORD *)(v128 + 160) = v128 + 176;
      *(_QWORD *)(v128 + 192) = v128 + 208;
      *(_QWORD *)(v128 + 224) = v128 + 240;
      *(_QWORD *)(v128 + 256) = v128 + 272;
      *(_QWORD *)(v128 + 288) = v128 + 304;
      *(_QWORD *)(v128 + 320) = v128 + 336;
      *(_QWORD *)(v128 + 352) = v128 + 368;
      *(_QWORD *)(v128 + 384) = v128 + 400;
      *(_QWORD *)(v128 + 416) = v128 + 432;
      *(_QWORD *)(v128 + 104) = 0;
      *(_BYTE *)(v128 + 112) = 0;
      *(_QWORD *)(v128 + 136) = 0;
      *(_BYTE *)(v128 + 144) = 0;
      *(_QWORD *)(v128 + 168) = 0;
      *(_BYTE *)(v128 + 176) = 0;
      *(_QWORD *)(v128 + 200) = 0;
      *(_BYTE *)(v128 + 208) = 0;
      *(_QWORD *)(v128 + 232) = 0;
      *(_BYTE *)(v128 + 240) = 0;
      *(_QWORD *)(v128 + 264) = 0;
      *(_BYTE *)(v128 + 272) = 0;
      *(_QWORD *)(v128 + 296) = 0;
      *(_BYTE *)(v128 + 304) = 0;
      *(_QWORD *)(v128 + 328) = 0;
      *(_BYTE *)(v128 + 336) = 0;
      *(_QWORD *)(v128 + 360) = 0;
      *(_BYTE *)(v128 + 368) = 0;
      *(_QWORD *)(v128 + 392) = 0;
      *(_BYTE *)(v128 + 400) = 0;
      *(_QWORD *)(v128 + 424) = 0x800000000LL;
      *(_QWORD *)(v128 + 528) = v128 + 544;
      *(_QWORD *)(v128 + 536) = 0x600000000LL;
    }
    v130 = (const __m128i *)v257;
    v260 = (void *)v128;
    v131 = (char *)v257 + 16;
    *(_BYTE *)v128 = *(_BYTE *)v257;
    *(_BYTE *)(v128 + 1) = v130->m128i_i8[1];
    *(_BYTE *)(v128 + 2) = v130->m128i_i8[2];
    *(_BYTE *)(v128 + 3) = v130->m128i_i8[3];
    *(_BYTE *)(v128 + 4) = v130->m128i_i8[4];
    *(_BYTE *)(v128 + 5) = v130->m128i_i8[5];
    *(_BYTE *)(v128 + 6) = v130->m128i_i8[6];
    *(_BYTE *)(v128 + 7) = v130->m128i_i8[7];
    *(_BYTE *)(v128 + 8) = v130->m128i_i8[8];
    *(_BYTE *)(v128 + 9) = v130->m128i_i8[9];
    *(_BYTE *)(v128 + 10) = v130->m128i_i8[10];
    if ( (unsigned __int64)v131 < v128 + 32 && v128 + 16 < (unsigned __int64)&v130[2] )
    {
      *(_QWORD *)(v128 + 16) = v130[1].m128i_i64[0];
      *(_QWORD *)(v128 + 24) = v130[1].m128i_i64[1];
      *(_QWORD *)(v128 + 32) = v130[2].m128i_i64[0];
      *(_QWORD *)(v128 + 40) = v130[2].m128i_i64[1];
      *(_QWORD *)(v128 + 48) = v130[3].m128i_i64[0];
      *(_QWORD *)(v128 + 56) = v130[3].m128i_i64[1];
      *(_QWORD *)(v128 + 64) = v130[4].m128i_i64[0];
      *(_QWORD *)(v128 + 72) = v130[4].m128i_i64[1];
      *(_QWORD *)(v128 + 80) = v130[5].m128i_i64[0];
      *(_QWORD *)(v128 + 88) = v130[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v128 + 16) = _mm_loadu_si128(v130 + 1);
      *(__m128i *)(v128 + 32) = _mm_loadu_si128(v130 + 2);
      *(__m128i *)(v128 + 48) = _mm_loadu_si128(v130 + 3);
      *(__m128i *)(v128 + 64) = _mm_loadu_si128(v130 + 4);
      *(__m128i *)(v128 + 80) = _mm_loadu_si128(v130 + 5);
    }
    v132 = v130 + 6;
    v246 = (__m128 *)v130;
    v248 = a1;
    v133 = v130 + 26;
    v134 = v129;
    v250 = v5;
    v135 = v132;
    v247 = v128;
    v249 = v3;
    do
    {
      if ( v134 != v135 )
      {
        v137 = (_BYTE *)v134->m128i_i64[0];
        v138 = v135->m128i_u64[1];
        if ( &v134[1] == (__m128i *)v134->m128i_i64[0] )
          v139 = 15;
        else
          v139 = v134[1].m128i_u64[0];
        if ( v138 > v139 )
        {
          if ( (v138 & 0x8000000000000000LL) != 0LL )
            goto LABEL_356;
          v140 = 2 * v139;
          if ( v138 < v140 )
          {
            v141 = v140 + 1;
            if ( v140 < 0 )
            {
              v141 = 0x8000000000000000LL;
              v140 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v141 = v138 + 1;
            v140 = v135->m128i_i64[1];
          }
          v137 = (_BYTE *)operator new(v141);
          v142 = (_BYTE *)v134->m128i_i64[0];
          if ( &v134[1] != (__m128i *)v134->m128i_i64[0] )
          {
            v245 = v137;
            operator delete(v142);
            v137 = v245;
          }
          v134->m128i_i64[0] = (__int64)v137;
          v134[1].m128i_i64[0] = v140;
        }
        if ( v138 )
        {
          v136 = (_BYTE *)v135->m128i_i64[0];
          if ( v138 == 1 )
            *v137 = *v136;
          else
            memcpy(v137, v136, v138);
          v137 = (_BYTE *)v134->m128i_i64[0];
        }
        v134->m128i_i64[1] = v138;
        v137[v138] = 0;
      }
      v135 += 2;
      v134 += 2;
    }
    while ( v135 != v133 );
    v143 = v247;
    v144 = v135;
    v145 = v246;
    a1 = v248;
    v3 = v249;
    v146 = v247 + 416;
    v5 = v250;
    if ( (const __m128i *)(v247 + 416) != v144 )
    {
      v147 = v246[26].m128_u32[2];
      v148 = *(unsigned int *)(v247 + 424);
      v149 = v246[26].m128_i32[2];
      if ( v147 <= v148 )
      {
        if ( v246[26].m128_i32[2] )
        {
          v230 = *(_QWORD *)(v247 + 416);
          v231 = v246[26].m128_u64[0];
          v232 = 0;
          do
          {
            *(_QWORD *)(v230 + v232) = *(_QWORD *)(v231 + v232);
            *(_BYTE *)(v230 + v232 + 8) = *(_BYTE *)(v231 + v232 + 8);
            v232 += 12;
          }
          while ( 12 * v147 != v232 );
        }
      }
      else
      {
        if ( v147 > *(unsigned int *)(v247 + 428) )
        {
          *(_DWORD *)(v247 + 424) = 0;
          sub_2237220(v146, v143 + 432, v147, 12);
          v151 = (char *)v145[26].m128_u64[0];
          v150 = *(_BYTE **)(v143 + 416);
          v155 = 0;
          v147 = v145[26].m128_u32[2];
          v156 = v151;
        }
        else
        {
          v150 = *(_BYTE **)(v247 + 416);
          v151 = (char *)v246[26].m128_u64[0];
          if ( *(_DWORD *)(v247 + 424) )
          {
            v152 = 3 * v148;
            v153 = 0;
            v154 = 4 * v152;
            v155 = v154;
            do
            {
              *(_QWORD *)&v150[v153] = *(_QWORD *)&v151[v153];
              v150[v153 + 8] = v151[v153 + 8];
              v153 += 12;
            }
            while ( v154 != v153 );
            v147 = v145[26].m128_u32[2];
            v150 += v154;
            v156 = &v151[v154];
          }
          else
          {
            v156 = (char *)v246[26].m128_u64[0];
            v155 = 0;
          }
        }
        v157 = 12 * v147;
        if ( v156 != &v151[v157] )
          memcpy(v150, v156, v157 - v155);
      }
      *(_DWORD *)(v143 + 424) = v149;
    }
    sub_9EED30(v143 + 528, (__int64 *)&v145[33]);
  }
  v158 = sub_1AAFF40(v3, (__int64)v243, (__int64)&v260, v125, v117, v118);
  v159 = (void **)v260;
  v160 = v158;
  if ( v260 )
  {
    v161 = v261;
    if ( v261 )
    {
      if ( (unsigned __int64)v260 < v261 || (unsigned __int64)v260 > v261 + 14848 )
      {
        v162 = *((void ***)v260 + 66);
        v163 = &v162[8 * (unsigned __int64)*((unsigned int *)v260 + 134)];
        if ( v162 != v163 )
        {
          do
          {
            while ( 1 )
            {
              v163 -= 8;
              v164 = (void **)v163[3];
              if ( v164 == v163 + 5 )
                break;
              operator delete(v164);
              if ( v162 == v163 )
                goto LABEL_181;
            }
          }
          while ( v162 != v163 );
LABEL_181:
          v163 = (void **)v159[66];
        }
        if ( v163 != v159 + 68 )
          free(v163);
        v165 = (void **)v159[52];
        v166 = v159 + 52;
        if ( v165 != v159 + 54 )
          free(v165);
        v167 = v159 + 12;
        do
        {
          while ( 1 )
          {
            v166 -= 4;
            if ( *v166 == v166 + 2 )
              break;
            operator delete(*v166);
            if ( v166 == v167 )
              goto LABEL_189;
          }
        }
        while ( v166 != v167 );
LABEL_189:
        operator delete(v159, 0x3A0u);
      }
      else
      {
        v200 = *(unsigned int *)(v261 + 14976);
        *(_DWORD *)(v261 + 14976) = v200 + 1;
        *(_QWORD *)(v161 + 8 * v200 + 14848) = v159;
      }
    }
  }
  v168 = (void **)v257;
  if ( v257 )
  {
    v169 = v258;
    if ( v258 )
    {
      if ( (unsigned __int64)v257 < v258 || (unsigned __int64)v257 > v258 + 14848 )
      {
        v170 = *((void ***)v257 + 66);
        v171 = &v170[8 * (unsigned __int64)*((unsigned int *)v257 + 134)];
        if ( v170 != v171 )
        {
          do
          {
            while ( 1 )
            {
              v171 -= 8;
              v172 = (void **)v171[3];
              if ( v172 == v171 + 5 )
                break;
              operator delete(v172);
              if ( v170 == v171 )
                goto LABEL_196;
            }
          }
          while ( v170 != v171 );
LABEL_196:
          v171 = (void **)v168[66];
        }
        if ( v171 != v168 + 68 )
          free(v171);
        v173 = (void **)v168[52];
        v174 = v168 + 52;
        if ( v173 != v168 + 54 )
          free(v173);
        v175 = v168 + 12;
        do
        {
          while ( 1 )
          {
            v174 -= 4;
            if ( *v174 == v174 + 2 )
              break;
            operator delete(*v174);
            if ( v174 == v175 )
              goto LABEL_204;
          }
        }
        while ( v174 != v175 );
LABEL_204:
        operator delete(v168, 0x3A0u);
      }
      else
      {
        v199 = *(unsigned int *)(v258 + 14976);
        *(_DWORD *)(v258 + 14976) = v199 + 1;
        *(_QWORD *)(v169 + 8 * v199 + 14848) = v168;
      }
    }
  }
  if ( !v160 )
  {
    v245 = (_BYTE *)v5;
    v176 = v244;
    a1[2].m128_i8[0] = 1;
    a1[1].m128_i32[2] = 21;
    *a1 = _mm_loadh_ps((const double *)&v243);
    a1[1].m128_u64[0] = v176;
    return a1;
  }
LABEL_94:
  a1[2].m128_i8[0] = 0;
  return a1;
}
