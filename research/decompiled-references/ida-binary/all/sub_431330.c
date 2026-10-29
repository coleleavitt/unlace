unsigned __int64 __fastcall sub_431330(__int64 *a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 *v5; // r13
  __int64 **v6; // rbx
  __int64 *v7; // rdi
  __int64 *v8; // rdi
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 (*v20)(); // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // r15
  size_t v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __m128i v82; // xmm0
  __int64 v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rax
  __m128i v88; // xmm0
  __int64 v89; // rdi
  void *v91; // r15
  void *v92; // rdi
  __int64 v93; // r12
  void *v94; // r15
  void *v95; // rdi
  void *v96; // r9
  void *v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  size_t v101; // [rsp+0h] [rbp-418h]
  void *v102; // [rsp+8h] [rbp-410h]
  __int64 v103; // [rsp+10h] [rbp-408h] BYREF
  __int128 v104; // [rsp+18h] [rbp-400h]
  void *src; // [rsp+28h] [rbp-3F0h] BYREF
  __int128 v106; // [rsp+30h] [rbp-3E8h]
  __int64 v107; // [rsp+40h] [rbp-3D8h]
  __int128 v108; // [rsp+48h] [rbp-3D0h]
  void *v109; // [rsp+58h] [rbp-3C0h] BYREF
  __int128 v110; // [rsp+60h] [rbp-3B8h]
  __int64 v111; // [rsp+70h] [rbp-3A8h] BYREF
  __int128 v112; // [rsp+78h] [rbp-3A0h]
  void *dest; // [rsp+88h] [rbp-390h] BYREF
  __int128 v114; // [rsp+90h] [rbp-388h]
  __int64 v115; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v116; // [rsp+A8h] [rbp-370h]
  __int64 v117; // [rsp+B8h] [rbp-360h] BYREF
  __int128 v118; // [rsp+C0h] [rbp-358h]
  __int64 v119; // [rsp+D0h] [rbp-348h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-340h]
  __int64 v121; // [rsp+E8h] [rbp-330h] BYREF
  __int128 v122; // [rsp+F0h] [rbp-328h]
  __int64 v123; // [rsp+100h] [rbp-318h] BYREF
  __int64 v124; // [rsp+108h] [rbp-310h]
  unsigned __int64 v125; // [rsp+110h] [rbp-308h]
  __int64 v126; // [rsp+118h] [rbp-300h]
  __int64 v127; // [rsp+120h] [rbp-2F8h]
  __int64 v128; // [rsp+130h] [rbp-2E8h]
  __int64 v129; // [rsp+138h] [rbp-2E0h]
  __int64 v130; // [rsp+148h] [rbp-2D0h]
  __int64 v131; // [rsp+150h] [rbp-2C8h]
  __int64 v132; // [rsp+160h] [rbp-2B8h]
  __int64 v133; // [rsp+168h] [rbp-2B0h]
  __int64 v134; // [rsp+178h] [rbp-2A0h]
  __int64 v135; // [rsp+180h] [rbp-298h]
  __int64 v136; // [rsp+190h] [rbp-288h]
  __int64 v137; // [rsp+198h] [rbp-280h]
  __int64 v138; // [rsp+1A8h] [rbp-270h]
  __int64 v139; // [rsp+1B0h] [rbp-268h]
  __int64 v140; // [rsp+1C0h] [rbp-258h]
  __int64 v141; // [rsp+1C8h] [rbp-250h]
  __int64 v142; // [rsp+1D8h] [rbp-240h]
  __int64 v143; // [rsp+1E0h] [rbp-238h]
  _BYTE *v144; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v145; // [rsp+1F8h] [rbp-220h]
  void *v146; // [rsp+208h] [rbp-210h] BYREF
  __int128 v147; // [rsp+210h] [rbp-208h]
  __int64 v148; // [rsp+220h] [rbp-1F8h]
  __int128 v149; // [rsp+228h] [rbp-1F0h]
  __int64 v150; // [rsp+238h] [rbp-1E0h]
  __int128 v151; // [rsp+240h] [rbp-1D8h]
  __int64 v152; // [rsp+250h] [rbp-1C8h]
  __int128 v153; // [rsp+258h] [rbp-1C0h]
  __int64 v154; // [rsp+268h] [rbp-1B0h]
  __int128 v155; // [rsp+270h] [rbp-1A8h]
  __int64 v156; // [rsp+280h] [rbp-198h]
  __int128 v157; // [rsp+288h] [rbp-190h]
  __int64 v158; // [rsp+298h] [rbp-180h]
  __int128 v159; // [rsp+2A0h] [rbp-178h]
  __int64 v160; // [rsp+2B0h] [rbp-168h]
  __int128 v161; // [rsp+2B8h] [rbp-160h]
  __int64 v162; // [rsp+2C8h] [rbp-150h]
  __int128 v163; // [rsp+2D0h] [rbp-148h]
  __int64 v164; // [rsp+2E0h] [rbp-138h] BYREF
  __m128i v165; // [rsp+2E8h] [rbp-130h] BYREF
  __int64 v166; // [rsp+2F8h] [rbp-120h]
  __m128i v167; // [rsp+300h] [rbp-118h] BYREF
  __int64 v168; // [rsp+310h] [rbp-108h]
  __m128i v169; // [rsp+318h] [rbp-100h] BYREF
  __int64 v170; // [rsp+328h] [rbp-F0h]
  __m128i v171; // [rsp+330h] [rbp-E8h] BYREF
  __int64 v172; // [rsp+340h] [rbp-D8h]
  __m128i v173; // [rsp+348h] [rbp-D0h] BYREF
  __int64 v174; // [rsp+358h] [rbp-C0h]
  __m128i v175; // [rsp+360h] [rbp-B8h] BYREF
  __int64 v176; // [rsp+370h] [rbp-A8h]
  __m128i v177; // [rsp+378h] [rbp-A0h] BYREF
  __int64 v178; // [rsp+388h] [rbp-90h]
  __m128i v179; // [rsp+390h] [rbp-88h] BYREF
  __int64 v180; // [rsp+3A0h] [rbp-78h]
  __m128i v181; // [rsp+3A8h] [rbp-70h] BYREF
  __int64 v182; // [rsp+3B8h] [rbp-60h]
  __m128i v183; // [rsp+3C0h] [rbp-58h] BYREF
  unsigned __int64 v184; // [rsp+3D8h] [rbp-40h]

  v2 = 0;
  v3 = 0;
  v4 = a1[1];
  v184 = __readfsqword(0x28u);
  v5 = a1;
  if ( v4 )
  {
    do
    {
      v6 = (__int64 **)(v2 + *v5);
      v7 = v6[27];
      if ( v7 )
      {
        v6[28] = nullptr;
        qfree(v7, a2);
      }
      v8 = v6[24];
      if ( v8 )
      {
        v6[25] = nullptr;
        qfree(v8, a2);
      }
      v9 = v6[21];
      if ( v9 )
      {
        v6[22] = nullptr;
        qfree(v9, a2);
      }
      v10 = v6[18];
      if ( v10 )
      {
        v6[19] = nullptr;
        qfree(v10, a2);
      }
      v11 = v6[15];
      if ( v11 )
      {
        v6[16] = nullptr;
        qfree(v11, a2);
      }
      v12 = v6[12];
      if ( v12 )
      {
        v6[13] = nullptr;
        qfree(v12, a2);
      }
      v13 = v6[9];
      if ( v13 )
      {
        v6[10] = nullptr;
        qfree(v13, a2);
      }
      v14 = v6[6];
      if ( v14 )
      {
        v6[7] = nullptr;
        qfree(v14, a2);
      }
      v15 = v6[3];
      if ( v15 )
      {
        v6[4] = nullptr;
        qfree(v15, a2);
      }
      a1 = *v6;
      if ( *v6 )
      {
        v6[1] = nullptr;
        qfree(a1, a2);
      }
      ++v3;
      v2 += 240;
    }
    while ( v4 != v3 );
  }
  v5[1] = 0;
  v16 = sub_426230(a1, a2);
  v17 = sub_417080((__int64)v16);
  v18 = *(_QWORD *)(v17 + 8);
  v19 = v17;
  if ( v18 )
  {
    v20 = *(__int64 (**)())(*(_QWORD *)v18 + 480LL);
    if ( v20 == sub_178B60 || !(unsigned __int8)v20() )
    {
      v103 = 0;
      src = nullptr;
      v107 = 0;
      v109 = nullptr;
      v111 = 0;
      dest = nullptr;
      v115 = 0;
      v117 = 0;
      v119 = 0;
      v121 = 0;
      v104 = 0;
      v106 = 0;
      v108 = 0;
      v110 = 0;
      v112 = 0;
      v114 = 0;
      v116 = 0;
      v118 = 0;
      v120 = 0;
      v122 = 0;
      v21 = qvector_reserve(&v103, 0, 4, 1);
      v103 = v21;
      *(_QWORD *)&v104 = 4;
      *(_WORD *)v21 = 25705;
      *(_BYTE *)(v21 + 2) = 98;
      *(_BYTE *)(v103 + 3) = 0;
      hvui_get_idaexe_path(&src, "ida");
      v22 = v106;
      if ( (unsigned __int64)v106 > 1 )
      {
        v91 = src;
        v92 = dest;
        if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)v106 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v106, 1);
          v92 = dest;
        }
        *(_QWORD *)&v114 = v22;
        memmove(v92, v91, v22 - 1);
        *((char *)dest + v22 - 1) = 0;
        v93 = v114;
        if ( (unsigned __int64)v114 >= 2 )
        {
          v94 = dest;
          v95 = v109;
          if ( *((_QWORD *)&v110 + 1) < (unsigned __int64)v114 )
          {
            v109 = (void *)qvector_reserve(&v109, v109, v114, 1);
            v95 = v109;
          }
          *(_QWORD *)&v110 = v93;
          memmove(v95, v94, v93 - 1);
          *((char *)v109 + v93 - 1) = 0;
          goto LABEL_28;
        }
      }
      else
      {
        *(_QWORD *)&v114 = 0;
      }
      *(_QWORD *)&v110 = 0;
