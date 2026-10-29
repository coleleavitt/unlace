__int64 __fastcall sub_D93300(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbx
  __int64 *v4; // r15
  __int64 v5; // r12
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // esi
  unsigned int v12; // edx
  __m128i *v13; // rbp
  unsigned int v14; // r11d
  size_t v15; // r15
  __int64 *m128i_i64; // r13
  int v17; // edi
  __int64 v18; // r11
  __m128i *v19; // r8
  __int64 *v20; // rax
  __int64 *v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // r12
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r14
  int v33; // esi
  unsigned int v34; // edx
  __m128i *v35; // rbp
  unsigned int v36; // r11d
  size_t v37; // r14
  __int64 *v38; // r13
  int v39; // edi
  __int64 v40; // r11
  __m128i *v41; // r8
  __int64 *v42; // rax
  __int64 *v43; // r11
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 *v47; // rbx
  __int64 *v48; // r14
  __int64 v49; // r12
  __int64 *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // r14
  int v55; // esi
  unsigned int v56; // edx
  __m128i *v57; // rbp
  unsigned int v58; // r11d
  size_t v59; // r14
  __int64 *v60; // r13
  int v61; // edi
  __int64 v62; // r11
  __m128i *v63; // r8
  __int64 *v64; // rax
  __int64 *v65; // r11
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 *v69; // rbx
  __int64 *v70; // r15
  __int64 v71; // r12
  __int64 *v72; // r13
  __int64 v73; // rax
  __int64 v74; // r10
  __int64 v75; // r15
  int v76; // ecx
  __int64 *v77; // rbp
  unsigned int v78; // r8d
  __int64 v79; // rdx
  __m128 *v80; // r15
  int v81; // esi
  __int64 v82; // rax
  __int64 *v83; // rdi
  __int64 *v84; // rax
  __int64 *v85; // r11
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 *v88; // rax
  __int64 v90; // rax
  unsigned int v91; // edx
  __m128i *v92; // r8
  const __m128i *v93; // r14
  __int64 v94; // rdi
  __m128i *v95; // r9
  __int64 v96; // rax
  __m128i *v97; // r12
  const __m128i *v98; // rbp
  __int64 v99; // rdx
  __m128i *v100; // rsi
  __m128i *v101; // rdx
  __m128i v102; // xmm0
  __int64 v103; // rax
  unsigned int v104; // edx
  __m128i *v105; // r8
  const __m128i *v106; // r15
  __int64 v107; // rdi
  __m128i *v108; // r9
  __int64 v109; // rax
  __m128i *v110; // r12
  const __m128i *v111; // rbp
  __int64 v112; // rdx
  __m128i *v113; // rsi
  __m128i *v114; // rdx
  __m128i v115; // xmm0
  __int64 v116; // rax
  unsigned int v117; // edx
  __m128i *v118; // r8
  const __m128i *v119; // r15
  __int64 v120; // rdi
  __m128i *v121; // r9
  __int64 v122; // rax
  __m128i *v123; // r12
  const __m128i *v124; // rbp
  __int64 v125; // rdx
  __m128i *v126; // rsi
  __m128i *v127; // rdx
  __m128i v128; // xmm0
  __int64 *v129; // rax
  int v130; // r11d
  __int64 *v131; // rcx
  double *v132; // rcx
  double *v133; // r9
  __int64 *v134; // rax
  const double *v135; // rbx
  __int64 v136; // rdx
  __m128 *v137; // rdi
  __m128 *v138; // rdx
  __int64 v139; // [rsp+0h] [rbp-88h]
  __int64 *v141; // [rsp+10h] [rbp-78h]
  __int64 *v142; // [rsp+10h] [rbp-78h]
  __int64 *v143; // [rsp+10h] [rbp-78h]
  __int64 v144; // [rsp+10h] [rbp-78h]
  unsigned int v145; // [rsp+10h] [rbp-78h]
  __int64 v146; // [rsp+10h] [rbp-78h]
  unsigned int v147; // [rsp+10h] [rbp-78h]
  __int64 v148; // [rsp+10h] [rbp-78h]
  unsigned int v149; // [rsp+10h] [rbp-78h]
  __int64 v150; // [rsp+10h] [rbp-78h]
  __int64 v151; // [rsp+18h] [rbp-70h]
  unsigned int v152; // [rsp+18h] [rbp-70h]
  __int64 v153; // [rsp+18h] [rbp-70h]
  unsigned int v154; // [rsp+18h] [rbp-70h]
  __int64 v155; // [rsp+18h] [rbp-70h]
  unsigned int v156; // [rsp+18h] [rbp-70h]
  size_t v157; // [rsp+18h] [rbp-70h]
  __int64 v158; // [rsp+18h] [rbp-70h]
  __int64 *v159; // [rsp+20h] [rbp-68h]
  unsigned int v160; // [rsp+20h] [rbp-68h]
  __int64 *v161; // [rsp+20h] [rbp-68h]
  unsigned int v162; // [rsp+20h] [rbp-68h]
  __int64 *v163; // [rsp+20h] [rbp-68h]
  unsigned int v164; // [rsp+20h] [rbp-68h]
  unsigned int v165; // [rsp+20h] [rbp-68h]
  __int64 v167; // [rsp+28h] [rbp-60h]
  __int64 v168; // [rsp+28h] [rbp-60h]
  __int64 v169; // [rsp+28h] [rbp-60h]
  __int64 *v170; // [rsp+30h] [rbp-58h]
  __int64 *v171; // [rsp+30h] [rbp-58h]
  __int64 *v172; // [rsp+30h] [rbp-58h]
  __int64 v173; // [rsp+30h] [rbp-58h]
  int v174; // [rsp+30h] [rbp-58h]

  v2 = a1;
  v139 = sub_186B270(0xD8u);
  sub_D8DE20(v139, a2[1]);
  v3 = *(__int64 **)(a1 + 120);
  v4 = &v3[2 * *(unsigned int *)(a1 + 128)];
  if ( v4 != v3 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_36;
    }
    if ( v4 != v3 )
    {
      v5 = *v3;
      v6 = v4;
      while ( 1 )
      {
        if ( *a2 == a2[1] )
        {
          v8 = v3[1];
        }
        else
        {
          v141 = v6;
          v7 = sub_15CFF50(a2, v5);
          v8 = v3[1];
          v6 = v141;
          v5 = v7;
          if ( *a2 != a2[1] )
          {
            v9 = sub_15CFF50(a2, v3[1]);
            v6 = v141;
            v8 = v9;
          }
        }
        v10 = *(unsigned int *)(v139 + 128);
        v11 = *(_DWORD *)(v139 + 136);
        v12 = 2 * v10;
        if ( 3 * (int)v10 < (unsigned int)(4 * (v11 + *(_DWORD *)(v139 + 132))) )
        {
          v159 = v6;
          v15 = 16LL * v12;
          v151 = v8;
          v145 = v12;
          v90 = sub_186B270(v15);
          v91 = v145;
          v8 = v151;
          v6 = v159;
          v13 = (__m128i *)v90;
          v92 = (__m128i *)(v15 + v90);
          if ( v145 )
          {
            if ( (v15 & 0x10) == 0 || (v90 += 16, *(_OWORD *)(v90 - 16) = 0, (__m128i *)v90 != v92) )
            {
              do
              {
                v90 += 32;
                *(_OWORD *)(v90 - 32) = 0;
                *(_OWORD *)(v90 - 16) = 0;
              }
              while ( (__m128i *)v90 != v92 );
            }
          }
          v14 = v145 - 1;
          m128i_i64 = (__int64 *)v92;
          v93 = *(const __m128i **)(v139 + 120);
          v94 = *(unsigned int *)(v139 + 128);
          v95 = (__m128i *)&v93[v94];
          if ( v93 != &v93[v94] )
          {
            v96 = v5;
            v97 = v13;
            v98 = &v93[v94];
            do
            {
              while ( v93->m128i_i64[0] <= 1uLL )
              {
                if ( v98 == ++v93 )
                  goto LABEL_157;
              }
              v99 = 16LL * (*(_DWORD *)(v93->m128i_i64[0] + 12) & v14);
              v100 = &v97[(unsigned __int64)v99 / 0x10];
              if ( v15 == v99 )
              {
LABEL_161:
                if ( v97 == v100 )
                {
LABEL_250:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v101 = v97;
                while ( v101->m128i_i64[0] )
                {
                  if ( v100 == ++v101 )
                    goto LABEL_250;
                }
              }
              else
              {
                v101 = &v97[(unsigned __int64)v99 / 0x10];
                while ( v101->m128i_i64[0] )
                {
                  if ( v92 == ++v101 )
                    goto LABEL_161;
                }
              }
              v102 = _mm_loadu_si128(v93++);
              *v101 = v102;
            }
            while ( v98 != v93 );
LABEL_157:
            v13 = v97;
            v5 = v96;
            v91 = v145;
            m128i_i64 = (__int64 *)v92;
            v95 = *(__m128i **)(v139 + 120);
          }
          if ( v95 )
          {
            v170 = v159;
            v160 = v91;
            v152 = v145 - 1;
            v146 = v8;
            sub_186B220(v95);
            v6 = v170;
            v91 = v160;
            v14 = v152;
            v8 = v146;
          }
          v11 = 0;
          *(_QWORD *)(v139 + 120) = v13;
          *(_DWORD *)(v139 + 128) = v91;
          *(_DWORD *)(v139 + 136) = 0;
        }
        else
        {
          v13 = *(__m128i **)(v139 + 120);
          v14 = v10 - 1;
          v15 = 16 * v10;
          m128i_i64 = v13[v15 / 0x10].m128i_i64;
        }
        v17 = *(_DWORD *)(v5 + 12);
        v18 = 16LL * (v17 & v14);
        v19 = &v13[(unsigned __int64)v18 / 0x10];
        if ( v18 != v15 )
        {
          v20 = v13[(unsigned __int64)v18 / 0x10].m128i_i64;
          v21 = nullptr;
          while ( 1 )
          {
            v22 = *v20;
            if ( (unsigned __int64)*v20 > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v17 && v5 == v22 )
              {
                *v20 = v5;
                v20[1] = v8;
                goto LABEL_28;
              }
            }
            else
            {
              if ( !v22 )
              {
                if ( v21 )
                  goto LABEL_237;
                v21 = v20;
                goto LABEL_238;
              }
              v21 = v20;
            }
            v20 += 2;
            if ( v20 == m128i_i64 )
              goto LABEL_23;
          }
        }
        v21 = nullptr;
        while ( 1 )
        {
LABEL_23:
          if ( v19 == v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v23 = v13->m128i_i64[0];
          if ( v13->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v23 + 12) == v17 && v5 == v23 )
          {
            v13->m128i_i64[0] = v5;
            v13->m128i_i64[1] = v8;
            goto LABEL_28;
          }
LABEL_22:
          ++v13;
        }
        if ( v23 )
          break;
        if ( v21 )
LABEL_237:
          *(_DWORD *)(v139 + 136) = v11 - 1;
        else
          v21 = (__int64 *)v13;
LABEL_238:
        *v21 = v5;
        v21[1] = v8;
        ++*(_DWORD *)(v139 + 132);
LABEL_28:
        ++*(_DWORD *)(v5 + 8);
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v24 = v3 + 2;
        if ( v6 != v3 + 2 )
        {
          while ( 1 )
          {
            v5 = *v24;
            v3 = v24;
            if ( (unsigned __int64)*v24 > 1 )
              break;
            v24 += 2;
            if ( v6 == v24 )
              goto LABEL_35;
          }
          if ( v6 != v24 )
            continue;
        }
LABEL_35:
        v2 = a1;
        goto LABEL_36;
      }
      v21 = (__int64 *)v13;
      goto LABEL_22;
    }
  }
