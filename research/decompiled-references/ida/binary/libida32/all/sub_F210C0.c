__int64 __fastcall sub_F210C0(__int64 (__fastcall *a1)(), const char *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int32 v6; // r13d
  __int32 v7; // r14d
  __int64 v8; // r15
  __int64 v9; // r12
  const char **v10; // r12
  __m128i v11; // xmm1
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128 v14; // xmm0
  __m128i v15; // xmm2
  __m128i v16; // xmm6
  unsigned __int64 v17; // xmm3_8
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm3
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  size_t v25; // rax
  __m128i v26; // xmm4
  __m128i v27; // xmm7
  __m128i v28; // xmm6
  __m128i v29; // xmm3
  __m128i v30; // xmm5
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm5
  __m128i v39; // xmm6
  __m128i v40; // xmm7
  __m128i *v41; // r15
  __m128i v42; // xmm1
  __m128i v43; // xmm2
  __m128i v44; // xmm3
  __m128i v45; // xmm4
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i v48; // xmm5
  __m128i v49; // xmm6
  __m128i v50; // xmm7
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // xmm3
  __m128i v54; // xmm4
  __m128i v55; // xmm5
  const char **v56; // rdx
  __m128i v57; // xmm0
  void (__fastcall *v58)(_BYTE *, _BYTE *, __int64); // rax
  __int64 v59; // rdx
  __m128i *v60; // rdi
  size_t v61; // rax
  __m128i v62; // xmm0
  size_t v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  size_t v67; // rax
  __m128i v68; // xmm0
  size_t v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __m128i si128; // xmm7
  __m128i v75; // xmm1
  __int64 v76; // xmm2_8^8
  __m128i v77; // xmm7
  __m128i v78; // xmm3
  __m128i v79; // xmm4
  __m128i v80; // xmm7
  __m128i v81; // xmm6
  __m128i v82; // xmm5
  __m128i v83; // xmm3
  __m128i v84; // xmm2
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  size_t v87; // rax
  __m128i v88; // xmm4
  __m128i v89; // xmm7
  __m128i v90; // xmm6
  __m128i v91; // xmm3
  __m128i v92; // xmm5
  __m128i v93; // xmm2
  __m128i v94; // xmm1
  __m128i v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __m128i v99; // xmm3
  __m128i v100; // xmm4
  __m128i v101; // xmm5
  __int64 v102; // rdx
  __m128i v103; // xmm6
  __m128i v104; // xmm7
  __m128i v105; // xmm1
  __m128i v106; // xmm2
  __int64 v107; // rax
  __int64 v108; // rax
  __m128i *v109; // rdx
  __m128i v110; // xmm3
  __m128i v111; // xmm4
  __m128i v112; // xmm5
  __m128i v113; // xmm6
  __m128i *v114; // rcx
  __m128i v115; // xmm7
  __m128i v116; // xmm1
  __m128i v117; // xmm2
  __m128i v118; // xmm3
  __m128i v119; // xmm0
  void (__fastcall *v120)(_BYTE *, _BYTE *, __int64); // rax
  __int64 v121; // rax
  void *v122; // rdi
  __m128i v123; // xmm5
  __m128i v124; // xmm6
  __m128i v125; // xmm7
  __m128i v126; // xmm1
  __m128i v127; // xmm2
  __m128i v128; // xmm5
  __m128i v129; // xmm6
  __m128i v130; // xmm7
  __int64 v131; // rax
  __int64 v132; // rax
  __m128i v133; // xmm3
  __m128i v134; // xmm4
  __m128i v135; // xmm5
  __m128i v136; // xmm6
  __m128i v137; // xmm7
  __m128i v138; // xmm1
  __m128i v139; // xmm2
  __m128i v140; // xmm3
  const char **v141; // rdx
  __m128 v142; // xmm0
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rdi
  void (__fastcall *v148)(__int64, __int64, __int64); // rax
  _BYTE *v149; // rax
  __m128i v150; // xmm7
  __m128i v151; // xmm1
  __m128i v152; // xmm2
  __m128i v153; // xmm3
  __m128i v154; // xmm4
  __m128i v155; // xmm5
  __m128i v156; // xmm6
  __m128i v157; // xmm7
  __int64 v158; // rax
  __int64 v159; // rax
  __m128i v160; // xmm1
  __m128i v161; // xmm2
  __m128i v162; // xmm3
  __m128i v163; // xmm4
  __m128i v164; // xmm5
  __m128i v165; // xmm6
  __m128i v166; // xmm7
  __m128i v167; // xmm1
  __m128i *v168; // rdx
  __m128 v169; // xmm0
  __int64 v170; // rax
  size_t v171; // rax
  __int64 v172; // rcx
  int v173; // ebp
  __int64 *i; // r12
  __int64 v175; // rdi
  _BYTE *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rdi
  __int64 v182; // rdi
  void (__fastcall *v183)(__int64, __int64, __int64); // rax
  __int64 v184; // rax
  _BYTE *v185; // rax
  __m256i v186; // [rsp-20h] [rbp-6A8h]
  __m256i v187; // [rsp-20h] [rbp-6A8h]
  __m128 v188; // [rsp+0h] [rbp-688h] BYREF
  __m128i v189; // [rsp+10h] [rbp-678h] BYREF
  __int64 (__fastcall *v190)(); // [rsp+28h] [rbp-660h] BYREF
  __m128i v191; // [rsp+30h] [rbp-658h] BYREF
  __m128i v192; // [rsp+40h] [rbp-648h] BYREF
  __m128i v193; // [rsp+50h] [rbp-638h] BYREF
  __m128i v194; // [rsp+60h] [rbp-628h] BYREF
  __m128i v195; // [rsp+70h] [rbp-618h] BYREF
  __m128i v196; // [rsp+80h] [rbp-608h] BYREF
  __m128i v197; // [rsp+90h] [rbp-5F8h] BYREF
  __m128i v198; // [rsp+A0h] [rbp-5E8h] BYREF
  char v199; // [rsp+BDh] [rbp-5CBh] BYREF
  char v200; // [rsp+BEh] [rbp-5CAh] BYREF
  char v201; // [rsp+BFh] [rbp-5C9h] BYREF
  __m128 v202; // [rsp+C0h] [rbp-5C8h] BYREF
  __m128i v203; // [rsp+D0h] [rbp-5B8h] BYREF
  __m128i v204; // [rsp+E0h] [rbp-5A8h] BYREF
  __m128 v205; // [rsp+F0h] [rbp-598h]
  __m128i v206; // [rsp+100h] [rbp-588h] BYREF
  __m128i v207; // [rsp+110h] [rbp-578h] BYREF
  __m128i v208; // [rsp+120h] [rbp-568h] BYREF
  __int64 v209; // [rsp+130h] [rbp-558h]
  _BYTE v210[24]; // [rsp+140h] [rbp-548h] BYREF
  __m128i v211; // [rsp+158h] [rbp-530h] BYREF
  __m128i v212; // [rsp+168h] [rbp-520h] BYREF
  __int64 (__fastcall *v213)(); // [rsp+178h] [rbp-510h]
  __m128i v214; // [rsp+180h] [rbp-508h] BYREF
  __int64 v215; // [rsp+190h] [rbp-4F8h] BYREF
  __m128i v216; // [rsp+198h] [rbp-4F0h] BYREF
  __m128i v217; // [rsp+1A8h] [rbp-4E0h] BYREF
  __int64 v218; // [rsp+1B8h] [rbp-4D0h]
  _BYTE v219[24]; // [rsp+1C0h] [rbp-4C8h] BYREF
  __m128i v220; // [rsp+1D8h] [rbp-4B0h] BYREF
  unsigned __int64 v221; // [rsp+1E8h] [rbp-4A0h]
  __m128i v222; // [rsp+1F0h] [rbp-498h] BYREF
  _BYTE v223[24]; // [rsp+200h] [rbp-488h] BYREF
  __m128i v224; // [rsp+218h] [rbp-470h] BYREF
  __m128i v225; // [rsp+228h] [rbp-460h] BYREF
  __int64 v226; // [rsp+238h] [rbp-450h]
  __m128i v227; // [rsp+240h] [rbp-448h]
  __m128i v228; // [rsp+250h] [rbp-438h]
  __m128i v229; // [rsp+260h] [rbp-428h]
  __m128i v230; // [rsp+270h] [rbp-418h]
  __m128i v231; // [rsp+280h] [rbp-408h]
  __m128i v232; // [rsp+290h] [rbp-3F8h]
  __m128i v233; // [rsp+2A0h] [rbp-3E8h]
  __m128i v234; // [rsp+2B0h] [rbp-3D8h]
  __m128i v235; // [rsp+2C0h] [rbp-3C8h]
  __m128i v236; // [rsp+2D0h] [rbp-3B8h]
  __m128i v237; // [rsp+2E0h] [rbp-3A8h]
  __m128i v238; // [rsp+2F0h] [rbp-398h]
  __m128i v239; // [rsp+300h] [rbp-388h]
  __m128i v240; // [rsp+310h] [rbp-378h]
  __m128i v241; // [rsp+320h] [rbp-368h]
  __m128i v242; // [rsp+330h] [rbp-358h]
  __m128i v243; // [rsp+340h] [rbp-348h]
  __m128i v244; // [rsp+350h] [rbp-338h]
  __m128i v245; // [rsp+360h] [rbp-328h]
  __m128i v246; // [rsp+370h] [rbp-318h]
  __m128i v247; // [rsp+380h] [rbp-308h]
  __m128i v248; // [rsp+390h] [rbp-2F8h]
  __m128i v249; // [rsp+3A0h] [rbp-2E8h]
  __m128i v250; // [rsp+3B0h] [rbp-2D8h]
  __m128i v251; // [rsp+3C0h] [rbp-2C8h]
  __m128i v252; // [rsp+3D0h] [rbp-2B8h]
  __m128i v253; // [rsp+3E0h] [rbp-2A8h]
  __m128i v254; // [rsp+3F0h] [rbp-298h]
  __m128i v255; // [rsp+400h] [rbp-288h]
  __m128i v256; // [rsp+410h] [rbp-278h]
  __m128i v257; // [rsp+420h] [rbp-268h]
  __m128i v258; // [rsp+430h] [rbp-258h]
  _BYTE v259[40]; // [rsp+440h] [rbp-248h] BYREF
  __m128i v260; // [rsp+468h] [rbp-220h] BYREF
  __m128i v261; // [rsp+478h] [rbp-210h] BYREF
  __m128i v262; // [rsp+488h] [rbp-200h] BYREF
  __m128i v263; // [rsp+498h] [rbp-1F0h] BYREF
  __m128i v264; // [rsp+4A8h] [rbp-1E0h] BYREF
  __m128i v265; // [rsp+4B8h] [rbp-1D0h] BYREF
  void *v266; // [rsp+4C8h] [rbp-1C0h] BYREF
  __int64 v267; // [rsp+4D0h] [rbp-1B8h]
  __m128i v268; // [rsp+4D8h] [rbp-1B0h] BYREF
  _BYTE v269[40]; // [rsp+4F0h] [rbp-198h] BYREF
  __m128i v270; // [rsp+518h] [rbp-170h] BYREF
  __m128i v271; // [rsp+528h] [rbp-160h] BYREF
  __m128i v272; // [rsp+538h] [rbp-150h] BYREF
  __m128i v273; // [rsp+548h] [rbp-140h] BYREF
  __m128i v274; // [rsp+558h] [rbp-130h] BYREF
  __m128i v275; // [rsp+568h] [rbp-120h] BYREF
  void *v276; // [rsp+578h] [rbp-110h] BYREF
  __int64 v277; // [rsp+580h] [rbp-108h]
  __m128i v278; // [rsp+588h] [rbp-100h] BYREF
  const char *v279; // [rsp+5A0h] [rbp-E8h] BYREF
  __m256i v280; // [rsp+5A8h] [rbp-E0h] BYREF
  __m128i v281; // [rsp+5C8h] [rbp-C0h] BYREF
  __m128i v282; // [rsp+5D8h] [rbp-B0h] BYREF
  __m128i v283; // [rsp+5E8h] [rbp-A0h] BYREF
  __m128i v284; // [rsp+5F8h] [rbp-90h] BYREF
  __m128i v285; // [rsp+608h] [rbp-80h] BYREF
  __m128i v286; // [rsp+618h] [rbp-70h] BYREF
  void *v287; // [rsp+628h] [rbp-60h]
  __int64 v288; // [rsp+630h] [rbp-58h]
  __m128i v289[5]; // [rsp+638h] [rbp-50h] BYREF

  v2 = (__int64)a2;
  sub_A3A3D0(&v202, (__int64)a2);
  v6 = v203.m128i_i32[0];
  v7 = v203.m128i_i32[2];
  v8 = v204.m128i_i64[1];
  v189.m128i_i64[0] = v205.m128_i64[1];
  v190 = (__int64 (__fastcall *)())v205.m128_u64[0];
  v188.m128_u64[0] = v206.m128i_i64[0];
  if ( (v202.m128_i8[2] & 2) != 0 )
  {
    a2 = " trailing_return";
    sub_971800(*((_QWORD *)a1 + 137), " trailing_return");
  }
  v9 = v2;
  if ( *(_BYTE *)(v2 + 16) == 26 )
  {
    if ( !v2 )
      goto LABEL_13;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_13;
    if ( !sub_F3F310(v2, a2, v4, v5) )
    {
LABEL_6:
      if ( *(_BYTE *)(v2 + 16) == 26 )
        goto LABEL_7;
LABEL_44:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
        goto LABEL_13;
      if ( !sub_F3F310(v2, a2, v4, v5) )
        goto LABEL_9;
      goto LABEL_8;
    }
  }
  if ( (*(_BYTE *)(v2 + 18) & 0x20) == 0 )
    goto LABEL_6;
  a2 = " const";
  sub_971800(*((_QWORD *)a1 + 137), " const");
  if ( *(_BYTE *)(v2 + 16) != 26 )
    goto LABEL_44;
LABEL_7:
  if ( !v2 )
    goto LABEL_13;
LABEL_8:
  if ( *(char *)(v2 + 18) < 0 )
  {
    a2 = " volatile";
    sub_971800(*((_QWORD *)a1 + 137), " volatile");
    if ( *(_BYTE *)(v2 + 16) == 26 )
      goto LABEL_10;
LABEL_41:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_13;
    v9 = sub_F3F310(v2, a2, v4, v5);
    goto LABEL_10;
  }
LABEL_9:
  if ( *(_BYTE *)(v2 + 16) != 26 )
    goto LABEL_41;
LABEL_10:
  if ( v9 && (*(_BYTE *)(v2 + 18) & 0x40) != 0 )
    sub_971800(*((_QWORD *)a1 + 137), " restrict");
LABEL_13:
  v10 = &v279;
  sub_A3A3D0((__m128 *)&v279, v2);
  if ( (BYTE2(v279) & 1) != 0 )
    sub_971800(*((_QWORD *)a1 + 137), " variadic");
  if ( v6 == 1 )
  {
    sub_971800(*((_QWORD *)a1 + 137), " &");
  }
  else if ( v6 == 2 )
  {
    sub_971800(*((_QWORD *)a1 + 137), " &&");
  }
  switch ( v7 )
  {
    case 1:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_dynamic_none");
      break;
    case 2:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_dynamic");
      break;
    case 3:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_ms_any");
      break;
    case 4:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_nothrow");
      break;
    case 5:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_basic_noexcept");
      break;
    case 6:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_dependent_noexcept");
      break;
    case 7:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_noexcept_false");
      break;
    case 8:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_noexcept_true");
      break;
    case 9:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_unevaluated");
      break;
    case 10:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_uninstantiated");
      break;
    case 11:
      sub_971800(*((_QWORD *)a1 + 137), " exceptionspec_unparsed");
      break;
    default:
      break;
  }
  if ( v8 )
  {
    si128 = _mm_load_si128((const __m128i *)&v202);
    *(_QWORD *)v210 = a1;
    v75 = _mm_load_si128(&v204);
    v76 = _mm_load_si128(&v206).m128i_i64[1];
    v218 = v209;
    *(__m128i *)&v210[8] = si128;
    v77 = _mm_load_si128(&v203);
    v78 = _mm_load_si128(&v207);
    v213 = v190;
    v211 = v77;
    v79 = _mm_load_si128(&v208);
    v80 = _mm_load_si128((const __m128i *)v210);
    v212 = v75;
    v211.m128i_i32[0] = v6;
    v81 = _mm_load_si128((const __m128i *)&v210[16]);
    v211.m128i_i32[2] = v7;
    v82 = _mm_load_si128((const __m128i *)&v211.m128i_u64[1]);
    v214.m128i_i64[0] = v189.m128i_i64[0];
    v215 = v76;
    v227 = v80;
    v198 = v80;
    v228 = v81;
    v197 = v81;
    v229 = v82;
    v216 = v78;
    v217 = v79;
    v214.m128i_i64[1] = v188.m128_u64[0];
    v212.m128i_i64[1] = v8;
    v196 = v82;
    v83 = _mm_load_si128(&v214);
    v84 = _mm_load_si128((const __m128i *)&v215);
    v85 = _mm_load_si128((const __m128i *)&v216.m128i_u64[1]);
    v86 = _mm_load_si128((const __m128i *)&v217.m128i_u64[1]);
    v230 = _mm_load_si128((const __m128i *)&v212.m128i_u64[1]);
    v195 = v230;
    v231 = v83;
    v194 = v83;
    v232 = v84;
    v193 = v84;
    v233 = v85;
    v192 = v85;
    v234 = v86;
    v191 = v86;
    v87 = j__strlen(&byte_22CD811);
    v88 = _mm_load_si128(&v195);
    v89 = _mm_load_si128(&v198);
    v90 = _mm_load_si128(&v197);
    v91 = _mm_load_si128(&v194);
    v92 = _mm_load_si128(&v196);
    v93 = _mm_load_si128(&v193);
    v235 = v89;
    v94 = _mm_load_si128(&v192);
    v95 = _mm_load_si128(&v191);
    v236 = v90;
    v34 = *((_BYTE *)a1 + 1056) == 0;
    v237 = v92;
    v238 = v88;
    v239 = v91;
    v240 = v93;
    v241 = v94;
    v242 = v95;
    if ( v34 )
    {
      *(_QWORD *)v259 = a1;
      v192.m128i_i64[0] = (__int64)&v268;
      v266 = &v268;
      *(__m128i *)&v259[8] = v89;
      *(__m128i *)&v259[24] = v90;
      v260 = v92;
      v261 = v88;
      v262 = v91;
      v263 = v93;
      v264 = v94;
      v265 = v95;
      v191.m128i_i64[0] = (__int64)v259;
      sub_F009D0(&v266, &byte_22CD811, (__int64)(&byte_22CD811 + v87));
      if ( *((_BYTE *)a1 + 1057) )
      {
        v150 = _mm_loadu_si128((const __m128i *)&v259[8]);
        v151 = _mm_loadu_si128((const __m128i *)&v259[24]);
        v152 = _mm_loadu_si128(&v260);
        v193.m128i_i64[0] = (__int64)a1 + 16;
        *(__m128i *)v280.m256i_i8 = v150;
        v153 = _mm_loadu_si128(&v261);
        v154 = _mm_loadu_si128(&v262);
        v155 = _mm_loadu_si128(&v263);
        *(__m128i *)&v280.m256i_u64[2] = v151;
        v156 = _mm_loadu_si128(&v264);
        v279 = *(const char **)v259;
        v157 = _mm_loadu_si128(&v265);
        v287 = v289;
        v281 = v152;
        v282 = v153;
        v283 = v154;
        v284 = v155;
        v285 = v156;
        v286 = v157;
        if ( v266 == (void *)v192.m128i_i64[0] )
        {
          v289[0] = _mm_loadu_si128(&v268);
        }
        else
        {
          v287 = v266;
          v289[0].m128i_i64[0] = v268.m128i_i64[0];
        }
        v158 = v267;
        v267 = 0;
        v268.m128i_i8[0] = 0;
        v288 = v158;
        *(_QWORD *)&v269[16] = 0;
        v266 = (void *)(v191.m128i_i64[0] + 152);
        v159 = operator new(0xA8u);
        v160 = _mm_loadu_si128((const __m128i *)&v280);
        v161 = _mm_loadu_si128((const __m128i *)&v280.m256i_u64[2]);
        v162 = _mm_loadu_si128(&v281);
        v163 = _mm_loadu_si128(&v282);
        *(_QWORD *)v159 = v279;
        v164 = _mm_loadu_si128(&v283);
        *(__m128i *)(v159 + 8) = v160;
        v165 = _mm_loadu_si128(&v284);
        v166 = _mm_loadu_si128(&v285);
        *(_QWORD *)(v159 + 136) = v159 + 152;
        v167 = _mm_loadu_si128(&v286);
        v168 = (__m128i *)v287;
        *(__m128i *)(v159 + 24) = v161;
        *(__m128i *)(v159 + 40) = v162;
        *(__m128i *)(v159 + 56) = v163;
        *(__m128i *)(v159 + 72) = v164;
        *(__m128i *)(v159 + 88) = v165;
        *(__m128i *)(v159 + 104) = v166;
        *(__m128i *)(v159 + 120) = v167;
        if ( v168 == v289 )
        {
          *(__m128i *)(v159 + 152) = _mm_loadu_si128(v289);
        }
        else
        {
          *(_QWORD *)(v159 + 136) = v168;
          *(_QWORD *)(v159 + 152) = v289[0].m128i_i64[0];
        }
        *(_QWORD *)v269 = v159;
        *(_QWORD *)(v159 + 144) = v288;
        v192.m128i_i64[0] = (__int64)sub_F0DFF0;
        v287 = v289;
        v288 = 0;
        v169 = _mm_loadh_ps((const double *)v192.m128i_i64);
        v289[0].m128i_i8[0] = 0;
        *(__m128 *)&v269[16] = v169;
        v192.m128i_i64[0] = (__int64)v269;
        sub_AA95F0((__int64)a1 + 16, (__m128i *)v269);
        if ( *(_QWORD *)&v269[16] )
          (*(void (__fastcall **)(__int64, __int64, __int64))&v269[16])(v192.m128i_i64[0], v192.m128i_i64[0], 3);
      }
      else
      {
        v96 = *((unsigned int *)a1 + 6);
        v97 = *((_QWORD *)a1 + 2);
        v199 = 0;
        v98 = v97 + 32 * v96 - 32;
        if ( !*(_QWORD *)(v98 + 16) )
          goto LABEL_117;
        (*(void (__fastcall **)(__int64, char *))(v98 + 24))(v98, &v199);
        v99 = _mm_loadu_si128((const __m128i *)&v259[24]);
        v100 = _mm_loadu_si128(&v260);
        v101 = _mm_loadu_si128(&v261);
        v102 = *((_QWORD *)a1 + 2) + 32LL * *((unsigned int *)a1 + 6) - 32;
        *(__m128i *)v280.m256i_i8 = _mm_loadu_si128((const __m128i *)&v259[8]);
        v103 = _mm_loadu_si128(&v262);
        v104 = _mm_loadu_si128(&v263);
        *(__m128i *)&v280.m256i_u64[2] = v99;
        v105 = _mm_loadu_si128(&v264);
        v106 = _mm_loadu_si128(&v265);
        v279 = *(const char **)v259;
        v287 = v289;
        v281 = v100;
        v282 = v101;
        v283 = v103;
        v284 = v104;
        v285 = v105;
        v286 = v106;
        if ( v266 == (void *)v192.m128i_i64[0] )
        {
          v289[0] = _mm_loadu_si128(&v268);
        }
        else
        {
          v287 = v266;
          v289[0].m128i_i64[0] = v268.m128i_i64[0];
        }
        v107 = v267;
        v192.m128i_i64[0] = v102;
        v267 = 0;
        v288 = v107;
        v268.m128i_i8[0] = 0;
        *(_QWORD *)&v269[16] = 0;
        v266 = (void *)(v191.m128i_i64[0] + 152);
        v108 = operator new(0xA8u);
        v109 = (__m128i *)v192.m128i_i64[0];
        v110 = _mm_loadu_si128((const __m128i *)&v280);
        v111 = _mm_loadu_si128((const __m128i *)&v280.m256i_u64[2]);
        v112 = _mm_loadu_si128(&v281);
        *(_QWORD *)v108 = v279;
        v113 = _mm_loadu_si128(&v282);
        *(_QWORD *)(v108 + 136) = v108 + 152;
        v114 = (__m128i *)v287;
        *(__m128i *)(v108 + 8) = v110;
        v115 = _mm_loadu_si128(&v283);
        v116 = _mm_loadu_si128(&v284);
        *(__m128i *)(v108 + 24) = v111;
        v117 = _mm_loadu_si128(&v285);
        v118 = _mm_loadu_si128(&v286);
        *(__m128i *)(v108 + 40) = v112;
        *(__m128i *)(v108 + 56) = v113;
        *(__m128i *)(v108 + 72) = v115;
        *(__m128i *)(v108 + 88) = v116;
        *(__m128i *)(v108 + 104) = v117;
        *(__m128i *)(v108 + 120) = v118;
        if ( v114 == v289 )
        {
          *(__m128i *)(v108 + 152) = _mm_loadu_si128(v289);
        }
        else
        {
          *(_QWORD *)(v108 + 136) = v114;
          *(_QWORD *)(v108 + 152) = v289[0].m128i_i64[0];
        }
        *(_QWORD *)v269 = v108;
        v289[0].m128i_i8[0] = 0;
        v119 = _mm_load_si128((const __m128i *)v269);
        *(_QWORD *)(v108 + 144) = v288;
        v287 = v289;
        v288 = 0;
        *(__m128i *)v269 = _mm_loadu_si128(v109);
        v120 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v109[1].m128i_i64[0];
        *v109 = v119;
        *(_QWORD *)&v269[16] = v120;
        v109[1].m128i_i64[0] = (__int64)sub_F01D20;
        *(_QWORD *)&v269[24] = v109[1].m128i_i64[1];
        v109[1].m128i_i64[1] = (__int64)sub_F0DFF0;
        if ( v120 )
          v120(v269, v269, 3);
      }
      if ( v287 != v289 )
        operator delete(v287);
      v121 = v191.m128i_i64[0];
      v122 = v266;
      *((_BYTE *)a1 + 1057) = 0;
      if ( v122 != (void *)(v121 + 152) )
        operator delete(v122);
    }
    else
    {
      v170 = v229.m128i_i64[1];
      *((_BYTE *)a1 + 1056) = 0;
      v192.m128i_i64[0] = v170;
      v191.m128i_i64[0] = *((_QWORD *)a1 + 137);
      v171 = j__strlen("Exceptions:");
      sub_9717A0(v191.m128i_i64[0], "Exceptions:", v171);
      if ( (_DWORD)v8 )
      {
        v172 = v192.m128i_i64[0];
        v191.m128i_i32[0] = v6;
        v192.m128i_i64[0] = v2;
        v173 = 0;
        v193.m128i_i64[0] = (__int64)&v279;
        for ( i = (__int64 *)v172; ; ++i )
        {
          ++v173;
          sub_F068D0((__int64)a1, *i);
          if ( (_DWORD)v8 == v173 )
            break;
          v175 = *((_QWORD *)a1 + 137);
          v176 = *(_BYTE **)(v175 + 32);
          if ( *(_BYTE **)(v175 + 24) == v176 )
          {
            sub_22581D0(v175, ",", 1);
          }
          else
          {
            *v176 = 44;
            ++*(_QWORD *)(v175 + 32);
          }
        }
        v6 = v191.m128i_i32[0];
        v2 = v192.m128i_i64[0];
        v10 = (const char **)v193.m128i_i64[0];
      }
      v177 = *((unsigned int *)a1 + 6);
      if ( (_DWORD)v177 )
      {
        v178 = *((_QWORD *)a1 + 2);
        v200 = 1;
        v179 = v178 + 32 * v177 - 32;
        if ( !*(_QWORD *)(v179 + 16) )
          goto LABEL_117;
        v191.m128i_i64[0] = v2;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, char *))(v179 + 24))(v179, &v200);
          v181 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
          *((_DWORD *)a1 + 6) = v181;
          v182 = *((_QWORD *)a1 + 2) + 32 * v181;
          v183 = *(void (__fastcall **)(__int64, __int64, __int64))(v182 + 16);
          if ( v183 )
            v183(v182, v182, 3);
          v184 = *((unsigned int *)a1 + 6);
          if ( !(_DWORD)v184 )
            break;
          v180 = *((_QWORD *)a1 + 2);
          v200 = 1;
          v179 = v180 + 32 * v184 - 32;
          if ( !*(_QWORD *)(v179 + 16) )
            goto LABEL_117;
        }
        v2 = v191.m128i_i64[0];
      }
      v185 = *((_BYTE **)a1 + 133);
      *((_QWORD *)a1 + 134) = 0;
      *v185 = 0;
      sub_971800(*(_QWORD *)a1, "\n");
      *((_BYTE *)a1 + 1056) = 1;
    }
  }
  if ( !v190 )
    goto LABEL_35;
  v203.m128i_i32[0] = v6;
  v191.m128i_i64[0] = v189.m128i_i64[0];
  v11 = _mm_load_si128((const __m128i *)&v202);
  v206.m128i_i64[0] = v188.m128_u64[0];
  v12 = _mm_load_si128(&v206);
  v203.m128i_i32[2] = v7;
  v13 = _mm_load_si128(&v207);
  v14 = _mm_loadh_ps((const double *)v191.m128i_i64);
  v15 = _mm_load_si128(&v203);
  v204.m128i_i64[1] = v8;
  v16 = _mm_load_si128(&v208);
  *(__m128i *)&v223[8] = v12;
  v17 = _mm_load_si128(&v204).m128i_u64[0];
  v220 = v15;
  v221 = v17;
  v205 = v14;
  *(__m128i *)&v219[8] = v11;
  v224 = v13;
  v225 = v16;
  v226 = v209;
  v222.m128i_i64[1] = (__int64)v190;
  *(_QWORD *)v223 = v189.m128i_i64[0];
  *(_QWORD *)&v223[8] = v188.m128_u64[0];
  *(_QWORD *)v219 = a1;
  v220.m128i_i32[0] = v6;
  v220.m128i_i32[2] = v7;
  v222.m128i_i64[0] = v8;
  v18 = _mm_load_si128((const __m128i *)&v219[16]);
  v19 = _mm_load_si128((const __m128i *)&v220.m128i_u64[1]);
  v20 = _mm_load_si128(&v222);
  v21 = _mm_load_si128((const __m128i *)v223);
  v243 = _mm_load_si128((const __m128i *)v219);
  v22 = _mm_load_si128((const __m128i *)&v223[16]);
  v198 = v243;
  v23 = _mm_load_si128((const __m128i *)&v224.m128i_u64[1]);
  v24 = _mm_load_si128((const __m128i *)&v225.m128i_u64[1]);
  v244 = v18;
  v197 = v18;
  v245 = v19;
  v196 = v19;
  v246 = v20;
  v195 = v20;
  v247 = v21;
  v194 = v21;
  v248 = v22;
  v193 = v22;
  v249 = v23;
  v192 = v23;
  v250 = v24;
  v191 = v24;
  v25 = j__strlen(&byte_22CD811);
  v26 = _mm_load_si128(&v195);
  v27 = _mm_load_si128(&v198);
  v28 = _mm_load_si128(&v197);
  v29 = _mm_load_si128(&v194);
  v30 = _mm_load_si128(&v196);
  v31 = _mm_load_si128(&v193);
  v251 = v27;
  v32 = _mm_load_si128(&v192);
  v33 = _mm_load_si128(&v191);
  v252 = v28;
  v34 = *((_BYTE *)a1 + 1056) == 0;
  v253 = v30;
  v254 = v26;
  v255 = v29;
  v256 = v31;
  v257 = v32;
  v258 = v33;
  if ( !v34 )
  {
    *((_BYTE *)a1 + 1056) = 0;
    sub_971800(*((_QWORD *)a1 + 137), "NoexceptExpr: ");
    sub_F1FC70((__int64)a1, (unsigned __int64)v190, *(double *)v33.m128i_i64);
LABEL_71:
    v143 = *((unsigned int *)a1 + 6);
    if ( !(_DWORD)v143 )
    {
LABEL_75:
      v149 = *((_BYTE **)a1 + 133);
      *((_QWORD *)a1 + 134) = 0;
      *v149 = 0;
      sub_971800(*(_QWORD *)a1, "\n");
      *((_BYTE *)a1 + 1056) = 1;
      goto LABEL_35;
    }
    while ( 1 )
    {
      v144 = *((_QWORD *)a1 + 2);
      LOBYTE(v279) = 1;
      v145 = v144 + 32 * v143 - 32;
      if ( !*(_QWORD *)(v145 + 16) )
        goto LABEL_117;
      (*(void (__fastcall **)(__int64, const char **))(v145 + 24))(v145, v10);
      v146 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
      *((_DWORD *)a1 + 6) = v146;
      v147 = *((_QWORD *)a1 + 2) + 32 * v146;
      v148 = *(void (__fastcall **)(__int64, __int64, __int64))(v147 + 16);
      if ( !v148 )
        goto LABEL_71;
      v148(v147, v147, 3);
      v143 = *((unsigned int *)a1 + 6);
      if ( !(_DWORD)v143 )
        goto LABEL_75;
    }
  }
  *(_QWORD *)v269 = a1;
  *(__m128i *)&v269[8] = v27;
  *(__m128i *)&v269[24] = v28;
  v270 = v30;
  v271 = v26;
  v272 = v29;
  v273 = v31;
  v274 = v32;
  v275 = v33;
  v276 = &v278;
  sub_F009D0(&v276, &byte_22CD811, (__int64)(&byte_22CD811 + v25));
  if ( *((_BYTE *)a1 + 1057) )
  {
    v123 = _mm_loadu_si128((const __m128i *)&v269[8]);
    v124 = _mm_loadu_si128((const __m128i *)&v269[24]);
    v125 = _mm_loadu_si128(&v270);
    v279 = *(const char **)v269;
    v126 = _mm_loadu_si128(&v274);
    *(__m128i *)v280.m256i_i8 = v123;
    v127 = _mm_loadu_si128(&v275);
    v128 = _mm_loadu_si128(&v271);
    *(__m128i *)&v280.m256i_u64[2] = v124;
    v129 = _mm_loadu_si128(&v272);
    v281 = v125;
    v130 = _mm_loadu_si128(&v273);
    v287 = v10 + 19;
    v282 = v128;
    v283 = v129;
    v284 = v130;
    v285 = v126;
    v286 = v127;
    if ( v276 == &v278 )
    {
      v289[0] = _mm_loadu_si128(&v278);
    }
    else
    {
      v287 = v276;
      v289[0].m128i_i64[0] = v278.m128i_i64[0];
    }
    v131 = v277;
    v277 = 0;
    v278.m128i_i8[0] = 0;
    v288 = v131;
    v276 = &v278;
    *(_QWORD *)&v259[16] = 0;
    v132 = operator new(0xA8u);
    v133 = _mm_loadu_si128((const __m128i *)&v280);
    v134 = _mm_loadu_si128((const __m128i *)&v280.m256i_u64[2]);
    v135 = _mm_loadu_si128(&v281);
    v136 = _mm_loadu_si128(&v282);
    *(_QWORD *)v132 = v279;
    v137 = _mm_loadu_si128(&v283);
    *(__m128i *)(v132 + 8) = v133;
    v138 = _mm_loadu_si128(&v284);
    v139 = _mm_loadu_si128(&v285);
    *(_QWORD *)(v132 + 136) = v132 + 152;
    v140 = _mm_loadu_si128(&v286);
    v141 = (const char **)v287;
    *(__m128i *)(v132 + 24) = v134;
    *(__m128i *)(v132 + 40) = v135;
    *(__m128i *)(v132 + 56) = v136;
    *(__m128i *)(v132 + 72) = v137;
    *(__m128i *)(v132 + 88) = v138;
    *(__m128i *)(v132 + 104) = v139;
    *(__m128i *)(v132 + 120) = v140;
    if ( v141 == v10 + 19 )
    {
      *(__m128i *)(v132 + 152) = _mm_loadu_si128(v289);
    }
    else
    {
      *(_QWORD *)(v132 + 136) = v141;
      *(_QWORD *)(v132 + 152) = v289[0].m128i_i64[0];
    }
    *(_QWORD *)v259 = v132;
    *(_QWORD *)(v132 + 144) = v288;
    v190 = sub_F292A0;
    v287 = v10 + 19;
    v288 = 0;
    v142 = _mm_loadh_ps((const double *)&v190);
    v289[0].m128i_i8[0] = 0;
    *(__m128 *)&v259[16] = v142;
    sub_AA95F0((__int64)a1 + 16, (__m128i *)v259);
    if ( *(_QWORD *)&v259[16] )
      (*(void (__fastcall **)(_BYTE *, _BYTE *, __int64))&v259[16])(v259, v259, 3);
    goto LABEL_31;
  }
  v35 = *((unsigned int *)a1 + 6);
  v36 = *((_QWORD *)a1 + 2);
  v201 = 0;
  v37 = v36 + 32 * v35 - 32;
  if ( !*(_QWORD *)(v37 + 16) )
