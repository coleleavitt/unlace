__int64 *__fastcall sub_453280(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char **v11; // r14
  __int64 *v12; // r13
  __int64 *v13; // rsi
  char **v14; // r13
  __int64 *v15; // r14
  __int64 *v16; // rsi
  char **v17; // r13
  __int64 *v18; // r14
  __int64 *v19; // rsi
  char **v20; // r13
  __int64 *v21; // r14
  __int64 *v22; // rsi
  char **exception; // r15
  char **v24; // r13
  __int64 *v25; // r14
  __int64 *v26; // rsi
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  int v32; // r8d
  void (__fastcall ***v33)(void *); // rbx
  bool v34; // zf
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rbx
  __int64 (__fastcall *v40)(__int64, void **); // rax
  struct _Unwind_Exception *v41; // rcx
  _Unwind_Exception_Class exception_class; // rdx
  __int64 (__fastcall *v43)(__int64, void **); // rdx
  _QWORD *v44; // r12
  __int64 (__fastcall *v45)(__int64, void **); // rax
  _QWORD *v46; // r15
  __int64 (__fastcall *v47)(__int64, void **); // rdx
  _QWORD *v48; // rax
  __int64 (__fastcall *v49)(__int64, void **); // rcx
  _QWORD *v50; // rdi
  int v51; // edi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _Unwind_Word private_2; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r12
  struct _Unwind_Exception **v60; // r15
  __int64 v61; // rdx
  int v62; // eax
  struct _Unwind_Exception **v63; // rdx
  struct _Unwind_Exception *v64; // rcx
  __m128 *v65; // rsi
  __int64 v66; // rdi
  int v67; // eax
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // rbx
  unsigned int v72; // eax
  unsigned int v73; // edx
  size_t v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rax
  double v80; // xmm4_8
  double v81; // xmm5_8
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __int64 v85; // rdx
  __m128 v86; // xmm0
  unsigned __int64 v87; // xmm2_8
  void *v88; // rdx
  __int64 v89; // rbx
  int v90; // eax
  __int64 *v91; // rcx
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // r8
  unsigned int v95; // edx
  int v96; // edi
  __int64 *v97; // rsi
  __int64 v98; // rdx
  __int64 *v99; // r9
  __int64 *i; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  char *v103; // rbx
  char *v104; // r12
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // r13
  _Unwind_Exception_Class v108; // rsi
  __int64 v109; // rdi
  void (__fastcall ***v110)(void *); // r12
  __int64 v111; // rax
  __int64 v112; // r9
  __int64 *v113; // rcx
  int v114; // edi
  unsigned int v115; // edx
  __int64 *v116; // rsi
  __int64 v117; // rdx
  __int64 *v118; // r8
  __int64 *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  char *v123; // rax
  __m128i *v124; // rdx
  __int64 v125; // rax
  __m128i *v126; // r12
  __int64 v127; // rax
  _Unwind_Word v128; // rsi
  unsigned int v129; // ecx
  _QWORD *v130; // rdi
  __int64 v131; // r14
  unsigned int v132; // eax
  __int64 v133; // r8
  int v134; // eax
  _QWORD *v135; // r8
  __m128i v136; // xmm0
  __int64 v137; // rax
  _Unwind_Word private_1; // rsi
  unsigned int v139; // ecx
  _QWORD *v140; // rdi
  __int64 v141; // r14
  unsigned int v142; // eax
  __int64 v143; // r8
  int v144; // eax
  _QWORD *v145; // r8
  __int64 v146; // rax
  unsigned int v147; // r8d
  size_t v148; // rsi
  unsigned int *v149; // rax
  __int64 v150; // rsi
  unsigned int v151; // r8d
  size_t v152; // rsi
  unsigned int *v153; // rax
  __int64 v154; // rsi
  __int64 v155; // rsi
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rdi
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // r13
  _Unwind_Exception_Class v161; // rsi
  __int64 v162; // rdi
  void (__fastcall ***v163)(_QWORD); // rbx
  _QWORD *v164; // rax
  unsigned int v165; // ecx
  __int64 v166; // rcx
  __int64 v167; // rax
  int v168; // r11d
  __int64 v169; // rsi
  __m128i *v170; // rdx
  __int64 v171; // rdi
  const __m128i *v172; // r9
  const __m128i *v173; // rax
  __m128i v174; // xmm0
  __int64 v175; // r8
  __int64 v176; // r8
  __int64 v177; // r8
  __int64 v178; // r8
  __int64 v179; // rax
  __int64 v180; // r14
  __int64 v181; // r12
  unsigned __int64 v182; // rax
  unsigned __int64 v183; // r13
  _Unwind_Exception_Class v184; // rsi
  __int64 v185; // rdi
  __int64 v186; // rsi
  __int64 v187; // rdi
  __int64 v188; // rsi
  __int64 v189; // rdi
  unsigned __int64 v190; // rax
  unsigned __int64 v191; // r13
  _Unwind_Exception_Class v192; // rsi
  __int64 v193; // rdi
  _QWORD *v194; // rax
  _QWORD *v195; // rax
  struct _Unwind_Exception *v196; // r12
  _Unwind_Exception_Class v197; // rsi
  __int64 v198; // rdi
  __int64 v199; // rdi
  __int64 v200; // rsi
  __int64 v201; // rdi
  __int64 *v202; // r12
  __int64 v203; // rsi
  __int64 v204; // rdi
  __int64 v205; // rax
  struct _Unwind_Exception *v206; // r14
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // rax
  __int64 v212; // r12
  __int64 v213; // rax
  __int64 v214; // r14
  __int64 v215; // rsi
  __int64 v216; // rdi
  __int64 v217; // rdx
  unsigned __int64 v218; // r12
  struct _Unwind_Exception **v219; // r14
  struct _Unwind_Exception *v220; // rsi
  __int64 v221; // rax
  char *v222; // r13
  char *v223; // r15
  __int64 *v224; // r12
  __int64 *v225; // r14
  __int64 v226; // rsi
  __int64 v227; // rdi
  __int64 v228; // rsi
  __int64 v229; // rdi
  __int64 v230; // rsi
  __int64 v231; // rdi
  __int64 *v232; // r12
  __int64 *v233; // r14
  __int64 v234; // rsi
  __int64 v235; // rdi
  __int64 v236; // rax
  _QWORD *v237; // r13
  _QWORD *v238; // r15
  __int64 *v239; // r12
  __int64 *v240; // r14
  __int64 v241; // rsi
  __int64 v242; // rdi
  __int64 v243; // rsi
  __int64 v244; // rdi
  __int64 v245; // rsi
  __int64 v246; // rdi
  __int64 *v247; // r12
  __int64 *v248; // r14
  __int64 v249; // rsi
  __int64 v250; // rdi
  __int64 v252; // rax
  __int64 v253; // r12
  _QWORD *v254; // rax
  unsigned int v255; // edx
  __int64 v256; // rcx
  int v257; // edx
  _QWORD *v258; // rcx
  __int64 v259; // rcx
  __int64 v260; // rdx
  unsigned int v261; // edi
  unsigned int v262; // eax
  __m128i *v263; // r12
  int v264; // r11d
  __int64 v265; // r9
  __m128i *v266; // r10
  int v267; // esi
  __int64 v268; // r11
  __m128i *v269; // rdi
  __m128i *v270; // rax
  __m128i *v271; // r8
  __int64 v272; // rdx
  __int64 v273; // rax
  unsigned int v274; // ecx
  __int64 v275; // rax
  int v276; // ecx
  __int64 v277; // rdx
  __int64 *v278; // r12
  __int64 *v279; // r14
  __int64 v280; // rsi
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdi
  _Unwind_Word v282; // rsi
  _Unwind_Word v283; // rdi
  _Unwind_Exception_Class v284; // rsi
  _Unwind_Exception_Cleanup_Fn v285; // rdi
  __int64 *v286; // r14
  __int64 v287; // rsi
  _Unwind_Word v288; // rdi
  __int64 v289; // rax
  __m128i *v290; // rdx
  __m128i *v291; // rax
  int v292; // edi
  const __m128i *v293; // r14
  __m128i *v294; // r8
  __int64 v295; // rdx
  __m128i *v296; // rsi
  int v297; // edi
  __m128i *v298; // rdx
  __m128i v299; // xmm0
  int v300; // eax
  _QWORD *v301; // rax
  int v302; // [rsp+0h] [rbp-150h]
  void *v303; // [rsp+8h] [rbp-148h]
  __int64 v304; // [rsp+10h] [rbp-140h]
  __int64 v305; // [rsp+10h] [rbp-140h]
  int v306; // [rsp+18h] [rbp-138h]
  __int64 v307; // [rsp+18h] [rbp-138h]
  int v308; // [rsp+18h] [rbp-138h]
  int v309; // [rsp+20h] [rbp-130h]
  __int64 v310; // [rsp+20h] [rbp-130h]
  int v311; // [rsp+28h] [rbp-128h]
  __int64 v312; // [rsp+28h] [rbp-128h]
  size_t v313; // [rsp+28h] [rbp-128h]
  __int64 v314; // [rsp+30h] [rbp-120h]
  int v315; // [rsp+30h] [rbp-120h]
  void *v316; // [rsp+38h] [rbp-118h]
  __int64 v317; // [rsp+40h] [rbp-110h]
  _QWORD *ptr; // [rsp+48h] [rbp-108h]
  __int64 v319; // [rsp+50h] [rbp-100h]
  int v320; // [rsp+58h] [rbp-F8h]
  char *v321; // [rsp+58h] [rbp-F8h]
  unsigned int v322; // [rsp+58h] [rbp-F8h]
  unsigned int v323; // [rsp+58h] [rbp-F8h]
  int v324; // [rsp+58h] [rbp-F8h]
  _DWORD *v325; // [rsp+58h] [rbp-F8h]
  __int64 v326; // [rsp+58h] [rbp-F8h]
  __m128i *v327; // [rsp+58h] [rbp-F8h]
  __int64 v328; // [rsp+68h] [rbp-E8h]
  __int64 v329; // [rsp+68h] [rbp-E8h]
  __int64 v330; // [rsp+68h] [rbp-E8h]
  unsigned int v331; // [rsp+68h] [rbp-E8h]
  unsigned int v332; // [rsp+68h] [rbp-E8h]
  __m128i *v333; // [rsp+68h] [rbp-E8h]
  __m128i *v334; // [rsp+68h] [rbp-E8h]
  unsigned int v335; // [rsp+68h] [rbp-E8h]
  unsigned int v336; // [rsp+68h] [rbp-E8h]
  size_t v337; // [rsp+68h] [rbp-E8h]
  __int64 v338; // [rsp+68h] [rbp-E8h]
  __int64 v339; // [rsp+70h] [rbp-E0h] BYREF
  __int64 *v340; // [rsp+78h] [rbp-D8h]
  unsigned __int64 v341; // [rsp+80h] [rbp-D0h]
  char *v342; // [rsp+88h] [rbp-C8h]
  __m128i *v343; // [rsp+90h] [rbp-C0h]
  struct _Unwind_Exception *v344; // [rsp+98h] [rbp-B8h] BYREF
  int v345; // [rsp+A0h] [rbp-B0h]
  void *v346; // [rsp+A8h] [rbp-A8h] BYREF
  void *v347; // [rsp+B0h] [rbp-A0h] BYREF
  struct _Unwind_Exception **v348; // [rsp+B8h] [rbp-98h]
  __m128i v349; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v350; // [rsp+D0h] [rbp-80h]
  __m128i v351; // [rsp+D8h] [rbp-78h] BYREF
  __m128i v352; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v353; // [rsp+F8h] [rbp-58h]
  int v354; // [rsp+100h] [rbp-50h]
  __int64 v355; // [rsp+108h] [rbp-48h]
  void *v356; // [rsp+110h] [rbp-40h]

  v28 = a2;
  v29 = *(_QWORD *)(a2 + 8);
  v340 = a1;
  v30 = *(_DWORD *)(v29 + 712);
  v319 = v29;
  *(_DWORD *)(v29 + 712) = 1;
  HIDWORD(v317) = v30;
  ptr = sub_3743C0((__int64 *)&qword_18D6CD0);
  v31 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *, bool, __int64, _QWORD, const int *))(*ptr + 16LL))(
          ptr,
          *(_QWORD *)(a2 + 8),
          &qword_1C7F4C8,
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 712LL) != 0,
          1,
          0,
          &qword_18D6CD0);
  v328 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 48);
  v33 = *(void (__fastcall ****)(void *))(a2 + 64);
  if ( v33 )
  {
    v34 = (*((_DWORD *)v33 + 12))-- == 1;
    if ( v34 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
  }
  v316 = *(void **)(a2 + 8);
  v347 = v316;
  v35 = a3[3];
  *(_QWORD *)(a2 + 64) = v328;
  v36 = *(_DWORD *)(v35 + 32);
  if ( v36 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v328 + 192LL))(v328);
    v37 = a3[27];
    v38 = 0x7FFFFFFF8LL;
    if ( v37 )
      v38 = 8LL * (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
    sub_E5EBF0(*(_QWORD *)(a2 + 64), *(_QWORD *)(*(_QWORD *)(v37 + v38) + 8LL));
    if ( (unsigned int)sub_E60CB0(*(std::ios_base **)(a2 + 64), 0, 0) != 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      v343 = &v349;
      sub_24ABB0(v349.m128i_i64, "spacer: could not validate first proof step");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v343);
      sub_233E40((__int64)v343);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = *(_QWORD **)(a2 + 64);
    v346 = nullptr;
    v40 = *(__int64 (__fastcall **)(__int64, void **))(*v39 + 32LL);
    if ( (char *)v40 != (char *)sub_41C670 )
    {
      v40((__int64)v39, &v346);
      goto LABEL_28;
    }
    v41 = (struct _Unwind_Exception *)v39[12];
    exception_class = v41->exception_class;
    v344 = v41;
    v43 = *(__int64 (__fastcall **)(__int64, void **))(exception_class + 32);
    if ( v43 != v40 )
    {
      v43((__int64)v41, &v346);
      goto LABEL_25;
    }
    v44 = (_QWORD *)v41[3].exception_class;
    v45 = *(__int64 (__fastcall **)(__int64, void **))(*v44 + 32LL);
    if ( v45 != v43 )
    {
      v45(v41[3].exception_class, &v346);
      goto LABEL_22;
    }
    v46 = (_QWORD *)v44[12];
    v47 = *(__int64 (__fastcall **)(__int64, void **))(*v46 + 32LL);
    if ( v47 == v45 )
    {
      v48 = (_QWORD *)v46[12];
      v49 = *(__int64 (__fastcall **)(__int64, void **))(*v48 + 32LL);
      if ( v49 == v47 )
      {
        v50 = (_QWORD *)v48[12];
        v343 = (__m128i *)v46[12];
        sub_39A840(v50, &v346);
      }
      else
      {
        v343 = (__m128i *)v46[12];
        v49((__int64)v48, &v346);
      }
      v51 = (int)v346;
      if ( !v346 )
        goto LABEL_304;
      v52 = v343[3].m128i_i64[1];
      if ( !v52 )
      {
LABEL_20:
        v53 = v46[7];
        if ( !v53 )
        {
LABEL_23:
          v54 = v44[7];
          if ( !v54 )
          {
LABEL_26:
            private_2 = v344[1].private_2;
            if ( !private_2 )
              goto LABEL_29;
            (*(void (__fastcall **)(_Unwind_Word, void **))(*(_QWORD *)private_2 + 32LL))(v344[1].private_2, &v346);
LABEL_28:
            v51 = (int)v346;
            if ( v346 )
            {
LABEL_29:
              v56 = v39[7];
              if ( v56 )
              {
                (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v56 + 32LL))(v39[7], &v346);
                v51 = (int)v346;
              }
              goto LABEL_31;
            }
LABEL_304:
            v51 = 0;
LABEL_31:
            sub_137A410(
              v51,
              v302,
              v303,
              v304,
              v306,
              v309,
              v311,
              v314,
              v316,
              v317,
              (int)ptr,
              v319,
              v320,
              (int)&v346,
              v328,
              v339,
              (char)v340,
              v341,
              (int)v342,
              (int)v343,
              (int)v344,
              v345,
              (int)v346,
              (int)v347,
              (int)v348,
              v349.m128i_i32[0],
              v349.m128i_i32[2],
              v350,
              v351.m128i_i32[0],
              v351.m128i_i32[2],
              v352.m128i_i32[0],
              v352.m128i_i8[8],
              v353,
              v354,
              v355,
              v356);
            LOBYTE(v315) = sub_13608A0((char *)v346 + 128);
            v321 = (char *)v346 + 128;
            sub_1360B80((char *)v346 + 128, 1);
            v57 = a3[6];
            if ( v57 )
            {
              v58 = *(unsigned int *)(v57 - 4);
              if ( (_DWORD)v58 )
              {
                v59 = 0;
                v60 = nullptr;
                v339 = 8 * v58;
                v343 = &v349;
                while ( 1 )
                {
                  v65 = *(__m128 **)(v57 + v59);
                  v66 = *(_QWORD *)(v28 + 16) + 8LL;
                  v342 = *(char **)(v28 + 8);
                  v67 = sub_439010(v66, v65, 1, 0);
                  v70 = sub_15DC610(
                          (int)v342,
                          v67,
                          0,
                          0,
                          v68,
                          v69,
                          v302,
                          (int)v303,
                          v304,
                          v306,
                          v309,
                          v311,
                          v315,
                          (int)v316,
                          v317,
                          ptr);
                  v71 = v70;
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  sub_1374250(v343, v346, v70);
                  v344 = (struct _Unwind_Exception *)v349.m128i_i64[0];
                  if ( v349.m128i_i64[0] )
                    ++*(_DWORD *)(v349.m128i_i64[0] + 8);
                  if ( v60 )
                  {
                    v72 = *((_DWORD *)v60 - 1);
                    if ( v72 == *((_DWORD *)v60 - 2) )
                    {
                      v73 = (3 * v72 + 1) >> 1;
                      v74 = 8 * v73 + 8;
                      if ( 8 * v72 + 8 >= (unsigned int)v74 || v72 >= v73 )
                      {
                        v24 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v343->m128i_i64, "Overflow encountered when expanding vector");
                        v25 = (__int64 *)v343;
                        v26 = (__int64 *)v343;
                        *v24 = (char *)off_1C63128;
                        sub_2333C0(v24 + 1, v26);
                        sub_233E40((__int64)v25);
                        __cxa_throw(
                          v24,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      LODWORD(v341) = (3 * v72 + 1) >> 1;
                      v75 = sub_186B300(v60 - 1, v74);
                      v60 = (struct _Unwind_Exception **)(v75 + 8);
                      *(_DWORD *)v75 = v341;
                      LODWORD(v75) = *(_DWORD *)(v75 + 4);
                      v63 = &v60[(unsigned int)v75];
                      v62 = v75 + 1;
                    }
                    else
                    {
                      v61 = v72;
                      v62 = v72 + 1;
                      v63 = &v60[v61];
                    }
                  }
                  else
                  {
                    v164 = (_QWORD *)sub_186B270(0x18u);
                    v63 = (struct _Unwind_Exception **)(v164 + 1);
                    *v164 = 2;
                    v62 = 1;
                    v60 = v63;
                  }
                  v64 = v344;
                  *v63 = v344;
                  *((_DWORD *)v60 - 1) = v62;
                  if ( v64 )
                  {
                    LODWORD(v341) = v64->exception_cleanup;
                    v34 = (_DWORD)v341 == 1;
                    LODWORD(v64->exception_cleanup) = v341 - 1;
                    if ( v34 )
                      sub_15D7BC0(v342, v64);
                  }
                  if ( v71 && (v34 = *(_DWORD *)(v71 + 8) == 1, --*(_DWORD *)(v71 + 8), v34) )
                  {
                    v59 += 8;
                    sub_15D7BC0(v342, v71);
                    if ( v339 == v59 )
                      goto LABEL_158;
                  }
                  else
                  {
                    v59 += 8;
                    if ( v339 == v59 )
                      goto LABEL_158;
                  }
                  v57 = a3[6];
                }
              }
            }
            v60 = nullptr;
            v343 = &v349;
LABEL_158:
            sub_1360B80(v321, (unsigned __int8)v315);
            v163 = (void (__fastcall ***)(_QWORD))v346;
            if ( v346 )
            {
              v34 = (*((_DWORD *)v346 + 4))-- == 1;
              if ( v34 )
              {
                (**v163)(v163);
                sub_186B220(v163);
              }
            }
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v329 + 200LL))(v329, 1);
            goto LABEL_52;
          }
          (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v54 + 32LL))(v44[7], &v346);
LABEL_25:
          v51 = (int)v346;
          if ( !v346 )
            goto LABEL_304;
          goto LABEL_26;
        }
        (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v53 + 32LL))(v46[7], &v346);
