__int64 __fastcall sub_9140E0(__int64 a1, __int64 a2, __int64 a3)
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
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // r14
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __m128 v41; // xmm0
  __int64 v42; // rax
  unsigned int v43; // r9d
  __int64 *v44; // r13
  __int64 v45; // rsi
  __m128 v46; // xmm4
  __int64 v47; // rax
  __int64 *v48; // r14
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
  __int64 v59; // r14
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rdx
  __m128 v63; // xmm5
  __int64 v64; // rdi
  __m128 v65; // xmm6
  __m128 v66; // xmm7
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdi
  __m128 v70; // xmm3
  __int64 v71; // rdi
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdi
  __m128 v77; // xmm7
  __int64 v78; // rsi
  __m128 v79; // xmm7
  __int64 v80; // rdi
  unsigned __int64 v81; // r12
  __int64 *v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rax
  int v86; // r13d
  int v87; // r12d
  __int64 v88; // rcx
  int v89; // edx
  _QWORD *v90; // rcx
  _QWORD *v91; // rdx
  __int64 v92; // rax
  _DWORD *v93; // rax
  unsigned int v94; // edx
  unsigned int v95; // ebx
  size_t v96; // rsi
  unsigned int *v97; // rdx
  __int64 v98; // rcx
  unsigned int v99; // ebx
  size_t v100; // rsi
  unsigned int *v101; // rax
  _DWORD *v102; // rdx
  __int64 v103; // rax
  __m128 v104; // xmm7
  __m128 v105; // xmm7
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __m128 v108; // xmm7
  __m128 v109; // xmm5
  __int64 v110; // rdi
  __m128 v111; // xmm5
  __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rdi
  __m128 v115; // xmm3
  __m128 v116; // xmm5
  char **exception; // rbx
  __int64 v118; // [rsp+8h] [rbp-108h]
  __int64 v119; // [rsp+10h] [rbp-100h]
  unsigned int v120; // [rsp+10h] [rbp-100h]
  __int64 v121; // [rsp+18h] [rbp-F8h]
  __int64 *v122; // [rsp+20h] [rbp-F0h]
  __int64 v123; // [rsp+20h] [rbp-F0h]
  unsigned int v124; // [rsp+38h] [rbp-D8h]
  int v125; // [rsp+3Ch] [rbp-D4h]
  __m128 v126; // [rsp+40h] [rbp-D0h] BYREF
  __int64 *v127; // [rsp+50h] [rbp-C0h]
  __int64 v128; // [rsp+58h] [rbp-B8h]
  __int64 v129; // [rsp+60h] [rbp-B0h]
  __int64 v130; // [rsp+68h] [rbp-A8h] BYREF
  __m128 v131; // [rsp+70h] [rbp-A0h] BYREF
  __m128 si128; // [rsp+80h] [rbp-90h] BYREF
  __m128i v133; // [rsp+90h] [rbp-80h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v135; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v136; // [rsp+B0h] [rbp-60h] BYREF
  __m128i v137; // [rsp+C0h] [rbp-50h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v129 = a2;
  v125 = v5;
  if ( !v6 )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(v129 + 24);
  v85 = *(_QWORD **)(a1 + 160);
  if ( v85 )
    v86 = *((_DWORD *)v85 - 1);
  else
    v86 = 0;
  if ( v125 )
  {
    si128.m128_u64[0] = v4;
    v87 = 0;
    v133.m128i_i64[1] = v129;
    while ( 1 )
    {
      if ( v85 )
      {
        v94 = *((_DWORD *)v85 - 1);
        if ( v94 == *((_DWORD *)v85 - 2) )
        {
          v95 = (3 * v94 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v94 + 8 >= (unsigned int)v96 || v94 >= v95 )
          {
LABEL_111:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v137.m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v137);
            sub_233E40((__int64)&v137);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v97 = (unsigned int *)sub_186B300(v85 - 1, v96);
          v85 = v97 + 2;
          v98 = v97[1];
          *v97 = v95;
          *(_QWORD *)(a1 + 160) = v97 + 2;
          LODWORD(v97) = v98;
          v90 = &v85[v98];
          v89 = (_DWORD)v97 + 1;
        }
        else
        {
          v88 = v94;
          v89 = v94 + 1;
          v90 = &v85[v88];
        }
      }
      else
      {
        v107 = (_QWORD *)sub_186B270(0x18u);
        v89 = 1;
        *v107 = 2;
        v85 = v107 + 1;
        *(_QWORD *)(a1 + 160) = v85;
        v90 = v85;
      }
      *v90 = 0;
      *((_DWORD *)v85 - 1) = v89;
      v91 = *(_QWORD **)(a1 + 528);
      if ( !v91 )
        break;
      v92 = *((unsigned int *)v91 - 1);
      if ( (_DWORD)v92 != *((_DWORD *)v91 - 2) )
      {
        v93 = (_DWORD *)v91 + v92;
        goto LABEL_88;
      }
      v99 = (unsigned int)(3 * v92 + 1) >> 1;
      v100 = 4 * v99 + 8;
      if ( 4 * (int)v92 + 8 >= (unsigned int)v100 || (unsigned int)v92 >= v99 )
        goto LABEL_111;
      ++v87;
      v101 = (unsigned int *)sub_186B300(v91 - 1, v100);
      v102 = v101 + 2;
      *v101 = v99;
      v103 = v101[1];
      *(_QWORD *)(a1 + 528) = v102;
      v102[v103] = v86;
      ++*(v102 - 1);
      if ( v87 == v125 )
      {
LABEL_98:
        v4 = si128.m128_u64[0];
        v129 = v133.m128i_i64[1];
        goto LABEL_99;
      }
LABEL_89:
      v85 = *(_QWORD **)(a1 + 160);
    }
    v106 = (_QWORD *)sub_186B270(0x10u);
    v91 = v106 + 1;
    *v106 = 2;
    *(_QWORD *)(a1 + 528) = v106 + 1;
    v93 = v106 + 1;
LABEL_88:
    ++v87;
    *v93 = v86;
    ++*((_DWORD *)v91 - 1);
    if ( v87 == v125 )
      goto LABEL_98;
    goto LABEL_89;
  }
