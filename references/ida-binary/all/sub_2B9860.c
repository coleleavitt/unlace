unsigned __int64 __fastcall sub_2B9860(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        const __m128i *a4,
        char a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  _BYTE *v19; // rsi
  __m128i v21; // xmm0
  __m128 v22; // xmm3
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // ecx
  int v26; // edx
  __m128 v27; // xmm0
  __int64 v28; // rsi
  int v29; // r8d
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rbp
  const __m128i *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // cf
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  __int64 v42; // r15
  __int64 (__fastcall *v43)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v44; // rax
  int v45; // ebp
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(__int64); // rax
  int v57; // eax
  _DWORD *v58; // rax
  _QWORD *v59; // rdi
  int v60; // ebx
  __int64 (*v61)(); // rax
  unsigned int v62; // r12d
  double v63; // xmm4_8
  double v64; // xmm5_8
  __int64 v65; // rdi
  unsigned int v66; // r8d
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 (__fastcall *v70)(__int64, int); // rax
  int v71; // eax
  __int64 v72; // rbx
  unsigned int *v73; // rbp
  __int64 (__fastcall *v74)(__int64, int, int); // rax
  unsigned int v75; // r12d
  unsigned int v76; // esi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned int v82; // esi
  unsigned int v83; // eax
  __int64 v84; // rcx
  _QWORD *v85; // rdx
  _QWORD *v86; // rcx
  __int8 v87; // r12
  __int64 v88; // r9
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __m128 *v94; // rax
  int *v95; // rbx
  int v96; // r13d
  int v97; // ebp
  int v98; // r12d
  unsigned int v99; // r15d
  unsigned int v100; // r12d
  unsigned int v101; // ebp
  __int64 v102; // rdx
  _DWORD *v103; // rax
  _DWORD *v104; // rdx
  __int64 v105; // rdi
  void (*v106)(); // rax
  double v107; // xmm0_8
  const char *v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rbp
  const __m128i *v114; // rdi
  __int64 v115; // rdx
  __m128i v116; // xmm0
  __m128i v117; // rax
  __int64 v118; // rdx
  unsigned int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // rax
  unsigned __int64 v122; // rbp
  __int64 v123; // rcx
  __int64 v124; // rdi
  unsigned int v125; // eax
  const char *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // r10
  const __m128i *v130; // rdi
  __int64 v131; // rdx
  __m128i v132; // xmm0
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rbp
  __int64 v138; // rbx
  __int64 v139; // r13
  __int64 v140; // rdx
  __m128i v141; // xmm0
  __m128i v142; // xmm0
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  __int64 v145; // rdi
  double v146; // [rsp+0h] [rbp-198h]
  unsigned __int32 v147; // [rsp+0h] [rbp-198h]
  __int64 v148; // [rsp+0h] [rbp-198h]
  __int64 v149; // [rsp+18h] [rbp-180h]
  __int64 v150; // [rsp+18h] [rbp-180h]
  __int64 v151; // [rsp+20h] [rbp-178h]
  __int64 v152; // [rsp+20h] [rbp-178h]
  __int64 v153; // [rsp+28h] [rbp-170h]
  int *v154; // [rsp+38h] [rbp-160h]
  __int64 v155; // [rsp+40h] [rbp-158h]
  __int64 v156; // [rsp+50h] [rbp-148h]
  unsigned __int64 v157; // [rsp+50h] [rbp-148h]
  __int64 v158; // [rsp+50h] [rbp-148h]
  unsigned __int64 v159; // [rsp+50h] [rbp-148h]
  __int64 v160; // [rsp+60h] [rbp-138h]
  char v161; // [rsp+6Bh] [rbp-12Dh]
  int v162; // [rsp+6Ch] [rbp-12Ch]
  __int64 v163; // [rsp+70h] [rbp-128h]
  __int64 v164; // [rsp+70h] [rbp-128h]
  __int64 v165; // [rsp+78h] [rbp-120h]
  __int64 v166; // [rsp+88h] [rbp-110h] BYREF
  __int64 v167; // [rsp+90h] [rbp-108h] BYREF
  unsigned __int32 v168; // [rsp+98h] [rbp-100h]
  __m128i v169; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v170; // [rsp+B0h] [rbp-E8h] BYREF
  __m128i v171; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i v172; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v173; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v174[2]; // [rsp+F0h] [rbp-A8h] BYREF
  __m128i v175; // [rsp+100h] [rbp-98h] BYREF
  __m128i v176; // [rsp+110h] [rbp-88h] BYREF
  __m128i v177; // [rsp+120h] [rbp-78h] BYREF
  __m128i v178; // [rsp+130h] [rbp-68h] BYREF
  __int64 v179; // [rsp+140h] [rbp-58h]
  __int16 v180; // [rsp+148h] [rbp-50h]
  unsigned __int64 v181; // [rsp+158h] [rbp-40h]

  v19 = *(_BYTE **)(a2 + 16);
  v181 = __readfsqword(0x28u);
  sub_175DC0(a1, v19, a3);
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v21 = _mm_loadu_si128(a4);
  *(_QWORD *)a1 = &graph_paint_context_t___vtable;
  v22 = (__m128)v21;
  v146 = *(double *)v21.m128i_i64;
  *(_QWORD *)(a1 + 400) = a4[2].m128i_i64[0];
  v23 = *(_QWORD *)(a2 + 440);
  *(__m128i *)(a1 + 368) = v21;
  v24 = _mm_loadu_si128(a4 + 1);
  *(_QWORD *)(a1 + 408) = v23;
  *(__m128i *)(a1 + 384) = v24;
  *(_QWORD *)(a1 + 360) = a2;
  *(_DWORD *)(a1 + 432) = 1;
  *(_BYTE *)(a1 + 436) = a5;
  *(_BYTE *)(a1 + 437) = a6;
  *(_OWORD *)(a1 + 416) = 0;
  v25 = a3->m128i_i32[2];
  v26 = a3->m128i_i32[1];
  v27 = (__m128)*(unsigned __int64 *)(a1 + 384);
  v28 = a3->m128i_u32[0];
  v154 = (int *)(a1 + 416);
  v29 = a3->m128i_i32[3];
  v169 = (__m128i)v22;
  v170.m128i_i64[0] = v27.m128_u64[0];
  *(_QWORD *)(a1 + 416) = sub_2B3240((double *)v169.m128i_i64, v28, v26, v25, v29);
  *(_QWORD *)(a1 + 424) = v30;
  if ( a5 )
  {
    *(_BYTE *)(a1 + 284) = 0;
    v31 = 0;
LABEL_3:
    v28 = 0;
    v32 = qvector_reserve(a1 + 288, 0, 8, 16);
    v33 = *(_QWORD *)(a1 + 296);
    v34 = *(_QWORD *)(a1 + 304);
    v35 = v32;
    *(_QWORD *)(a1 + 304) = v31;
    v36 = *(const __m128i **)(a1 + 288);
    v37 = v33 - 1;
    if ( v37 >= 0 )
    {
      v38 = v32;
      do
      {
        v27 = (__m128)_mm_loadu_si128(v36);
        v38 += 16;
        ++v36;
        *(__m128 *)(v38 - 16) = v27;
        v39 = v37-- == 0;
      }
      while ( !v39 );
      v36 = *(const __m128i **)(a1 + 288);
    }
    *(double *)v27.m128_u64 = qfree(v36, nullptr);
    *(_QWORD *)(a1 + 288) = v35;
    *(_QWORD *)(a1 + 304) = v34;
    goto LABEL_8;
  }
  QT::QFont::pointSizeF((QT::QFont *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL) + 56LL));
  a8 = (__m128)0x4008000000000000uLL;
  v31 = *(_QWORD *)(a1 + 304);
  *(double *)a8.m128_u64 = 3.0 / *(double *)v27.m128_u64;
  v27 = (__m128)*(unsigned __int64 *)&v146;
  *(_BYTE *)(a1 + 284) = v146 > *(double *)a8.m128_u64;
  if ( v31 <= 7 )
    goto LABEL_3;
