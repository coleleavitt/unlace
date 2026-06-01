void __fastcall sub_9610C0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        double a8,
        __m128 a9)
{
  __m128i *v9; // rdi
  __int64 v10; // r11
  __int64 *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r10
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  __int64 *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 k; // rcx
  __int64 v28; // rsi
  unsigned int v29; // r13d
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // r14
  int v33; // esi
  int v34; // ecx
  int v35; // r8d
  int v36; // esi
  int v37; // ecx
  __int64 v38; // rbx
  __int64 *v39; // rsi
  __int64 *m; // r8
  __int64 v41; // r10
  __int64 v42; // r13
  __m128i *v43; // rbx
  __int64 v44; // r14
  const __m128i *v45; // r11
  unsigned __int64 v46; // rax
  signed __int64 v47; // r8
  __int64 v48; // r10
  const __m128i *v49; // rdx
  const __m128i *v50; // rcx
  __int64 v51; // r9
  __m128i v52; // xmm1
  __m128i v53; // xmm0
  __int64 v54; // rbp
  __m128i *v55; // rdx
  __m128i *v56; // rcx
  __int64 v57; // r9
  __int64 v58; // rbp
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  unsigned __int64 v61; // rbp
  unsigned int v62; // eax
  __int64 *v63; // rcx
  unsigned __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rbp
  __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // r11
  int v70; // r8d
  int v71; // edx
  int v72; // eax
  int v73; // edx
  int v74; // r9d
  int v75; // eax
  __int64 *v76; // rdx
  unsigned int v77; // ebx
  __int64 v78; // r11
  int v79; // r9d
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // r10
  __int64 n; // rax
  __int64 v84; // rcx
  unsigned int v85; // r13d
  __m128 v86; // xmm0
  __int64 v87; // r12
  unsigned __int64 v88; // xmm2_8
  int v89; // r9d
  int v90; // ecx
  int v91; // eax
  int v92; // ecx
  int v93; // r9d
  __int64 v94; // rbx
  __int64 *v95; // r14
  __int64 *ii; // rax
  __int64 v97; // rcx
  unsigned int v98; // eax
  __int64 v99; // r11
  __int64 *v100; // rbp
  __int64 v101; // r10
  __int64 v102; // r12
  __int64 v103; // r13
  __int64 v104; // r14
  int v105; // ecx
  int v106; // eax
  int v107; // edx
  int v108; // eax
  int v109; // r8d
  __int64 v110; // rax
  unsigned int v111; // ebx
  __int64 v112; // r10
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r9
  __int64 i; // rcx
  __int64 v117; // rsi
  unsigned int v118; // r13d
  __int64 v119; // r9
  __int64 v120; // r12
  __int64 v121; // r14
  int v122; // esi
  int v123; // ecx
  int v124; // r8d
  int v125; // esi
  int v126; // ecx
  __int64 v127; // rbx
  __int64 v128; // rsi
  __int64 *j; // r8
  __int64 v130; // r10
  unsigned int v131; // eax
  __int64 v132; // rdx
  __int64 *v133; // rcx
  unsigned __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rcx
  const __m128i *v137; // rax
  const __m128i *v138; // rdx
  __m128i v139; // xmm1
  __m128i v140; // xmm0
  __int64 v141; // rcx
  __m128i *v142; // [rsp+8h] [rbp-80h]
  signed __int64 v144; // [rsp+20h] [rbp-68h]
  signed __int64 v146; // [rsp+30h] [rbp-58h]

  v146 = a4;
  if ( a4 && a5 )
  {
    v144 = a5;
    while ( v144 + v146 != 2 )
    {
      if ( v146 <= v144 )
      {
        v9 = a1;
        v142 = (__m128i *)((char *)a2
                         + 8 * (v144 / 2)
                         + 8 * ((v144 + ((unsigned __int64)v144 >> 63)) & 0xFFFFFFFFFFFFFFFELL));
        v99 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 3);
LABEL_95:
        if ( v99 <= 0 )
          goto LABEL_113;
        while ( 1 )
        {
          v100 = &v9->m128i_i64[(v99 >> 1) + (v99 & 0xFFFFFFFFFFFFFFFELL)];
          v101 = *((unsigned int *)a6 + 2);
          v102 = v142->m128i_i64[0];
          v103 = v142->m128i_i64[1];
          v104 = v142[1].m128i_i64[0];
          v105 = *(_DWORD *)(v142->m128i_i64[0] + 12);
          v106 = (*(_DWORD *)(v103 + 12) - v105) ^ (v105 << 8);
          v107 = ((v106 ^ ((v105 - v106) << 16)) + v106 - v105) ^ ((v105 - v106) << 10);
          v108 = (*(_DWORD *)(v104 + 12) - v107) ^ (v107 << 8);
          v109 = ((v108 ^ ((v107 - v108) << 16)) + v108 - v107) ^ ((v107 - v108) << 10);
          v110 = *a6;
          v111 = v101 - 1;
          v112 = 32 * v101;
          v113 = *a6 + v112;
          v114 = 32LL * (v109 & v111);
          v115 = *a6 + v114;
          if ( v114 != v112 )
          {
            for ( i = *a6 + v114; v113 != i; i += 32 )
            {
              v117 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(i + 28) == v109
                  && v102 == v117
                  && v103 == *(_QWORD *)(i + 8)
                  && v104 == *(_QWORD *)(i + 16) )
                {
                  v118 = *(_DWORD *)(i + 24);
                  goto LABEL_104;
                }
              }
              else if ( !v117 )
              {
                goto LABEL_103;
              }
            }
          }
          if ( v110 == v115 )
          {
LABEL_103:
            v118 = 0;
            goto LABEL_104;
          }
          v133 = (__int64 *)*a6;
          while ( 1 )
          {
            v134 = *v133;
            if ( (unsigned __int64)*v133 > 1 )
              break;
            if ( !v134 )
              goto LABEL_103;
LABEL_135:
            v133 += 4;
            if ( (__int64 *)v115 == v133 )
              goto LABEL_103;
          }
          if ( *((_DWORD *)v133 + 7) != v109 || v102 != v134 || v103 != v133[1] || v104 != v133[2] )
            goto LABEL_135;
          v118 = *((_DWORD *)v133 + 6);
LABEL_104:
          v119 = *v100;
          v120 = v100[1];
          v121 = v100[2];
          v122 = *(_DWORD *)(*v100 + 12);
          v123 = (*(_DWORD *)(v120 + 12) - v122) ^ (v122 << 8);
          v124 = ((v123 ^ ((v122 - v123) << 16)) + v123 - v122) ^ ((v122 - v123) << 10);
          v125 = (*(_DWORD *)(v121 + 12) - v124) ^ (v124 << 8);
          v126 = ((v125 ^ ((v124 - v125) << 16)) + v125 - v124) ^ ((v124 - v125) << 10);
          v127 = 32LL * (v126 & v111);
          v128 = v110 + v127;
          if ( v112 != v127 )
          {
            for ( j = (__int64 *)(v110 + v127); (__int64 *)v113 != j; j += 4 )
            {
              v130 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *((_DWORD *)j + 7) == v126 && v119 == v130 && v120 == j[1] && v121 == j[2] )
                {
                  v131 = *((_DWORD *)j + 6);
                  goto LABEL_121;
                }
              }
              else if ( !v130 )
              {
                goto LABEL_111;
              }
            }
          }
          while ( v128 != v110 )
          {
            v132 = *(_QWORD *)v110;
            if ( *(_QWORD *)v110 > 1u )
            {
              if ( *(_DWORD *)(v110 + 28) == v126
                && v119 == v132
                && v120 == *(_QWORD *)(v110 + 8)
                && v121 == *(_QWORD *)(v110 + 16) )
              {
                v131 = *(_DWORD *)(v110 + 24);
LABEL_121:
                if ( v131 >= v118 )
                  goto LABEL_112;
LABEL_122:
                v99 >>= 1;
                goto LABEL_95;
              }
            }
            else if ( !v132 )
            {
              break;
            }
            v110 += 32;
          }
