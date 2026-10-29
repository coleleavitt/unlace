__int64 __fastcall sub_130D0B0(__int64 a1, void (__fastcall *a2)(__int64, _QWORD *), __int64 a3, int a4)
{
  int v4; // ebp
  _BYTE *v5; // rsi
  __m128i *v6; // r14
  __int64 v7; // rdx
  __m128i *v8; // r12
  void *v9; // r13
  char v10; // al
  char v11; // bl
  __int64 *m128i_i64; // r12
  __int64 (__fastcall *v13)(__int64); // r13
  char v14; // al
  char v15; // al
  __int64 *v16; // r12
  __int64 (__fastcall *v17)(__int64); // r13
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rax
  char v20; // bl
  void *v21; // rax
  int v22; // ecx
  __int64 *v23; // r12
  __int64 (__fastcall *v24)(__int64); // r13
  char v25; // al
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rax
  char v28; // bl
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 v30; // rax
  char v31; // bl
  __m128i *v32; // r15
  __m128i *v33; // rbx
  size_t v34; // r12
  char v35; // al
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 v37; // rax
  char v38; // bl
  __int64 *v39; // r12
  __int64 (__fastcall *v40)(__int64); // r13
  char v41; // al
  __int64 (__fastcall *v42)(__int64); // rax
  __int64 v43; // rax
  char v44; // bl
  __int64 *v45; // r12
  __int64 (__fastcall *v46)(__int64); // r13
  void *v47; // rax
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 v49; // rax
  char v50; // bl
  char v51; // al
  __int64 *v52; // r12
  __int64 (__fastcall *v53)(__int64); // r13
  __int64 *v54; // r12
  __int64 (__fastcall *v55)(__int64); // r13
  char v56; // al
  __int64 *v57; // r12
  __int64 (__fastcall *v58)(__int64); // r13
  void *v59; // rax
  char v60; // al
  void *v61; // rax
  int v62; // edx
  _DWORD *v63; // rax
  char v64; // cl
  void (__fastcall *v65)(const __m128i **, const __m128i *, int); // rax
  __m128 v66; // xmm0
  __int64 v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rbp
  __int64 (__fastcall *v72)(__int64); // rcx
  __int64 (__fastcall *v73)(__int64); // rbx
  __int64 v74; // rcx
  __int64 v75; // r8
  int *v76; // r14
  int v77; // esi
  const __m128i *v78; // rdx
  size_t v79; // r9
  const char *v80; // r14
  size_t v81; // rax
  const __m128i *v82; // r10
  const char *v83; // r14
  const char *v84; // r9
  size_t v85; // rax
  void (__fastcall *v86)(__int64, __m128i *); // r14
  _QWORD *v87; // rbx
  _QWORD *v88; // r13
  __int64 *v89; // r12
  _QWORD *v90; // r14
  __int64 *v91; // r13
  const __m128i *v92; // rbp
  __int64 v93; // r15
  __int64 v94; // rbx
  const __m128i *v95; // r13
  char *v96; // rbx
  char *i; // rbp
  const __m128i *v98; // r13
  char *v99; // rbx
  char *j; // rbp
  __int64 v101; // rbp
  char *v102; // r13
  size_t v103; // rax
  unsigned __int8 v104; // bp
  const char *v105; // rax
  char v106; // al
  char *v107; // rbp
  const char *v108; // rbx
  size_t v109; // rcx
  __int64 v110; // rax
  const char *v111; // rdi
  unsigned int v112; // eax
  char *v113; // rbp
  char *v114; // rbx
  const __m128i *v115; // r13
  void *v116; // rax
  void *v117; // rax
  __m128i v118; // xmm7
  __m128i v119; // xmm0
  __m128i v120; // xmm6
  __m128i v121; // xmm0
  __int64 v122; // rcx
  __int64 v123; // rbp
  __m128i v124; // xmm7
  __m128i v125; // xmm0
  void *v126; // rax
  void *v127; // rax
  void *v128; // rax
  void *v129; // rax
  void *v130; // rax
  void *v131; // rax
  void *v132; // rax
  void *v133; // rax
  void *v134; // rax
  void *v135; // rax
  void *v136; // rax
  void *v137; // rax
  void *v138; // rax
  void *v139; // rax
  void *v140; // rax
  void *v141; // rax
  void *v142; // rax
  void *v143; // rax
  void *v144; // rax
  void *v145; // rax
  void *v146; // rax
  int v147; // eax
  __int32 v148; // edx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned __int64 **v158; // r13
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  size_t v162; // rax
  char *v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  const __m128i *v170; // rbx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 *v174; // r12
  __int64 v175; // rbx
  __int64 v176; // rbp
  void *v177; // rdx
  void *v178; // rax
  __int64 result; // rax
  __m128i *v180; // [rsp+0h] [rbp-2E8h] BYREF
  __m128i *v181; // [rsp+8h] [rbp-2E0h]
  const __m128i *v182; // [rsp+10h] [rbp-2D8h]
  void **v183; // [rsp+18h] [rbp-2D0h]
  __int64 (__fastcall *v184)(__int64); // [rsp+20h] [rbp-2C8h]
  size_t v185; // [rsp+28h] [rbp-2C0h]
  const __m128i *v186; // [rsp+30h] [rbp-2B8h]
  const __m128i *v187; // [rsp+38h] [rbp-2B0h]
  const __m128i *v188; // [rsp+40h] [rbp-2A8h]
  void **v189; // [rsp+48h] [rbp-2A0h]
  unsigned __int64 **v190; // [rsp+50h] [rbp-298h]
  __int64 v191; // [rsp+58h] [rbp-290h]
  __int64 v192; // [rsp+60h] [rbp-288h]
  __int64 v193; // [rsp+68h] [rbp-280h]
  int v194; // [rsp+74h] [rbp-274h]
  __m128i *v195; // [rsp+78h] [rbp-270h]
  void (__fastcall *v196)(__int64, _QWORD *); // [rsp+80h] [rbp-268h] BYREF
  __m128i *v197; // [rsp+88h] [rbp-260h]
  int v198; // [rsp+98h] [rbp-250h] BYREF
  char v199; // [rsp+9Ch] [rbp-24Ch]
  __m128i v200; // [rsp+A0h] [rbp-248h] BYREF
  __m128 v201; // [rsp+B0h] [rbp-238h]
  void *v202[2]; // [rsp+C0h] [rbp-228h] BYREF
  __int64 v203; // [rsp+D0h] [rbp-218h] BYREF
  void *v204[2]; // [rsp+E0h] [rbp-208h] BYREF
  _BYTE v205[16]; // [rsp+F0h] [rbp-1F8h] BYREF
  __m128i v206[2]; // [rsp+100h] [rbp-1E8h] BYREF
  __int16 v207; // [rsp+120h] [rbp-1C8h]
  __m128i v208[2]; // [rsp+130h] [rbp-1B8h] BYREF
  __int16 v209; // [rsp+150h] [rbp-198h]
  __m128i v210[3]; // [rsp+160h] [rbp-188h] BYREF
  __m128i v211[2]; // [rsp+190h] [rbp-158h] BYREF
  __int16 v212; // [rsp+1B0h] [rbp-138h]
  void *v213; // [rsp+1C0h] [rbp-128h] BYREF
  size_t v214; // [rsp+1C8h] [rbp-120h]
  __m128i v215[2]; // [rsp+1D0h] [rbp-118h] BYREF
  const __m128i *v216; // [rsp+1F0h] [rbp-F8h] BYREF
  size_t v217; // [rsp+1F8h] [rbp-F0h]
  __m128i si128; // [rsp+200h] [rbp-E8h]
  __int16 v219; // [rsp+210h] [rbp-D8h]
  void *v220[2]; // [rsp+220h] [rbp-C8h] BYREF
  __m128i v221; // [rsp+230h] [rbp-B8h] BYREF
  __int16 v222; // [rsp+240h] [rbp-A8h]
  void *v223; // [rsp+250h] [rbp-98h] BYREF
  __int64 (__fastcall *v224)(__int64); // [rsp+258h] [rbp-90h]
  __m128i v225; // [rsp+260h] [rbp-88h] BYREF
  __int16 v226; // [rsp+270h] [rbp-78h]
  void *v227[2]; // [rsp+280h] [rbp-68h] BYREF
  void **v228; // [rsp+290h] [rbp-58h] BYREF
  __int64 (__fastcall *v229)(__int64); // [rsp+298h] [rbp-50h]
  __int16 v230; // [rsp+2A0h] [rbp-48h]

  v196 = a2;
  v5 = *(_BYTE **)(a1 + 248);
  v6 = (__m128i *)v220;
  v197 = (__m128i *)a3;
  v7 = *(_QWORD *)(a1 + 256);
  v191 = a1;
  v194 = a4;
  v220[0] = &v221;
  sub_12FAA20(v220, v5, (__int64)&v5[v7]);
  v8 = (__m128i *)v220[0];
  v181 = (__m128i *)&v223;
  v223 = &v225;
  if ( v220[0] == &v221 )
  {
    v8 = &v225;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v9 = v220[1];
  v220[0] = &v221;
  v224 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v221.m128i_i8[0] = 0;
  v190 = (unsigned __int64 **)v227;
  v227[0] = &v228;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v227) )
  {
    sub_12FAA20(v190, v8, (__int64)v9 + (_QWORD)v8);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 57638, (__int64)v190);
    if ( v227[0] != &v228 )
      operator delete(v227[0]);
    v8 = (__m128i *)v223;
  }
  if ( v8 != &v181[1] )
    operator delete(v8);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  v10 = *(_BYTE *)(v191 + 3);
  if ( (v10 & 0x10) != 0 )
  {
    v227[1] = (void *)j__strlen("-emit-symbol-graph");
    v230 = 261;
    v227[0] = (void *)"-emit-symbol-graph";
    v196((__int64)v197, v190);
    v10 = *(_BYTE *)(v191 + 3);
  }
  if ( (v10 & 0x20) != 0 )
  {
    v146 = (void *)j__strlen("--emit-extension-symbol-graphs");
    v230 = 261;
    v227[0] = (void *)"--emit-extension-symbol-graphs";
    v227[1] = v146;
    v196((__int64)v197, v190);
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 280));
  *(_OWORD *)v227 = 0;
  v223 = v220[0];
  v228 = nullptr;
  v224 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v225.m128i_i64[0] = v221.m128i_i64[0];
  v182 = (const __m128i *)&v216;
  v221.m128i_i64[0] = 0;
  sub_12FD200(v190, (__int64)&v216, (__int64)&v216);
  v11 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v11 )
    sub_130CE90((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 6444, v181->m128i_i64);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 304), *(_QWORD *)(v191 + 304) + *(_QWORD *)(v191 + 312));
  m128i_i64 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    m128i_i64 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v13 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v13;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, m128i_i64, (__int64)v13 + (_QWORD)m128i_i64);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 59540, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    m128i_i64 = (__int64 *)v223;
  }
  if ( m128i_i64 != (__int64 *)&v181[1] )
    operator delete(m128i_i64);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  v14 = *(_BYTE *)(v191 + 3);
  if ( v14 < 0 )
  {
    v145 = (void *)j__strlen("--pretty-sgf");
    v230 = 261;
    v227[1] = v145;
    v227[0] = (void *)"--pretty-sgf";
    v196((__int64)v197, v190);
    v14 = *(_BYTE *)(v191 + 3);
  }
  if ( (v14 & 0x40) != 0 )
  {
    v144 = (void *)j__strlen("--emit-sgf-symbol-labels-for-testing");
    v230 = 261;
    v227[0] = (void *)"--emit-sgf-symbol-labels-for-testing";
    v227[1] = v144;
    v196((__int64)v197, v190);
  }
  v15 = *(_BYTE *)(v191 + 4);
  if ( (v15 & 4) != 0 )
  {
    v227[1] = (void *)j__strlen("-clangir-disable-passes");
    v230 = 261;
    v227[0] = (void *)"-clangir-disable-passes";
    v196((__int64)v197, v190);
    v15 = *(_BYTE *)(v191 + 4);
  }
  if ( (v15 & 8) != 0 )
  {
    v143 = (void *)j__strlen("-clangir-disable-verifier");
    v230 = 261;
    v227[1] = v143;
    v227[0] = (void *)"-clangir-disable-verifier";
    v196((__int64)v197, v190);
    v15 = *(_BYTE *)(v191 + 4);
  }
  if ( (v15 & 2) != 0 )
  {
    LOBYTE(v227[0]) = 1;
    sub_12FD380((__int64)v190, v196, (__int64)v197, 8609, 1);
    if ( (*(_BYTE *)(v191 + 4) & 2) != 0 )
    {
      LOBYTE(v227[0]) = 0;
      sub_12FD320((__int64)v190, v196, (__int64)v197, 19721, 1);
    }
  }
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 808), *(_QWORD *)(v191 + 808) + *(_QWORD *)(v191 + 816));
  v16 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v16 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v17 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v17;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v16, (__int64)v17 + (_QWORD)v16);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 17275, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v16 = (__int64 *)v223;
  }
  if ( v16 != (__int64 *)&v181[1] )
    operator delete(v16);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  if ( (*(_BYTE *)(v191 + 4) & 1) != 0 )
  {
    v142 = (void *)j__strlen("-fmodules-reduced-bmi");
    v230 = 261;
    v227[0] = (void *)"-fmodules-reduced-bmi";
    v227[1] = v142;
    v196((__int64)v197, v190);
  }
  if ( (*(_BYTE *)(v191 + 2) & 0x40) != 0 )
  {
    v141 = (void *)j__strlen("-fmodules-embed-all-files");
    v230 = 261;
    v227[0] = (void *)"-fmodules-embed-all-files";
    v227[1] = v141;
    v196((__int64)v197, v190);
  }
  if ( (*(_BYTE *)(v191 + 3) & 2) != 0 )
  {
    v140 = (void *)j__strlen("-fsystem-module");
    v230 = 261;
    v227[0] = (void *)"-fsystem-module";
    v227[1] = v140;
    v196((__int64)v197, v190);
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 456));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v18 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v18;
  v19 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v19;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v20 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v20 )
    sub_12FDB00((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 17227, v181);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  if ( (*(_BYTE *)(v191 + 3) & 1) == 0 )
  {
    v21 = (void *)j__strlen("-fno-temp-file");
    v227[0] = (void *)"-fno-temp-file";
    v230 = 261;
    v227[1] = v21;
    v196((__int64)v197, v190);
  }
  v22 = *(_DWORD *)(v191 + 768);
  if ( v22 != 500 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 38701, v22);
  if ( (*(_BYTE *)(v191 + 772) & 1) != 0 )
  {
    v139 = (void *)j__strlen("-ftime-trace-verbose");
    v227[0] = (void *)"-ftime-trace-verbose";
    v230 = 261;
    v227[1] = v139;
    v196((__int64)v197, v190);
  }
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 776), *(_QWORD *)(v191 + 776) + *(_QWORD *)(v191 + 784));
  v23 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v23 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v24 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v24;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v23, (__int64)v24 + (_QWORD)v23);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 38748, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v23 = (__int64 *)v223;
  }
  if ( v23 != (__int64 *)&v181[1] )
    operator delete(v23);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  v25 = *(_BYTE *)v191;
  if ( (*(_BYTE *)v191 & 4) != 0 )
  {
    v227[1] = (void *)j__strlen("-help");
    v230 = 261;
    v227[0] = (void *)"-help";
    v196((__int64)v197, v190);
    v25 = *(_BYTE *)v191;
  }
  if ( (v25 & 2) != 0 )
  {
    v138 = (void *)j__strlen("-relocatable-pch");
    v227[0] = (void *)"-relocatable-pch";
    v230 = 261;
    v227[1] = v138;
    v196((__int64)v197, v190);
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 552));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v26 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v26;
  v27 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v27;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v28 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v28 )
    sub_12FDC40(v196, (__int64)v197, 47466, v181);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  sub_C23620((__int64)v220, (__int64 *)(v191 + 576));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v29 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v29;
  v30 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v30;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v31 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v31 )
    sub_12FDC40(v196, (__int64)v197, 47769, v181);
  v32 = (__m128i *)&v213;
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  v213 = v215;
  sub_12FAA20(&v213, *(_BYTE **)(v191 + 72), *(_QWORD *)(v191 + 72) + *(_QWORD *)(v191 + 80));
  v33 = (__m128i *)v213;
  v216 = v182 + 1;
  if ( v213 == v215 )
  {
    v33 = (__m128i *)&v182[1];
    si128 = _mm_load_si128(v215);
  }
  else
  {
    v216 = (const __m128i *)v213;
    si128.m128i_i64[0] = v215[0].m128i_i64[0];
  }
  v34 = v214;
  v215[0].m128i_i8[0] = 0;
  v213 = v215;
  v217 = v214;
  v214 = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v182, (__int64)v190) )
  {
    v220[0] = &v221;
    sub_12FAA20(v220, v33, (__int64)v33->m128i_i64 + v34);
    v226 = 260;
    v230 = 261;
    v227[0] = "-o";
    v223 = v220;
    v227[1] = &dword_0 + 2;
    v196((__int64)v197, v190);
    v196((__int64)v197, v181);
    if ( v220[0] != &v221 )
      operator delete(v220[0]);
    v33 = (__m128i *)v216;
  }
  if ( v33 != &v182[1] )
    operator delete(v33);
  if ( v213 != v215 )
    operator delete(v213);
  v35 = *(_BYTE *)v191;
  if ( (*(_BYTE *)v191 & 0x20) != 0 )
  {
    v137 = (void *)j__strlen("-print-supported-cpus");
    v230 = 261;
    v227[1] = v137;
    v227[0] = (void *)"-print-supported-cpus";
    v196((__int64)v197, v190);
    v35 = *(_BYTE *)v191;
  }
  if ( (v35 & 0x40) != 0 )
  {
    v227[1] = (void *)j__strlen("-print-supported-extensions");
    v230 = 261;
    v227[0] = (void *)"-print-supported-extensions";
    v196((__int64)v197, v190);
    v35 = *(_BYTE *)v191;
  }
  if ( v35 < 0 )
  {
    v136 = (void *)j__strlen("-print-enabled-extensions");
    v230 = 261;
    v227[0] = (void *)"-print-enabled-extensions";
    v227[1] = v136;
    v196((__int64)v197, v190);
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 528));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v36 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v36;
  v37 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v37;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v38 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v38 )
    sub_12FDC40(v196, (__int64)v197, 2687, v181);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 632), *(_QWORD *)(v191 + 632) + *(_QWORD *)(v191 + 640));
  v39 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v39 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v40 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v40;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v39, (__int64)v40 + (_QWORD)v39);
    sub_12FD520(v196, (__int64)v197, 2771, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v39 = (__int64 *)v223;
  }
  if ( v39 != (__int64 *)&v181[1] )
    operator delete(v39);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  v41 = *(_BYTE *)(v191 + 8);
  if ( (v41 & 1) != 0 )
  {
    v135 = (void *)j__strlen("-code-completion-macros");
    v230 = 261;
    v227[1] = v135;
    v227[0] = (void *)"-code-completion-macros";
    v196((__int64)v197, v190);
    v41 = *(_BYTE *)(v191 + 8);
  }
  if ( (v41 & 2) != 0 )
  {
    v134 = (void *)j__strlen("-code-completion-patterns");
    v230 = 261;
    v227[1] = v134;
    v227[0] = (void *)"-code-completion-patterns";
    v196((__int64)v197, v190);
    v41 = *(_BYTE *)(v191 + 8);
  }
  if ( (v41 & 4) == 0 )
  {
    v227[1] = (void *)j__strlen("-no-code-completion-globals");
    v230 = 261;
    v227[0] = (void *)"-no-code-completion-globals";
    v196((__int64)v197, v190);
    v41 = *(_BYTE *)(v191 + 8);
  }
  if ( (v41 & 8) == 0 )
  {
    v227[1] = (void *)j__strlen("-no-code-completion-ns-level-decls");
    v230 = 261;
    v227[0] = (void *)"-no-code-completion-ns-level-decls";
    v196((__int64)v197, v190);
    v41 = *(_BYTE *)(v191 + 8);
  }
  if ( (v41 & 0x10) != 0 )
  {
    v227[1] = (void *)j__strlen("-code-completion-brief-comments");
    v230 = 261;
    v227[0] = (void *)"-code-completion-brief-comments";
    v196((__int64)v197, v190);
    v41 = *(_BYTE *)(v191 + 8);
  }
  if ( (v41 & 0x40) != 0 )
  {
    v133 = (void *)j__strlen("-code-completion-with-fixits");
    v227[0] = (void *)"-code-completion-with-fixits";
    v230 = 261;
    v227[1] = v133;
    v196((__int64)v197, v190);
  }
  if ( (*(_BYTE *)(v191 + 1) & 0x20) != 0 )
  {
    v132 = (void *)j__strlen("-skip-function-bodies");
    v230 = 261;
    v227[0] = (void *)"-skip-function-bodies";
    v227[1] = v132;
    v196((__int64)v197, v190);
  }
  if ( (*(_BYTE *)v191 & 1) != 0 )
  {
    LOBYTE(v227[0]) = 1;
    sub_12FD380((__int64)v190, v196, (__int64)v197, 4896, 1);
    if ( (*(_BYTE *)v191 & 1) != 0 )
    {
      LOBYTE(v227[0]) = 0;
      sub_12FD320((__int64)v190, v196, (__int64)v197, 55007, 1);
    }
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 384));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v42 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v42;
  v43 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v43;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v44 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v44 )
    sub_12FDC40(v196, (__int64)v197, 1303, v181);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 136), *(_QWORD *)(v191 + 136) + *(_QWORD *)(v191 + 144));
  v45 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v45 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v46 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v46;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v45, (__int64)v46 + (_QWORD)v45);
    sub_12FD520(v196, (__int64)v197, 2621, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v45 = (__int64 *)v223;
  }
  if ( v45 != (__int64 *)&v181[1] )
    operator delete(v45);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  if ( (*(_BYTE *)(v191 + 1) & 0x40) == 0 )
  {
    v47 = (void *)j__strlen("-fno-modules-global-index");
    v230 = 261;
    v227[0] = (void *)"-fno-modules-global-index";
    v227[1] = v47;
    v196((__int64)v197, v190);
  }
  sub_C23620((__int64)v220, (__int64 *)(v191 + 504));
  *(_OWORD *)v227 = 0;
  v228 = nullptr;
  v223 = v220[0];
  v48 = (__int64 (__fastcall *)(__int64))v220[1];
  *(_OWORD *)v220 = 0;
  v224 = v48;
  v49 = v221.m128i_i64[0];
  v221.m128i_i64[0] = 0;
  v225.m128i_i64[0] = v49;
  sub_12FD200(v190, (__int64)v182, (__int64)v182);
  v50 = sub_130B900(v181->m128i_i64, (__int64 *)v190);
  sub_9B4A30((void ***)v190);
  if ( !v50 )
    sub_12FDB00((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 17507, v181);
  sub_9B4A30((void ***)v181);
  sub_9B4A30((void ***)v220);
  v51 = *(_BYTE *)(v191 + 2);
  if ( (v51 & 0x20) != 0
    || (LOBYTE(v227[0]) = 0,
        sub_12FD320((__int64)v190, v196, (__int64)v197, 22673, 0),
        v51 = *(_BYTE *)(v191 + 2),
        (v51 & 0x20) != 0) )
  {
    if ( (v51 & 8) != 0 )
      goto LABEL_227;
  }
  else
  {
    LOBYTE(v227[0]) = 1;
    sub_12FD380((__int64)v190, v196, (__int64)v197, 15419, 0);
    v51 = *(_BYTE *)(v191 + 2);
    if ( (v51 & 8) != 0 )
    {
LABEL_227:
      v116 = (void *)j__strlen("-ast-dump-decl-types");
      v230 = 261;
      v227[1] = v116;
      v227[0] = (void *)"-ast-dump-decl-types";
      v196((__int64)v197, v190);
      if ( (*(_BYTE *)(v191 + 2) & 4) != 0 )
        goto LABEL_228;
      goto LABEL_119;
    }
  }
  if ( (v51 & 4) != 0 )
  {
LABEL_228:
    v117 = (void *)j__strlen("-ast-dump-lookups");
    v230 = 261;
    v227[0] = (void *)"-ast-dump-lookups";
    v227[1] = v117;
    v196((__int64)v197, v190);
  }
LABEL_119:
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 840), *(_QWORD *)(v191 + 840) + *(_QWORD *)(v191 + 848));
  v52 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v52 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v53 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v53;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v52, (__int64)v53 + (_QWORD)v52);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 5218, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v52 = (__int64 *)v223;
  }
  if ( v52 != (__int64 *)&v181[1] )
    operator delete(v52);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  if ( (*(_BYTE *)v191 & 8) != 0 )
  {
    v131 = (void *)j__strlen("-print-stats");
    v230 = 261;
    v227[0] = (void *)"-print-stats";
    v227[1] = v131;
    v196((__int64)v197, v190);
  }
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 736), *(_QWORD *)(v191 + 736) + *(_QWORD *)(v191 + 744));
  v54 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v54 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v55 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v55;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v54, (__int64)v55 + (_QWORD)v54);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 59401, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v54 = (__int64 *)v223;
  }
  if ( v54 != (__int64 *)&v181[1] )
    operator delete(v54);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  if ( (*(_BYTE *)v191 & 0x10) != 0 )
  {
    v130 = (void *)j__strlen("-stats-file-append");
    v230 = 261;
    v227[0] = (void *)"-stats-file-append";
    v227[1] = v130;
    v196((__int64)v197, v190);
  }
  v56 = *(_BYTE *)(v191 + 1);
  if ( (v56 & 2) != 0 )
  {
    v129 = (void *)j__strlen("-fix-what-you-can");
    v230 = 261;
    v227[1] = v129;
    v227[0] = (void *)"-fix-what-you-can";
    v196((__int64)v197, v190);
    v56 = *(_BYTE *)(v191 + 1);
  }
  if ( (v56 & 4) != 0 )
  {
    v227[1] = (void *)j__strlen("-fix-only-warnings");
    v230 = 261;
    v227[0] = (void *)"-fix-only-warnings";
    v196((__int64)v197, v190);
    v56 = *(_BYTE *)(v191 + 1);
  }
  if ( (v56 & 8) != 0 )
  {
    v227[1] = (void *)j__strlen("-fixit-recompile");
    v230 = 261;
    v227[0] = (void *)"-fixit-recompile";
    v196((__int64)v197, v190);
    v56 = *(_BYTE *)(v191 + 1);
  }
  if ( (v56 & 0x10) != 0 )
  {
    v128 = (void *)j__strlen("-fixit-to-temporary");
    v227[0] = (void *)"-fixit-to-temporary";
    v230 = 261;
    v227[1] = v128;
    v196((__int64)v197, v190);
  }
  v220[0] = &v221;
  sub_12FAA20(v220, *(_BYTE **)(v191 + 600), *(_QWORD *)(v191 + 600) + *(_QWORD *)(v191 + 608));
  v57 = (__int64 *)v220[0];
  v223 = &v181[1];
  if ( v220[0] == &v221 )
  {
    v57 = v181[1].m128i_i64;
    v225 = _mm_load_si128(&v221);
  }
  else
  {
    v223 = v220[0];
    v225.m128i_i64[0] = v221.m128i_i64[0];
  }
  v58 = (__int64 (__fastcall *)(__int64))v220[1];
  v220[1] = nullptr;
  v220[0] = &v221;
  v224 = v58;
  v221.m128i_i8[0] = 0;
  v227[0] = v190 + 2;
  v227[1] = nullptr;
  LOBYTE(v228) = 0;
  if ( sub_1302CC0((__int64)v181, (__int64)v190) )
  {
    sub_12FAA20(v190, v57, (__int64)v58 + (_QWORD)v57);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))v196, (__int64)v197, 32284, (__int64)v190);
    if ( v227[0] != v190 + 2 )
      operator delete(v227[0]);
    v57 = (__int64 *)v223;
  }
  if ( v57 != (__int64 *)&v181[1] )
    operator delete(v57);
  if ( v220[0] != &v221 )
    operator delete(v220[0]);
  if ( *(char *)(v191 + 2) >= 0 )
  {
    v59 = (void *)j__strlen("-fno-pch-timestamp");
    v227[0] = (void *)"-fno-pch-timestamp";
    v230 = 261;
    v227[1] = v59;
    v196((__int64)v197, v190);
  }
  if ( (*(_BYTE *)(v191 + 1) & 1) != 0 )
  {
    v127 = (void *)j__strlen("-version");
    v230 = 261;
    v227[0] = (void *)"-version";
    v227[1] = v127;
    v196((__int64)v197, v190);
  }
  v60 = *(_BYTE *)(v191 + 3);
  if ( (v60 & 4) != 0 )
  {
    v126 = (void *)j__strlen("-fallow-pcm-with-compiler-errors");
    v230 = 261;
    v227[1] = v126;
    v227[0] = (void *)"-fallow-pcm-with-compiler-errors";
    v196((__int64)v197, v190);
    v60 = *(_BYTE *)(v191 + 3);
  }
  if ( (v60 & 8) == 0 )
  {
    v61 = (void *)j__strlen("-fno-modules-share-filemanager");
    v230 = 261;
    v227[0] = (void *)"-fno-modules-share-filemanager";
    v227[1] = v61;
    v196((__int64)v197, v190);
  }
  v62 = *(_DWORD *)(v191 + 208);
  v63 = &unk_26016A0;
  do
  {
    if ( v62 == *v63 )
    {
      v4 = v63[1];
      v64 = 1;
      goto LABEL_164;
    }
    v63 += 2;
  }
  while ( &unk_26017F0 != (_UNKNOWN *)v63 );
  v64 = 0;
