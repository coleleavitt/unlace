__int64 __fastcall sub_473070(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rax
  char **v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  char **exception; // rbp
  char **v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // r15
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // r13
  __int64 *v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r14
  void *v28; // rbp
  __int64 v29; // rsi
  unsigned int v30; // edx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _Unwind_Exception *v35; // r15
  __int64 v36; // r14
  _DWORD *v37; // rdx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  _Unwind_Exception_Class *v42; // rax
  int v43; // eax
  void *v44; // r15
  __int64 v45; // xmm2_8
  __m128i v46; // xmm2
  __int64 v47; // r9
  __m128i v48; // xmm0
  char v49; // r10
  char v50; // dl
  __int32 v51; // r11d
  int v52; // r8d
  char v53; // di
  bool v54; // al
  __int64 v55; // rcx
  _QWORD *v56; // rcx
  char v57; // si
  void *v58; // r15
  char v59; // dl
  void *v60; // r15
  void *v61; // r13
  _DWORD *v62; // rsi
  __int64 v63; // rdi
  _Unwind_Exception_Class exception_class; // r13
  __int64 v65; // rax
  __int64 v66; // r13
  unsigned int v67; // eax
  __int64 v68; // rdx
  int v69; // eax
  _QWORD *v70; // rdx
  __int64 v71; // r15
  void *v72; // rdi
  __int64 v73; // rdx
  unsigned int v74; // r14d
  __int64 v75; // r14
  __int64 v76; // r13
  _DWORD *v77; // rdx
  void *v78; // rdi
  int v79; // eax
  void *v80; // rdi
  __int64 v81; // r14
  __int64 v82; // r8
  __int32 v83; // r11d
  __m128i v84; // xmm0
  char v85; // r10
  bool v86; // dl
  int v87; // edi
  char v88; // si
  bool v89; // al
  __int64 v90; // rcx
  _QWORD *v91; // rcx
  char v92; // r9
  void *v93; // r14
  char v94; // dl
  void *v95; // r14
  void *v96; // r13
  unsigned int v97; // r8d
  size_t v98; // rdi
  __int64 v99; // r9
  __int64 v100; // rax
  __int32 v101; // r8d
  __int64 v102; // rsi
  __int64 v103; // rdx
  const __m128i *v104; // rdi
  const __m128i *m; // rax
  __int32 v106; // ecx
  char v107; // r10
  __int64 v108; // rcx
  char v109; // r10
  __m128i v110; // xmm0
  __int64 v111; // rax
  __int64 v112; // r15
  __int64 v113; // r14
  __int64 v114; // rbx
  void *v115; // rbp
  __int64 v116; // rsi
  __int64 v117; // rax
  __int8 v118; // r10
  char v119; // dl
  unsigned int v120; // r15d
  size_t v121; // rsi
  unsigned int *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  _DWORD *v125; // rsi
  __int64 v126; // rdi
  _BYTE *v127; // rdi
  char *v128; // rcx
  char *v129; // rax
  __int64 v130; // rdx
  unsigned __int8 v131; // al
  __int64 v132; // rax
  _DWORD *v133; // rdx
  void *v134; // rdi
  int v135; // eax
  void *v136; // rdi
  __int64 v137; // r14
  __int64 v138; // r8
  __int32 v139; // r10d
  __m128i v140; // xmm0
  char v141; // r9
  bool v142; // al
  int v143; // edi
  char v144; // si
  bool v145; // dl
  __int64 v146; // rcx
  __int64 v147; // rcx
  char v148; // al
  char v149; // r9
  void *v150; // r14
  char v151; // al
  char v152; // dl
  void *v153; // r14
  void *v154; // r13
  _QWORD *v155; // rax
  __int8 v156; // dl
  _QWORD *v157; // rax
  unsigned int v158; // r8d
  unsigned int v159; // eax
  __m128i *v160; // rsi
  __int64 v161; // rax
  __int32 v162; // r8d
  __int64 v163; // r9
  __m128i *v164; // rdx
  const __m128i *v165; // rdi
  const __m128i *i; // rax
  __int32 v167; // ecx
  __int8 v168; // r10
  __int64 v169; // rcx
  __int8 v170; // r10
  __m128i v171; // xmm0
  __int64 v172; // rax
  __m128i *v173; // r14
  __int64 v174; // rbp
  __int64 v175; // rbx
  void *v176; // r12
  __int64 v177; // rsi
  __int8 v178; // dl
  __int64 v179; // rax
  char v180; // dl
  __int64 v181; // rax
  _DWORD *v182; // rdx
  void *v183; // rdi
  int v184; // eax
  void *v185; // rdi
  __int64 v186; // r14
  __int64 v187; // r8
  __int32 v188; // r10d
  __m128i v189; // xmm0
  char v190; // r9
  bool v191; // al
  int v192; // edi
  char v193; // si
  bool v194; // dl
  __int64 exception_class_high; // rcx
  __int64 v196; // rcx
  char v197; // al
  char v198; // r9
  void *v199; // r14
  char v200; // al
  char v201; // dl
  void *v202; // r14
  void *v203; // r13
  unsigned int v204; // r14d
  int v205; // r14d
  __int64 v206; // rax
  unsigned int v207; // eax
  __m128i *v208; // rsi
  __int64 v209; // rax
  __m128i *v210; // rdx
  const __m128i *v211; // rdi
  const __m128i *k; // rax
  __int32 v213; // ecx
  __int8 v214; // r8
  __int64 v215; // rcx
  __int8 v216; // r8
  __m128i v217; // xmm0
  __int64 v218; // rax
  __int64 v219; // r14
  __int64 v220; // rbx
  __int64 v221; // rbp
  void *v222; // r12
  __int64 v223; // rsi
  char v224; // dl
  unsigned __int32 v225; // eax
  struct _Unwind_Exception *v226; // rsi
  __int64 v227; // rax
  __m128i *p_exception_cleanup; // rdx
  const __m128i *v229; // rdi
  const __m128i *j; // rax
  __int32 v231; // ecx
  __int8 v232; // r8
  __int64 v233; // rcx
  __int8 v234; // r8
  __m128i v235; // xmm0
  __int64 v236; // rax
  __int64 v237; // r15
  __int64 v238; // rax
  __int64 v239; // rbx
  __int64 v240; // r14
  void *v241; // rbp
  __int64 v242; // rsi
  char v243; // dl
  _QWORD *v244; // rax
  __int8 v245; // dl
  _QWORD *v246; // rax
  char v247; // dl
  _QWORD *v248; // rax
  char v249; // dl
  struct _Unwind_Exception *v250; // [rsp+0h] [rbp-258h]
  struct _Unwind_Exception *v251; // [rsp+0h] [rbp-258h]
  unsigned int v252; // [rsp+0h] [rbp-258h]
  struct _Unwind_Exception *v253; // [rsp+0h] [rbp-258h]
  struct _Unwind_Exception *v254; // [rsp+0h] [rbp-258h]
  __int64 v255; // [rsp+8h] [rbp-250h]
  __int64 v256; // [rsp+8h] [rbp-250h]
  _QWORD *v257; // [rsp+10h] [rbp-248h]
  char *v258; // [rsp+10h] [rbp-248h]
  __int32 v259; // [rsp+10h] [rbp-248h]
  void *v260; // [rsp+10h] [rbp-248h]
  __m128i *v261; // [rsp+10h] [rbp-248h]
  _QWORD *v262; // [rsp+10h] [rbp-248h]
  void *v263; // [rsp+10h] [rbp-248h]
  void *v264; // [rsp+10h] [rbp-248h]
  void *v265; // [rsp+18h] [rbp-240h]
  void *v266; // [rsp+18h] [rbp-240h]
  _DWORD *v267; // [rsp+18h] [rbp-240h]
  _DWORD *v268; // [rsp+18h] [rbp-240h]
  _DWORD *v269; // [rsp+18h] [rbp-240h]
  unsigned __int8 v270; // [rsp+24h] [rbp-234h]
  unsigned int v271; // [rsp+24h] [rbp-234h]
  __m128i v272; // [rsp+28h] [rbp-230h] BYREF
  __int64 v273; // [rsp+38h] [rbp-220h]
  __m128i *v274; // [rsp+40h] [rbp-218h]
  struct _Unwind_Exception *v275; // [rsp+48h] [rbp-210h]
  _QWORD *v276; // [rsp+50h] [rbp-208h]
  _DWORD *v277; // [rsp+58h] [rbp-200h]
  __int64 v278; // [rsp+60h] [rbp-1F8h]
  __int64 v279; // [rsp+68h] [rbp-1F0h]
  __int64 v280; // [rsp+70h] [rbp-1E8h]
  _BYTE *v281; // [rsp+78h] [rbp-1E0h]
  _QWORD v282[2]; // [rsp+88h] [rbp-1D0h] BYREF
  _DWORD *v283; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v284; // [rsp+A8h] [rbp-1B0h]
  _QWORD v285[2]; // [rsp+B0h] [rbp-1A8h] BYREF
  _QWORD v286[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v287; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v288; // [rsp+D8h] [rbp-180h]
  __int64 v289; // [rsp+E0h] [rbp-178h] BYREF
  __m128i v290; // [rsp+E8h] [rbp-170h] BYREF
  __int64 v291; // [rsp+F8h] [rbp-160h]
  int v292; // [rsp+100h] [rbp-158h] BYREF
  char v293; // [rsp+104h] [rbp-154h]
  __m128i v294; // [rsp+108h] [rbp-150h] BYREF
  __int64 v295; // [rsp+118h] [rbp-140h]
  int v296; // [rsp+120h] [rbp-138h] BYREF
  char v297; // [rsp+124h] [rbp-134h]
  __m128i v298; // [rsp+128h] [rbp-130h]
  __m128i v299; // [rsp+140h] [rbp-118h] BYREF
  int v300; // [rsp+150h] [rbp-108h] BYREF
  char v301; // [rsp+154h] [rbp-104h]
  __m128i v302; // [rsp+158h] [rbp-100h]
  __int128 v303; // [rsp+168h] [rbp-F0h]
  __int128 v304; // [rsp+178h] [rbp-E0h]
  void *ptr; // [rsp+188h] [rbp-D0h]
  __int64 v306; // [rsp+190h] [rbp-C8h]
  _BYTE v307[192]; // [rsp+198h] [rbp-C0h] BYREF

  v10 = a1;
  v11 = a2;
  v12 = *(_QWORD **)(a2 + 16);
  result = sub_4478E0(*(_QWORD *)(a1 + 16), a2);
  if ( (_BYTE)result )
    return result;
  result = sub_45AE60(*(_QWORD *)(a1 + 8), a2);
  v270 = result;
  if ( !(_BYTE)result )
    return result;
  v273 = *(_QWORD *)(a1 + 8);
  v282[1] = v273;
  v14 = v12[3];
  if ( v14 )
    v255 = *(_QWORD *)(v14 + 8) + 32LL;
  else
    v255 = 32;
  v15 = *(_DWORD *)(a2 + 24);
  v16 = 0;
  if ( !v15 )
  {
LABEL_7:
    if ( !*(_BYTE *)(v10 + 25) )
      goto LABEL_8;
LABEL_25:
    v30 = 2;
    v31 = 0;
    goto LABEL_26;
  }
  v252 = 0;
  v73 = v273;
  v16 = 0;
  while ( 1 )
  {
    v74 = v15 - 1;
    if ( *(_QWORD *)(v73 + 848) == sub_15D1F10(*(_QWORD *)(v11 + 8LL * (v15 - 1) + 32)) )
      v74 = v15;
    if ( v252 >= v74 )
      break;
    v75 = *(_QWORD *)(v11 + 8LL * v252 + 32);
    v257 = *(_QWORD **)(v10 + 16);
    if ( !(unsigned __int8)sub_15D37A0(v257[2] + 80LL, v75) || (unsigned __int8)sub_4478E0((__int64)v257, v75) )
    {
      if ( *(_BYTE *)(v10 + 25) )
      {
        v76 = v255 + 16LL * v252;
        if ( *(_BYTE *)(v76 + 8) != 4 )
          sub_DBF6E(0);
        v77 = *(_DWORD **)v76;
        v287 = 0;
        v288 = 0;
        v289 = 1;
        v78 = qword_1C7F2C0;
        v290.m128i_i64[0] = 0;
        if ( (v77[1] & 1) != 0 )
        {
          v267 = v77;
          v260 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v287, v77);
          v78 = v260;
          v77 = v267;
        }
        else
        {
          LODWORD(v287) = *v77;
        }
        if ( (v77[5] & 1) != 0 )
        {
          sub_182C690(v78, &v289, v77 + 4);
        }
        else
        {
          v79 = v77[4];
          BYTE4(v289) &= ~1u;
          LODWORD(v289) = v79;
        }
        v80 = qword_1C7F2C0;
        v81 = *(_QWORD *)(v75 + 8LL * (unsigned int)(*(_DWORD *)(v75 + 24) - 1) + 32);
        v290.m128i_i8[12] &= 0xFCu;
        v293 &= 0xFCu;
        v290.m128i_i32[2] = 0;
        v291 = 0;
        v292 = 1;
        v294.m128i_i64[0] = 0;
        if ( (v287 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v290.m128i_u64[1], &v287);
        else
          v290.m128i_i32[2] = v287;
        if ( (v289 & 0x100000000LL) != 0 )
        {
          sub_182C690(v80, &v292, &v289);
        }
        else
        {
          v293 &= ~1u;
          v292 = v289;
        }
        v272.m128i_i64[0] = (__int64)&v290.m128i_i64[1];
        sub_1831690(qword_1C7F2C0, &v290.m128i_u64[1]);
        v82 = v291;
        v83 = v290.m128i_i32[2];
        v291 = 0;
        v84 = _mm_loadl_epi64(&v294);
        v85 = v290.m128i_i8[12] & 1;
        v86 = (v290.m128i_i8[12] & 2) != 0;
        v87 = v292;
        v299.m128i_i32[0] = v290.m128i_i32[2];
        v299.m128i_i64[1] = v82;
        v300 = v292;
        v299.m128i_i8[4] = (2 * v86) | v290.m128i_i8[12] & 1 | v299.m128i_i8[4] & 0xFC;
        v302 = _mm_unpacklo_epi64(v84, (__m128i)(unsigned __int64)v81);
        v294.m128i_i64[0] = 0;
        v88 = v293 & 1;
        v89 = (v293 & 2) != 0;
        v301 = (2 * v89) | v293 & 1 | v301 & 0xFC;
        if ( v16 )
        {
          v90 = *(unsigned int *)(v16 - 4);
          if ( (_DWORD)v90 == *(_DWORD *)(v16 - 8) )
          {
            v158 = (unsigned int)(3 * v90 + 1) >> 1;
            v159 = 40 * v158 + 8;
            if ( 40 * (int)v90 + 8 >= v159 || (unsigned int)v90 >= v158 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v294.m128i_i64[1], "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v294.m128i_i64[1]);
              sub_233E40((__int64)&v294.m128i_i64[1]);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v272.m128i_i32[2] = (unsigned int)(3 * v90 + 1) >> 1;
            v160 = (__m128i *)sub_186B270(v159);
            v161 = *(unsigned int *)(v16 - 4);
            v162 = v272.m128i_i32[2];
            v163 = (__int64)&v160->m128i_i64[1];
            v160->m128i_i32[1] = v161;
            v164 = (__m128i *)&v160->m128i_u64[1];
            v165 = (const __m128i *)(v16 + 40 * v161);
            for ( i = (const __m128i *)v16; v165 != i; v164[-2].m128i_i8[12] = v170 & 0xFC | v169 & 3 )
            {
              v167 = i->m128i_i32[0];
              v168 = v164->m128i_i8[4];
              i = (const __m128i *)((char *)i + 40);
              v164 = (__m128i *)((char *)v164 + 40);
              v164[-3].m128i_i32[2] = v167;
              v164[-3].m128i_i8[12] = v168 & 0xFC | i[-3].m128i_i8[12] & 3;
              v169 = i[-2].m128i_i64[0];
              i[-2].m128i_i64[0] = 0;
              v170 = v164[-2].m128i_i8[12];
              v164[-2].m128i_i64[0] = v169;
              LODWORD(v169) = i[-2].m128i_i32[2];
              v171 = _mm_loadu_si128(i - 1);
              i[-1].m128i_i64[0] = 0;
              v164[-2].m128i_i32[2] = v169;
              LOBYTE(v169) = i[-2].m128i_i8[12];
              v164[-1] = v171;
            }
            v172 = *(unsigned int *)(v16 - 4);
            if ( (_DWORD)v172 )
            {
              v259 = v162;
              v173 = v160;
              v272.m128i_i64[1] = (__int64)&v160->m128i_i64[1];
              v274 = (__m128i *)v16;
              v275 = (struct _Unwind_Exception *)v10;
              v174 = v16;
              v276 = (_QWORD *)v11;
              v175 = v16 + 40 * v172;
              do
              {
                v176 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v174);
                v177 = v174 + 16;
                v174 += 40;
                sub_182CBA0(v176, v177);
              }
              while ( v175 != v174 );
              v162 = v259;
              v163 = v272.m128i_i64[1];
              v160 = v173;
              v16 = (__int64)v274;
              v10 = (__int64)v275;
              v11 = (__int64)v276;
            }
            v275 = (struct _Unwind_Exception *)v163;
            v274 = v160;
            v272.m128i_i32[2] = v162;
            sub_186B220((void *)(v16 - 8));
            v178 = v299.m128i_i8[4];
            v179 = v160->m128i_u32[1];
            v16 = (__int64)v275;
            v83 = v299.m128i_i32[0];
            v160->m128i_i32[0] = v272.m128i_i32[2];
            v82 = v299.m128i_i64[1];
            v85 = v178 & 1;
            v86 = (v178 & 2) != 0;
            v87 = v300;
            v91 = (_QWORD *)(v16 + 40 * v179);
            v81 = v302.m128i_i64[1];
            v84.m128i_i64[0] = v302.m128i_i64[0];
            v88 = v301 & 1;
            v89 = (v301 & 2) != 0;
          }
          else
          {
            v91 = (_QWORD *)(v16 + 40 * v90);
          }
        }
        else
        {
          v244 = (_QWORD *)sub_186B270(0x58u);
          v245 = v299.m128i_i8[4];
          *v244 = 2;
          v16 = (__int64)(v244 + 1);
          v83 = v299.m128i_i32[0];
          v91 = v244 + 1;
          v82 = v299.m128i_i64[1];
          v87 = v300;
          v85 = v245 & 1;
          v84.m128i_i64[0] = v302.m128i_i64[0];
          v86 = (v245 & 2) != 0;
          v88 = v301 & 1;
          v89 = (v301 & 2) != 0;
          v81 = v302.m128i_i64[1];
        }
        v92 = *((_BYTE *)v91 + 4);
        *((_DWORD *)v91 + 4) = v87;
        v91[4] = v81;
        v93 = qword_1C7F2C0;
        *(_DWORD *)v91 = v83;
        v91[1] = v82;
        *((_BYTE *)v91 + 4) = v92 & 0xFC | (v85 | (2 * v86)) & 3;
        v94 = *((_BYTE *)v91 + 20);
        v91[3] = v84.m128i_i64[0];
        v299.m128i_i64[1] = 0;
        v302.m128i_i64[0] = 0;
        *((_BYTE *)v91 + 20) = v94 & 0xFC | (v88 | (2 * v89)) & 3;
        ++*(_DWORD *)(v16 - 4);
        sub_182CBA0(v93, &v299);
        sub_182CBA0(v93, &v300);
        v95 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v272.m128i_i64[0]);
        sub_182CBA0(v95, &v292);
        v96 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v287);
        sub_182CBA0(v96, &v289);
      }
    }
    else
    {
      v258 = *(char **)(*(_QWORD *)(v10 + 16) + 16LL);
      if ( (unsigned __int8)sub_15D37A0(v258 + 136, v75) || (unsigned __int8)sub_15D37A0(v258 + 24, v75) )
      {
        v131 = *(_BYTE *)(v10 + 25);
      }
      else
      {
        v180 = sub_4A7E40(v258, *(_QWORD *)(v75 + 8LL * (unsigned int)(*(_DWORD *)(v75 + 24) - 1) + 32));
        v131 = *(_BYTE *)(v10 + 25);
        if ( v180 )
        {
          if ( !v131 )
          {
            v181 = 16LL * v252 + v255;
            if ( *(_BYTE *)(v181 + 8) != 4 )
              sub_DBF6E(0);
            v182 = *(_DWORD **)v181;
            v287 = 0;
            v288 = 0;
            v289 = 1;
            v183 = qword_1C7F2C0;
            v290.m128i_i64[0] = 0;
            if ( (v182[1] & 1) != 0 )
            {
              v269 = v182;
              v264 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v287, v182);
              v183 = v264;
              v182 = v269;
            }
            else
            {
              LODWORD(v287) = *v182;
            }
            if ( (v182[5] & 1) != 0 )
            {
              sub_182C690(v183, &v289, v182 + 4);
            }
            else
            {
              v184 = v182[4];
              BYTE4(v289) &= ~1u;
              LODWORD(v289) = v184;
            }
            v185 = qword_1C7F2C0;
            v186 = *(_QWORD *)(v75 + 8LL * (unsigned int)(*(_DWORD *)(v75 + 24) - 1) + 32);
            v290.m128i_i8[12] &= 0xFCu;
            v293 &= 0xFCu;
            v290.m128i_i32[2] = 0;
            v291 = 0;
            v292 = 1;
            v294.m128i_i64[0] = 0;
            if ( (v287 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v290.m128i_u64[1], &v287);
            else
              v290.m128i_i32[2] = v287;
            if ( (v289 & 0x100000000LL) != 0 )
            {
              sub_182C690(v185, &v292, &v289);
            }
            else
            {
              v293 &= ~1u;
              v292 = v289;
            }
            v272.m128i_i64[0] = (__int64)&v290.m128i_i64[1];
            sub_1831690(qword_1C7F2C0, &v290.m128i_u64[1]);
            v187 = v291;
            v188 = v290.m128i_i32[2];
            v291 = 0;
            v189 = _mm_loadl_epi64(&v294);
            v190 = v290.m128i_i8[12] & 1;
            v191 = (v290.m128i_i8[12] & 2) != 0;
            v192 = v292;
            v299.m128i_i32[0] = v290.m128i_i32[2];
            v299.m128i_i64[1] = v187;
            v300 = v292;
            v299.m128i_i8[4] = (2 * v191) | v290.m128i_i8[12] & 1 | v299.m128i_i8[4] & 0xFC;
            v302 = _mm_unpacklo_epi64(v189, (__m128i)(unsigned __int64)v186);
            v294.m128i_i64[0] = 0;
            v193 = v293 & 1;
            v194 = (v293 & 2) != 0;
            v301 = (2 * v194) | v293 & 1 | v301 & 0xFC;
            if ( v16 )
            {
              exception_class_high = *(unsigned int *)(v16 - 4);
              if ( (_DWORD)exception_class_high == *(_DWORD *)(v16 - 8) )
              {
                v272.m128i_i32[2] = (unsigned int)(3 * exception_class_high + 1) >> 1;
                v225 = 40 * v272.m128i_i32[2] + 8;
                if ( 40 * (int)exception_class_high + 8 >= v225
                  || (unsigned int)exception_class_high >= (unsigned int)(3 * exception_class_high + 1) >> 1 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v294.m128i_i64[1], "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, &v294.m128i_i64[1]);
                  sub_233E40((__int64)&v294.m128i_i64[1]);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v226 = (struct _Unwind_Exception *)sub_186B270(v225);
                v227 = *(unsigned int *)(v16 - 4);
                p_exception_cleanup = (__m128i *)&v226->exception_cleanup;
                HIDWORD(v226->exception_class) = v227;
                v229 = (const __m128i *)(v16 + 40 * v227);
                v274 = (__m128i *)&v226->exception_cleanup;
                for ( j = (const __m128i *)v16; v229 != j; p_exception_cleanup[-2].m128i_i8[12] = v234 & 0xFC | v233 & 3 )
                {
                  v231 = j->m128i_i32[0];
                  v232 = p_exception_cleanup->m128i_i8[4];
                  j = (const __m128i *)((char *)j + 40);
                  p_exception_cleanup = (__m128i *)((char *)p_exception_cleanup + 40);
                  p_exception_cleanup[-3].m128i_i32[2] = v231;
                  p_exception_cleanup[-3].m128i_i8[12] = v232 & 0xFC | j[-3].m128i_i8[12] & 3;
                  v233 = j[-2].m128i_i64[0];
                  j[-2].m128i_i64[0] = 0;
                  v234 = p_exception_cleanup[-2].m128i_i8[12];
                  p_exception_cleanup[-2].m128i_i64[0] = v233;
                  LODWORD(v233) = j[-2].m128i_i32[2];
                  v235 = _mm_loadu_si128(j - 1);
                  j[-1].m128i_i64[0] = 0;
                  p_exception_cleanup[-2].m128i_i32[2] = v233;
                  LOBYTE(v233) = j[-2].m128i_i8[12];
                  p_exception_cleanup[-1] = v235;
                }
                v236 = *(unsigned int *)(v16 - 4);
                if ( (_DWORD)v236 )
                {
                  v275 = v226;
                  v276 = (_QWORD *)v10;
                  v262 = v12;
                  v237 = v16 + 40 * v236;
                  v238 = v11;
                  v239 = v16;
                  v240 = v238;
                  do
                  {
                    v241 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v239);
                    v242 = v239 + 16;
                    v239 += 40;
                    sub_182CBA0(v241, v242);
                  }
                  while ( v239 != v237 );
                  v12 = v262;
                  v226 = v275;
                  v11 = v240;
                  v10 = (__int64)v276;
                }
                v275 = v226;
                sub_186B220((void *)(v16 - 8));
                v243 = v301;
                v188 = v299.m128i_i32[0];
                exception_class_high = HIDWORD(v226->exception_class);
                v192 = v300;
                LODWORD(v226->exception_class) = v272.m128i_i32[2];
                v187 = v299.m128i_i64[1];
                v189.m128i_i64[0] = v302.m128i_i64[0];
                v16 = (__int64)v274;
                v193 = v243 & 1;
                v194 = (v243 & 2) != 0;
                v186 = v302.m128i_i64[1];
                v190 = v299.m128i_i8[4] & 1;
                v191 = (v299.m128i_i8[4] & 2) != 0;
              }
            }
            else
            {
              v246 = (_QWORD *)sub_186B270(0x58u);
              v247 = v301;
              *v246 = 2;
              exception_class_high = 0;
              v188 = v299.m128i_i32[0];
              v16 = (__int64)(v246 + 1);
              v187 = v299.m128i_i64[1];
              v192 = v300;
              v186 = v302.m128i_i64[1];
              v193 = v247 & 1;
              v189.m128i_i64[0] = v302.m128i_i64[0];
              v190 = v299.m128i_i8[4] & 1;
              v191 = (v299.m128i_i8[4] & 2) != 0;
              v194 = (v247 & 2) != 0;
            }
            v299.m128i_i64[1] = 0;
            v196 = v16 + 40 * exception_class_high;
            v197 = v190 | (2 * v191);
            v302.m128i_i64[0] = 0;
            v198 = *(_BYTE *)(v196 + 4);
            *(_DWORD *)(v196 + 16) = v192;
            *(_QWORD *)(v196 + 32) = v186;
            v199 = qword_1C7F2C0;
            *(_DWORD *)v196 = v188;
            *(_QWORD *)(v196 + 8) = v187;
            *(_BYTE *)(v196 + 4) = v198 & 0xFC | v197 & 3;
            v200 = 2 * v194;
            v201 = *(_BYTE *)(v196 + 20);
            *(_QWORD *)(v196 + 24) = v189.m128i_i64[0];
            *(_BYTE *)(v196 + 20) = v201 & 0xFC | (v193 | v200) & 3;
            ++*(_DWORD *)(v16 - 4);
            sub_182CBA0(v199, &v299);
            sub_182CBA0(v199, &v300);
            v202 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v272.m128i_i64[0]);
            sub_182CBA0(v202, &v292);
            v203 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v287);
            sub_182CBA0(v203, &v289);
          }
          goto LABEL_77;
        }
      }
      v270 = v131;
      if ( v131 )
      {
        v132 = 16LL * v252 + v255;
        if ( *(_BYTE *)(v132 + 8) != 4 )
          sub_DBF6E(0);
        v133 = *(_DWORD **)v132;
        v287 = 0;
        v288 = 0;
        v289 = 1;
        v134 = qword_1C7F2C0;
        v290.m128i_i64[0] = 0;
        if ( (v133[1] & 1) != 0 )
        {
          v268 = v133;
          v263 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v287, v133);
          v134 = v263;
          v133 = v268;
        }
        else
        {
          LODWORD(v287) = *v133;
        }
        if ( (v133[5] & 1) != 0 )
        {
          sub_182C690(v134, &v289, v133 + 4);
        }
        else
        {
          v135 = v133[4];
          BYTE4(v289) &= ~1u;
          LODWORD(v289) = v135;
        }
        v136 = qword_1C7F2C0;
        v137 = *(_QWORD *)(v75 + 8LL * (unsigned int)(*(_DWORD *)(v75 + 24) - 1) + 32);
        v290.m128i_i8[12] &= 0xFCu;
        v293 &= 0xFCu;
        v290.m128i_i32[2] = 0;
        v291 = 0;
        v292 = 1;
        v294.m128i_i64[0] = 0;
        if ( (v287 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v290.m128i_u64[1], &v287);
        else
          v290.m128i_i32[2] = v287;
        if ( (v289 & 0x100000000LL) != 0 )
        {
          sub_182C690(v136, &v292, &v289);
        }
        else
        {
          v293 &= ~1u;
          v292 = v289;
        }
        v272.m128i_i64[0] = (__int64)&v290.m128i_i64[1];
        sub_1831690(qword_1C7F2C0, &v290.m128i_u64[1]);
        v138 = v291;
        v139 = v290.m128i_i32[2];
        v291 = 0;
        v140 = _mm_loadl_epi64(&v294);
        v141 = v290.m128i_i8[12] & 1;
        v142 = (v290.m128i_i8[12] & 2) != 0;
        v143 = v292;
        v299.m128i_i32[0] = v290.m128i_i32[2];
        v299.m128i_i64[1] = v138;
        v300 = v292;
        v299.m128i_i8[4] = (2 * v142) | v290.m128i_i8[12] & 1 | v299.m128i_i8[4] & 0xFC;
        v302 = _mm_unpacklo_epi64(v140, (__m128i)(unsigned __int64)v137);
        v294.m128i_i64[0] = 0;
        v144 = v293 & 1;
        v145 = (v293 & 2) != 0;
        v301 = (2 * v145) | v293 & 1 | v301 & 0xFC;
        if ( v16 )
        {
          v146 = *(unsigned int *)(v16 - 4);
          if ( (_DWORD)v146 == *(_DWORD *)(v16 - 8) )
          {
            v271 = (unsigned int)(3 * v146 + 1) >> 1;
            v207 = 40 * v271 + 8;
            if ( 40 * (int)v146 + 8 >= v207 || (unsigned int)v146 >= (unsigned int)(3 * v146 + 1) >> 1 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v294.m128i_i64[1], "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, &v294.m128i_i64[1]);
              sub_233E40((__int64)&v294.m128i_i64[1]);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v208 = (__m128i *)sub_186B270(v207);
            v209 = *(unsigned int *)(v16 - 4);
            v210 = (__m128i *)&v208->m128i_u64[1];
            v208->m128i_i32[1] = v209;
            v211 = (const __m128i *)(v16 + 40 * v209);
            v272.m128i_i64[1] = (__int64)&v208->m128i_i64[1];
            for ( k = (const __m128i *)v16; v211 != k; v210[-2].m128i_i8[12] = v216 & 0xFC | v215 & 3 )
            {
              v213 = k->m128i_i32[0];
              v214 = v210->m128i_i8[4];
              k = (const __m128i *)((char *)k + 40);
              v210 = (__m128i *)((char *)v210 + 40);
              v210[-3].m128i_i32[2] = v213;
              v210[-3].m128i_i8[12] = v214 & 0xFC | k[-3].m128i_i8[12] & 3;
              v215 = k[-2].m128i_i64[0];
              k[-2].m128i_i64[0] = 0;
              v216 = v210[-2].m128i_i8[12];
              v210[-2].m128i_i64[0] = v215;
              LODWORD(v215) = k[-2].m128i_i32[2];
              v217 = _mm_loadu_si128(k - 1);
              k[-1].m128i_i64[0] = 0;
              v210[-2].m128i_i32[2] = v215;
              LOBYTE(v215) = k[-2].m128i_i8[12];
              v210[-1] = v217;
            }
            v218 = *(unsigned int *)(v16 - 4);
            if ( (_DWORD)v218 )
            {
              v261 = v208;
              v219 = v11;
              v274 = (__m128i *)v16;
              v275 = (struct _Unwind_Exception *)v10;
              v220 = v16 + 40 * v218;
              v221 = v16;
              do
              {
                v222 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v221);
                v223 = v221 + 16;
                v221 += 40;
                sub_182CBA0(v222, v223);
              }
              while ( v220 != v221 );
              v208 = v261;
              v16 = (__int64)v274;
              v11 = v219;
              v10 = (__int64)v275;
            }
            v274 = v208;
            sub_186B220((void *)(v16 - 8));
            v224 = v301;
            v139 = v299.m128i_i32[0];
            v146 = v208->m128i_u32[1];
            v143 = v300;
            v208->m128i_i32[0] = v271;
            v138 = v299.m128i_i64[1];
            v140.m128i_i64[0] = v302.m128i_i64[0];
            v16 = v272.m128i_i64[1];
            v144 = v224 & 1;
            v145 = (v224 & 2) != 0;
            v137 = v302.m128i_i64[1];
            v141 = v299.m128i_i8[4] & 1;
            v142 = (v299.m128i_i8[4] & 2) != 0;
          }
        }
        else
        {
          v248 = (_QWORD *)sub_186B270(0x58u);
          v249 = v301;
          *v248 = 2;
          v146 = 0;
          v139 = v299.m128i_i32[0];
          v16 = (__int64)(v248 + 1);
          v138 = v299.m128i_i64[1];
          v143 = v300;
          v137 = v302.m128i_i64[1];
          v144 = v249 & 1;
          v140.m128i_i64[0] = v302.m128i_i64[0];
          v141 = v299.m128i_i8[4] & 1;
          v142 = (v299.m128i_i8[4] & 2) != 0;
          v145 = (v249 & 2) != 0;
        }
        v299.m128i_i64[1] = 0;
        v147 = v16 + 40 * v146;
        v148 = v141 | (2 * v142);
        v302.m128i_i64[0] = 0;
        v149 = *(_BYTE *)(v147 + 4);
        *(_DWORD *)(v147 + 16) = v143;
        *(_QWORD *)(v147 + 32) = v137;
        v150 = qword_1C7F2C0;
        *(_DWORD *)v147 = v139;
        *(_QWORD *)(v147 + 8) = v138;
        *(_BYTE *)(v147 + 4) = v149 & 0xFC | v148 & 3;
        v151 = 2 * v145;
        v152 = *(_BYTE *)(v147 + 20);
        *(_QWORD *)(v147 + 24) = v140.m128i_i64[0];
        *(_BYTE *)(v147 + 20) = v152 & 0xFC | (v144 | v151) & 3;
        ++*(_DWORD *)(v16 - 4);
        sub_182CBA0(v150, &v299);
        sub_182CBA0(v150, &v300);
        v153 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v272.m128i_i64[0]);
        sub_182CBA0(v153, &v292);
        v154 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v287);
        sub_182CBA0(v154, &v289);
        v270 = 0;
      }
    }