LABEL_8:
  v41 = *(_QWORD **)(a1 + 360);
  v42 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL);
  v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*v41 + 504LL);
  if ( v43 == sub_2B36E0 )
  {
    v44 = sub_1EA6A0(v41[2] + 384LL, v28, (__int64)sub_2B36E0, v40, *(double *)v27.m128_u64);
    v45 = *(_DWORD *)(v44 + 32);
    v46 = v44;
    if ( v45 != (unsigned int)sub_1EB540((_QWORD *)v41[2], (__int64)v41) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)v41,
        v47,
        v48,
        v49,
        v50,
        v27,
        a8,
        a9,
        v22,
        v51,
        v52,
        a13,
        a14,
        SLOBYTE(v146));
    v162 = *(_DWORD *)(v46 + 24);
  }
  else
  {
    v162 = ((__int64 (__fastcall *)(_QWORD, double))v43)(*(_QWORD *)(a1 + 360), *(double *)v27.m128_u64);
  }
  v53 = *(_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL);
  v167 = v42;
  v168 = 0;
  v160 = v53;
  v54 = node_iterator_goup(&v167);
  v55 = *(_QWORD *)v54;
  LODWORD(v54) = *(_DWORD *)(v54 + 8);
  v167 = v55;
  v168 = v54;
  while ( 1 )
  {
    v56 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 56LL);
    v57 = v56 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(v42 + 184) : v56(v42);
    v147 = v168;
    if ( v57 == v168 && v42 == v167 )
      break;
    v58 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v42 + 152LL))(v42, v168);
    if ( v58[2] > *(_DWORD *)(a1 + 416)
      && *(_DWORD *)(a1 + 424) > *v58
      && *(_DWORD *)(a1 + 420) < v58[3]
      && *(_DWORD *)(a1 + 428) > v58[1] )
    {
      v59 = *(_QWORD **)(a1 + 360);
      v60 = 0;
      v61 = *(__int64 (**)())(*v59 + 640LL);
      if ( v61 != sub_2B2460 )
      {
        v133 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v61)(v59, v42, v147);
        v59 = *(_QWORD **)(a1 + 360);
        v60 = v133;
      }
      v169.m128i_i8[0] = 1;
      v169.m128i_i64[1] = -1;
      v169.m128i_i32[1] = v147;
      v170.m128i_i32[0] = -1;
      v27.m128_u64[0] = 0;
      v62 = v60 | (unsigned __int8)sub_2B7F20(v59, (unsigned __int8 *)&v169);
      v65 = *(_QWORD *)(a1 + 360);
      v169 = 0;
      v66 = *(_DWORD *)(a1 + 432);
      v170 = 0;
      v171 = 0;
      if ( v162 == v147 )
        v62 |= 2u;
      v172 = 0;
      v173 = 0;
      if ( (unsigned __int8)sub_2B97C0(v65, (__int64)&v169, v42, v147, v66, v62, 0.0, a8, a9, v22, v63, v64, a13, a14) )
      {
        v121 = *(_QWORD *)(a1 + 320);
        v122 = *(_QWORD *)(a1 + 328);
        if ( v122 < v121 + 1 )
        {
          v134 = qvector_reserve(a1 + 312, 0, v121 + 1, 152);
          v135 = *(_QWORD *)(a1 + 320);
          v136 = *(_QWORD *)(a1 + 328);
          *(_QWORD *)(a1 + 328) = v122;
          v137 = *(_QWORD *)(a1 + 312);
          v150 = v136;
          v138 = v135 - 1;
          if ( v138 >= 0 )
          {
            v151 = v134;
            v139 = v134;
            do
            {
              *(_DWORD *)v139 = *(_DWORD *)v137;
              *(_QWORD *)(v139 + 8) = *(_QWORD *)(v137 + 8);
              *(_QWORD *)(v139 + 16) = *(_QWORD *)(v137 + 16);
              *(_DWORD *)(v139 + 24) = *(_DWORD *)(v137 + 24);
              *(_QWORD *)(v139 + 32) = *(_QWORD *)(v137 + 32);
              v140 = *(_QWORD *)(v137 + 40);
              v141 = _mm_loadu_si128((const __m128i *)(v137 + 48));
              *(_QWORD *)(v137 + 40) = 0;
              *(_QWORD *)(v139 + 40) = v140;
              *(__m128i *)(v139 + 48) = v141;
              v142 = _mm_loadu_si128((const __m128i *)(v137 + 72));
              LODWORD(v140) = *(_DWORD *)(v137 + 64);
              *(_QWORD *)(v137 + 56) = 0;
              *(__m128i *)(v139 + 72) = v142;
              v143 = _mm_loadu_si128((const __m128i *)(v137 + 88));
              *(_DWORD *)(v139 + 64) = v140;
              LODWORD(v140) = *(_DWORD *)(v137 + 68);
              *(__m128i *)(v139 + 88) = v143;
              v144 = _mm_loadu_si128((const __m128i *)(v137 + 104));
              *(_DWORD *)(v139 + 68) = v140;
              *(__m128i *)(v139 + 104) = v144;
              *(__m128i *)(v139 + 120) = _mm_loadu_si128((const __m128i *)(v137 + 120));
              *(__m128i *)(v139 + 136) = _mm_loadu_si128((const __m128i *)(v137 + 136));
              v145 = *(_QWORD *)(v137 + 40);
              if ( v145 )
              {
                *(_QWORD *)(v137 + 48) = 0;
                qfree(v145, nullptr);
              }
              v137 += 152;
              v139 += 152;
              v39 = v138-- == 0;
            }
            while ( !v39 );
            v134 = v151;
            v137 = *(_QWORD *)(a1 + 312);
          }
          v152 = v134;
          qfree(v137, nullptr);
          v123 = v152;
          *(_QWORD *)(a1 + 328) = v150;
          v121 = *(_QWORD *)(a1 + 320);
          *(_QWORD *)(a1 + 312) = v152;
        }
        else
        {
          v123 = *(_QWORD *)(a1 + 312);
        }
        v124 = v123 + 152 * v121;
        *(_OWORD *)(v124 + 48) = 0;
        v124 += 8;
        *(_OWORD *)(v124 + 64) = 0;
        *(_OWORD *)(v124 + 80) = 0;
        *(_OWORD *)(v124 + 96) = 0;
        *(_OWORD *)(v124 + 112) = 0;
        *(_OWORD *)(v124 + 128) = 0;
        *(_QWORD *)v124 = 56;
        *(_QWORD *)(v124 + 8) = -1;
        *(_DWORD *)(v124 + 16) = 0;
        *(_QWORD *)(v124 + 24) = -1;
        *(_QWORD *)(v124 + 32) = 0;
        ++*(_QWORD *)(a1 + 320);
        *(_DWORD *)(v124 - 8) = v147;
        *(_DWORD *)(v124 + 56) = v62;
        *(__m128i *)(v124 + 64) = _mm_load_si128(&v169);
        *(__m128i *)(v124 + 80) = _mm_load_si128(&v170);
        *(__m128i *)(v124 + 96) = _mm_load_si128(&v171);
        *(__m128i *)(v124 + 112) = _mm_load_si128(&v172);
        v27 = (__m128)_mm_load_si128(&v173);
        *(__m128 *)(v124 + 128) = v27;
        get_node_info(v124, *(_QWORD *)(v42 + 72), v147, v123, v67, v68);
      }
    }
    v69 = *(_QWORD *)(a1 + 360);
    v161 = 0;
    v155 = v69;
    if ( *(_DWORD *)(v69 + 412) != -1 )
    {
      v161 = *(_BYTE *)(v69 + 409);
      if ( v161 )
        v161 = *(_BYTE *)(v69 + 408);
    }
    v70 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v42 + 96LL);
    if ( v70 == interactive_graph_t__::vfunc_12 )
      v71 = *(_DWORD *)(*(_QWORD *)(v42 + 176) + 24LL * (int)v147 + 8);
    else
      v71 = v70(v42, v147);
    v149 = v71;
    if ( v71 )
    {
      v72 = 0;
      v153 = v160 + 40;
      do
      {
        while ( 1 )
        {
          v74 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v42 + 112LL);
          a8 = (__m128)(v74 == interactive_graph_t__::vfunc_14
                      ? _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 176) + 24LL * (int)v147)
                                                    + 4LL * (int)v72))
                      : _mm_cvtsi32_si128(v74(v42, v147, v72)));
          v27.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v147), (__m128i)a8).m128i_u64[0];
          v166 = v27.m128_u64[0];
          v73 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v42 + 160LL))(
                                  v42,
                                  v27.m128_u64[0]);
          if ( v73 )
          {
            if ( (unsigned __int8)sub_2B2B40(v42, v154, &v166) )
              break;
          }
          if ( v149 == ++v72 )
            goto LABEL_72;
        }
        v75 = sub_525030(v153, *v73);
        if ( v75 == -1 )
          v75 = sub_524F80(v153, 2165563971LL, 0);
        v76 = sub_524F80(v153, 2165563975LL, 0);
        if ( v76 )
        {
          v77 = *(_QWORD *)(a1 + 360);
          v78 = *(_QWORD *)(v77 + 192);
          v79 = v78 + 20LL * *(_QWORD *)(v77 + 200);
          if ( v78 != v79 )
          {
            v80 = *(_QWORD *)(v77 + 192);
            while ( *(_BYTE *)v80
                 || (_DWORD)v166 != *(_DWORD *)(v80 + 12)
                 || SHIDWORD(v166) < *(_DWORD *)(v80 + 16)
                 || SHIDWORD(v166) > *(_DWORD *)(v80 + 16)
                 || *(_DWORD *)(v80 + 8) != -1 )
            {
              v80 += 20;
              if ( v79 == v80 )
                goto LABEL_46;
            }
            if ( v80 != v79 )
            {
              v75 = v76;
              goto LABEL_57;
            }
LABEL_46:
            v81 = v78;
            while ( !*(_BYTE *)v81 || (_DWORD)v166 != *(_DWORD *)(v81 + 4) )
            {
              v81 += 20;
              if ( v79 == v81 )
                goto LABEL_57;
            }
            if ( v81 != v79 )
            {
              while ( !*(_BYTE *)v78 || HIDWORD(v166) != *(_DWORD *)(v78 + 4) )
              {
                v78 += 20;
                if ( v79 == v78 )
                  goto LABEL_57;
              }
              if ( v78 != v79 )
                v75 = v76;
            }
          }
        }