LABEL_99:
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
    result = sub_913BE0(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v28 = *(unsigned int *)(v4 + 12);
  v29 = *(_QWORD *)(a1 + 56);
  v30 = v7;
  v129 = v7;
  v31 = *(_DWORD *)(v7 + 72);
  v32 = *(_DWORD *)(v7 + 76);
  v33 = v7 + 80;
  v136.m128i_i64[1] = 0;
  v34 = (__int64 *)(v29 + 8 * v28);
  v35 = *(unsigned int *)(v30 + 20);
  v122 = v34;
  v121 = *v34;
  v136.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v136, v31, (__int64 *)(v33 + 16 * v35));
  v137.m128i_i64[1] = 0;
  v130 = v136.m128i_i64[1];
  v128 = v136.m128i_i64[0];
  v36 = (__int64 *)(v33 + 16LL * *(unsigned int *)(v129 + 20));
  v137.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v137, v32, v36);
  v133 = v137;
  v37 = v31;
  v119 = v31;
  if ( v31 )
  {
    v31 = 0;
    v38 = v122;
    v127 = &v122[v37];
    v126 = _mm_loadh_ps((const double *)&v130);
    do
    {
      while ( 1 )
      {
        v39 = v38[1];
        v40 = *(_QWORD *)(a1 + 8);
        v41 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v126);
        v131 = v41;
        if ( (unsigned __int8)sub_15D3190(v40, v39) )
          break;
        if ( ++v38 == v127 )
          goto LABEL_46;
      }
      v42 = v38[1];
      v43 = v31 + 1;
      v44 = (__int64 *)(v130 + 8LL * v31);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v45 = *v44;
      if ( *v44 )
      {
        v17 = (*(_DWORD *)(v45 + 8))-- == 1;
        if ( v17 )
        {
          v124 = v43;
          v118 = v42;
          v105 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v130);
          v131 = v105;
          sub_15D7BC0(v128, v45);
          v43 = v124;
          v42 = v118;
        }
      }
      *v44 = v42;
      ++v38;
      v31 = v43;
    }
    while ( v38 != v127 );
  }
LABEL_46:
  v46 = _mm_loadh_ps((const double *)&v130);
  v131 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = v46;
  sub_39BEE0(v136.m128i_i64, v31);
  if ( v32 )
  {
    v47 = v32;
    v32 = 0;
    v48 = &v122[v119];
    v49 = _mm_loadh_ps((const double *)&v130);
    v127 = &v122[v119 + v47];
    v126 = v49;
    do
    {
      while ( 1 )
      {
        v50 = v48[1];
        v51 = *(_QWORD *)(a1 + 8);
        v52 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v126);
        v131 = v52;
        if ( (unsigned __int8)sub_15D3190(v51, v50) )
          break;
        if ( ++v48 == v127 )
          goto LABEL_56;
      }
      v53 = v48[1];
      v54 = v32 + 1;
      v55 = (__int64 *)(v133.m128i_i64[1] + 8LL * v32);
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v56 = *v55;
      if ( *v55 )
      {
        v17 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v17 )
        {
          v120 = v54;
          v123 = v53;
          v104 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
          si128 = _mm_loadh_ps((const double *)&v130);
          v131 = v104;
          sub_15D7BC0(v133.m128i_i64[0], v56);
          v54 = v120;
          v53 = v123;
        }
      }
      *v55 = v53;
      ++v48;
      v32 = v54;
    }
    while ( v48 != v127 );
  }
