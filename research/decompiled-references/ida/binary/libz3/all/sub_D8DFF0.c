__int64 __fastcall sub_D8DFF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // r8
  int v18; // esi
  __m128i v19; // xmm0
  __m128i *v20; // rbp
  __int32 v21; // r9d
  __int64 v22; // r8
  __m128i *v23; // r14
  int v24; // edi
  __m128i v25; // xmm1
  __int64 v26; // r9
  __m128i *v27; // r10
  __m128i *v28; // rax
  __m128i *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rbx
  unsigned __int64 *v35; // r15
  unsigned __int64 v36; // r13
  __int64 v37; // rcx
  int v38; // esi
  __m128i v39; // xmm0
  __m128i *v40; // rbp
  __int32 v41; // r9d
  __int64 v42; // rcx
  __m128i *v43; // r14
  int v44; // edi
  __m128i v45; // xmm1
  __int64 v46; // r9
  __m128i *v47; // r8
  __m128i *v48; // rax
  __m128i *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 *v53; // rax
  unsigned __int64 *v54; // rbx
  unsigned __int64 *v55; // r15
  unsigned __int64 v56; // r13
  __int64 v57; // rcx
  int v58; // esi
  __m128i v59; // xmm0
  __m128i *v60; // rbp
  __int32 v61; // r9d
  __int64 v62; // rcx
  __m128i *v63; // r14
  int v64; // edi
  __m128i v65; // xmm1
  __int64 v66; // r9
  __m128i *v67; // r8
  __m128i *v68; // rax
  __m128i *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 *v73; // rax
  __int64 v74; // rbx
  __int64 result; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // r13
  __int64 v78; // r14
  int v79; // esi
  __m128i v80; // xmm2
  __m128i *v81; // rbp
  __int32 v82; // eax
  __int64 v83; // r8
  __m128 *v84; // r14
  int v85; // edi
  __m128i v86; // xmm1
  __int64 v87; // rax
  __m128i *v88; // r9
  __m128i *v89; // rax
  __m128i *v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int32 v96; // r10d
  __m128i *v97; // r8
  const __m128i *v98; // rax
  __m128i *v99; // r11
  __int64 v100; // rdx
  __m128i *v101; // rsi
  __m128i *v102; // rdx
  __m128i v103; // xmm1
  __int64 v104; // rax
  __int32 v105; // r10d
  __m128i *v106; // r8
  const __m128i *v107; // rax
  __m128i *v108; // r11
  __int64 v109; // rdx
  __m128i *v110; // rsi
  __m128i *v111; // rdx
  __m128i v112; // xmm1
  __int64 v113; // rax
  __int32 v114; // r10d
  __m128i *v115; // rdx
  __m128i *v116; // rax
  const __m128i *v117; // r15
  __m128i *v118; // r11
  __int64 v119; // rdx
  __m128i *v120; // rsi
  __m128i *v121; // rdx
  __m128i v122; // xmm1
  __m128i *v123; // rax
  __int32 v124; // r9d
  __int64 v125; // r10
  __m128i *v126; // rdx
  const double *v127; // r15
  double *v128; // r11
  __int64 v129; // rdx
  __m128 *v130; // rdi
  __m128 *v131; // rdx
  void *v132; // [rsp+0h] [rbp-98h]
  __int64 v134; // [rsp+8h] [rbp-90h]
  __m128i v135; // [rsp+10h] [rbp-88h] BYREF
  __m128i v136; // [rsp+20h] [rbp-78h] BYREF
  __m128i v137; // [rsp+30h] [rbp-68h] BYREF
  __int64 v138; // [rsp+40h] [rbp-58h]
  __int64 v139; // [rsp+48h] [rbp-50h]
  int v140[2]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a1 + 16;
  *(_QWORD *)(v5 - 16) = &off_1C5A7F0;
  *(_QWORD *)(v5 - 8) = a2;
  sub_15C5470(v5, a2);
  sub_16744A0(a1 + 80, a2);
  v139 = a1 + 104;
  *(_QWORD *)v140 = 0;
  sub_14B7810(a1 + 104, a2, (int)v140, v6, v7, v8, v132);
  sub_18572D0(v140);
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 120) = v9;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 144) = v10;
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 168) = v11;
  *(_QWORD *)(a1 + 176) = 8;
  *(_DWORD *)(a1 + 184) = 0;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  v12 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 200) = 8;
  v13 = *(unsigned int *)(a3 + 536);
  v14 = *(unsigned __int64 **)(a3 + 528);
  *(_QWORD *)(a1 + 192) = v12;
  *v12 = 0;
  v15 = (__int64)&v14[2 * v13];
  v12[1] = 0;
  *(_DWORD *)(a1 + 208) = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v12[8] = 0;
  v12[9] = 0;
  v12[10] = 0;
  v12[11] = 0;
  if ( v14 != (unsigned __int64 *)v15 )
  {
    while ( *v14 <= 1 )
    {
      v14 += 2;
      if ( (unsigned __int64 *)v15 == v14 )
        goto LABEL_34;
    }
    if ( (unsigned __int64 *)v15 != v14 )
    {
      v16 = *v14;
      while ( 1 )
      {
        v17 = *(unsigned int *)(a1 + 128);
        v18 = *(_DWORD *)(a1 + 136);
        v19 = _mm_loadl_epi64((const __m128i *)(v14 + 1));
        if ( 3 * (int)v17 < (unsigned int)(4 * (v18 + *(_DWORD *)(a1 + 132))) )
        {
          v136.m128i_i64[0] = v15;
          v135.m128i_i32[2] = 2 * v17;
          v135.m128i_i64[0] = 16LL * (unsigned int)(2 * v17);
          v136.m128i_i64[1] = v19.m128i_i64[0];
          v113 = sub_186B270(v135.m128i_u64[0]);
          v114 = v135.m128i_i32[2];
          v22 = v135.m128i_i64[0];
          v20 = (__m128i *)v113;
          v115 = (__m128i *)v113;
          v15 = v136.m128i_i64[0];
          v19 = _mm_loadl_epi64((const __m128i *)&v136.m128i_u64[1]);
          v116 = (__m128i *)(v135.m128i_i64[0] + v113);
          if ( v135.m128i_i32[2] )
          {
            if ( (((_BYTE)v116 - (_BYTE)v20) & 0x10) == 0 || (v115 = v20 + 1, *v20 = 0, &v20[1] != v116) )
            {
              do
              {
                v115 += 2;
                v115[-2] = 0;
                v115[-1] = 0;
              }
              while ( v115 != v116 );
            }
          }
          v117 = *(const __m128i **)(a1 + 120);
          v21 = v114 - 1;
          v23 = v116;
          v118 = (__m128i *)&v117[*(unsigned int *)(a1 + 128)];
          if ( v117 != v118 )
          {
            do
            {
              while ( v117->m128i_i64[0] <= 1uLL )
              {
                if ( v118 == ++v117 )
                  goto LABEL_193;
              }
              v119 = 16LL * (*(_DWORD *)(v117->m128i_i64[0] + 12) & (unsigned int)v21);
              v120 = &v20[(unsigned __int64)v119 / 0x10];
              if ( v22 == v119 )
              {
LABEL_197:
                if ( v20 == v120 )
                {
LABEL_237:
                  v138 = (__int64)v116;
                  v137.m128i_i32[3] = v114;
                  v137.m128i_i64[0] = v22;
                  v136.m128i_i32[2] = v114 - 1;
                  v136.m128i_i64[0] = (__int64)v118;
                  v135.m128i_i64[0] = v15;
                  v135.m128i_i64[1] = v19.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v121 = v20;
                while ( v121->m128i_i64[0] )
                {
                  if ( v120 == ++v121 )
                    goto LABEL_237;
                }
              }
              else
              {
                v121 = &v20[(unsigned __int64)v119 / 0x10];
                while ( v121->m128i_i64[0] )
                {
                  if ( v116 == ++v121 )
                    goto LABEL_197;
                }
              }
              v122 = _mm_loadu_si128(v117++);
              *v121 = v122;
            }
            while ( v118 != v117 );
LABEL_193:
            v118 = *(__m128i **)(a1 + 120);
          }
          if ( v118 )
          {
            v137.m128i_i32[0] = v114;
            v136.m128i_i64[1] = v22;
            v136.m128i_i32[0] = v114 - 1;
            v135.m128i_i64[0] = v15;
            v135.m128i_i64[1] = v19.m128i_i64[0];
            sub_186B220(v118);
            v114 = v137.m128i_i32[0];
            v22 = v136.m128i_i64[1];
            v21 = v136.m128i_i32[0];
            v19 = _mm_loadl_epi64((const __m128i *)&v135.m128i_u64[1]);
            v15 = v135.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 120) = v20;
          v18 = 0;
          *(_DWORD *)(a1 + 128) = v114;
          *(_DWORD *)(a1 + 136) = 0;
        }
        else
        {
          v20 = *(__m128i **)(a1 + 120);
          v21 = v17 - 1;
          v22 = 16 * v17;
          v23 = (__m128i *)((char *)v20 + v22);
        }
        v24 = *(_DWORD *)(v16 + 12);
        v25 = _mm_unpacklo_epi64((__m128i)v16, v19);
        v26 = 16LL * (v24 & (unsigned int)v21);
        v27 = &v20[(unsigned __int64)v26 / 0x10];
        if ( v26 != v22 )
        {
          v28 = &v20[(unsigned __int64)v26 / 0x10];
          v29 = nullptr;
          while ( 1 )
          {
            v30 = v28->m128i_i64[0];
            if ( v28->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v30 + 12) == v24 && v30 == v16 )
              {
                *v28 = v25;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v30 )
              {
                if ( v29 )
                  goto LABEL_224;
                v29 = v28;
                goto LABEL_225;
              }
              v29 = v28;
            }
            if ( ++v28 == v23 )
              goto LABEL_20;
          }
        }
        v29 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v27 == v20 )
          {
            v135.m128i_i64[0] = v15;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v31 = v20->m128i_i64[0];
          if ( v20->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v31 + 12) == v24 && v31 == v16 )
          {
            *v20 = v25;
            goto LABEL_25;
          }
LABEL_19:
          ++v20;
        }
        if ( v31 )
          break;
        if ( v29 )
