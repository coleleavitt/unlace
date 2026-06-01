void __fastcall sub_95BEA0(__int64 a1, double a2, double a3, __m128 a4)
{
  char **exception; // rbx
  __int64 v5; // r14
  __m128i *v6; // rbx
  __m128i *v7; // rax
  const __m128i *v8; // r13
  __m128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  int v16; // r9d
  int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 i; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r11d
  __m128i *v25; // r12
  __int64 v26; // rcx
  __m128i *v27; // r8
  __int64 v28; // r10
  __m128i *v29; // rbp
  __m128i *v30; // rax
  __int64 v31; // r13
  double v32; // xmm1_8
  __int64 v33; // r15
  int v34; // ecx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i *v37; // rsi
  __m128i *v38; // rax
  __m128i *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  bool v43; // zf
  __int64 v44; // rdx
  __int64 v45; // r12
  __m128i *v46; // r13
  __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // rax
  __m128i *v50; // rbp
  __int64 v51; // rcx
  signed __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rax
  __m128i v55; // xmm0
  unsigned __int64 v56; // rax
  __m128i *v57; // rax
  __int64 v58; // r13
  __m128i *j; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 *v63; // rcx
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // ebp
  __int64 v68; // rbx
  _DWORD *v69; // rax
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rax
  const __m128i *v73; // rbp
  unsigned int v74; // ecx
  __int64 v75; // r15
  __m128i *v76; // r12
  __m128i *v77; // r8
  const __m128i *v78; // r14
  __int64 v79; // rax
  __m128i *v80; // rdx
  __m128i *v81; // rax
  __m128i *v82; // rbp
  unsigned int v83; // eax
  __int64 v84; // rdx
  int v85; // eax
  __m128i *v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // r8d
  int v90; // r11d
  _DWORD *v91; // rax
  __int8 *v92; // rax
  char *v93; // r9
  char *v94; // r10
  const __m128i *v95; // rsi
  __int64 v96; // r10
  const __m128i *v97; // rbx
  const __m128i *v98; // r9
  __m128i *v99; // r13
  const __m128i *v100; // r12
  __int64 v101; // rdx
  __m128i *v102; // rsi
  __m128i *v103; // rdx
  __m128i v104; // xmm0
  __m128i *v105; // rdi
  __m128i *v106; // rax
  unsigned int v107; // ebx
  unsigned int v108; // edx
  __int64 v109; // rax
  __int64 v110; // rcx
  _DWORD *v111; // r12
  __int64 v112; // rdx
  unsigned __int64 v113; // rax
  __int64 v114; // rdx
  _QWORD *v115; // rbp
  const __m128i *v116; // [rsp+0h] [rbp-B8h]
  __int64 v117; // [rsp+0h] [rbp-B8h]
  __m128i *v118; // [rsp+8h] [rbp-B0h]
  const __m128i *v119; // [rsp+10h] [rbp-A8h]
  unsigned int v120; // [rsp+10h] [rbp-A8h]
  int v121; // [rsp+18h] [rbp-A0h]
  __int64 v122; // [rsp+18h] [rbp-A0h]
  unsigned int v123; // [rsp+18h] [rbp-A0h]
  size_t v124; // [rsp+20h] [rbp-98h]
  size_t v125; // [rsp+28h] [rbp-90h]
  int v126; // [rsp+28h] [rbp-90h]
  int v127; // [rsp+30h] [rbp-88h]
  unsigned int v128; // [rsp+30h] [rbp-88h]
  __int64 v129[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a1;
  v6 = *(__m128i **)(a1 + 56);
  if ( v6 )
  {
    v7 = *(__m128i **)(a1 + 48);
    v6[-1].m128i_i32[3] = 0;
    *(_DWORD *)(a1 + 64) = 0;
    v118 = v7;
    if ( !v7 )
      goto LABEL_45;
    v116 = &v7[v7[-1].m128i_u32[3]];
    if ( v7 == v116 )
    {
      v7[-1].m128i_i32[3] = 0;
      goto LABEL_45;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
    v105 = *(__m128i **)(a1 + 48);
    v118 = v105;
    if ( !v105 )
      return;
    v106 = &v105[v105[-1].m128i_u32[3]];
    v116 = v106;
    if ( v106 == v105 )
    {
      v106[-1].m128i_i32[3] = 0;
      return;
    }
  }
  v8 = v118;
  do
  {
    v9 = (__m128)_mm_loadu_si128(v8);
    v10 = *(unsigned int *)(v5 + 88);
    v11 = *(_QWORD *)(v5 + 80);
    v12 = v9.m128_u64[0];
    a4 = _mm_movehl_ps(a4, v9);
    v13 = *(_DWORD *)(v9.m128_u64[0] + 12);
    v14 = a4.m128_u64[0];
    v15 = v9.m128_u64[0];
    v16 = v13 << 8;
    v17 = ((v16
          ^ (*(_DWORD *)(a4.m128_u64[0] + 12) - v13)
          ^ ((v13 - (v16 ^ (*(_DWORD *)(a4.m128_u64[0] + 12) - v13))) << 16))
         + (v16 ^ (*(_DWORD *)(a4.m128_u64[0] + 12) - v13))
         - v13)
        ^ ((v13 - (v16 ^ (*(_DWORD *)(a4.m128_u64[0] + 12) - v13))) << 10);
    v18 = v10 - 1;
    v10 *= 24;
    v19 = v11 + v10;
    v20 = 24LL * (v17 & v18);
    v21 = v11 + v20;
    if ( v20 != v10 )
    {
      for ( i = v11 + v20; v19 != i; i += 24 )
      {
        v23 = *(_QWORD *)(i + 8);
        if ( v23 > 1 )
        {
          if ( *(_DWORD *)i == v17 && v23 == v9.m128_u64[0] && *(_QWORD *)(i + 16) == a4.m128_u64[0] )
          {
            v42 = *(_QWORD *)(v5 + 8);
            v43 = (*(_DWORD *)(v9.m128_u64[0] + 8))-- == 1;
            if ( v43 )
              goto LABEL_63;
            goto LABEL_40;
          }
        }
        else if ( !v23 )
        {
          goto LABEL_12;
        }
      }
    }
    for ( ; v21 != v11; v11 += 24 )
    {
      v56 = *(_QWORD *)(v11 + 8);
      if ( v56 > 1 )
      {
        if ( *(_DWORD *)v11 == v17 && v56 == v9.m128_u64[0] && *(_QWORD *)(v11 + 16) == a4.m128_u64[0] )
        {
          v42 = *(_QWORD *)(v5 + 8);
          v43 = (*(_DWORD *)(v9.m128_u64[0] + 8))-- == 1;
          if ( v43 )
          {
LABEL_63:
            sub_15D7BC0(v42, v9.m128_u64[0]);
            v14 = v8->m128i_u64[1];
            if ( !v14 )
              goto LABEL_41;
            v42 = *(_QWORD *)(v5 + 8);
            v43 = (*(_DWORD *)(v14 + 8))-- == 1;
            if ( !v43 )
              goto LABEL_41;
LABEL_65:
            sub_15D7BC0(v42, v14);
            goto LABEL_41;
          }
LABEL_40:
          v43 = (*(_DWORD *)(a4.m128_u64[0] + 8))-- == 1;
          if ( !v43 )
            goto LABEL_41;
          goto LABEL_65;
        }
      }
      else if ( !v56 )
      {
        break;
      }
    }
LABEL_12:
    v24 = *(_DWORD *)(v5 + 32);
    v25 = *(__m128i **)(v5 + 24);
    v121 = v24 - 1;
    v26 = 24LL * (v17 & (v24 - 1));
    v27 = (__m128i *)((char *)v25 + v26);
    v28 = 24LL * v24;
    v124 = v28;
    v29 = (__m128i *)((char *)v25 + v28);
    if ( v26 != v28 )
    {
      v119 = v8;
      v30 = (__m128i *)((char *)v25 + v26);
      do
      {
        v31 = v30->m128i_i64[0];
        if ( v30->m128i_i64[0] > 1uLL )
        {
          if ( v30[1].m128i_i32[1] == v17 && v31 == v9.m128_u64[0] && v30->m128i_i64[1] == a4.m128_u64[0] )
          {
            v8 = v119;
            v32 = (double)v30[1].m128i_i32[0];
            goto LABEL_21;
          }
        }
        else if ( !v31 )
        {
LABEL_19:
          v8 = v119;
LABEL_20:
          v32 = 0.0;
          goto LABEL_21;
        }
        v30 = (__m128i *)((char *)v30 + 24);
      }
      while ( v29 != v30 );
      v8 = v119;
    }
    if ( v25 == v27 )
      goto LABEL_20;
    v119 = v8;
    v57 = *(__m128i **)(v5 + 24);
    while ( 1 )
    {
      v58 = v57->m128i_i64[0];
      if ( v57->m128i_i64[0] > 1uLL )
        break;
      if ( !v58 )
        goto LABEL_19;
LABEL_73:
      v57 = (__m128i *)((char *)v57 + 24);
      if ( v27 == v57 )
        goto LABEL_19;
    }
    if ( v57[1].m128i_i32[1] != v17 || v58 != v9.m128_u64[0] || v57->m128i_i64[1] != a4.m128_u64[0] )
      goto LABEL_73;
    v8 = v119;
    v32 = (double)v57[1].m128i_i32[0];
LABEL_21:
    v120 = (int)(v32 * *(double *)(*(_QWORD *)(v5 + 16) + 24LL));
    if ( v120 <= 1 )
    {
      if ( v26 != v28 )
      {
        for ( j = (__m128i *)((char *)v25 + v26); v29 != j; j = (__m128i *)((char *)j + 24) )
        {
          v60 = j->m128i_i64[0];
          if ( j->m128i_i64[0] > 1uLL )
          {
            if ( j[1].m128i_i32[1] == v17 && v60 == v9.m128_u64[0] && a4.m128_u64[0] == j->m128i_i64[1] )
            {
LABEL_97:
              v63 = &j[1].m128i_i64[1];
              if ( v29 == (__m128i *)&j[1].m128i_u64[1] )
                v63 = *(__int64 **)(v5 + 24);
              v64 = *(_DWORD *)(v5 + 36) - 1;
              if ( *v63 )
              {
                j->m128i_i64[0] = 1;
                v65 = *(_DWORD *)(v5 + 40);
                *(_DWORD *)(v5 + 36) = v64;
                v66 = v65 + 1;
                if ( v64 < 0x40 )
                  v64 = 64;
                *(_DWORD *)(v5 + 40) = v66;
                if ( v64 < v66 )
                {
                  if ( !(unsigned __int8)sub_186AF10(a4.m128_u64[0]) )
                  {
                    v67 = *(_DWORD *)(v5 + 32);
                    v68 = sub_186B270(24LL * v67);
                    if ( v67 )
                    {
                      if ( v67 - 1 <= 2 )
                      {
                        v70 = v67;
                        v71 = v68;
LABEL_109:
                        *(_QWORD *)(v71 + 16) = 0;
                        *(_OWORD *)v71 = 0;
                        if ( v70 != 1 )
                        {
                          *(_QWORD *)(v71 + 40) = 0;
                          *(_OWORD *)(v71 + 24) = 0;
                          if ( v70 != 2 )
                          {
                            *(_QWORD *)(v71 + 64) = 0;
                            *(_OWORD *)(v71 + 48) = 0;
                          }
                        }
                      }
                      else
                      {
                        v69 = (_DWORD *)(v68 + 20);
                        do
                        {
                          *v69 = 0;
                          v69 += 24;
                          *(_OWORD *)(v69 - 29) = 0;
                          *(_OWORD *)(v69 - 23) = 0;
                          *(_OWORD *)(v69 - 17) = 0;
                          *(_OWORD *)(v69 - 11) = 0;
                          *(v69 - 18) = 0;
                          *(v69 - 12) = 0;
                          *(v69 - 6) = 0;
                        }
                        while ( v69 != (_DWORD *)(v68 + 96LL * (v67 >> 2) + 20) );
                        v70 = v67 & 3;
                        v71 = v68 + 24LL * (v67 & 0xFFFFFFFC);
                        if ( (v67 & 3) != 0 )
                          goto LABEL_109;
                      }
                    }
                    v72 = *(unsigned int *)(v5 + 32);
                    v73 = *(const __m128i **)(v5 + 24);
                    v74 = v72 - 1;
                    v75 = 24 * v72;
                    v76 = (__m128i *)((char *)v73 + 24 * v72);
                    v77 = (__m128i *)(v68 + 24 * v72);
                    if ( v73 != v76 )
                    {
                      v122 = v5;
                      v78 = (const __m128i *)((char *)v73 + 24 * v72);
                      do
                      {
                        if ( v73->m128i_i64[0] > 1uLL )
                        {
                          v79 = 24LL * (v73[1].m128i_i32[1] & v74);
                          v80 = (__m128i *)(v68 + v79);
                          if ( v75 == v79 )
                          {
LABEL_195:
                            if ( (__m128i *)v68 == v80 )
                            {
LABEL_201:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v81 = (__m128i *)v68;
                            while ( v81->m128i_i64[0] )
                            {
                              v81 = (__m128i *)((char *)v81 + 24);
                              if ( v80 == v81 )
                                goto LABEL_201;
                            }
                          }
                          else
                          {
                            v81 = (__m128i *)(v68 + v79);
                            while ( v81->m128i_i64[0] )
                            {
                              v81 = (__m128i *)((char *)v81 + 24);
                              if ( v77 == v81 )
                                goto LABEL_195;
                            }
                          }
                          *v81 = _mm_loadu_si128(v73);
                          v81[1].m128i_i64[0] = v73[1].m128i_i64[0];
                        }
                        v73 = (const __m128i *)((char *)v73 + 24);
                      }
                      while ( v78 != v73 );
                      v5 = v122;
                      v76 = *(__m128i **)(v122 + 24);
                    }
                    if ( v76 )
                      sub_186B220(v76);
                    *(_QWORD *)(v5 + 24) = v68;
                    *(_DWORD *)(v5 + 40) = 0;
                  }
                  v15 = v8->m128i_i64[0];
                  v61 = *(_QWORD *)(v5 + 8);
                  if ( v8->m128i_i64[0] )
                  {
LABEL_89:
                    v43 = (*(_DWORD *)(v15 + 8))-- == 1;
                    if ( v43 )
                    {
                      sub_15D7BC0(v61, v15);
                      v61 = *(_QWORD *)(v5 + 8);
                    }
                  }
                  v62 = v8->m128i_i64[1];
                  if ( v62 )
                  {
                    v43 = (*(_DWORD *)(v62 + 8))-- == 1;
                    if ( v43 )
                      sub_15D7BC0(v61, v62);
                  }
                  goto LABEL_41;
                }
              }
              else
              {
                j->m128i_i64[0] = 0;
                *(_DWORD *)(v5 + 36) = v64;
              }
LABEL_88:
              v61 = *(_QWORD *)(v5 + 8);
              goto LABEL_89;
            }
          }
          else if ( !v60 )
          {
            goto LABEL_88;
          }
        }
      }
      if ( v25 != v27 )
      {
        j = *(__m128i **)(v5 + 24);
        while ( 1 )
        {
          v87 = j->m128i_i64[0];
          if ( j->m128i_i64[0] > 1uLL )
          {
            if ( j[1].m128i_i32[1] == v17 && v87 == v9.m128_u64[0] && a4.m128_u64[0] == j->m128i_i64[1] )
              goto LABEL_97;
          }
          else if ( !v87 )
          {
            goto LABEL_88;
          }
          j = (__m128i *)((char *)j + 24);
          if ( v27 == j )
            goto LABEL_88;
        }
      }
      goto LABEL_88;
    }
    *v118 = (__m128i)v9;
    v33 = v8->m128i_i64[1];
    v34 = ((v16 ^ (*(_DWORD *)(v33 + 12) - v13))
         - v13
         + (v16 ^ (*(_DWORD *)(v33 + 12) - v13) ^ ((v13 - (v16 ^ (*(_DWORD *)(v33 + 12) - v13))) << 16)))
        ^ ((v13 - (v16 ^ (*(_DWORD *)(v33 + 12) - v13))) << 10);
    if ( 3 * v24 < 4 * (*(_DWORD *)(v5 + 36) + *(_DWORD *)(v5 + 40)) )
    {
      v127 = ((v16 ^ (*(_DWORD *)(v33 + 12) - v13))
            - v13
            + (v16 ^ (*(_DWORD *)(v33 + 12) - v13) ^ ((v13 - (v16 ^ (*(_DWORD *)(v33 + 12) - v13))) << 16)))
           ^ ((v13 - (v16 ^ (*(_DWORD *)(v33 + 12) - v13))) << 10);
      v123 = 2 * v24;
      v125 = 48LL * v24;
      v124 = v125;
      v88 = sub_186B270(v125);
      v89 = v123;
      v34 = v127;
      v25 = (__m128i *)v88;
      if ( v123 )
      {
        v90 = v123 - 1;
        if ( v123 - 1 <= 2 )
        {
          *(_DWORD *)(v88 + 20) = 0;
          *(_DWORD *)(v88 + 44) = 0;
          *(_OWORD *)v88 = 0;
          *(_OWORD *)(v88 + 24) = 0;
        }
        else
        {
          v91 = (_DWORD *)(v88 + 20);
          do
          {
            *v91 = 0;
            v91 += 24;
            *(_OWORD *)(v91 - 29) = 0;
            *(_OWORD *)(v91 - 23) = 0;
            *(_OWORD *)(v91 - 17) = 0;
            *(_OWORD *)(v91 - 11) = 0;
            *(v91 - 18) = 0;
            *(v91 - 12) = 0;
            *(v91 - 6) = 0;
          }
          while ( (_DWORD *)((char *)v25[6 * (v123 >> 2) + 1].m128i_i64 + 4) != v91 );
          v92 = &v25->m128i_i8[24 * (v123 & 0xFFFFFFFC)];
          if ( (v123 & 2) != 0 )
          {
            *((_DWORD *)v92 + 5) = 0;
            *((_DWORD *)v92 + 11) = 0;
            *(_OWORD *)v92 = 0;
            *(_OWORD *)(v92 + 24) = 0;
            if ( (v123 & 2) != 2 )
            {
              *((_QWORD *)v92 + 8) = 0;
              *((_OWORD *)v92 + 3) = 0;
            }
          }
        }
      }
      else
      {
        v90 = -1;
      }
      v93 = *(char **)(v5 + 24);
      v121 = v90;
      v94 = &v93[24 * *(unsigned int *)(v5 + 32)];
      v29 = &v25[v125 / 0x10];
      if ( v93 != v94 )
      {
        v95 = (const __m128i *)&v93[24 * *(unsigned int *)(v5 + 32)];
        v96 = v9.m128_u64[0];
        v97 = *(const __m128i **)(v5 + 24);
        v98 = v8;
        v99 = v25;
        v100 = v95;
        do
        {
          while ( v97->m128i_i64[0] <= 1uLL )
          {
            v97 = (const __m128i *)((char *)v97 + 24);
            if ( v100 == v97 )
              goto LABEL_151;
          }
          v101 = 24LL * (v97[1].m128i_i32[1] & (unsigned int)v90);
          v102 = (__m128i *)((char *)v99 + v101);
          if ( v125 == v101 )
          {
LABEL_155:
            if ( v99 == v102 )
            {
LABEL_170:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v103 = v99;
            while ( v103->m128i_i64[0] )
            {
              v103 = (__m128i *)((char *)v103 + 24);
              if ( v102 == v103 )
                goto LABEL_170;
            }
          }
          else
          {
            v103 = (__m128i *)((char *)v99 + v101);
            while ( v103->m128i_i64[0] )
            {
              v103 = (__m128i *)((char *)v103 + 24);
              if ( v29 == v103 )
                goto LABEL_155;
            }
          }
          v104 = _mm_loadu_si128(v97);
          v97 = (const __m128i *)((char *)v97 + 24);
          *v103 = v104;
          v103[1].m128i_i64[0] = v97[-1].m128i_i64[1];
        }
        while ( v100 != v97 );
LABEL_151:
        v12 = v96;
        v94 = *(char **)(v5 + 24);
        v25 = v99;
        v8 = v98;
      }
      if ( v94 )
      {
        v128 = v89;
        v126 = v34;
        sub_186B220(v94);
        v89 = v128;
        v34 = v126;
      }
      *(_QWORD *)(v5 + 24) = v25;
      *(_DWORD *)(v5 + 32) = v89;
      *(_DWORD *)(v5 + 40) = 0;
    }
    v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v33);
    v36 = 24LL * (v34 & (unsigned int)v121);
    v37 = (__m128i *)((char *)v25 + v36);
    if ( v36 != v124 )
    {
      v38 = (__m128i *)((char *)v25 + v36);
      v39 = nullptr;
      while ( 1 )
      {
        v40 = v38->m128i_i64[0];
        if ( v38->m128i_i64[0] > 1uLL )
        {
          if ( v38[1].m128i_i32[1] == v34 && v40 == v12 && v33 == v38->m128i_i64[1] )
          {
            v38[1].m128i_i32[1] = v34;
            *v38 = v35;
            v38[1].m128i_i32[0] = v120;
            goto LABEL_79;
          }
        }
        else
        {
          if ( !v40 )
          {
            if ( v39 )
              goto LABEL_164;
            v39 = v38;
            goto LABEL_165;
          }
          v39 = v38;
        }
        v38 = (__m128i *)((char *)v38 + 24);
        if ( v38 == v29 )
          goto LABEL_34;
      }
    }
    v39 = nullptr;
LABEL_34:
    while ( 2 )
    {
      if ( v37 == v25 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v41 = v25->m128i_i64[0];
      if ( v25->m128i_i64[0] > 1uLL )
      {
        if ( v25[1].m128i_i32[1] == v34 && v41 == v12 && v33 == v25->m128i_i64[1] )
        {
          v25[1].m128i_i32[1] = v34;
          *v25 = v35;
          v25[1].m128i_i32[0] = v120;
          if ( v120 < *(_DWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
            goto LABEL_80;
          goto LABEL_123;
        }
        goto LABEL_33;
      }
      if ( v41 )
      {
        v39 = v25;
LABEL_33:
        v25 = (__m128i *)((char *)v25 + 24);
        continue;
      }
      break;
    }
    if ( v39 )
LABEL_164:
      --*(_DWORD *)(v5 + 40);
    else
      v39 = v25;
LABEL_165:
    *v39 = v35;
    v39[1].m128i_i32[1] = v34;
    v39[1].m128i_i32[0] = v120;
    ++*(_DWORD *)(v5 + 36);
LABEL_79:
    if ( v120 >= *(_DWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
    {
LABEL_123:
      v82 = *(__m128i **)(v5 + 56);
      if ( v82 )
      {
        v83 = v82[-1].m128i_u32[3];
        if ( v83 == v82[-1].m128i_i32[2] )
        {
          v107 = (3 * v83 + 1) >> 1;
          v108 = 16 * v107 + 8;
          if ( 16 * v83 + 8 >= v108 || v83 >= v107 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v129, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v129);
            sub_233E40((__int64)v129);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v109 = sub_186B270(v108);
          v110 = *(_QWORD *)(v5 + 56);
          v111 = (_DWORD *)v109;
          v82 = (__m128i *)(v109 + 8);
          if ( v110 )
          {
            v112 = *(unsigned int *)(v110 - 4);
            *(_DWORD *)(v109 + 4) = v112;
            v113 = 0;
            v114 = 16 * v112;
            if ( v114 )
            {
              do
              {
                *(__m128i *)&v111[v113 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v110 + v113));
                v113 += 16LL;
              }
              while ( v114 != v113 );
            }
            sub_186B220((void *)(v110 - 8));
            v86 = &v82[v111[1]];
            v85 = v111[1] + 1;
          }
          else
          {
            *(_DWORD *)(v109 + 4) = 0;
            v86 = (__m128i *)(v109 + 8);
            v85 = 1;
          }
          *(_QWORD *)(v5 + 56) = v82;
          *v111 = v107;
        }
        else
        {
          v84 = v83;
          v85 = v83 + 1;
          v86 = &v82[v84];
        }
      }
      else
      {
        v115 = (_QWORD *)sub_186B270(0x28u);
        *v115 = 2;
        v85 = 1;
        v82 = (__m128i *)(v115 + 1);
        *(_QWORD *)(v5 + 56) = v82;
        v86 = v82;
      }
      *v86 = _mm_loadu_si128(v8);
      v82[-1].m128i_i32[3] = v85;
    }
LABEL_80:
    ++v118;
LABEL_41:
    ++v8;
  }
  while ( v8 != v116 );
  v44 = *(_QWORD *)(v5 + 48);
  v6 = *(__m128i **)(v5 + 56);
  if ( v44 )
    *(_DWORD *)(v44 - 4) = ((__int64)v118->m128i_i64 - v44) >> 4;
  if ( !v6 )
    return;
LABEL_45:
  v45 = v6[-1].m128i_u32[3];
  v46 = &v6[v45];
  if ( &v6[v45] == v6 )
    return;
  v117 = v5 + 24;
  v47 = (((v45 * 16) >> 4) + 1) >> 1;
  v48 = v47;
  while ( 2 )
  {
    v49 = operator new(16 * v48, (const std::nothrow_t *)&std::nothrow);
    v50 = (__m128i *)v49;
    if ( v49 )
    {
      v51 = v48;
      v52 = 16 * v48;
      v53 = v49 + v52;
      v54 = v49 + 16;
      *(__m128i *)(v54 - 16) = _mm_loadu_si128(v6);
      if ( v52 == 16 )
      {
        *v6 = _mm_loadu_si128(v50);
        if ( v47 == v51 )
        {
LABEL_51:
          sub_9649F0(v6, &v6[(unsigned __int64)v52 / 0x10], v50, v117);
          sub_9649F0(&v6[(unsigned __int64)v52 / 0x10], v46, v50, v117);
          sub_9636E0((_DWORD)v6, (_DWORD)v6 + v52, (_DWORD)v46, v52 >> 4, (v45 * 16 - v52) >> 4, (_DWORD)v50, v117);
          goto LABEL_52;
        }
      }
      else
      {
        do
        {
          v55 = _mm_loadu_si128((const __m128i *)(v54 - 16));
          v54 += 16;
          *(__m128i *)(v54 - 16) = v55;
        }
        while ( v53 != v54 );
        *v6 = _mm_loadu_si128((const __m128i *)(v53 - 16));
        if ( v47 == v51 )
          goto LABEL_51;
      }
      sub_964C60(v6, v46, v50, v51, v117);
      goto LABEL_52;
    }
    if ( v48 != 1 )
    {
      v48 = (v48 + 1) >> 1;
      continue;
    }
    break;
  }
  v52 = 0;
  sub_95F950(v6, v46, v117);
LABEL_52:
  operator delete(v50, v52);
}