LABEL_57:
        v82 = -2129403322;
        v83 = sub_524F80(v153, 2165563974LL, 0);
        if ( v83 )
        {
          v84 = *(_QWORD *)(a1 + 360);
          v82 = v166;
          v85 = *(_QWORD **)(v84 + 496);
          v86 = &v85[*(_QWORD *)(v84 + 504)];
          if ( v85 != v86 )
          {
            while ( v166 != *v85 )
            {
              if ( v86 == ++v85 )
                goto LABEL_64;
            }
            if ( v85 != v86 )
              v75 = v83;
          }
        }
LABEL_64:
        if ( v161 && v166 == *(_QWORD *)(v155 + 412) )
        {
          v117.m128i_i64[0] = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v75), 8), v82);
          v175 = v117;
          v174[0] = sub_518C40(&v175);
          v174[1] = v118;
          v75 = __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)v174)), 8) & 0xFFFFFF;
        }
        v170.m128i_i8[0] = sub_2B47C0((_QWORD *)a1, v75, *(double *)v27.m128_u64);
        v87 = v170.m128i_i8[0];
        v88 = v166;
        v89 = *(_QWORD *)(a1 + 344);
        v90 = *(_QWORD *)(a1 + 336);
        v169.m128i_i64[1] = (__int64)v73;
        v169.m128i_i64[0] = v166;
        v170.m128i_i8[1] = -1;
        v91 = *(_QWORD *)(a1 + 352);
        v92 = v89 + 1;
        if ( (unsigned __int64)&v169 < v90 || (unsigned __int64)&v169 >= v90 + 24 * v91 )
        {
          if ( v91 < v92 )
          {
            v109 = nullptr;
            v156 = *(_QWORD *)(a1 + 352);
            v110 = qvector_reserve(a1 + 336, 0, v92, 24);
            v111 = *(_QWORD *)(a1 + 344);
            v112 = v110;
            v113 = *(_QWORD *)(a1 + 352);
            v114 = *(const __m128i **)(a1 + 336);
            *(_QWORD *)(a1 + 352) = v156;
            v115 = v111 - 1;
            if ( v115 >= 0 )
            {
              do
              {
                v116 = _mm_loadu_si128(v114);
                v110 += 24;
                v114 = (const __m128i *)((char *)v114 + 24);
                *(__m128i *)(v110 - 24) = v116;
                v109 = (const char *)v114[-1].m128i_i64[1];
                *(_QWORD *)(v110 - 8) = v109;
                v39 = v115-- == 0;
              }
              while ( !v39 );
              v114 = *(const __m128i **)(a1 + 336);
            }
            v157 = v112;
            qfree(v114, v109);
            v90 = v157;
            *(_QWORD *)(a1 + 352) = v113;
            v89 = *(_QWORD *)(a1 + 344);
            *(_QWORD *)(a1 + 336) = v157;
          }
          v27 = (__m128)_mm_load_si128(&v169);
          v94 = (__m128 *)(v90 + 24 * v89);
          *v94 = v27;
          v94[1].m128_u64[0] = v170.m128i_i64[0];
        }
        else
        {
          if ( v91 < v92 )
          {
            v126 = nullptr;
            v163 = v166;
            v158 = *(_QWORD *)(a1 + 352);
            v127 = qvector_reserve(a1 + 336, 0, v92, 24);
            v128 = v127;
            v129 = *(_QWORD *)(a1 + 352);
            v130 = *(const __m128i **)(a1 + 336);
            v131 = *(_QWORD *)(a1 + 344) - 1LL;
            *(_QWORD *)(a1 + 352) = v158;
            if ( v131 >= 0 )
            {
              do
              {
                v132 = _mm_loadu_si128(v130);
                v127 += 24;
                v130 = (const __m128i *)((char *)v130 + 24);
                *(__m128i *)(v127 - 24) = v132;
                v126 = (const char *)v130[-1].m128i_i64[1];
                *(_QWORD *)(v127 - 8) = v126;
                v39 = v131-- == 0;
              }
              while ( !v39 );
              v130 = *(const __m128i **)(a1 + 336);
            }
            v165 = v163;
            v164 = v129;
            v159 = v128;
            *(double *)v27.m128_u64 = qfree(v130, v126);
            v90 = v159;
            v89 = *(_QWORD *)(a1 + 344);
            v88 = v165;
            *(_QWORD *)(a1 + 336) = v159;
            *(_QWORD *)(a1 + 352) = v164;
          }
          v93 = v90 + 24 * v89;
          *(_QWORD *)v93 = v88;
          *(_QWORD *)(v93 + 8) = v73;
          *(_BYTE *)(v93 + 16) = v87;
          *(_BYTE *)(v93 + 17) = -1;
        }
        ++*(_QWORD *)(a1 + 344);
        ++v72;
      }
      while ( v149 != v72 );
    }
