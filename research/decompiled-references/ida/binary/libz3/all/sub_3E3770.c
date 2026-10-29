__int64 __fastcall sub_3E3770(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  bool v5; // cc
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edx
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 *v22; // rdx
  __m128 v23; // xmm7
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rsi
  __m128 v28; // xmm4
  __int64 v29; // rsi
  __int64 v30; // r13
  __m128 v31; // xmm6
  __int64 v32; // rdi
  __m128 v33; // xmm7
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  __m128 v38; // xmm4
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdi
  __m128 v44; // xmm3
  __int64 v45; // rsi
  __int64 v46; // rdi
  __m128 v47; // xmm7
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rbx
  int v59; // ecx
  __int64 *v60; // r14
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __m128 v64; // xmm2
  __int64 v65; // rsi
  __m128 v66; // xmm5
  __int64 v67; // rax
  __int64 *v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rdi
  __m128 v71; // xmm1
  __int64 v72; // rax
  unsigned int v73; // r8d
  __int64 *v74; // r13
  __int64 v75; // rsi
  _QWORD *v76; // rax
  int v77; // r14d
  int v78; // r13d
  __int64 v79; // rcx
  int v80; // edx
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // edx
  unsigned int v85; // ecx
  size_t v86; // rsi
  _DWORD *v87; // rdx
  __int64 v88; // rcx
  __m128 v89; // xmm3
  _QWORD *v90; // rax
  __m128 v91; // xmm7
  __m128 v92; // xmm3
  __int64 v93; // rdi
  __m128 v94; // xmm5
  __m128 v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 v98; // rdi
  __m128 v99; // xmm6
  char **exception; // rbx
  __int64 v101; // [rsp+0h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-118h]
  __int64 v103; // [rsp+10h] [rbp-110h]
  unsigned int v104; // [rsp+28h] [rbp-F8h]
  int v105; // [rsp+2Ch] [rbp-F4h]
  __m128 v106; // [rsp+30h] [rbp-F0h] BYREF
  __m128 v107; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v108; // [rsp+50h] [rbp-D0h]
  __int64 v109; // [rsp+58h] [rbp-C8h]
  __int64 v110; // [rsp+60h] [rbp-C0h]
  __int64 v111; // [rsp+68h] [rbp-B8h] BYREF
  __m128 v112; // [rsp+70h] [rbp-B0h] BYREF
  __m128 si128; // [rsp+80h] [rbp-A0h] BYREF
  __m128i v114; // [rsp+90h] [rbp-90h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-78h] BYREF
  __m128i v117; // [rsp+B0h] [rbp-70h] BYREF
  __m128i v118; // [rsp+C0h] [rbp-60h] BYREF
  _OWORD v119[5]; // [rsp+D0h] [rbp-50h] BYREF

  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(_DWORD *)(a3 + 8) <= 0x3Fu;
  v110 = a2;
  v108 = a3;
  v105 = v4;
  if ( v5 )
  {
    sub_15856A0();
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v110 + 24);
    v76 = *(_QWORD **)(a1 + 160);
    if ( v76 )
      v77 = *((_DWORD *)v76 - 1);
    else
      v77 = 0;
    if ( v105 )
    {
      v78 = 0;
      si128.m128_u64[0] = v110;
      while ( 1 )
      {
        if ( v76 )
        {
          v84 = *((_DWORD *)v76 - 1);
          if ( v84 == *((_DWORD *)v76 - 2) )
          {
            v85 = (3 * v84 + 1) >> 1;
            v86 = 8 * v85 + 8;
            v114.m128i_i32[2] = v85;
            if ( 8 * v84 + 8 >= (unsigned int)v86 || v84 >= v85 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3D2D40((__int64 *)v119, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v119);
              sub_233E40((__int64)v119);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v87 = (_DWORD *)sub_186B300(v76 - 1, v86);
            v76 = v87 + 2;
            *v87 = v114.m128i_i32[2];
            v88 = (unsigned int)v87[1];
            *(_QWORD *)(a1 + 160) = v87 + 2;
            LODWORD(v87) = v88;
            v81 = &v76[v88];
            v80 = (_DWORD)v87 + 1;
          }
          else
          {
            v79 = v84;
            v80 = v84 + 1;
            v81 = &v76[v79];
          }
        }
        else
        {
          v90 = (_QWORD *)sub_186B270(0x18u);
          v80 = 1;
          *v90 = 2;
          v76 = v90 + 1;
          *(_QWORD *)(a1 + 160) = v76;
          v81 = v76;
        }
        *v81 = 0;
        *((_DWORD *)v76 - 1) = v80;
        v82 = *(_QWORD *)(a1 + 528);
        if ( !v82 || (v83 = *(unsigned int *)(v82 - 4), (_DWORD)v83 == *(_DWORD *)(v82 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(a1 + 528));
          v82 = *(_QWORD *)(a1 + 528);
          v83 = *(unsigned int *)(v82 - 4);
        }
        ++v78;
        *(_DWORD *)(v82 + 4 * v83) = v77;
        ++*(_DWORD *)(v82 - 4);
        if ( v78 == v105 )
          break;
        v76 = *(_QWORD **)(a1 + 160);
      }
      v110 = si128.m128_u64[0];
    }
    *(_DWORD *)(a1 + 128) += v105;
  }
  v6 = v108;
  v7 = v110;
  v8 = *(_DWORD *)(v110 + 76) + *(_DWORD *)(v110 + 72) + 1;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v6 + 8) >> 6;
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
    v10 = ((v12 + 1) << 6) | *(_DWORD *)(v6 + 8) & 0x3F;
    *(_DWORD *)(v6 + 8) = v10;
    result = sub_3E2CE0(a1, v9, ((unsigned __int8)v10 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v16 = v7;
  LODWORD(v17) = *(_DWORD *)(v7 + 72);
  v110 = v7;
  v18 = *(unsigned int *)(v7 + 76);
  v19 = v7 + 80;
  v117.m128i_i64[1] = 0;
  v20 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v108 + 12));
  v21 = 16LL * *(unsigned int *)(v16 + 20);
  v103 = *v20;
  v117.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v117, v17, (__int64 *)(v19 + v21));
  v118.m128i_i64[1] = 0;
  v111 = v117.m128i_i64[1];
  v109 = v117.m128i_i64[0];
  v22 = (__int64 *)(v19 + 16LL * *(unsigned int *)(v110 + 20));
  v118.m128i_i64[0] = *(_QWORD *)(a1 + 8);
  sub_3A6490((__int64)&v118, v18, v22);
  v114 = v118;
  v102 = (unsigned int)v17;
  if ( (_DWORD)v17 )
  {
    v67 = (__int64)&v20[(unsigned int)v17];
    v68 = v20;
    v17 = 0;
    v107.m128_u64[0] = v67;
    v106 = _mm_loadh_ps((const double *)&v111);
    do
    {
      v69 = v68[1];
      v70 = *(_QWORD *)(a1 + 8);
      v71 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v106);
      v112 = v71;
      if ( (unsigned __int8)sub_15D3190(v70, v69) )
      {
        v72 = v68[1];
        v73 = v17 + 1;
        v74 = (__int64 *)(v111 + 8 * v17);
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        v75 = *v74;
        if ( *v74 )
        {
          v50 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v50 )
          {
            v104 = v73;
            v101 = v72;
            v89 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
            si128 = _mm_loadh_ps((const double *)&v111);
            v112 = v89;
            sub_15D7BC0(v109, v75);
            v73 = v104;
            v72 = v101;
          }
        }
        *v74 = v72;
        v17 = v73;
      }
      ++v68;
    }
    while ( v68 != (__int64 *)v107.m128_u64[0] );
  }
  si128 = _mm_loadh_ps((const double *)&v111);
  v112 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
  sub_39BEE0(v117.m128i_i64, v17);
  if ( (_DWORD)v18 )
  {
    v60 = &v20[v102];
    v61 = (__int64)&v20[v102 + v18];
    v107 = _mm_loadh_ps((const double *)&v111);
    v18 = 0;
    v106.m128_u64[0] = v61;
    do
    {
      v62 = v60[1];
      v63 = *(_QWORD *)(a1 + 8);
      v64 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v107);
      v112 = v64;
      if ( (unsigned __int8)sub_15D3190(v63, v62) )
      {
        v65 = v60[1];
        si128 = (__m128)_mm_load_si128((const __m128i *)&v107);
        v66 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
        v119[0] = _mm_unpacklo_epi64(
                    (__m128i)(unsigned __int64)(v114.m128i_i64[1] + 8 * v18),
                    (__m128i)v114.m128i_u64[0]);
        v112 = v66;
        sub_3D2CF0((__int64 **)v119, v65);
        v18 = (unsigned int)(v18 + 1);
      }
      ++v60;
    }
    while ( (__int64 *)v106.m128_u64[0] != v60 );
  }
  v23 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v111);
  v112 = v23;
  sub_39BEE0(v118.m128i_i64, v18);
  v24 = *(_QWORD *)(a1 + 8);
  v112 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v111);
  v25 = sub_15DBA30(v24, v110, v17, v111, v18, v114.m128i_i32[2], v103);
  v26 = *(_QWORD *)(a1 + 496);
  v27 = *(_QWORD *)(a1 + 504);
  if ( !v25 )
  {
    v91 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
    si128 = _mm_loadh_ps((const double *)&v111);
    v112 = v91;
    sub_3D2CB0(v26, v27);
    *(_QWORD *)(a1 + 496) = 0;
LABEL_15:
    v29 = *(_QWORD *)(a1 + 504);
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v108 + 12));
    if ( v30 )
    {
      ++*(_DWORD *)(v30 + 8);
      v31 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v112 = v31;
      sub_3D2CB0(0, v29);
      v32 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v30;
      v33 = _mm_loadh_ps((const double *)&v111);
      v112 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = v33;
      v34 = sub_15DE700(v32);
      v35 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v36 = *(_QWORD *)(a1 + 504);
      v37 = *(_QWORD *)(a1 + 496);
      v38 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v112 = v38;
      sub_3D2CB0(v37, v36);
      v39 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 496) = v35;
      v112 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v40 = sub_15DE750(v39);
      v41 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v42 = *(_QWORD *)(a1 + 504);
      v43 = *(_QWORD *)(a1 + 496);
      v44 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v112 = v44;
      sub_3D2CB0(v43, v42);
    }
    else
    {
      v92 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v112 = v92;
      sub_3D2CB0(0, v29);
      v93 = *(_QWORD *)(a1 + 8);
      v94 = _mm_loadh_ps((const double *)&v111);
      *(_QWORD *)(a1 + 496) = 0;
      v95 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = v94;
      v112 = v95;
      v96 = sub_15DE370(v93);
      v41 = v96;
      if ( v96 )
        ++*(_DWORD *)(v96 + 8);
      v97 = *(_QWORD *)(a1 + 504);
      v98 = *(_QWORD *)(a1 + 496);
      v99 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
      si128 = _mm_loadh_ps((const double *)&v111);
      v112 = v99;
      sub_3D2CB0(v98, v97);
    }
    *(_QWORD *)(a1 + 496) = v41;
    if ( !v25 )
      goto LABEL_23;
    goto LABEL_22;
  }
  ++*(_DWORD *)(v25 + 8);
  v28 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v111);
  v112 = v28;
  sub_3D2CB0(v26, v27);
  *(_QWORD *)(a1 + 496) = 0;
  if ( v110 != v25 )
    goto LABEL_15;