LABEL_224:
          *(_DWORD *)(a1 + 136) = v18 - 1;
        else
          v29 = v20;
LABEL_225:
        *v29 = v25;
        ++*(_DWORD *)(a1 + 132);
LABEL_25:
        if ( *v14 )
          ++*(_DWORD *)(*v14 + 8);
        v32 = v14[1];
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v33 = v14 + 2;
        if ( (unsigned __int64 *)v15 != v14 + 2 )
        {
          while ( 1 )
          {
            v16 = *v33;
            v14 = v33;
            if ( *v33 > 1 )
              break;
            v33 += 2;
            if ( (unsigned __int64 *)v15 == v33 )
              goto LABEL_34;
          }
          if ( (unsigned __int64 *)v15 != v33 )
            continue;
        }
        goto LABEL_34;
      }
      v29 = v20;
      goto LABEL_19;
    }
  }
LABEL_34:
  v34 = *(unsigned __int64 **)(a3 + 552);
  v35 = &v34[2 * *(unsigned int *)(a3 + 560)];
  if ( v34 == v35 )
    goto LABEL_67;
  while ( *v34 <= 1 )
  {
    v34 += 2;
    if ( v35 == v34 )
      goto LABEL_67;
  }
  if ( v35 == v34 )
    goto LABEL_67;
  v36 = *v34;
  do
  {
    v37 = *(unsigned int *)(a1 + 152);
    v38 = *(_DWORD *)(a1 + 160);
    v39 = _mm_loadl_epi64((const __m128i *)(v34 + 1));
    if ( 3 * (int)v37 < (unsigned int)(4 * (v38 + *(_DWORD *)(a1 + 156))) )
    {
      v135.m128i_i32[2] = 2 * v37;
      v136.m128i_i64[0] = v39.m128i_i64[0];
      v135.m128i_i64[0] = 16LL * (unsigned int)(2 * v37);
      v104 = sub_186B270(v135.m128i_u64[0]);
      v105 = v135.m128i_i32[2];
      v42 = v135.m128i_i64[0];
      v40 = (__m128i *)v104;
      v39 = _mm_loadl_epi64(&v136);
      v106 = (__m128i *)(v135.m128i_i64[0] + v104);
      if ( v135.m128i_i32[2] )
      {
        if ( (v135.m128i_i8[0] & 0x10) == 0 || (v104 += 16, *(_OWORD *)(v104 - 16) = 0, (__m128i *)v104 != v106) )
        {
          do
          {
            v104 += 32;
            *(_OWORD *)(v104 - 32) = 0;
            *(_OWORD *)(v104 - 16) = 0;
          }
          while ( (__m128i *)v104 != v106 );
        }
      }
      v107 = *(const __m128i **)(a1 + 144);
      v41 = v105 - 1;
      v43 = v106;
      v108 = (__m128i *)&v107[*(unsigned int *)(a1 + 152)];
      if ( v107 != v108 )
      {
        do
        {
          while ( v107->m128i_i64[0] <= 1uLL )
          {
            if ( v108 == ++v107 )
              goto LABEL_171;
          }
          v109 = 16LL * (*(_DWORD *)(v107->m128i_i64[0] + 12) & (unsigned int)v41);
          v110 = &v40[(unsigned __int64)v109 / 0x10];
          if ( v42 == v109 )
          {
LABEL_175:
            if ( v40 == v110 )
            {
LABEL_238:
              v138 = (__int64)v106;
              v137.m128i_i32[3] = v105;
              v137.m128i_i64[0] = v42;
              v136.m128i_i32[2] = v105 - 1;
              v136.m128i_i64[0] = (__int64)v108;
              v135.m128i_i64[1] = (__int64)v107;
              v135.m128i_i64[0] = v39.m128i_i64[0];
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v111 = v40;
            while ( v111->m128i_i64[0] )
            {
              if ( v110 == ++v111 )
                goto LABEL_238;
            }
          }
          else
          {
            v111 = &v40[(unsigned __int64)v109 / 0x10];
            while ( v111->m128i_i64[0] )
            {
              if ( v106 == ++v111 )
                goto LABEL_175;
            }
          }
          v112 = _mm_loadu_si128(v107++);
          *v111 = v112;
        }
        while ( v108 != v107 );
LABEL_171:
        v108 = *(__m128i **)(a1 + 144);
      }
      if ( v108 )
      {
        v136.m128i_i32[2] = v105;
        v136.m128i_i64[0] = v42;
        v135.m128i_i32[2] = v105 - 1;
        v135.m128i_i64[0] = v39.m128i_i64[0];
        sub_186B220(v108);
        v105 = v136.m128i_i32[2];
        v42 = v136.m128i_i64[0];
        v41 = v135.m128i_i32[2];
        v39 = _mm_loadl_epi64(&v135);
      }
      *(_QWORD *)(a1 + 144) = v40;
      v38 = 0;
      *(_DWORD *)(a1 + 152) = v105;
      *(_DWORD *)(a1 + 160) = 0;
    }
    else
    {
      v40 = *(__m128i **)(a1 + 144);
      v41 = v37 - 1;
      v42 = 16 * v37;
      v43 = (__m128i *)((char *)v40 + v42);
    }
    v44 = *(_DWORD *)(v36 + 12);
    v45 = _mm_unpacklo_epi64((__m128i)v36, v39);
    v46 = 16LL * (v44 & (unsigned int)v41);
    v47 = &v40[(unsigned __int64)v46 / 0x10];
    if ( v46 != v42 )
    {
      v48 = &v40[(unsigned __int64)v46 / 0x10];
      v49 = nullptr;
      while ( 1 )
      {
        v50 = v48->m128i_i64[0];
        if ( v48->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v50 + 12) == v44 && v50 == v36 )
          {
            *v48 = v45;
            goto LABEL_58;
          }
        }
        else
        {
          if ( !v50 )
          {
            if ( v49 )
              goto LABEL_233;
            v49 = v48;
            goto LABEL_234;
          }
          v49 = v48;
        }
        if ( ++v48 == v43 )
          goto LABEL_53;
      }
    }
    v49 = nullptr;
    while ( 1 )
    {
LABEL_53:
      if ( v47 == v40 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v51 = v40->m128i_i64[0];
      if ( v40->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v51 + 12) == v44 && v51 == v36 )
      {
        *v40 = v45;
        goto LABEL_58;
      }
LABEL_52:
      ++v40;
    }
    if ( v51 )
    {
      v49 = v40;
      goto LABEL_52;
    }
    if ( v49 )
