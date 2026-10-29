__int64 __fastcall sub_C19380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // cc
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edx
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // r12d
  __int64 *v24; // rdx
  __int64 v25; // rax
  __m128 v26; // xmm4
  __m128 v27; // xmm7
  __m128 v28; // xmm5
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdi
  __m128 v32; // xmm6
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __m128 v36; // xmm3
  __int64 v37; // rdi
  __m128 v38; // xmm6
  __m128 v39; // xmm7
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  __m128 v43; // xmm5
  __int64 v44; // rdi
  __m128 v45; // xmm2
  __m128 v46; // xmm3
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdi
  __m128 v50; // xmm7
  __int64 v51; // rsi
  __int64 v52; // rdi
  __m128 v53; // xmm7
  __int64 v54; // rax
  bool v55; // zf
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rbx
  int v64; // ecx
  __int64 v65; // rax
  __int64 *v66; // r15
  __m128 v67; // xmm5
  __int64 v68; // rsi
  __int64 v69; // rdi
  __m128 v70; // xmm1
  __int64 v71; // rax
  unsigned int v72; // r9d
  __int64 *v73; // r12
  __int64 v74; // rsi
  __int64 *v75; // r15
  __int64 v76; // rsi
  __int64 v77; // rdi
  __m128 v78; // xmm0
  __int64 v79; // rax
  unsigned int v80; // r9d
  __int64 *v81; // r14
  __int64 v82; // rsi
  _QWORD *v83; // rax
  int v84; // r15d
  int v85; // r12d
  __int64 v86; // rcx
  int v87; // edx
  _QWORD *v88; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // rax
  _DWORD *v91; // rax
  unsigned int v92; // edx
  unsigned int v93; // ebx
  size_t v94; // rsi
  unsigned int *v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ebx
  size_t v98; // rsi
  unsigned int *v99; // rax
  _DWORD *v100; // rdx
  __int64 v101; // rax
  __m128 v102; // xmm5
  __m128 v103; // xmm7
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __m128 v106; // xmm3
  __m128 v107; // xmm7
  __int64 v108; // rdi
  __m128 v109; // xmm5
  char **exception; // rbx
  __int64 v111; // [rsp+8h] [rbp-108h]
  __int64 v112; // [rsp+10h] [rbp-100h]
  unsigned int v113; // [rsp+10h] [rbp-100h]
  __int64 v114; // [rsp+18h] [rbp-F8h]
  __int64 *v115; // [rsp+20h] [rbp-F0h]
  __int64 v116; // [rsp+20h] [rbp-F0h]
  unsigned int v117; // [rsp+38h] [rbp-D8h]
  int v118; // [rsp+3Ch] [rbp-D4h]
  __m128 v119; // [rsp+40h] [rbp-D0h] BYREF
  __int64 *v120; // [rsp+50h] [rbp-C0h]
  __int64 v121; // [rsp+58h] [rbp-B8h]
  __int64 v122; // [rsp+60h] [rbp-B0h]
  __int64 v123; // [rsp+68h] [rbp-A8h] BYREF
  __m128 v124; // [rsp+70h] [rbp-A0h] BYREF
  __m128 si128; // [rsp+80h] [rbp-90h] BYREF
  __m128i v126; // [rsp+90h] [rbp-80h] BYREF
  __int64 v127; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v129; // [rsp+B0h] [rbp-60h] BYREF
  __m128i v130; // [rsp+C0h] [rbp-50h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v122 = a2;
  v118 = v5;
  if ( !v6 )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(v122 + 24);
  v83 = *(_QWORD **)(a1 + 160);
  if ( v83 )
    v84 = *((_DWORD *)v83 - 1);
  else
    v84 = 0;
  if ( v118 )
  {
    si128.m128_u64[0] = v4;
    v85 = 0;
    v126.m128i_i64[1] = v122;
    while ( 1 )
    {
      if ( v83 )
      {
        v92 = *((_DWORD *)v83 - 1);
        if ( v92 == *((_DWORD *)v83 - 2) )
        {
          v93 = (3 * v92 + 1) >> 1;
          v94 = 8 * v93 + 8;
          if ( 8 * v92 + 8 >= (unsigned int)v94 || v92 >= v93 )
          {
LABEL_84:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C0E620(v130.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v130);
            sub_233E40((__int64)&v130);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = (unsigned int *)sub_186B300(v83 - 1, v94);
          v83 = v95 + 2;
          v96 = v95[1];
          *v95 = v93;
          *(_QWORD *)(a1 + 160) = v95 + 2;
          LODWORD(v95) = v96;
          v88 = &v83[v96];
          v87 = (_DWORD)v95 + 1;
        }
        else
        {
          v86 = v92;
          v87 = v92 + 1;
          v88 = &v83[v86];
        }
      }
      else
      {
        v105 = (_QWORD *)sub_186B270(0x18u);
        v87 = 1;
        *v105 = 2;
        v83 = v105 + 1;
        *(_QWORD *)(a1 + 160) = v83;
        v88 = v83;
      }
      *v88 = 0;
      *((_DWORD *)v83 - 1) = v87;
      v89 = *(_QWORD **)(a1 + 528);
      if ( !v89 )
        break;
      v90 = *((unsigned int *)v89 - 1);
      if ( (_DWORD)v90 != *((_DWORD *)v89 - 2) )
      {
        v91 = (_DWORD *)v89 + v90;
        goto LABEL_67;
      }
      v97 = (unsigned int)(3 * v90 + 1) >> 1;
      v98 = 4 * v97 + 8;
      if ( 4 * (int)v90 + 8 >= (unsigned int)v98 || (unsigned int)v90 >= v97 )
        goto LABEL_84;
      ++v85;
      v99 = (unsigned int *)sub_186B300(v89 - 1, v98);
      v100 = v99 + 2;
      *v99 = v97;
      v101 = v99[1];
      *(_QWORD *)(a1 + 528) = v100;
      v100[v101] = v84;
      ++*(v100 - 1);
      if ( v85 == v118 )
      {
LABEL_77:
        v4 = si128.m128_u64[0];
        v122 = v126.m128i_i64[1];
        goto LABEL_78;
      }
LABEL_68:
      v83 = *(_QWORD **)(a1 + 160);
    }
    v104 = (_QWORD *)sub_186B270(0x10u);
    v89 = v104 + 1;
    *v104 = 2;
    *(_QWORD *)(a1 + 528) = v104 + 1;
    v91 = v104 + 1;
LABEL_67:
    ++v85;
    *v91 = v84;
    ++*((_DWORD *)v89 - 1);
    if ( v85 == v118 )
      goto LABEL_77;
    goto LABEL_68;
  }
LABEL_78:
  *(_DWORD *)(a1 + 128) += v118;
LABEL_2:
  v7 = v122;
  v8 = *(_DWORD *)(v122 + 76) + *(_DWORD *)(v122 + 72) + 1;
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
    result = sub_C18620(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v16 = *(unsigned int *)(v4 + 12);
  v17 = *(_QWORD *)(a1 + 56);
  v18 = v7;
  v122 = v7;
  v19 = *(_DWORD *)(v7 + 72);
  v20 = v18 + 80;
  v129.m128i_i64[1] = 0;
  v21 = (__int64 *)(v17 + 8 * v16);
  v22 = *(unsigned int *)(v18 + 20);
  v23 = *(_DWORD *)(v18 + 76);
  v115 = v21;
  v114 = *v21;
  v129.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v129, v19, (__int64 *)(v18 + 80 + 16 * v22));
  v130.m128i_i64[1] = 0;
  v123 = v129.m128i_i64[1];
  v121 = v129.m128i_i64[0];
  v24 = (__int64 *)(v20 + 16LL * *(unsigned int *)(v122 + 20));
  v130.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v130, v23, v24);
  v126 = v130;
  v25 = v19;
  v112 = v19;
  if ( v19 )
  {
    v19 = 0;
    v75 = v115;
    v120 = &v115[v25];
    v119 = _mm_loadh_ps((const double *)&v123);
    do
    {
      v76 = v75[1];
      v77 = *(_QWORD *)(a1 + 8);
      v78 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v119);
      v124 = v78;
      if ( (unsigned __int8)sub_15D3190(v77, v76) )
      {
        v79 = v75[1];
        v80 = v19 + 1;
        v81 = (__int64 *)(v123 + 8LL * v19);
        if ( v79 )
          ++*(_DWORD *)(v79 + 8);
        v82 = *v81;
        if ( *v81 )
        {
          v55 = (*(_DWORD *)(v82 + 8))-- == 1;
          if ( v55 )
          {
            v117 = v80;
            v111 = v79;
            v103 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
            si128 = _mm_loadh_ps((const double *)&v123);
            v124 = v103;
            sub_15D7BC0(v121, v82);
            v80 = v117;
            v79 = v111;
          }
        }
        *v81 = v79;
        v19 = v80;
      }
      ++v75;
    }
    while ( v120 != v75 );
  }
  v26 = _mm_loadh_ps((const double *)&v123);
  v124 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
  si128 = v26;
  sub_39BEE0(v129.m128i_i64, v19);
  if ( v23 )
  {
    v65 = v23;
    v23 = 0;
    v66 = &v115[v112];
    v67 = _mm_loadh_ps((const double *)&v123);
    v120 = &v115[v112 + v65];
    v119 = v67;
    do
    {
      v68 = v66[1];
      v69 = *(_QWORD *)(a1 + 8);
      v70 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v119);
      v124 = v70;
      if ( (unsigned __int8)sub_15D3190(v69, v68) )
      {
        v71 = v66[1];
        v72 = v23 + 1;
        v73 = (__int64 *)(v126.m128i_i64[1] + 8LL * v23);
        if ( v71 )
          ++*(_DWORD *)(v71 + 8);
        v74 = *v73;
        if ( *v73 )
        {
          v55 = (*(_DWORD *)(v74 + 8))-- == 1;
          if ( v55 )
          {
            v113 = v72;
            v116 = v71;
            v102 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
            si128 = _mm_loadh_ps((const double *)&v123);
            v124 = v102;
            sub_15D7BC0(v126.m128i_i64[0], v74);
            v72 = v113;
            v71 = v116;
          }
        }
        *v73 = v71;
        v23 = v72;
      }
      ++v66;
    }
    while ( v66 != v120 );
  }
  v27 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v123);
  v124 = v27;
  sub_39BEE0(v130.m128i_i64, v23);
  v28 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
  v120 = *(__int64 **)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v123);
  v124 = v28;
  v29 = sub_15DBA30((_DWORD)v120, v122, v19, v123, v23, v126.m128i_i32[2], v114);
  v30 = *(_QWORD *)(a1 + 504);
  v31 = *(_QWORD *)(a1 + 496);
  if ( !v29 )
  {
    v106 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v123);
    v124 = v106;
    sub_C0E540(v31, v30);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_15:
    v33 = *(_QWORD *)(a1 + 88);
    v34 = *(_QWORD *)(a1 + 504);
    v35 = *(_QWORD *)(v33 + 8LL * *(unsigned int *)(v4 + 12));
    if ( v35 )
    {
      v119.m128_u64[0] = *(_QWORD *)(v33 + 8LL * *(unsigned int *)(v4 + 12));
      ++*(_DWORD *)(v35 + 8);
      v36 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v123);
      v124 = v36;
      sub_C0E540(0, v34);
      v37 = *(_QWORD *)(a1 + 8);
      v38 = _mm_loadh_ps((const double *)&v123);
      v39 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      *(_QWORD *)(a1 + 496) = v119.m128_u64[0];
      si128 = v38;
      v124 = v39;
      v40 = sub_15DE700(v37);
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v119.m128_u64[0] = v40;
      v41 = *(_QWORD *)(a1 + 504);
      v42 = *(_QWORD *)(a1 + 496);
      v43 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v123);
      v124 = v43;
      sub_C0E540(v42, v41);
      v44 = *(_QWORD *)(a1 + 8);
      v45 = _mm_loadh_ps((const double *)&v123);
      *(_QWORD *)(a1 + 496) = v119.m128_u64[0];
      v46 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = v45;
      v124 = v46;
      v47 = sub_15DE750(v44);
    }
    else
    {
      v107 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v123);
      v124 = v107;
      sub_C0E540(0, v34);
      v108 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = 0;
      v109 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v123);
      v124 = v109;
      v47 = sub_15DE370(v108);
    }
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    v119.m128_u64[0] = v47;
    v48 = *(_QWORD *)(a1 + 504);
    v49 = *(_QWORD *)(a1 + 496);
    v50 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v123);
    v124 = v50;
    sub_C0E540(v49, v48);
    *(_QWORD *)(a1 + 496) = v119.m128_u64[0];
    if ( !v29 )
      goto LABEL_23;
    goto LABEL_22;
  }
  ++*(_DWORD *)(v29 + 8);
  v32 = _mm_loadh_ps((const double *)&v123);
  v124 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
  si128 = v32;
  sub_C0E540(v31, v30);
  *(_QWORD *)(a1 + 496) = 0;
  if ( v122 != v29 )
    goto LABEL_15;
