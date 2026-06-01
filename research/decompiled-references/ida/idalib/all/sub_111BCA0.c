__int64 *__fastcall sub_111BCA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r10
  _QWORD *v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  __m128i v19; // xmm0
  _BYTE *v20; // rax
  _BYTE *v21; // rsi
  signed __int64 v22; // r8
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // r15
  __m128i v35; // xmm0
  _BYTE *v36; // rax
  _BYTE *v37; // rsi
  signed __int64 v38; // rbp
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  _BYTE *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // r15
  __m128i v51; // xmm0
  _BYTE *v52; // rsi
  signed __int64 v53; // r14
  __int64 v54; // rbp
  _BYTE *v55; // rax
  _BYTE *v56; // rsi
  __int64 v57; // rdx
  _BYTE *v58; // rsi
  __int64 v59; // rdx
  _BYTE *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rax
  unsigned __int64 v64; // r15
  _QWORD *v65; // rax
  _QWORD *v66; // rbp
  __m128i v67; // xmm0
  _BYTE *v68; // rsi
  size_t v69; // r13
  __int64 v70; // r15
  _BYTE *v71; // rax
  _BYTE *v72; // rsi
  __int64 v73; // rdx
  _BYTE *v74; // rsi
  __int64 v75; // rdx
  _BYTE *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // r13
  __int64 v79; // r14
  __int64 v80; // r15
  _QWORD *v81; // rax
  _QWORD *v82; // rbp
  __m128i v83; // xmm0
  _BYTE *v84; // rax
  _BYTE *v85; // r15
  signed __int64 v86; // r12
  char **v87; // rbp
  __int64 *v88; // r14
  void **v89; // rdi
  void **v90; // r13
  void **v91; // r12
  char **v92; // rdi
  char **v93; // rdi
  __m128i v95; // [rsp+8h] [rbp-2C0h] BYREF
  void *src; // [rsp+18h] [rbp-2B0h]
  _QWORD *v97; // [rsp+20h] [rbp-2A8h]
  __int64 *v98; // [rsp+28h] [rbp-2A0h]
  char *v99[2]; // [rsp+30h] [rbp-298h] BYREF
  __int64 v100; // [rsp+40h] [rbp-288h] BYREF
  __int64 *v101; // [rsp+50h] [rbp-278h] BYREF
  __int64 v102; // [rsp+60h] [rbp-268h] BYREF
  __int64 *v103; // [rsp+70h] [rbp-258h] BYREF
  __int64 v104; // [rsp+80h] [rbp-248h] BYREF
  __m128i v105; // [rsp+90h] [rbp-238h]
  char *v106; // [rsp+A0h] [rbp-228h]
  __int64 *v107; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-210h] BYREF
  __int64 *v109; // [rsp+C8h] [rbp-200h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-1F0h] BYREF
  __int64 *v111; // [rsp+E8h] [rbp-1E0h] BYREF
  __int64 v112; // [rsp+F8h] [rbp-1D0h] BYREF
  __m128i v113; // [rsp+108h] [rbp-1C0h]
  char *v114; // [rsp+118h] [rbp-1B0h]
  __int64 *v115; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v116; // [rsp+130h] [rbp-198h] BYREF
  __int64 *v117; // [rsp+140h] [rbp-188h] BYREF
  __int64 v118; // [rsp+150h] [rbp-178h] BYREF
  __int64 *v119; // [rsp+160h] [rbp-168h] BYREF
  __int64 v120; // [rsp+170h] [rbp-158h] BYREF
  __m128i v121; // [rsp+180h] [rbp-148h]
  char *v122; // [rsp+190h] [rbp-138h]
  __int64 *v123; // [rsp+198h] [rbp-130h] BYREF
  __int64 v124; // [rsp+1A8h] [rbp-120h] BYREF
  __int64 *v125; // [rsp+1B8h] [rbp-110h] BYREF
  __int64 v126; // [rsp+1C8h] [rbp-100h] BYREF
  __int64 *v127; // [rsp+1D8h] [rbp-F0h] BYREF
  __int64 v128; // [rsp+1E8h] [rbp-E0h] BYREF
  __m128i v129; // [rsp+1F8h] [rbp-D0h]
  char *v130; // [rsp+208h] [rbp-C0h]
  __int64 *v131; // [rsp+210h] [rbp-B8h] BYREF
  __int64 v132; // [rsp+220h] [rbp-A8h] BYREF
  __int64 *v133; // [rsp+230h] [rbp-98h] BYREF
  __int64 v134; // [rsp+240h] [rbp-88h] BYREF
  __int64 *v135; // [rsp+250h] [rbp-78h] BYREF
  __int64 v136; // [rsp+260h] [rbp-68h] BYREF
  __m128i v137; // [rsp+270h] [rbp-58h]
  char *v138; // [rsp+280h] [rbp-48h]
  __int64 v139; // [rsp+288h] [rbp-40h] BYREF

  v11 = *(_BYTE **)a2;
  v12 = *(_QWORD *)(a2 + 8);
  v98 = a1;
  v95.m128i_i64[0] = a2;
  v99[0] = (char *)&v100;
  sub_1117B80(v99, v11, (__int64)&v11[v12]);
  v101 = &v102;
  sub_1117B80(
    &v101,
    *(_BYTE **)(v95.m128i_i64[0] + 32),
    *(_QWORD *)(v95.m128i_i64[0] + 32) + *(_QWORD *)(v95.m128i_i64[0] + 40));
  v103 = &v104;
  sub_1117B80(
    &v103,
    *(_BYTE **)(v95.m128i_i64[0] + 64),
    *(_QWORD *)(v95.m128i_i64[0] + 64) + *(_QWORD *)(v95.m128i_i64[0] + 72));
  v13 = v95.m128i_i64[0];
  v106 = nullptr;
  v105 = 0;
  v14 = *(_QWORD **)(v95.m128i_i64[0] + 96);
  v95.m128i_i64[0] = *(_QWORD *)(v95.m128i_i64[0] + 104);
  v15 = v95.m128i_i64[0] - (_QWORD)v14;
  if ( (v95.m128i_i64[0] - (__int64)v14) >> 5 )
  {
    if ( (unsigned __int64)((v95.m128i_i64[0] - (__int64)v14) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v16 = v95.m128i_i64[0] - (_QWORD)v14;
    v95.m128i_i64[0] = v13;
    v95.m128i_i64[1] = v15;
    v17 = (_QWORD *)operator new(v16);
    v15 = v95.m128i_i64[1];
    v18 = v17;
    v14 = *(_QWORD **)(v95.m128i_i64[0] + 96);
    v95.m128i_i64[0] = *(_QWORD *)(v95.m128i_i64[0] + 104);
  }
  else
  {
    v18 = nullptr;
  }
  v95.m128i_i64[1] = (__int64)v18;
  v19 = _mm_loadl_epi64((const __m128i *)&v95.m128i_u64[1]);
  v106 = (char *)v18 + v15;
  v105 = _mm_unpacklo_epi64(v19, v19);
  if ( (_QWORD *)v95.m128i_i64[0] != v14 )
  {
    while ( 1 )
    {
      *v18 = v18 + 2;
      v21 = (_BYTE *)*v14;
      v22 = v14[1];
      if ( v22 + *v14 && !v21 )
        goto LABEL_46;
      if ( (unsigned __int64)v22 > 0xF )
        break;
      v20 = (_BYTE *)*v18;
      if ( v22 == 1 )
      {
        *v20 = *v21;
        v20 = (_BYTE *)*v18;
      }
      else if ( v22 )
      {
        goto LABEL_16;
      }
LABEL_7:
      v18[1] = v22;
      v14 += 4;
      v18 += 4;
      v20[v22] = 0;
      if ( v14 == (_QWORD *)v95.m128i_i64[0] )
        goto LABEL_17;
    }
    if ( v22 < 0 )
LABEL_110:
      std::__throw_length_error("basic_string::_M_create");
    v97 = v14;
    src = v21;
    v95.m128i_i64[1] = v22;
    v20 = (_BYTE *)operator new(v22 + 1);
    v22 = v95.m128i_i64[1];
    v21 = src;
    *v18 = v20;
    v14 = v97;
    v18[2] = v22;
LABEL_16:
    src = v14;
    v95.m128i_i64[1] = v22;
    memcpy(v20, v21, v22);
    v20 = (_BYTE *)*v18;
    v14 = src;
    v22 = v95.m128i_i64[1];
    goto LABEL_7;
  }
LABEL_17:
  v23 = *(_BYTE **)a3;
  v24 = *(_QWORD *)(a3 + 8);
  v107 = &v108;
  v105.m128i_i64[1] = (__int64)v18;
  sub_1117B80(&v107, v23, (__int64)&v23[v24]);
  v25 = *(_BYTE **)(a3 + 32);
  v26 = *(_QWORD *)(a3 + 40);
  v109 = &v110;
  sub_1117B80(&v109, v25, (__int64)&v25[v26]);
  v27 = *(_BYTE **)(a3 + 64);
  v28 = *(_QWORD *)(a3 + 72);
  v111 = &v112;
  sub_1117B80(&v111, v27, (__int64)&v27[v28]);
  v29 = *(_QWORD *)(a3 + 104);
  v30 = *(_QWORD *)(a3 + 96);
  v113 = 0;
  v95.m128i_i64[0] = v29;
  v114 = nullptr;
  v31 = v29 - v30;
  v32 = (v29 - v30) >> 5;
  if ( v32 )
  {
    if ( v32 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v95.m128i_i64[1] = v31;
    v33 = (_QWORD *)operator new(v31);
    v30 = *(_QWORD *)(a3 + 96);
    v31 = v95.m128i_u64[1];
    v34 = v33;
    v95.m128i_i64[0] = *(_QWORD *)(a3 + 104);
  }
  else
  {
    v34 = nullptr;
  }
  v95.m128i_i64[1] = (__int64)v34;
  v35 = _mm_loadl_epi64((const __m128i *)&v95.m128i_u64[1]);
  v114 = (char *)v34 + v31;
  v113 = _mm_unpacklo_epi64(v35, v35);
  if ( v95.m128i_i64[0] != v30 )
  {
    while ( 1 )
    {
      *v34 = v34 + 2;
      v37 = *(_BYTE **)v30;
      v38 = *(_QWORD *)(v30 + 8);
      if ( v38 + *(_QWORD *)v30 && !v37 )
        goto LABEL_46;
      if ( (unsigned __int64)v38 > 0xF )
        break;
      v36 = (_BYTE *)*v34;
      if ( v38 == 1 )
      {
        *v36 = *v37;
        v36 = (_BYTE *)*v34;
      }
      else if ( v38 )
      {
        goto LABEL_32;
      }
LABEL_23:
      v34[1] = v38;
      v30 += 32;
      v34 += 4;
      v36[v38] = 0;
      if ( v30 == v95.m128i_i64[0] )
        goto LABEL_33;
    }
    src = *(void **)v30;
    v95.m128i_i64[1] = v30;
    if ( v38 < 0 )
      goto LABEL_110;
    v36 = (_BYTE *)operator new(v38 + 1);
    v34[2] = v38;
    v30 = v95.m128i_i64[1];
    *v34 = v36;
    v37 = src;
LABEL_32:
    v95.m128i_i64[1] = v30;
    memcpy(v36, v37, v38);
    v36 = (_BYTE *)*v34;
    v30 = v95.m128i_i64[1];
    goto LABEL_23;
  }
LABEL_33:
  v39 = *(_BYTE **)a4;
  v40 = *(_QWORD *)(a4 + 8);
  v115 = &v116;
  v113.m128i_i64[1] = (__int64)v34;
  sub_1117B80(&v115, v39, (__int64)&v39[v40]);
  v41 = *(_BYTE **)(a4 + 32);
  v42 = *(_QWORD *)(a4 + 40);
  v117 = &v118;
  sub_1117B80(&v117, v41, (__int64)&v41[v42]);
  v43 = *(_BYTE **)(a4 + 64);
  v44 = *(_QWORD *)(a4 + 72);
  v119 = &v120;
  sub_1117B80(&v119, v43, (__int64)&v43[v44]);
  v45 = *(_QWORD *)(a4 + 104);
  v46 = *(_QWORD *)(a4 + 96);
  v121 = 0;
  v95.m128i_i64[0] = v45;
  v122 = nullptr;
  v47 = v45 - v46;
  v48 = (v45 - v46) >> 5;
  if ( v48 )
  {
    if ( v48 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v49 = (_QWORD *)operator new(v47);
    v46 = *(_QWORD *)(a4 + 96);
    v50 = v49;
    v95.m128i_i64[0] = *(_QWORD *)(a4 + 104);
  }
  else
  {
    v50 = nullptr;
  }
  v95.m128i_i64[1] = (__int64)v50;
  v51 = _mm_loadl_epi64((const __m128i *)&v95.m128i_u64[1]);
  v122 = (char *)v50 + v47;
  v121 = _mm_unpacklo_epi64(v51, v51);
  if ( v95.m128i_i64[0] != v46 )
  {
    *v50 = v50 + 2;
    v52 = *(_BYTE **)v46;
    v53 = *(_QWORD *)(v46 + 8);
    if ( !(v53 + *(_QWORD *)v46) || v52 )
    {
      v54 = v46 + 32;
      while ( (unsigned __int64)v53 <= 0xF )
      {
        v55 = (_BYTE *)*v50;
        if ( v53 == 1 )
        {
          *v55 = *v52;
          v55 = (_BYTE *)*v50;
        }
        else if ( v53 )
        {
          goto LABEL_51;
        }
LABEL_43:
        v50[1] = v53;
        v50 += 4;
        v55[v53] = 0;
        if ( v95.m128i_i64[0] == v54 )
          goto LABEL_52;
        v54 += 32;
        *v50 = v50 + 2;
        v52 = *(_BYTE **)(v54 - 32);
        v53 = *(_QWORD *)(v54 - 24);
        if ( &v52[v53] && !v52 )
          goto LABEL_46;
      }
      v95.m128i_i64[1] = (__int64)v52;
      if ( v53 < 0 )
        goto LABEL_110;
      v55 = (_BYTE *)operator new(v53 + 1);
      v50[2] = v53;
      v52 = (_BYTE *)v95.m128i_i64[1];
      *v50 = v55;
LABEL_51:
      memcpy(v55, v52, v53);
      v55 = (_BYTE *)*v50;
      goto LABEL_43;
    }
LABEL_46:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_52:
  v56 = *(_BYTE **)a5;
  v57 = *(_QWORD *)(a5 + 8);
  v121.m128i_i64[1] = (__int64)v50;
  v123 = &v124;
  sub_1117B80(&v123, v56, (__int64)&v56[v57]);
  v58 = *(_BYTE **)(a5 + 32);
  v59 = *(_QWORD *)(a5 + 40);
  v125 = &v126;
  sub_1117B80(&v125, v58, (__int64)&v58[v59]);
  v60 = *(_BYTE **)(a5 + 64);
  v61 = *(_QWORD *)(a5 + 72);
  v127 = &v128;
  sub_1117B80(&v127, v60, (__int64)&v60[v61]);
  v62 = *(_QWORD *)(a5 + 104);
  v63 = *(_QWORD *)(a5 + 96);
  v129 = 0;
  v130 = nullptr;
  v64 = v62 - v63;
  if ( (v62 - v63) >> 5 )
  {
    if ( (unsigned __int64)((v62 - v63) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v65 = (_QWORD *)operator new(v64);
    v62 = *(_QWORD *)(a5 + 104);
    v66 = v65;
    v63 = *(_QWORD *)(a5 + 96);
  }
  else
  {
    v66 = nullptr;
  }
  v95.m128i_i64[0] = (__int64)v66;
  v67 = _mm_loadl_epi64(&v95);
  v130 = (char *)v66 + v64;
  v129 = _mm_unpacklo_epi64(v67, v67);
  if ( v62 != v63 )
  {
    *v66 = v66 + 2;
    v68 = *(_BYTE **)v63;
    v69 = *(_QWORD *)(v63 + 8);
    if ( v69 + *(_QWORD *)v63 && !v68 )
      goto LABEL_46;
    v70 = v63 + 32;
LABEL_59:
    if ( v69 > 0xF )
      goto LABEL_66;
    do
    {
      v71 = (_BYTE *)*v66;
      if ( v69 == 1 )
      {
        *v71 = *v68;
        v71 = (_BYTE *)*v66;
        goto LABEL_62;
      }
      if ( v69 )
        goto LABEL_68;
LABEL_62:
      v66[1] = v69;
      v66 += 4;
      v71[v69] = 0;
      if ( v62 == v70 )
        goto LABEL_71;
      v70 += 32;
      *v66 = v66 + 2;
      v68 = *(_BYTE **)(v70 - 32);
      v69 = *(_QWORD *)(v70 - 24);
      if ( !&v68[v69] )
        goto LABEL_59;
      if ( !v68 )
        goto LABEL_46;
    }
    while ( v69 <= 0xF );
LABEL_66:
    v95.m128i_i64[0] = (__int64)v68;
    if ( (v69 & 0x8000000000000000LL) != 0LL )
      goto LABEL_110;
    v71 = (_BYTE *)operator new(v69 + 1);
    v66[2] = v69;
    v68 = (_BYTE *)v95.m128i_i64[0];
    *v66 = v71;
LABEL_68:
    memcpy(v71, v68, v69);
    v71 = (_BYTE *)*v66;
    goto LABEL_62;
  }
LABEL_71:
  v72 = *(_BYTE **)a6;
  v73 = *(_QWORD *)(a6 + 8);
  v131 = &v132;
  v129.m128i_i64[1] = (__int64)v66;
  sub_1117B80(&v131, v72, (__int64)&v72[v73]);
  v74 = *(_BYTE **)(a6 + 32);
  v75 = *(_QWORD *)(a6 + 40);
  v133 = &v134;
  sub_1117B80(&v133, v74, (__int64)&v74[v75]);
  v76 = *(_BYTE **)(a6 + 64);
  v77 = *(_QWORD *)(a6 + 72);
  v135 = &v136;
  sub_1117B80(&v135, v76, (__int64)&v76[v77]);
  v78 = *(_QWORD *)(a6 + 104);
  v79 = *(_QWORD *)(a6 + 96);
  v137 = 0;
  v138 = nullptr;
  v80 = v78 - v79;
  if ( (v78 - v79) >> 5 )
  {
    if ( (unsigned __int64)((v78 - v79) >> 5) <= 0x7FFFFFFFFFFFFFFLL )
    {
      v81 = (_QWORD *)operator new(v78 - v79);
      v78 = *(_QWORD *)(a6 + 104);
      v79 = *(_QWORD *)(a6 + 96);
      v82 = v81;
      goto LABEL_74;
    }
LABEL_111:
    std::__throw_bad_alloc();
  }
  v82 = nullptr;
LABEL_74:
  v95.m128i_i64[0] = (__int64)v82;
  v83 = _mm_loadl_epi64(&v95);
  v138 = (char *)v82 + v80;
  v137 = _mm_unpacklo_epi64(v83, v83);
  if ( v78 != v79 )
  {
    while ( 1 )
    {
      *v82 = v82 + 2;
      v85 = *(_BYTE **)v79;
      v86 = *(_QWORD *)(v79 + 8);
      if ( v86 + *(_QWORD *)v79 && !v85 )
        goto LABEL_46;
      if ( (unsigned __int64)v86 > 0xF )
        break;
      v84 = (_BYTE *)*v82;
      if ( v86 == 1 )
      {
        *v84 = *v85;
        v84 = (_BYTE *)*v82;
      }
      else if ( v86 )
      {
        goto LABEL_86;
      }
LABEL_77:
      v79 += 32;
      v82[1] = v86;
      v82 += 4;
      v84[v86] = 0;
      if ( v79 == v78 )
        goto LABEL_87;
    }
    if ( v86 < 0 )
      goto LABEL_110;
    v84 = (_BYTE *)operator new(v86 + 1);
    v82[2] = v86;
    *v82 = v84;
LABEL_86:
    memcpy(v84, v85, v86);
    v84 = (_BYTE *)*v82;
    goto LABEL_77;
  }
LABEL_87:
  v137.m128i_i64[1] = (__int64)v82;
  v87 = (char **)&v139;
  v88 = sub_111A650(v98, v99, 5);
  do
  {
    while ( 1 )
    {
      v87 -= 15;
      v89 = (void **)v87[12];
      v90 = (void **)v87[13];
      v91 = v89;
      if ( v90 != v89 )
      {
        do
        {
          while ( *v91 != v91 + 2 )
          {
            operator delete(*v91);
            v91 += 4;
            if ( v90 == v91 )
              goto LABEL_91;
          }
          v91 += 4;
        }
        while ( v90 != v91 );
LABEL_91:
        v89 = (void **)v87[12];
      }
      if ( v89 )
        operator delete(v89);
      v92 = (char **)v87[8];
      if ( v92 != v87 + 10 )
        operator delete(v92);
      v93 = (char **)v87[4];
      if ( v93 != v87 + 6 )
        operator delete(v93);
      if ( *v87 == (char *)(v87 + 2) )
        break;
      operator delete(*v87);
      if ( v87 == v99 )
        return v88;
    }
  }
  while ( v87 != v99 );
  return v88;
}