LABEL_72:
    ++v168;
    node_iterator_goup(&v167);
  }
  v95 = *(int **)(a1 + 312);
  v148 = v160 + 40;
  if ( 152LL * *(_QWORD *)(a1 + 320) )
  {
    while ( 1 )
    {
      v96 = *v95;
      v97 = v95[16] & 1;
      v98 = v95[16] & 2;
      v99 = sub_524F80(v148, 2165563963LL, 0);
      if ( v98 )
        break;
      if ( v97 )
      {
        v120 = sub_524F80(v148, 2165563964LL, 0);
        v100 = v95[4];
        v99 = v120;
        if ( v100 == -1 )
        {
          v100 = v120;
          if ( *(_BYTE *)(a1 + 284) )
            v100 = sub_1EC7E0(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL));
        }
LABEL_97:
        v101 = sub_524F80(v148, 2165564018LL, 0);
        goto LABEL_81;
      }
      v100 = v95[4];
      if ( v100 != -1 )
        goto LABEL_80;
      v125 = sub_1EC7E0(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL));
      v101 = v95[5];
      v100 = v125;
      if ( v101 == -1 )
      {
LABEL_112:
        QT::QColor::QColor(&v175, 2);
        v101 = __ROR4__(_byteswap_ulong(QT::QColor::rgb((QT::QColor *)&v175)), 8) & 0xFFFFFF;
      }