LABEL_22:
  ++*(_DWORD *)(v29 + 8);
LABEL_23:
  v51 = *(_QWORD *)(a1 + 488);
  v52 = *(_QWORD *)(a1 + 480);
  v53 = _mm_loadh_ps((const double *)&v126.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v123);
  v124 = v53;
  sub_C0E600(v52, v51);
  *(_QWORD *)(a1 + 480) = v29;
  sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(v4 + 12));
  v54 = *(_QWORD *)(a1 + 496);
  v127 = v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  sub_C0FED0((_QWORD *)(a1 + 88), &v127);
  if ( v29 )
  {
    v55 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v55 )
      sub_15D7BC0(v120, v29);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v56 = *(_QWORD *)(a1 + 480);
  v128 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  sub_C10880((_QWORD *)(a1 + 56), &v128);
  v57 = *(_QWORD *)(a1 + 160);
  if ( v57 )
    *(_DWORD *)(v57 - 4) -= v118;
  v58 = *(_QWORD *)(a1 + 528);
  if ( v58 )
    *(_DWORD *)(v58 - 4) -= v118;
  sub_15844D0(a1);
  v59 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v122, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v59 = *(_QWORD *)(a1 + 480);
  }
  sub_C0E600(v59, *(_QWORD *)(a1 + 488));
  v60 = *(_QWORD *)(a1 + 504);
  v61 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_C0E540(v61, v60);
  v62 = *(_QWORD *)(a1 + 40);
  v63 = v122;
  *(_QWORD *)(a1 + 496) = 0;
  v64 = *(_DWORD *)(v62 - 4);
  *(_DWORD *)(v62 - 4) = v64 - 1;
  if ( *(_QWORD *)(a1 + 480) != v63 && v64 != 1 )
    *(_BYTE *)(v62 + 16LL * (unsigned int)(v64 - 2) + 8) |= 2u;
  v130 = _mm_load_si128((const __m128i *)&v124);
  sub_2334C0(v130.m128i_i64);
  v129 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v129.m128i_i64);
}

