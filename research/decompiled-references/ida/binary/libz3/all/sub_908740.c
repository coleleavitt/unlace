__int64 __fastcall sub_908740(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  __int64 v35; // r14
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  __m128 v43; // xmm0
  __int64 v44; // rax
  unsigned int v45; // r9d
  __int64 *v46; // r13
  __int64 v47; // rsi
  __m128 v48; // xmm5
  __int64 v49; // rax
  __int64 *v50; // r14
  __m128 v51; // xmm7
  __int64 v52; // rsi
  __int64 v53; // rdi
  __m128 v54; // xmm1
  __int64 v55; // rax
  unsigned int v56; // r9d
  __int64 *v57; // r12
  __int64 v58; // rsi
  __m128 v59; // xmm7
  __m128 v60; // xmm5
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // r9
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdi
  __m128 v79; // xmm7
  __int64 v80; // rdi
  __int64 v81; // rsi
  __m128 v82; // xmm3
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // rsi
  __int64 v86; // rdi
  __m128 v87; // xmm7
  __m128 v88; // xmm5
  unsigned __int64 v89; // r14
  __int64 *v90; // r13
  __int64 v91; // rsi
  __int64 v92; // rdi
  _QWORD *v93; // rax
  int v94; // r13d
  int v95; // r12d
  __int64 v96; // rcx
  int v97; // edx
  _QWORD *v98; // rcx
  _QWORD *v99; // rdx
  __int64 v100; // rax
  _DWORD *v101; // rax
  unsigned int v102; // edx
  unsigned int v103; // ebx
  size_t v104; // rsi
  unsigned int *v105; // rdx
  __int64 v106; // rcx
  unsigned int v107; // ebx
  size_t v108; // rsi
  unsigned int *v109; // rax
  _DWORD *v110; // rdx
  __int64 v111; // rax
  __m128 v112; // xmm5
  __m128 v113; // xmm7
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdi
  char **exception; // rbx
  __int64 v118; // [rsp+8h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-110h]
  unsigned int v120; // [rsp+10h] [rbp-110h]
  __int64 *v121; // [rsp+18h] [rbp-108h]
  __int64 v122; // [rsp+18h] [rbp-108h]
  __int64 v123; // [rsp+20h] [rbp-100h]
  unsigned int v124; // [rsp+38h] [rbp-E8h]
  int v125; // [rsp+3Ch] [rbp-E4h]
  __m128 v126; // [rsp+40h] [rbp-E0h] BYREF
  __int64 *v127; // [rsp+50h] [rbp-D0h]
  __int64 v128; // [rsp+58h] [rbp-C8h]
  __int64 v129; // [rsp+60h] [rbp-C0h]
  __int64 v130; // [rsp+68h] [rbp-B8h] BYREF
  __m128i v131; // [rsp+70h] [rbp-B0h] BYREF
  __m128 si128; // [rsp+80h] [rbp-A0h] BYREF
  __m128i v133; // [rsp+90h] [rbp-90h] BYREF
  __int64 v134; // [rsp+A8h] [rbp-78h] BYREF
  __m128i v135; // [rsp+B0h] [rbp-70h] BYREF
  __m128i v136; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v138; // [rsp+D8h] [rbp-48h]

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v129 = a2;
  v125 = v5;
  if ( !v6 )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(v129 + 24);
  v93 = *(_QWORD **)(a1 + 160);
  if ( v93 )
    v94 = *((_DWORD *)v93 - 1);
  else
    v94 = 0;
  if ( v125 )
  {
    si128.m128_u64[0] = v4;
    v95 = 0;
    v133.m128i_i64[1] = v129;
    while ( 1 )
    {
      if ( v93 )
      {
        v102 = *((_DWORD *)v93 - 1);
        if ( v102 == *((_DWORD *)v93 - 2) )
        {
          v103 = (3 * v102 + 1) >> 1;
          v104 = 8 * v103 + 8;
          if ( 8 * v102 + 8 >= (unsigned int)v104 || v102 >= v103 )
          {
LABEL_117:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(&v137, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v137);
            sub_233E40((__int64)&v137);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v105 = (unsigned int *)sub_186B300(v93 - 1, v104);
          v93 = v105 + 2;
          v106 = v105[1];
          *v105 = v103;
          *(_QWORD *)(a1 + 160) = v105 + 2;
          LODWORD(v105) = v106;
          v98 = &v93[v106];
          v97 = (_DWORD)v105 + 1;
        }
        else
        {
          v96 = v102;
          v97 = v102 + 1;
          v98 = &v93[v96];
        }
      }
      else
      {
        v115 = (_QWORD *)sub_186B270(0x18u);
        v97 = 1;
        *v115 = 2;
        v93 = v115 + 1;
        *(_QWORD *)(a1 + 160) = v93;
        v98 = v93;
      }
      *v98 = 0;
      *((_DWORD *)v93 - 1) = v97;
      v99 = *(_QWORD **)(a1 + 528);
      if ( !v99 )
        break;
      v100 = *((unsigned int *)v99 - 1);
      if ( (_DWORD)v100 != *((_DWORD *)v99 - 2) )
      {
        v101 = (_DWORD *)v99 + v100;
        goto LABEL_95;
      }
      v107 = (unsigned int)(3 * v100 + 1) >> 1;
      v108 = 4 * v107 + 8;
      if ( 4 * (int)v100 + 8 >= (unsigned int)v108 || (unsigned int)v100 >= v107 )
        goto LABEL_117;
      ++v95;
      v109 = (unsigned int *)sub_186B300(v99 - 1, v108);
      v110 = v109 + 2;
      *v109 = v107;
      v111 = v109[1];
      *(_QWORD *)(a1 + 528) = v110;
      v110[v111] = v94;
      ++*(v110 - 1);
      if ( v95 == v125 )
      {
LABEL_105:
        v4 = si128.m128_u64[0];
        v129 = v133.m128i_i64[1];
        goto LABEL_106;
      }
LABEL_96:
      v93 = *(_QWORD **)(a1 + 160);
    }
    v114 = (_QWORD *)sub_186B270(0x10u);
    v99 = v114 + 1;
    *v114 = 2;
    *(_QWORD *)(a1 + 528) = v114 + 1;
    v101 = v114 + 1;
LABEL_95:
    ++v95;
    *v101 = v94;
    ++*((_DWORD *)v99 - 1);
    if ( v95 == v125 )
      goto LABEL_105;
    goto LABEL_96;
  }
LABEL_106:
  *(_DWORD *)(a1 + 128) += v125;
LABEL_2:
  v7 = v129;
  v8 = *(_DWORD *)(v129 + 76) + *(_DWORD *)(v129 + 72) + 1;
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
        v14 = (unsigned int)v14 - v13;
      v9 = *(_QWORD *)(16LL * *(unsigned int *)(v7 + 20) + v7 + 8 * v14 + 80);
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 24);
    }
    v10 = ((v12 + 1) << 6) | *(_DWORD *)(v4 + 8) & 0x3F;
    *(_DWORD *)(v4 + 8) = v10;
    result = sub_905080((_QWORD *)a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v30 = *(unsigned int *)(v4 + 12);
  v31 = *(_QWORD *)(a1 + 56);
  v32 = v7;
  v129 = v7;
  v33 = *(_DWORD *)(v7 + 72);
  v34 = *(_DWORD *)(v7 + 76);
  v35 = v7 + 80;
  v135.m128i_i64[1] = 0;
  v36 = (__int64 *)(v31 + 8 * v30);
  v37 = *(unsigned int *)(v32 + 20);
  v121 = v36;
  v123 = *v36;
  v135.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v135, v33, (__int64 *)(v35 + 16 * v37));
  v136.m128i_i64[1] = 0;
  v130 = v135.m128i_i64[1];
  v128 = v135.m128i_i64[0];
  v38 = (__int64 *)(v35 + 16LL * *(unsigned int *)(v129 + 20));
  v136.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v136, v34, v38);
  v133 = v136;
  v39 = v33;
  v119 = v33;
  if ( v33 )
  {
    v33 = 0;
    v40 = v121;
    v127 = &v121[v39];
    v126 = _mm_loadh_ps((const double *)&v130);
    do
    {
      while ( 1 )
      {
        v41 = v40[1];
        v42 = *(_QWORD *)(a1 + 8);
        v43 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v126);
        v131 = (__m128i)v43;
        if ( (unsigned __int8)sub_15D3190(v42, v41) )
          break;
        if ( ++v40 == v127 )
          goto LABEL_49;
      }
      v44 = v40[1];
      v45 = v33 + 1;
      v46 = (__int64 *)(v130 + 8LL * v33);
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      v47 = *v46;
      if ( *v46 )
      {
        v19 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v19 )
        {
          v124 = v45;
          v118 = v44;
          v113 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v130);
          v131 = (__m128i)v113;
          sub_15D7BC0(v128, v47);
          v45 = v124;
          v44 = v118;
        }
      }
      *v46 = v44;
      ++v40;
      v33 = v45;
    }
    while ( v40 != v127 );
  }