LABEL_117:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, char *))(v37 + 24))(v37, &v201);
  v38 = _mm_loadu_si128((const __m128i *)&v269[24]);
  v39 = _mm_loadu_si128(&v270);
  v40 = _mm_loadu_si128(&v271);
  v41 = (__m128i *)(*((_QWORD *)a1 + 2) + 32LL * *((unsigned int *)a1 + 6) - 32);
  *(__m128i *)v280.m256i_i8 = _mm_loadu_si128((const __m128i *)&v269[8]);
  v42 = _mm_loadu_si128(&v272);
  v43 = _mm_loadu_si128(&v273);
  *(__m128i *)&v280.m256i_u64[2] = v38;
  v44 = _mm_loadu_si128(&v274);
  v279 = *(const char **)v269;
  v45 = _mm_loadu_si128(&v275);
  v287 = v10 + 19;
  v281 = v39;
  v282 = v40;
  v283 = v42;
  v284 = v43;
  v285 = v44;
  v286 = v45;
  if ( v276 == &v278 )
  {
    v289[0] = _mm_loadu_si128(&v278);
  }
  else
  {
    v287 = v276;
    v289[0].m128i_i64[0] = v278.m128i_i64[0];
  }
  v46 = v277;
  v277 = 0;
  v278.m128i_i8[0] = 0;
  v288 = v46;
  v276 = &v278;
  *(_QWORD *)&v259[16] = 0;
  v47 = operator new(0xA8u);
  v48 = _mm_loadu_si128((const __m128i *)&v280);
  v49 = _mm_loadu_si128((const __m128i *)&v280.m256i_u64[2]);
  v50 = _mm_loadu_si128(&v281);
  v51 = _mm_loadu_si128(&v282);
  *(_QWORD *)v47 = v279;
  v52 = _mm_loadu_si128(&v283);
  *(__m128i *)(v47 + 8) = v48;
  v53 = _mm_loadu_si128(&v284);
  v54 = _mm_loadu_si128(&v285);
  *(_QWORD *)(v47 + 136) = v47 + 152;
  v55 = _mm_loadu_si128(&v286);
  v56 = (const char **)v287;
  *(__m128i *)(v47 + 24) = v49;
  *(__m128i *)(v47 + 40) = v50;
  *(__m128i *)(v47 + 56) = v51;
  *(__m128i *)(v47 + 72) = v52;
  *(__m128i *)(v47 + 88) = v53;
  *(__m128i *)(v47 + 104) = v54;
  *(__m128i *)(v47 + 120) = v55;
  if ( v56 == v10 + 19 )
  {
    *(__m128i *)(v47 + 152) = _mm_loadu_si128(v289);
  }
  else
  {
    *(_QWORD *)(v47 + 136) = v56;
    *(_QWORD *)(v47 + 152) = v289[0].m128i_i64[0];
  }
  *(_QWORD *)v259 = v47;
  v289[0].m128i_i8[0] = 0;
  v57 = _mm_load_si128((const __m128i *)v259);
  *(_QWORD *)(v47 + 144) = v288;
  v287 = v10 + 19;
  v288 = 0;
  *(__m128i *)v259 = _mm_loadu_si128(v41);
  v58 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v41[1].m128i_i64[0];
  v59 = v41[1].m128i_i64[1];
  *v41 = v57;
  *(_QWORD *)&v259[16] = v58;
  v41[1].m128i_i64[0] = (__int64)sub_F01C10;
  *(_QWORD *)&v259[24] = v59;
  v41[1].m128i_i64[1] = (__int64)sub_F292A0;
  if ( v58 )
    v58(v259, v259, 3);