LABEL_22:
        v51 = (int)v346;
        if ( !v346 )
          goto LABEL_304;
        goto LABEL_23;
      }
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v52 + 32LL))(v52, &v346);
    }
    else
    {
      v47(v44[12], &v346);
    }
    v51 = (int)v346;
    if ( !v346 )
      goto LABEL_304;
    goto LABEL_20;
  }
  v60 = nullptr;
  v343 = &v349;
LABEL_52:
  v76 = a3[27];
  v77 = 0x7FFFFFFF8LL;
  if ( v76 )
    v77 = 8LL * (unsigned int)(*(_DWORD *)(v76 - 4) - 1);
  v78 = *(_QWORD *)(v76 + v77);
  v348 = v60;
  sub_455180(
    (_DWORD)v343,
    v78,
    (_DWORD)a3,
    (unsigned int)&v347,
    v32,
    v36,
    v302,
    (_DWORD)v303,
    v304,
    v306,
    v309,
    v311,
    (__int64)&v347);
  v79 = sub_186B270(0xB8u);
  v82 = v350;
  v83 = _mm_load_si128(&v349);
  *(_DWORD *)v79 = 2;
  v84 = _mm_loadu_si128(&v351);
  *(_DWORD *)(v79 + 4) = 1;
  *(_QWORD *)(v79 + 24) = v82;
  v85 = v353;
  *(__m128i *)(v79 + 8) = v83;
  v86 = (__m128)_mm_loadu_si128(&v352);
  *(_QWORD *)(v79 + 64) = v85;
  LODWORD(v85) = v354;
  v87 = _mm_movehl_ps(a6, v86).m128_u64[0];
  *(__m128i *)(v79 + 32) = v84;
  *(_DWORD *)(v79 + 72) = v85;
  v341 = v87;
  *(_QWORD *)(v79 + 80) = v355;
  v88 = v356;
  *(__m128 *)(v79 + 48) = v86;
  *(_QWORD *)(v79 + 88) = v88;
  v310 = *(_QWORD *)(v28 + 8);
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  v342 = nullptr;
  v89 = v79 + 8;
  while ( 1 )
  {
    v90 = *(_DWORD *)(v89 - 4);
    if ( !v90 )
      break;
    v91 = *(__int64 **)(v28 + 40);
    v92 = v89 + 88LL * (unsigned int)(v90 - 1);
    v93 = *(unsigned int *)(v28 + 48);
    v94 = *(_QWORD *)(v92 + 48);
    v95 = v93 - 1;
    v93 *= 16;
    v96 = *(_DWORD *)(v94 + 12);
    v97 = (__int64 *)((char *)v91 + v93);
    v98 = 16LL * (v96 & v95);
    v99 = &v91[(unsigned __int64)v98 / 8];
    if ( v98 != v93 )
    {
      for ( i = &v91[(unsigned __int64)v98 / 8]; v97 != i; i += 2 )
      {
        v101 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v101 + 12) == v96 && v94 == v101 )
          {
LABEL_199:
            v196 = *(struct _Unwind_Exception **)(v92 + 80);
            if ( !v196 )
              goto LABEL_209;
            if ( v196 >= (struct _Unwind_Exception *)((char *)v196 + 8 * HIDWORD(v196[-1].private_2)) )
              goto LABEL_207;
            v344 = (struct _Unwind_Exception *)((char *)v196 + 8 * HIDWORD(v196[-1].private_2));
            do
            {
              while ( 1 )
              {
                v197 = v196->exception_class;
                if ( v196->exception_class )
                {
                  v198 = *(_QWORD *)(v92 + 72);
                  v34 = (*(_DWORD *)(v197 + 8))-- == 1;
                  if ( v34 )
                    break;
                }
                v196 = (struct _Unwind_Exception *)((char *)v196 + 8);
                if ( v196 >= v344 )
                  goto LABEL_206;
              }
              sub_15D7BC0(v198, v197);
              v196 = (struct _Unwind_Exception *)((char *)v196 + 8);
            }
            while ( v196 < v344 );
LABEL_206:
            v196 = *(struct _Unwind_Exception **)(v92 + 80);
            if ( v196 )
LABEL_207:
              sub_186B220(&v196[-1].private_2);
            v94 = *(_QWORD *)(v92 + 48);
            if ( v94 )
            {
LABEL_209:
              v199 = *(_QWORD *)(v92 + 56);
              v34 = (*(_DWORD *)(v94 + 8))-- == 1;
              if ( v34 )
                sub_15D7BC0(v199, v94);
            }
            v200 = *(_QWORD *)(v92 + 32);
            if ( v200 )
            {
              v201 = *(_QWORD *)(v92 + 40);
              v34 = (*(_DWORD *)(v200 + 8))-- == 1;
              if ( v34 )
                sub_15D7BC0(v201, v200);
            }
            v202 = *(__int64 **)(v92 + 24);
            if ( !v202 )
              goto LABEL_223;
            if ( v202 >= &v202[*((unsigned int *)v202 - 1)] )
              goto LABEL_222;
            v344 = (struct _Unwind_Exception *)&v202[*((unsigned int *)v202 - 1)];
            while ( 1 )
            {
              v203 = *v202;
              if ( *v202
                && (v204 = *(_QWORD *)(v92 + 16), v34 = *(_DWORD *)(v203 + 8) == 1, --*(_DWORD *)(v203 + 8), v34) )
              {
                sub_15D7BC0(v204, v203);
                if ( ++v202 >= (__int64 *)v344 )
                {
LABEL_221:
                  v202 = *(__int64 **)(v92 + 24);
                  if ( v202 )
                    goto LABEL_222;
                  goto LABEL_223;
                }
              }
              else if ( ++v202 >= (__int64 *)v344 )
              {
                goto LABEL_221;
              }
            }
          }
        }
        else if ( !v101 )
        {
          goto LABEL_65;
        }
      }
    }
    for ( ; v99 != v91; v91 += 2 )
    {
      v146 = *v91;
      if ( (unsigned __int64)*v91 > 1 )
      {
        if ( *(_DWORD *)(v146 + 12) == v96 && v94 == v146 )
          goto LABEL_199;
      }
      else if ( !v146 )
      {
        break;
      }
    }