LABEL_22:
  ++*(_DWORD *)(v25 + 8);
LABEL_23:
  v45 = *(_QWORD *)(a1 + 488);
  v46 = *(_QWORD *)(a1 + 480);
  v47 = _mm_loadh_ps((const double *)&v114.m128i_i64[1]);
  si128 = _mm_loadh_ps((const double *)&v111);
  v112 = v47;
  sub_3D2CD0(v46, v45);
  v48 = v108;
  *(_QWORD *)(a1 + 480) = v25;
  sub_3A9A20((__int64 *)(a1 + 80), *(_DWORD *)(v48 + 12));
  v49 = *(_QWORD *)(a1 + 496);
  v115 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_3D5D00((_QWORD *)(a1 + 88), &v115);
  if ( v25 )
  {
    v50 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v50 )
      sub_15D7BC0(v24, v25);
  }
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v108 + 12));
  v51 = *(_QWORD *)(a1 + 480);
  v116 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  sub_3D5DC0((_QWORD *)(a1 + 56), &v116);
  v52 = *(_QWORD *)(a1 + 160);
  if ( v52 )
    *(_DWORD *)(v52 - 4) -= v105;
  v53 = *(_QWORD *)(a1 + 528);
  if ( v53 )
    *(_DWORD *)(v53 - 4) -= v105;
  sub_15844D0(a1);
  v54 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v108 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, v110, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v54 = *(_QWORD *)(a1 + 480);
  }
  sub_3D2CD0(v54, *(_QWORD *)(a1 + 488));
  v55 = *(_QWORD *)(a1 + 504);
  v56 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_3D2CB0(v56, v55);
  v57 = *(_QWORD *)(a1 + 40);
  v58 = v110;
  *(_QWORD *)(a1 + 496) = 0;
  v59 = *(_DWORD *)(v57 - 4);
  *(_DWORD *)(v57 - 4) = v59 - 1;
  if ( *(_QWORD *)(a1 + 480) != v58 && v59 != 1 )
    *(_BYTE *)(v57 + 16LL * (unsigned int)(v59 - 2) + 8) |= 2u;
  v118 = _mm_load_si128((const __m128i *)&v112);
  sub_2334C0(v118.m128i_i64);
  v117 = _mm_load_si128((const __m128i *)&si128);
  return sub_2334C0(v117.m128i_i64);
}