LABEL_111:
          if ( v118 )
            goto LABEL_122;
LABEL_112:
          v9 = (__m128i *)(v100 + 3);
          v99 = v99 - (v99 >> 1) - 1;
          if ( v99 <= 0 )
          {
LABEL_113:
            v44 = v144 / 2;
            v43 = a2;
            v42 = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)a1) >> 3);
            if ( a2 != v9 )
              goto LABEL_26;
            goto LABEL_114;
          }
        }
      }
      v142 = a2;
      v9 = (__m128i *)((char *)a1 + 8 * (v146 / 2)
                                  + 8 * ((v146 + ((unsigned __int64)v146 >> 63)) & 0xFFFFFFFFFFFFFFFELL));
      v10 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)a2) >> 3);
LABEL_7:
      if ( v10 <= 0 )
        goto LABEL_25;
      do
      {
        v11 = &v142->m128i_i64[(v10 >> 1) + (v10 & 0xFFFFFFFFFFFFFFFELL)];
        v12 = *v11;
        v13 = v11[1];
        v14 = v11[2];
        v15 = *((unsigned int *)a6 + 2);
        v16 = *(_DWORD *)(*v11 + 12);
        v17 = (*(_DWORD *)(v13 + 12) - v16) ^ (v16 << 8);
        v18 = ((v17 ^ ((v16 - v17) << 16)) + v17 - v16) ^ ((v16 - v17) << 10);
        v19 = (*(_DWORD *)(v14 + 12) - v18) ^ (v18 << 8);
        v20 = ((v19 ^ ((v18 - v19) << 16)) + v19 - v18) ^ ((v18 - v19) << 10);
        v21 = (__int64 *)*a6;
        v22 = v15 - 1;
        v23 = 32 * v15;
        v24 = *a6 + v23;
        v25 = 32LL * (v20 & v22);
        v26 = *a6 + v25;
        if ( v25 != v23 )
        {
          for ( k = *a6 + v25; v24 != k; k += 32 )
          {
            v28 = *(_QWORD *)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( *(_DWORD *)(k + 28) == v20 && v12 == v28 && v13 == *(_QWORD *)(k + 8) && v14 == *(_QWORD *)(k + 16) )
              {
                v29 = *(_DWORD *)(k + 24);
                goto LABEL_16;
              }
            }
            else if ( !v28 )
            {
              goto LABEL_15;
            }
          }
        }
        if ( v21 == (__int64 *)v26 )
        {
LABEL_15:
          v29 = 0;
          goto LABEL_16;
        }
        v63 = (__int64 *)*a6;
        while ( 1 )
        {
          v64 = *v63;
          if ( (unsigned __int64)*v63 > 1 )
            break;
          if ( !v64 )
            goto LABEL_15;
LABEL_57:
          v63 += 4;
          if ( (__int64 *)v26 == v63 )
            goto LABEL_15;
        }
        if ( *((_DWORD *)v63 + 7) != v20 || v12 != v64 || v13 != v63[1] || v14 != v63[2] )
          goto LABEL_57;
        v29 = *((_DWORD *)v63 + 6);