LABEL_81:
      v102 = *(_QWORD *)(a1 + 360);
      v103 = *(_DWORD **)(v102 + 472);
      v104 = &v103[*(_QWORD *)(v102 + 480)];
      if ( v103 != v104 )
      {
        while ( v96 != *v103 )
        {
          if ( v104 == ++v103 )
            goto LABEL_87;
        }
        if ( v103 != v104 )
          v101 = sub_524F80(v148, 2165563966LL, 0);
      }
LABEL_87:
      *((_BYTE *)v95 + 68) = sub_2B47C0((_QWORD *)a1, v99, *(double *)v27.m128_u64);
      *((_BYTE *)v95 + 69) = sub_2B47C0((_QWORD *)a1, v100, *(double *)v27.m128_u64);
      *((_BYTE *)v95 + 70) = sub_2B47C0((_QWORD *)a1, v101, *(double *)v27.m128_u64);
      v95 += 38;
      *((_BYTE *)v95 - 81) = -1;
      if ( v95 == (int *)(*(_QWORD *)(a1 + 312) + 152LL * *(_QWORD *)(a1 + 320)) )
        goto LABEL_88;
    }
    v119 = sub_524F80(v148, 2165563965LL, 0);
    v100 = v95[4];
    v99 = v119;
    if ( v100 == -1 )
    {
      v100 = v119;
      if ( *(_BYTE *)(a1 + 284) )
        v100 = sub_1EC7E0(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL));
    }
    if ( v97 )
      goto LABEL_97;