LABEL_31:
  if ( v287 != v10 + 19 )
    operator delete(v287);
  v60 = (__m128i *)v276;
  *((_BYTE *)a1 + 1057) = 0;
  if ( v60 != &v278 )
    operator delete(v60);
LABEL_35:
  if ( v189.m128i_i64[0] )
  {
    v190 = a1;
    v189 = (__m128i)_mm_loadh_ps((const double *)v189.m128i_i64);
    v61 = j__strlen("ExceptionSourceDecl");
    v62 = _mm_load_si128(&v189);
    v279 = "ExceptionSourceDecl";
    *(__m128i *)&v280.m256i_u64[1] = v62;
    v280.m256i_i64[0] = v61;
    v63 = j__strlen(&byte_22CD811);
    v186.m256i_i64[3] = v280.m256i_i64[2];
    *(_OWORD *)&v186.m256i_u64[1] = *(_OWORD *)v280.m256i_i8;
    v186.m256i_i64[0] = (__int64)v279;
    sub_F1B570(
      (__int64)a1,
      (__int64)&byte_22CD811,
      v63,
      v64,
      v65,
      v66,
      *(__int128 *)v186.m256i_i8,
      *(__int128 *)&v186.m256i_u64[2]);
  }
  if ( v188.m128_u64[0] )
  {
    v189.m128i_i64[0] = (__int64)a1;
    v188 = _mm_loadh_ps((const double *)v188.m128_u64);
    v67 = j__strlen("ExceptionSourceTemplate");
    v68 = _mm_load_si128((const __m128i *)&v188);
    v279 = "ExceptionSourceTemplate";
    *(__m128i *)&v280.m256i_u64[1] = v68;
    v280.m256i_i64[0] = v67;
    v69 = j__strlen(&byte_22CD811);
    v187.m256i_i64[3] = v280.m256i_i64[2];
    *(_OWORD *)&v187.m256i_u64[1] = *(_OWORD *)v280.m256i_i8;
    v187.m256i_i64[0] = (__int64)v279;
    sub_F1B570(
      (__int64)a1,
      (__int64)&byte_22CD811,
      v69,
      v70,
      v71,
      v72,
      *(__int128 *)v187.m256i_i8,
      *(__int128 *)&v187.m256i_u64[2]);
  }
  return sub_F0AE70((__int64)a1, v2);
}