LABEL_16:
        v30 = v9->m128i_i64[0];
        v31 = v9->m128i_i64[1];
        v32 = v9[1].m128i_i64[0];
        v33 = *(_DWORD *)(v9->m128i_i64[0] + 12);
        v34 = (*(_DWORD *)(v31 + 12) - v33) ^ (v33 << 8);
        v35 = ((v34 ^ ((v33 - v34) << 16)) + v34 - v33) ^ ((v33 - v34) << 10);
        v36 = (*(_DWORD *)(v32 + 12) - v35) ^ (v35 << 8);
        v37 = ((v36 ^ ((v35 - v36) << 16)) + v36 - v35) ^ ((v35 - v36) << 10);
        v38 = 32LL * (v37 & v22);
        v39 = &v21[(unsigned __int64)v38 / 8];
        if ( v23 != v38 )
        {
          for ( m = &v21[(unsigned __int64)v38 / 8]; (__int64 *)v24 != m; m += 4 )
          {
            v41 = *m;
            if ( (unsigned __int64)*m > 1 )
            {
              if ( *((_DWORD *)m + 7) == v37 && v30 == v41 && v31 == m[1] && v32 == m[2] )
              {
                v62 = *((_DWORD *)m + 6);
                goto LABEL_48;
              }
            }
            else if ( !v41 )
            {
              goto LABEL_23;
            }
          }
        }
        while ( v39 != v21 )
        {
          v65 = *v21;
          if ( (unsigned __int64)*v21 > 1 )
          {
            if ( *((_DWORD *)v21 + 7) == v37 && v30 == v65 && v31 == v21[1] && v32 == v21[2] )
            {
              v62 = *((_DWORD *)v21 + 6);
LABEL_48:
              if ( v62 < v29 )
                goto LABEL_24;
LABEL_49:
              v10 >>= 1;
              goto LABEL_7;
            }
          }
          else if ( !v65 )
          {
            break;
          }
          v21 += 4;
        }
LABEL_23:
        if ( !v29 )
          goto LABEL_49;
