__int64 __fastcall sub_6717E0(__int64 *a1, void *a2, __int64 a3, __int64 a4, int a5, double a6, __m128i a7, double a8)
{
  bool v9; // r14
  unsigned int v10; // r13d
  unsigned __int64 v11; // r15
  char *v12; // r12
  char *v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  const __m128i *v19; // r15
  __int64 v20; // r8
  __int64 v21; // rdi
  __m128i v22; // xmm0
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  unsigned __int64 *v30; // r15
  void **v31; // rax
  char *v32; // r12
  __int64 v33; // rax
  char *v34; // r13
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i *v37; // rsi
  __int64 v38; // r12
  unsigned __int64 v39; // r15
  void *v40; // r14
  __int64 v41; // rsi
  char v42; // dl
  __int64 v43; // rax
  __int64 i; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // r14
  __int64 v48; // rsi
  const __m128i *v49; // rax
  const __m128i *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i *v55; // r8
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  _BOOL8 v59; // rdi
  void *v60; // rax
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __int64 v63; // rsi
  __int64 v64; // r12
  __int64 v65; // r15
  void *v66; // r14
  int v67; // r8d
  int v68; // r9d
  char *v69; // r12
  char *v70; // r14
  __int64 v71; // r12
  __int64 v72; // r15
  void *v73; // r14
  unsigned int v74; // ebx
  __int64 j; // r13
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 k; // r13
  __int64 v81; // rax
  unsigned __int64 v82; // r15
  __int64 v83; // rax
  __int64 m; // rax
  unsigned __int64 v85; // r15
  __int64 v86; // r14
  __int64 v87; // r15
  unsigned __int64 v88; // rax
  __int64 v89; // r13
  _QWORD *v90; // r13
  __int64 v91; // r15
  _QWORD *v92; // r14
  void *v93; // rdi
  const __m128i *v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int64 v99; // rdx
  char *v100; // rdi
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __m128i v103; // xmm0
  unsigned __int64 v104; // r15
  __m128i *v105; // [rsp+0h] [rbp-1B0h]
  int v106; // [rsp+0h] [rbp-1B0h]
  char *v107; // [rsp+8h] [rbp-1A8h]
  int v108; // [rsp+8h] [rbp-1A8h]
  unsigned __int64 v109; // [rsp+10h] [rbp-1A0h]
  int v110; // [rsp+10h] [rbp-1A0h]
  __m128i *v111; // [rsp+18h] [rbp-198h]
  int v112; // [rsp+18h] [rbp-198h]
  __int64 v113; // [rsp+20h] [rbp-190h]
  int v114; // [rsp+20h] [rbp-190h]
  char v115; // [rsp+20h] [rbp-190h]
  int v116; // [rsp+24h] [rbp-18Ch]
  __int64 v117; // [rsp+28h] [rbp-188h]
  int v118; // [rsp+28h] [rbp-188h]
  __int64 v119; // [rsp+30h] [rbp-180h]
  int v120; // [rsp+30h] [rbp-180h]
  __m128i *v121; // [rsp+38h] [rbp-178h]
  __int64 v122; // [rsp+40h] [rbp-170h]
  __int64 v123; // [rsp+40h] [rbp-170h]
  int v124; // [rsp+48h] [rbp-168h]
  __int64 v125; // [rsp+48h] [rbp-168h]
  int v126; // [rsp+50h] [rbp-160h]
  int v127; // [rsp+58h] [rbp-158h]
  _QWORD *v128; // [rsp+60h] [rbp-150h]
  __m128i v129; // [rsp+68h] [rbp-148h] BYREF
  void *v130; // [rsp+78h] [rbp-138h]
  int v131[2]; // [rsp+80h] [rbp-130h]
  __m128i v132; // [rsp+88h] [rbp-128h] BYREF
  __int64 v133; // [rsp+98h] [rbp-118h] BYREF
  __int64 v134; // [rsp+A0h] [rbp-110h] BYREF
  __int64 v135; // [rsp+A8h] [rbp-108h] BYREF
  void *v136; // [rsp+B0h] [rbp-100h] BYREF
  __int128 v137; // [rsp+B8h] [rbp-F8h]
  int v138; // [rsp+C8h] [rbp-E8h]
  void *v139; // [rsp+D0h] [rbp-E0h] BYREF
  __int128 v140; // [rsp+D8h] [rbp-D8h]
  int v141; // [rsp+E8h] [rbp-C8h]
  void *ptr; // [rsp+F0h] [rbp-C0h] BYREF
  __m128i v143; // [rsp+F8h] [rbp-B8h] BYREF
  int v144; // [rsp+108h] [rbp-A8h]
  void *v145; // [rsp+110h] [rbp-A0h] BYREF
  __int128 v146; // [rsp+118h] [rbp-98h]
  __int64 v147; // [rsp+128h] [rbp-88h]
  int v148; // [rsp+130h] [rbp-80h]
  int v149; // [rsp+138h] [rbp-78h]
  __m128i v150; // [rsp+140h] [rbp-70h] BYREF
  void *v151; // [rsp+150h] [rbp-60h]
  __int64 v152; // [rsp+158h] [rbp-58h]
  __int64 v153; // [rsp+160h] [rbp-50h]
  __int64 v154; // [rsp+168h] [rbp-48h]
  unsigned __int64 v155; // [rsp+178h] [rbp-38h]

  v129.m128i_i64[1] = a3;
  v130 = a2;
  *(_QWORD *)v131 = a4;
  LODWORD(v113) = a5;
  v155 = __readfsqword(0x28u);
  v128 = (_QWORD *)(a3 - (_QWORD)a2);
  v9 = (a5 & 0x40) != 0;
  LODWORD(v122) = a5 & 0x80;
  v10 = ((unsigned int)v122 >> 7) ^ 1;
  HIDWORD(v113) = a5 & 1;
  if ( (a5 & 1) == 0 )
    sub_3BBF30((int)"HIDECANCEL\nMoving database info...");
  v11 = (unsigned __int64)v130;
  v136 = nullptr;
  v137 = 0;
  v12 = (char *)v130 + *(_QWORD *)v131;
  while ( v11 < (unsigned __int64)v12 )
  {
    v132.m128i_i64[0] = sub_3BD700((__int64)a1, v11);
    if ( v132.m128i_i64[0] != -1 )
    {
      v15 = sub_3BD840(a1, v11);
      v16 = (char *)v136;
      v17 = v15 + v132.m128i_i64[0];
      v18 = v137;
      if ( v17 > (unsigned __int64)v12 )
        v17 = (unsigned __int64)v12;
      v132.m128i_i64[0] = v17;
      if ( *((_QWORD *)&v137 + 1) < (unsigned __int64)(v137 + 1) )
      {
        v136 = (void *)qvector_reserve(&v136, v136, v137 + 1, 16);
        v16 = (char *)v136;
        v18 = v137;
      }
      a8 = 0.0;
      v13 = &v16[16 * v18];
      v14 = v132.m128i_i64[0];
      *(_OWORD *)v13 = 0;
      *(_QWORD *)&v137 = v137 + 1;
      *(_QWORD *)v13 = v11;
      *((_QWORD *)v13 + 1) = v14;
    }
    v11 = sub_3BD580((__int64)a1, v11);
  }
  v19 = (const __m128i *)v136;
  v132.m128i_i64[0] = (__int64)v136 + 16 * v137;
  if ( (unsigned __int64)v130 < v129.m128i_i64[1] )
  {
    if ( v136 == (char *)v136 + 16 * (_QWORD)v137 )
      goto LABEL_15;
    v102 = v132.m128i_i64[0] - 16;
    if ( (unsigned __int64)v136 >= v132.m128i_i64[0] - 16 )
    {
      do
      {
LABEL_13:
        if ( (unsigned int)sub_3D7C60(
                             (__int64)a1,
                             v19->m128i_i64[0],
                             *(_QWORD *)(a1[3] + 16) & ((unsigned __int64)v128 + v19->m128i_i64[0]),
                             v19->m128i_i64[1] - v19->m128i_i64[0]) )
        {
          if ( !under_debugger )
            interr(513);
          BUG();
        }
        ++v19;
      }
      while ( (const __m128i *)v132.m128i_i64[0] != v19 );
      goto LABEL_15;
    }
    do
    {
      v103 = _mm_loadu_si128(v19);
      a7 = _mm_loadu_si128((const __m128i *)v102);
      ++v19;
      v102 -= 16LL;
      v19[-1] = a7;
      *(__m128i *)(v102 + 16) = v103;
    }
    while ( (unsigned __int64)v19 < v102 );
    v19 = (const __m128i *)v136;
    v132.m128i_i64[0] = (__int64)v136 + 16 * v137;
  }
  if ( (const __m128i *)v132.m128i_i64[0] != v19 )
    goto LABEL_13;
LABEL_15:
  v107 = (char *)sub_3BDD60(a1, (__int64)v130);
  v109 = sub_3BDD60(a1, v129.m128i_i64[1]);
  if ( (_DWORD)v122 )
  {
    v97 = *(_QWORD *)(a1[3] + 16);
    if ( v97 < *(_QWORD *)v131 + v109 )
    {
      v132.m128i_i64[0] = v97 + 1;
      v104 = v97 + 1 - v109;
      netnode_copy(v107, v104, v109, 1);
      v99 = 0;
      v100 = &v107[v104];
      v98 = v109 + *(_QWORD *)v131 - v132.m128i_i64[0];
    }
    else
    {
      v98 = *(_QWORD *)v131;
      v99 = v109;
      v100 = v107;
    }
    netnode_copy(v100, v98, v99, 1);
    v22 = 0;
    v148 = -1;
    v145 = nullptr;
    v147 = 0;
    v146 = 0;
  }
  else
  {
    v21 = *a1;
    v145 = nullptr;
    v147 = 0;
    v148 = -1;
    v146 = 0;
    v150 = 0;
    sub_630CA0(v21, 26, &v150, 0x10u, v20);
    v129.m128i_i32[0] = (unsigned int)&v150;
    v22 = _mm_add_epi64(
            _mm_unpacklo_epi64((__m128i)((char *)v130 - v129.m128i_i64[1]), (__m128i)((char *)v130 - v129.m128i_i64[1])),
            v150);
    v150 = v22;
    rangeset_t_add(
      (int)&v145,
      v129.m128i_i32[0],
      v23,
      v24,
      v25,
      v129.m128i_i32[0],
      (int)v105,
      v107,
      v109,
      (int)v111,
      v113,
      v117,
      v119);
    v150.m128i_i64[1] = (__int64)v12;
    rangeset_t_sub(
      (int)&v145,
      v129.m128i_i32[0],
      v26,
      v27,
      v28,
      v29,
      v106,
      v108,
      v110,
      v112,
      v114,
      v118,
      v120,
      (int)v121,
      0,
      v124,
      v126,
      v127,
      (int)v128,
      v129.m128i_i32[0],
      v129.m128i_i32[2],
      (int)v130,
      v131[0],
      (int)&v145,
      v132.m128i_i32[2],
      v133,
      v134,
      v135,
      (int)v136,
      v137,
      SDWORD2(v137),
      v138,
      (int)v139,
      v140,
      SDWORD2(v140),
      v141,
      (int)ptr,
      v143.m128i_i32[0],
      v143.m128i_i32[2],
      v144,
      (int)v145,
      (void *)v146,
      *((__int64 *)&v146 + 1),
      v147,
      v148,
      v149,
      (__int64)v130);
  }
  sub_3D81C0((__int64)a1, (unsigned __int64)v130, v129.m128i_u64[1], *(__int64 *)v131);
  v30 = (unsigned __int64 *)v145;
  v132.m128i_i64[0] = (__int64)v145 + 16 * v146;
  if ( v145 != (void *)v132.m128i_i64[0] )
  {
    do
    {
      sub_3D81C0((__int64)a1, *v30, (unsigned __int64)v128 + *v30, v30[1] - *v30);
      v30 += 2;
    }
    while ( (unsigned __int64 *)v132.m128i_i64[0] != v30 );
  }
  HIDWORD(v122) = (unsigned __int8)v10;
  sub_508600(
    (__int64)(a1 + 203),
    (unsigned __int64)v130,
    v129.m128i_u64[1],
    *(__int64 *)v131,
    v10,
    nullptr,
    *(double *)v22.m128i_i64,
    *(double *)a7.m128i_i64,
    a8,
    0);
  sub_510270(*a1);
  sub_685AC0(a1, v130, v129.m128i_i64[1]);
  sub_51DFC0(*a1, (unsigned __int64)v130, v129.m128i_u64[1], *(__int64 *)v131, v10);
  if ( !HIDWORD(v113) )
    sub_3BBF30((int)"HIDECANCEL\nMoving functions...");
  sub_5CA1A0(
    (__int64)a1,
    (unsigned __int64)v130,
    v129.m128i_u64[1],
    *(__int64 *)v131,
    v10,
    *(double *)v22.m128i_i64,
    *(double *)a7.m128i_i64,
    a8);
  sub_3C77D0((__int64)a1, (int)v130, v129.m128i_i32[2], v131[0], v10);
  sub_642770(
    (__int64)a1,
    (unsigned __int64)v130,
    v129.m128i_u64[1],
    *(__int64 *)v131,
    v10,
    v22,
    *(double *)a7.m128i_i64,
    a8);
  sub_3C7420((int)a1, (int)v130, v129.m128i_i32[2], v131[0], v10);
  sub_5B4920(a1, (unsigned __int64)v130, v129.m128i_i64[1], *(__int64 *)v131);
  sub_4CEFA0(a1, (__int64)v130, v129.m128i_i64[1], *(__int64 *)v131);
  sub_3A4790((int)a1, v130, v129.m128i_i32[2], v131[0]);
  v140 = 0;
  v139 = nullptr;
  v139 = (void *)qvector_reserve(&v139, 0, 1, 16);
  v31 = (void **)((char *)v139 + 16 * v140);
  *v31 = v130;
  v31[1] = v12;
  v32 = (char *)v145;
  v33 = v140 + 1;
  v34 = (char *)v145 + 16 * v146;
  *(_QWORD *)&v140 = v140 + 1;
  if ( v34 != v145 )
  {
    do
    {
      v35 = _mm_loadl_epi64((const __m128i *)v32);
      v36 = _mm_loadl_epi64((const __m128i *)(v32 + 8));
      v37 = (__m128i *)v139;
      if ( *((_QWORD *)&v140 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v129.m128i_i64[0] = v36.m128i_i64[0];
        v132.m128i_i64[0] = v35.m128i_i64[0];
        v139 = (void *)qvector_reserve(&v139, v139, v33 + 1, 16);
        v37 = (__m128i *)v139;
        v36 = _mm_loadl_epi64(&v129);
        v35 = _mm_loadl_epi64(&v132);
        v33 = v140;
      }
      v32 += 16;
      v37[v33] = _mm_unpacklo_epi64(v35, v36);
      v33 = v140 + 1;
      *(_QWORD *)&v140 = v140 + 1;
    }
    while ( v34 != v32 );
  }
  sub_6709F0(a1, (unsigned __int64 **)&v139, v128, BYTE4(v122), v9);
  if ( !(_DWORD)v122 )
  {
    sub_66F360(a1, (__int64)v130, v129.m128i_u64[1], *(__int64 *)v131, v113, 1);
    goto LABEL_54;
  }
  v38 = *(_QWORD *)v131;
  v39 = v129.m128i_u64[1];
  v40 = v130;
  sub_5A0D10(a1, (__int64)v130, v129.m128i_i64[1], *(__int64 *)v131);
  sub_66F360(a1, (__int64)v40, v39, v38, v113, 0);
  v41 = *a1;
  ptr = nullptr;
  v132.m128i_i64[0] = v41;
  v119 = (__int64)(a1 + 291);
  v143 = 0;
  v117 = sub_7BE710(a1 + 291, v41, -1, 65);
  v129.m128i_i64[0] = (__int64)&v150.m128i_i64[1];
  v125 = 0;
  if ( !v117 )
    goto LABEL_88;
  do
  {
    v150.m128i_i32[2] = 0;
    v151 = nullptr;
    v152 = v129.m128i_i64[0];
    v153 = v129.m128i_i64[0];
    v154 = 0;
    v42 = sub_7BEFD0(v119, v132.m128i_i64[0], &v135, (int)v125, 65);
    v43 = -1;
    if ( v42 )
      v43 = v135;
    v133 = v43;
    for ( i = sub_7BEB80(&v133, v132.m128i_i64[0], 83); ; i = sub_7BEBF0(&v133, v132.m128i_i64[0], v45, 83) )
    {
      v45 = i;
      if ( i == -1 )
        break;
      v46 = sub_3BDE50(a1, i);
      v47 = sub_684CE0((_DWORD)a1, v46, (_DWORD)v130, v129.m128i_i32[2], v131[0], 0, 0);
      if ( v46 != v47 )
      {
        v48 = v132.m128i_i64[0];
        if ( sub_7BEA80(&v133, v132.m128i_i64[0], &ptr, v45, 83) > 0 )
        {
          v49 = (const __m128i *)v151;
          v50 = (const __m128i *)v129.m128i_i64[0];
          if ( v151 )
          {
            do
            {
              while ( 1 )
              {
                v51 = v49[1].m128i_i64[0];
                v52 = v49[1].m128i_i64[1];
                if ( v49[2].m128i_i64[0] < v47 )
                  break;
                v50 = v49;
                v49 = (const __m128i *)v49[1].m128i_i64[0];
                if ( !v51 )
                  goto LABEL_39;
              }
              v49 = (const __m128i *)v49[1].m128i_i64[1];
            }
            while ( v52 );
LABEL_39:
            if ( v50 != (const __m128i *)v129.m128i_i64[0] && v47 >= v50[2].m128i_i64[0] )
              goto LABEL_52;
          }
          v53 = operator new(0x40u);
          *(_QWORD *)(v53 + 32) = v47;
          v55 = (__m128i *)v53;
          *(_QWORD *)(v53 + 40) = 0;
          *(_OWORD *)(v53 + 48) = 0;
          if ( v50 == (const __m128i *)v129.m128i_i64[0] )
          {
            if ( !v154 )
              goto LABEL_96;
            v57 = v153;
            v50 = nullptr;
            if ( *(_QWORD *)(v153 + 32) >= v47 )
              goto LABEL_96;
LABEL_47:
            if ( !v57 )
              goto LABEL_92;
            if ( v50 || v57 == v129.m128i_i64[0] )
            {
              v59 = 1;
              goto LABEL_51;
            }
          }
          else
          {
            v56 = v50[2].m128i_u64[0];
            v121 = &v150;
            if ( v47 < v56 )
            {
              v57 = (__int64)v50;
              if ( (const __m128i *)v152 == v50 )
                goto LABEL_47;
              v111 = (__m128i *)v53;
              v58 = std::_Rb_tree_decrement(v50);
              v55 = v111;
              v57 = v58;
              if ( *(_QWORD *)(v58 + 32) < v47 )
              {
                if ( *(_QWORD *)(v58 + 24) )
                  v57 = (__int64)v50;
                else
                  v50 = nullptr;
                goto LABEL_47;
              }
LABEL_96:
              v121 = v55;
              v94 = (const __m128i *)sub_66EC40((__int64)&v150, v47);
              v55 = v121;
              v50 = v94;
              goto LABEL_47;
            }
            v111 = (__m128i *)v50[2].m128i_i64[0];
            if ( v56 >= v47 )
            {
LABEL_92:
              if ( v55 )
                operator delete(v55, 0x40u);
              goto LABEL_52;
            }
            if ( (const __m128i *)v153 != v50 )
            {
              v105 = (__m128i *)v53;
              v95 = std::_Rb_tree_increment(v50, v48, v54, v56);
              v55 = v105;
              v57 = v95;
              if ( v47 >= *(_QWORD *)(v95 + 32) )
                goto LABEL_96;
              v96 = (unsigned __int64)v111;
              if ( v50[1].m128i_i64[1] )
              {
                v50 = (const __m128i *)v95;
                goto LABEL_47;
              }
              v57 = (__int64)v50;
              if ( !v50 )
                goto LABEL_92;
LABEL_103:
              v59 = v47 < v96;
LABEL_51:
              v121 = v55;
              std::_Rb_tree_insert_and_rebalance(v59, v55, v57, v129.m128i_i64[0]);
              ++v154;
              v50 = v121;
LABEL_52:
              v60 = (void *)v50[2].m128i_i64[1];
              v61 = _mm_loadu_si128(&v143);
              v62 = _mm_loadu_si128(v50 + 3);
              v50[2].m128i_i64[1] = (__int64)ptr;
              v63 = v132.m128i_i64[0];
              v50[3] = v61;
              ptr = v60;
              v143 = v62;
              sub_7BE850(&v133, v63, v45, 83);
              continue;
            }
            v57 = (__int64)v50;
            if ( !v50 )
              goto LABEL_92;
          }
          v96 = *(_QWORD *)(v57 + 32);
          goto LABEL_103;
        }
      }
    }
    for ( j = v152; j != v129.m128i_i64[0]; j = std::_Rb_tree_increment(j, v77, v78, v79) )
    {
      v77 = v132.m128i_i64[0];
      sub_7BE7C0(&v133, v132.m128i_i64[0], *(_QWORD *)(j + 32), *(_QWORD *)(j + 40), 0, 339);
    }
    for ( k = sub_7BEB80(&v133, v132.m128i_i64[0], 65); k != -1; k = sub_7BEBF0(&v133, v132.m128i_i64[0], k, 65) )
    {
      v81 = sub_7BE710(&v133, v132.m128i_i64[0], k, 65);
      v82 = sub_3BDE50(a1, v81);
      v83 = sub_684CE0((_DWORD)a1, v82, (_DWORD)v130, v129.m128i_i32[2], v131[0], 0, 0);
      if ( v82 != v83 )
      {
        v134 = ea2node(v83);
        sub_7BE7C0(&v133, v132.m128i_i64[0], k, &v134, 8, 65);
      }
    }
    for ( m = sub_7BEB80(&v133, v132.m128i_i64[0], 79); ; m = sub_7BEBF0(&v133, v132.m128i_i64[0], v89, 79) )
    {
      v89 = m;
      if ( m == -1 )
        break;
      v85 = sub_3BDE50(a1, m);
      v86 = sub_684CE0((_DWORD)a1, v85, (_DWORD)v130, v129.m128i_i32[2], v131[0], 0, 0);
      if ( v85 != v86 )
      {
        v87 = sub_7BE710(&v133, v132.m128i_i64[0], v89, 79);
        sub_7BE850(&v133, v132.m128i_i64[0], v89, 65);
        v88 = sub_3BDD60(a1, v86);
        v135 = v87;
        sub_7BE7C0(&v133, v132.m128i_i64[0], v88, &v135, 8, 79);
      }
    }
    v90 = v151;
    v91 = v132.m128i_i64[0];
    if ( v151 )
    {
      do
      {
        v92 = v90;
        sub_66ED00((_QWORD *)v90[3]);
        v93 = (void *)v90[5];
        v90 = (_QWORD *)v90[2];
        if ( v93 )
        {
          v92[6] = 0;
          qfree(v93);
        }
        operator delete(v92, 0x40u);
      }
      while ( v90 );
      v132.m128i_i64[0] = v91;
    }
    ++v125;
  }
  while ( v117 != v125 );
LABEL_88:
  if ( ptr )
  {
    v143.m128i_i64[0] = 0;
    qfree(ptr);
  }
  netnode_charshift(*(_QWORD *)(*(_QWORD *)(*a1 + 632) + 104LL), v107, v109, *(_QWORD *)v131, 0);
LABEL_54:
  v64 = *(_QWORD *)v131;
  v65 = v129.m128i_i64[1];
  v66 = v130;
  sub_41EF40(a1, (unsigned __int64)v130, v129.m128i_i64[1], *(__int64 *)v131, SBYTE4(v122));
  sub_4F3280(a1, (__int64)v66, v65, v64, SBYTE4(v122));
  sub_690120(*a1, (int)v66, v65, v64, v67, v68, (int)v105, (int)v107, v109, v111, v113, v117, v119, (int)v121, v122);
  sub_6969D0(a1, v66, v65, v64);
  v69 = (char *)v145;
  v70 = (char *)v145 + 16 * v146;
  if ( v70 != v145 )
  {
    do
    {
      sub_6969D0(a1, *(_QWORD *)v69, (char *)v128 + *(_QWORD *)v69, *((_QWORD *)v69 + 1) - *(_QWORD *)v69);
      v69 += 16;
    }
    while ( v70 != v69 );
  }
  sub_6B8D40(a1);
  v71 = *(_QWORD *)v131;
  v72 = v129.m128i_i64[1];
  v73 = v130;
  sub_5884A0((__int64)a1, (unsigned __int64)v130, v129.m128i_i64[1], *(__int64 *)v131);
  sub_69F870(a1, v73, v72, v71, HIDWORD(v123));
  sub_66EA50(a1, (int)v73, v72, v71);
  if ( (_DWORD)v123 )
  {
    v101 = sub_433DB0((__int64)a1, 1u);
    if ( v101 )
      sub_671380(v101, (__int64)v128, 1);
  }
  if ( (v115 & 2) != 0 )
    goto LABEL_61;
  if ( !v116 )
    sub_3BBF30((int)"HIDECANCEL\nFixing relocations...");
  if ( (unsigned __int8)sub_6422B0((__int64)v130, v129.m128i_i64[1], *(__int64 *)v131, (v115 & 4) != 0) )
LABEL_61:
    v74 = 0;
  else
    v74 = -5;
  if ( v139 )
  {
    *(_QWORD *)&v140 = 0;
    qfree(v139);
  }
  if ( v145 )
  {
    *(_QWORD *)&v146 = 0;
    qfree(v145);
  }
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
  return v74;
}