LABEL_77:
    v15 = *(_DWORD *)(v11 + 24);
    if ( !v15 )
      goto LABEL_7;
    ++v252;
    v73 = *(_QWORD *)(v10 + 8);
  }
  if ( !*(_BYTE *)(v10 + 25) )
    goto LABEL_8;
  v204 = *(_DWORD *)(v11 + 24);
  if ( !v204 )
    goto LABEL_25;
  v31 = v204 - 1;
  v253 = *(struct _Unwind_Exception **)(v10 + 8);
  if ( v253[26].private_1 == sub_15D1F10(*(_QWORD *)(v11 + 8 * v31 + 32)) )
    v31 = v204;
  v205 = *(_DWORD *)(v11 + 24);
  v254 = *(struct _Unwind_Exception **)(v10 + 8);
  if ( v205 )
  {
    v206 = sub_15D1F10(*(_QWORD *)(v11 + 8LL * (unsigned int)(v205 - 1) + 32));
    v30 = v205 + 2;
    if ( v254[26].private_1 != v206 )
      v30 = v205 + 1;
  }
  else
  {
    v30 = 2;
  }
LABEL_26:
  v32 = v12[3];
  if ( v32 )
  {
    v33 = *(_QWORD *)(v32 + 8);
    if ( v33 )
    {
      if ( v30 < *(_DWORD *)(v33 - 4) )
      {
        v34 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 24) - 1) + 32);
        v20 = *(_WORD *)(v34 + 4) == 0;
        v282[0] = v34;
        if ( v20 )
        {
          v35 = (struct _Unwind_Exception *)v282;
          v36 = 1;
          v37 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
          if ( v37 && !*v37 && v37[1] == 6 )
          {
            v36 = *(unsigned int *)(v34 + 24);
            v35 = (struct _Unwind_Exception *)(v34 + 32);
          }
        }
        else
        {
          v35 = (struct _Unwind_Exception *)v282;
          v36 = 1;
        }
        v38 = *(_QWORD *)(v10 + 8);
        v294.m128i_i64[1] = 0;
        v299.m128i_i64[0] = v38;
        v281 = v307;
        ptr = v307;
        v299.m128i_i32[2] = 256;
        v306 = 0x1000000000LL;
        v299.m128i_i16[6] = 0;
        v302.m128i_i32[1] = 0;
        v274 = &v299;
        v303 = 0;
        v304 = 0;
        sub_14DC230(&v299, &v294.m128i_u64[1]);
        sub_18572D0(&v294.m128i_u64[1]);
        if ( !(_DWORD)v36 )
        {
          v17 = 0;
LABEL_99:
          v127 = ptr;
          v128 = (char *)ptr + 8 * (unsigned int)v306;
          v129 = (char *)ptr;
          if ( ptr != v128 )
          {
            do
            {
              v130 = *(_QWORD *)v129;
              v129 += 8;
              *(_BYTE *)(v130 + 6) &= ~1u;
            }
            while ( v128 != v129 );
          }
          LODWORD(v306) = 0;
          if ( v127 != v281 && v127 )
            sub_186B220(v127);
          if ( *((_QWORD *)&v304 + 1) )
            sub_186B220((void *)(*((_QWORD *)&v304 + 1) - 8LL));
          if ( (_QWORD)v304 )
            sub_186B220((void *)(v304 - 8));
          if ( *((_QWORD *)&v303 + 1) )
            sub_186B220((void *)(*((_QWORD *)&v303 + 1) - 8LL));
          if ( (_QWORD)v303 )
            sub_186B220((void *)(v303 - 8));
          goto LABEL_9;
        }
        v250 = v35;
        v256 = 16 * v31 + v255;
        v42 = &v35->exception_class + v36;
        v17 = 0;
        v275 = (struct _Unwind_Exception *)v42;
        v276 = &v283;
        v272.m128i_i64[1] = (__int64)v285;
        while ( 2 )
        {
          exception_class = v250->exception_class;
          v65 = *(_QWORD *)(v10 + 8);
          v283 = nullptr;
          v284 = v65;
          if ( (unsigned int)sub_14DEE90((_DWORD)v274, exception_class, (_DWORD)v276, v39, v40, v41, (__int64)v250) != 5 )
          {
            v66 = (__int64)v283;
            goto LABEL_50;
          }
          v124 = sub_15E1A70(v299.m128i_i32[0]);
          v66 = v124;
          if ( v124 )
          {
            v125 = v283;
            ++*(_DWORD *)(v124 + 8);
            if ( !v125 || (v126 = v284, v20 = v125[2] == 1, --v125[2], !v20) )
            {
              v283 = (_DWORD *)v124;
              goto LABEL_51;
            }
LABEL_136:
            sub_15D7BC0(v126, v125);
            v283 = (_DWORD *)v66;
LABEL_50:
            if ( v66 )
            {
LABEL_51:
              ++*(_DWORD *)(v66 + 8);
              goto LABEL_52;
            }
          }
          else
          {
            v125 = v283;
            if ( v283 )
            {
              v126 = v284;
              v20 = v283[2]-- == 1;
              if ( v20 )
                goto LABEL_136;
            }
            v283 = nullptr;
          }
          v66 = 0;
LABEL_52:
          if ( v17 )
          {
            v67 = *(_DWORD *)(v17 - 4);
            if ( v67 == *(_DWORD *)(v17 - 8) )
            {
              v120 = (3 * v67 + 1) >> 1;
              v121 = 8 * v120 + 8;
              if ( 8 * v67 + 8 >= (unsigned int)v121 || v67 >= v120 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v294.m128i_i64[1], "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, &v294.m128i_i64[1]);
                sub_233E40((__int64)&v294.m128i_i64[1]);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v122 = (unsigned int *)sub_186B300((void *)(v17 - 8), v121);
              v123 = v122[1];
              v17 = (unsigned __int64)(v122 + 2);
              *v122 = v120;
              LODWORD(v122) = v123;
              v70 = (_QWORD *)(v17 + 8 * v123);
              v69 = (_DWORD)v122 + 1;
            }
            else
            {
              v68 = v67;
              v69 = v67 + 1;
              v70 = (_QWORD *)(v17 + 8 * v68);
            }
          }
          else
          {
            v157 = (_QWORD *)sub_186B270(0x18u);
            v17 = (unsigned __int64)(v157 + 1);
            *v157 = 2;
            v69 = 1;
            v70 = (_QWORD *)v17;
          }
          *v70 = v66;
          *(_DWORD *)(v17 - 4) = v69;
          if ( *(_BYTE *)(v256 + 8) != 4 )
            sub_DBF6E(0);
          v71 = *(_QWORD *)v256;
          v285[0] = 0;
          v285[1] = 0;
          v286[0] = 1;
          v72 = qword_1C7F2C0;
          v286[1] = 0;
          if ( (*(_BYTE *)(v71 + 4) & 1) != 0 )
          {
            v265 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v272.m128i_i64[1], v71);
            v72 = v265;
          }
          else
          {
            LODWORD(v285[0]) = *(_DWORD *)v71;
          }
          if ( (*(_BYTE *)(v71 + 20) & 1) != 0 )
          {
            sub_182C690(v72, v286, v71 + 16);
          }
          else
          {
            v43 = *(_DWORD *)(v71 + 16);
            BYTE4(v286[0]) &= ~1u;
            LODWORD(v286[0]) = v43;
          }
          BYTE4(v287) &= 0xFCu;
          v44 = qword_1C7F2C0;
          BYTE4(v289) &= 0xFCu;
          v45 = (__int64)v283;
          LODWORD(v287) = 0;
          v288 = 0;
          LODWORD(v289) = 1;
          v290.m128i_i64[0] = 0;
          if ( (v285[0] & 0x100000000LL) != 0 )
          {
            v266 = v283;
            sub_182C690(qword_1C7F2C0, &v287, v272.m128i_i64[1]);
            v45 = (__int64)v266;
          }
          else
          {
            LODWORD(v287) = v285[0];
          }
          if ( (v286[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v44, &v289, v286);
          }
          else
          {
            BYTE4(v289) &= ~1u;
            LODWORD(v289) = v286[0];
          }
          v272.m128i_i64[0] = v45;
          sub_1831690(qword_1C7F2C0, &v287);
          v46 = _mm_loadl_epi64(&v272);
          v47 = v288;
          v288 = 0;
          v48 = _mm_loadl_epi64(&v290);
          v49 = BYTE4(v287) & 1;
          v50 = (v287 & 0x200000000LL) != 0;
          v51 = v287;
          v52 = v289;
          v295 = v47;
          v294.m128i_i32[2] = v287;
          v294.m128i_i8[12] = (2 * v50) | BYTE4(v287) & 1 | v294.m128i_i8[12] & 0xFC;
          v296 = v289;
          v290.m128i_i64[0] = 0;
          v53 = BYTE4(v289) & 1;
          v54 = (v289 & 0x200000000LL) != 0;
          v298 = _mm_unpacklo_epi64(v48, v46);
          v297 = (2 * v54) | BYTE4(v289) & 1 | v297 & 0xFC;
          if ( v16 )
          {
            v55 = *(unsigned int *)(v16 - 4);
            if ( (_DWORD)v55 == *(_DWORD *)(v16 - 8) )
            {
              v97 = (unsigned int)(3 * v55 + 1) >> 1;
              v98 = 40 * v97 + 8;
              if ( 40 * (int)v55 + 8 >= (unsigned int)v98 || (unsigned int)v55 >= v97 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                v272.m128i_i64[0] = (__int64)&v290.m128i_i64[1];
                v5 = v4;
                sub_24ABB0(&v290.m128i_i64[1], "Overflow encountered when expanding vector");
                v6 = v272.m128i_i64[0];
                v7 = (_QWORD *)v272.m128i_i64[0];
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v7);
                sub_233E40(v6);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v272.m128i_i32[0] = (unsigned int)(3 * v55 + 1) >> 1;
              v99 = sub_186B270(v98);
              v100 = *(unsigned int *)(v16 - 4);
              v101 = v272.m128i_i32[0];
              v102 = v99 + 8;
              *(_DWORD *)(v99 + 4) = v100;
              v103 = v99 + 8;
              v104 = (const __m128i *)(v16 + 40 * v100);
              for ( m = (const __m128i *)v16; v104 != m; *(_BYTE *)(v103 - 20) = v109 & 0xFC | v108 & 3 )
              {
                v106 = m->m128i_i32[0];
                v107 = *(_BYTE *)(v103 + 4);
                m = (const __m128i *)((char *)m + 40);
                v103 += 40;
                *(_DWORD *)(v103 - 40) = v106;
                *(_BYTE *)(v103 - 36) = v107 & 0xFC | m[-3].m128i_i8[12] & 3;
                v108 = m[-2].m128i_i64[0];
                m[-2].m128i_i64[0] = 0;
                v109 = *(_BYTE *)(v103 - 20);
                *(_QWORD *)(v103 - 32) = v108;
                LODWORD(v108) = m[-2].m128i_i32[2];
                v110 = _mm_loadu_si128(m - 1);
                m[-1].m128i_i64[0] = 0;
                *(_DWORD *)(v103 - 24) = v108;
                LOBYTE(v108) = m[-2].m128i_i8[12];
                *(__m128i *)(v103 - 16) = v110;
              }
              v111 = *(unsigned int *)(v16 - 4);
              if ( (_DWORD)v111 )
              {
                LODWORD(v277) = v101;
                v112 = v99 + 8;
                v278 = v99;
                v279 = v10;
                v272.m128i_i64[0] = v17;
                v113 = v16 + 40 * v111;
                v280 = v11;
                v114 = v16;
                do
                {
                  v115 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v114);
                  v116 = v114 + 16;
                  v114 += 40;
                  sub_182CBA0(v115, v116);
                }
                while ( v114 != v113 );
                v17 = v272.m128i_i64[0];
                v101 = (int)v277;
                v102 = v112;
                v99 = v278;
                v10 = v279;
                v11 = v280;
              }
              v278 = v102;
              v277 = (_DWORD *)v99;
              v272.m128i_i32[0] = v101;
              sub_186B220((void *)(v16 - 8));
              v117 = (unsigned int)v277[1];
              v16 = v278;
              v51 = v294.m128i_i32[2];
              v48.m128i_i64[0] = v298.m128i_i64[0];
              v118 = v294.m128i_i8[12];
              v119 = (unsigned __int8)v294.m128i_i8[12] >> 1;
              *v277 = v272.m128i_i32[0];
              v47 = v295;
              v49 = v118 & 1;
              v50 = v119 & 1;
              v56 = (_QWORD *)(v16 + 40 * v117);
              v52 = v296;
              v46.m128i_i64[0] = v298.m128i_i64[1];
              v53 = v297 & 1;
              v54 = (v297 & 2) != 0;
            }
            else
            {
              v56 = (_QWORD *)(v16 + 40 * v55);
            }
          }
          else
          {
            v155 = (_QWORD *)sub_186B270(0x58u);
            v156 = v294.m128i_i8[12];
            v16 = (__int64)(v155 + 1);
            *v155 = 2;
            v51 = v294.m128i_i32[2];
            v56 = v155 + 1;
            v47 = v295;
            v52 = v296;
            v49 = v156 & 1;
            v50 = (v156 & 2) != 0;
            v48.m128i_i64[0] = v298.m128i_i64[0];
            v53 = v297 & 1;
            v54 = (v297 & 2) != 0;
            v46.m128i_i64[0] = v298.m128i_i64[1];
          }
          v57 = *((_BYTE *)v56 + 4);
          *(_DWORD *)v56 = v51;
          v56[1] = v47;
          v58 = qword_1C7F2C0;
          *((_DWORD *)v56 + 4) = v52;
          v56[3] = v48.m128i_i64[0];
          *((_BYTE *)v56 + 4) = v57 & 0xFC | (v49 | (2 * v50)) & 3;
          v59 = *((_BYTE *)v56 + 20);
          v56[4] = v46.m128i_i64[0];
          v295 = 0;
          v298.m128i_i64[0] = 0;
          *((_BYTE *)v56 + 20) = v59 & 0xFC | (v53 | (2 * v54)) & 3;
          ++*(_DWORD *)(v16 - 4);
          sub_182CBA0(v58, &v294.m128i_u64[1]);
          sub_182CBA0(v58, &v296);
          v60 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v287);
          sub_182CBA0(v60, &v289);
          v61 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v272.m128i_i64[1]);
          sub_182CBA0(v61, v286);
          v62 = v283;
          if ( v283 )
          {
            v63 = v284;
            v20 = v283[2]-- == 1;
            if ( v20 )
              sub_15D7BC0(v63, v62);
          }
          v250 = (struct _Unwind_Exception *)&v251->exception_cleanup;
          v256 += 16;
          if ( v275 == v250 )
            goto LABEL_99;
          continue;
        }
      }
    }
  }
