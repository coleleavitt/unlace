__int64 __fastcall sub_BEC40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rbp
  unsigned int v14; // r14d
  int *v16; // rbp
  int *v17; // r13
  _BYTE *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // rdi
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdi
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r14
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // r13
  int v38; // eax
  int v39; // r15d
  __int64 v40; // r12
  unsigned int tinfo_size; // eax
  __int64 v42; // rdi
  __int64 v43; // r15
  int v44; // eax
  int v45; // r12d
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 *v51; // rcx
  int v52; // ebp
  __int64 *v53; // r13
  __int64 v54; // rax
  __m128i v55; // xmm1
  __int64 v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r12
  __m128i v60; // xmm1
  __int64 v61; // rax
  unsigned __int64 v62; // rbp
  unsigned __int64 v63; // r12
  __int64 *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  __int64 v69; // rax
  unsigned __int64 v70; // rbp
  unsigned __int64 v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rbp
  __int64 v79; // r13
  __int64 v80; // r12
  __int64 v81; // r8
  __int64 v82; // r9
  __m128i v83; // xmm3
  int v84; // ebp
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r9d
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // r14
  int *v96; // rcx
  int v97; // r12d
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // r12
  _DWORD *v101; // r12
  __int64 v102; // r12
  unsigned __int64 v103; // rdx
  __int64 *v104; // rbp
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // r12
  void *v108; // r13
  __int64 v109; // rdi
  __m128i v110; // xmm0
  int v111; // esi
  __int64 v112; // rdi
  __int64 v113; // r14
  __int64 v114; // rbp
  __int64 v115; // r12
  int *v116; // rsi
  int v117; // eax
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  int v120; // [rsp+0h] [rbp-1A8h]
  __int64 v121; // [rsp+8h] [rbp-1A0h]
  __m128i v122; // [rsp+10h] [rbp-198h] BYREF
  __m128i v123; // [rsp+20h] [rbp-188h] BYREF
  __m128i v124; // [rsp+30h] [rbp-178h] BYREF
  __int64 *v125; // [rsp+40h] [rbp-168h]
  __m128i v126; // [rsp+48h] [rbp-160h] BYREF
  __int64 *v127; // [rsp+58h] [rbp-150h]
  int *v128; // [rsp+60h] [rbp-148h] BYREF
  __int128 v129; // [rsp+68h] [rbp-140h]
  __int64 v130; // [rsp+80h] [rbp-128h] BYREF
  __int128 v131; // [rsp+88h] [rbp-120h]
  __int64 v132; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v133; // [rsp+A8h] [rbp-100h]
  __int64 v134; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v135; // [rsp+C8h] [rbp-E0h]
  __int64 v136; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v137; // [rsp+D8h] [rbp-D0h]
  __int64 v138[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v139; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v140; // [rsp+108h] [rbp-A0h]
  __int64 (__fastcall **v141)(); // [rsp+120h] [rbp-88h] BYREF
  __int64 v142; // [rsp+128h] [rbp-80h]
  __int64 v143; // [rsp+130h] [rbp-78h] BYREF
  __m128i v144; // [rsp+138h] [rbp-70h] BYREF
  char v145; // [rsp+148h] [rbp-60h]
  __int64 *v146; // [rsp+150h] [rbp-58h]
  __int64 v147; // [rsp+158h] [rbp-50h]
  unsigned __int64 v148; // [rsp+168h] [rbp-40h]

  v122.m128i_i64[0] = a2;
  v148 = __readfsqword(0x28u);
  v121 = j__qalloc_or_throw(312, a2, a3, a4);
  sub_BE490(v121, (__int64 *)(*(_QWORD *)(a1 + 320) + 1520LL), v5, *(_QWORD *)(a1 + 320));
  *(_QWORD *)(a1 + 216) = v121;
  v8 = *(unsigned int *)(v121 + 20);
  if ( !(_DWORD)v8 )
    *(_DWORD *)(v121 + 20) = 112;
  v128 = nullptr;
  v129 = 0;
  v9 = *(_QWORD *)(v121 + 32);
  if ( (int)v9 <= 0 )
  {
    v112 = *(_QWORD *)(a1 + 248);
    v134 = 0;
    v135 = 0;
    v136 = 0;
    *(_QWORD *)(a1 + 240) = 0;
    v137 = 0;
    if ( v112 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v125 = &v134;
      qfree(v112);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    v10 = 0;
    v11 = 5LL * (unsigned int)(v9 - 1) + 5;
    v12 = (unsigned int)(v9 - 1);
    v13 = 16 * v11;
    do
    {
      v14 = sub_BDAD0(a1, v10 + *(_QWORD *)(v121 + 24), (__int64)&v128);
      if ( !(_BYTE)v14 )
        goto LABEL_7;
      v10 += 80;
    }
    while ( v13 != v10 );
    v16 = v128;
    v134 = 0;
    v135 = 0;
    v17 = &v128[v129];
    v137 = 0;
    v136 = 0;
    if ( v128 != v17 )
    {
      do
      {
        while ( 1 )
        {
          v18 = *(_BYTE **)(*(_QWORD *)(a1 + 64) + 8LL * *v16);
          if ( *v18 == 4 )
            break;
          if ( v17 == ++v16 )
            goto LABEL_15;
        }
        v125 = &v134;
        sub_123EA0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), &v134, v18, 0, 4294901760LL);
        ++v16;
      }
      while ( v17 != v16 );
    }
LABEL_15:
    v19 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 240) = 0;
    if ( v19 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v125 = &v134;
      qfree(v19);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    v20 = 0;
    v21 = 16 * (5 * v12 + 5);
    do
    {
      v22 = *(_QWORD *)(a1 + 328);
      v141 = nullptr;
      v142 = 0;
      v143 = 0;
      v144 = 0;
      sub_123EA0(*(_QWORD *)(v22 + 520), &v141, v20 + *(_QWORD *)(v121 + 24), 0, 4294901760LL);
      sub_64280((__int64 *)(a1 + 232), (__int64 *)&v141);
      sub_316CB0(a1 + 248, &v143);
      v125 = &v134;
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        v125 = &v134;
        sub_64280(&v134, (__int64 *)&v141);
        sub_316CB0(&v136, &v143);
      }
      if ( v143 )
      {
        v144.m128i_i64[0] = 0;
        qfree(v143);
      }
      v20 += 80;
      qfree((__int64)v141);
    }
    while ( v20 != v21 );
  }
  v23 = 0;
  v24 = 0;
  *(_DWORD *)(a1 + 228) = 0;
  v25 = v121 + 96;
  v26 = *(_QWORD *)(v121 + 56) == 0;
  v130 = 0;
  v123.m128i_i64[0] = v121 + 96;
  v131 = 0;
  if ( v26 )
  {
LABEL_51:
    v132 = 0;
    v133 = 0;
    v48 = *(_QWORD *)(v122.m128i_i64[0] + 16);
    *(_QWORD *)(v122.m128i_i64[0] + 8) = 0;
    if ( v48 )
    {
      v49 = v122.m128i_i64[0];
      v125 = &v134;
      *(_QWORD *)(v122.m128i_i64[0] + 24) = 0;
      qfree(v48);
      *(_QWORD *)(v49 + 16) = 0;
      *(_QWORD *)(v49 + 32) = 0;
    }
    v50 = 0;
    v51 = &v134;
    v26 = *(_QWORD *)(a1 + 48) == 0;
    v126.m128i_i32[0] = 0;
    v124.m128i_i64[0] = (__int64)&v134;
    if ( !v26 )
    {
      do
      {
        v8 = 3 * v50;
        v52 = 0;
        v53 = (__int64 *)(*(_QWORD *)(a1 + 40) + 24 * v50);
        v54 = 0;
        if ( v53[1] )
        {
          do
          {
            v8 = *v53;
            v56 = *(_QWORD *)(*v53 + 8 * v54);
            if ( v56 )
            {
              v57 = *(_QWORD *)(*v53 + 8 * v54);
              v58 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL);
              v125 = (__int64 *)v124.m128i_i64[0];
              sub_127A20(v138, v58, v57, 0);
              sub_64280((__int64 *)v122.m128i_i64[0], v138);
              v125 = &v139;
              sub_316CB0(v122.m128i_i64[0] + 16, &v139);
              sub_127A20(&v141, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v56, 1);
              sub_648D0(v138, (__int64 *)&v141);
              v59 = v143;
              v143 = 0;
              v60 = _mm_loadu_si128(&v144);
              v144 = 0;
              if ( v139 )
              {
                v123 = v60;
                v140.m128i_i64[0] = 0;
                qfree(v139);
                v55 = _mm_load_si128(&v123);
                v139 = v59;
                v140 = v55;
                if ( v143 )
                {
                  v144.m128i_i64[0] = 0;
                  qfree(v143);
                }
              }
              else
              {
                v139 = v59;
                v140 = v60;
              }
              qfree((__int64)v141);
              sub_64280((__int64 *)v122.m128i_i64[0], v138);
              sub_316CB0(&v132, v125);
              if ( v139 )
              {
                v140.m128i_i64[0] = 0;
                qfree(v139);
              }
              qfree(v138[0]);
            }
            v54 = ++v52;
          }
          while ( v52 < (unsigned __int64)v53[1] );
        }
        v50 = ++v126.m128i_i32[0];
      }
      while ( (unsigned __int64)v126.m128i_i32[0] < *(_QWORD *)(a1 + 48) );
    }
    v61 = *(_QWORD *)(a1 + 328);
    v141 = nullptr;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v62 = *(_QWORD *)(v61 + 536);
    v63 = *(_QWORD *)(v61 + 544);
    if ( v62 + v63 - 1 >= v62 )
    {
      v143 = qvector_reserve((__int64)&v143, 0, 1, 16);
      v8 = 16 * v144.m128i_i64[0];
      *(__m128i *)(v143 + 16 * v144.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v62, (__m128i)v63);
    }
    sub_64640((__int64 *)v122.m128i_i64[0], (__int64 *)&v141, v8, (__int64)v51, v6, v7);
    v64 = &v143;
    v123.m128i_i64[0] = v122.m128i_i64[0] + 16;
    sub_317C60(v122.m128i_i64[0] + 16, &v143);
    if ( v143 )
    {
      v144.m128i_i64[0] = 0;
      qfree(v143);
    }
    qfree((__int64)v141);
    v69 = *(_QWORD *)(a1 + 328);
    v141 = nullptr;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v70 = *(_QWORD *)(v69 + 696);
    v71 = *(_QWORD *)(v69 + 704);
    if ( v70 + v71 - 1 >= v70 )
    {
      v143 = qvector_reserve((__int64)&v143, 0, 1, 16);
      v65 = 16 * v144.m128i_i64[0];
      *(__m128i *)(v143 + 16 * v144.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v71);
    }
    sub_64640((__int64 *)v122.m128i_i64[0], (__int64 *)&v141, v65, v66, v67, v68);
    sub_317C60(v123.m128i_i64[0], &v143);
    if ( v143 )
    {
      v144.m128i_i64[0] = 0;
      qfree(v143);
    }
    qfree((__int64)v141);
    v125 = &v134;
    if ( (unsigned __int8)sub_64780(v122.m128i_i64[0], &v134) || (unsigned __int8)sub_318470(v123.m128i_i64[0], &v136) )
    {
      v14 = 0;
LABEL_76:
      if ( v132 )
      {
        *(_QWORD *)&v133 = 0;
        qfree(v132);
      }
      goto LABEL_37;
    }
    v126.m128i_i64[1] = *(_QWORD *)(a1 + 320);
    v73 = *(_QWORD *)(v126.m128i_i64[1] + 1840);
    v126.m128i_i64[0] = v73;
    if ( v73 )
    {
      v75 = qalloc_or_throw(88 * v73, (__int64)&v136, v72, v73);
      v113 = v75 + 8;
      v114 = 0;
      v115 = -8 - v75;
      do
      {
        v127 = (__int64 *)(v113 - 8);
        v124.m128i_i64[0] = v75;
        v116 = (int *)(*(_QWORD *)(v126.m128i_i64[1] + 1832) + v115 + v113);
        v117 = *v116;
        *(_WORD *)(v113 + 32) = 0;
        *(_WORD *)(v113 + 34) = 0;
        *(_DWORD *)(v113 - 8) = v117;
        *(_DWORD *)(v113 + 36) = -1;
        *(_QWORD *)(v113 + 40) = 0;
        *(_WORD *)(v113 + 48) = 0;
        *(_WORD *)(v113 + 50) = 0;
        *(_DWORD *)(v113 + 52) = -1;
        *(_QWORD *)(v113 + 56) = 0;
        *(_WORD *)(v113 + 64) = 0;
        *(_WORD *)(v113 + 66) = 0;
        *(_DWORD *)(v113 + 68) = -1;
        *(_QWORD *)(v113 + 72) = 0;
        *(_OWORD *)(v113 + 8) = 0;
        sub_1253A0(v113, v116 + 2);
        v75 = v124.m128i_i64[0];
        ++v114;
        v113 += 88;
      }
      while ( v126.m128i_i64[0] != v114 );
      v118 = _mm_loadl_epi64(&v126);
      v74 = *(_QWORD *)(a1 + 272);
      v119 = _mm_unpacklo_epi64(v118, v118);
      v124 = v119;
      if ( !v74 )
      {
        *(_QWORD *)(a1 + 272) = v75;
        *(__m128i *)(a1 + 280) = v119;
LABEL_87:
        v84 = 0;
        v85 = 0;
        while ( 1 )
        {
          v94 = 5 * v85;
          v95 = 88 * v85;
          v96 = (int *)(88 * v85 + v75);
          v97 = *v96;
          if ( *v96 )
          {
            v111 = -v97;
            if ( v97 > 0 )
              v111 = *v96;
            if ( (sub_BDFF0(a1, v111) == 0) != v97 < 0 )
            {
LABEL_98:
              v100 = *(_QWORD *)(a1 + 272);
LABEL_99:
              v102 = v95 + v100;
              sub_11CDA0(v102 + 72);
              sub_11CDA0(v102 + 56);
              sub_11CDA0(v102 + 40);
              memmove(
                (void *)v102,
                (const void *)(v102 + 88),
                *(_QWORD *)(a1 + 272) + 88LL * *(_QWORD *)(a1 + 280) - v102 - 88);
              v103 = *(_QWORD *)(a1 + 280) - 1LL;
              v85 = v84;
              *(_QWORD *)(a1 + 280) = v103;
              if ( v84 >= v103 )
                goto LABEL_100;
              goto LABEL_93;
            }
            v96 = (int *)(v95 + *(_QWORD *)(a1 + 272));
          }
          if ( (_QWORD)v131 )
          {
            v143 = 0;
            v141 = &off_4DC180;
            v146 = &v130;
            v147 = a1 + 64;
            v98 = *(_QWORD *)(a1 + 328);
            v144 = 0u;
            v145 = 0;
            v142 = v98;
            v99 = sub_11E900(v96 + 2, &v141, v94, v96, v81, v82);
            v100 = *(_QWORD *)(a1 + 272);
            v96 = (int *)(v100 + v95);
            if ( v99 )
              goto LABEL_99;
          }
          v101 = v96 + 2;
          if ( !(unsigned __int8)sub_BDA00(a1, (__int64)(v96 + 2), v94, (__int64)v96, v81, v82) )
            goto LABEL_98;
          sub_127A20(v138, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v101, 1);
          sub_127A20(&v141, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v101, 0);
          sub_64640(v138, (__int64 *)&v141, v86, v87, v88, v89);
          sub_317C60(&v139, v64);
          sub_64640((__int64 *)v122.m128i_i64[0], (__int64 *)&v141, v90, v91, v92, v93);
          sub_317C60(v123.m128i_i64[0], v64);
          sub_64280((__int64 *)v122.m128i_i64[0], v138);
          sub_316CB0(v123.m128i_i64[0], &v139);
          if ( v143 )
          {
            v144.m128i_i64[0] = 0;
            qfree(v143);
          }
          qfree((__int64)v141);
          if ( v139 )
          {
            v140.m128i_i64[0] = 0;
            qfree(v139);
          }
          ++v84;
          qfree(v138[0]);
          v85 = v84;
          if ( (unsigned __int64)v84 >= *(_QWORD *)(a1 + 280) )
            goto LABEL_100;
LABEL_93:
          v75 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    else
    {
      v74 = *(_QWORD *)(a1 + 272);
      if ( !v74 )
      {
        *(_OWORD *)(a1 + 280) = 0;
LABEL_100:
        v104 = *(__int64 **)(a1 + 216);
        sub_648D0(v104 + 17, (__int64 *)v122.m128i_i64[0]);
        v107 = *(_QWORD *)(v122.m128i_i64[0] + 24);
        v108 = nullptr;
        if ( v107 )
        {
          v108 = (void *)qalloc_or_throw(16 * v107, v122.m128i_i64[0], v105, v106);
          memcpy(v108, *(const void **)(v122.m128i_i64[0] + 16), 16 * v107);
        }
        v109 = v104[19];
        v110 = _mm_unpacklo_epi64((__m128i)v107, (__m128i)v107);
        if ( v109 )
        {
          v104[20] = 0;
          v122 = v110;
          qfree(v109);
          v110 = _mm_load_si128(&v122);
        }
        v104[19] = (__int64)v108;
        *((__m128i *)v104 + 10) = v110;
        sub_64280((__int64 *)(v121 + 136), (__int64 *)(v121 + 96));
        sub_316CB0(v121 + 152, v121 + 112);
        sub_316CB0(v121 + 152, &v132);
        *(_DWORD *)(v121 + 280) |= 4u;
        sub_BE340(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), v121, *(const char **)(*(_QWORD *)(a1 + 320) + 408LL), 0);
        v14 = 1;
        goto LABEL_76;
      }
      v75 = 0;
      v124 = 0;
    }
    v76 = *(_QWORD *)(a1 + 280);
    if ( v76 )
    {
      v126.m128i_i64[1] = v75;
      v77 = 0;
      v78 = v76;
      v127 = &v143;
      v79 = 0;
      do
      {
        v80 = v74 + v77;
        ++v79;
        v77 += 88;
        sub_11CDA0(v80 + 72);
        sub_11CDA0(v80 + 56);
        sub_11CDA0(v80 + 40);
        v74 = *(_QWORD *)(a1 + 272);
      }
      while ( v78 != v79 );
      v75 = v126.m128i_i64[1];
      v64 = v127;
    }
    *(_QWORD *)(a1 + 280) = 0;
    v126.m128i_i64[1] = v75;
    qfree(v74);
    v75 = v126.m128i_i64[1];
    v83 = _mm_load_si128(&v124);
    v26 = v126.m128i_i64[0] == 0;
    *(_QWORD *)(a1 + 272) = v126.m128i_i64[1];
    *(__m128i *)(a1 + 280) = v83;
    if ( !v26 )
      goto LABEL_87;
    goto LABEL_100;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v33 = 16 * v24;
      v34 = v33 + *(_QWORD *)(v121 + 48);
      if ( *(_BYTE *)v34 != 9 )
      {
        if ( !under_debugger )
          sub_383060(50055);
LABEL_120:
        BUG();
      }
      v35 = *(int *)(*(_QWORD *)(v34 + 8) + 16LL);
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v35);
      if ( v36 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) != 0
        || (unsigned __int8)sub_BE200(a1, v35, v8, v25, v6, v7)
        || *(_DWORD *)(a1 + 416) )
      {
        v37 = *(int *)(v34 + 4);
        v38 = sub_138140(*(_QWORD *)(a1 + 328), v37, 1);
        v39 = v38;
        if ( v38 == -1 )
          goto LABEL_36;
        *(_QWORD *)&v133 = v37;
        v132 = v38;
        sub_316BB0(a1 + 192, &v132);
        sub_11CDA0(v34);
        *(_BYTE *)v34 = 1;
        *(_DWORD *)(v34 + 8) = v39;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v35) = v34;
        goto LABEL_28;
      }
      v46 = *(_QWORD *)(v121 + 48) + v33;
      sub_11CDA0(v46);
      v125 = *(__int64 **)(v121 + 56);
      memmove((void *)v46, (const void *)(v46 + 16), *(_QWORD *)(v121 + 48) + 16LL * (_QWORD)v125 - v46 - 16);
      v24 = v23;
      v125 = *(__int64 **)(v121 + 56);
      v47 = (unsigned __int64)v125 - 1;
      *(_QWORD *)(v121 + 56) = (char *)v125 - 1;
      if ( v23 >= v47 )
        goto LABEL_51;
    }
    v27 = v33 + *(_QWORD *)(v121 + 48);
    LODWORD(v125) = *(_DWORD *)(*(_QWORD *)(v34 + 8) + 16LL);
    sub_125180(v27);
    v29 = v131;
    v30 = v130;
    v31 = (int)v125;
    if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)(v131 + 1) )
    {
      v130 = qvector_reserve((__int64)&v130, v130, v131 + 1, 4);
      v30 = v130;
      v31 = (int)v125;
      v29 = v131;
    }
    *(_DWORD *)(v30 + 4 * v29) = v31;
    v32 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v131 = v131 + 1;
    if ( *(int *)(v32 + 64) <= 1 || !(unsigned __int8)sub_120170(v36, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 1504LL)) )
      goto LABEL_28;
    if ( *(_DWORD *)(a1 + 420) != -1 )
    {
      if ( !under_debugger )
        sub_383060(51672);
      goto LABEL_120;
    }
    v42 = *(_QWORD *)(a1 + 328);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(v36 + 8);
    v43 = *(int *)(v34 + 4);
    v44 = sub_138140(v42, v43, 1);
    v45 = v44;
    if ( v44 == -1 )
      break;
    v138[1] = v43;
    v138[0] = v44;
    sub_316BB0(a1 + 192, v138);
    *(_DWORD *)(a1 + 424) = v45;
LABEL_28:
    if ( *(_QWORD *)(v121 + 56) == 1 )
    {
      v40 = *(int *)(v34 + 4);
      if ( v40 != get_tinfo_size() )
      {
        tinfo_size = get_tinfo_size();
        sub_12AB50(v34, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), tinfo_size, 1);
      }
    }
    *(_DWORD *)(a1 + 228) += *(_DWORD *)(v34 + 4);
    sub_127FE0(
      *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL),
      v123.m128i_i64[0],
      v34,
      0,
      v28,
      v31,
      v120,
      v121,
      v122.m128i_i32[0],
      v122.m128i_i32[2],
      v123.m128i_i64[0]);
    v24 = ++v23;
    if ( (unsigned __int64)v23 >= *(_QWORD *)(v121 + 56) )
      goto LABEL_51;
  }
  *(_DWORD *)(a1 + 424) = -1;
LABEL_36:
  v14 = 0;
LABEL_37:
  if ( v130 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v130);
  }
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136);
  }
  qfree(v134);
LABEL_7:
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  return v14;
}