LABEL_233:
      *(_DWORD *)(a1 + 160) = v38 - 1;
    else
      v49 = v40;
LABEL_234:
    *v49 = v45;
    ++*(_DWORD *)(a1 + 156);
LABEL_58:
    if ( *v34 )
      ++*(_DWORD *)(*v34 + 8);
    v52 = v34[1];
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v53 = v34 + 2;
    if ( v35 == v34 + 2 )
      break;
    while ( 1 )
    {
      v36 = *v53;
      v34 = v53;
      if ( *v53 > 1 )
        break;
      v53 += 2;
      if ( v35 == v53 )
        goto LABEL_67;
    }
  }
  while ( v35 != v53 );
LABEL_67:
  v54 = *(unsigned __int64 **)(a3 + 576);
  v55 = &v54[2 * *(unsigned int *)(a3 + 584)];
  if ( v54 != v55 )
  {
    while ( *v54 <= 1 )
    {
      v54 += 2;
      if ( v55 == v54 )
        goto LABEL_100;
    }
    if ( v55 != v54 )
    {
      v56 = *v54;
      while ( 1 )
      {
        v57 = *(unsigned int *)(a1 + 176);
        v58 = *(_DWORD *)(a1 + 184);
        v59 = _mm_loadl_epi64((const __m128i *)(v54 + 1));
        if ( 3 * (int)v57 < (unsigned int)(4 * (v58 + *(_DWORD *)(a1 + 180))) )
        {
          v135.m128i_i32[2] = 2 * v57;
          v136.m128i_i64[0] = v59.m128i_i64[0];
          v135.m128i_i64[0] = 16LL * (unsigned int)(2 * v57);
          v95 = sub_186B270(v135.m128i_u64[0]);
          v96 = v135.m128i_i32[2];
          v62 = v135.m128i_i64[0];
          v60 = (__m128i *)v95;
          v59 = _mm_loadl_epi64(&v136);
          v97 = (__m128i *)(v135.m128i_i64[0] + v95);
          if ( v135.m128i_i32[2] )
          {
            if ( (v135.m128i_i8[0] & 0x10) == 0 || (v95 += 16, *(_OWORD *)(v95 - 16) = 0, v97 != (__m128i *)v95) )
            {
              do
              {
                v95 += 32;
                *(_OWORD *)(v95 - 32) = 0;
                *(_OWORD *)(v95 - 16) = 0;
              }
              while ( v97 != (__m128i *)v95 );
            }
          }
          v98 = *(const __m128i **)(a1 + 168);
          v61 = v96 - 1;
          v63 = v97;
          v99 = (__m128i *)&v98[*(unsigned int *)(a1 + 176)];
          if ( v98 != v99 )
          {
            do
            {
              while ( v98->m128i_i64[0] <= 1uLL )
              {
                if ( v99 == ++v98 )
                  goto LABEL_149;
              }
              v100 = 16LL * (*(_DWORD *)(v98->m128i_i64[0] + 12) & (unsigned int)v61);
              v101 = &v60[(unsigned __int64)v100 / 0x10];
              if ( v62 == v100 )
              {
LABEL_153:
                if ( v60 == v101 )
                {
LABEL_235:
                  v138 = (__int64)v97;
                  v137.m128i_i32[3] = v96;
                  v137.m128i_i64[0] = v62;
                  v136.m128i_i32[2] = v96 - 1;
                  v136.m128i_i64[0] = (__int64)v99;
                  v135.m128i_i64[1] = (__int64)v98;
                  v135.m128i_i64[0] = v59.m128i_i64[0];
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v102 = v60;
                while ( v102->m128i_i64[0] )
                {
                  if ( v101 == ++v102 )
                    goto LABEL_235;
                }
              }
              else
              {
                v102 = &v60[(unsigned __int64)v100 / 0x10];
                while ( v102->m128i_i64[0] )
                {
                  if ( v97 == ++v102 )
                    goto LABEL_153;
                }
              }
              v103 = _mm_loadu_si128(v98++);
              *v102 = v103;
            }
            while ( v99 != v98 );
LABEL_149:
            v99 = *(__m128i **)(a1 + 168);
          }
          if ( v99 )
          {
            v136.m128i_i32[2] = v96;
            v136.m128i_i64[0] = v62;
            v135.m128i_i32[2] = v96 - 1;
            v135.m128i_i64[0] = v59.m128i_i64[0];
            sub_186B220(v99);
            v96 = v136.m128i_i32[2];
            v62 = v136.m128i_i64[0];
            v61 = v135.m128i_i32[2];
            v59 = _mm_loadl_epi64(&v135);
          }
          *(_QWORD *)(a1 + 168) = v60;
          v58 = 0;
          *(_DWORD *)(a1 + 176) = v96;
          *(_DWORD *)(a1 + 184) = 0;
        }
        else
        {
          v60 = *(__m128i **)(a1 + 168);
          v61 = v57 - 1;
          v62 = 16 * v57;
          v63 = (__m128i *)((char *)v60 + v62);
        }
        v64 = *(_DWORD *)(v56 + 12);
        v65 = _mm_unpacklo_epi64((__m128i)v56, v59);
        v66 = 16LL * (v64 & (unsigned int)v61);
        v67 = &v60[(unsigned __int64)v66 / 0x10];
        if ( v66 != v62 )
        {
          v68 = &v60[(unsigned __int64)v66 / 0x10];
          v69 = nullptr;
          while ( 1 )
          {
            v70 = v68->m128i_i64[0];
            if ( v68->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v70 + 12) == v64 && v70 == v56 )
              {
                *v68 = v65;
                goto LABEL_91;
              }
            }
            else
            {
              if ( !v70 )
              {
                if ( v69 )
                  goto LABEL_230;
                v69 = v68;
                goto LABEL_231;
              }
              v69 = v68;
            }
            if ( ++v68 == v63 )
              goto LABEL_86;
          }
        }
        v69 = nullptr;
        while ( 1 )
        {
LABEL_86:
          if ( v67 == v60 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v71 = v60->m128i_i64[0];
          if ( v60->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v71 + 12) == v64 && v71 == v56 )
          {
            *v60 = v65;
            goto LABEL_91;
          }
LABEL_85:
          ++v60;
        }
        if ( v71 )
          break;
        if ( v69 )
LABEL_230:
          *(_DWORD *)(a1 + 184) = v58 - 1;
        else
          v69 = v60;
LABEL_231:
        *v69 = v65;
        ++*(_DWORD *)(a1 + 180);
LABEL_91:
        if ( *v54 )
          ++*(_DWORD *)(*v54 + 8);
        v72 = v54[1];
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        v73 = v54 + 2;
        if ( v55 != v54 + 2 )
        {
          while ( 1 )
          {
            v56 = *v73;
            v54 = v73;
            if ( *v73 > 1 )
              break;
            v73 += 2;
            if ( v55 == v73 )
              goto LABEL_100;
          }
          if ( v55 != v73 )
            continue;
        }
        goto LABEL_100;
      }
      v69 = v60;
      goto LABEL_85;
    }
  }
