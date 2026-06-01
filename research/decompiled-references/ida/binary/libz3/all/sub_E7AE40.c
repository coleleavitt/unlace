__int64 __fastcall sub_E7AE40(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  __m128 v41; // xmm1
  __int64 v42; // rsi
  __m128 v43; // xmm5
  __m128 v44; // xmm0
  __m128 v45; // xmm5
  __int64 *v46; // r15
  __m128 v47; // xmm3
  __int64 *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __m128 v51; // xmm2
  __m128i v52; // xmm4
  __int64 v53; // rsi
  __m128 v54; // xmm6
  __m128 v55; // xmm7
  __m128 v56; // xmm4
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rdi
  __m128 v60; // xmm0
  __int64 v61; // rsi
  __int64 v62; // r13
  __m128 v63; // xmm6
  __int64 v64; // rdi
  __m128 v65; // xmm4
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rdi
  __m128 v70; // xmm3
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rsi
  __int64 v75; // rdi
  __m128 v76; // xmm0
  __int64 v77; // rsi
  __int64 v78; // rdi
  __m128 v79; // xmm6
  __int64 *v80; // r15
  unsigned __int64 v81; // r13
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rax
  int v85; // r15d
  int v86; // ebx
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // edx
  __int64 v90; // rax
  __m128 v91; // xmm6
  __m128 v92; // xmm4
  __int64 v93; // rdi
  __m128 v94; // xmm0
  __m128 v95; // xmm5
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rdi
  __m128 v99; // xmm3
  __int64 v100; // [rsp+0h] [rbp-110h]
  __int64 v101; // [rsp+8h] [rbp-108h]
  __int64 *v102; // [rsp+10h] [rbp-100h]
  int v103; // [rsp+28h] [rbp-E8h]
  __m128 v104; // [rsp+30h] [rbp-E0h] BYREF
  __int64 *v105; // [rsp+40h] [rbp-D0h]
  __int64 v106; // [rsp+48h] [rbp-C8h]
  __m128i v107; // [rsp+50h] [rbp-C0h] BYREF
  __m128 v108; // [rsp+60h] [rbp-B0h] BYREF
  __m128 si128; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v110; // [rsp+80h] [rbp-90h] BYREF
  __int64 v111; // [rsp+90h] [rbp-80h] BYREF
  __int64 v112; // [rsp+98h] [rbp-78h] BYREF
  __m128i v113; // [rsp+A0h] [rbp-70h] BYREF
  __m128i v114; // [rsp+B0h] [rbp-60h] BYREF
  __m128 v115; // [rsp+C0h] [rbp-50h] BYREF
  __m128i v116; // [rsp+D0h] [rbp-40h] BYREF

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v106 = a2;
  v103 = v5;
  if ( v6 )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v106 + 24);
    v84 = *(_QWORD *)(a1 + 160);
    if ( v84 )
      v85 = *(_DWORD *)(v84 - 4);
    else
      v85 = 0;
    if ( v103 )
    {
      si128.m128_u64[0] = v4;
      v86 = 0;
      v110.m128i_i64[1] = v106;
      while ( 1 )
      {
        if ( !v84 || (v89 = *(_DWORD *)(v84 - 4), v89 == *(_DWORD *)(v84 - 8)) )
        {
          sub_23A6F0((unsigned int **)(a1 + 160));
          v84 = *(_QWORD *)(a1 + 160);
          v89 = *(_DWORD *)(v84 - 4);
        }
        *(_QWORD *)(v84 + 8LL * v89) = 0;
        *(_DWORD *)(v84 - 4) = v89 + 1;
        v87 = *(_QWORD *)(a1 + 528);
        if ( !v87 || (v88 = *(unsigned int *)(v87 - 4), (_DWORD)v88 == *(_DWORD *)(v87 - 8)) )
        {
          ++v86;
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v90 = *(_QWORD *)(a1 + 528);
          *(_DWORD *)(v90 + 4LL * (unsigned int)(*(_DWORD *)(v90 - 4))++) = v85;
          if ( v86 == v103 )
          {
LABEL_70:
            v4 = si128.m128_u64[0];
            v106 = v110.m128i_i64[1];
            break;
          }
        }
        else
        {
          ++v86;
          *(_DWORD *)(v87 + 4 * v88) = v85;
          ++*(_DWORD *)(v87 - 4);
          if ( v86 == v103 )
            goto LABEL_70;
        }
        v84 = *(_QWORD *)(a1 + 160);
      }
    }
    *(_DWORD *)(a1 + 128) += v103;
  }
  v7 = v106;
  v8 = *(_DWORD *)(v106 + 76) + *(_DWORD *)(v106 + 72) + 1;
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
    result = sub_E75390(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v28 = *(unsigned int *)(v4 + 12);
  v29 = *(_QWORD *)(a1 + 56);
  v30 = v7;
  v106 = v7;
  v31 = *(_DWORD *)(v7 + 72);
  v32 = *(unsigned int *)(v7 + 76);
  v33 = v7 + 80;
  v113.m128i_i64[1] = 0;
  v34 = (__int64 *)(v29 + 8 * v28);
  v35 = *(unsigned int *)(v30 + 20);
  v102 = v34;
  v101 = *v34;
  v113.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v113, v31, (__int64 *)(v33 + 16 * v35));
  v114.m128i_i64[1] = 0;
  v107 = v113;
  v36 = (__int64 *)(v33 + 16LL * *(unsigned int *)(v106 + 20));
  v114.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v114, v32, v36);
  v110 = v114;
  v37 = v31;
  v100 = v31;
  if ( v31 )
  {
    v31 = 0;
    v38 = v102;
    v105 = &v102[v37];
    v104 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
    do
    {
      while ( 1 )
      {
        v39 = v38[1];
        v40 = *(_QWORD *)(a1 + 8);
        v41 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v104);
        v108 = v41;
        if ( (unsigned __int8)sub_15D3190(v40, v39) )
          break;
        if ( ++v38 == v105 )
          goto LABEL_36;
      }
      v42 = v38[1];
      v43 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v104);
      v44 = _mm_loadh_ps((const double *)v107.m128i_i64);
      v108 = v43;
      v115 = v44;
      sub_E65C70((__int64 **)&v115, v42);
      ++v38;
      ++v31;
    }
    while ( v38 != v105 );
  }