LABEL_164:
  v198 = v4;
  v180 = (__m128i *)&v198;
  v65 = (void (__fastcall *)(const __m128i **, const __m128i *, int))sub_12F99B0;
  v199 = v64;
  v66 = _mm_loadh_ps((const double *)&v180);
  v180 = (__m128i *)sub_12FBE00;
  v200 = (__m128i)v66;
  v201 = _mm_loadh_ps((const double *)&v180);
  if ( v64 )
  {
    if ( v62 != 1 )
      goto LABEL_166;
  }
  else
  {
    v227[0] = &v196;
    v120 = _mm_load_si128(&v200);
    v228 = (void **)sub_12F99B0;
    v227[1] = (void *)v191;
    v121 = _mm_load_si128((const __m128i *)v227);
    v201.m128_u64[0] = (unsigned __int64)sub_12F99D0;
    v229 = sub_12FBE00;
    *(__m128i *)v227 = v120;
    v200 = v121;
    v201.m128_u64[1] = (unsigned __int64)sub_12FD960;
    sub_12F99B0((const __m128i **)v190, (const __m128i *)v190, 3);
    v65 = (void (__fastcall *)(const __m128i **, const __m128i *, int))v201.m128_u64[0];
    v62 = *(_DWORD *)(v122 + 208);
    if ( v62 != 1 )
      goto LABEL_166;
  }
  v123 = v191;
  v227[1] = &v196;
  v201.m128_u64[0] = (unsigned __int64)sub_12F99F0;
  v227[0] = (void *)v191;
  v124 = _mm_load_si128(&v200);
  v125 = _mm_load_si128((const __m128i *)v227);
  v228 = (void **)v65;
  *(__m128i *)v227 = v124;
  v200 = v125;
  v229 = (__int64 (__fastcall *)(__int64))v201.m128_u64[1];
  v201.m128_u64[1] = (unsigned __int64)sub_12FD9E0;
  if ( !v65 )
    goto LABEL_168;
  v65((const __m128i **)v190, (const __m128i *)v190, 3);
  v62 = *(_DWORD *)(v123 + 208);
  v65 = (void (__fastcall *)(const __m128i **, const __m128i *, int))v201.m128_u64[0];