LABEL_100:
  v74 = *(_QWORD *)(a3 + 600);
  result = 3LL * *(unsigned int *)(a3 + 608);
  v76 = v74 + 24LL * *(unsigned int *)(a3 + 608);
  if ( v74 == v76 )
    return result;
  while ( *(_QWORD *)v74 <= 1u )
  {
    v74 += 24;
    if ( v76 == v74 )
      return result;
  }
  if ( v76 != v74 )
  {
    v77 = *(_QWORD *)v74;
    while ( 1 )
    {
      v78 = *(unsigned int *)(a1 + 200);
      v79 = *(_DWORD *)(a1 + 208);
      v80 = _mm_loadl_epi64((const __m128i *)(v74 + 8));
      v134 = *(_QWORD *)(v74 + 16);
      if ( 3 * (int)v78 < (unsigned int)(4 * (v79 + *(_DWORD *)(a1 + 204))) )
      {
        v136.m128i_i64[1] = v76;
        v136.m128i_i32[0] = 2 * v78;
        v137.m128i_i64[0] = v80.m128i_i64[0];
        v135.m128i_i64[1] = 24LL * (unsigned int)(2 * v78);
        v135.m128i_i64[0] = v135.m128i_i64[1];
        v123 = (__m128i *)sub_186B270(v135.m128i_u64[1]);
        v124 = v136.m128i_i32[0];
        v125 = v135.m128i_i64[0];
        v81 = v123;
        v83 = v135.m128i_i64[1];
        v76 = v136.m128i_i64[1];
        v80 = _mm_loadl_epi64(&v137);
        if ( v136.m128i_i32[0] )
        {
          v126 = &v123[3 * (v78 & 0x7FFFFFFF)];
          do
          {
            *v123 = 0;
            v123 += 3;
            v123[-2] = 0;
            v123[-1] = 0;
          }
          while ( v126 != v123 );
        }
        v82 = v124 - 1;
        v84 = (__m128 *)&v81->m128i_i8[v125];
        v127 = *(const double **)(a1 + 192);
        v128 = (double *)&v127[3 * *(unsigned int *)(a1 + 200)];
        if ( v127 != v128 )
        {
          do
          {
            while ( *(_QWORD *)v127 <= 1u )
            {
              v127 += 3;
              if ( v128 == v127 )
                goto LABEL_214;
            }
            v129 = 24LL * (*(_DWORD *)(*(_QWORD *)v127 + 12LL) & (unsigned int)v82);
            v130 = (__m128 *)&v81->m128i_i8[v129];
            if ( v125 == v129 )
            {
LABEL_218:
              if ( v81 == (__m128i *)v130 )
              {
LABEL_236:
                v138 = v125;
                v137.m128i_i32[3] = v124;
                v137.m128i_i64[0] = v83;
                v136.m128i_i32[2] = v124 - 1;
                v136.m128i_i64[0] = (__int64)v128;
                v135.m128i_i64[0] = v76;
                v135.m128i_i64[1] = v80.m128i_i64[0];
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v131 = (__m128 *)v81;
              while ( v131->m128_u64[0] )
              {
                v131 = (__m128 *)((char *)v131 + 24);
                if ( v130 == v131 )
                  goto LABEL_236;
              }
            }
            else
            {
              v131 = (__m128 *)&v81->m128i_i8[v129];
              while ( v131->m128_u64[0] )
              {
                v131 = (__m128 *)((char *)v131 + 24);
                if ( v84 == v131 )
                  goto LABEL_218;
              }
            }
            v127 += 3;
            *v131 = _mm_loadh_ps(v127 - 2);
            *(double *)v131[1].m128_u64 = *(v127 - 1);
          }
          while ( v128 != v127 );
LABEL_214:
          v128 = *(double **)(a1 + 192);
        }
        if ( v128 )
        {
          v137.m128i_i32[0] = v124;
          v136.m128i_i64[1] = v83;
          v136.m128i_i32[0] = v124 - 1;
          v135.m128i_i64[0] = v76;
          v135.m128i_i64[1] = v80.m128i_i64[0];
          sub_186B220(v128);
          v124 = v137.m128i_i32[0];
          v83 = v136.m128i_i64[1];
          v82 = v136.m128i_i32[0];
          v80 = _mm_loadl_epi64((const __m128i *)&v135.m128i_u64[1]);
          v76 = v135.m128i_i64[0];
        }
        *(_QWORD *)(a1 + 192) = v81;
        v79 = 0;
        *(_DWORD *)(a1 + 200) = v124;
        *(_DWORD *)(a1 + 208) = 0;
      }
      else
      {
        v81 = *(__m128i **)(a1 + 192);
        v82 = v78 - 1;
        v83 = 24 * v78;
        v84 = (__m128 *)((char *)v81 + 24 * v78);
      }
      v85 = *(_DWORD *)(v77 + 12);
      v86 = _mm_unpacklo_epi64((__m128i)v77, v80);
      v87 = 24LL * (v85 & (unsigned int)v82);
      v88 = (__m128i *)((char *)v81 + v87);
      if ( v87 != v83 )
      {
        v89 = (__m128i *)((char *)v81 + v87);
        v90 = nullptr;
        while ( 1 )
        {
          v91 = v89->m128i_i64[0];
          if ( v89->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v91 + 12) == v85 && v91 == v77 )
            {
              *v89 = v86;
              v89[1].m128i_i64[0] = v134;
              goto LABEL_124;
            }
          }
          else
          {
            if ( !v91 )
            {
              if ( v90 )
                goto LABEL_227;
              v90 = v89;
              goto LABEL_228;
            }
            v90 = v89;
          }
          v89 = (__m128i *)((char *)v89 + 24);
          if ( v89 == (__m128i *)v84 )
            goto LABEL_119;
        }
      }
      v90 = nullptr;
      while ( 1 )
      {
LABEL_119:
        if ( v88 == v81 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v92 = v81->m128i_i64[0];
        if ( v81->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v92 + 12) == v85 && v92 == v77 )
        {
          *v81 = v86;
          v81[1].m128i_i64[0] = v134;
          goto LABEL_124;
        }
LABEL_118:
        v81 = (__m128i *)((char *)v81 + 24);
      }
      if ( v92 )
        break;
      if ( v90 )
LABEL_227:
        *(_DWORD *)(a1 + 208) = v79 - 1;
      else
        v90 = v81;
LABEL_228:
      *v90 = v86;
      v90[1].m128i_i64[0] = v134;
      ++*(_DWORD *)(a1 + 204);
LABEL_124:
      if ( *(_QWORD *)v74 )
        ++*(_DWORD *)(*(_QWORD *)v74 + 8LL);
      v93 = *(_QWORD *)(v74 + 8);
      if ( v93 )
        ++*(_DWORD *)(v93 + 8);
      v94 = *(_QWORD *)(v74 + 16);
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      result = v74 + 24;
      if ( v76 != v74 + 24 )
      {
        while ( 1 )
        {
          v77 = *(_QWORD *)result;
          v74 = result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 24;
          if ( v76 == result )
            return result;
        }
        if ( v76 != result )
          continue;
      }
      return result;
    }
    v90 = v81;
    goto LABEL_118;
  }
  return result;
}