LABEL_36:
  v45 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
  v108 = v45;
  sub_39BEE0(v113.m128i_i64, v31);
  if ( (_DWORD)v32 )
  {
    v46 = &v102[v100];
    v47 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
    v48 = &v102[v100 + v32];
    v32 = 0;
    v105 = v48;
    v104 = v47;
    do
    {
      while ( 1 )
      {
        v49 = v46[1];
        v50 = *(_QWORD *)(a1 + 8);
        v51 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v104);
        v108 = v51;
        if ( (unsigned __int8)sub_15D3190(v50, v49) )
          break;
        if ( ++v46 == v105 )
          goto LABEL_41;
      }
      v52 = _mm_loadl_epi64(&v110);
      v53 = v46[1];
      si128 = (__m128)_mm_load_si128((const __m128i *)&v104);
      v54 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      v116 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v110.m128i_i64[1] + 8 * v32), v52);
      v108 = v54;
      sub_E65C70((__int64 **)&v116, v53);
      ++v46;
      v32 = (unsigned int)(v32 + 1);
    }
    while ( v46 != v105 );
  }
LABEL_41:
  v55 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
  v108 = v55;
  sub_39BEE0(v114.m128i_i64, v32);
  v56 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
  v104.m128_u64[0] = *(_QWORD *)(a1 + 8);
  si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
  v108 = v56;
  v57 = sub_15DBA30(v104.m128_i32[0], v106, v31, v107.m128i_i32[2], v32, v110.m128i_i32[2], v101);
  v58 = *(_QWORD *)(a1 + 504);
  v59 = *(_QWORD *)(a1 + 496);
  if ( !v57 )
  {
    v91 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
    v108 = v91;
    sub_E65BA0(v59, v58);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_43:
    v61 = *(_QWORD *)(a1 + 504);
    v62 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v4 + 12));
    if ( v62 )
    {
      ++*(_DWORD *)(v62 + 8);
      v63 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = v63;
      sub_E65BA0(0, v61);
      v64 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v62;
      v65 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = v65;
      v66 = sub_15DE700(v64);
      v67 = v66;
      if ( v66 )
        ++*(_DWORD *)(v66 + 8);
      v68 = *(_QWORD *)(a1 + 504);
      v69 = *(_QWORD *)(a1 + 496);
      v70 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = v70;
      sub_E65BA0(v69, v68);
      v71 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v67;
      v108 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v72 = sub_15DE750(v71);
      v73 = v72;
      if ( v72 )
        ++*(_DWORD *)(v72 + 8);
      v74 = *(_QWORD *)(a1 + 504);
      v75 = *(_QWORD *)(a1 + 496);
      v76 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = v76;
      sub_E65BA0(v75, v74);
    }
    else
    {
      v92 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = v92;
      sub_E65BA0(0, v61);
      v93 = *(_QWORD *)(a1 + 8);
      v94 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      *(_QWORD *)(a1 + 496) = 0;
      v95 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = v94;
      v108 = v95;
      v96 = sub_15DE370(v93);
      v73 = v96;
      if ( v96 )
        ++*(_DWORD *)(v96 + 8);
      v97 = *(_QWORD *)(a1 + 504);
      v98 = *(_QWORD *)(a1 + 496);
      v99 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
      v108 = v99;
      sub_E65BA0(v98, v97);
    }
    *(_QWORD *)(a1 + 496) = v73;
    if ( !v57 )
      goto LABEL_51;
    goto LABEL_50;
  }
  ++*(_DWORD *)(v57 + 8);
  v60 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
  v108 = v60;
  sub_E65BA0(v59, v58);
  *(_QWORD *)(a1 + 496) = 0;
  if ( v106 != v57 )
    goto LABEL_43;