LABEL_56:
  v57 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = v57;
  sub_39BEE0(v137.m128i_i64, v32);
  v58 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  v127 = *(__int64 **)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = v58;
  v59 = sub_15DBA30((_DWORD)v127, v129, v31, v130, v32, v133.m128i_i32[2], v121);
  v60 = *(_QWORD *)(a1 + 496);
  v61 = *(_QWORD *)(a1 + 504);
  if ( !v59 )
  {
    if ( !v60 || (v17 = *(_DWORD *)(v60 + 8) == 1, --*(_DWORD *)(v60 + 8), !v17) )
    {
      *(_QWORD *)(a1 + 496) = 0;
LABEL_62:
      v62 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v4 + 12));
      if ( v62 )
      {
        ++*(_DWORD *)(v62 + 8);
        v126.m128_u64[0] = v62;
        v63 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v63;
        sub_8E4DD0(0, v61);
        v64 = *(_QWORD *)(a1 + 8);
        v65 = _mm_loadh_ps((const double *)&v130);
        v66 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        *(_QWORD *)(a1 + 496) = v126.m128_u64[0];
        si128 = v65;
        v131 = v66;
        v67 = sub_15DE700(v64);
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        v126.m128_u64[0] = v67;
        v68 = *(_QWORD *)(a1 + 504);
        v69 = *(_QWORD *)(a1 + 496);
        v70 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v70;
        sub_8E4DD0(v69, v68);
        v71 = *(_QWORD *)(a1 + 8);
        v72 = _mm_loadh_ps((const double *)&v130);
        *(_QWORD *)(a1 + 496) = v126.m128_u64[0];
        v73 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = v72;
        v131 = v73;
        v74 = sub_15DE750(v71);
        if ( v74 )
          ++*(_DWORD *)(v74 + 8);
        v126.m128_u64[0] = v74;
        v75 = *(_QWORD *)(a1 + 504);
        v76 = *(_QWORD *)(a1 + 496);
        v77 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v77;
        sub_8E4DD0(v76, v75);
      }
      else
      {
        v109 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v109;
        sub_8E4DD0(0, v61);
        v110 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 496) = 0;
        v111 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v111;
        v112 = sub_15DE370(v110);
        if ( v112 )
          ++*(_DWORD *)(v112 + 8);
        v126.m128_u64[0] = v112;
        v113 = *(_QWORD *)(a1 + 504);
        v114 = *(_QWORD *)(a1 + 496);
        v115 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
        si128 = _mm_loadh_ps((const double *)&v130);
        v131 = v115;
        sub_8E4DD0(v114, v113);
      }
      *(_QWORD *)(a1 + 496) = v126.m128_u64[0];
      if ( !v59 )
        goto LABEL_70;
      goto LABEL_69;
    }
    v116 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v130);
    v131 = v116;
    sub_15D7BC0(v61, v60);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_61:
    v61 = *(_QWORD *)(a1 + 504);
    goto LABEL_62;
  }
  ++*(_DWORD *)(v59 + 8);
  if ( v60 )
  {
    v17 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v17 )
    {
      v108 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v130);
      v131 = v108;
      sub_15D7BC0(v61, v60);
    }
  }
  *(_QWORD *)(a1 + 496) = 0;
  if ( v129 != v59 )
    goto LABEL_61;
LABEL_69:
  ++*(_DWORD *)(v59 + 8);
LABEL_70:
  v78 = *(_QWORD *)(a1 + 480);
  v79 = _mm_loadh_ps((const double *)&v133.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v130);
  v131 = v79;
  if ( v78 )
  {
    v80 = *(_QWORD *)(a1 + 488);
    v17 = (*(_DWORD *)(v78 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v80, v78);
  }
  v15 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v59;
  if ( v15 )
  {
    v81 = v15 + 8LL * *(unsigned int *)(v15 - 4);
    v133.m128i_i32[2] = *(_DWORD *)(v4 + 12);
    v82 = (__int64 *)(v15 + 8LL * v133.m128i_u32[2]);
    if ( (unsigned __int64)v82 >= v81 )
      goto LABEL_11;
    do
    {
      v83 = *v82;
      if ( *v82 )
      {
        v84 = *(_QWORD *)(a1 + 80);
        v17 = (*(_DWORD *)(v83 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v84, v83);
      }
      ++v82;
    }
    while ( (unsigned __int64)v82 < v81 );
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
  if ( v59 )
  {
    v17 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v127, v59);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v18 = *(_QWORD *)(a1 + 480);
  v135 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v135);
  v19 = *(_QWORD *)(a1 + 160);
  if ( v19 )
    *(_DWORD *)(v19 - 4) -= v125;
  v20 = *(_QWORD *)(a1 + 528);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v125;
  sub_15844D0(a1);
  v21 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v129, v21, *(_QWORD *)(a1 + 496));
    v21 = *(_QWORD *)(a1 + 480);
  }
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 488);
    v17 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v22, v21);
  }
  v23 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v23 && (v24 = *(_QWORD *)(a1 + 504), v17 = *(_DWORD *)(v23 + 8) == 1, --*(_DWORD *)(v23 + 8), v17) )
  {
    sub_15D7BC0(v24, v23);
    v25 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v25 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v26 = *(_QWORD *)(a1 + 40);
  v27 = *(_DWORD *)(v26 - 4);
  *(_DWORD *)(v26 - 4) = v27 - 1;
  if ( v129 != v25 && v27 != 1 )
    *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
  v137 = _mm_load_si128((const __m128i *)&v131);
  sub_2334C0(v137.m128i_i64);
  v136 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v136.m128i_i64);
}