LABEL_24:
        v142 = (__m128i *)(v11 + 3);
        v10 = v10 - (v10 >> 1) - 1;
      }
      while ( v10 > 0 );
LABEL_25:
      v42 = v146 / 2;
      v43 = a2;
      v44 = 0xAAAAAAAAAAAAAAABLL * (((char *)v142 - (char *)a2) >> 3);
      if ( a2 == v9 )
      {
LABEL_114:
        v61 = (unsigned __int64)v142;
        goto LABEL_42;
      }
LABEL_26:
      if ( v43 == v142 )
      {
        v61 = (unsigned __int64)v9;
      }
      else
      {
        v45 = v9;
        v46 = 0xAAAAAAAAAAAAAAABLL * (((char *)v142 - (char *)v9) >> 3);
        v47 = 0xAAAAAAAAAAAAAAABLL * (((char *)v43 - (char *)v9) >> 3);
        if ( v47 == v46 - v47 )
        {
          v137 = v9;
          v138 = a2;
          do
          {
            v139 = _mm_loadu_si128(v138);
            v140 = _mm_loadu_si128(v137);
            v137 = (const __m128i *)((char *)v137 + 24);
            v138 = (const __m128i *)((char *)v138 + 24);
            v141 = v137[-1].m128i_i64[1];
            *(__m128i *)((char *)v137 - 24) = v139;
            v137[-1].m128i_i64[1] = v138[-1].m128i_i64[1];
            *(__m128i *)((char *)v138 - 24) = v140;
            v138[-1].m128i_i64[1] = v141;
          }
          while ( a2 != v137 );
          v61 = (unsigned __int64)&v9[1].m128i_u64[1]
              + (((char *)&a2[-2].m128i_u64[1] - (char *)v9) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v48 = v46 - v47;
          if ( v47 >= (__int64)(v46 - v47) )
          {
            while ( 1 )
            {
              v55 = (__m128i *)((char *)v45 + 24 * v46);
              v45 = (__m128i *)((char *)v55 - 24 * v48);
              if ( v47 > 0 )
              {
                v56 = (__m128i *)((char *)v55 - 24 * v48);
                v57 = 0;
                do
                {
                  v58 = v56[-1].m128i_i64[1];
                  ++v57;
                  v56 = (__m128i *)((char *)v56 - 24);
                  v59 = _mm_loadu_si128(v56);
                  v60 = _mm_loadu_si128((__m128i *)((char *)v55 - 24));
                  v55 = (__m128i *)((char *)v55 - 24);
                  *v56 = v60;
                  v56[1].m128i_i64[0] = v55[1].m128i_i64[0];
                  v55[1].m128i_i64[0] = v58;
                  *v55 = v59;
                }
                while ( v47 != v57 );
                v45 = (const __m128i *)((char *)v45 - 24 * v47);
              }
              v47 = v46 % v48;
              if ( !(v46 % v48) )
                break;
LABEL_35:
              v46 = v48;
              v48 -= v47;
              if ( v47 < v48 )
                goto LABEL_29;
            }
          }
          else
          {
LABEL_29:
            v49 = (const __m128i *)((char *)v45 + 24 * v47);
            if ( v48 > 0 )
            {
              v50 = v45;
              v51 = 0;
              do
              {
                v52 = _mm_loadu_si128(v49);
                v53 = _mm_loadu_si128(v50);
                ++v51;
                v50 = (const __m128i *)((char *)v50 + 24);
                v54 = v50[-1].m128i_i64[1];
                v49 = (const __m128i *)((char *)v49 + 24);
                *(__m128i *)((char *)v50 - 24) = v52;
                v50[-1].m128i_i64[1] = v49[-1].m128i_i64[1];
                *(__m128i *)((char *)v49 - 24) = v53;
                v49[-1].m128i_i64[1] = v54;
              }
              while ( v48 != v51 );
              v45 = (const __m128i *)((char *)v45 + 24 * v48);
            }
            if ( v46 % v47 )
            {
              v48 = v47;
              v47 -= v46 % v47;
              goto LABEL_35;
            }
          }
          v61 = (unsigned __int64)v9->m128i_u64 + (char *)v142 - (char *)a2;
        }
      }
LABEL_42:
      sub_9610C0(a1, v9, v61, v42, v44, a6);
      v144 -= v44;
      v146 -= v42;
      if ( !v146 || !v144 )
        return;
      a1 = (__m128i *)v61;
      a2 = v142;
    }
    v66 = a2->m128i_i64[0];
    v67 = a2->m128i_i64[1];
    v68 = a2[1].m128i_i64[0];
    v69 = *((unsigned int *)a6 + 2);
    v70 = *(_DWORD *)(a2->m128i_i64[0] + 12);
    v71 = (*(_DWORD *)(v67 + 12) - v70) ^ (v70 << 8);
    v72 = ((v71 ^ ((v70 - v71) << 16)) + v71 - v70) ^ ((v70 - v71) << 10);
    v73 = (*(_DWORD *)(v68 + 12) - v72) ^ (v72 << 8);
    v74 = (v72 - v73) << 10;
    v75 = (v73 ^ ((v72 - v73) << 16)) + v73 - v72;
    v76 = (__int64 *)*a6;
    v77 = v69 - 1;
    v78 = 32 * v69;
    v79 = v75 ^ v74;
    v80 = *a6 + v78;
    v81 = 32LL * (v79 & v77);
    v82 = *a6 + v81;
    if ( v81 != v78 )
    {
      for ( n = *a6 + v81; v80 != n; n += 32 )
      {
        v84 = *(_QWORD *)n;
        if ( *(_QWORD *)n > 1u )
        {
          if ( *(_DWORD *)(n + 28) == v79 && v66 == v84 && v67 == *(_QWORD *)(n + 8) && v68 == *(_QWORD *)(n + 16) )
          {
LABEL_150:
            v85 = *(_DWORD *)(n + 24);
            goto LABEL_83;
          }
        }
        else if ( !v84 )
        {
          goto LABEL_82;
        }
      }
    }
    if ( v76 != (__int64 *)v82 )
    {
      for ( n = *a6; v82 != n; n += 32 )
      {
        v136 = *(_QWORD *)n;
        if ( *(_QWORD *)n > 1u )
        {
          if ( *(_DWORD *)(n + 28) == v79 && v66 == v136 && v67 == *(_QWORD *)(n + 8) && v68 == *(_QWORD *)(n + 16) )
            goto LABEL_150;
        }
        else if ( !v136 )
        {
          break;
        }
      }
    }
