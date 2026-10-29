void __fastcall sub_122AA50(void **a1, void **a2, __m128i *a3)
{
  __m128i *v3; // rax
  __m128i *v4; // r15
  __int64 v5; // rax
  __m128i *v6; // r12
  __m128i *v7; // r14
  __m128i *v8; // rbp
  __m128i *v9; // r15
  __m128i *v10; // r13
  __m128i *v11; // rbx
  char v12; // al
  __int32 v13; // eax
  __int64 v14; // rdx
  void **v15; // rsi
  size_t v16; // rbx
  __m128i *v17; // r13
  int v18; // ebp
  int v19; // eax
  size_t v20; // r9
  int v21; // ecx
  int v22; // edx
  void *v23; // rcx
  size_t v24; // r15
  size_t v25; // rdx
  const void *v26; // rsi
  const void *v27; // rdi
  int v28; // eax
  __m128i *v29; // rax
  __m128i *v30; // r12
  __m128i *v31; // r15
  int v32; // eax
  bool v33; // al
  bool v34; // al
  __m128i *v35; // rax
  __m128i *v36; // r15
  __m128i *v37; // rdi
  size_t v38; // rax
  __m128i *v39; // rbp
  size_t v40; // rax
  __m128i *v41; // rbx
  __m128i *v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  __m128i *v45; // rax
  __m128i *v46; // rax
  __int32 v47; // eax
  __m128i *v48; // rdi
  __m128i *v49; // rax
  __int64 v50; // rdx
  __m128i *v51; // rbp
  __m128i *v52; // rax
  __m128i *v53; // rdi
  __int64 v54; // rdx
  __m128i *v55; // rbx
  __m128i *v56; // rax
  __m128i *v57; // rdi
  __int64 v58; // rdx
  __m128i *v59; // rdi
  __m128 v60; // xmm0
  __int64 v61; // rdx
  __m128i *v62; // rsi
  _BYTE *m128i_i8; // rdi
  __m128 v64; // xmm0
  __int64 v65; // rax
  __m128i *v66; // rdi
  __m128 v67; // xmm0
  __int64 v68; // rax
  __m128i *v69; // rdi
  __m128 v70; // xmm0
  __int64 v71; // rax
  void *v72; // rax
  int v73; // eax
  size_t v74; // rdx
  size_t v75; // rdx
  size_t v76; // rdx
  size_t v77; // rdx
  size_t v78; // rdx
  size_t v79; // rdx
  __m128i *v80; // rax
  size_t v81; // rdx
  size_t v82; // rdx
  __int64 v83; // rax
  __m128i *v84; // r8
  __m128i *v85; // rcx
  size_t v86; // rdx
  const void *v87; // rsi
  const void *v88; // rdi
  signed __int64 v89; // rax
  __m128i *v90; // rax
  void **v91; // r14
  __m128i *v92; // rbx
  void *v93; // rax
  void **v94; // rax
  __m128i *v95; // r14
  unsigned __int64 *v96; // rbp
  unsigned __int64 *v97; // r12
  const __m128i *v98; // rbx
  unsigned __int64 *v99; // rax
  void *v100; // rbp
  void *v101; // r13
  __m128i *v102; // rcx
  __m128i *v103; // rax
  const __m128i *v104; // r14
  __m128i *v105; // rax
  __int64 v106; // rax
  __m128i *v107; // rdx
  __int64 v108; // rdx
  void *v109; // rax
  __m128i *v110; // rdx
  __int64 v111; // rdx
  __m128i *v112; // rax
  __m128i *v113; // rdx
  __int64 v114; // rdx
  __m128i *v115; // rdx
  __int64 v116; // rdx
  __int64 *v117; // rsi
  _QWORD *v118; // rsi
  size_t v119; // rax
  size_t v120; // rax
  size_t v121; // rax
  size_t v122; // rax
  __int64 v123; // rbx
  size_t v124; // rcx
  int v125; // eax
  __int64 v126; // rcx
  size_t v127; // rdx
  const void *v128; // rsi
  void **v129; // rsi
  __m128i *v130; // r15
  __m128i *v131; // rbx
  void *s1; // [rsp+8h] [rbp-240h] BYREF
  __m128i *v133; // [rsp+10h] [rbp-238h] BYREF
  void *v134; // [rsp+18h] [rbp-230h]
  __m128i *v135; // [rsp+20h] [rbp-228h] BYREF
  __m128i *v136; // [rsp+28h] [rbp-220h]
  __m128i *v137; // [rsp+30h] [rbp-218h]
  __m128i *v138; // [rsp+38h] [rbp-210h]
  __m128i *v139; // [rsp+40h] [rbp-208h]
  __m128i *v140; // [rsp+48h] [rbp-200h]
  __m128i *v141; // [rsp+50h] [rbp-1F8h]
  __int64 m128i_i64; // [rsp+58h] [rbp-1F0h]
  __m128i *v143; // [rsp+60h] [rbp-1E8h]
  __int64 *v144; // [rsp+68h] [rbp-1E0h]
  __m128i *v145; // [rsp+70h] [rbp-1D8h]
  void *s2; // [rsp+78h] [rbp-1D0h]
  unsigned __int64 *v147; // [rsp+80h] [rbp-1C8h]
  void **v148; // [rsp+88h] [rbp-1C0h]
  void **v149; // [rsp+90h] [rbp-1B8h]
  void **v150; // [rsp+98h] [rbp-1B0h]
  __m128i *v151; // [rsp+A8h] [rbp-1A0h] BYREF
  void *v152; // [rsp+B0h] [rbp-198h] BYREF
  size_t v153; // [rsp+B8h] [rbp-190h]
  __m128i v154; // [rsp+C0h] [rbp-188h] BYREF
  unsigned __int64 v155; // [rsp+D0h] [rbp-178h]
  __int32 v156; // [rsp+D8h] [rbp-170h]
  void *v157; // [rsp+E0h] [rbp-168h]
  size_t v158; // [rsp+E8h] [rbp-160h]
  __m128i v159; // [rsp+F0h] [rbp-158h] BYREF
  void *v160; // [rsp+100h] [rbp-148h]
  size_t v161; // [rsp+108h] [rbp-140h]
  __m128i v162; // [rsp+110h] [rbp-138h] BYREF
  void *v163; // [rsp+120h] [rbp-128h]
  size_t v164; // [rsp+128h] [rbp-120h]
  __m128i v165; // [rsp+130h] [rbp-118h] BYREF
  void *v166; // [rsp+140h] [rbp-108h]
  __int64 v167; // [rsp+148h] [rbp-100h]
  __m128i v168; // [rsp+150h] [rbp-F8h] BYREF
  void *v169; // [rsp+160h] [rbp-E8h] BYREF
  size_t v170; // [rsp+168h] [rbp-E0h]
  __m128i v171; // [rsp+170h] [rbp-D8h] BYREF
  unsigned __int64 v172; // [rsp+180h] [rbp-C8h]
  __int32 v173; // [rsp+188h] [rbp-C0h]
  void *v174; // [rsp+190h] [rbp-B8h] BYREF
  size_t v175; // [rsp+198h] [rbp-B0h]
  __m128i v176; // [rsp+1A0h] [rbp-A8h]
  void *v177; // [rsp+1B0h] [rbp-98h]
  size_t v178; // [rsp+1B8h] [rbp-90h]
  __m128i v179; // [rsp+1C0h] [rbp-88h]
  void *src; // [rsp+1D0h] [rbp-78h]
  size_t n; // [rsp+1D8h] [rbp-70h]
  __m128i v182; // [rsp+1E0h] [rbp-68h]
  void *v183; // [rsp+1F0h] [rbp-58h]
  __int64 v184; // [rsp+1F8h] [rbp-50h]
  __m128i v185; // [rsp+200h] [rbp-48h]

  v3 = (__m128i *)*a2;
  v4 = (__m128i *)*a1;
  v148 = a1;
  v133 = v3;
  v5 = (char *)v4 - (char *)v3;
  v149 = a2;
  v141 = a3;
  if ( v5 <= 2816 )
    return;
  if ( !a3 )
  {
    v95 = (__m128i *)&v169;
    v147 = (unsigned __int64 *)&v152;
    goto LABEL_148;
  }
  v147 = (unsigned __int64 *)&v152;
  v6 = (__m128i *)&v169;
  v7 = v4;
  v150 = &v174;
  v134 = &v171;
  do
  {
    v141 = (__m128i *)((char *)v141 - 1);
    v8 = v7 - 22;
    v9 = v7 - 11;
    v10 = &v7[-11 * ((0x2E8BA2E8BA2E8BA3LL * (v5 >> 4)) >> 1)];
    v11 = v10 - 11;
    v12 = sub_1224440((__int64)v7[-22].m128i_i64, (__int64)v10[-11].m128i_i64);
    v139 = v7 - 11;
    s1 = &v7[-2];
    v137 = v133;
    if ( v12 )
    {
      if ( (unsigned __int8)sub_1224440((__int64)v11, (__int64)v133) )
      {
        sub_1214140(v6, v7 - 11);
        sub_A0AAD0((__int64)v7[-11].m128i_i64, v11);
        v13 = v10[-9].m128i_i32[0];
        v135 = v11 + 3;
        v7[-9].m128i_i32[0] = v13;
        v7[-9].m128i_i32[1] = v10[-9].m128i_i32[1];
        v7[-9].m128i_i32[2] = v10[-9].m128i_i32[2];
        sub_A0AAD0((__int64)v9[3].m128i_i64, (__m128i *)v11[3].m128i_i64);
        v139 = v7 - 11;
        sub_A0AAD0((__int64)v7[-6].m128i_i64, (__m128i *)v11[5].m128i_i64);
        sub_A0AAD0((__int64)v139[7].m128i_i64, (__m128i *)v11[7].m128i_i64);
        sub_A0AAD0((__int64)v11, v6);
        v14 = (__int64)v135;
        v15 = v150;
        v10[-9].m128i_i64[0] = v172;
        v10[-9].m128i_i32[2] = v173;
        sub_A0AAD0(v14, v15);
        sub_A0AAD0((__int64)v11[5].m128i_i64, (__m128i *)v6[5].m128i_i64);
        sub_A0AAD0((__int64)v11[7].m128i_i64, (__m128i *)v6[7].m128i_i64);
        goto LABEL_7;
      }
      v11 = v133;
      if ( (unsigned __int8)sub_1224440((__int64)v7[-22].m128i_i64, (__int64)v133) )
        goto LABEL_220;
      sub_1214140(v6, v7 - 11);
      sub_1214A30((__m128i *)v7[-11].m128i_i32, (__int64)v7[-22].m128i_i64);
      sub_1214A30((__m128i *)v7[-22].m128i_i32, (__int64)v6);
      goto LABEL_208;
    }
    if ( (unsigned __int8)sub_1224440((__int64)v7[-22].m128i_i64, (__int64)v133) )
    {
      sub_1214140(v6, v7 - 11);
      sub_A0AAD0((__int64)v7[-11].m128i_i64, (__m128i *)v7[-22].m128i_i64);
      v7[-9].m128i_i32[0] = v7[-20].m128i_i32[0];
      v7[-9].m128i_i32[1] = v7[-20].m128i_i32[1];
      v7[-9].m128i_i32[2] = v7[-20].m128i_i32[2];
      sub_A0AAD0((__int64)v7[-8].m128i_i64, (__m128i *)v8[3].m128i_i64);
      v139 = v7 - 11;
      sub_A0AAD0((__int64)v7[-6].m128i_i64, (__m128i *)v8[5].m128i_i64);
      sub_A0AAD0((__int64)v139[7].m128i_i64, (__m128i *)v8[7].m128i_i64);
      sub_A0AAD0((__int64)v7[-22].m128i_i64, v6);
      v129 = v150;
      v7[-20].m128i_i64[0] = v172;
      v7[-20].m128i_i32[2] = v173;
      sub_A0AAD0((__int64)v8[3].m128i_i64, v129);
      sub_A0AAD0((__int64)v8[5].m128i_i64, (__m128i *)v6[5].m128i_i64);
      sub_A0AAD0((__int64)v8[7].m128i_i64, (__m128i *)v6[7].m128i_i64);
LABEL_208:
      sub_1213F50((__int64)v6);
      sub_ABA4C0((__m128i *)s1, v8 + 9);
      goto LABEL_8;
    }
    v130 = v133;
    if ( !(unsigned __int8)sub_1224440((__int64)v11, (__int64)v133) )
    {
      v9 = v139;
LABEL_220:
      sub_1214140(v6, v9);
      sub_1214A30(v9, (__int64)v11);
      sub_1214A30(v11, (__int64)v6);
LABEL_7:
      sub_1213F50((__int64)v6);
      sub_ABA4C0((__m128i *)s1, v11 + 9);
      goto LABEL_8;
    }
    v131 = v139;
    sub_1214140(v6, v139);
    sub_1214A30(v131, (__int64)v130);
    sub_1214A30(v130, (__int64)v6);
    sub_1213F50((__int64)v6);
    sub_ABA4C0((__m128i *)s1, v130 + 9);
LABEL_8:
    v16 = v7[-4].m128i_u64[1];
    v17 = v7 - 14;
    v18 = v7[-9].m128i_i32[1];
    s1 = (void *)v7[-4].m128i_i64[0];
    LODWORD(v136) = v7[-9].m128i_i32[2];
    LODWORD(v135) = v7[-9].m128i_i32[0];
    v138 = v133;
    while ( 1 )
    {
      v133 = v17 + 3;
      if ( (unsigned __int8)sub_1213FB0((__int64)v17[-8].m128i_i64, (int)v135, v18, (int)v136, s1, v16) )
        goto LABEL_9;
      v19 = v17[-6].m128i_i32[0];
      v20 = v17[-1].m128i_u64[1];
      v21 = v17[-6].m128i_i32[2];
      v22 = v17[-6].m128i_i32[1];
      v140 = (__m128i *)v17[-1].m128i_i64[0];
      m128i_i64 = v20;
      LODWORD(v143) = v21;
      LODWORD(v144) = v22;
      LODWORD(v145) = v19;
      if ( (unsigned __int8)sub_1213FB0((__int64)v139, v19, v22, v21, v140, v20) )
        break;
      v23 = (void *)v17[1].m128i_i64[1];
      v24 = v7[-2].m128i_u64[1];
      v25 = v24;
      if ( (unsigned __int64)v23 <= v24 )
        v25 = v17[1].m128i_u64[1];
      if ( v25 )
      {
        v26 = (const void *)v7[-2].m128i_i64[0];
        v27 = (const void *)v17[1].m128i_i64[0];
        s2 = (void *)v17[1].m128i_i64[1];
        v28 = memcmp(v27, v26, v25);
        v23 = s2;
        if ( v28 )
          goto LABEL_16;
      }
      v126 = (__int64)v23 - v24;
      if ( v126 > 0x7FFFFFFF )
        break;
      if ( v126 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_9;
      v28 = v126;
LABEL_16:
      if ( v28 >= 0 )
        break;
LABEL_9:
      v17 -= 11;
    }
    v29 = v6;
    v30 = v138 + 11;
    v31 = v29;
    while ( 1 )
    {
      v138 = v30;
      if ( v30[-9].m128i_i32[0] != (_DWORD)v135 )
      {
        v34 = v30[-9].m128i_i32[0] > (int)v135;
        goto LABEL_25;
      }
      v32 = v30[-9].m128i_i32[1];
      if ( v32 != v18 )
      {
        if ( v32 != -1 )
        {
          v33 = v32 > v18;
          if ( v18 == -1 || !v33 )
            goto LABEL_26;
        }
        goto LABEL_22;
      }
      v73 = v30[-9].m128i_i32[2];
      if ( v73 != (_DWORD)v136 )
        break;
      v124 = v30[-4].m128i_u64[1];
      if ( v124 == v16 )
      {
        if ( !v16 )
          goto LABEL_26;
        s2 = (void *)v30[-4].m128i_i64[0];
        if ( !memcmp(s1, s2, v16) )
          goto LABEL_26;
        v125 = memcmp(s1, s2, v16);
LABEL_194:
        if ( v125 >= 0 )
          goto LABEL_26;
        goto LABEL_22;
      }
      if ( !v124 )
        goto LABEL_22;
      if ( !v16 )
        goto LABEL_26;
      v127 = v16;
      v128 = (const void *)v30[-4].m128i_i64[0];
      if ( v124 <= v16 )
        v127 = v30[-4].m128i_u64[1];
      s2 = (void *)v30[-4].m128i_i64[1];
      v125 = memcmp(s1, v128, v127);
      if ( v125 )
        goto LABEL_194;
      if ( (unsigned __int64)s2 <= v16 )
        goto LABEL_26;
LABEL_22:
      v30 += 11;
      v137 = v138;
    }
    if ( v73 == -1 )
      goto LABEL_22;
    if ( (_DWORD)v136 != -1 )
    {
      v34 = v73 > (int)v136;
LABEL_25:
      if ( v34 )
        goto LABEL_22;
    }
LABEL_26:
    if ( (unsigned __int8)sub_1213FB0((__int64)v137, (int)v135, v18, (int)v136, s1, v16) )
      goto LABEL_27;
    v84 = (__m128i *)v7[-2].m128i_i64[1];
    v85 = (__m128i *)v30[-2].m128i_i64[1];
    v86 = (size_t)v85;
    if ( v84 <= v85 )
      v86 = v7[-2].m128i_u64[1];
    if ( !v86
      || (v87 = (const void *)v30[-2].m128i_i64[0],
          v88 = (const void *)v7[-2].m128i_i64[0],
          s2 = (void *)v30[-2].m128i_i64[1],
          v137 = v84,
          LODWORD(v89) = memcmp(v88, v87, v86),
          v84 = v137,
          v85 = (__m128i *)s2,
          !(_DWORD)v89) )
    {
      v89 = (char *)v84 - (char *)v85;
      if ( (char *)v84 - (char *)v85 <= 0x7FFFFFFF )
      {
        if ( v89 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_22;
        goto LABEL_143;
      }
LABEL_27:
      v35 = v31;
      v36 = v30;
      v6 = v35;
      if ( v36 >= v133 )
        goto LABEL_145;
LABEL_28:
      v37 = v17 - 7;
      v169 = v134;
      if ( (__m128i *)v17[-8].m128i_i64[0] == &v17[-7] )
      {
        v171 = _mm_loadu_si128(v17 - 7);
      }
      else
      {
        v169 = (void *)v17[-8].m128i_i64[0];
        v171.m128i_i64[0] = v17[-7].m128i_i64[0];
      }
      v38 = v17[-8].m128i_u64[1];
      v39 = v17 - 4;
      v17[-8].m128i_i64[0] = (__int64)v37;
      v17[-8].m128i_i64[1] = 0;
      v170 = v38;
      LODWORD(v38) = (_DWORD)v145;
      v17[-7].m128i_i8[0] = 0;
      v172 = __PAIR64__((unsigned int)v144, v38);
      v173 = (int)v143;
      v174 = &v6[4];
      if ( (__m128i *)v17[-5].m128i_i64[0] == &v17[-4] )
      {
        v176 = _mm_loadu_si128(v17 - 4);
      }
      else
      {
        v174 = (void *)v17[-5].m128i_i64[0];
        v176.m128i_i64[0] = v17[-4].m128i_i64[0];
      }
      v40 = v17[-5].m128i_u64[1];
      v41 = v17 - 2;
      v17[-5].m128i_i64[0] = (__int64)v39;
      v17[-5].m128i_i64[1] = 0;
      v175 = v40;
      v177 = &v6[6];
      v42 = (__m128i *)v17[-3].m128i_i64[0];
      v17[-4].m128i_i8[0] = 0;
      if ( v42 == &v17[-2] )
      {
        v179 = _mm_loadu_si128(v17 - 2);
      }
      else
      {
        v177 = v42;
        v179.m128i_i64[0] = v17[-2].m128i_i64[0];
      }
      v43 = v17[-3].m128i_u64[1];
      v17[-3].m128i_i64[0] = (__int64)v41;
      v17[-3].m128i_i64[1] = 0;
      v178 = v43;
      v17[-2].m128i_i8[0] = 0;
      src = &v6[8];
      if ( v140 == v17 )
      {
        v182 = _mm_loadu_si128(v17);
      }
      else
      {
        src = v140;
        v182.m128i_i64[0] = v17->m128i_i64[0];
      }
      v44 = m128i_i64;
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17[-1].m128i_i64[1] = 0;
      n = v44;
      v17->m128i_i8[0] = 0;
      v45 = (__m128i *)v36[-11].m128i_i64[0];
      v136 = v36 - 11;
      v133 = v36 - 10;
      if ( v45 == v133 )
      {
        v82 = v36[-11].m128i_u64[1];
        if ( v82 )
        {
          if ( v82 == 1 )
            v17[-7].m128i_i8[0] = v36[-10].m128i_i8[0];
          else
            memcpy(v37, &v36[-10], v82);
          v82 = v36[-11].m128i_u64[1];
        }
        v83 = v17[-8].m128i_i64[0];
        v17[-8].m128i_i64[1] = v82;
        *(_BYTE *)(v83 + v82) = 0;
        v46 = (__m128i *)v36[-11].m128i_i64[0];
      }
      else
      {
        v17[-8].m128i_i64[0] = (__int64)v45;
        v17[-8].m128i_i64[1] = v36[-11].m128i_i64[1];
        v17[-7].m128i_i64[0] = v36[-10].m128i_i64[0];
        v46 = v133;
        v36[-11].m128i_i64[0] = (__int64)v133;
      }
      v36[-11].m128i_i64[1] = 0;
      v46->m128i_i8[0] = 0;
      v47 = v36[-9].m128i_i32[0];
      v48 = (__m128i *)v17[-5].m128i_i64[0];
      s1 = &v36[-7];
      v17[-6].m128i_i32[0] = v47;
      v17[-6].m128i_i32[1] = v36[-9].m128i_i32[1];
      v17[-6].m128i_i32[2] = v36[-9].m128i_i32[2];
      v49 = (__m128i *)v36[-8].m128i_i64[0];
      if ( v49 == &v36[-7] )
      {
        v81 = v36[-8].m128i_u64[1];
        if ( v81 )
        {
          if ( v81 == 1 )
            v48->m128i_i8[0] = v36[-7].m128i_i8[0];
          else
            memcpy(v48, &v36[-7], v81);
          v81 = v36[-8].m128i_u64[1];
          v48 = (__m128i *)v17[-5].m128i_i64[0];
        }
        v17[-5].m128i_i64[1] = v81;
        v48->m128i_i8[v81] = 0;
        v48 = (__m128i *)v36[-8].m128i_i64[0];
      }
      else
      {
        if ( v48 == v39 )
        {
          v17[-5].m128i_i64[0] = (__int64)v49;
          v17[-5].m128i_i64[1] = v36[-8].m128i_i64[1];
          v17[-4].m128i_i64[0] = v36[-7].m128i_i64[0];
        }
        else
        {
          v17[-5].m128i_i64[0] = (__int64)v49;
          v50 = v17[-4].m128i_i64[0];
          v17[-5].m128i_i64[1] = v36[-8].m128i_i64[1];
          v17[-4].m128i_i64[0] = v36[-7].m128i_i64[0];
          if ( v48 )
          {
            v36[-8].m128i_i64[0] = (__int64)v48;
            v36[-7].m128i_i64[0] = v50;
            goto LABEL_42;
          }
        }
        v80 = (__m128i *)s1;
        v36[-8].m128i_i64[0] = (__int64)s1;
        v48 = v80;
      }
LABEL_42:
      v36[-8].m128i_i64[1] = 0;
      v51 = v36 - 5;
      v48->m128i_i8[0] = 0;
      v52 = (__m128i *)v36[-6].m128i_i64[0];
      v53 = (__m128i *)v17[-3].m128i_i64[0];
      if ( v52 == &v36[-5] )
      {
        v79 = v36[-6].m128i_u64[1];
        if ( v79 )
        {
          if ( v79 == 1 )
            v53->m128i_i8[0] = v36[-5].m128i_i8[0];
          else
            memcpy(v53, &v36[-5], v79);
          v79 = v36[-6].m128i_u64[1];
          v53 = (__m128i *)v17[-3].m128i_i64[0];
        }
        v17[-3].m128i_i64[1] = v79;
        v53->m128i_i8[v79] = 0;
        v53 = (__m128i *)v36[-6].m128i_i64[0];
      }
      else
      {
        if ( v53 == v41 )
        {
          v17[-3].m128i_i64[0] = (__int64)v52;
          v17[-3].m128i_i64[1] = v36[-6].m128i_i64[1];
          v17[-2].m128i_i64[0] = v36[-5].m128i_i64[0];
        }
        else
        {
          v17[-3].m128i_i64[0] = (__int64)v52;
          v54 = v17[-2].m128i_i64[0];
          v17[-3].m128i_i64[1] = v36[-6].m128i_i64[1];
          v17[-2].m128i_i64[0] = v36[-5].m128i_i64[0];
          if ( v53 )
          {
            v36[-6].m128i_i64[0] = (__int64)v53;
            v36[-5].m128i_i64[0] = v54;
            goto LABEL_46;
          }
        }
        v36[-6].m128i_i64[0] = (__int64)v51;
        v53 = v36 - 5;
      }
LABEL_46:
      v36[-6].m128i_i64[1] = 0;
      v55 = v36 - 3;
      v53->m128i_i8[0] = 0;
      v56 = (__m128i *)v36[-4].m128i_i64[0];
      v57 = (__m128i *)v17[-1].m128i_i64[0];
      if ( v56 == &v36[-3] )
      {
        v78 = v36[-4].m128i_u64[1];
        if ( v78 )
        {
          if ( v78 == 1 )
            v57->m128i_i8[0] = v36[-3].m128i_i8[0];
          else
            memcpy(v57, &v36[-3], v78);
          v78 = v36[-4].m128i_u64[1];
          v57 = (__m128i *)v17[-1].m128i_i64[0];
        }
        v17[-1].m128i_i64[1] = v78;
        v57->m128i_i8[v78] = 0;
        v57 = (__m128i *)v36[-4].m128i_i64[0];
      }
      else
      {
        if ( v57 == v17 )
        {
          v17[-1].m128i_i64[0] = (__int64)v56;
          v17[-1].m128i_i64[1] = v36[-4].m128i_i64[1];
          v17->m128i_i64[0] = v36[-3].m128i_i64[0];
        }
        else
        {
          v17[-1].m128i_i64[0] = (__int64)v56;
          v58 = v17->m128i_i64[0];
          v17[-1].m128i_i64[1] = v36[-4].m128i_i64[1];
          v17->m128i_i64[0] = v36[-3].m128i_i64[0];
          if ( v57 )
          {
            v36[-4].m128i_i64[0] = (__int64)v57;
            v36[-3].m128i_i64[0] = v58;
            goto LABEL_50;
          }
        }
        v36[-4].m128i_i64[0] = (__int64)v55;
        v57 = v36 - 3;
      }
LABEL_50:
      v36[-4].m128i_i64[1] = 0;
      v57->m128i_i8[0] = 0;
      v59 = (__m128i *)v36[-11].m128i_i64[0];
      if ( v169 == v134 )
      {
        v77 = v170;
        if ( v170 )
        {
          if ( v170 == 1 )
            v59->m128i_i8[0] = v171.m128i_i8[0];
          else
            memcpy(v59, v134, v170);
          v77 = v170;
          v59 = (__m128i *)v36[-11].m128i_i64[0];
        }
        v36[-11].m128i_i64[1] = v77;
        v59->m128i_i8[v77] = 0;
        v59 = (__m128i *)v169;
      }
      else
      {
        v135 = (__m128i *)v171.m128i_i64[0];
        if ( v133 == v59 )
        {
          v36[-11].m128i_i64[0] = (__int64)v169;
          *(__m128 *)((char *)&v36[-11] + 8) = _mm_loadh_ps((const double *)&v135);
        }
        else
        {
          v60 = _mm_loadh_ps((const double *)&v135);
          v61 = v36[-10].m128i_i64[0];
          v36[-11].m128i_i64[0] = (__int64)v169;
          *(__m128 *)((char *)v36 - 168) = v60;
          if ( v59 )
          {
            v169 = v59;
            v171.m128i_i64[0] = v61;
            goto LABEL_54;
          }
        }
        v169 = v134;
        v59 = (__m128i *)v134;
      }
LABEL_54:
      v170 = 0;
      v59->m128i_i8[0] = 0;
      v62 = (__m128i *)v174;
      m128i_i8 = (_BYTE *)v36[-8].m128i_i64[0];
      v36[-9].m128i_i64[0] = v172;
      v36[-9].m128i_i32[2] = v173;
      if ( v62 == &v6[4] )
      {
        v76 = v175;
        if ( v175 )
        {
          if ( v175 == 1 )
            *m128i_i8 = v176.m128i_i8[0];
          else
            memcpy(m128i_i8, v62, v175);
          v76 = v175;
          m128i_i8 = (_BYTE *)v36[-8].m128i_i64[0];
        }
        v36[-8].m128i_i64[1] = v76;
        m128i_i8[v76] = 0;
        m128i_i8 = v174;
      }
      else
      {
        v133 = (__m128i *)v176.m128i_i64[0];
        if ( s1 == m128i_i8 )
        {
          v36[-8].m128i_i64[0] = (__int64)v62;
          *(__m128 *)((char *)&v36[-8] + 8) = _mm_loadh_ps((const double *)&v133);
        }
        else
        {
          v64 = _mm_loadh_ps((const double *)&v133);
          v65 = v36[-7].m128i_i64[0];
          v36[-8].m128i_i64[0] = (__int64)v62;
          *(__m128 *)((char *)v36 - 120) = v64;
          if ( m128i_i8 )
          {
            v174 = m128i_i8;
            v176.m128i_i64[0] = v65;
            goto LABEL_58;
          }
        }
        m128i_i8 = v6[4].m128i_i8;
        v174 = &v6[4];
      }
LABEL_58:
      v175 = 0;
      *m128i_i8 = 0;
      v66 = (__m128i *)v36[-6].m128i_i64[0];
      if ( v177 == &v6[6] )
      {
        v75 = v178;
        if ( v178 )
        {
          if ( v178 == 1 )
            v66->m128i_i8[0] = v179.m128i_i8[0];
          else
            memcpy(v66, v177, v178);
          v75 = v178;
          v66 = (__m128i *)v36[-6].m128i_i64[0];
        }
        v36[-6].m128i_i64[1] = v75;
        v66->m128i_i8[v75] = 0;
        v66 = (__m128i *)v177;
      }
      else
      {
        s1 = (void *)v179.m128i_i64[0];
        if ( v51 == v66 )
        {
          v36[-6].m128i_i64[0] = (__int64)v177;
          *(__m128 *)((char *)&v36[-6] + 8) = _mm_loadh_ps((const double *)&s1);
        }
        else
        {
          v67 = _mm_loadh_ps((const double *)&s1);
          v68 = v36[-5].m128i_i64[0];
          v36[-6].m128i_i64[0] = (__int64)v177;
          *(__m128 *)((char *)v36 - 88) = v67;
          if ( v66 )
          {
            v177 = v66;
            v179.m128i_i64[0] = v68;
            goto LABEL_62;
          }
        }
        v66 = v6 + 6;
        v177 = &v6[6];
      }
LABEL_62:
      v178 = 0;
      v66->m128i_i8[0] = 0;
      v69 = (__m128i *)v36[-4].m128i_i64[0];
      if ( src == &v6[8] )
      {
        v74 = n;
        if ( n )
        {
          if ( n == 1 )
            v69->m128i_i8[0] = v182.m128i_i8[0];
          else
            memcpy(v69, src, n);
          v74 = n;
          v69 = (__m128i *)v36[-4].m128i_i64[0];
        }
        v36[-4].m128i_i64[1] = v74;
        v69->m128i_i8[v74] = 0;
        v69 = (__m128i *)src;
        goto LABEL_66;
      }
      s1 = (void *)v182.m128i_i64[0];
      if ( v55 == v69 )
      {
        v36[-4].m128i_i64[0] = (__int64)src;
        *(__m128 *)((char *)&v36[-4] + 8) = _mm_loadh_ps((const double *)&s1);
      }
      else
      {
        v70 = _mm_loadh_ps((const double *)&s1);
        v71 = v36[-3].m128i_i64[0];
        v36[-4].m128i_i64[0] = (__int64)src;
        *(__m128 *)((char *)v36 - 56) = v70;
        if ( v69 )
        {
          src = v69;
          v182.m128i_i64[0] = v71;
LABEL_66:
          n = 0;
          v69->m128i_i8[0] = 0;
          if ( src != &v6[8] )
            operator delete(src);
          if ( v177 != &v6[6] )
            operator delete(v177);
          if ( v174 != &v6[4] )
            operator delete(v174);
          if ( v169 != v134 )
            operator delete(v169);
          sub_ABA4C0(v17 + 1, v136 + 9);
          v72 = (void *)v7[-4].m128i_i64[0];
          v16 = v7[-4].m128i_u64[1];
          v137 = v36;
          v18 = v7[-9].m128i_i32[1];
          s1 = v72;
          LODWORD(v136) = v7[-9].m128i_i32[2];
          LODWORD(v135) = v7[-9].m128i_i32[0];
          goto LABEL_9;
        }
      }
      v69 = v6 + 8;
      src = &v6[8];
      goto LABEL_66;
    }
LABEL_143:
    if ( (int)v89 < 0 )
      goto LABEL_22;
    v90 = v31;
    v36 = v30;
    v6 = v90;
    if ( v36 < v133 )
      goto LABEL_28;
LABEL_145:
    v91 = v149;
    v92 = v133;
    v93 = *v149;
    v152 = v133;
    v169 = v93;
    sub_122AA50(v147, v6, v141);
    v94 = v148;
    *v91 = v92;
    v7 = (__m128i *)*v94;
    v5 = (_BYTE *)*v94 - (_BYTE *)v92;
    if ( v5 <= 2816 )
      return;
  }
  while ( v141 );
  v4 = v7;
  v95 = v6;
LABEL_148:
  v96 = v147;
  v144 = (__int64 *)&v151;
  v151 = v133;
  v97 = v147 + 2;
  v152 = v133;
  v98 = v133 + 1;
  v169 = v4;
  sub_1229630(v95->m128i_i64, v147, (signed __int64 *)&v151);
  v145 = v95;
  v143 = v4 - 11;
  v140 = v4 - 2;
  m128i_i64 = (__int64)v4[-8].m128i_i64;
  v139 = v4 - 4;
  v99 = v96;
  v100 = v96 + 8;
  v141 = v4 - 6;
  v101 = v99 + 20;
  s1 = v99 + 12;
  v102 = (__m128i *)(v99 + 16);
  v134 = &v95[1];
  v135 = v95 + 4;
  v136 = v95 + 6;
  v137 = v95 + 8;
  v103 = v95 + 10;
  v104 = v98;
  v133 = v102;
  v138 = v103;
  do
  {
    while ( 1 )
    {
      v105 = (__m128i *)v104[-1].m128i_i64[0];
      v152 = v97;
      if ( v105 == v104 )
      {
        v154 = _mm_loadu_si128(v104);
      }
      else
      {
        v152 = v105;
        v154.m128i_i64[0] = v104->m128i_i64[0];
      }
      v106 = v104[-1].m128i_i64[1];
      v107 = (__m128i *)v104[2].m128i_i64[0];
      v104[-1].m128i_i64[0] = (__int64)v104;
      v104[-1].m128i_i64[1] = 0;
      v153 = v106;
      LODWORD(v106) = v104[1].m128i_i32[0];
      v104->m128i_i8[0] = 0;
      LODWORD(v155) = v106;
      LODWORD(v106) = v104[1].m128i_i32[1];
      v157 = v100;
      HIDWORD(v155) = v106;
      v156 = v104[1].m128i_i32[2];
      if ( v107 == &v104[3] )
      {
        v159 = _mm_loadu_si128(v104 + 3);
      }
      else
      {
        v157 = v107;
        v159.m128i_i64[0] = v104[3].m128i_i64[0];
      }
      v108 = v104[2].m128i_i64[1];
      v104[2].m128i_i64[0] = (__int64)v104[3].m128i_i64;
      v109 = s1;
      v104[2].m128i_i64[1] = 0;
      v158 = v108;
      v110 = (__m128i *)v104[4].m128i_i64[0];
      v160 = v109;
      v104[3].m128i_i8[0] = 0;
      if ( v110 == &v104[5] )
      {
        v162 = _mm_loadu_si128(v104 + 5);
      }
      else
      {
        v160 = v110;
        v162.m128i_i64[0] = v104[5].m128i_i64[0];
      }
      v111 = v104[4].m128i_i64[1];
      v104[4].m128i_i64[0] = (__int64)v104[5].m128i_i64;
      v112 = v133;
      v104[4].m128i_i64[1] = 0;
      v161 = v111;
      v113 = (__m128i *)v104[6].m128i_i64[0];
      v163 = v112;
      v104[5].m128i_i8[0] = 0;
      if ( v113 == &v104[7] )
      {
        v165 = _mm_loadu_si128(v104 + 7);
      }
      else
      {
        v163 = v113;
        v165.m128i_i64[0] = v104[7].m128i_i64[0];
      }
      v114 = v104[6].m128i_i64[1];
      v104[6].m128i_i64[0] = (__int64)v104[7].m128i_i64;
      v104[6].m128i_i64[1] = 0;
      v164 = v114;
      v115 = (__m128i *)v104[8].m128i_i64[0];
      v104[7].m128i_i8[0] = 0;
      v166 = v101;
      if ( &v104[9] == v115 )
      {
        v168 = _mm_loadu_si128(v104 + 9);
      }
      else
      {
        v166 = v115;
        v168.m128i_i64[0] = v104[9].m128i_i64[0];
      }
      v116 = v104[8].m128i_i64[1];
      v104[8].m128i_i64[0] = (__int64)v104[9].m128i_i64;
      v104[8].m128i_i64[1] = 0;
      v117 = (__int64 *)v143;
      v104[9].m128i_i8[0] = 0;
      v167 = v116;
      sub_A0AAD0((__int64)v104[-1].m128i_i64, v117);
      v118 = (_QWORD *)m128i_i64;
      v104[1].m128i_i32[0] = v4[-9].m128i_i32[0];
      v104[1].m128i_i32[1] = v4[-9].m128i_i32[1];
      v104[1].m128i_i32[2] = v4[-9].m128i_i32[2];
      sub_A0AAD0((__int64)v104[2].m128i_i64, v118);
      sub_A0AAD0((__int64)v104[4].m128i_i64, v141);
      sub_A0AAD0((__int64)v104[6].m128i_i64, v139);
      sub_A0AAD0((__int64)v104[8].m128i_i64, v140);
      v169 = v134;
      if ( v152 == v97 )
      {
        v171 = _mm_load_si128(&v154);
      }
      else
      {
        v169 = v152;
        v171.m128i_i64[0] = v154.m128i_i64[0];
      }
      v119 = v153;
      v152 = v97;
      v153 = 0;
      v170 = v119;
      v154.m128i_i8[0] = 0;
      v172 = v155;
      v173 = v156;
      v174 = v135;
      if ( v157 == v100 )
      {
        v176 = _mm_load_si128(&v159);
      }
      else
      {
        v174 = v157;
        v176.m128i_i64[0] = v159.m128i_i64[0];
      }
      v120 = v158;
      v157 = v100;
      v158 = 0;
      v175 = v120;
      v159.m128i_i8[0] = 0;
      v177 = v136;
      if ( v160 == s1 )
      {
        v179 = _mm_load_si128(&v162);
      }
      else
      {
        v177 = v160;
        v179.m128i_i64[0] = v162.m128i_i64[0];
      }
      v121 = v161;
      v162.m128i_i8[0] = 0;
      v161 = 0;
      v178 = v121;
      v160 = s1;
      src = v137;
      if ( v163 == v133 )
      {
        v182 = _mm_load_si128(&v165);
      }
      else
      {
        src = v163;
        v182.m128i_i64[0] = v165.m128i_i64[0];
      }
      v122 = v164;
      v165.m128i_i8[0] = 0;
      v164 = 0;
      n = v122;
      v163 = v133;
      v183 = v138;
      if ( v166 == v101 )
      {
        v185 = _mm_load_si128(&v168);
      }
      else
      {
        v183 = v166;
        v185.m128i_i64[0] = v168.m128i_i64[0];
      }
      v166 = v101;
      v168.m128i_i8[0] = 0;
      v184 = v167;
      v151 = v4;
      v123 = (char *)v4 - (char *)&v104[10];
      v167 = 0;
      sub_1214A90(v144, 0, 0x2E8BA2E8BA2E8BA3LL * (v123 >> 4), v145);
      if ( v183 != v138 )
        operator delete(v183);
      if ( src != v137 )
        operator delete(src);
      if ( v177 != v136 )
        operator delete(v177);
      if ( v174 != v135 )
        operator delete(v174);
      if ( v169 != v134 )
        operator delete(v169);
      if ( v166 != v101 )
        operator delete(v166);
      if ( v163 != v133 )
        operator delete(v163);
      if ( v160 != s1 )
        operator delete(v160);
      if ( v157 != v100 )
        operator delete(v157);
      if ( v152 == v97 )
        break;
      operator delete(v152);
      v104 += 11;
      if ( v123 <= 176 )
        return;
    }
    v104 += 11;
  }
  while ( v123 > 176 );
}