LABEL_166:
  if ( v62 == 16 && *(_QWORD *)(v191 + 112) )
  {
    v227[1] = (void *)v191;
    v227[0] = &v196;
    v118 = _mm_load_si128(&v200);
    v119 = _mm_load_si128((const __m128i *)v227);
    v201.m128_u64[0] = (unsigned __int64)sub_12F9A10;
    *(__m128i *)v227 = v118;
    v200 = v119;
    v228 = (void **)v65;
    v229 = (__int64 (__fastcall *)(__int64))v201.m128_u64[1];
    v201.m128_u64[1] = (unsigned __int64)sub_12FD9A0;
    if ( !v65 )
      goto LABEL_168;
    v65((const __m128i **)v190, (const __m128i *)v190, 3);
    v65 = (void (__fastcall *)(const __m128i **, const __m128i *, int))v201.m128_u64[0];
  }
  if ( !v65 )
    std::__throw_bad_function_call();
LABEL_168:
  v195 = &v200;
  ((void (__fastcall *)(__m128i *))v201.m128_u64[1])(&v200);
  v67 = *(_QWORD *)(v191 + 360);
  v193 = v191 + 344;
  v192 = v67;
  if ( v191 + 344 != v67 )
  {
    v189 = v220;
    do
    {
      v68 = sub_1105E80();
      v69 = sub_21BB380(v68, 3134);
      v71 = v70;
      v72 = *(__int64 (__fastcall **)(__int64))(v192 + 72);
      v183 = (void **)(v192 + 32);
      v73 = *(__int64 (__fastcall **)(__int64))(v192 + 64);
      v184 = v72;
      if ( v72 != v73 )
      {
        while ( 1 )
        {
          v213 = v215;
          sub_12FAA20(&v213, *(_BYTE **)v73, *(_QWORD *)v73 + *((_QWORD *)v73 + 1));
          v74 = *(unsigned __int8 *)(v69 + 44);
          v75 = *(_QWORD *)(v71 + 16);
          v76 = (int *)(*(_QWORD *)(v71 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v69 + 40) - 1));
          v77 = *v76;
          v78 = **(const __m128i ***)(v71 + 8);
          if ( *v76 )
            break;
          v79 = 0;
          v80 = &v78->m128i_i8[v76[1]];
          if ( v80 )
            goto LABEL_173;
          v79 = 0;
          v81 = 0;
LABEL_175:
          v82 = (const __m128i *)(v81 - v79);
          v81 = v79;
LABEL_176:
          v83 = &v80[v81];
          v84 = nullptr;
          v85 = 0;
          if ( v77 )
          {
            v84 = &v78->m128i_i8[*(unsigned int *)(v75 + 4LL * (unsigned int)(v77 + 1))];
            if ( v84 )
            {
              v186 = v82;
              LODWORD(v185) = v74;
              v180 = (__m128i *)v84;
              v85 = strlen(v84);
              v82 = v186;
              v74 = (unsigned int)v185;
              v84 = (const char *)v180;
            }
          }
          v217 = v85;
          v226 = 260;
          v220[0] = (void *)v182;
          si128.m128i_i64[0] = (__int64)v83;
          v221.m128i_i64[0] = (__int64)v183;
          v222 = 1026;
          v86 = (void (__fastcall *)(__int64, __m128i *))v196;
          v216 = (const __m128i *)v84;
          si128.m128i_i64[1] = (__int64)v82;
          v219 = 1285;
          v220[1] = nullptr;
          v223 = &v213;
          if ( ((1LL << v74) & 0x210) != 0 )
          {
            v228 = &v213;
            v227[0] = v189;
            v227[1] = nullptr;
            v229 = v224;
            v230 = 1026;
            ((void (__fastcall *)(__m128i *, unsigned __int64 **, __int64 (__fastcall *)(__int64), void **, __int64))v196)(
              v197,
              v190,
              v224,
              v189,
              v75);
          }
          else
          {
            v180 = v197;
            ((void (__fastcall *)(__m128i *, void **, __int64, __int64, __int64))v196)(v197, v189, 1LL << v74, v74, v75);
            v86((__int64)v180, v181);
          }
          if ( v213 == v215 )
          {
            v73 = (__int64 (__fastcall *)(__int64))((char *)v73 + 32);
            if ( v184 == v73 )
              goto LABEL_181;
          }
          else
          {
            operator delete(v213);
            v73 = (__int64 (__fastcall *)(__int64))((char *)v73 + 32);
            if ( v184 == v73 )
              goto LABEL_181;
          }
        }
        v79 = 0;
        v111 = &v78->m128i_i8[*(unsigned int *)(v75 + 4LL * (unsigned int)(v77 + 1))];
        if ( v111 )
        {
          v187 = **(const __m128i ***)(v71 + 8);
          LODWORD(v186) = v77;
          LODWORD(v185) = v74;
          v180 = (__m128i *)v75;
          v112 = strlen(v111);
          v78 = v187;
          v77 = (int)v186;
          v74 = (unsigned int)v185;
          v75 = (__int64)v180;
          v79 = v112;
        }
        v81 = 0;
        v80 = &v78->m128i_i8[v76[1]];
        if ( v80 )
        {
LABEL_173:
          v188 = v78;
          LODWORD(v187) = v77;
          LODWORD(v186) = v74;
          v185 = v79;
          v180 = (__m128i *)v75;
          v81 = strlen(v80);
          v78 = v188;
          v77 = (int)v187;
          v74 = (unsigned int)v186;
          v79 = v185;
          v75 = (__int64)v180;
        }
        v82 = nullptr;
        if ( v79 > v81 )
          goto LABEL_176;
        goto LABEL_175;
      }
LABEL_181:
      v192 = std::_Rb_tree_increment(v192);
    }
    while ( v193 != v192 );
    v6 = (__m128i *)v189;
  }
  v87 = *(_QWORD **)(v191 + 440);
  v88 = *(_QWORD **)(v191 + 432);
  if ( v87 != v88 )
  {
    v183 = &v213;
    v89 = (__int64 *)v181;
    v180 = v6;
    v90 = v88;
    v91 = v181[1].m128i_i64;
    v92 = (const __m128i *)v190;
    do
    {
      v93 = *v90;
      if ( *v90 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v93 + 24LL))(*v90, &unk_2CD8AB8) )
        {
          sub_13A4C90(v89, v93);
          v227[0] = v89;
          v230 = 260;
          sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0x743u, v92);
          if ( v223 != v91 )
            operator delete(v223);
        }
      }
      v90 += 2;
    }
    while ( v87 != v90 );
    v6 = v180;
    v32 = (__m128i *)v183;
  }
  v94 = *(_QWORD *)(v191 + 176);
  if ( v94 )
  {
    v147 = *(_DWORD *)(v191 + 204);
    v226 = 265;
    v148 = *(_DWORD *)(v191 + 200);
    LODWORD(v223) = v147;
    v219 = 259;
    v212 = 265;
    v216 = (const __m128i *)":";
    v211[0].m128i_i32[0] = v148;
    v208[0].m128i_i64[0] = (__int64)":";
    v209 = 259;
    if ( sub_9B4AA0(v191 + 168, "<stdin>") )
    {
      v204[0] = v205;
      sub_12FAA20(v204, *(_BYTE **)(v191 + 168), *(_QWORD *)(v191 + 168) + v94);
    }
    else
    {
      sub_12FB750(v204, "-");
    }
    v206[0].m128i_i64[0] = (__int64)v204;
    v207 = 260;
    v187 = v208;
    v186 = v206;
    sub_A41580(v210, v206, v208, v149, v150, v151);
    v188 = v211;
    sub_A41580(v32, v210, v211, v152, v153, v154);
    sub_A41580(v6, v32, v182, v155, v156, v157);
    v158 = v190;
    sub_A41580((__m128i *)v190, v6, v181, v159, v160, v161);
    sub_2253560(v202, v158);
    if ( v204[0] != v205 )
      operator delete(v204[0]);
    v227[0] = v202;
    v230 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0xD0u, (const __m128i *)v190);
    if ( v202[0] != &v203 )
      operator delete(v202[0]);
  }
  else
  {
    v187 = v208;
    v186 = v206;
    v188 = v211;
  }
  v95 = (const __m128i *)v190;
  v96 = *(char **)(v191 + 416);
  for ( i = *(char **)(v191 + 408); v96 != i; i += 32 )
  {
    v227[0] = i;
    v230 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0x89Bu, v95);
  }
  v98 = (const __m128i *)v190;
  v99 = *(char **)(v191 + 488);
  for ( j = *(char **)(v191 + 480); v99 != j; j += 32 )
  {
    v227[0] = j;
    v230 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0x3A7u, v98);
  }
  if ( *(_BYTE *)(v191 + 696) )
  {
    v230 = 260;
    v227[0] = (void *)(v191 + 664);
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0x94u, (const __m128i *)v190);
  }
  if ( *(_BYTE *)(v191 + 728) )
  {
    v113 = *(char **)(v191 + 704);
    v114 = *(char **)(v191 + 712);
    if ( v114 != v113 )
    {
      v115 = (const __m128i *)v190;
      do
      {
        v227[0] = v113;
        v113 += 32;
        v230 = 260;
        sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0x95u, v115);
      }
      while ( v114 != v113 );
    }
  }
  v101 = v191;
  v102 = "-cpp-output";
  if ( (*(_BYTE *)(v191 + 17) & 8) == 0 )
    v102 = (char *)&byte_22F0C30;
  v103 = j__strlen(v102);
  v104 = *(_BYTE *)(v101 + 17);
  v184 = (__int64 (__fastcall *)(__int64))v103;
  v105 = "-module-map";
  if ( (v104 & 7) != 1 )
    v105 = &byte_22F0C30;
  v183 = (void **)v105;
  v185 = j__strlen(v105);
  v106 = (v104 >> 4) & 7;
  if ( v106 == 2 )
  {
    v107 = "-system";
    v180 = (__m128i *)j__strlen("-system");
  }
  else if ( v106 == 3 )
  {
    v107 = "-header-unit";
    v180 = (__m128i *)j__strlen("-header-unit");
  }
  else
  {
    v180 = nullptr;
    v107 = (char *)&byte_22F0C30;
    if ( v106 == 1 )
    {
      v107 = "-user";
      v180 = (__m128i *)j__strlen("-user");
    }
  }
  v108 = &byte_22F0C30;
  if ( (_BYTE)v194 )
    v108 = "-header";
  v109 = j__strlen(v108);
  v110 = *(unsigned __int8 *)(v191 + 16);
  v189 = (void **)v109;
  switch ( v110 )
  {
    case 0LL:
      v162 = j__strlen("ast");
      v163 = "ast";
      v109 = (size_t)v189;
      break;
    case 1LL:
      v162 = j__strlen("assembler-with-cpp");
      v163 = "assembler-with-cpp";
      v109 = (size_t)v189;
      break;
    case 2LL:
      v162 = j__strlen("cir");
      v163 = "cir";
      v109 = (size_t)v189;
      break;
    case 3LL:
      v162 = j__strlen("ir");
      v163 = "ir";
      v109 = (size_t)v189;
      break;
    case 4LL:
      v162 = j__strlen("c");
      v163 = "c";
      v109 = (size_t)v189;
      break;
    case 5LL:
      v162 = j__strlen("c++");
      v163 = (char *)"c++";
      v109 = (size_t)v189;
      break;
    case 6LL:
      v162 = j__strlen("objective-c");
      v163 = "objective-c";
      v109 = (size_t)v189;
      break;
    case 7LL:
      v162 = j__strlen("objective-c++");
      v163 = "objective-c++";
      v109 = (size_t)v189;
      break;
    case 8LL:
      v162 = j__strlen("cl");
      v163 = "cl";
      v109 = (size_t)v189;
      break;
    case 9LL:
      v162 = j__strlen("clcpp");
      v163 = "clcpp";
      v109 = (size_t)v189;
      break;
    case 10LL:
      v162 = j__strlen("cuda");
      v163 = "cuda";
      v109 = (size_t)v189;
      break;
    case 11LL:
      v162 = j__strlen("hip");
      v163 = "hip";
      v109 = (size_t)v189;
      break;
    case 12LL:
      v162 = j__strlen("hlsl");
      v109 = (size_t)v189;
      v163 = "hlsl";
      break;
    default:
      v162 = 0;
      v163 = nullptr;
      break;
  }
  v211[0].m128i_i64[1] = v109;
  v226 = 261;
  v224 = v184;
  v219 = 261;
  v206[0].m128i_i64[0] = (__int64)v163;
  v216 = (const __m128i *)v183;
  v206[0].m128i_i64[1] = v162;
  v217 = v185;
  v212 = 261;
  v209 = 261;
  v208[0].m128i_i64[1] = (__int64)v180;
  v207 = 261;
  v211[0].m128i_i64[0] = (__int64)v108;
  v208[0].m128i_i64[0] = (__int64)v107;
  v223 = v102;
  sub_A41580(v210, v186, v187, (__int64)v180, 261, 261);
  sub_A41580(v32, v210, v188, v164, v165, v166);
  sub_A41580(v6, v32, v182, v167, v168, v169);
  v170 = (const __m128i *)v190;
  sub_A41580((__m128i *)v190, v6, v181, v171, v172, v173);
  sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))v196, (__int64)v197, 0xDB6u, v170);
  v174 = (__int64 *)v190;
  v175 = *(_QWORD *)(v191 + 24);
  v176 = v175 + 80LL * *(unsigned int *)(v191 + 32);
  while ( v176 != v175 )
  {
    v177 = *(void **)v175;
    v178 = *(void **)(v175 + 8);
    v175 += 80;
    v230 = 261;
    v227[0] = v177;
    v227[1] = v178;
    v196((__int64)v197, v174);
  }
  result = v201.m128_u64[0];
  if ( v201.m128_u64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v201.m128_u64[0])(v195, v195, 3);
  return result;
}