LABEL_82:
    v85 = 0;
LABEL_83:
    v86 = (__m128)_mm_loadu_si128(a1);
    v87 = a1[1].m128i_i64[0];
    v88 = _mm_movehl_ps(a9, v86).m128_u64[0];
    v89 = *(_DWORD *)(v86.m128_u64[0] + 12);
    v90 = (*(_DWORD *)(v88 + 12) - v89) ^ (v89 << 8);
    v91 = ((v90 ^ ((v89 - v90) << 16)) + v90 - v89) ^ ((v89 - v90) << 10);
    v92 = (*(_DWORD *)(v87 + 12) - v91) ^ (v91 << 8);
    v93 = ((v92 ^ ((v91 - v92) << 16)) + v92 - v91) ^ ((v91 - v92) << 10);
    v94 = 32LL * (v93 & v77);
    v95 = &v76[(unsigned __int64)v94 / 8];
    if ( v78 != v94 )
    {
      for ( ii = &v76[(unsigned __int64)v94 / 8]; (__int64 *)v80 != ii; ii += 4 )
      {
        v97 = *ii;
        if ( (unsigned __int64)*ii > 1 )
        {
          if ( *((_DWORD *)ii + 7) == v93 && v97 == v86.m128_u64[0] && ii[1] == v88 && v87 == ii[2] )
          {
LABEL_147:
            v98 = *((_DWORD *)ii + 6);
            goto LABEL_91;
          }
        }
        else if ( !v97 )
        {
          goto LABEL_90;
        }
      }
    }
    for ( ; v95 != v76; v76 += 4 )
    {
      v135 = *v76;
      if ( (unsigned __int64)*v76 > 1 )
      {
        if ( *((_DWORD *)v76 + 7) == v93 && v135 == v86.m128_u64[0] && v76[1] == v88 && v87 == v76[2] )
        {
          ii = v76;
          goto LABEL_147;
        }
      }
      else if ( !v135 )
      {
        break;
      }
    }
LABEL_90:
    v98 = 0;
LABEL_91:
    if ( v98 < v85 )
    {
      *a1 = _mm_loadu_si128(a2);
      a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
      a2[1].m128i_i64[0] = v87;
      *a2 = (__m128i)v86;
    }
  }
}

