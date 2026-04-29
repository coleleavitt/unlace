__int64 __fastcall sub_11D20(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, __int64 a6, __int64 a7)
{
  _OWORD *v10; // r14
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  void *v19; // rax
  __m128 v20; // xmm0
  unsigned __int64 v21; // rax
  int *v22; // r10
  int *v23; // r11
  _OWORD *v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __m128 v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __m128 v33; // xmm0
  __m128i v34; // xmm0
  __m128 v35; // xmm0
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  size_t v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // r8
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  _QWORD *v50; // r12
  __int64 v51; // r14
  void *v52; // rdi
  _OWORD *v53; // rcx
  __m128i v54; // kr00_16
  __int64 v55; // rdx
  size_t v56; // [rsp+0h] [rbp-5B0h]
  __int64 v57; // [rsp+8h] [rbp-5A8h]
  int *v58; // [rsp+8h] [rbp-5A8h]
  __m128i v59; // [rsp+20h] [rbp-590h] BYREF
  size_t n; // [rsp+30h] [rbp-580h]
  size_t v61; // [rsp+38h] [rbp-578h]
  __m128i *v62; // [rsp+40h] [rbp-570h]
  void **v63; // [rsp+48h] [rbp-568h]
  int v64; // [rsp+50h] [rbp-560h]
  unsigned int v65; // [rsp+54h] [rbp-55Ch]
  __int64 v66; // [rsp+58h] [rbp-558h]
  int v67; // [rsp+60h] [rbp-550h] BYREF
  __int64 v68; // [rsp+68h] [rbp-548h]
  __int64 v69; // [rsp+70h] [rbp-540h]
  void *v70; // [rsp+80h] [rbp-530h] BYREF
  __int128 v71; // [rsp+88h] [rbp-528h]
  __int64 v72; // [rsp+98h] [rbp-518h]
  int v73; // [rsp+A0h] [rbp-510h]
  void *v74; // [rsp+B0h] [rbp-500h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-4F8h]
  double v76[3]; // [rsp+C0h] [rbp-4F0h] BYREF
  char v77; // [rsp+D8h] [rbp-4D8h]
  __m128i v78; // [rsp+E0h] [rbp-4D0h]
  __int64 v79; // [rsp+F0h] [rbp-4C0h]
  int v80; // [rsp+F8h] [rbp-4B8h] BYREF
  __int16 v81; // [rsp+FCh] [rbp-4B4h]
  size_t v82; // [rsp+100h] [rbp-4B0h]
  __m128i v83; // [rsp+108h] [rbp-4A8h] BYREF
  __m128i v84; // [rsp+118h] [rbp-498h] BYREF
  __m128i v85; // [rsp+128h] [rbp-488h] BYREF
  __m128i v86; // [rsp+138h] [rbp-478h] BYREF
  __m128i v87; // [rsp+148h] [rbp-468h] BYREF
  __int64 v88; // [rsp+158h] [rbp-458h]
  __m128i v89; // [rsp+160h] [rbp-450h] BYREF
  __int64 v90; // [rsp+170h] [rbp-440h]
  int v91; // [rsp+178h] [rbp-438h]
  __int16 v92; // [rsp+17Ch] [rbp-434h]
  size_t v93; // [rsp+180h] [rbp-430h]
  __m128i v94; // [rsp+188h] [rbp-428h] BYREF
  __m128i v95; // [rsp+198h] [rbp-418h] BYREF
  __m128i v96; // [rsp+1A8h] [rbp-408h] BYREF
  __m128i v97; // [rsp+1B8h] [rbp-3F8h] BYREF
  __m128i v98; // [rsp+1C8h] [rbp-3E8h] BYREF
  __int64 v99; // [rsp+1D8h] [rbp-3D8h]
  char v100; // [rsp+1E0h] [rbp-3D0h]
  __m128i v101; // [rsp+1F0h] [rbp-3C0h] BYREF
  __int64 v102; // [rsp+200h] [rbp-3B0h]
  void *src; // [rsp+208h] [rbp-3A8h]
  __int128 v104; // [rsp+210h] [rbp-3A0h]
  __int64 v105; // [rsp+220h] [rbp-390h]
  int v106; // [rsp+228h] [rbp-388h]
  int v107; // [rsp+238h] [rbp-378h] BYREF
  __int64 v108; // [rsp+240h] [rbp-370h]
  int *v109; // [rsp+248h] [rbp-368h] BYREF
  int *v110; // [rsp+250h] [rbp-360h]
  __int64 v111; // [rsp+258h] [rbp-358h]
  __int64 v112; // [rsp+260h] [rbp-350h]
  __int64 v113; // [rsp+268h] [rbp-348h]
  __int64 v114; // [rsp+270h] [rbp-340h]
  __m128i v115; // [rsp+278h] [rbp-338h] BYREF
  __int64 v116; // [rsp+288h] [rbp-328h]
  __m128i v117; // [rsp+290h] [rbp-320h] BYREF
  __int64 v118; // [rsp+2A0h] [rbp-310h]
  __m128i v119; // [rsp+2A8h] [rbp-308h] BYREF
  __int64 v120; // [rsp+2B8h] [rbp-2F8h]
  __m128i v121; // [rsp+2C0h] [rbp-2F0h] BYREF
  __m128i v122; // [rsp+2D0h] [rbp-2E0h] BYREF
  void *v123; // [rsp+2E0h] [rbp-2D0h]
  __int128 v124; // [rsp+2E8h] [rbp-2C8h]
  __int64 v125; // [rsp+2F8h] [rbp-2B8h]
  int v126; // [rsp+300h] [rbp-2B0h]
  int v127; // [rsp+310h] [rbp-2A0h] BYREF
  __int64 v128; // [rsp+318h] [rbp-298h]
  int *v129; // [rsp+320h] [rbp-290h] BYREF
  int *v130; // [rsp+328h] [rbp-288h]
  __int64 v131; // [rsp+330h] [rbp-280h]
  __int64 *v132; // [rsp+338h] [rbp-278h]
  unsigned __int64 v133; // [rsp+340h] [rbp-270h]
  __int64 v134; // [rsp+348h] [rbp-268h]
  __int64 v135; // [rsp+350h] [rbp-260h]
  __m128i v136; // [rsp+358h] [rbp-258h] BYREF
  _QWORD v137[2]; // [rsp+368h] [rbp-248h] BYREF
  int v138; // [rsp+378h] [rbp-238h] BYREF
  __int64 v139; // [rsp+380h] [rbp-230h]
  int *v140; // [rsp+388h] [rbp-228h] BYREF
  int *v141; // [rsp+390h] [rbp-220h]
  __int64 v142; // [rsp+398h] [rbp-218h]
  __int16 v143; // [rsp+3A0h] [rbp-210h]
  _OWORD *v144; // [rsp+3B0h] [rbp-200h] BYREF
  __m128i v145; // [rsp+3B8h] [rbp-1F8h] BYREF
  __int64 v146; // [rsp+3C8h] [rbp-1E8h]
  void *v147; // [rsp+3D0h] [rbp-1E0h] BYREF
  __int128 v148; // [rsp+3D8h] [rbp-1D8h] BYREF
  __int64 v149; // [rsp+3E8h] [rbp-1C8h]
  int v150; // [rsp+3F0h] [rbp-1C0h]
  int v151; // [rsp+400h] [rbp-1B0h] BYREF
  __m128 v152; // [rsp+408h] [rbp-1A8h]
  int *v153; // [rsp+418h] [rbp-198h]
  __int64 v154; // [rsp+420h] [rbp-190h]
  __int64 v155; // [rsp+428h] [rbp-188h]
  __int64 v156; // [rsp+430h] [rbp-180h]
  __int64 v157; // [rsp+438h] [rbp-178h]
  __m128i v158; // [rsp+440h] [rbp-170h]
  __int64 v159; // [rsp+450h] [rbp-160h]
  __m128i v160; // [rsp+458h] [rbp-158h]
  __int64 v161; // [rsp+468h] [rbp-148h]
  __m128i v162; // [rsp+470h] [rbp-140h]
  __int64 v163; // [rsp+480h] [rbp-130h]
  __m128i v164; // [rsp+488h] [rbp-128h]
  __m128i v165; // [rsp+498h] [rbp-118h]
  void *v166; // [rsp+4A8h] [rbp-108h]
  __int128 v167; // [rsp+4B0h] [rbp-100h]
  __int64 v168; // [rsp+4C0h] [rbp-F0h]
  int v169; // [rsp+4C8h] [rbp-E8h]
  int v170; // [rsp+4D8h] [rbp-D8h] BYREF
  __m128 v171; // [rsp+4E0h] [rbp-D0h]
  int *v172; // [rsp+4F0h] [rbp-C0h]
  __int64 v173; // [rsp+4F8h] [rbp-B8h]
  __int64 *v174; // [rsp+500h] [rbp-B0h]
  unsigned __int64 v175; // [rsp+508h] [rbp-A8h]
  _QWORD v176[2]; // [rsp+510h] [rbp-A0h] BYREF
  __m128i v177; // [rsp+520h] [rbp-90h]
  __int64 v178; // [rsp+530h] [rbp-80h] BYREF
  int v179; // [rsp+540h] [rbp-70h] BYREF
  __m128 v180; // [rsp+548h] [rbp-68h]
  int *v181; // [rsp+558h] [rbp-58h]
  __int64 v182; // [rsp+560h] [rbp-50h]
  __int16 v183; // [rsp+568h] [rbp-48h]
  unsigned __int64 v184; // [rsp+578h] [rbp-38h]

  v66 = a2;
  v10 = *(_OWORD **)(a6 + 8);
  v64 = a4;
  v65 = a5;
  v184 = __readfsqword(0x28u);
  sub_2FF50(&v89, v10);
  if ( v100 )
  {
    v11 = v89.m128i_i64[0];
    v12 = _mm_loadu_si128((const __m128i *)&v89.m128i_u64[1]);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
  v78 = _mm_load_si128(&v89);
  v14 = _mm_loadu_si128(&v94);
  v79 = v90;
  v83 = v14;
  v80 = v91;
  v94 = 0;
  v15 = _mm_loadu_si128(&v95);
  v81 = v92;
  v84 = v15;
  v16 = _mm_loadu_si128(&v96);
  v82 = v93;
  v85 = v16;
  v17 = _mm_loadu_si128(&v97);
  v88 = v99;
  v86 = v17;
  v18 = _mm_loadu_si128(&v98);
  v93 = 0;
  v63 = &v74;
  v87 = v18;
  sub_2FE60(&v74, v10);
  if ( !v77 )
  {
    v70 = nullptr;
    v71 = 0;
    if ( v75 )
    {
      v62 = (__m128i *)v75;
      v61 = 16 * v75;
      v70 = (void *)qalloc_or_throw(16 * v75);
      *((_QWORD *)&v71 + 1) = v62;
      memcpy(v70, v74, v61);
      *(_QWORD *)&v71 = v62;
    }
    v72 = 0;
    v21 = *(_QWORD *)(v66 + 32);
    v73 = -1;
    v101 = (__m128i)v21;
    v102 = -1;
    src = nullptr;
    v105 = 0;
    v106 = -1;
    v107 = 0;
    v108 = 0;
    v62 = &v101;
    v109 = &v107;
    v110 = &v107;
    n = (size_t)&v107;
    v111 = 0;
    v112 = -2;
    v113 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v123 = nullptr;
    v125 = 0;
    v104 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v122 = 0;
    v124 = 0;
    v126 = -1;
    v61 = (size_t)v137;
    v132 = v137;
    v140 = &v138;
    v141 = &v138;
    v143 = 0;
    v127 = 0;
    v128 = 0;
    v129 = &v127;
    v130 = &v127;
    v59.m128i_i64[0] = (__int64)&v127;
    v131 = 0;
    v133 = 1;
    v134 = 0;
    v135 = 0;
    v136.m128i_i32[0] = 1065353216;
    v136.m128i_i64[1] = 0;
    v137[0] = 0;
    v138 = 0;
    v139 = 0;
    v142 = 0;
    sub_271A0(
      (unsigned int)&v144,
      (unsigned int)&v101,
      (_DWORD)v10,
      1,
      (unsigned int)&v70,
      (unsigned int)&v80,
      v66 + 440,
      v65);
    v22 = &v127;
    v23 = &v107;
    if ( (_BYTE)v146 )
    {
      v24 = v144;
      v25 = _mm_loadu_si128(&v145);
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v24;
      *(__m128i *)(a1 + 8) = v25;
    }
    else
    {
      v26 = _mm_load_si128(&v101);
      v144 = v10;
      v147 = nullptr;
      v145 = v26;
      v146 = v102;
      v148 = 0;
      if ( (_QWORD)v104 )
      {
        v56 = n;
        v57 = v59.m128i_i64[0];
        v59.m128i_i64[0] = v104;
        n = 16 * v104;
        v147 = (void *)qalloc_or_throw(16 * v104);
        *((_QWORD *)&v148 + 1) = v59.m128i_i64[0];
        memcpy(v147, src, n);
        v23 = (int *)v56;
        v22 = (int *)v57;
        *(_QWORD *)&v148 = v59.m128i_i64[0];
      }
      v149 = 0;
      v150 = -1;
      if ( v108 )
      {
        v27 = _mm_loadh_ps((const double *)&v109);
        v151 = v107;
        v152 = v27;
        v153 = v110;
        *(_QWORD *)(v108 + 8) = &v151;
        v108 = 0;
        v154 = v111;
        v109 = v23;
        v110 = v23;
        v111 = 0;
      }
      else
      {
        v151 = 0;
        v152.m128_u64[0] = 0;
        v152.m128_u64[1] = (unsigned __int64)&v151;
        v153 = &v151;
        v154 = 0;
      }
      v28 = _mm_load_si128(&v117);
      v166 = nullptr;
      v29 = _mm_loadu_si128(&v115);
      v155 = v112;
      v160 = v28;
      v30 = _mm_loadu_si128(&v119);
      v156 = v113;
      v162 = v30;
      v31 = _mm_load_si128(&v121);
      v157 = v114;
      v164 = v31;
      v32 = _mm_load_si128(&v122);
      v159 = v116;
      v158 = v29;
      v161 = v118;
      v114 = 0;
      v116 = 0;
      v118 = 0;
      v163 = v120;
      v120 = 0;
      v115 = 0;
      v117 = 0;
      v119 = 0;
      v121 = 0;
      v165 = v32;
      v167 = 0;
      if ( (_QWORD)v124 )
      {
        v58 = v22;
        v59.m128i_i64[0] = v124;
        n = 16 * v124;
        v166 = (void *)qalloc_or_throw(16 * v124);
        *((_QWORD *)&v167 + 1) = v59.m128i_i64[0];
        memcpy(v166, v123, n);
        v22 = v58;
        *(_QWORD *)&v167 = v59.m128i_i64[0];
      }
      v168 = 0;
      v169 = -1;
      if ( v128 )
      {
        v33 = _mm_loadh_ps((const double *)&v129);
        v170 = v127;
        v171 = v33;
        v172 = v130;
        *(_QWORD *)(v128 + 8) = &v170;
        v128 = 0;
        v173 = v131;
        v129 = v22;
        v130 = v22;
        v131 = 0;
      }
      else
      {
        v170 = 0;
        v171.m128_u64[0] = 0;
        v171.m128_u64[1] = (unsigned __int64)&v170;
        v172 = &v170;
        v173 = 0;
      }
      v178 = 0;
      v176[1] = v135;
      v34 = _mm_loadu_si128(&v136);
      v174 = v132;
      v175 = v133;
      v176[0] = v134;
      v177 = v34;
      if ( v132 == (__int64 *)v61 )
      {
        v174 = &v178;
        v178 = v137[0];
      }
      if ( v134 )
        v174[*(_QWORD *)(v134 + 8) % v133] = (__int64)v176;
      v136.m128i_i64[1] = 0;
      v133 = 1;
      v132 = (__int64 *)v61;
      v137[0] = 0;
      v134 = 0;
      v135 = 0;
      if ( v139 )
      {
        v35 = _mm_loadh_ps((const double *)&v140);
        v179 = v138;
        v180 = v35;
        v181 = v141;
        *(_QWORD *)(v139 + 8) = &v179;
        v139 = 0;
        v182 = v142;
        v142 = 0;
        v140 = &v138;
        v141 = &v138;
      }
      else
      {
        v179 = 0;
        v180.m128_u64[0] = 0;
        v180.m128_u64[1] = (unsigned __int64)&v179;
        v181 = &v179;
        v182 = 0;
      }
      v183 = v143;
      v36 = *(_QWORD **)(v66 + 1120);
      v37 = (_QWORD *)(v66 + 1112);
      if ( !v36 )
        goto LABEL_43;
      do
      {
        if ( v36[4] >= (unsigned __int64)v144 )
        {
          v37 = v36;
          v36 = (_QWORD *)v36[2];
        }
        else
        {
          v36 = (_QWORD *)v36[3];
        }
      }
      while ( v36 );
      if ( (_QWORD *)(v66 + 1112) == v37 || (unsigned __int64)v144 < v37[4] )
LABEL_43:
        v37 = sub_11B60((_QWORD *)(v66 + 1104), v37, &v144);
      v61 = (size_t)v37;
      sub_E270((__int64)&v145);
      v38 = v66;
      v39 = _mm_loadu_si128(&v83);
      v83 = 0;
      v40 = *(_QWORD *)(v66 + 1216);
      *(_DWORD *)(v66 + 1208) = v80;
      *(_WORD *)(v38 + 1212) = v81;
      v41 = v82;
      v82 = 0;
      if ( v40 )
      {
        *(_QWORD *)(v38 + 1224) = 0;
        n = (size_t)v37;
        v61 = v41;
        v59 = v39;
        qfree(v40);
        v39 = _mm_load_si128(&v59);
        v41 = v61;
      }
      v42 = v66;
      v43 = v37 + 5;
      v44 = v65;
      *(__m128i *)(v66 + 1224) = v39;
      v45 = _mm_loadu_si128(&v84);
      *(_QWORD *)(v42 + 1216) = v41;
      v46 = v88;
      *(__m128i *)(v42 + 1240) = v45;
      v47 = _mm_loadu_si128(&v85);
      *(_QWORD *)(v42 + 1304) = v46;
      *(__m128i *)(v42 + 1256) = v47;
      v48 = _mm_loadu_si128(&v86);
      *(_QWORD *)(v42 + 216) = v43;
      *(__m128i *)(v42 + 1272) = v48;
      v49 = _mm_loadu_si128(&v87);
      *(_QWORD *)(v42 + 120) = v43;
      *(__m128i *)(v42 + 1288) = v49;
      sub_60AE0(&v67, v42, *(_QWORD *)(a3 + 8), v10, v44);
      if ( v67 )
      {
        *(_DWORD *)a1 = 1;
        *(_BYTE *)(a1 + 24) = 0;
      }
      else
      {
        sub_61780((unsigned int)&v144, v66, *(_QWORD *)(a3 + 8), v64, *(_QWORD *)(a6 + 16), a6 + 32, v66 + 1152);
        v50 = *(_QWORD **)(a7 + 16);
        v51 = v66;
        if ( v50 )
        {
          do
          {
            v52 = v50;
            v50 = (_QWORD *)*v50;
            operator delete(v52, 0x18u);
          }
          while ( v50 );
          v66 = v51;
        }
        if ( *(_QWORD *)a7 != a7 + 48 )
          operator delete(*(void **)a7, 8LL * *(_QWORD *)(a7 + 8));
        v53 = v144;
        *(__m128i *)(a7 + 32) = _mm_load_si128((const __m128i *)&v147);
        if ( v53 == (__int128 *)((char *)&v148 + 8) )
        {
          v53 = (_OWORD *)(a7 + 48);
          *(_QWORD *)(a7 + 48) = *((_QWORD *)&v148 + 1);
        }
        v54 = v145;
        *(_QWORD *)a7 = v53;
        v55 = v146;
        *(__m128i *)(a7 + 8) = v54;
        *(_QWORD *)(a7 + 24) = v55;
        if ( v54.m128i_i64[1] )
          *((_QWORD *)v53 + *(_QWORD *)(v54.m128i_i64[1] + 8) % v54.m128i_i64[0]) = a7 + 16;
        sub_60DE0(a1, v66, a3, v68, v69);
      }
    }
    sub_E270((__int64)v62);
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
    if ( v77 )
    {
      if ( !v74 )
        goto LABEL_6;
    }
    else if ( !v74 )
    {
      goto LABEL_6;
    }
    v75 = 0;
    qfree(v74);
    goto LABEL_6;
  }
  v19 = v74;
  *(_BYTE *)(a1 + 24) = 1;
  v20 = _mm_loadh_ps(v76);
  *(_QWORD *)a1 = v19;
  *(__m128 *)(a1 + 8) = v20;
LABEL_6:
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree(v82);
  }
  if ( v100 )
  {
    if ( v89.m128i_i64[0] )
    {
      v89.m128i_i64[1] = 0;
      qfree(v89.m128i_i64[0]);
    }
  }
  else if ( v93 )
  {
    v94.m128i_i64[0] = 0;
    qfree(v93);
  }
  return a1;
}