LABEL_28:
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v19 + 8) + 440LL))(*(_QWORD *)(v19 + 8), &v111);
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v19 + 8) + 424LL))(
        *(_QWORD *)(v19 + 8),
        &v115,
        1);
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v19 + 8) + 424LL))(
        *(_QWORD *)(v19 + 8),
        &v117,
        2);
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v19 + 8) + 424LL))(
        *(_QWORD *)(v19 + 8),
        &v119,
        3);
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(v19 + 8) + 424LL))(
        *(_QWORD *)(v19 + 8),
        &v121,
        4);
      sub_41BD40((__int64)&v164, (__int64)&v103);
      v23 = v5[1];
      v24 = *v5;
      if ( v5[2] < (unsigned __int64)(v23 + 1) )
      {
        v99 = qvector_reserve(v5, v24, v23 + 1, 240);
        *v5 = v99;
        v23 = v5[1];
        v24 = v99;
      }
      v25 = 240 * v23 + v24;
      v26 = v164;
      *(__m128i *)(v25 + 8) = _mm_loadu_si128(&v165);
      v27 = _mm_load_si128(&v167);
      *(_QWORD *)v25 = v26;
      v28 = v166;
      *(__m128i *)(v25 + 32) = v27;
      v29 = _mm_loadu_si128(&v169);
      *(_QWORD *)(v25 + 24) = v28;
      v30 = v168;
      *(__m128i *)(v25 + 56) = v29;
      v31 = _mm_load_si128(&v171);
      *(_QWORD *)(v25 + 48) = v30;
      v32 = v170;
      *(__m128i *)(v25 + 80) = v31;
      v33 = _mm_loadu_si128(&v173);
      *(_QWORD *)(v25 + 72) = v32;
      v34 = v172;
      *(__m128i *)(v25 + 104) = v33;
      v35 = _mm_load_si128(&v175);
      *(_QWORD *)(v25 + 96) = v34;
      v36 = v174;
      *(__m128i *)(v25 + 128) = v35;
      v37 = _mm_loadu_si128(&v177);
      *(_QWORD *)(v25 + 120) = v36;
      v38 = v176;
      *(__m128i *)(v25 + 152) = v37;
      v39 = _mm_load_si128(&v179);
      *(_QWORD *)(v25 + 144) = v38;
      v40 = v178;
      *(__m128i *)(v25 + 176) = v39;
      *(_QWORD *)(v25 + 168) = v40;
      v41 = _mm_loadu_si128(&v181);
      *(_QWORD *)(v25 + 192) = v180;
      v42 = v182;
      *(__m128i *)(v25 + 200) = v41;
      v43 = _mm_load_si128(&v183);
      *(_QWORD *)(v25 + 216) = v42;
      *(__m128i *)(v25 + 224) = v43;
      ++v5[1];
      sub_41BD40((__int64)&v123, (__int64)&v103);
      v44 = v123;
      if ( v125 <= 3 )
      {
        v123 = qvector_reserve(&v123, v123, 4, 1);
        v44 = v123;
      }
      v124 = 4;
      *(_WORD *)v44 = 13929;
      *(_BYTE *)(v44 + 2) = 52;
      *(_BYTE *)(v123 + 3) = 0;
      sub_41BD40((__int64)&v164, (__int64)&v123);
      v45 = v5[1];
      v46 = *v5;
      if ( v5[2] < (unsigned __int64)(v45 + 1) )
      {
        v98 = qvector_reserve(v5, v46, v45 + 1, 240);
        *v5 = v98;
        v45 = v5[1];
        v46 = v98;
      }
      v47 = 240 * v45 + v46;
      v48 = v164;
      *(__m128i *)(v47 + 8) = _mm_loadu_si128(&v165);
      v49 = _mm_load_si128(&v167);
      *(_QWORD *)v47 = v48;
      v50 = v166;
      *(__m128i *)(v47 + 32) = v49;
      v51 = _mm_loadu_si128(&v169);
      *(_QWORD *)(v47 + 24) = v50;
      v52 = v168;
      *(__m128i *)(v47 + 56) = v51;
      v53 = _mm_load_si128(&v171);
      *(_QWORD *)(v47 + 48) = v52;
      v54 = v170;
      *(__m128i *)(v47 + 80) = v53;
      v55 = _mm_loadu_si128(&v173);
      *(_QWORD *)(v47 + 72) = v54;
      v56 = v172;
      *(__m128i *)(v47 + 104) = v55;
      v57 = _mm_load_si128(&v175);
      *(_QWORD *)(v47 + 96) = v56;
      v58 = v174;
      *(__m128i *)(v47 + 128) = v57;
      v59 = _mm_loadu_si128(&v177);
      *(_QWORD *)(v47 + 120) = v58;
      v60 = v176;
      *(__m128i *)(v47 + 152) = v59;
      v61 = _mm_load_si128(&v179);
      *(_QWORD *)(v47 + 144) = v60;
      v62 = v178;
      *(__m128i *)(v47 + 176) = v61;
      *(_QWORD *)(v47 + 168) = v62;
      v63 = _mm_loadu_si128(&v181);
      v144 = nullptr;
      *(_QWORD *)(v47 + 192) = v180;
      v64 = v182;
      *(__m128i *)(v47 + 200) = v63;
      v65 = _mm_load_si128(&v183);
      *(_QWORD *)(v47 + 216) = v64;
      *(__m128i *)(v47 + 224) = v65;
      ++v5[1];
      v146 = nullptr;
      v148 = 0;
      v150 = 0;
      v152 = 0;
      v154 = 0;
      v156 = 0;
      v158 = 0;
      v160 = 0;
      v162 = 0;
      v145 = 0;
      v147 = 0;
      v149 = 0;
      v151 = 0;
      v153 = 0;
      v155 = 0;
      v157 = 0;
      v159 = 0;
      v161 = 0;
      v163 = 0;
      v144 = (_BYTE *)qvector_reserve(&v144, 0, 2, 1);
      *(_QWORD *)&v145 = 2;
      *v144 = 42;
      v144[1] = 0;
      v66 = v106;
      if ( (_QWORD)v106 && (v67 = v106 - 1, (_QWORD)v106 != 1) )
      {
        v96 = src;
        v97 = v146;
        if ( *((_QWORD *)&v147 + 1) < (unsigned __int64)v106 )
        {
          v102 = src;
          v101 = v106 - 1;
          v146 = (void *)qvector_reserve(&v146, v146, v106, 1);
          v96 = v102;
          v97 = v146;
          v67 = v101;
        }
        *(_QWORD *)&v147 = v66;
        memmove(v97, v96, v67);
        *((char *)v146 + v66 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v147 = 0;
      }
      sub_41BD40((__int64)&v164, (__int64)&v144);
      v68 = v5[1];
      v69 = *v5;
      if ( v5[2] < (unsigned __int64)(v68 + 1) )
      {
        v100 = qvector_reserve(v5, v69, v68 + 1, 240);
        *v5 = v100;
        v68 = v5[1];
        v69 = v100;
      }
      v70 = 240 * v68 + v69;
      v71 = v164;
      *(__m128i *)(v70 + 8) = _mm_loadu_si128(&v165);
      v72 = _mm_load_si128(&v167);
      *(_QWORD *)v70 = v71;
      v73 = v166;
      *(__m128i *)(v70 + 32) = v72;
      v74 = _mm_loadu_si128(&v169);
      *(_QWORD *)(v70 + 24) = v73;
      v75 = v168;
      *(__m128i *)(v70 + 56) = v74;
      v76 = _mm_load_si128(&v171);
      *(_QWORD *)(v70 + 48) = v75;
      v77 = v170;
      *(__m128i *)(v70 + 80) = v76;
      v78 = _mm_loadu_si128(&v173);
      *(_QWORD *)(v70 + 72) = v77;
      v79 = v172;
      *(__m128i *)(v70 + 104) = v78;
      v80 = _mm_load_si128(&v175);
      *(_QWORD *)(v70 + 96) = v79;
      v81 = v174;
      *(__m128i *)(v70 + 128) = v80;
      v82 = _mm_loadu_si128(&v177);
      *(_QWORD *)(v70 + 120) = v81;
      v83 = v176;
      *(__m128i *)(v70 + 152) = v82;
      v84 = _mm_load_si128(&v179);
      *(_QWORD *)(v70 + 144) = v83;
      v85 = v178;
      *(__m128i *)(v70 + 176) = v84;
      *(_QWORD *)(v70 + 168) = v85;
      v86 = _mm_loadu_si128(&v181);
      *(_QWORD *)(v70 + 192) = v180;
      v87 = v182;
      *(__m128i *)(v70 + 200) = v86;
      v88 = _mm_load_si128(&v183);
      *(_QWORD *)(v70 + 216) = v87;
      v89 = v162;
      *(__m128i *)(v70 + 224) = v88;
      ++v5[1];
      if ( v89 )
      {
        *(_QWORD *)&v163 = 0;
        *(double *)v88.m128i_i64 = qfree(v89, (const char *)v70);
      }
      if ( v160 )
      {
        *(_QWORD *)&v161 = 0;
        *(double *)v88.m128i_i64 = qfree(v160, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v158 )
      {
        *(_QWORD *)&v159 = 0;
        *(double *)v88.m128i_i64 = qfree(v158, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v156 )
      {
        *(_QWORD *)&v157 = 0;
        *(double *)v88.m128i_i64 = qfree(v156, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v154 )
      {
        *(_QWORD *)&v155 = 0;
        *(double *)v88.m128i_i64 = qfree(v154, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v152 )
      {
        *(_QWORD *)&v153 = 0;
        *(double *)v88.m128i_i64 = qfree(v152, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v150 )
      {
        *(_QWORD *)&v151 = 0;
        *(double *)v88.m128i_i64 = qfree(v150, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v148 )
      {
        *(_QWORD *)&v149 = 0;
        *(double *)v88.m128i_i64 = qfree(v148, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v146 )
      {
        *(_QWORD *)&v147 = 0;
        *(double *)v88.m128i_i64 = qfree(v146, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v144 )
      {
        *(_QWORD *)&v145 = 0;
        *(double *)v88.m128i_i64 = qfree(v144, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v142 )
      {
        v143 = 0;
        *(double *)v88.m128i_i64 = qfree(v142, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v140 )
      {
        v141 = 0;
        *(double *)v88.m128i_i64 = qfree(v140, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v138 )
      {
        v139 = 0;
        *(double *)v88.m128i_i64 = qfree(v138, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v136 )
      {
        v137 = 0;
        *(double *)v88.m128i_i64 = qfree(v136, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v134 )
      {
        v135 = 0;
        *(double *)v88.m128i_i64 = qfree(v134, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v132 )
      {
        v133 = 0;
        *(double *)v88.m128i_i64 = qfree(v132, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v130 )
      {
        v131 = 0;
        *(double *)v88.m128i_i64 = qfree(v130, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v128 )
      {
        v129 = 0;
        *(double *)v88.m128i_i64 = qfree(v128, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v126 )
      {
        v127 = 0;
        *(double *)v88.m128i_i64 = qfree(v126, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v123 )
      {
        v124 = 0;
        *(double *)v88.m128i_i64 = qfree(v123, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v121 )
      {
        *(_QWORD *)&v122 = 0;
        *(double *)v88.m128i_i64 = qfree(v121, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        *(double *)v88.m128i_i64 = qfree(v119, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v117 )
      {
        *(_QWORD *)&v118 = 0;
        *(double *)v88.m128i_i64 = qfree(v117, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v115 )
      {
        *(_QWORD *)&v116 = 0;
        *(double *)v88.m128i_i64 = qfree(v115, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( dest )
      {
        *(_QWORD *)&v114 = 0;
        *(double *)v88.m128i_i64 = qfree(dest, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v111 )
      {
        *(_QWORD *)&v112 = 0;
        *(double *)v88.m128i_i64 = qfree(v111, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v109 )
      {
        *(_QWORD *)&v110 = 0;
        *(double *)v88.m128i_i64 = qfree(v109, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v107 )
      {
        *(_QWORD *)&v108 = 0;
        *(double *)v88.m128i_i64 = qfree(v107, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( src )
      {
        *(_QWORD *)&v106 = 0;
        *(double *)v88.m128i_i64 = qfree(src, (const char *)v70, *(double *)v88.m128i_i64);
      }
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103, (const char *)v70, *(double *)v88.m128i_i64);
      }
    }
  }
  return v184 - __readfsqword(0x28u);
}
