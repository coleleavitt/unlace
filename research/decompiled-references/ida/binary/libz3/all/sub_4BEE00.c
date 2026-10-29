__int64 __fastcall sub_4BEE00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // cc
  __int64 v7; // r15
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edx
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // r15
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  __m128 v41; // xmm0
  __int64 v42; // rax
  unsigned int v43; // r9d
  __int64 *v44; // r13
  __int64 v45; // rsi
  __m128 v46; // xmm4
  __int64 v47; // rax
  __int64 *v48; // r15
  __m128 v49; // xmm5
  __int64 v50; // rsi
  __int64 v51; // rdi
  __m128 v52; // xmm1
  __int64 v53; // rax
  unsigned int v54; // r9d
  __int64 *v55; // r12
  __int64 v56; // rsi
  __m128 v57; // xmm7
  __m128 v58; // xmm5
  __int64 v59; // r15
  __int64 v60; // rdi
  __int64 v61; // rsi
  __m128 v62; // xmm6
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __m128 v66; // xmm3
  __int64 v67; // rdi
  __m128 v68; // xmm6
  __m128 v69; // xmm7
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __m128 v73; // xmm5
  __int64 v74; // rdi
  __m128 v75; // xmm2
  __m128 v76; // xmm3
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdi
  __m128 v80; // xmm7
  __int64 v81; // rsi
  __int64 v82; // rdi
  __m128 v83; // xmm7
  unsigned __int64 v84; // r12
  __int64 *v85; // r13
  __int64 v86; // rsi
  __int64 v87; // rdi
  _QWORD *v88; // rax
  __int32 v89; // edx
  int v90; // r12d
  __int64 v91; // rcx
  int v92; // edx
  _QWORD *v93; // rcx
  unsigned int v94; // edx
  unsigned int v95; // ebx
  size_t v96; // rsi
  unsigned int *v97; // rdx
  __int64 v98; // rcx
  __m128 v99; // xmm5
  __m128 v100; // xmm7
  _QWORD *v101; // rax
  __m128 v102; // xmm3
  __m128 v103; // xmm7
  __int64 v104; // rdi
  __m128 v105; // xmm5
  char **exception; // rbx
  __int64 v107; // [rsp+8h] [rbp-108h]
  __int64 v108; // [rsp+10h] [rbp-100h]
  unsigned int v109; // [rsp+10h] [rbp-100h]
  __int64 v110; // [rsp+18h] [rbp-F8h]
  __int64 *v111; // [rsp+20h] [rbp-F0h]
  __int64 v112; // [rsp+20h] [rbp-F0h]
  unsigned int v113; // [rsp+38h] [rbp-D8h]
  int v114; // [rsp+3Ch] [rbp-D4h]
  __m128 v115; // [rsp+40h] [rbp-D0h] BYREF
  __int64 *v116; // [rsp+50h] [rbp-C0h]
  __int64 v117; // [rsp+58h] [rbp-B8h]
  __int64 v118; // [rsp+60h] [rbp-B0h]
  __int64 v119; // [rsp+68h] [rbp-A8h] BYREF
  __m128 v120; // [rsp+70h] [rbp-A0h] BYREF
  __m128 si128; // [rsp+80h] [rbp-90h] BYREF
  __m128i v122; // [rsp+90h] [rbp-80h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v124; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v125; // [rsp+B0h] [rbp-60h] BYREF
  __m128i v126; // [rsp+C0h] [rbp-50h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v118 = a2;
  v114 = v5;
  if ( v6 )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v118 + 24);
    v88 = *(_QWORD **)(a1 + 160);
    if ( v88 )
      v89 = *((_DWORD *)v88 - 1);
    else
      v89 = 0;
    v125.m128i_i32[0] = v89;
    if ( v114 )
    {
      si128.m128_u64[0] = v4;
      v90 = 0;
      v122.m128i_i64[1] = v118;
      while ( 1 )
      {
        if ( v88 )
        {
          v94 = *((_DWORD *)v88 - 1);
          if ( v94 == *((_DWORD *)v88 - 2) )
          {
            v95 = (3 * v94 + 1) >> 1;
            v96 = 8 * v95 + 8;
            if ( 8 * v94 + 8 >= (unsigned int)v96 || v94 >= v95 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_4B1880(v126.m128i_i64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v126);
              sub_233E40((__int64)&v126);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v97 = (unsigned int *)sub_186B300(v88 - 1, v96);
            v88 = v97 + 2;
            v98 = v97[1];
            *v97 = v95;
            *(_QWORD *)(a1 + 160) = v97 + 2;
            LODWORD(v97) = v98;
            v93 = &v88[v98];
            v92 = (_DWORD)v97 + 1;
          }
          else
          {
            v91 = v94;
            v92 = v94 + 1;
            v93 = &v88[v91];
          }
        }
        else
        {
          v101 = (_QWORD *)sub_186B270(0x18u);
          v92 = 1;
          *v101 = 2;
          v88 = v101 + 1;
          *(_QWORD *)(a1 + 160) = v88;
          v93 = v88;
        }
        *v93 = 0;
        ++v90;
        *((_DWORD *)v88 - 1) = v92;
        sub_4B27C0((_QWORD *)(a1 + 528), (unsigned int *)&v125);
        if ( v90 == v114 )
          break;
        v88 = *(_QWORD **)(a1 + 160);
      }
      v4 = si128.m128_u64[0];
      v118 = v122.m128i_i64[1];
    }
    *(_DWORD *)(a1 + 128) += v114;
  }
  v7 = v118;
  v8 = *(_DWORD *)(v118 + 76) + *(_DWORD *)(v118 + 72) + 1;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v4 + 8) >> 6;
    if ( v12 >= v8 )
      break;
    if ( v12 )
    {
      v13 = *(_DWORD *)(v7 + 72);
      v14 = v12 - 1;
      if ( v13 < v12 )
        v15 = v7 + 8LL * ((unsigned int)v14 - v13);
      else
        v15 = v7 + 8 * v14;
      v9 = *(_QWORD *)(16LL * *(unsigned int *)(v7 + 20) + v15 + 80);
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 24);
    }
    v10 = ((v12 + 1) << 6) | *(_DWORD *)(v4 + 8) & 0x3F;
    *(_DWORD *)(v4 + 8) = v10;
    result = sub_4BAA60((_QWORD *)a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v28 = *(unsigned int *)(v4 + 12);
  v29 = *(_QWORD *)(a1 + 56);
  v30 = v7;
  v118 = v7;
  v31 = *(_DWORD *)(v7 + 72);
  v32 = *(_DWORD *)(v7 + 76);
  v33 = v7 + 80;
  v125.m128i_i64[1] = 0;
  v34 = (__int64 *)(v29 + 8 * v28);
  v35 = *(unsigned int *)(v30 + 20);
  v111 = v34;
  v110 = *v34;
  v125.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v125, v31, (__int64 *)(v33 + 16 * v35));
  v126.m128i_i64[1] = 0;
  v119 = v125.m128i_i64[1];
  v117 = v125.m128i_i64[0];
  v36 = (__int64 *)(v33 + 16LL * *(unsigned int *)(v118 + 20));
  v126.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v126, v32, v36);
  v122 = v126;
  v37 = v31;
  v108 = v31;
  if ( v31 )
  {
    v31 = 0;
    v38 = v111;
    v116 = &v111[v37];
    v115 = _mm_loadh_ps((const double *)&v119);
    do
    {
      while ( 1 )
      {
        v39 = v38[1];
        v40 = *(_QWORD *)(a1 + 8);
        v41 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v115);
        v120 = v41;
        if ( (unsigned __int8)sub_15D3190(v40, v39) )
          break;
        if ( v116 == ++v38 )
          goto LABEL_41;
      }
      v42 = v38[1];
      v43 = v31 + 1;
      v44 = (__int64 *)(v119 + 8LL * v31);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v45 = *v44;
      if ( *v44 )
      {
        v18 = (*(_DWORD *)(v45 + 8))-- == 1;
        if ( v18 )
        {
          v113 = v43;
          v107 = v42;
          v100 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v119);
          v120 = v100;
          sub_15D7BC0(v117, v45);
          v43 = v113;
          v42 = v107;
        }
      }
      *v44 = v42;
      ++v38;
      v31 = v43;
    }
    while ( v116 != v38 );
  }
