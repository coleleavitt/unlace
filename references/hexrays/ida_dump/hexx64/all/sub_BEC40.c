__int64 __fastcall sub_BEC40(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned int v11; // r14d
  int *v13; // rbp
  int *v14; // r13
  _BYTE *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // ebp
  __int64 v22; // rdi
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // r13
  int v35; // eax
  int v36; // r15d
  __int64 v37; // r12
  unsigned int tinfo_size; // eax
  __int64 v39; // rdi
  __int64 v40; // r15
  int v41; // eax
  int v42; // r12d
  __int64 v43; // r15
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 *v48; // rcx
  int v49; // ebp
  __int64 *v50; // r13
  __int64 v51; // rax
  __m128i v52; // xmm1
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r12
  __m128i v57; // xmm1
  __int64 v58; // rax
  unsigned __int64 v59; // rbp
  unsigned __int64 v60; // r12
  __int64 *v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // rax
  unsigned __int64 v67; // rbp
  unsigned __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // rbp
  __int64 v75; // r13
  __int64 v76; // r12
  __int64 v77; // r8
  __int64 v78; // r9
  __m128i v79; // xmm3
  int v80; // ebp
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // r9d
  __int64 v90; // rdx
  __int64 v91; // r14
  int *v92; // rcx
  int v93; // r12d
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // r12
  _DWORD *v97; // r12
  __int64 v98; // r12
  unsigned __int64 v99; // rdx
  __int64 *v100; // rbp
  unsigned __int64 v101; // r12
  void *v102; // r13
  __int64 v103; // rdi
  __m128i v104; // xmm0
  int v105; // esi
  __int64 v106; // rdi
  __int64 v107; // r14
  __int64 v108; // rbp
  __int64 v109; // r12
  int *v110; // rsi
  int v111; // eax
  __m128i v112; // xmm0
  __m128i v113; // xmm0
  __int64 v114; // [rsp+8h] [rbp-1A0h]
  __m128i v115; // [rsp+10h] [rbp-198h] BYREF
  __m128i v116; // [rsp+20h] [rbp-188h] BYREF
  __m128i v117; // [rsp+30h] [rbp-178h] BYREF
  __int64 *v118; // [rsp+40h] [rbp-168h]
  __m128i v119; // [rsp+48h] [rbp-160h] BYREF
  __int64 *v120; // [rsp+58h] [rbp-150h]
  int *v121; // [rsp+60h] [rbp-148h] BYREF
  __int128 v122; // [rsp+68h] [rbp-140h]
  __int64 v123; // [rsp+80h] [rbp-128h] BYREF
  __int128 v124; // [rsp+88h] [rbp-120h]
  __int64 v125; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v126; // [rsp+A8h] [rbp-100h]
  __int64 v127; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v128; // [rsp+C8h] [rbp-E0h]
  __int64 v129; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v130; // [rsp+D8h] [rbp-D0h]
  __int64 v131[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v132; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v133; // [rsp+108h] [rbp-A0h]
  __int64 (__fastcall **v134)(); // [rsp+120h] [rbp-88h] BYREF
  __int64 v135; // [rsp+128h] [rbp-80h]
  __int64 v136; // [rsp+130h] [rbp-78h] BYREF
  __m128i v137; // [rsp+138h] [rbp-70h] BYREF
  char v138; // [rsp+148h] [rbp-60h]
  __int64 *v139; // [rsp+150h] [rbp-58h]
  __int64 v140; // [rsp+158h] [rbp-50h]
  unsigned __int64 v141; // [rsp+168h] [rbp-40h]

  v115.m128i_i64[0] = a2;
  v141 = __readfsqword(0x28u);
  v114 = j__qalloc_or_throw(312);
  sub_BE490(v114, (__int64 *)(*(_QWORD *)(a1 + 320) + 1520LL));
  *(_QWORD *)(a1 + 216) = v114;
  v5 = *(unsigned int *)(v114 + 20);
  if ( !(_DWORD)v5 )
    *(_DWORD *)(v114 + 20) = 112;
  v121 = nullptr;
  v122 = 0;
  v6 = *(_QWORD *)(v114 + 32);
  if ( (int)v6 <= 0 )
  {
    v106 = *(_QWORD *)(a1 + 248);
    v127 = 0;
    v128 = 0;
    v129 = 0;
    *(_QWORD *)(a1 + 240) = 0;
    v130 = 0;
    if ( v106 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v118 = &v127;
      qfree(v106);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    v7 = 0;
    v8 = 5LL * (unsigned int)(v6 - 1) + 5;
    v9 = (unsigned int)(v6 - 1);
    v10 = 16 * v8;
    do
    {
      v11 = sub_BDAD0(a1, v7 + *(_QWORD *)(v114 + 24), (__int64)&v121);
      if ( !(_BYTE)v11 )
        goto LABEL_7;
      v7 += 80;
    }
    while ( v10 != v7 );
    v13 = v121;
    v127 = 0;
    v128 = 0;
    v14 = &v121[v122];
    v130 = 0;
    v129 = 0;
    if ( v121 != v14 )
    {
      do
      {
        while ( 1 )
        {
          v15 = *(_BYTE **)(*(_QWORD *)(a1 + 64) + 8LL * *v13);
          if ( *v15 == 4 )
            break;
          if ( v14 == ++v13 )
            goto LABEL_15;
        }
        v118 = &v127;
        sub_123EA0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), &v127, v15, 0, 4294901760LL);
        ++v13;
      }
      while ( v14 != v13 );
    }
LABEL_15:
    v16 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 240) = 0;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v118 = &v127;
      qfree(v16);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    v17 = 0;
    v18 = 16 * (5 * v9 + 5);
    do
    {
      v19 = *(_QWORD *)(a1 + 328);
      v134 = nullptr;
      v135 = 0;
      v136 = 0;
      v137 = 0;
      sub_123EA0(*(_QWORD *)(v19 + 520), &v134, v17 + *(_QWORD *)(v114 + 24), 0, 4294901760LL);
      sub_64280((__int64 *)(a1 + 232), (__int64 *)&v134);
      v118 = &v127;
      sub_316CB0(a1 + 248, &v136);
      v20 = *(_QWORD *)(*(_QWORD *)(v114 + 24) + v17 + 24);
      v118 = &v127;
      if ( (get_tinfo_property(v20, 2) & 0x40) != 0 )
      {
        v118 = &v127;
        sub_64280(&v127, (__int64 *)&v134);
        sub_316CB0(&v129, &v136);
      }
      if ( v136 )
      {
        v137.m128i_i64[0] = 0;
        qfree(v136);
      }
      v17 += 80;
      qfree(v134);
    }
    while ( v17 != v18 );
  }
  v21 = 0;
  v22 = 0;
  *(_DWORD *)(a1 + 228) = 0;
  v23 = v114 + 96;
  v24 = *(_QWORD *)(v114 + 56) == 0;
  v123 = 0;
  v116.m128i_i64[0] = v114 + 96;
  v124 = 0;
  if ( v24 )
  {
LABEL_51:
    v125 = 0;
    v126 = 0;
    v45 = *(_QWORD *)(v115.m128i_i64[0] + 16);
    *(_QWORD *)(v115.m128i_i64[0] + 8) = 0;
    if ( v45 )
    {
      v46 = v115.m128i_i64[0];
      v118 = &v127;
      *(_QWORD *)(v115.m128i_i64[0] + 24) = 0;
      qfree(v45);
      *(_QWORD *)(v46 + 16) = 0;
      *(_QWORD *)(v46 + 32) = 0;
    }
    v47 = 0;
    v48 = &v127;
    v24 = *(_QWORD *)(a1 + 48) == 0;
    v119.m128i_i32[0] = 0;
    v117.m128i_i64[0] = (__int64)&v127;
    if ( !v24 )
    {
      do
      {
        v5 = 3 * v47;
        v49 = 0;
        v50 = (__int64 *)(*(_QWORD *)(a1 + 40) + 24 * v47);
        v51 = 0;
        if ( v50[1] )
        {
          do
          {
            v5 = *v50;
            v53 = *(_QWORD *)(*v50 + 8 * v51);
            if ( v53 )
            {
              v54 = *(_QWORD *)(*v50 + 8 * v51);
              v55 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL);
              v118 = (__int64 *)v117.m128i_i64[0];
              sub_127A20(v131, v55, v54, 0);
              sub_64280((__int64 *)v115.m128i_i64[0], v131);
              v118 = &v132;
              sub_316CB0(v115.m128i_i64[0] + 16, &v132);
              sub_127A20(&v134, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v53, 1);
              sub_648D0(v131, (__int64 *)&v134);
              v56 = v136;
              v136 = 0;
              v57 = _mm_loadu_si128(&v137);
              v137 = 0;
              if ( v132 )
              {
                v116 = v57;
                v133.m128i_i64[0] = 0;
                qfree(v132);
                v52 = _mm_load_si128(&v116);
                v132 = v56;
                v133 = v52;
                if ( v136 )
                {
                  v137.m128i_i64[0] = 0;
                  qfree(v136);
                }
              }
              else
              {
                v132 = v56;
                v133 = v57;
              }
              qfree(v134);
              sub_64280((__int64 *)v115.m128i_i64[0], v131);
              sub_316CB0(&v125, v118);
              if ( v132 )
              {
                v133.m128i_i64[0] = 0;
                qfree(v132);
              }
              qfree(v131[0]);
            }
            v51 = ++v49;
          }
          while ( v49 < (unsigned __int64)v50[1] );
        }
        v47 = ++v119.m128i_i32[0];
      }
      while ( (unsigned __int64)v119.m128i_i32[0] < *(_QWORD *)(a1 + 48) );
    }
    v58 = *(_QWORD *)(a1 + 328);
    v134 = nullptr;
    v135 = 0;
    v136 = 0;
    v137 = 0;
    v59 = *(_QWORD *)(v58 + 536);
    v60 = *(_QWORD *)(v58 + 544);
    if ( v59 + v60 - 1 >= v59 )
    {
      v136 = qvector_reserve(&v136, 0, 1, 16);
      v5 = 16 * v137.m128i_i64[0];
      *(__m128i *)(v136 + 16 * v137.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v60);
    }
    sub_64640((__int64 *)v115.m128i_i64[0], (__int64 *)&v134, v5, (__int64)v48, v3, v4);
    v61 = &v136;
    v116.m128i_i64[0] = v115.m128i_i64[0] + 16;
    sub_317C60(v115.m128i_i64[0] + 16, &v136);
    if ( v136 )
    {
      v137.m128i_i64[0] = 0;
      qfree(v136);
    }
    qfree(v134);
    v66 = *(_QWORD *)(a1 + 328);
    v134 = nullptr;
    v135 = 0;
    v136 = 0;
    v137 = 0;
    v67 = *(_QWORD *)(v66 + 696);
    v68 = *(_QWORD *)(v66 + 704);
    if ( v67 + v68 - 1 >= v67 )
    {
      v136 = qvector_reserve(&v136, 0, 1, 16);
      v62 = 16 * v137.m128i_i64[0];
      *(__m128i *)(v136 + 16 * v137.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v67, (__m128i)v68);
    }
    sub_64640((__int64 *)v115.m128i_i64[0], (__int64 *)&v134, v62, v63, v64, v65);
    sub_317C60(v116.m128i_i64[0], &v136);
    if ( v136 )
    {
      v137.m128i_i64[0] = 0;
      qfree(v136);
    }
    qfree(v134);
    v118 = &v127;
    if ( (unsigned __int8)sub_64780(v115.m128i_i64[0], &v127) || (unsigned __int8)sub_318470(v116.m128i_i64[0], &v129) )
    {
      v11 = 0;
LABEL_76:
      if ( v125 )
      {
        *(_QWORD *)&v126 = 0;
        qfree(v125);
      }
      goto LABEL_37;
    }
    v119.m128i_i64[1] = *(_QWORD *)(a1 + 320);
    v69 = *(_QWORD *)(v119.m128i_i64[1] + 1840);
    v119.m128i_i64[0] = v69;
    if ( v69 )
    {
      v71 = qalloc_or_throw(88 * v69);
      v107 = v71 + 8;
      v108 = 0;
      v109 = -8 - v71;
      do
      {
        v120 = (__int64 *)(v107 - 8);
        v117.m128i_i64[0] = v71;
        v110 = (int *)(*(_QWORD *)(v119.m128i_i64[1] + 1832) + v109 + v107);
        v111 = *v110;
        *(_WORD *)(v107 + 32) = 0;
        *(_WORD *)(v107 + 34) = 0;
        *(_DWORD *)(v107 - 8) = v111;
        *(_DWORD *)(v107 + 36) = -1;
        *(_QWORD *)(v107 + 40) = 0;
        *(_WORD *)(v107 + 48) = 0;
        *(_WORD *)(v107 + 50) = 0;
        *(_DWORD *)(v107 + 52) = -1;
        *(_QWORD *)(v107 + 56) = 0;
        *(_WORD *)(v107 + 64) = 0;
        *(_WORD *)(v107 + 66) = 0;
        *(_DWORD *)(v107 + 68) = -1;
        *(_QWORD *)(v107 + 72) = 0;
        *(_OWORD *)(v107 + 8) = 0;
        sub_1253A0(v107, v110 + 2);
        v71 = v117.m128i_i64[0];
        ++v108;
        v107 += 88;
      }
      while ( v119.m128i_i64[0] != v108 );
      v112 = _mm_loadl_epi64(&v119);
      v70 = *(_QWORD *)(a1 + 272);
      v113 = _mm_unpacklo_epi64(v112, v112);
      v117 = v113;
      if ( !v70 )
      {
        *(_QWORD *)(a1 + 272) = v71;
        *(__m128i *)(a1 + 280) = v113;
LABEL_87:
        v80 = 0;
        v81 = 0;
        while ( 1 )
        {
          v90 = 5 * v81;
          v91 = 88 * v81;
          v92 = (int *)(88 * v81 + v71);
          v93 = *v92;
          if ( *v92 )
          {
            v105 = -v93;
            if ( v93 > 0 )
              v105 = *v92;
            if ( (sub_BDFF0(a1, v105) == 0) != v93 < 0 )
            {
LABEL_98:
              v96 = *(_QWORD *)(a1 + 272);
LABEL_99:
              v98 = v91 + v96;
              sub_11CDA0(v98 + 72);
              sub_11CDA0(v98 + 56);
              sub_11CDA0(v98 + 40);
              memmove(
                (void *)v98,
                (const void *)(v98 + 88),
                *(_QWORD *)(a1 + 272) + 88LL * *(_QWORD *)(a1 + 280) - v98 - 88);
              v99 = *(_QWORD *)(a1 + 280) - 1LL;
              v81 = v80;
              *(_QWORD *)(a1 + 280) = v99;
              if ( v80 >= v99 )
                goto LABEL_100;
              goto LABEL_93;
            }
            v92 = (int *)(v91 + *(_QWORD *)(a1 + 272));
          }
          if ( (_QWORD)v124 )
          {
            v136 = 0;
            v134 = &off_4DC180;
            v139 = &v123;
            v140 = a1 + 64;
            v94 = *(_QWORD *)(a1 + 328);
            v137 = 0u;
            v138 = 0;
            v135 = v94;
            v95 = sub_11E900(v92 + 2, &v134, v90, v92, v77, v78);
            v96 = *(_QWORD *)(a1 + 272);
            v92 = (int *)(v96 + v91);
            if ( v95 )
              goto LABEL_99;
          }
          v97 = v92 + 2;
          if ( !(unsigned __int8)sub_BDA00(a1, (__int64)(v92 + 2), v90, (__int64)v92, v77, v78) )
            goto LABEL_98;
          sub_127A20(v131, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v97, 1);
          sub_127A20(&v134, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v97, 0);
          sub_64640(v131, (__int64 *)&v134, v82, v83, v84, v85);
          sub_317C60(&v132, v61);
          sub_64640((__int64 *)v115.m128i_i64[0], (__int64 *)&v134, v86, v87, v88, v89);
          sub_317C60(v116.m128i_i64[0], v61);
          sub_64280((__int64 *)v115.m128i_i64[0], v131);
          sub_316CB0(v116.m128i_i64[0], &v132);
          if ( v136 )
          {
            v137.m128i_i64[0] = 0;
            qfree(v136);
          }
          qfree(v134);
          if ( v132 )
          {
            v133.m128i_i64[0] = 0;
            qfree(v132);
          }
          ++v80;
          qfree(v131[0]);
          v81 = v80;
          if ( (unsigned __int64)v80 >= *(_QWORD *)(a1 + 280) )
            goto LABEL_100;
LABEL_93:
          v71 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    else
    {
      v70 = *(_QWORD *)(a1 + 272);
      if ( !v70 )
      {
        *(_OWORD *)(a1 + 280) = 0;
LABEL_100:
        v100 = *(__int64 **)(a1 + 216);
        sub_648D0(v100 + 17, (__int64 *)v115.m128i_i64[0]);
        v101 = *(_QWORD *)(v115.m128i_i64[0] + 24);
        v102 = nullptr;
        if ( v101 )
        {
          v102 = (void *)qalloc_or_throw(16 * v101);
          memcpy(v102, *(const void **)(v115.m128i_i64[0] + 16), 16 * v101);
        }
        v103 = v100[19];
        v104 = _mm_unpacklo_epi64((__m128i)v101, (__m128i)v101);
        if ( v103 )
        {
          v100[20] = 0;
          v115 = v104;
          qfree(v103);
          v104 = _mm_load_si128(&v115);
        }
        v100[19] = (__int64)v102;
        *((__m128i *)v100 + 10) = v104;
        sub_64280((__int64 *)(v114 + 136), (__int64 *)(v114 + 96));
        sub_316CB0(v114 + 152, v114 + 112);
        sub_316CB0(v114 + 152, &v125);
        *(_DWORD *)(v114 + 280) |= 4u;
        sub_BE340(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), v114, *(const char **)(*(_QWORD *)(a1 + 320) + 408LL), 0);
        v11 = 1;
        goto LABEL_76;
      }
      v71 = 0;
      v117 = 0;
    }
    v72 = *(_QWORD *)(a1 + 280);
    if ( v72 )
    {
      v119.m128i_i64[1] = v71;
      v73 = 0;
      v74 = v72;
      v120 = &v136;
      v75 = 0;
      do
      {
        v76 = v70 + v73;
        ++v75;
        v73 += 88;
        sub_11CDA0(v76 + 72);
        sub_11CDA0(v76 + 56);
        sub_11CDA0(v76 + 40);
        v70 = *(_QWORD *)(a1 + 272);
      }
      while ( v74 != v75 );
      v71 = v119.m128i_i64[1];
      v61 = v120;
    }
    *(_QWORD *)(a1 + 280) = 0;
    v119.m128i_i64[1] = v71;
    qfree(v70);
    v71 = v119.m128i_i64[1];
    v79 = _mm_load_si128(&v117);
    v24 = v119.m128i_i64[0] == 0;
    *(_QWORD *)(a1 + 272) = v119.m128i_i64[1];
    *(__m128i *)(a1 + 280) = v79;
    if ( !v24 )
      goto LABEL_87;
    goto LABEL_100;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = 16 * v22;
      v31 = v30 + *(_QWORD *)(v114 + 48);
      if ( *(_BYTE *)v31 != 9 )
      {
        if ( !under_debugger )
          sub_383060(50055);
LABEL_120:
        BUG();
      }
      v32 = *(int *)(*(_QWORD *)(v31 + 8) + 16LL);
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v32);
      if ( v33 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) != 0
        || (unsigned __int8)sub_BE200(a1, v32, v5, v23, v3, v4)
        || *(_DWORD *)(a1 + 416) )
      {
        v34 = *(int *)(v31 + 4);
        v35 = sub_138140(*(_QWORD *)(a1 + 328), v34, 1);
        v36 = v35;
        if ( v35 == -1 )
          goto LABEL_36;
        *(_QWORD *)&v126 = v34;
        v125 = v35;
        sub_316BB0(a1 + 192, &v125);
        sub_11CDA0(v31);
        *(_BYTE *)v31 = 1;
        *(_DWORD *)(v31 + 8) = v36;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v32) = v31;
        goto LABEL_28;
      }
      v43 = *(_QWORD *)(v114 + 48) + v30;
      sub_11CDA0(v43);
      v118 = *(__int64 **)(v114 + 56);
      memmove((void *)v43, (const void *)(v43 + 16), *(_QWORD *)(v114 + 48) + 16LL * (_QWORD)v118 - v43 - 16);
      v22 = v21;
      v118 = *(__int64 **)(v114 + 56);
      v44 = (unsigned __int64)v118 - 1;
      *(_QWORD *)(v114 + 56) = (char *)v118 - 1;
      if ( v21 >= v44 )
        goto LABEL_51;
    }
    v25 = v30 + *(_QWORD *)(v114 + 48);
    LODWORD(v118) = *(_DWORD *)(*(_QWORD *)(v31 + 8) + 16LL);
    sub_125180(v25);
    v26 = v124;
    v27 = v123;
    v28 = (int)v118;
    if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
    {
      v123 = qvector_reserve(&v123, v123, v124 + 1, 4);
      v27 = v123;
      v28 = (int)v118;
      v26 = v124;
    }
    *(_DWORD *)(v27 + 4 * v26) = v28;
    v29 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v124 = v124 + 1;
    if ( *(int *)(v29 + 64) <= 1 || !(unsigned __int8)sub_120170(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 1504LL)) )
      goto LABEL_28;
    if ( *(_DWORD *)(a1 + 420) != -1 )
    {
      if ( !under_debugger )
        sub_383060(51672);
      goto LABEL_120;
    }
    v39 = *(_QWORD *)(a1 + 328);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(v33 + 8);
    v40 = *(int *)(v31 + 4);
    v41 = sub_138140(v39, v40, 1);
    v42 = v41;
    if ( v41 == -1 )
      break;
    v131[1] = v40;
    v131[0] = v41;
    sub_316BB0(a1 + 192, v131);
    *(_DWORD *)(a1 + 424) = v42;
LABEL_28:
    if ( *(_QWORD *)(v114 + 56) == 1 )
    {
      v37 = *(int *)(v31 + 4);
      if ( v37 != get_tinfo_size(0, *(_QWORD *)(v114 + 72), 0) )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v114 + 72), 0);
        sub_12AB50(v31, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), tinfo_size, 1);
      }
    }
    *(_DWORD *)(a1 + 228) += *(_DWORD *)(v31 + 4);
    sub_127FE0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v116.m128i_i64[0], v31, 0);
    v22 = ++v21;
    if ( (unsigned __int64)v21 >= *(_QWORD *)(v114 + 56) )
      goto LABEL_51;
  }
  *(_DWORD *)(a1 + 424) = -1;
LABEL_36:
  v11 = 0;
LABEL_37:
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v129);
  }
  qfree(v127);
LABEL_7:
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
  return v11;
}