LABEL_65:
    if ( !*(_DWORD *)(v92 + 64) )
    {
      if ( v342 )
      {
        v102 = *((unsigned int *)v342 - 1);
        if ( (_DWORD)v102 )
        {
          v330 = v28;
          v339 = v89;
          v103 = v342;
          v104 = &v342[88 * v102];
          do
          {
            v105 = *((_QWORD *)v103 + 10);
            v106 = v105;
            if ( v105 )
            {
              v107 = v105 + 8LL * *(unsigned int *)(v105 - 4);
              if ( v105 >= v107 )
                goto LABEL_143;
              v344 = *((struct _Unwind_Exception **)v103 + 10);
              do
              {
                v108 = v344->exception_class;
                if ( v344->exception_class )
                {
                  v109 = *((_QWORD *)v103 + 9);
                  v34 = (*(_DWORD *)(v108 + 8))-- == 1;
                  if ( v34 )
                    sub_15D7BC0(v109, v108);
                }
                v344 = (struct _Unwind_Exception *)((char *)v344 + 8);
              }
              while ( (unsigned __int64)v344 < v107 );
              v106 = *((_QWORD *)v103 + 10);
              if ( v106 )
LABEL_143:
                sub_186B220((void *)(v106 - 8));
            }
            v155 = *((_QWORD *)v103 + 6);
            if ( v155 )
            {
              v156 = *((_QWORD *)v103 + 7);
              v34 = (*(_DWORD *)(v155 + 8))-- == 1;
              if ( v34 )
                sub_15D7BC0(v156, v155);
            }
            v157 = *((_QWORD *)v103 + 4);
            if ( v157 )
            {
              v158 = *((_QWORD *)v103 + 5);
              v34 = (*(_DWORD *)(v157 + 8))-- == 1;
              if ( v34 )
                sub_15D7BC0(v158, v157);
            }
            v159 = *((_QWORD *)v103 + 3);
            v122 = v159;
            if ( v159 )
            {
              v160 = v159 + 8LL * *(unsigned int *)(v159 - 4);
              if ( v159 >= v160 )
                goto LABEL_96;
              v344 = *((struct _Unwind_Exception **)v103 + 3);
              do
              {
                v161 = v344->exception_class;
                if ( v344->exception_class )
                {
                  v162 = *((_QWORD *)v103 + 2);
                  v34 = (*(_DWORD *)(v161 + 8))-- == 1;
                  if ( v34 )
                    sub_15D7BC0(v162, v161);
                }
                v344 = (struct _Unwind_Exception *)((char *)v344 + 8);
              }
              while ( (unsigned __int64)v344 < v160 );
              v122 = *((_QWORD *)v103 + 3);
              if ( v122 )
LABEL_96:
                sub_186B220((void *)(v122 - 8));
            }
            v103 += 88;
          }
          while ( v103 != v104 );
          v89 = v339;
          v28 = v330;
        }
        *((_DWORD *)v342 - 1) = 0;
      }
      v346 = v342;
      sub_451ED0(
        (_QWORD *)v28,
        (_QWORD *)v92,
        &v346,
        *(double *)v86.m128_u64,
        *(double *)v84.m128i_i64,
        *(double *)&v87,
        a7,
        v80,
        v81,
        a10,
        a11);
      v123 = (char *)v346;
      *(_DWORD *)(v92 + 64) = 1;
      v342 = v123;
      if ( v123 )
      {
        LODWORD(v339) = 0;
        while ( (unsigned int)v339 < *((_DWORD *)v342 - 1) )
        {
          v124 = (__m128i *)&v342[88 * (unsigned int)v339];
          v125 = *(unsigned int *)(v89 - 4);
          if ( (_DWORD)v125 == *(_DWORD *)(v89 - 8) )
          {
            LODWORD(v344) = (unsigned int)(3 * v125 + 1) >> 1;
            v165 = 88 * (_DWORD)v344 + 8;
            if ( 88 * (int)v125 + 8 >= v165 || (unsigned int)v125 >= (unsigned int)(3 * v125 + 1) >> 1 )
            {
              v20 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v343->m128i_i64, "Overflow encountered when expanding vector");
              v21 = (__int64 *)v343;
              v22 = (__int64 *)v343;
              *v20 = (char *)off_1C63128;
              sub_2333C0(v20 + 1, v22);
              sub_233E40((__int64)v21);
              __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v333 = (__m128i *)&v342[88 * (unsigned int)v339];
            v166 = sub_186B270(v165);
            v167 = *(unsigned int *)(v89 - 4);
            v168 = (int)v344;
            v169 = v166 + 8;
            v170 = v333;
            *(_DWORD *)(v166 + 4) = v167;
            v171 = v166 + 8;
            v172 = (const __m128i *)(v89 + 88 * v167);
            v173 = (const __m128i *)v89;
            if ( v172 != (const __m128i *)v89 )
            {
              do
              {
                v174 = _mm_loadu_si128(v173);
                v173 = (const __m128i *)((char *)v173 + 88);
                v171 += 88;
                *(__m128i *)(v171 - 88) = v174;
                *(_QWORD *)(v171 - 72) = v173[-5].m128i_i64[1];
                v175 = v173[-4].m128i_i64[0];
                v173[-4].m128i_i64[0] = 0;
                *(_QWORD *)(v171 - 64) = v175;
                *(_QWORD *)(v171 - 48) = v173[-3].m128i_i64[0];
                v176 = v173[-4].m128i_i64[1];
                v173[-4].m128i_i64[1] = 0;
                *(_QWORD *)(v171 - 56) = v176;
                *(_QWORD *)(v171 - 32) = v173[-2].m128i_i64[0];
                v177 = v173[-3].m128i_i64[1];
                v173[-3].m128i_i64[1] = 0;
                *(_QWORD *)(v171 - 40) = v177;
                *(_DWORD *)(v171 - 24) = v173[-2].m128i_i32[2];
                *(_QWORD *)(v171 - 16) = v173[-1].m128i_i64[0];
                v178 = v173[-1].m128i_i64[1];
                v173[-1].m128i_i64[1] = 0;
                *(_QWORD *)(v171 - 8) = v178;
              }
              while ( v172 != v173 );
              LODWORD(v344) = v168;
            }
            v179 = *(unsigned int *)(v89 - 4);
            if ( (_DWORD)v179 )
            {
              v180 = v166 + 8;
              v312 = v166;
              v181 = v89 + 88 * v179;
              v307 = v89;
              v305 = v28;
              v324 = (int)v344;
              do
              {
                v182 = *(_QWORD *)(v89 + 80);
                if ( v182 )
                {
                  v183 = v182 + 8LL * *(unsigned int *)(v182 - 4);
                  if ( v182 >= v183 )
                    goto LABEL_178;
                  v344 = *(struct _Unwind_Exception **)(v89 + 80);
                  do
                  {
                    v184 = v344->exception_class;
                    if ( v344->exception_class )
                    {
                      v185 = *(_QWORD *)(v89 + 72);
                      v34 = (*(_DWORD *)(v184 + 8))-- == 1;
                      if ( v34 )
                        sub_15D7BC0(v185, v184);
                    }
                    v344 = (struct _Unwind_Exception *)((char *)v344 + 8);
                  }
                  while ( (unsigned __int64)v344 < v183 );
                  v182 = *(_QWORD *)(v89 + 80);
                  if ( v182 )
LABEL_178:
                    sub_186B220((void *)(v182 - 8));
                }
                v186 = *(_QWORD *)(v89 + 48);
                if ( v186 )
                {
                  v187 = *(_QWORD *)(v89 + 56);
                  v34 = (*(_DWORD *)(v186 + 8))-- == 1;
                  if ( v34 )
                    sub_15D7BC0(v187, v186);
                }
                v188 = *(_QWORD *)(v89 + 32);
                if ( v188 )
                {
                  v189 = *(_QWORD *)(v89 + 40);
                  v34 = (*(_DWORD *)(v188 + 8))-- == 1;
                  if ( v34 )
                    sub_15D7BC0(v189, v188);
                }
                v190 = *(_QWORD *)(v89 + 24);
                if ( v190 )
                {
                  v191 = v190 + 8LL * *(unsigned int *)(v190 - 4);
                  if ( v190 >= v191 )
                    goto LABEL_193;
                  v344 = *(struct _Unwind_Exception **)(v89 + 24);
                  do
                  {
                    v192 = v344->exception_class;
                    if ( v344->exception_class )
                    {
                      v193 = *(_QWORD *)(v89 + 16);
                      v34 = (*(_DWORD *)(v192 + 8))-- == 1;
                      if ( v34 )
                        sub_15D7BC0(v193, v192);
                    }
                    v344 = (struct _Unwind_Exception *)((char *)v344 + 8);
                  }
                  while ( (unsigned __int64)v344 < v191 );
                  v190 = *(_QWORD *)(v89 + 24);
                  if ( v190 )
LABEL_193:
                    sub_186B220((void *)(v190 - 8));
                }
                v89 += 88;
              }
              while ( v89 != v181 );
              v170 = v333;
              v169 = v180;
              v166 = v312;
              v89 = v307;
              LODWORD(v344) = v324;
              v28 = v305;
            }
            v325 = (_DWORD *)v166;
            v334 = v170;
            sub_186B220((void *)(v89 - 8));
            v124 = v334;
            *v325 = (_DWORD)v344;
            v125 = (unsigned int)v325[1];
            v89 = v169;
          }
          v126 = (__m128i *)(v89 + 88 * v125);
          *v126 = _mm_loadu_si128(v124);
          v127 = v124[1].m128i_i64[0];
          v126[1].m128i_i64[1] = 0;
          v128 = v124[1].m128i_u64[1];
          v126[1].m128i_i64[0] = v127;
          if ( v128 )
          {
            v129 = 0;
            v130 = nullptr;
            do
            {
              if ( v129 >= *(_DWORD *)(v128 - 4) )
                break;
              v131 = *(_QWORD *)(v128 + 8LL * v129);
              if ( v131 )
                ++*(_DWORD *)(v131 + 8);
              if ( v130 )
              {
                v132 = *((_DWORD *)v130 - 1);
                if ( v132 == *((_DWORD *)v130 - 2) )
                {
                  v147 = (3 * v132 + 1) >> 1;
                  v148 = 8 * v147 + 8;
                  if ( 8 * v132 + 8 >= (unsigned int)v148 || v132 >= v147 )
                  {
                    v14 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v343->m128i_i64, "Overflow encountered when expanding vector");
                    v15 = (__int64 *)v343;
                    v16 = (__int64 *)v343;
                    *v14 = (char *)off_1C63128;
                    sub_2333C0(v14 + 1, v16);
                    sub_233E40((__int64)v15);
                    __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v322 = (3 * v132 + 1) >> 1;
                  v331 = v129;
                  v344 = (struct _Unwind_Exception *)v124;
                  v149 = (unsigned int *)sub_186B300(v130 - 1, v148);
                  v150 = v149[1];
                  v130 = v149 + 2;
                  v124 = (__m128i *)v344;
                  v126[1].m128i_i64[1] = (__int64)(v149 + 2);
                  *v149 = v322;
                  LODWORD(v149) = v150;
                  v135 = &v130[v150];
                  v129 = v331;
                  v128 = v124[1].m128i_u64[1];
                  v134 = (_DWORD)v149 + 1;
                }
                else
                {
                  v133 = v132;
                  v134 = v132 + 1;
                  v135 = &v130[v133];
                }
              }
              else
              {
                v335 = v129;
                v344 = (struct _Unwind_Exception *)v124;
                v194 = (_QWORD *)sub_186B270(0x18u);
                v130 = v194 + 1;
                v129 = v335;
                v126[1].m128i_i64[1] = (__int64)(v194 + 1);
                v135 = v194 + 1;
                *v194 = 2;
                v124 = (__m128i *)v344;
                v134 = 1;
                v128 = v344->private_2;
              }
              *v135 = v131;
              ++v129;
              *((_DWORD *)v130 - 1) = v134;
            }
            while ( v128 );
          }
          v136 = _mm_loadu_si128(v124 + 2);
          v126[2] = v136;
          if ( v136.m128i_i64[0] )
            ++*(_DWORD *)(v136.m128i_i64[0] + 8);
          v86 = (__m128)_mm_loadu_si128(v124 + 3);
          v126[3] = (__m128i)v86;
          if ( v86.m128_u64[0] )
            ++*(_DWORD *)(v86.m128_u64[0] + 8);
          v126[4].m128i_i32[0] = v124[4].m128i_i32[0];
          v137 = v124[4].m128i_i64[1];
          v126[5].m128i_i64[0] = 0;
          private_1 = v124[5].m128i_u64[0];
          v126[4].m128i_i64[1] = v137;
          if ( private_1 )
          {
            v139 = 0;
            v140 = nullptr;
            do
            {
              if ( v139 >= *(_DWORD *)(private_1 - 4) )
                break;
              v141 = *(_QWORD *)(private_1 + 8LL * v139);
              if ( v141 )
                ++*(_DWORD *)(v141 + 8);
              if ( v140 )
              {
                v142 = *((_DWORD *)v140 - 1);
                if ( v142 == *((_DWORD *)v140 - 2) )
                {
                  v151 = (3 * v142 + 1) >> 1;
                  v152 = 8 * v151 + 8;
                  if ( 8 * v142 + 8 >= (unsigned int)v152 || v142 >= v151 )
                  {
                    v11 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v343->m128i_i64, "Overflow encountered when expanding vector");
                    v12 = (__int64 *)v343;
                    v13 = (__int64 *)v343;
                    *v11 = (char *)off_1C63128;
                    sub_2333C0(v11 + 1, v13);
                    sub_233E40((__int64)v12);
                    __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v323 = (3 * v142 + 1) >> 1;
                  v332 = v139;
                  v344 = (struct _Unwind_Exception *)v124;
                  v153 = (unsigned int *)sub_186B300(v140 - 1, v152);
                  v154 = v153[1];
                  v140 = v153 + 2;
                  v124 = (__m128i *)v344;
                  v126[5].m128i_i64[0] = (__int64)(v153 + 2);
                  *v153 = v323;
                  LODWORD(v153) = v154;
                  v145 = &v140[v154];
                  v139 = v332;
                  private_1 = v124[5].m128i_u64[0];
                  v144 = (_DWORD)v153 + 1;
                }
                else
                {
                  v143 = v142;
                  v144 = v142 + 1;
                  v145 = &v140[v143];
                }
              }
              else
              {
                v336 = v139;
                v344 = (struct _Unwind_Exception *)v124;
                v195 = (_QWORD *)sub_186B270(0x18u);
                v140 = v195 + 1;
                v139 = v336;
                v126[5].m128i_i64[0] = (__int64)(v195 + 1);
                v145 = v195 + 1;
                *v195 = 2;
                v124 = (__m128i *)v344;
                v144 = 1;
                private_1 = v344[2].private_1;
              }
              *v145 = v141;
              ++v139;
              *((_DWORD *)v140 - 1) = v144;
            }
            while ( private_1 );
          }
          ++*(_DWORD *)(v89 - 4);
          LODWORD(v339) = v339 + 1;
        }
      }
      continue;
    }
    v252 = sub_452A90((_QWORD *)v28, (__int64 *)v92);
    v253 = *(_QWORD *)(v92 + 48);
    v339 = v252;
    if ( v253 )
      ++*(_DWORD *)(v253 + 8);
    v254 = *(_QWORD **)(v28 + 32);
    if ( v254 )
    {
      v255 = *((_DWORD *)v254 - 1);
      if ( v255 == *((_DWORD *)v254 - 2) )
      {
        LODWORD(v344) = (3 * v255 + 1) >> 1;
        v274 = 8 * (_DWORD)v344 + 8;
        if ( 8 * v255 + 8 >= v274 || v255 >= (3 * v255 + 1) >> 1 )
        {
          v17 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v343->m128i_i64, "Overflow encountered when expanding vector");
          v18 = (__int64 *)v343;
          v19 = (__int64 *)v343;
          *v17 = (char *)off_1C63128;
          sub_2333C0(v17 + 1, v19);
          sub_233E40((__int64)v18);
          __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v275 = sub_186B300(v254 - 1, v274);
        v276 = (int)v344;
        v277 = v275;
        v254 = (_QWORD *)(v275 + 8);
        *(_QWORD *)(v28 + 32) = v254;
        *(_DWORD *)v277 = v276;
        LODWORD(v277) = *(_DWORD *)(v277 + 4);
        v258 = &v254[(unsigned int)v277];
        v257 = v277 + 1;
      }
      else
      {
        v256 = v255;
        v257 = v255 + 1;
        v258 = &v254[v256];
      }
    }
    else
    {
      v301 = (_QWORD *)sub_186B270(0x18u);
      *v301 = 2;
      v254 = v301 + 1;
      v257 = 1;
      *(_QWORD *)(v28 + 32) = v254;
      v258 = v254;
    }
    *v258 = v253;
    v259 = *(_QWORD *)(v92 + 48);
    *((_DWORD *)v254 - 1) = v257;
    v260 = *(unsigned int *)(v28 + 48);
    v261 = 2 * v260;
    v262 = 4 * (*(_DWORD *)(v28 + 52) + *(_DWORD *)(v28 + 56));
    LODWORD(v344) = 2 * v260;
    if ( 3 * (int)v260 < v262 )
    {
      v326 = v259;
      v337 = 16LL * v261;
      v289 = sub_186B270(v337);
      v265 = v337;
      v263 = (__m128i *)v289;
      v290 = (__m128i *)v289;
      v259 = v326;
      v291 = (__m128i *)(v337 + v289);
      if ( v261 )
      {
        if ( (((_BYTE)v291 - (_BYTE)v263) & 0x10) == 0 || (v290 = v263 + 1, *v263 = 0, &v263[1] != v291) )
        {
          v292 = (int)v344;
          do
          {
            *v290 = 0;
            v290 += 2;
            v290[-1] = 0;
          }
          while ( v290 != v291 );
          LODWORD(v344) = v292;
        }
      }
      v293 = *(const __m128i **)(v28 + 40);
      v266 = v291;
      v294 = (__m128i *)&v293[*(unsigned int *)(v28 + 48)];
      v264 = (_DWORD)v344 - 1;
      if ( v293 != v294 )
      {
        do
        {
          if ( v293->m128i_i64[0] > 1uLL )
          {
            v295 = 16LL * (*(_DWORD *)(v293->m128i_i64[0] + 12) & (unsigned int)v264);
            v296 = &v263[(unsigned __int64)v295 / 0x10];
            if ( v337 == v295 )
            {
LABEL_377:
              if ( v263 == v296 )
              {
LABEL_389:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v297 = (int)v344;
              v298 = v263;
              while ( v298->m128i_i64[0] )
              {
                if ( v296 == ++v298 )
                  goto LABEL_389;
              }
            }
            else
            {
              v297 = (int)v344;
              v298 = &v263[(unsigned __int64)v295 / 0x10];
              while ( v298->m128i_i64[0] )
              {
                if ( v291 == ++v298 )
                  goto LABEL_377;
              }
            }
            v299 = _mm_loadu_si128(v293);
            LODWORD(v344) = v297;
            *v298 = v299;
          }
          ++v293;
        }
        while ( v294 != v293 );
        v294 = *(__m128i **)(v28 + 40);
      }
      if ( v294 )
      {
        v308 = v264;
        v313 = v337;
        v327 = v291;
        v338 = v259;
        sub_186B220(v294);
        v264 = v308;
        v265 = v313;
        v266 = v327;
        v259 = v338;
      }
      v300 = (int)v344;
      *(_QWORD *)(v28 + 40) = v263;
      *(_DWORD *)(v28 + 56) = 0;
      *(_DWORD *)(v28 + 48) = v300;
    }
    else
    {
      v263 = *(__m128i **)(v28 + 40);
      v264 = v260 - 1;
      v265 = 16 * v260;
      v266 = &v263[v260];
    }
    v267 = *(_DWORD *)(v259 + 12);
    v86 = _mm_loadh_ps((const double *)&v339);
    v268 = 16LL * (v267 & (unsigned int)v264);
    v269 = &v263[(unsigned __int64)v268 / 0x10];
    if ( v265 == v268 )
    {
      v271 = nullptr;
LABEL_323:
      if ( v263 == v269 )
      {
LABEL_337:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v273 = v263->m128i_i64[0];
        if ( v263->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v273 + 12) == v267 && v259 == v273 )
          {
            *v263 = (__m128i)v86;
            goto LABEL_338;
          }
        }
        else
        {
          if ( !v273 )
          {
            if ( v271 )
              goto LABEL_387;
            v271 = v263;
            goto LABEL_388;
          }
          v271 = v263;
        }
        if ( v269 == ++v263 )
          goto LABEL_337;
      }
    }
    v270 = &v263[(unsigned __int64)v268 / 0x10];
    v271 = nullptr;
    while ( 1 )
    {
      v272 = v270->m128i_i64[0];
      if ( v270->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v272 + 12) == v267 && v259 == v272 )
      {
        *v270 = (__m128i)v86;
        goto LABEL_338;
      }