LABEL_41:
  v46 = _mm_loadh_ps((const double *)&v119);
  v120 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
  si128 = v46;
  sub_39BEE0(v125.m128i_i64, v31);
  if ( v32 )
  {
    v47 = v32;
    v32 = 0;
    v48 = &v111[v108];
    v49 = _mm_loadh_ps((const double *)&v119);
    v116 = &v111[v108 + v47];
    v115 = v49;
    do
    {
      while ( 1 )
      {
        v50 = v48[1];
        v51 = *(_QWORD *)(a1 + 8);
        v52 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v115);
        v120 = v52;
        if ( (unsigned __int8)sub_15D3190(v51, v50) )
          break;
        if ( ++v48 == v116 )
          goto LABEL_51;
      }
      v53 = v48[1];
      v54 = v32 + 1;
      v55 = (__int64 *)(v122.m128i_i64[1] + 8LL * v32);
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v56 = *v55;
      if ( *v55 )
      {
        v18 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v18 )
        {
          v109 = v54;
          v112 = v53;
          v99 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v119);
          v120 = v99;
          sub_15D7BC0(v122.m128i_i64[0], v56);
          v54 = v109;
          v53 = v112;
        }
      }
      *v55 = v53;
      ++v48;
      v32 = v54;
    }
    while ( v48 != v116 );
  }