LABEL_50:
  ++*(_DWORD *)(v57 + 8);
LABEL_51:
  v77 = *(_QWORD *)(a1 + 488);
  v78 = *(_QWORD *)(a1 + 480);
  v79 = _mm_loadh_ps((const double *)&v110.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v107.m128i_i64[1]);
  v108 = v79;
  sub_E65BC0(v78, v77);
  v16 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v57;
  if ( v16 )
  {
    v80 = (__int64 *)(v16 + 8LL * *(unsigned int *)(v4 + 12));
    v81 = v16 + 8LL * *(unsigned int *)(v16 - 4);
    v110.m128i_i32[2] = *(_DWORD *)(v4 + 12);
    if ( (unsigned __int64)v80 >= v81 )
      goto LABEL_12;
    do
    {
      v82 = *v80;
      if ( *v80 )
      {
        v83 = *(_QWORD *)(a1 + 80);
        v18 = (*(_DWORD *)(v82 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v83, v82);
      }
      ++v80;
    }
    while ( (unsigned __int64)v80 < v81 );
    v16 = *(_QWORD *)(a1 + 88);
    if ( v16 )
LABEL_12:
      *(_DWORD *)(v16 - 4) = v110.m128i_i32[2];
  }
  v17 = *(_QWORD *)(a1 + 496);
  v111 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  sub_E66670((_QWORD *)(a1 + 88), &v111);
  if ( v57 )
  {
    v18 = (*(_DWORD *)(v57 + 8))-- == 1;
    if ( v18 )
      sub_15D7BC0(v104.m128_u64[0], v57);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v4 + 12));
  v19 = *(_QWORD *)(a1 + 480);
  v112 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_E67160((unsigned int **)(a1 + 56), &v112);
  v20 = *(_QWORD *)(a1 + 160);
  if ( v20 )
    *(_DWORD *)(v20 - 4) -= v103;
  v21 = *(_QWORD *)(a1 + 528);
  if ( v21 )
    *(_DWORD *)(v21 - 4) -= v103;
  sub_15844D0(a1);
  v22 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v106, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v22 = *(_QWORD *)(a1 + 480);
  }
  sub_E65BC0(v22, *(_QWORD *)(a1 + 488));
  v23 = *(_QWORD *)(a1 + 504);
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_E65BA0(v24, v23);
  v25 = *(_QWORD *)(a1 + 40);
  v26 = v106;
  *(_QWORD *)(a1 + 496) = 0;
  v27 = *(_DWORD *)(v25 - 4);
  *(_DWORD *)(v25 - 4) = v27 - 1;
  if ( *(_QWORD *)(a1 + 480) != v26 && v27 != 1 )
    *(_BYTE *)(v25 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
  v114 = _mm_load_si128((const __m128i *)&v108);
  sub_2334C0(v114.m128i_i64);
  v113 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v113.m128i_i64);
}