LABEL_316:
      if ( v266 == ++v270 )
        goto LABEL_323;
    }
    if ( v272 )
    {
      v271 = v270;
      goto LABEL_316;
    }
    if ( v271 )
LABEL_387:
      --*(_DWORD *)(v28 + 56);
    else
      v271 = v270;
LABEL_388:
    *v271 = (__m128i)v86;
    ++*(_DWORD *)(v28 + 52);
LABEL_338:
    v278 = *(__int64 **)(v89 + 88LL * (unsigned int)(*(_DWORD *)(v89 - 4) - 1) + 80);
    v344 = (struct _Unwind_Exception *)(v89 + 88LL * (unsigned int)(*(_DWORD *)(v89 - 4) - 1));
    if ( v278 )
    {
      v279 = &v278[*((unsigned int *)v278 - 1)];
      if ( v278 >= v279 )
        goto LABEL_346;
      do
      {
        while ( 1 )
        {
          v280 = *v278;
          if ( *v278 )
          {
            exception_cleanup = v344[2].exception_cleanup;
            v34 = (*(_DWORD *)(v280 + 8))-- == 1;
            if ( v34 )
              break;
          }
          if ( ++v278 >= v279 )
            goto LABEL_345;
        }
        sub_15D7BC0(exception_cleanup, v280);
        ++v278;
      }
      while ( v278 < v279 );
LABEL_345:
      v278 = (__int64 *)v344[2].private_1;
      if ( v278 )
LABEL_346:
        sub_186B220(v278 - 1);
    }
    v282 = v344[1].private_1;
    if ( v282 )
    {
      v283 = v344[1].private_2;
      v34 = (*(_DWORD *)(v282 + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(v283, v282);
    }
    v284 = v344[1].exception_class;
    if ( v284 )
    {
      v285 = v344[1].exception_cleanup;
      v34 = (*(_DWORD *)(v284 + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(v285, v284);
    }
    v202 = (__int64 *)v344->private_2;
    if ( v202 )
    {
      v286 = &v202[*((unsigned int *)v202 - 1)];
      if ( v202 >= v286 )
        goto LABEL_222;
      do
      {
        while ( 1 )
        {
          v287 = *v202;
          if ( *v202 )
          {
            v288 = v344->private_1;
            v34 = (*(_DWORD *)(v287 + 8))-- == 1;
            if ( v34 )
              break;
          }
          if ( ++v202 >= v286 )
            goto LABEL_360;
        }
        sub_15D7BC0(v288, v287);
        ++v202;
      }
      while ( v202 < v286 );
LABEL_360:
      v202 = (__int64 *)v344->private_2;
      if ( v202 )
LABEL_222:
        sub_186B220(v202 - 1);
    }
LABEL_223:
    --*(_DWORD *)(v89 - 4);
  }
  v110 = *(void (__fastcall ****)(void *))(v28 + 64);
  if ( v110 )
  {
    v34 = (*((_DWORD *)v110 + 12))-- == 1;
    if ( v34 )
    {
      (**v110)(v110);
      sub_186B220(v110);
    }
  }
  v111 = *(unsigned int *)(v28 + 48);
  v112 = v341;
  *(_QWORD *)(v28 + 64) = 0;
  v113 = *(__int64 **)(v28 + 40);
  v114 = *(_DWORD *)(v112 + 12);
  v115 = v111 - 1;
  v111 *= 16;
  v116 = (__int64 *)((char *)v113 + v111);
  v117 = 16LL * (v114 & v115);
  v118 = &v113[(unsigned __int64)v117 / 8];
  if ( v117 == v111 )
  {
LABEL_87:
    while ( v118 != v113 )
    {
      v121 = *v113;
      if ( (unsigned __int64)*v113 > 1 )
      {
        if ( *(_DWORD *)(v121 + 12) == v114 && v121 == v341 )
        {
          v119 = v113;
          goto LABEL_225;
        }
      }
      else if ( !v121 )
      {
        break;
      }
      v113 += 2;
    }
LABEL_402:
    BUG();
  }
  v119 = &v113[(unsigned __int64)v117 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v120 = *v119;
      if ( (unsigned __int64)*v119 > 1 )
        break;
      if ( !v120 )
        goto LABEL_402;
      v119 += 2;
      if ( v116 == v119 )
        goto LABEL_87;
    }
    if ( *(_DWORD *)(v120 + 12) == v114 && v120 == v112 )
      break;
    v119 += 2;
    if ( v116 == v119 )
      goto LABEL_87;
  }
LABEL_225:
  v205 = v119[1];
  v344 = *(struct _Unwind_Exception **)(v28 + 8);
  *(__m128 *)v340 = _mm_loadh_ps((const double *)&v344);
  if ( v205 )
    ++*(_DWORD *)(v205 + 8);
  v206 = v344;
  v207 = sub_15E1B70((int)v344);
  v211 = sub_15DE060(v206, v207, v208, v209, v210);
  v212 = v211;
  if ( v211 )
    ++*(_DWORD *)(v211 + 8);
  v213 = sub_15DE0E0(*(_QWORD *)(v28 + 8), *v340, v211);
  v214 = v213;
  if ( v213 )
    ++*(_DWORD *)(v213 + 8);
  v215 = *v340;
  if ( *v340 )
  {
    v216 = v340[1];
    v34 = (*(_DWORD *)(v215 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v216, v215);
  }
  *v340 = v214;
  if ( v212 )
  {
    v34 = (*(_DWORD *)(v212 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v344, v212);
  }
  v217 = v341;
  LODWORD(v344) = *(_DWORD *)(v341 + 8);
  v34 = (_DWORD)v344 == 1;
  *(_DWORD *)(v341 + 8) = (_DWORD)v344 - 1;
  if ( v34 )
    sub_15D7BC0(v310, v217);
  if ( v60 )
  {
    v218 = (unsigned __int64)&v60[*((unsigned int *)v60 - 1)];
    if ( (unsigned __int64)v60 < v218 )
    {
      v219 = v60;
      do
      {
        while ( 1 )
        {
          v220 = *v219;
          if ( *v219 )
          {
            v34 = LODWORD(v220->exception_cleanup)-- == 1;
            if ( v34 )
              break;
          }
          if ( (unsigned __int64)++v219 >= v218 )
            goto LABEL_246;
        }
        sub_15D7BC0(v316, v220);
        ++v219;
      }
      while ( (unsigned __int64)v219 < v218 );
    }
LABEL_246:
    sub_186B220(v60 - 1);
  }
  if ( v342 )
  {
    v221 = *((unsigned int *)v342 - 1);
    if ( (_DWORD)v221 )
    {
      v222 = v342;
      v223 = &v342[88 * v221];
      do
      {
        v224 = *((__int64 **)v222 + 10);
        if ( v224 )
        {
          v225 = &v224[*((unsigned int *)v224 - 1)];
          if ( v224 >= v225 )
            goto LABEL_258;
          do
          {
            while ( 1 )
            {
              v226 = *v224;
              if ( *v224 )
              {
                v227 = *((_QWORD *)v222 + 9);
                v34 = (*(_DWORD *)(v226 + 8))-- == 1;
                if ( v34 )
                  break;
              }
              if ( ++v224 >= v225 )
                goto LABEL_257;
            }
            sub_15D7BC0(v227, v226);
            ++v224;
          }
          while ( v224 < v225 );
LABEL_257:
          v224 = *((__int64 **)v222 + 10);
          if ( v224 )
LABEL_258:
            sub_186B220(v224 - 1);
        }
        v228 = *((_QWORD *)v222 + 6);
        if ( v228 )
        {
          v229 = *((_QWORD *)v222 + 7);
          v34 = (*(_DWORD *)(v228 + 8))-- == 1;
          if ( v34 )
            sub_15D7BC0(v229, v228);
        }
        v230 = *((_QWORD *)v222 + 4);
        if ( v230 )
        {
          v231 = *((_QWORD *)v222 + 5);
          v34 = (*(_DWORD *)(v230 + 8))-- == 1;
          if ( v34 )
            sub_15D7BC0(v231, v230);
        }
        v232 = *((__int64 **)v222 + 3);
        if ( v232 )
        {
          v233 = &v232[*((unsigned int *)v232 - 1)];
          if ( v232 >= v233 )
            goto LABEL_273;
          do
          {
            while ( 1 )
            {
              v234 = *v232;
              if ( *v232 )
              {
                v235 = *((_QWORD *)v222 + 2);
                v34 = (*(_DWORD *)(v234 + 8))-- == 1;
                if ( v34 )
                  break;
              }
              if ( ++v232 >= v233 )
                goto LABEL_272;
            }
            sub_15D7BC0(v235, v234);
            ++v232;
          }
          while ( v232 < v233 );
LABEL_272:
          v232 = *((__int64 **)v222 + 3);
          if ( v232 )
LABEL_273:
            sub_186B220(v232 - 1);
        }
        v222 += 88;
      }
      while ( v222 != v223 );
    }
    sub_186B220(v342 - 8);
  }
  v236 = *(unsigned int *)(v89 - 4);
  if ( (_DWORD)v236 )
  {
    v237 = (_QWORD *)v89;
    v238 = (_QWORD *)(v89 + 88 * v236);
    do
    {
      v239 = (__int64 *)v237[10];
      if ( v239 )
      {
        v240 = &v239[*((unsigned int *)v239 - 1)];
        if ( v239 >= v240 )
          goto LABEL_286;
        do
        {
          while ( 1 )
          {
            v241 = *v239;
            if ( *v239 )
            {
              v242 = v237[9];
              v34 = (*(_DWORD *)(v241 + 8))-- == 1;
              if ( v34 )
                break;
            }
            if ( ++v239 >= v240 )
              goto LABEL_285;
          }
          sub_15D7BC0(v242, v241);
          ++v239;
        }
        while ( v239 < v240 );
LABEL_285:
        v239 = (__int64 *)v237[10];
        if ( v239 )
LABEL_286:
          sub_186B220(v239 - 1);
      }
      v243 = v237[6];
      if ( v243 )
      {
        v244 = v237[7];
        v34 = (*(_DWORD *)(v243 + 8))-- == 1;
        if ( v34 )
          sub_15D7BC0(v244, v243);
      }
      v245 = v237[4];
      if ( v245 )
      {
        v246 = v237[5];
        v34 = (*(_DWORD *)(v245 + 8))-- == 1;
        if ( v34 )
          sub_15D7BC0(v246, v245);
      }
      v247 = (__int64 *)v237[3];
      if ( v247 )
      {
        v248 = &v247[*((unsigned int *)v247 - 1)];
        if ( v247 >= v248 )
          goto LABEL_301;
        do
        {
          while ( 1 )
          {
            v249 = *v247;
            if ( *v247 )
            {
              v250 = v237[2];
              v34 = (*(_DWORD *)(v249 + 8))-- == 1;
              if ( v34 )
                break;
            }
            if ( ++v247 >= v248 )
              goto LABEL_300;
          }
          sub_15D7BC0(v250, v249);
          ++v247;
        }
        while ( v247 < v248 );
LABEL_300:
        v247 = (__int64 *)v237[3];
        if ( v247 )
LABEL_301:
          sub_186B220(v247 - 1);
      }
      v237 += 11;
    }
    while ( v238 != v237 );
  }
  sub_186B220((void *)(v89 - 8));
  (*(void (__fastcall **)(_QWORD *))*ptr)(ptr);
  sub_186B220(ptr);
  *(_DWORD *)(v319 + 712) = HIDWORD(v317);
  return v340;
}