LABEL_80:
    v101 = v95[5];
    if ( v101 == -1 )
      goto LABEL_112;
    goto LABEL_81;
  }
LABEL_88:
  v105 = *(_QWORD *)(a1 + 360);
  v106 = *(void (**)())(*(_QWORD *)v105 + 840LL);
  if ( v106 != nullsub_79 )
    ((void (__fastcall *)(__int64, __int64))v106)(v105, a1);
  v176 = 0;
  v178 = 0;
  v107 = *(double *)(a1 + 368);
  v180 = 0;
  v175 = _mm_loadl_epi64((const __m128i *)&dbl_5DC300);
  v177 = v175;
  v179 = 0x3FF0000000000000LL;
  QT::QTransform::scale((QT::QTransform *)&v175, v107, v107);
  QT::QTransform::translate((QT::QTransform *)&v175, -*(double *)(a1 + 376), -*(double *)(a1 + 384));
  *(__m128i *)(a1 + 168) = _mm_load_si128(&v175);
  *(__m128i *)(a1 + 184) = _mm_load_si128(&v176);
  *(__m128i *)(a1 + 200) = _mm_load_si128(&v177);
  *(__m128i *)(a1 + 216) = _mm_load_si128(&v178);
  *(__m128i *)(a1 + 226) = _mm_loadu_si128((const __m128i *)((char *)&v178.m128i_u64[1] + 2));
  return v181 - __readfsqword(0x28u);
}
