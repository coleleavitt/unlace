__int64 __fastcall sub_D59470(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6, int a7)
{
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __m128i v21; // xmm1
  void *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r13
  __m128i si128; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // r15
  __int64 v34; // r13
  int v35; // r9d
  int v36; // r15d
  int v37; // r9d
  __int64 result; // rax
  bool v39; // zf
  void *v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // [rsp+0h] [rbp-190h]
  int v76; // [rsp+0h] [rbp-190h]
  int v77; // [rsp+0h] [rbp-190h]
  int v78; // [rsp+8h] [rbp-188h]
  __int64 v79; // [rsp+8h] [rbp-188h]
  __int64 v80; // [rsp+8h] [rbp-188h]
  __int64 v81; // [rsp+10h] [rbp-180h]
  __int64 v82; // [rsp+10h] [rbp-180h]
  __int64 v83; // [rsp+10h] [rbp-180h]
  __int64 v84; // [rsp+18h] [rbp-178h]
  __int64 v85; // [rsp+18h] [rbp-178h]
  __int64 v86; // [rsp+18h] [rbp-178h]
  __int64 v87; // [rsp+20h] [rbp-170h]
  __int64 v88; // [rsp+20h] [rbp-170h]
  __int64 v89; // [rsp+28h] [rbp-168h]
  __int64 v90; // [rsp+28h] [rbp-168h]
  __int64 v91; // [rsp+28h] [rbp-168h]
  __int64 v92; // [rsp+28h] [rbp-168h]
  int v93; // [rsp+30h] [rbp-160h]
  __int64 v94; // [rsp+30h] [rbp-160h]
  __int64 v95; // [rsp+30h] [rbp-160h]
  __int64 v96; // [rsp+30h] [rbp-160h]
  __int64 v97; // [rsp+38h] [rbp-158h]
  __int64 v98; // [rsp+38h] [rbp-158h]
  __int64 v99; // [rsp+38h] [rbp-158h]
  __int64 v100; // [rsp+38h] [rbp-158h]
  _BYTE v101[24]; // [rsp+40h] [rbp-150h] BYREF
  __int128 v102; // [rsp+58h] [rbp-138h]
  __int64 v103; // [rsp+68h] [rbp-128h] BYREF
  __int64 *v104; // [rsp+70h] [rbp-120h]
  void *v105; // [rsp+78h] [rbp-118h]
  __int64 v106; // [rsp+80h] [rbp-110h]
  __int64 v107; // [rsp+88h] [rbp-108h]
  __int64 *v108; // [rsp+90h] [rbp-100h]
  __int64 *v109; // [rsp+98h] [rbp-F8h]
  __m128i v110; // [rsp+A0h] [rbp-F0h] BYREF
  _QWORD *v111; // [rsp+B0h] [rbp-E0h]
  __int64 *v112; // [rsp+B8h] [rbp-D8h]
  int v113[2]; // [rsp+C0h] [rbp-D0h] BYREF
  __int64 v114; // [rsp+C8h] [rbp-C8h]
  int v115[2]; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v116; // [rsp+D8h] [rbp-B8h]
  int v117[4]; // [rsp+E0h] [rbp-B0h] BYREF
  __int64 v118[2]; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v119; // [rsp+100h] [rbp-90h] BYREF
  __int64 v120; // [rsp+108h] [rbp-88h]
  __int64 v121; // [rsp+110h] [rbp-80h] BYREF
  __int64 v122; // [rsp+118h] [rbp-78h]
  __int64 v123; // [rsp+120h] [rbp-70h] BYREF
  __int64 v124; // [rsp+128h] [rbp-68h]
  int v125[2]; // [rsp+130h] [rbp-60h] BYREF
  __int64 *v126; // [rsp+138h] [rbp-58h]
  __m128i v127; // [rsp+140h] [rbp-50h] BYREF
  __int64 v128; // [rsp+150h] [rbp-40h] BYREF
  __int64 v129; // [rsp+158h] [rbp-38h]

  v109 = a4;
  v108 = a5;
  *(_DWORD *)&v101[16] = a7;
  v9 = *(_QWORD *)(a2 + 16);
  v104 = a6;
  v10 = *(_QWORD *)(v9 + 40);
  HIDWORD(v102) = sub_15C5560(a1 + 54, v10);
  v15 = sub_15C5540((int)a1 + 432, v10, v11, v12, v13, v14);
  v16 = v109;
  LODWORD(v107) = v15;
  sub_D51BC0((__int64)a1, a2, a3, v108, v109);
  v17 = a1[1];
  *(_QWORD *)v113 = 0;
  v114 = v17;
  sub_D58E00(
    (int)a1,
    a2,
    (int)v113,
    v75,
    v78,
    v81,
    v84,
    v87,
    v89,
    v93,
    v97,
    *(__int64 *)v101,
    *(__int64 *)&v101[8],
    *(__int64 *)&v101[16],
    v102,
    *((__int64 *)&v102 + 1),
    v103,
    (__int64)v104,
    (__int64)v105,
    v106,
    v107,
    (__int64)v108,
    (__int64)v109,
    v110.m128i_i64[0]);
  v18 = a1[1];
  v127 = (__m128i)1uLL;
  v19 = *v16;
  *(_QWORD *)&v102 = v18;
  v111 = a1 + 29;
  v128 = 1;
  v129 = 0;
  v112 = &v128;
  sub_182CBA0(qword_1C7F2C0, &v128);
  BYTE4(v128) &= ~1u;
  LODWORD(v128) = 1;
  v20 = sub_1674520(a1 + 29, &v127, 1);
  v21 = (__m128i)(unsigned __int64)v19;
  v22 = qword_1C7F2C0;
  v110 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, v21);
  sub_182CBA0(qword_1C7F2C0, &v127);
  sub_182CBA0(v22, &v128);
  v23 = a1[30];
  v127 = _mm_load_si128(&v110);
  v24 = sub_15E1AF0(v23);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  *(_QWORD *)v115 = 0;
  v26 = *v108;
  v116 = v102;
  sub_D556B0((__int64)a1, v26, (__int64 *)v115);
  v127 = (__m128i)1uLL;
  v106 = *(_QWORD *)v115;
  v27 = a1[30];
  v98 = v116;
  v103 = a1[1];
  *(_QWORD *)v125 = *v109;
  v110.m128i_i64[0] = sub_15DCAD0(v27, (int)v125, 0);
  v28 = v110.m128i_i64[0];
  sub_15D0DF0(&v127);
  if ( v28 )
    ++*(_DWORD *)(v110.m128i_i64[0] + 8);
  v127 = (__m128i)1uLL;
  v128 = 1;
  v129 = 0;
  sub_182CBA0(qword_1C7F2C0, v112);
  LODWORD(v128) = 1;
  BYTE4(v128) &= ~1u;
  v29 = sub_1674520(v111, &v127, (unsigned int)v107);
  *(__m128 *)v101 = _mm_loadh_ps((const double *)&v103);
  v105 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v127);
  sub_182CBA0(v105, v112);
  si128 = _mm_load_si128((const __m128i *)v101);
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  *(__m128i *)v117 = si128;
  sub_D556B0((__int64)a1, v29, (__int64 *)v117);
  v127 = 0u;
  v105 = *(void **)v117;
  v128 = 1;
  v94 = *(_QWORD *)&v117[2];
  v31 = a1[1];
  v129 = 0;
  v90 = v31;
  v118[1] = v31;
  sub_182CBA0(qword_1C7F2C0, v112);
  LODWORD(v128) = 1;
  BYTE4(v128) &= ~1u;
  v32 = sub_1674520(v111, &v127, (unsigned int)v107);
  v33 = qword_1C7F2C0;
  v34 = v32;
  sub_182CBA0(qword_1C7F2C0, &v127);
  sub_182CBA0(v33, v112);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  if ( v101[16] )
  {
    v45 = a1[1];
    v119 = 0;
    v82 = v45;
    v120 = v45;
    v46 = sub_D50430((__int64)v111, HIDWORD(v102));
    *(_QWORD *)v101 = v46;
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
    v36 = (_DWORD)a1 + 16;
    sub_D81DD0(a1 + 2, v46, v110.m128i_i64[0], &v119);
    v47 = a1[1];
    v121 = 0;
    v79 = v47;
    v122 = v47;
    sub_D55100((__int64)a1, v110.m128i_i64[0], v107, &v121);
    v48 = sub_15E1B70(a1[1]);
    *(_QWORD *)&v101[16] = v48;
    if ( v48 )
      ++*(_DWORD *)(v48 + 8);
    sub_D81E50(a1 + 2, v48, v34, v121, v104);
    v49 = a1[1];
    v123 = 0;
    v124 = v49;
    sub_D81E50(a1 + 2, v119, v34, *v104, &v123);
    v112 = (__int64 *)a1[1];
    if ( HIDWORD(v102) >= (unsigned int)v107 )
    {
      v72 = sub_D81D60(v111, (unsigned int)(HIDWORD(v102) - v107), v123);
      v73 = v72;
      if ( v72 )
        ++*(_DWORD *)(v72 + 8);
      v74 = sub_15E1B70(a1[30]);
      if ( v74 )
        ++*(_DWORD *)(v74 + 8);
      v111 = (_QWORD *)v74;
      sub_D50200(v110.m128i_i64[0], v103);
      sub_D50200(v73, (__int64)v112);
      v110.m128i_i64[0] = (__int64)v111;
    }
    else
    {
      *(_QWORD *)v125 = 0;
      v127.m128i_i64[0] = 0;
      v126 = v112;
      v127.m128i_i64[1] = (__int64)v112;
      v50 = sub_D50430((__int64)v111, (int)v107 - HIDWORD(v102));
      v85 = v50;
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
      v51 = sub_D81BF0(v111, HIDWORD(v102), HIDWORD(v102));
      v104 = (__int64 *)v51;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      v52 = sub_D81CD0(v111, (unsigned int)(v107 - 1), HIDWORD(v102), v123);
      v107 = v52;
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      sub_D81DD0(a1 + 2, v85, v52, v125);
      v53 = sub_D50160((__int64)v111, HIDWORD(v102) - 1, v123);
      v111 = (_QWORD *)v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_D81E50(a1 + 2, *(_QWORD *)v125, v53, v104, &v127);
      v54 = sub_15E1B70(a1[30]);
      v55 = v54;
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      sub_D50200(v110.m128i_i64[0], v103);
      sub_D50200((__int64)v111, (__int64)v112);
      sub_D50200((__int64)v104, (__int64)v112);
      sub_D50200(v127.m128i_i64[0], v127.m128i_i64[1]);
      sub_D50200(*(__int64 *)v125, (__int64)v126);
      sub_D50200(v107, (__int64)v112);
      sub_D50200(v85, (__int64)v112);
      v110.m128i_i64[0] = v55;
    }
    v56 = v123;
    if ( v123 )
    {
      v57 = v124;
      v39 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v57, v56);
    }
    v58 = *(_QWORD *)&v101[16];
    if ( *(_QWORD *)&v101[16] )
    {
      LODWORD(v112) = *(_DWORD *)(*(_QWORD *)&v101[16] + 8LL);
      v39 = (_DWORD)v112 == 1;
      *(_DWORD *)(*(_QWORD *)&v101[16] + 8LL) = (_DWORD)v112 - 1;
      if ( v39 )
        sub_15D7BC0(v79, v58);
    }
    v59 = v121;
    if ( v121 )
    {
      v60 = v122;
      v39 = (*(_DWORD *)(v121 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v60, v59);
    }
    v61 = *(_QWORD *)v101;
    if ( *(_QWORD *)v101 )
    {
      LODWORD(v112) = *(_DWORD *)(*(_QWORD *)v101 + 8LL);
      v39 = (_DWORD)v112 == 1;
      *(_DWORD *)(*(_QWORD *)v101 + 8LL) = (_DWORD)v112 - 1;
      if ( v39 )
        sub_15D7BC0(v82, v61);
    }
    v62 = v119;
    if ( v119 )
    {
      v63 = v120;
      v39 = (*(_DWORD *)(v119 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v63, v62);
    }
  }
  else
  {
    if ( *v104 != v34 )
    {
      v118[0] = v34;
      sub_D50220(v104, v118);
    }
    v36 = (_DWORD)a1 + 16;
  }
  if ( (unsigned int)sub_14E2530(
                       v36,
                       v113[0],
                       v25,
                       v110.m128i_i32[0],
                       (_DWORD)v109,
                       v35,
                       v76,
                       v79,
                       v82,
                       v85,
                       (__int64)v125,
                       v90,
                       v94,
                       v98,
                       *(__int64 *)v101,
                       *(__int128 *)&v101[8],
                       v102) == 5 )
  {
    v64 = sub_15E1BF0(a1[2]);
    v65 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    v66 = *v109;
    if ( *v109 )
    {
      v67 = v109[1];
      v39 = (*(_DWORD *)(v66 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v67, v66);
    }
    *v109 = v65;
  }
  result = sub_14E2530(
             v36,
             v113[0],
             v106,
             (_DWORD)v105,
             (_DWORD)v108,
             v37,
             v77,
             v80,
             v83,
             v86,
             v88,
             v91,
             v95,
             v99,
             *(__int64 *)v101,
             *(__int128 *)&v101[8],
             v102);
  if ( (_DWORD)result == 5 )
  {
    v68 = sub_15E1BF0(a1[2]);
    v69 = v68;
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    v70 = *v108;
    if ( *v108 )
    {
      v71 = v108[1];
      v39 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v71, v70);
    }
    result = (__int64)v108;
    *v108 = v69;
  }
  if ( v34 )
  {
    v39 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v39 )
      result = sub_15D7BC0(v92, v34);
  }
  v40 = v105;
  if ( v105 )
  {
    LODWORD(v112) = *((_DWORD *)v105 + 2);
    v39 = (_DWORD)v112 == 1;
    result = (unsigned int)((_DWORD)v112 - 1);
    *((_DWORD *)v105 + 2) = result;
    if ( v39 )
      result = sub_15D7BC0(v96, v40);
  }
  v41 = v110.m128i_i64[0];
  if ( v110.m128i_i64[0] )
  {
    LODWORD(v112) = *(_DWORD *)(v110.m128i_i64[0] + 8);
    v39 = (_DWORD)v112 == 1;
    result = (unsigned int)((_DWORD)v112 - 1);
    *(_DWORD *)(v110.m128i_i64[0] + 8) = result;
    if ( v39 )
      result = sub_15D7BC0(v103, v41);
  }
  v42 = v106;
  if ( v106 )
  {
    LODWORD(v112) = *(_DWORD *)(v106 + 8);
    v39 = (_DWORD)v112 == 1;
    result = (unsigned int)((_DWORD)v112 - 1);
    *(_DWORD *)(v106 + 8) = result;
    if ( v39 )
      result = sub_15D7BC0(v100, v42);
  }
  if ( v25 )
  {
    v39 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v39 )
      result = sub_15D7BC0(v102, v25);
  }
  v43 = *(_QWORD *)v113;
  if ( *(_QWORD *)v113 )
  {
    v44 = v114;
    v39 = (*(_DWORD *)(*(_QWORD *)v113 + 8LL))-- == 1;
    if ( v39 )
      return sub_15D7BC0(v44, v43);
  }
  return result;
}

