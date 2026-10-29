void __fastcall sub_95CD00(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // r15
  __m128i *v3; // rbx
  __m128i *v4; // rdi
  const __m128i *v5; // rax
  const __m128i *v6; // r14
  const __m128i *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 i; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  __m128 *v24; // rbx
  unsigned int v25; // edx
  int v26; // ecx
  __int64 v27; // r8
  __m128i *v28; // rbp
  __int64 v29; // r13
  __m128 *v30; // r10
  __m128i *j; // rdx
  __int64 v32; // r9
  double v33; // xmm0_8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rsi
  int v37; // r10d
  int v38; // edi
  int v39; // edi
  int v40; // eax
  int v41; // r13d
  int v42; // r10d
  int v43; // eax
  unsigned int v44; // edi
  int v45; // r13d
  __m128 v46; // xmm0
  __int64 v47; // rax
  __m128 *v48; // rdi
  __m128 *v49; // rax
  __m128 *v50; // r8
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  bool v54; // zf
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // r12
  __int8 *v58; // r13
  __int64 v59; // r8
  __int64 m; // r15
  unsigned __int64 v61; // r14
  __m128i *v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rbp
  __int8 *v65; // rsi
  __m128i v66; // xmm0
  __int8 *v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rdx
  char *v70; // rax
  __m128i *v71; // r15
  unsigned __int64 v72; // rdx
  __int64 v73; // r9
  __m128i *k; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rsi
  __m128i *v79; // rcx
  unsigned int v80; // eax
  int v81; // ebx
  __int64 v82; // r13
  __int64 v83; // rax
  __m128i *v84; // rbx
  __int64 v85; // rbp
  __int64 v86; // rax
  __m128i *v87; // rdi
  unsigned int v88; // r8d
  __int64 v89; // rax
  const __m128i *v90; // r13
  __int64 v91; // rdx
  __m128i *v92; // rsi
  __m128i *v93; // rdx
  __int64 v94; // rcx
  __m128i *v95; // rax
  __m128i *v96; // rbx
  __int64 v97; // rax
  size_t v98; // r10
  const __m128i *v99; // rcx
  __m128i *v100; // r11
  __int64 v101; // rax
  int v102; // r9d
  __m128i *v103; // r13
  const __m128i *v104; // rbx
  __m128i *v105; // r8
  const __m128i *v106; // r10
  const __m128i *v107; // r12
  __int64 v108; // r11
  __int64 v109; // r15
  __int64 v110; // rdx
  __m128i *v111; // rsi
  __m128i *v112; // rdx
  __m128i v113; // xmm0
  int v114; // eax
  __m128i *v115; // rax
  unsigned int v116; // edx
  __int64 v117; // rcx
  int v118; // edx
  __m128i *v119; // rcx
  unsigned int v120; // ebx
  unsigned int v121; // ecx
  unsigned int v122; // ebx
  unsigned int v123; // ecx
  unsigned int *v124; // rdx
  __int64 v125; // rcx
  _QWORD *v126; // rax
  __m128i *v127; // [rsp+8h] [rbp-C0h]
  __int64 v128; // [rsp+8h] [rbp-C0h]
  unsigned int v129; // [rsp+10h] [rbp-B8h]
  size_t v130; // [rsp+10h] [rbp-B8h]
  __int64 v131; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v132; // [rsp+20h] [rbp-A8h]
  __int64 v133; // [rsp+28h] [rbp-A0h]
  __int64 v134; // [rsp+30h] [rbp-98h]
  __int64 v135; // [rsp+38h] [rbp-90h]
  __int64 v136; // [rsp+40h] [rbp-88h]
  int v137; // [rsp+4Ch] [rbp-7Ch]
  const __m128i *v138; // [rsp+50h] [rbp-78h]
  __int64 v139; // [rsp+58h] [rbp-70h]
  __int64 v140[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = a1;
  v3 = *(__m128i **)(a1 + 160);
  if ( v3 )
  {
    v3[-1].m128i_i32[3] = 0;
    *(_DWORD *)(a1 + 168) = 0;
    v4 = *(__m128i **)(a1 + 152);
    v127 = v4;
    if ( !v4 )
      goto LABEL_48;
    v5 = (__m128i *)((char *)v4 + 24 * v4[-1].m128i_u32[3]);
    if ( v5 == v4 )
    {
      v5[-1].m128i_i32[3] = 0;
      goto LABEL_48;
    }
  }
  else
  {
    v95 = *(__m128i **)(a1 + 152);
    *(_DWORD *)(a1 + 168) = 0;
    v127 = v95;
    if ( !v95 )
      return;
    v96 = v95;
    v5 = (__m128i *)((char *)v95 + 24 * v95[-1].m128i_u32[3]);
    if ( v96 == v5 )
    {
      v96[-1].m128i_i32[3] = 0;
      return;
    }
  }
  v6 = v127;
  v7 = v5;
  do
  {
    v8 = v6->m128i_i64[0];
    v9 = v6->m128i_i64[1];
    v10 = v6[1].m128i_i64[0];
    v11 = *(_DWORD *)(v6->m128i_i64[0] + 12);
    v12 = *(_QWORD *)(v2 + 184);
    v13 = (*(_DWORD *)(v9 + 12) - v11) ^ (v11 << 8);
    v14 = ((v13 ^ ((v11 - v13) << 16)) + v13 - v11) ^ ((v11 - v13) << 10);
    v15 = (*(_DWORD *)(v10 + 12) - v14) ^ (v14 << 8);
    v16 = ((v15 ^ ((v14 - v15) << 16)) + v15 - v14) ^ ((v14 - v15) << 10);
    v17 = 32LL * *(unsigned int *)(v2 + 192);
    v18 = 32LL * (v16 & (unsigned int)(*(_DWORD *)(v2 + 192) - 1));
    v19 = v12 + v17;
    v20 = v12 + v18;
    if ( v18 != v17 )
    {
      for ( i = v12 + v18; v19 != i; i += 32 )
      {
        v22 = *(_QWORD *)(i + 8);
        if ( v22 > 1 )
        {
          if ( *(_DWORD *)i == v16 && v22 == v8 && *(_QWORD *)(i + 16) == v9 && *(_QWORD *)(i + 24) == v10 )
          {
            v53 = *(_QWORD *)(v2 + 8);
            v54 = (*(_DWORD *)(v8 + 8))-- == 1;
            if ( !v54 )
              goto LABEL_40;
LABEL_69:
            sub_15D7BC0(v53, v8);
            v9 = v6->m128i_i64[1];
            v53 = *(_QWORD *)(v2 + 8);
            if ( !v9 || (v54 = *(_DWORD *)(v9 + 8) == 1, --*(_DWORD *)(v9 + 8), !v54) )
            {
LABEL_41:
              v55 = v6[1].m128i_i64[0];
              if ( v55 )
              {
                v54 = (*(_DWORD *)(v55 + 8))-- == 1;
                if ( v54 )
                  sub_15D7BC0(v53, v55);
              }
              goto LABEL_44;
            }
LABEL_71:
            sub_15D7BC0(v53, v9);
            v53 = *(_QWORD *)(v2 + 8);
            goto LABEL_41;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_12;
        }
      }
    }
    for ( ; v20 != v12; v12 += 32 )
    {
      v72 = *(_QWORD *)(v12 + 8);
      if ( v72 > 1 )
      {
        if ( *(_DWORD *)v12 == v16 && v72 == v8 && *(_QWORD *)(v12 + 16) == v9 && *(_QWORD *)(v12 + 24) == v10 )
        {
          v53 = *(_QWORD *)(v2 + 8);
          v54 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v54 )
            goto LABEL_69;
LABEL_40:
          v54 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( !v54 )
            goto LABEL_41;
          goto LABEL_71;
        }
      }
      else if ( !v72 )
      {
        break;
      }
    }
LABEL_12:
    v23 = *(unsigned int *)(v2 + 136);
    v24 = *(__m128 **)(v2 + 128);
    v25 = v23 - 1;
    v26 = *(_DWORD *)(v2 + 136);
    v27 = 32 * v23;
    v129 = v25;
    v28 = (__m128i *)((char *)v24 + v27);
    v29 = 32LL * (v16 & v25);
    v30 = &v24[(unsigned __int64)v29 / 0x10];
    if ( v29 != v27 )
    {
      for ( j = (__m128i *)&v24[(unsigned __int64)v29 / 0x10]; v28 != j; j += 2 )
      {
        v32 = j->m128i_i64[0];
        if ( j->m128i_i64[0] > 1uLL )
        {
          if ( j[1].m128i_i32[3] == v16 && v8 == v32 && v9 == j->m128i_i64[1] && v10 == j[1].m128i_i64[0] )
          {
LABEL_74:
            v33 = (double)j[1].m128i_i32[2];
            goto LABEL_20;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_19;
        }
      }
    }
    if ( v24 != v30 )
    {
      for ( j = *(__m128i **)(v2 + 128); v30 != (__m128 *)j; j += 2 )
      {
        v73 = j->m128i_i64[0];
        if ( j->m128i_i64[0] > 1uLL )
        {
          if ( j[1].m128i_i32[3] == v16 && v8 == v73 && v9 == j->m128i_i64[1] && v10 == j[1].m128i_i64[0] )
            goto LABEL_74;
        }
        else if ( !v73 )
        {
          break;
        }
      }
    }
LABEL_19:
    v33 = 0.0;
LABEL_20:
    v34 = (unsigned int)(int)(v33 * *(double *)(*(_QWORD *)(v2 + 16) + 24LL));
    if ( (unsigned int)v34 <= 1 )
    {
      if ( v29 != v27 )
      {
        for ( k = (__m128i *)&v24[(unsigned __int64)v29 / 0x10]; v28 != k; k += 2 )
        {
          v75 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( k[1].m128i_i32[3] == v16 && v8 == v75 && v9 == k->m128i_i64[1] && v10 == k[1].m128i_i64[0] )
            {
LABEL_107:
              v79 = k + 2;
              if ( v28 == &k[2] )
                v79 = *(__m128i **)(v2 + 128);
              v80 = *(_DWORD *)(v2 + 140) - 1;
              if ( v79->m128i_i64[0] )
              {
                v81 = *(_DWORD *)(v2 + 144);
                k->m128i_i64[0] = 1;
                *(_DWORD *)(v2 + 140) = v80;
                if ( v80 < 0x40 )
                  v80 = 64;
                *(_DWORD *)(v2 + 144) = v81 + 1;
                if ( v80 < v81 + 1 )
                {
                  if ( !(unsigned __int8)sub_186AF10(v9) )
                  {
                    v82 = *(unsigned int *)(v2 + 136);
                    v83 = sub_186B270(32 * v82);
                    v84 = (__m128i *)v83;
                    v85 = v83 + 32 * v82;
                    if ( (_DWORD)v82 )
                    {
                      do
                      {
                        *(_QWORD *)(v83 + 16) = 0;
                        v83 += 32;
                        *(_OWORD *)(v83 - 32) = 0;
                        *(_DWORD *)(v83 - 4) = 0;
                      }
                      while ( v83 != v85 );
                    }
                    v86 = *(unsigned int *)(v2 + 136);
                    v87 = *(__m128i **)(v2 + 128);
                    v88 = v86 - 1;
                    v89 = 32 * v86;
                    v90 = v87;
                    if ( v87 != &v87[(unsigned __int64)v89 / 0x10] )
                    {
                      v131 = (__int64)v7;
                      v132 = v2;
                      do
                      {
                        if ( v90->m128i_i64[0] > 1uLL )
                        {
                          v91 = 32LL * (v90[1].m128i_i32[3] & v88);
                          v92 = &v84[(unsigned __int64)v91 / 0x10];
                          if ( v89 == v91 )
                          {
LABEL_197:
                            if ( v84 == v92 )
                            {
LABEL_202:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v93 = v84;
                            while ( v93->m128i_i64[0] )
                            {
                              v93 += 2;
                              if ( v92 == v93 )
                                goto LABEL_202;
                            }
                          }
                          else
                          {
                            v93 = &v84[(unsigned __int64)v91 / 0x10];
                            while ( v93->m128i_i64[0] )
                            {
                              v93 += 2;
                              if ( &v84[(unsigned __int64)v89 / 0x10] == v93 )
                                goto LABEL_197;
                            }
                          }
                          *v93 = _mm_loadu_si128(v90);
                          v93[1] = _mm_loadu_si128(v90 + 1);
                        }
                        v90 += 2;
                      }
                      while ( &v87[(unsigned __int64)v89 / 0x10] != v90 );
                      v2 = v132;
                      v7 = (const __m128i *)v131;
                      v87 = *(__m128i **)(v132 + 128);
                    }
                    if ( v87 )
                      sub_186B220(v87);
                    *(_QWORD *)(v2 + 128) = v84;
                    *(_DWORD *)(v2 + 144) = 0;
                  }
                  v8 = v6->m128i_i64[0];
                  v76 = *(_QWORD *)(v2 + 8);
                  if ( v6->m128i_i64[0] )
                  {
LABEL_97:
                    v54 = (*(_DWORD *)(v8 + 8))-- == 1;
                    if ( v54 )
                    {
                      sub_15D7BC0(v76, v8);
                      v76 = *(_QWORD *)(v2 + 8);
                    }
                  }
                  v77 = v6->m128i_i64[1];
                  if ( v77 )
                  {
                    v54 = (*(_DWORD *)(v77 + 8))-- == 1;
                    if ( v54 )
                    {
                      sub_15D7BC0(v76, v77);
                      v76 = *(_QWORD *)(v2 + 8);
                    }
                  }
                  v78 = v6[1].m128i_i64[0];
                  if ( v78 )
                  {
                    v54 = (*(_DWORD *)(v78 + 8))-- == 1;
                    if ( v54 )
                      sub_15D7BC0(v76, v78);
                  }
                  goto LABEL_44;
                }
              }
              else
              {
                k->m128i_i64[0] = 0;
                *(_DWORD *)(v2 + 140) = v80;
              }
LABEL_96:
              v76 = *(_QWORD *)(v2 + 8);
              goto LABEL_97;
            }
          }
          else if ( !v75 )
          {
            goto LABEL_96;
          }
        }
      }
      if ( v24 != v30 )
      {
        k = *(__m128i **)(v2 + 128);
        while ( 1 )
        {
          v94 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( k[1].m128i_i32[3] == v16 && v8 == v94 && v9 == k->m128i_i64[1] && v10 == k[1].m128i_i64[0] )
              goto LABEL_107;
          }
          else if ( !v94 )
          {
            goto LABEL_96;
          }
          k += 2;
          if ( v30 == (__m128 *)k )
            goto LABEL_96;
        }
      }
      goto LABEL_96;
    }
    *v127 = _mm_loadu_si128(v6);
    v127[1].m128i_i64[0] = v6[1].m128i_i64[0];
    v35 = v6->m128i_i64[0];
    v36 = v6[1].m128i_i64[0];
    v37 = *(_DWORD *)(v6->m128i_i64[0] + 12);
    v38 = *(_DWORD *)(v6->m128i_i64[1] + 12);
    v131 = v6->m128i_i64[1];
    v39 = (((v38 - v37) ^ (v37 << 8) ^ ((v37 - ((v38 - v37) ^ (v37 << 8))) << 16)) + ((v38 - v37) ^ (v37 << 8)) - v37)
        ^ ((v37 - ((v38 - v37) ^ (v37 << 8))) << 10);
    v40 = (*(_DWORD *)(v36 + 12) - v39) ^ (v39 << 8);
    v41 = (v39 - v40) << 10;
    v42 = v40 ^ ((v39 - v40) << 16);
    v43 = v40 - v39;
    v44 = 2 * v26;
    LODWORD(v132) = 2 * v26;
    v45 = (v42 + v43) ^ v41;
    if ( 3 * v26 < (unsigned int)(4 * (*(_DWORD *)(v2 + 140) + *(_DWORD *)(v2 + 144))) )
    {
      v135 = v34;
      v134 = v35;
      v133 = v36;
      v130 = 32LL * v44;
      v97 = sub_186B270(v130);
      v27 = v130;
      v36 = v133;
      v35 = v134;
      v24 = (__m128 *)v97;
      v34 = v135;
      v98 = v97 + v130;
      if ( v44 )
      {
        do
        {
          *(_QWORD *)(v97 + 16) = 0;
          v97 += 32;
          *(_OWORD *)(v97 - 32) = 0;
          *(_DWORD *)(v97 - 4) = 0;
        }
        while ( v97 != v98 );
      }
      v99 = *(const __m128i **)(v2 + 128);
      v28 = (__m128i *)v98;
      v100 = (__m128i *)&v99[2 * *(unsigned int *)(v2 + 136)];
      v129 = v132 - 1;
      if ( v99 != v100 )
      {
        v133 = v34;
        v101 = v35;
        v102 = v45;
        v103 = (__m128i *)v24;
        v104 = v99;
        v105 = (__m128i *)v98;
        v106 = v7;
        v107 = v100;
        v108 = v2;
        v109 = v36;
        do
        {
          while ( v104->m128i_i64[0] <= 1uLL )
          {
            v104 += 2;
            if ( v107 == v104 )
              goto LABEL_157;
          }
          v110 = 2LL * (v104[1].m128i_i32[3] & v129);
          v111 = &v103[v110];
          if ( 2LL * v44 == v110 )
          {
LABEL_161:
            if ( v103 == v111 )
            {
LABEL_178:
              v139 = v108;
              v138 = v106;
              v137 = v102;
              v136 = (__int64)v105;
              v135 = (__int64)v6;
              v134 = v101;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v112 = v103;
            while ( v112->m128i_i64[0] )
            {
              v112 += 2;
              if ( v111 == v112 )
                goto LABEL_178;
            }
          }
          else
          {
            v112 = &v103[v110];
            while ( v112->m128i_i64[0] )
            {
              v112 += 2;
              if ( v28 == v112 )
                goto LABEL_161;
            }
          }
          v113 = _mm_loadu_si128(v104);
          v104 += 2;
          *v112 = v113;
          v112[1] = _mm_loadu_si128(v104 - 1);
        }
        while ( v107 != v104 );
LABEL_157:
        v36 = v109;
        v24 = (__m128 *)v103;
        v2 = v108;
        v45 = v102;
        v100 = *(__m128i **)(v108 + 128);
        v28 = v105;
        v35 = v101;
        v27 = 32LL * v44;
        v34 = v133;
        v7 = v106;
      }
      if ( v100 )
      {
        v136 = v34;
        v135 = v27;
        v134 = v35;
        v133 = v36;
        sub_186B220(v100);
        LODWORD(v34) = v136;
        v27 = v135;
        v35 = v134;
        v36 = v133;
      }
      v114 = v132;
      *(_QWORD *)(v2 + 128) = v24;
      *(_DWORD *)(v2 + 144) = 0;
      *(_DWORD *)(v2 + 136) = v114;
    }
    v46 = _mm_loadh_ps((const double *)&v131);
    v47 = 32LL * (v45 & v129);
    v48 = &v24[(unsigned __int64)v47 / 0x10];
    if ( v47 != v27 )
    {
      v49 = &v24[(unsigned __int64)v47 / 0x10];
      v50 = nullptr;
      while ( 1 )
      {
        v51 = v49->m128_u64[0];
        if ( v49->m128_u64[0] > 1 )
        {
          if ( v49[1].m128_i32[3] == v45 && v35 == v51 && v131 == v49->m128_u64[1] && v36 == v49[1].m128_u64[0] )
          {
            v49[1].m128_u64[0] = v36;
            v49[1].m128_i32[2] = v34;
            v49[1].m128_i32[3] = v45;
            *v49 = v46;
            goto LABEL_137;
          }
        }
        else
        {
          if ( !v51 )
          {
            if ( v50 )
              goto LABEL_171;
            v50 = v49;
            goto LABEL_172;
          }
          v50 = v49;
        }
        v49 += 2;
        if ( v49 == (__m128 *)v28 )
          goto LABEL_33;
      }
    }
    v50 = nullptr;
    while ( 1 )
    {
LABEL_33:
      if ( v48 == v24 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v52 = v24->m128_u64[0];
      if ( v24->m128_u64[0] <= 1 )
        break;
      if ( v24[1].m128_i32[3] == v45 && v35 == v52 && v131 == v24->m128_u64[1] && v36 == v24[1].m128_u64[0] )
      {
        v24[1].m128_u64[0] = v36;
        v24[1].m128_i32[2] = v34;
        v24[1].m128_i32[3] = v45;
        *v24 = v46;
        goto LABEL_137;
      }
LABEL_32:
      v24 += 2;
    }
    if ( v52 )
    {
      v50 = v24;
      goto LABEL_32;
    }
    if ( v50 )
LABEL_171:
      --*(_DWORD *)(v2 + 144);
    else
      v50 = v24;
LABEL_172:
    v50[1].m128_u64[0] = v36;
    v50[1].m128_i32[2] = v34;
    v50[1].m128_i32[3] = v45;
    *v50 = v46;
    ++*(_DWORD *)(v2 + 140);
LABEL_137:
    if ( (unsigned int)v34 >= *(_DWORD *)(*(_QWORD *)(v2 + 16) + 16LL) )
    {
      v115 = *(__m128i **)(v2 + 160);
      if ( v115 )
      {
        v116 = v115[-1].m128i_u32[3];
        if ( v116 == v115[-1].m128i_i32[2] )
        {
          v120 = 3 * v116 + 1;
          v121 = v120 & 0xFFFFFFFE;
          v122 = v120 >> 1;
          v123 = 8 * (v122 + v121) + 8;
          if ( 24 * v116 + 8 >= v123 || v116 >= v122 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v140, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v140);
            sub_233E40((__int64)v140);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v124 = (unsigned int *)sub_186B300(&v115[-1].m128i_u64[1], v123);
          v115 = (__m128i *)(v124 + 2);
          v125 = v124[1];
          *v124 = v122;
          *(_QWORD *)(v2 + 160) = v124 + 2;
          LODWORD(v124) = v125;
          v119 = (__m128i *)((char *)v115 + 24 * v125);
          v118 = (_DWORD)v124 + 1;
        }
        else
        {
          v117 = v116;
          v118 = v116 + 1;
          v119 = (__m128i *)((char *)v115 + 24 * v117);
        }
      }
      else
      {
        v126 = (_QWORD *)sub_186B270(0x38u);
        v118 = 1;
        *v126 = 2;
        v115 = (__m128i *)(v126 + 1);
        *(_QWORD *)(v2 + 160) = v115;
        v119 = v115;
      }
      *v119 = _mm_loadu_si128(v6);
      v119[1].m128i_i64[0] = v6[1].m128i_i64[0];
      v115[-1].m128i_i32[3] = v118;
    }
    v127 = (__m128i *)((char *)v127 + 24);
LABEL_44:
    v6 = (const __m128i *)((char *)v6 + 24);
  }
  while ( v6 != v7 );
  v56 = *(_QWORD *)(v2 + 152);
  v3 = *(__m128i **)(v2 + 160);
  if ( v56 )
    *(_DWORD *)(v56 - 4) = -1431655765 * (((__int64)v127->m128i_i64 - v56) >> 3);
  if ( !v3 )
    return;
LABEL_48:
  v57 = 24LL * v3[-1].m128i_u32[3];
  v58 = &v3->m128i_i8[v57];
  if ( &v3->m128i_i8[v57] == (__int8 *)v3 )
    return;
  v128 = v2 + 128;
  v59 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v57 >> 3) + 1) >> 1;
  if ( !v59 )
  {
    v71 = v3;
    v61 = 0;
    v64 = nullptr;
    goto LABEL_56;
  }
  for ( m = (__int64)(0xAAAAAAAAAAAAAAABLL * (v57 >> 3) + 1) >> 1; ; m = (m + 1) >> 1 )
  {
    v131 = v59;
    v61 = 24 * m;
    v62 = (__m128i *)operator new(24 * m, (const std::nothrow_t *)&std::nothrow);
    v59 = v131;
    v64 = (__int64 *)v62;
    if ( v62 )
    {
      v65 = &v62->m128i_i8[v61];
      v66 = _mm_loadu_si128(v3);
      *v62 = v66;
      v62[1].m128i_i64[0] = v3[1].m128i_i64[0];
      v67 = &v62[1].m128i_i8[8];
      if ( v61 != 24 )
      {
        do
        {
          v68 = _mm_loadu_si128((const __m128i *)(v67 - 24));
          v69 = *((_QWORD *)v67 - 1);
          v67 += 24;
          *(__m128i *)(v67 - 24) = v68;
          *((_QWORD *)v67 - 1) = v69;
        }
        while ( v65 != v67 );
        v70 = (char *)v64 + ((v65 - (__int8 *)v64 - 48) & 0xFFFFFFFFFFFFFFF8LL);
        *v3 = _mm_loadu_si128((const __m128i *)(v70 + 24));
        v3[1].m128i_i64[0] = *((_QWORD *)v70 + 5);
        if ( m == v59 )
        {
          v71 = (__m128i *)((char *)v3 + v61);
          goto LABEL_56;
        }
        goto LABEL_177;
      }
      *v3 = v66;
      v3[1].m128i_i64[0] = v64[2];
      if ( m != v59 )
      {
LABEL_177:
        sub_965990(v3, v58, v64, m, v128);
        goto LABEL_57;
      }
      v71 = (__m128i *)((char *)v3 + 24);
LABEL_56:
      sub_9650D0(v3, v71, v64, v128);
      sub_9650D0(v71, v58, v64, v128);
      sub_9603B0(v3, v128);
      goto LABEL_57;
    }
    if ( m == 1 )
      break;
  }
  v61 = 0;
  sub_961CE0(v3, v58, v128, v63, v131);
LABEL_57:
  operator delete(v64, v61);
}