LABEL_49:
  v48 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = (__m128i)v48;
  sub_39BEE0(v135.m128i_i64, v33);
  if ( v34 )
  {
    v49 = v34;
    v34 = 0;
    v50 = &v121[v119];
    v51 = _mm_loadh_ps((const double *)&v130);
    v127 = &v121[v119 + v49];
    v126 = v51;
    do
    {
      while ( 1 )
      {
        v52 = v50[1];
        v53 = *(_QWORD *)(a1 + 8);
        v54 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v126);
        v131 = (__m128i)v54;
        if ( (unsigned __int8)sub_15D3190(v53, v52) )
          break;
        if ( ++v50 == v127 )
          goto LABEL_59;
      }
      v55 = v50[1];
      v56 = v34 + 1;
      v57 = (__int64 *)(v133.m128i_i64[1] + 8LL * v34);
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      v58 = *v57;
      if ( *v57 )
      {
        v19 = (*(_DWORD *)(v58 + 8))-- == 1;
        if ( v19 )
        {
          v120 = v56;
          v122 = v55;
          v112 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v130);
          v131 = (__m128i)v112;
          sub_15D7BC0(v133.m128i_i64[0], v58);
          v56 = v120;
          v55 = v122;
        }
      }
      *v57 = v55;
      ++v50;
      v34 = v56;
    }
    while ( v50 != v127 );
  }