LABEL_8:
  v17 = 0;
LABEL_9:
  sub_4478F0(*(_QWORD *)(v10 + 16), v11, v270);
  v294.m128i_i64[1] = v16;
  sub_471060(&v299, v10, &v294.m128i_i64[1]);
  result = sub_4479D0(*(_QWORD *)(v10 + 16), v299.m128i_i64[0]);
  v18 = v299.m128i_i64[0];
  if ( v299.m128i_i64[0] )
  {
    v19 = v299.m128i_i64[1];
    v20 = (*(_DWORD *)(v299.m128i_i64[0] + 8))-- == 1;
    if ( v20 )
      result = sub_15D7BC0(v19, v18);
  }
  if ( v17 )
  {
    v21 = v273;
    v22 = (__int64 *)v17;
    v23 = v17 + 8LL * *(unsigned int *)(v17 - 4);
    if ( v17 < v23 )
    {
      do
      {
        while ( 1 )
        {
          v24 = *v22;
          if ( *v22 )
          {
            v20 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v20 )
              break;
          }
          if ( (unsigned __int64)++v22 >= v23 )
            goto LABEL_19;
        }
        ++v22;
        sub_15D7BC0(v21, v24);
      }
      while ( (unsigned __int64)v22 < v23 );
    }
LABEL_19:
    result = sub_186B220((void *)(v17 - 8));
  }
  if ( v16 )
  {
    v25 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v25 )
    {
      v26 = v16;
      v27 = v16 + 40 * v25;
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v29 = v26 + 16;
        v26 += 40;
        sub_182CBA0(v28, v29);
      }
      while ( v26 != v27 );
    }
    return sub_186B220((void *)(v16 - 8));
  }
  return result;
}

