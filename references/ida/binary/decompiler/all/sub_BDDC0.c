__int64 __fastcall sub_BDDC0(__int64 a1, __int64 a2)
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
  int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // r13
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r15d
  __int64 v40; // r12
  unsigned int tinfo_size; // eax
  __int64 v42; // rdi
  __int64 v43; // r15
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // r12d
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 *v55; // rcx
  int v56; // ebp
  __int64 *v57; // r13
  __int64 v58; // rax
  __m128i v59; // xmm1
  __int64 v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // r12
  __m128i v64; // xmm1
  __int64 v65; // rax
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // r12
  __int64 *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rax
  unsigned __int64 v74; // rbp
  unsigned __int64 v75; // r12
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rbp
  __int64 v81; // r13
  __int64 v82; // r12
  __int64 v83; // r8
  __int64 v84; // r9
  __m128i v85; // xmm3
  int v86; // ebp
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  int v91; // r9d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // r9d
  __int64 v96; // rdx
  __int64 v97; // r14
  int *v98; // rcx
  int v99; // r12d
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // r12
  _DWORD *v103; // r12
  __int64 v104; // r12
  unsigned __int64 v105; // rdx
  __int64 *v106; // rbp
  unsigned __int64 v107; // r12
  void *v108; // r13
  __m128i v109; // xmm0
  int v110; // esi
  __int64 v111; // rdi
  __int64 v112; // r14
  __int64 v113; // rbp
  __int64 v114; // r12
  int *v115; // rsi
  int v116; // eax
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  __int64 v119; // [rsp+0h] [rbp-1A8h]
  __int64 v120; // [rsp+8h] [rbp-1A0h]
  __m128i v121; // [rsp+10h] [rbp-198h] BYREF
  __m128i v122; // [rsp+20h] [rbp-188h] BYREF
  __m128i v123; // [rsp+30h] [rbp-178h] BYREF
  __int64 *v124; // [rsp+40h] [rbp-168h]
  __m128i v125; // [rsp+48h] [rbp-160h] BYREF
  __int64 *v126; // [rsp+58h] [rbp-150h]
  int *v127; // [rsp+60h] [rbp-148h] BYREF
  __int128 v128; // [rsp+68h] [rbp-140h]
  __int64 v129; // [rsp+80h] [rbp-128h] BYREF
  __int128 v130; // [rsp+88h] [rbp-120h]
  __int64 v131; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v132; // [rsp+A8h] [rbp-100h]
  __int64 v133; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v134; // [rsp+C8h] [rbp-E0h]
  __int64 v135; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v136; // [rsp+D8h] [rbp-D0h]
  __int64 v137[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v138; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v139; // [rsp+108h] [rbp-A0h]
  __int64 (__fastcall **v140)(); // [rsp+120h] [rbp-88h] BYREF
  __int64 v141; // [rsp+128h] [rbp-80h]
  __int64 v142; // [rsp+130h] [rbp-78h] BYREF
  __m128i v143; // [rsp+138h] [rbp-70h] BYREF
  char v144; // [rsp+148h] [rbp-60h]
  __int64 *v145; // [rsp+150h] [rbp-58h]
  __int64 v146; // [rsp+158h] [rbp-50h]
  unsigned __int64 v147; // [rsp+168h] [rbp-40h]

  v121.m128i_i64[0] = a2;
  v147 = __readfsqword(0x28u);
  v120 = j__qalloc_or_throw();
  sub_BD610(v120, (__int64 *)(*(_QWORD *)(a1 + 320) + 1520LL));
  *(_QWORD *)(a1 + 216) = v120;
  v5 = *(unsigned int *)(v120 + 20);
  if ( !(_DWORD)v5 )
    *(_DWORD *)(v120 + 20) = 112;
  v127 = 0;
  v128 = 0;
  v6 = *(_QWORD *)(v120 + 32);
  if ( (int)v6 <= 0 )
  {
    v111 = *(_QWORD *)(a1 + 248);
    v133 = 0;
    v134 = 0;
    v135 = 0;
    *(_QWORD *)(a1 + 240) = 0;
    v136 = 0;
    if ( v111 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      v124 = &v133;
      qfree();
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
      v11 = sub_BCC50(a1, v7 + *(_QWORD *)(v120 + 24), (__int64)&v127);
      if ( !(_BYTE)v11 )
        goto LABEL_7;
      v7 += 80;
    }
    while ( v10 != v7 );
    v13 = v127;
    v133 = 0;
    v134 = 0;
    v14 = &v127[v128];
    v136 = 0;
    v135 = 0;
    if ( v127 != v14 )
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
        v124 = &v133;
        sub_1219A0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), &v133, v15, 0, 4294901760LL);
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
      v124 = &v133;
      qfree();
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    v17 = 0;
    v18 = 16 * (5 * v9 + 5);
    do
    {
      v19 = *(_QWORD *)(a1 + 328);
      v140 = 0;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      sub_1219A0(*(_QWORD *)(v19 + 520), &v140, v17 + *(_QWORD *)(v120 + 24), 0, 4294901760LL);
      sub_63980((__int64 *)(a1 + 232), (__int64 *)&v140);
      sub_313730(a1 + 248, &v142);
      v124 = &v133;
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        v124 = &v133;
        sub_63980(&v133, (__int64 *)&v140);
        sub_313730(&v135, &v142);
      }
      if ( v142 )
      {
        v143.m128i_i64[0] = 0;
        qfree();
      }
      v17 += 80;
      qfree();
    }
    while ( v17 != v18 );
  }
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(a1 + 228) = 0;
  v22 = v120 + 96;
  v23 = *(_QWORD *)(v120 + 56) == 0;
  v129 = 0;
  v122.m128i_i64[0] = v120 + 96;
  v130 = 0;
  if ( v23 )
  {
LABEL_51:
    v131 = 0;
    v132 = 0;
    v52 = *(_QWORD *)(v121.m128i_i64[0] + 16);
    *(_QWORD *)(v121.m128i_i64[0] + 8) = 0;
    if ( v52 )
    {
      v53 = v121.m128i_i64[0];
      v124 = &v133;
      *(_QWORD *)(v121.m128i_i64[0] + 24) = 0;
      qfree();
      *(_QWORD *)(v53 + 16) = 0;
      *(_QWORD *)(v53 + 32) = 0;
    }
    v54 = 0;
    v55 = &v133;
    v23 = *(_QWORD *)(a1 + 48) == 0;
    v125.m128i_i32[0] = 0;
    v123.m128i_i64[0] = (__int64)&v133;
    if ( !v23 )
    {
      do
      {
        v5 = 3 * v54;
        v56 = 0;
        v57 = (__int64 *)(*(_QWORD *)(a1 + 40) + 24 * v54);
        v58 = 0;
        if ( v57[1] )
        {
          do
          {
            v5 = *v57;
            v60 = *(_QWORD *)(*v57 + 8 * v58);
            if ( v60 )
            {
              v61 = *(_QWORD *)(*v57 + 8 * v58);
              v62 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL);
              v124 = (__int64 *)v123.m128i_i64[0];
              sub_125510(v137, v62, v61, 0);
              sub_63980((__int64 *)v121.m128i_i64[0], v137);
              v124 = &v138;
              sub_313730(v121.m128i_i64[0] + 16, &v138);
              sub_125510(&v140, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v60, 1);
              sub_63FD0(v137, (__int64 *)&v140);
              v63 = v142;
              v142 = 0;
              v64 = _mm_loadu_si128(&v143);
              v143 = 0;
              if ( v138 )
              {
                v122 = v64;
                v139.m128i_i64[0] = 0;
                qfree();
                v59 = _mm_load_si128(&v122);
                v138 = v63;
                v139 = v59;
                if ( v142 )
                {
                  v143.m128i_i64[0] = 0;
                  qfree();
                }
              }
              else
              {
                v138 = v63;
                v139 = v64;
              }
              qfree();
              sub_63980((__int64 *)v121.m128i_i64[0], v137);
              sub_313730(&v131, v124);
              if ( v138 )
              {
                v139.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
            }
            v58 = ++v56;
          }
          while ( v56 < (unsigned __int64)v57[1] );
        }
        v54 = ++v125.m128i_i32[0];
      }
      while ( (unsigned __int64)v125.m128i_i32[0] < *(_QWORD *)(a1 + 48) );
    }
    v65 = *(_QWORD *)(a1 + 328);
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v66 = *(_QWORD *)(v65 + 536);
    v67 = *(_QWORD *)(v65 + 544);
    if ( v66 + v67 - 1 >= v66 )
    {
      v142 = qvector_reserve();
      v5 = 16 * v143.m128i_i64[0];
      *(__m128i *)(v142 + 16 * v143.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v66, (__m128i)v67);
    }
    sub_63D40((__int64 *)v121.m128i_i64[0], (__int64 *)&v140, v5, (__int64)v55, v3, v4);
    v68 = &v142;
    v122.m128i_i64[0] = v121.m128i_i64[0] + 16;
    sub_314710(v121.m128i_i64[0] + 16, &v142);
    if ( v142 )
    {
      v143.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    v73 = *(_QWORD *)(a1 + 328);
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v74 = *(_QWORD *)(v73 + 696);
    v75 = *(_QWORD *)(v73 + 704);
    if ( v74 + v75 - 1 >= v74 )
    {
      v142 = qvector_reserve();
      v69 = 16 * v143.m128i_i64[0];
      *(__m128i *)(v142 + 16 * v143.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v75);
    }
    sub_63D40((__int64 *)v121.m128i_i64[0], (__int64 *)&v140, v69, v70, v71, v72);
    sub_314710(v122.m128i_i64[0], &v142);
    if ( v142 )
    {
      v143.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    v124 = &v133;
    if ( (unsigned __int8)sub_63E80(v121.m128i_i64[0], &v133) || (unsigned __int8)sub_314F20(v122.m128i_i64[0], &v135) )
    {
      v11 = 0;
LABEL_76:
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree();
      }
      goto LABEL_37;
    }
    v125.m128i_i64[1] = *(_QWORD *)(a1 + 320);
    v125.m128i_i64[0] = *(_QWORD *)(v125.m128i_i64[1] + 1840);
    if ( v125.m128i_i64[0] )
    {
      v77 = qalloc_or_throw();
      v112 = v77 + 8;
      v113 = 0;
      v114 = -8 - v77;
      do
      {
        v126 = (__int64 *)(v112 - 8);
        v123.m128i_i64[0] = v77;
        v115 = (int *)(*(_QWORD *)(v125.m128i_i64[1] + 1832) + v114 + v112);
        v116 = *v115;
        *(_WORD *)(v112 + 32) = 0;
        *(_WORD *)(v112 + 34) = 0;
        *(_DWORD *)(v112 - 8) = v116;
        *(_DWORD *)(v112 + 36) = -1;
        *(_QWORD *)(v112 + 40) = 0;
        *(_WORD *)(v112 + 48) = 0;
        *(_WORD *)(v112 + 50) = 0;
        *(_DWORD *)(v112 + 52) = -1;
        *(_QWORD *)(v112 + 56) = 0;
        *(_WORD *)(v112 + 64) = 0;
        *(_WORD *)(v112 + 66) = 0;
        *(_DWORD *)(v112 + 68) = -1;
        *(_QWORD *)(v112 + 72) = 0;
        *(_OWORD *)(v112 + 8) = 0;
        sub_122EA0(v112, v115 + 2);
        v77 = v123.m128i_i64[0];
        ++v113;
        v112 += 88;
      }
      while ( v125.m128i_i64[0] != v113 );
      v117 = _mm_loadl_epi64(&v125);
      v76 = *(_QWORD *)(a1 + 272);
      v118 = _mm_unpacklo_epi64(v117, v117);
      v123 = v118;
      if ( !v76 )
      {
        *(_QWORD *)(a1 + 272) = v77;
        *(__m128i *)(a1 + 280) = v118;
LABEL_87:
        v86 = 0;
        v87 = 0;
        while ( 1 )
        {
          v96 = 5 * v87;
          v97 = 88 * v87;
          v98 = (int *)(88 * v87 + v77);
          v99 = *v98;
          if ( *v98 )
          {
            v110 = -v99;
            if ( v99 > 0 )
              v110 = *v98;
            if ( (sub_BD170(a1, v110) == 0) != v99 < 0 )
            {
LABEL_98:
              v102 = *(_QWORD *)(a1 + 272);
LABEL_99:
              v104 = v97 + v102;
              sub_11A960(v104 + 72);
              sub_11A960(v104 + 56);
              sub_11A960(v104 + 40);
              memmove(
                (void *)v104,
                (const void *)(v104 + 88),
                *(_QWORD *)(a1 + 272) + 88LL * *(_QWORD *)(a1 + 280) - v104 - 88);
              v105 = *(_QWORD *)(a1 + 280) - 1LL;
              v87 = v86;
              *(_QWORD *)(a1 + 280) = v105;
              if ( v86 >= v105 )
                goto LABEL_100;
              goto LABEL_93;
            }
            v98 = (int *)(v97 + *(_QWORD *)(a1 + 272));
          }
          if ( (_QWORD)v130 )
          {
            v142 = 0;
            v140 = off_4DB980;
            v145 = &v129;
            v146 = a1 + 64;
            v100 = *(_QWORD *)(a1 + 328);
            v143 = 0u;
            v144 = 0;
            v141 = v100;
            v101 = sub_11C4C0(v98 + 2, &v140, v96, v98, v83, v84);
            v102 = *(_QWORD *)(a1 + 272);
            v98 = (int *)(v102 + v97);
            if ( v101 )
              goto LABEL_99;
          }
          v103 = v98 + 2;
          if ( !(unsigned __int8)sub_BCB80(a1, (__int64)(v98 + 2), v96, (__int64)v98, v83, v84) )
            goto LABEL_98;
          sub_125510(v137, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v103, 1);
          sub_125510(&v140, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v103, 0);
          sub_63D40(v137, (__int64 *)&v140, v88, v89, v90, v91);
          sub_314710(&v138, v68);
          sub_63D40((__int64 *)v121.m128i_i64[0], (__int64 *)&v140, v92, v93, v94, v95);
          sub_314710(v122.m128i_i64[0], v68);
          sub_63980((__int64 *)v121.m128i_i64[0], v137);
          sub_313730(v122.m128i_i64[0], &v138);
          if ( v142 )
          {
            v143.m128i_i64[0] = 0;
            qfree();
          }
          qfree();
          if ( v138 )
          {
            v139.m128i_i64[0] = 0;
            qfree();
          }
          ++v86;
          qfree();
          v87 = v86;
          if ( (unsigned __int64)v86 >= *(_QWORD *)(a1 + 280) )
            goto LABEL_100;
LABEL_93:
          v77 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    else
    {
      v76 = *(_QWORD *)(a1 + 272);
      if ( !v76 )
      {
        *(_OWORD *)(a1 + 280) = 0;
LABEL_100:
        v106 = *(__int64 **)(a1 + 216);
        sub_63FD0(v106 + 17, (__int64 *)v121.m128i_i64[0]);
        v107 = *(_QWORD *)(v121.m128i_i64[0] + 24);
        v108 = 0;
        if ( v107 )
        {
          v108 = (void *)qalloc_or_throw();
          memcpy(v108, *(const void **)(v121.m128i_i64[0] + 16), 16 * v107);
        }
        v109 = _mm_unpacklo_epi64((__m128i)v107, (__m128i)v107);
        if ( v106[19] )
        {
          v106[20] = 0;
          v121 = v109;
          qfree();
          v109 = _mm_load_si128(&v121);
        }
        v106[19] = (__int64)v108;
        *((__m128i *)v106 + 10) = v109;
        sub_63980((__int64 *)(v120 + 136), (__int64 *)(v120 + 96));
        sub_313730(v120 + 152, v120 + 112);
        sub_313730(v120 + 152, &v131);
        *(_DWORD *)(v120 + 280) |= 4u;
        sub_BD4C0(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), v120, *(const char **)(*(_QWORD *)(a1 + 320) + 408LL), 0);
        v11 = 1;
        goto LABEL_76;
      }
      v77 = 0;
      v123 = 0;
    }
    v78 = *(_QWORD *)(a1 + 280);
    if ( v78 )
    {
      v125.m128i_i64[1] = v77;
      v79 = 0;
      v80 = v78;
      v126 = &v142;
      v81 = 0;
      do
      {
        v82 = v76 + v79;
        ++v81;
        v79 += 88;
        sub_11A960(v82 + 72);
        sub_11A960(v82 + 56);
        sub_11A960(v82 + 40);
        v76 = *(_QWORD *)(a1 + 272);
      }
      while ( v80 != v81 );
      v77 = v125.m128i_i64[1];
      v68 = v126;
    }
    *(_QWORD *)(a1 + 280) = 0;
    v125.m128i_i64[1] = v77;
    qfree();
    v77 = v125.m128i_i64[1];
    v85 = _mm_load_si128(&v123);
    v23 = v125.m128i_i64[0] == 0;
    *(_QWORD *)(a1 + 272) = v125.m128i_i64[1];
    *(__m128i *)(a1 + 280) = v85;
    if ( !v23 )
      goto LABEL_87;
    goto LABEL_100;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v29 = 16 * v21;
      v30 = v29 + *(_QWORD *)(v120 + 48);
      if ( *(_BYTE *)v30 != 9 )
      {
        if ( !under_debugger )
          sub_37EA20(50055);
LABEL_120:
        BUG();
      }
      v31 = *(int *)(*(_QWORD *)(v30 + 8) + 16LL);
      v32 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v31);
      if ( v32 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) != 0
        || (unsigned __int8)sub_BD380(a1, v31, v5, v22, v3, v4)
        || *(_DWORD *)(a1 + 416) )
      {
        v33 = *(int *)(v30 + 4);
        v34 = sub_135C40(*(_QWORD *)(a1 + 328), v33, 1);
        v39 = v34;
        if ( v34 == -1 )
          goto LABEL_36;
        *(_QWORD *)&v132 = v33;
        v131 = v34;
        sub_313630(a1 + 192, &v131, v35, v36, v37, v38, v119, v120, v121.m128i_i64[0], v121.m128i_i64[1]);
        sub_11A960(v30);
        *(_BYTE *)v30 = 1;
        *(_DWORD *)(v30 + 8) = v39;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v31) = v30;
        goto LABEL_28;
      }
      v50 = *(_QWORD *)(v120 + 48) + v29;
      sub_11A960(v50);
      v124 = *(__int64 **)(v120 + 56);
      memmove((void *)v50, (const void *)(v50 + 16), *(_QWORD *)(v120 + 48) + 16LL * (_QWORD)v124 - v50 - 16);
      v21 = v20;
      v124 = *(__int64 **)(v120 + 56);
      v51 = (unsigned __int64)v124 - 1;
      *(_QWORD *)(v120 + 56) = (char *)v124 - 1;
      if ( v20 >= v51 )
        goto LABEL_51;
    }
    v24 = v29 + *(_QWORD *)(v120 + 48);
    LODWORD(v124) = *(_DWORD *)(*(_QWORD *)(v30 + 8) + 16LL);
    sub_122C80(v24);
    v25 = v130;
    v26 = v129;
    v27 = (int)v124;
    if ( *((_QWORD *)&v130 + 1) < (unsigned __int64)(v130 + 1) )
    {
      v129 = qvector_reserve();
      v26 = v129;
      v27 = (int)v124;
      v25 = v130;
    }
    *(_DWORD *)(v26 + 4 * v25) = v27;
    v28 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v130 = v130 + 1;
    if ( *(int *)(v28 + 64) <= 1 || !(unsigned __int8)sub_11DD30(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 1504LL)) )
      goto LABEL_28;
    if ( *(_DWORD *)(a1 + 420) != -1 )
    {
      if ( !under_debugger )
        sub_37EA20(51672);
      goto LABEL_120;
    }
    v42 = *(_QWORD *)(a1 + 328);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(v32 + 8);
    v43 = *(int *)(v30 + 4);
    v44 = sub_135C40(v42, v43, 1);
    v49 = v44;
    if ( v44 == -1 )
      break;
    v137[1] = v43;
    v137[0] = v44;
    sub_313630(a1 + 192, v137, v45, v46, v47, v48, v119, v120, v121.m128i_i64[0], v121.m128i_i64[1]);
    *(_DWORD *)(a1 + 424) = v49;
LABEL_28:
    if ( *(_QWORD *)(v120 + 56) == 1 )
    {
      v40 = *(int *)(v30 + 4);
      if ( v40 != get_tinfo_size() )
      {
        tinfo_size = get_tinfo_size();
        sub_128630(v30, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), tinfo_size, 1);
      }
    }
    *(_DWORD *)(a1 + 228) += *(_DWORD *)(v30 + 4);
    sub_125AC0(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 520LL), v122.m128i_i64[0], v30, 0);
    v21 = ++v20;
    if ( (unsigned __int64)v20 >= *(_QWORD *)(v120 + 56) )
      goto LABEL_51;
  }
  *(_DWORD *)(a1 + 424) = -1;
LABEL_36:
  v11 = 0;
LABEL_37:
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree();
  }
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree();
  }
  qfree();
LABEL_7:
  if ( v127 )
  {
    *(_QWORD *)&v128 = 0;
    qfree();
  }
  return v11;
}