LABEL_59:
  v59 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = (__m128i)v59;
  sub_39BEE0(v136.m128i_i64, v34);
  v60 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  v126.m128_u64[0] = *(_QWORD *)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = (__m128i)v60;
  v61 = sub_15DBA30(v126.m128_i32[0], v129, v33, v130, v34, v133.m128i_i32[2], v123);
  v62 = v61;
  v63 = *(_QWORD *)(a1 + 496);
  v64 = *(_QWORD *)(a1 + 504);
  if ( !v61 )
  {
    if ( !v63 || (v19 = *(_DWORD *)(v63 + 8) == 1, --*(_DWORD *)(v63 + 8), !v19) )
    {
      *(_QWORD *)(a1 + 496) = 0;
LABEL_65:
      v65 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v4 + 12));
      if ( v65 )
      {
        ++*(_DWORD *)(v65 + 8);
        si128.m128_u64[0] = v65;
        sub_8E4DD0(0, v64);
        v66 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 496) = si128.m128_u64[0];
        v67 = sub_15DE700(v66);
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        v68 = *(_QWORD *)(a1 + 504);
        v69 = *(_QWORD *)(a1 + 496);
        si128.m128_u64[0] = v67;
        sub_8E4DD0(v69, v68);
        v70 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 496) = si128.m128_u64[0];
        v71 = sub_15DE750(v70);
      }
      else
      {
        sub_8E4DD0(0, v64);
        v116 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 496) = 0;
        v71 = sub_15DE370(v116);
      }
      if ( v71 )
        ++*(_DWORD *)(v71 + 8);
      v72 = *(_QWORD *)(a1 + 504);
      v73 = *(_QWORD *)(a1 + 496);
      si128.m128_u64[0] = v71;
      sub_8E4DD0(v73, v72);
      v74 = a1 + 480;
      *(_QWORD *)(a1 + 496) = si128.m128_u64[0];
      if ( !v62 )
        goto LABEL_73;
      goto LABEL_72;
    }
    sub_15D7BC0(v64, v63);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_64:
    v64 = *(_QWORD *)(a1 + 504);
    goto LABEL_65;
  }
  ++*(_DWORD *)(v61 + 8);
  if ( v63 )
  {
    v19 = (*(_DWORD *)(v63 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v64, v63);
  }
  *(_QWORD *)(a1 + 496) = 0;
  if ( v129 != v62 )
    goto LABEL_64;
  v74 = a1 + 480;
LABEL_72:
  ++*(_DWORD *)(v62 + 8);
LABEL_73:
  v75 = *(_QWORD *)(a1 + 480);
  if ( v75 )
  {
    v76 = *(_QWORD *)(a1 + 488);
    v19 = (*(_DWORD *)(v75 + 8))-- == 1;
    if ( v19 )
    {
      si128.m128_u64[0] = v74;
      sub_15D7BC0(v76, v75);
      LODWORD(v74) = si128.m128_i32[0];
    }
  }
  v77 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 480) = v62;
  v137 = 0;
  v138 = v77;
  v78 = *(_QWORD *)(a1 + 144);
  v127 = &v137;
  v79 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = (__m128i)v79;
  if ( (unsigned __int8)sub_157ED20(v78, v62, v123, v130, v133.m128i_i32[2], v74, (__int64)&v137) )
  {
    v80 = *(_QWORD *)(a1 + 8);
    v81 = *(_QWORD *)(a1 + 496);
    v82 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v130);
    v131 = (__m128i)v82;
    v83 = sub_15E2470(v80, v81, v137);
    v84 = v83;
    if ( v83 )
      ++*(_DWORD *)(v83 + 8);
    v85 = *(_QWORD *)(a1 + 504);
    v86 = *(_QWORD *)(a1 + 496);
    v87 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v130);
    v131 = (__m128i)v87;
    sub_8E4DD0(v86, v85);
    *(_QWORD *)(a1 + 496) = v84;
  }
  v15 = *(_QWORD *)(a1 + 88);
  v88 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = (__m128i)v88;
  if ( v15 )
  {
    v89 = v15 + 8LL * *(unsigned int *)(v15 - 4);
    v133.m128i_i32[2] = *(_DWORD *)(v4 + 12);
    v90 = (__int64 *)(v15 + 8LL * v133.m128i_u32[2]);
    if ( (unsigned __int64)v90 >= v89 )
      goto LABEL_11;
    do
    {
      v91 = *v90;
      if ( *v90 )
      {
        v92 = *(_QWORD *)(a1 + 80);
        v19 = (*(_DWORD *)(v91 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v92, v91);
      }
      ++v90;
    }
    while ( (unsigned __int64)v90 < v89 );
    v15 = *(_QWORD *)(a1 + 88);
    if ( v15 )
LABEL_11:
      *(_DWORD *)(v15 - 4) = v133.m128i_i32[2];
  }
  v16 = *(_QWORD *)(a1 + 496);
  v134 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_8ECC90((_QWORD *)(a1 + 88), &v134);
  v17 = v137;
  if ( v137 )
  {
    v18 = v138;
    v19 = (*(_DWORD *)(v137 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
  if ( v62 )
  {
    v19 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v126.m128_u64[0], v62);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v20 = *(_QWORD *)(a1 + 480);
  v137 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), v127);
  v21 = *(_QWORD *)(a1 + 160);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v125;
  v22 = *(_QWORD *)(a1 + 528);
  if ( v22 )
    *(_DWORD *)(v22 - 4) -= v125;
  sub_15844D0(a1);
  v23 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v129, v23, *(_QWORD *)(a1 + 496));
    v23 = *(_QWORD *)(a1 + 480);
  }
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 488);
    v19 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v24, v23);
  }
  v25 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v25 && (v26 = *(_QWORD *)(a1 + 504), v19 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), v19) )
  {
    sub_15D7BC0(v26, v25);
    v27 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v27 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v28 = *(_QWORD *)(a1 + 40);
  v29 = *(_DWORD *)(v28 - 4);
  *(_DWORD *)(v28 - 4) = v29 - 1;
  if ( v129 != v27 && v29 != 1 )
    *(_BYTE *)(v28 + 16LL * (unsigned int)(v29 - 2) + 8) |= 2u;
  v136 = _mm_load_si128(&v131);
  sub_2334C0(v136.m128i_i64);
  v135 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v135.m128i_i64);
}