LABEL_36:
  v25 = *(__int64 **)(v2 + 144);
  v26 = &v25[2 * *(unsigned int *)(v2 + 152)];
  if ( v25 == v26 )
    goto LABEL_71;
  while ( (unsigned __int64)*v25 <= 1 )
  {
    v25 += 2;
    if ( v26 == v25 )
      goto LABEL_71;
  }
  if ( v26 != v25 )
  {
    v167 = v2;
    v27 = *v25;
    v28 = v26;
    while ( 1 )
    {
      if ( *a2 == a2[1] )
      {
        v30 = v25[1];
      }
      else
      {
        v142 = v28;
        v29 = sub_15CFF50(a2, v27);
        v30 = v25[1];
        v28 = v142;
        v27 = v29;
        if ( *a2 != a2[1] )
        {
          v31 = sub_15CFF50(a2, v25[1]);
          v28 = v142;
          v30 = v31;
        }
      }
      v32 = *(unsigned int *)(v139 + 152);
      v33 = *(_DWORD *)(v139 + 160);
      v34 = 2 * v32;
      if ( 3 * (int)v32 < (unsigned int)(4 * (v33 + *(_DWORD *)(v139 + 156))) )
      {
        v161 = v28;
        v37 = 16LL * v34;
        v153 = v30;
        v147 = v34;
        v103 = sub_186B270(v37);
        v104 = v147;
        v30 = v153;
        v28 = v161;
        v35 = (__m128i *)v103;
        v105 = (__m128i *)(v37 + v103);
        if ( v147 )
        {
          if ( (v37 & 0x10) == 0 || (v103 += 16, *(_OWORD *)(v103 - 16) = 0, (__m128i *)v103 != v105) )
          {
            do
            {
              v103 += 32;
              *(_OWORD *)(v103 - 32) = 0;
              *(_OWORD *)(v103 - 16) = 0;
            }
            while ( (__m128i *)v103 != v105 );
          }
        }
        v36 = v147 - 1;
        v38 = (__int64 *)v105;
        v106 = *(const __m128i **)(v139 + 144);
        v107 = *(unsigned int *)(v139 + 152);
        v108 = (__m128i *)&v106[v107];
        if ( v106 != &v106[v107] )
        {
          v109 = v27;
          v110 = v35;
          v111 = &v106[v107];
          do
          {
            while ( v106->m128i_i64[0] <= 1uLL )
            {
              if ( v111 == ++v106 )
                goto LABEL_179;
            }
            v112 = 16LL * (*(_DWORD *)(v106->m128i_i64[0] + 12) & v36);
            v113 = &v110[(unsigned __int64)v112 / 0x10];
            if ( v37 == v112 )
            {
LABEL_183:
              if ( v110 == v113 )
              {
LABEL_248:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v114 = v110;
              while ( v114->m128i_i64[0] )
              {
                if ( v113 == ++v114 )
                  goto LABEL_248;
              }
            }
            else
            {
              v114 = &v110[(unsigned __int64)v112 / 0x10];
              while ( v114->m128i_i64[0] )
              {
                if ( v105 == ++v114 )
                  goto LABEL_183;
              }
            }
            v115 = _mm_loadu_si128(v106++);
            *v114 = v115;
          }
          while ( v111 != v106 );
LABEL_179:
          v35 = v110;
          v27 = v109;
          v104 = v147;
          v38 = (__int64 *)v105;
          v108 = *(__m128i **)(v139 + 144);
        }
        if ( v108 )
        {
          v171 = v161;
          v162 = v104;
          v154 = v147 - 1;
          v148 = v30;
          sub_186B220(v108);
          v28 = v171;
          v104 = v162;
          v36 = v154;
          v30 = v148;
        }
        v33 = 0;
        *(_QWORD *)(v139 + 144) = v35;
        *(_DWORD *)(v139 + 152) = v104;
        *(_DWORD *)(v139 + 160) = 0;
      }
      else
      {
        v35 = *(__m128i **)(v139 + 144);
        v36 = v32 - 1;
        v37 = 16 * v32;
        v38 = v35[v37 / 0x10].m128i_i64;
      }
      v39 = *(_DWORD *)(v27 + 12);
      v40 = 16LL * (v39 & v36);
      v41 = &v35[(unsigned __int64)v40 / 0x10];
      if ( v40 != v37 )
      {
        v42 = v35[(unsigned __int64)v40 / 0x10].m128i_i64;
        v43 = nullptr;
        while ( 1 )
        {
          v44 = *v42;
          if ( (unsigned __int64)*v42 > 1 )
          {
            if ( *(_DWORD *)(v44 + 12) == v39 && v27 == v44 )
            {
              *v42 = v27;
              v42[1] = v30;
              goto LABEL_63;
            }
          }
          else
          {
            if ( !v44 )
            {
              if ( v43 )
                goto LABEL_240;
              v43 = v42;
              goto LABEL_241;
            }
            v43 = v42;
          }
          v42 += 2;
          if ( v42 == v38 )
            goto LABEL_58;
        }
      }
      v43 = nullptr;
      while ( 1 )
      {
LABEL_58:
        if ( v41 == v35 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v45 = v35->m128i_i64[0];
        if ( v35->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v45 + 12) == v39 && v27 == v45 )
        {
          v35->m128i_i64[0] = v27;
          v35->m128i_i64[1] = v30;
          goto LABEL_63;
        }
LABEL_57:
        ++v35;
      }
      if ( v45 )
        break;
      if ( v43 )
LABEL_240:
        *(_DWORD *)(v139 + 160) = v33 - 1;
      else
        v43 = (__int64 *)v35;
LABEL_241:
      *v43 = v27;
      v43[1] = v30;
      ++*(_DWORD *)(v139 + 156);
LABEL_63:
      ++*(_DWORD *)(v27 + 8);
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      v46 = v25 + 2;
      if ( v28 != v25 + 2 )
      {
        while ( 1 )
        {
          v27 = *v46;
          v25 = v46;
          if ( (unsigned __int64)*v46 > 1 )
            break;
          v46 += 2;
          if ( v28 == v46 )
            goto LABEL_70;
        }
        if ( v28 != v46 )
          continue;
      }
LABEL_70:
      v2 = v167;
      goto LABEL_71;
    }
    v43 = (__int64 *)v35;
    goto LABEL_57;
  }
LABEL_71:
  v47 = *(__int64 **)(v2 + 168);
  v48 = &v47[2 * *(unsigned int *)(v2 + 176)];
  if ( v47 != v48 )
  {
    while ( (unsigned __int64)*v47 <= 1 )
    {
      v47 += 2;
      if ( v48 == v47 )
        goto LABEL_106;
    }
    if ( v48 != v47 )
    {
      v168 = v2;
      v49 = *v47;
      v50 = v48;
      while ( 1 )
      {
        if ( *a2 == a2[1] )
        {
          v52 = v47[1];
        }
        else
        {
          v143 = v50;
          v51 = sub_15CFF50(a2, v49);
          v52 = v47[1];
          v50 = v143;
          v49 = v51;
          if ( *a2 != a2[1] )
          {
            v53 = sub_15CFF50(a2, v47[1]);
            v50 = v143;
            v52 = v53;
          }
        }
        v54 = *(unsigned int *)(v139 + 176);
        v55 = *(_DWORD *)(v139 + 184);
        v56 = 2 * v54;
        if ( 3 * (int)v54 < (unsigned int)(4 * (v55 + *(_DWORD *)(v139 + 180))) )
        {
          v163 = v50;
          v59 = 16LL * v56;
          v155 = v52;
          v149 = v56;
          v116 = sub_186B270(v59);
          v117 = v149;
          v52 = v155;
          v50 = v163;
          v57 = (__m128i *)v116;
          v118 = (__m128i *)(v59 + v116);
          if ( v149 )
          {
            if ( (v59 & 0x10) == 0 || (v116 += 16, *(_OWORD *)(v116 - 16) = 0, v118 != (__m128i *)v116) )
            {
              do
              {
                v116 += 32;
                *(_OWORD *)(v116 - 32) = 0;
                *(_OWORD *)(v116 - 16) = 0;
              }
              while ( v118 != (__m128i *)v116 );
            }
          }
          v58 = v149 - 1;
          v60 = (__int64 *)v118;
          v119 = *(const __m128i **)(v139 + 168);
          v120 = *(unsigned int *)(v139 + 176);
          v121 = (__m128i *)&v119[v120];
          if ( v119 != &v119[v120] )
          {
            v122 = v49;
            v123 = v57;
            v124 = &v119[v120];
            do
            {
              while ( v119->m128i_i64[0] <= 1uLL )
              {
                if ( v124 == ++v119 )
                  goto LABEL_201;
              }
              v125 = 16LL * (*(_DWORD *)(v119->m128i_i64[0] + 12) & v58);
              v126 = &v123[(unsigned __int64)v125 / 0x10];
              if ( v59 == v125 )
              {
LABEL_205:
                if ( v123 == v126 )
                {
LABEL_249:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v127 = v123;
                while ( v127->m128i_i64[0] )
                {
                  if ( v126 == ++v127 )
                    goto LABEL_249;
                }
              }
              else
              {
                v127 = &v123[(unsigned __int64)v125 / 0x10];
                while ( v127->m128i_i64[0] )
                {
                  if ( v118 == ++v127 )
                    goto LABEL_205;
                }
              }
              v128 = _mm_loadu_si128(v119++);
              *v127 = v128;
            }
            while ( v124 != v119 );
LABEL_201:
            v57 = v123;
            v49 = v122;
            v117 = v149;
            v60 = (__int64 *)v118;
            v121 = *(__m128i **)(v139 + 168);
          }
          if ( v121 )
          {
            v172 = v163;
            v164 = v117;
            v156 = v149 - 1;
            v150 = v52;
            sub_186B220(v121);
            v50 = v172;
            v117 = v164;
            v58 = v156;
            v52 = v150;
          }
          v55 = 0;
          *(_QWORD *)(v139 + 168) = v57;
          *(_DWORD *)(v139 + 176) = v117;
          *(_DWORD *)(v139 + 184) = 0;
        }
        else
        {
          v57 = *(__m128i **)(v139 + 168);
          v58 = v54 - 1;
          v59 = 16 * v54;
          v60 = v57[v59 / 0x10].m128i_i64;
        }
        v61 = *(_DWORD *)(v49 + 12);
        v62 = 16LL * (v61 & v58);
        v63 = &v57[(unsigned __int64)v62 / 0x10];
        if ( v62 != v59 )
        {
          v64 = v57[(unsigned __int64)v62 / 0x10].m128i_i64;
          v65 = nullptr;
          while ( 1 )
          {
            v66 = *v64;
            if ( (unsigned __int64)*v64 > 1 )
            {
              if ( *(_DWORD *)(v66 + 12) == v61 && v49 == v66 )
              {
                *v64 = v49;
                v64[1] = v52;
                goto LABEL_98;
              }
            }
            else
            {
              if ( !v66 )
              {
                if ( v65 )
                  goto LABEL_246;
                v65 = v64;
                goto LABEL_247;
              }
              v65 = v64;
            }
            v64 += 2;
            if ( v64 == v60 )
              goto LABEL_93;
          }
        }
        v65 = nullptr;
        while ( 1 )
        {
LABEL_93:
          if ( v63 == v57 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v67 = v57->m128i_i64[0];
          if ( v57->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v67 + 12) == v61 && v49 == v67 )
          {
            v57->m128i_i64[0] = v49;
            v57->m128i_i64[1] = v52;
            goto LABEL_98;
          }
LABEL_92:
          ++v57;
        }
        if ( v67 )
          break;
        if ( v65 )
LABEL_246:
          *(_DWORD *)(v139 + 184) = v55 - 1;
        else
          v65 = (__int64 *)v57;
LABEL_247:
        *v65 = v49;
        v65[1] = v52;
        ++*(_DWORD *)(v139 + 180);
LABEL_98:
        ++*(_DWORD *)(v49 + 8);
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        v68 = v47 + 2;
        if ( v50 != v47 + 2 )
        {
          while ( 1 )
          {
            v49 = *v68;
            v47 = v68;
            if ( (unsigned __int64)*v68 > 1 )
              break;
            v68 += 2;
            if ( v50 == v68 )
              goto LABEL_105;
          }
          if ( v50 != v68 )
            continue;
        }
LABEL_105:
        v2 = v168;
        goto LABEL_106;
      }
      v65 = (__int64 *)v57;
      goto LABEL_92;
    }
  }
LABEL_106:
  v69 = *(__int64 **)(v2 + 192);
  v70 = &v69[3 * *(unsigned int *)(v2 + 200)];
  if ( v69 == v70 )
    return v139;
  while ( (unsigned __int64)*v69 <= 1 )
  {
    v69 += 3;
    if ( v70 == v69 )
      return v139;
  }
  if ( v70 == v69 )
    return v139;
  v71 = *v69;
  v72 = v70;
  do
  {
    if ( *a2 == a2[1] )
    {
      v144 = v69[1];
    }
    else
    {
      v71 = sub_15CFF50(a2, v71);
      v144 = v69[1];
      if ( *a2 != a2[1] )
      {
        v73 = sub_15CFF50(a2, v69[1]);
        v74 = v69[2];
        v144 = v73;
        if ( *a2 != a2[1] )
          v74 = sub_15CFF50(a2, v74);
        goto LABEL_116;
      }
    }
    v74 = v69[2];
LABEL_116:
    v75 = *(unsigned int *)(v139 + 200);
    v76 = *(_DWORD *)(v139 + 208);
    if ( 3 * (int)v75 < (unsigned int)(4 * (v76 + *(_DWORD *)(v139 + 204))) )
    {
      v173 = v74;
      v157 = 24LL * (unsigned int)(2 * v75);
      v129 = (__int64 *)sub_186B270(v157);
      v130 = 2 * v75;
      v79 = v157;
      v74 = v173;
      v77 = v129;
      if ( 2 * (_DWORD)v75 )
      {
        v131 = &v129[6 * (v75 & 0x7FFFFFFF)];
        do
        {
          *(_OWORD *)v129 = 0;
          v129 += 6;
          *((_OWORD *)v129 - 2) = 0;
          *((_OWORD *)v129 - 1) = 0;
        }
        while ( v129 != v131 );
      }
      v132 = *(double **)(v139 + 192);
      v78 = v130 - 1;
      v133 = &v132[3 * *(unsigned int *)(v139 + 200)];
      v80 = (__m128 *)&v77[v157 / 8];
      if ( v132 != v133 )
      {
        v134 = v69;
        v135 = *(const double **)(v139 + 192);
        do
        {
          while ( *(_QWORD *)v135 <= 1u )
          {
            v135 += 3;
            if ( v133 == v135 )
              goto LABEL_222;
          }
          v136 = 24LL * (*(_DWORD *)(*(_QWORD *)v135 + 12LL) & v78);
          v137 = (__m128 *)&v77[(unsigned __int64)v136 / 8];
          if ( v157 == v136 )
          {
LABEL_226:
            if ( v77 == (__int64 *)v137 )
            {
LABEL_251:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v138 = (__m128 *)v77;
            while ( v138->m128_u64[0] )
            {
              v138 = (__m128 *)((char *)v138 + 24);
              if ( v137 == v138 )
                goto LABEL_251;
            }
          }
          else
          {
            v138 = (__m128 *)&v77[(unsigned __int64)v136 / 8];
            while ( v138->m128_u64[0] )
            {
              v138 = (__m128 *)((char *)v138 + 24);
              if ( v80 == v138 )
                goto LABEL_226;
            }
          }
          v135 += 3;
          *v138 = _mm_loadh_ps(v135 - 2);
          *(double *)v138[1].m128_u64 = *(v135 - 1);
        }
        while ( v133 != v135 );
LABEL_222:
        v133 = *(double **)(v139 + 192);
        v69 = v134;
        v79 = v157;
      }
      if ( v133 )
      {
        v174 = v130;
        v169 = v79;
        v165 = v130 - 1;
        v158 = v74;
        sub_186B220(v133);
        v130 = v174;
        v79 = v169;
        v78 = v165;
        v74 = v158;
      }
      *(_QWORD *)(v139 + 192) = v77;
      v76 = 0;
      *(_DWORD *)(v139 + 200) = v130;
      *(_DWORD *)(v139 + 208) = 0;
    }
    else
    {
      v77 = *(__int64 **)(v139 + 192);
      v78 = v75 - 1;
      v79 = 24 * v75;
      v80 = (__m128 *)&v77[3 * v75];
    }
    v81 = *(_DWORD *)(v71 + 12);
    v82 = 24LL * (v81 & v78);
    v83 = &v77[(unsigned __int64)v82 / 8];
    if ( v82 != v79 )
    {
      v84 = &v77[(unsigned __int64)v82 / 8];
      v85 = nullptr;
      while ( 1 )
      {
        v86 = *v84;
        if ( (unsigned __int64)*v84 > 1 )
        {
          if ( *(_DWORD *)(v86 + 12) == v81 && v71 == v86 )
          {
            *v84 = v71;
            v84[2] = v74;
            v84[1] = v144;
            goto LABEL_134;
          }
        }
        else
        {
          if ( !v86 )
          {
            if ( v85 )
              goto LABEL_243;
            v85 = v84;
            goto LABEL_244;
          }
          v85 = v84;
        }
        v84 += 3;
        if ( v84 == (__int64 *)v80 )
          goto LABEL_129;
      }
    }
    v85 = nullptr;
    while ( 1 )
    {
LABEL_129:
      if ( v83 == v77 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v87 = *v77;
      if ( (unsigned __int64)*v77 <= 1 )
        break;
      if ( *(_DWORD *)(v87 + 12) == v81 && v71 == v87 )
      {
        *v77 = v71;
        v77[2] = v74;
        v77[1] = v144;
        goto LABEL_134;
      }
LABEL_128:
      v77 += 3;
    }
    if ( v87 )
    {
      v85 = v77;
      goto LABEL_128;
    }
    if ( v85 )
LABEL_243:
      *(_DWORD *)(v139 + 208) = v76 - 1;
    else
      v85 = v77;
LABEL_244:
    *v85 = v71;
    v85[2] = v74;
    v85[1] = v144;
    ++*(_DWORD *)(v139 + 204);
LABEL_134:
    ++*(_DWORD *)(v71 + 8);
    if ( v144 )
      ++*(_DWORD *)(v144 + 8);
    if ( v74 )
      ++*(_DWORD *)(v74 + 8);
    v88 = v69 + 3;
    if ( v72 == v69 + 3 )
      break;
    while ( 1 )
    {
      v71 = *v88;
      v69 = v88;
      if ( (unsigned __int64)*v88 > 1 )
        break;
      v88 += 3;
      if ( v72 == v88 )
        return v139;
    }
  }
  while ( v72 != v88 );
  return v139;
}