LABEL_51:
  v57 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v119);
  v120 = v57;
  sub_39BEE0(v126.m128i_i64, v32);
  v58 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
  v116 = *(__int64 **)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v119);
  v120 = v58;
  v59 = sub_15DBA30((_DWORD)v116, v118, v31, v119, v32, v122.m128i_i32[2], v110);
  v60 = *(_QWORD *)(a1 + 496);
  v61 = *(_QWORD *)(a1 + 504);
  if ( !v59 )
  {
    v102 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v119);
    v120 = v102;
    sub_4B1840(v60, v61);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_53:
    v63 = *(_QWORD *)(a1 + 88);
    v64 = *(_QWORD *)(a1 + 504);
    v65 = *(_QWORD *)(v63 + 8LL * *(unsigned int *)(v4 + 12));
    if ( v65 )
    {
      v115.m128_u64[0] = *(_QWORD *)(v63 + 8LL * *(unsigned int *)(v4 + 12));
      ++*(_DWORD *)(v65 + 8);
      v66 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v119);
      v120 = v66;
      sub_4B1840(0, v64);
      v67 = *(_QWORD *)(a1 + 8);
      v68 = _mm_loadh_ps((const double *)&v119);
      v69 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      *(_QWORD *)(a1 + 496) = v115.m128_u64[0];
      si128 = v68;
      v120 = v69;
      v70 = sub_15DE700(v67);
      if ( v70 )
        ++*(_DWORD *)(v70 + 8);
      v115.m128_u64[0] = v70;
      v71 = *(_QWORD *)(a1 + 504);
      v72 = *(_QWORD *)(a1 + 496);
      v73 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v119);
      v120 = v73;
      sub_4B1840(v72, v71);
      v74 = *(_QWORD *)(a1 + 8);
      v75 = _mm_loadh_ps((const double *)&v119);
      *(_QWORD *)(a1 + 496) = v115.m128_u64[0];
      v76 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      si128 = v75;
      v120 = v76;
      v77 = sub_15DE750(v74);
    }
    else
    {
      v103 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v119);
      v120 = v103;
      sub_4B1840(0, v64);
      v104 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = 0;
      v105 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v119);
      v120 = v105;
      v77 = sub_15DE370(v104);
    }
    if ( v77 )
      ++*(_DWORD *)(v77 + 8);
    v115.m128_u64[0] = v77;
    v78 = *(_QWORD *)(a1 + 504);
    v79 = *(_QWORD *)(a1 + 496);
    v80 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v119);
    v120 = v80;
    sub_4B1840(v79, v78);
    *(_QWORD *)(a1 + 496) = v115.m128_u64[0];
    if ( !v59 )
      goto LABEL_61;
    goto LABEL_60;
  }
  ++*(_DWORD *)(v59 + 8);
  v62 = _mm_loadh_ps((const double *)&v119);
  v120 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
  si128 = v62;
  sub_4B1840(v60, v61);
  *(_QWORD *)(a1 + 496) = 0;
  if ( v118 != v59 )
    goto LABEL_53;
LABEL_60:
  ++*(_DWORD *)(v59 + 8);
LABEL_61:
  v81 = *(_QWORD *)(a1 + 488);
  v82 = *(_QWORD *)(a1 + 480);
  v83 = _mm_loadh_ps((const double *)&v122.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v119);
  v120 = v83;
  sub_4B1860(v82, v81);
  v16 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v59;
  if ( v16 )
  {
    v84 = v16 + 8LL * *(unsigned int *)(v16 - 4);
    v122.m128i_i32[2] = *(_DWORD *)(v4 + 12);
    v85 = (__int64 *)(v16 + 8LL * v122.m128i_u32[2]);
    if ( (unsigned __int64)v85 >= v84 )
      goto LABEL_12;
    do
    {
      v86 = *v85;
      if ( *v85 )
      {
        v87 = *(_QWORD *)(a1 + 80);
        v18 = (*(_DWORD *)(v86 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v87, v86);
      }
      ++v85;
    }
    while ( (unsigned __int64)v85 < v84 );
    v16 = *(_QWORD *)(a1 + 88);
    if ( v16 )
LABEL_12:
      *(_DWORD *)(v16 - 4) = v122.m128i_i32[2];
  }
  v17 = *(_QWORD *)(a1 + 496);
  v123 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  sub_4B2860((_QWORD *)(a1 + 88), &v123);
  if ( v59 )
  {
    v18 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v116, v59);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v19 = *(_QWORD *)(a1 + 480);
  v124 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_4B2920((_QWORD *)(a1 + 56), &v124);
  v20 = *(_QWORD *)(a1 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v114;
  v21 = *(_QWORD *)(a1 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v114;
  sub_15844D0(a1);
  v22 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v118, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v22 = *(_QWORD *)(a1 + 480);
  }
  sub_4B1860(v22, *(_QWORD *)(a1 + 488));
  v23 = *(_QWORD *)(a1 + 504);
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_4B1840(v24, v23);
  v25 = *(_QWORD *)(a1 + 40);
  v26 = v118;
  *(_QWORD *)(a1 + 496) = 0;
  v27 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v27 - 1;
  if ( *(_QWORD *)(a1 + 480) != v26 && v27 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
  v126 = _mm_load_si128((const __m128i *)&v120);
  sub_2334C0(v126.m128i_i64);
  v125 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v125.m128i_i64);
}

