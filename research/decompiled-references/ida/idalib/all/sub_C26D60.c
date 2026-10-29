__int64 __fastcall sub_C26D60(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 *v28; // rcx
  unsigned int v29; // edi
  __int64 *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  char *v34; // rdx
  char *v35; // rcx
  char *v36; // rcx
  char *v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int8 **v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 *v44; // rcx
  _QWORD *v45; // r11
  __int64 *v46; // r9
  __int64 v47; // r10
  _QWORD *ii; // rdx
  __int64 *v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // edi
  _QWORD *v52; // rsi
  __int64 v53; // r8
  int v54; // edx
  int v55; // esi
  int v56; // edx
  unsigned int v57; // edi
  __int64 v58; // rcx
  int v59; // r10d
  _QWORD *v60; // r11
  int v61; // esi
  __int64 v62; // r9
  __int64 v63; // rdx
  int v64; // r9d
  __int64 *v65; // r11
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 *v70; // r8
  __int64 v71; // rdx
  _QWORD *v72; // r11
  __int64 *v73; // r15
  __int64 v74; // r9
  _QWORD *k; // rdx
  __int64 *v76; // rax
  int m; // r10d
  __int64 v78; // rcx
  unsigned int v79; // edx
  _QWORD *v80; // rsi
  __int64 v81; // rdi
  __m128i v82; // xmm1
  __int64 v83; // rcx
  int v84; // ecx
  unsigned int v85; // edi
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // r8
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 *v90; // rcx
  __int64 v91; // rdx
  _QWORD *v92; // r11
  unsigned int v93; // r10d
  __int64 *v94; // r9
  __int64 v95; // r8
  _QWORD *mm; // rdx
  __int64 *v97; // rax
  __int64 v98; // rdx
  unsigned int v99; // edi
  _QWORD *v100; // rsi
  __int64 v101; // rbp
  int v102; // edi
  int v103; // edi
  unsigned int v104; // edx
  unsigned int v105; // eax
  _QWORD *v106; // rax
  __int64 *v107; // r8
  __int64 v108; // rdx
  _QWORD *v109; // r11
  __int64 *v110; // r9
  __int64 v111; // r10
  _QWORD *i; // rdx
  __int64 *v113; // rax
  __int64 v114; // rdx
  unsigned int v115; // ecx
  _QWORD *v116; // rsi
  __int64 v117; // rdi
  __m128i v118; // xmm2
  __int64 v119; // rcx
  int v120; // ecx
  unsigned int v121; // r15d
  _QWORD *v122; // rdi
  int v123; // r9d
  int v124; // r8d
  unsigned int v125; // r9d
  unsigned __int8 **v126; // rax
  _QWORD *n; // rdx
  __int64 v128; // rcx
  _QWORD *kk; // rcx
  __int64 v130; // rdx
  _QWORD *nn; // rdx
  _QWORD *j; // rdx
  __int64 *v133; // r10
  int v134; // r9d
  __int64 *v135; // r9
  int v136; // r10d
  _QWORD *v137; // r10
  int v138; // r8d
  int v139; // r9d
  unsigned int v140; // r8d
  int v141; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v143; // [rsp+1Bh] [rbp-6Dh]
  unsigned int v145; // [rsp+20h] [rbp-68h]
  int jj; // [rsp+20h] [rbp-68h]
  unsigned int v147; // [rsp+20h] [rbp-68h]
  __int64 v148; // [rsp+20h] [rbp-68h]
  __int64 *v149; // [rsp+20h] [rbp-68h]
  int v150; // [rsp+20h] [rbp-68h]
  unsigned int v151; // [rsp+20h] [rbp-68h]
  __int64 *v152; // [rsp+20h] [rbp-68h]
  int v153; // [rsp+20h] [rbp-68h]
  __int64 *v154; // [rsp+28h] [rbp-60h]
  __int64 v155; // [rsp+28h] [rbp-60h]
  __int64 *v156; // [rsp+28h] [rbp-60h]
  unsigned int v157; // [rsp+28h] [rbp-60h]
  __int64 v158; // [rsp+28h] [rbp-60h]
  unsigned int v159; // [rsp+28h] [rbp-60h]
  __int64 v160; // [rsp+28h] [rbp-60h]
  _QWORD *v161; // [rsp+28h] [rbp-60h]
  __int64 v162; // [rsp+30h] [rbp-58h]
  int v163; // [rsp+30h] [rbp-58h]
  _QWORD *v164; // [rsp+30h] [rbp-58h]
  _QWORD *v165; // [rsp+30h] [rbp-58h]
  int v166; // [rsp+38h] [rbp-50h]
  _QWORD *v167; // [rsp+38h] [rbp-50h]
  int v168; // [rsp+38h] [rbp-50h]
  int v169; // [rsp+40h] [rbp-48h]

  v5 = a4;
  v141 = *(_DWORD *)(a3 + 56);
  if ( a5 == v141 )
    return 1;
  v6 = *(_BYTE *)(a3 + 24);
  if ( (v6 & 1) != 0 )
    return 0;
  v143 = *(_BYTE *)(a3 + 128) & 1;
  if ( v143 )
  {
    v40 = (unsigned __int8 **)sub_E33C90(a1, a2, 2461, 0);
    if ( v40 )
      sub_C11320(v40, 1);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    return 0;
  }
  if ( (v6 & 2) != 0
    || (v141 != 1 || (v6 & 4) == 0)
    && (v6 & 8) != 0
    && *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) == *(_QWORD *)(a3 + 32) )
  {
    v126 = (unsigned __int8 **)sub_E33C90(a1, a2, 2466, 0);
    if ( v126 )
      sub_C11320(v126, 1);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    return v143;
  }
  v8 = a5;
  if ( *(char *)(a4 + 28) < 0 )
    return v143;
  while ( 1 )
  {
    v18 = sub_EDE580(*(_QWORD *)(a1 + 16), v5);
    v22 = *(_QWORD *)(a3 + 48);
    v23 = v18;
    v24 = *(_QWORD *)(v22 + 8LL * v8);
    v5 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) != 0
      && (*(_BYTE *)((*(_QWORD *)(v22 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
    {
      v5 = 0;
    }
    v9 = *(_QWORD *)(v5 + 128);
    v25 = v24 & 4;
    if ( (_DWORD)v25 )
    {
      if ( v9
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104), v22, v19, v20, v21),
            (v9 = *(_QWORD *)(v5 + 128)) != 0) )
      {
        v9 = *(_QWORD *)(v9 + 88);
      }
      v10 = *(_QWORD *)(v23 + 72);
      v11 = *(unsigned int *)(v10 + 104);
      v12 = *(_QWORD *)(v10 + 88);
      if ( !(_DWORD)v11 )
        goto LABEL_78;
      v13 = (unsigned int)(v11 - 1);
      LODWORD(v14) = v13 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v15 = (_QWORD *)(v12 + 24LL * (unsigned int)v14);
      v16 = *v15;
      if ( v9 == *v15 )
      {
LABEL_14:
        v17 = v15[1];
        goto LABEL_15;
      }
      v59 = 1;
      v60 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( v16 == -8192 && !v60 )
            v60 = v15;
          v14 = (unsigned int)v13 & ((_DWORD)v14 + v59);
          v15 = (_QWORD *)(v12 + 24 * v14);
          v16 = *v15;
          if ( v9 == *v15 )
            goto LABEL_14;
          if ( v16 == -4096 )
            break;
          ++v59;
        }
        if ( v60 )
          v15 = v60;
      }
      v61 = *(_DWORD *)(v10 + 96) + 1;
      v21 = (unsigned int)(4 * v61);
      if ( (unsigned int)v21 < 3 * (int)v11 )
      {
        v62 = (unsigned int)v11 >> 3;
        if ( (int)v11 - *(_DWORD *)(v10 + 100) - v61 > (unsigned int)v62 )
        {
LABEL_67:
          v63 = *v15;
LABEL_68:
          *(_DWORD *)(v10 + 96) = v61;
          if ( v63 != -4096 )
            --*(_DWORD *)(v10 + 100);
          goto LABEL_70;
        }
        v159 = *(_DWORD *)(v10 + 104);
        v152 = *(__int64 **)(v10 + 88);
        v105 = ((((((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
                | (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4)
                | (v13 >> 1)
                | v13
                | (((v13 >> 1) | v13) >> 2)) >> 16)
              | (((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
              | (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4)
              | (v13 >> 1)
              | v13
              | (((v13 >> 1) | v13) >> 2))
             + 1;
        if ( v105 < 0x40 )
          v105 = 64;
        *(_DWORD *)(v10 + 104) = v105;
        v106 = (_QWORD *)sub_22300B0(24LL * v105, 8, v11, 64, v12, v62);
        v107 = v152;
        v108 = v159;
        v109 = v106;
        *(_QWORD *)(v10 + 88) = v106;
        if ( v152 )
        {
          *(_QWORD *)(v10 + 96) = 0;
          v160 = 24LL * v159;
          v110 = &v152[3 * v108];
          v111 = *(unsigned int *)(v10 + 104);
          for ( i = &v106[3 * v111]; i != v106; v106 += 3 )
            *v106 = -4096;
          v113 = v152;
          v153 = v111 - 1;
          do
          {
            v114 = *v113;
            if ( *v113 != -8192 && v114 != -4096 )
            {
              if ( !(_DWORD)v111 )
              {
                *(_QWORD *)&dword_0 = *v113;
                BUG();
              }
              v115 = v153 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4));
              v116 = &v109[3 * v115];
              v117 = *v116;
              if ( *v116 != v114 && v117 != -4096 )
              {
                v168 = 1;
                v165 = nullptr;
                while ( 1 )
                {
                  if ( !v165 )
                  {
                    if ( v117 != -8192 )
                      v116 = nullptr;
                    v165 = v116;
                  }
                  v115 = v153 & (v168 + v115);
                  ++v168;
                  v116 = &v109[3 * v115];
                  v117 = *v116;
                  if ( v114 == *v116 )
                    break;
                  if ( v117 == -4096 )
                  {
                    if ( v165 )
                      v116 = v165;
                    break;
                  }
                }
              }
              v118 = _mm_loadu_si128((const __m128i *)(v113 + 1));
              *v116 = v114;
              *(__m128i *)(v116 + 1) = v118;
              ++*(_DWORD *)(v10 + 96);
            }
            v113 += 3;
          }
          while ( v110 != v113 );
          operator delete(v107, v160, 8);
          v109 = *(_QWORD **)(v10 + 88);
          LODWORD(v119) = *(_DWORD *)(v10 + 104);
          v61 = *(_DWORD *)(v10 + 96) + 1;
        }
        else
        {
          *(_QWORD *)(v10 + 96) = 0;
          v119 = *(unsigned int *)(v10 + 104);
          for ( j = &v106[3 * v119]; j != v106; v106 += 3 )
            *v106 = -4096;
          v61 = 1;
        }
        if ( !(_DWORD)v119 )
          goto LABEL_255;
        v120 = v119 - 1;
        v121 = v120 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v15 = &v109[3 * v121];
        v63 = *v15;
        if ( v9 == *v15 )
          goto LABEL_68;
        if ( v63 != -4096 )
        {
          v122 = &v109[3 * v121];
          v123 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v63 == -8192 && !v15 )
              v15 = v122;
            v124 = v123 + 1;
            v125 = v120 & (v121 + v123);
            v121 = v125;
            v122 = &v109[3 * v125];
            v63 = *v122;
            if ( v9 == *v122 )
            {
              v15 = &v109[3 * v125];
              goto LABEL_68;
            }
            if ( v63 == -4096 )
              break;
            v123 = v124;
          }
          if ( v15 )
            goto LABEL_67;
          v15 = &v109[3 * v125];
        }
      }
      else
      {
LABEL_78:
        v156 = *(__int64 **)(v10 + 88);
        v147 = *(_DWORD *)(v10 + 104);
        v67 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v11 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v11 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v11 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
        v68 = ((v67 >> 16) | v67) + 1;
        if ( (unsigned int)v68 < 0x40 )
          LODWORD(v68) = 64;
        *(_DWORD *)(v10 + 104) = v68;
        v69 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v68, 8, v11, 64, v12, v21);
        v70 = v156;
        v71 = v147;
        v72 = v69;
        *(_QWORD *)(v10 + 88) = v69;
        if ( v156 )
        {
          *(_QWORD *)(v10 + 96) = 0;
          v148 = 24LL * v147;
          v73 = &v156[3 * v71];
          v74 = *(unsigned int *)(v10 + 104);
          for ( k = &v69[3 * v74]; k != v69; v69 += 3 )
            *v69 = -4096;
          v76 = v156;
          for ( m = v74 - 1; v73 != v76; v76 += 3 )
          {
            v78 = *v76;
            if ( *v76 != -4096 && v78 != -8192 )
            {
              if ( !(_DWORD)v74 )
              {
                *(_QWORD *)&dword_0 = *v76;
                BUG();
              }
              v79 = m & (((unsigned int)v78 >> 9) ^ ((unsigned int)v78 >> 4));
              v80 = &v72[3 * v79];
              v81 = *v80;
              if ( v78 != *v80 && v81 != -4096 )
              {
                v163 = 1;
                v161 = nullptr;
                while ( 1 )
                {
                  if ( v81 == -8192 )
                  {
                    if ( v161 )
                      v80 = v161;
                    v161 = v80;
                  }
                  v79 = m & (v163 + v79);
                  v80 = &v72[3 * v79];
                  v81 = *v80;
                  if ( v78 == *v80 )
                    break;
                  if ( v81 == -4096 )
                  {
                    if ( v161 )
                      v80 = v161;
                    break;
                  }
                  ++v163;
                }
              }
              v82 = _mm_loadu_si128((const __m128i *)(v76 + 1));
              *v80 = v78;
              *(__m128i *)(v80 + 1) = v82;
              ++*(_DWORD *)(v10 + 96);
            }
          }
          operator delete(v70, v148, 8);
          v72 = *(_QWORD **)(v10 + 88);
          LODWORD(v83) = *(_DWORD *)(v10 + 104);
          v61 = *(_DWORD *)(v10 + 96) + 1;
        }
        else
        {
          *(_QWORD *)(v10 + 96) = 0;
          v83 = *(unsigned int *)(v10 + 104);
          for ( n = &v69[3 * v83]; n != v69; v69 += 3 )
            *v69 = -4096;
          v61 = 1;
        }
        if ( !(_DWORD)v83 )
        {
LABEL_255:
          ++*(_DWORD *)(v10 + 96);
          BUG();
        }
        v84 = v83 - 1;
        v85 = v84 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v15 = &v72[3 * v85];
        v63 = *v15;
        if ( v9 == *v15 )
          goto LABEL_68;
        if ( v63 != -4096 )
        {
          v137 = &v72[3 * (v84 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))];
          v138 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v63 == -8192 && !v15 )
              v15 = v137;
            v139 = v138 + 1;
            v140 = v85 + v138;
            v85 = v84 & v140;
            v137 = &v72[3 * (v84 & v140)];
            v63 = *v137;
            if ( v9 == *v137 )
            {
              v15 = &v72[3 * (v84 & v140)];
              goto LABEL_68;
            }
            if ( v63 == -4096 )
              break;
            v138 = v139;
          }
          if ( v15 )
            goto LABEL_67;
          v15 = &v72[3 * (v84 & v140)];
        }
      }
      *(_DWORD *)(v10 + 96) = v61;
LABEL_70:
      *v15 = v9;
      v15[1] = 0;
      *((_BYTE *)v15 + 16) = 0;
      v17 = 0;
LABEL_15:
      *(_QWORD *)(a3 + 16) -= v17;
      if ( ++v8 == v141 )
        break;
      goto LABEL_16;
    }
    if ( v9
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104), v22, v19, v20, v21),
          (v9 = *(_QWORD *)(v5 + 128)) != 0) )
    {
      v26 = *(_QWORD *)(v23 + 72);
      v9 = *(_QWORD *)(v9 + 88);
      v27 = *(unsigned int *)(v26 + 80);
      v28 = *(__int64 **)(v26 + 64);
      if ( !(_DWORD)v27 )
        goto LABEL_46;
    }
    else
    {
      v26 = *(_QWORD *)(v23 + 72);
      v27 = *(unsigned int *)(v26 + 80);
      v28 = *(__int64 **)(v26 + 64);
      if ( !(_DWORD)v27 )
        goto LABEL_46;
    }
    v20 = (unsigned int)(v27 - 1);
    v29 = v20 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v30 = &v28[2 * v29];
    v31 = *v30;
    if ( v9 == *v30 )
    {
LABEL_24:
      v25 = v30[1];
      goto LABEL_25;
    }
    v64 = 1;
    v65 = nullptr;
    if ( v31 != -4096 )
    {
      while ( 1 )
      {
        if ( v31 == -8192 && !v65 )
          v65 = v30;
        v29 = v20 & (v64 + v29);
        v30 = &v28[2 * v29];
        v31 = *v30;
        if ( v9 == *v30 )
          goto LABEL_24;
        if ( v31 == -4096 )
          break;
        ++v64;
      }
      if ( v65 )
        v30 = v65;
    }
    v55 = *(_DWORD *)(v26 + 72) + 1;
    v21 = (unsigned int)(4 * v55);
    if ( (unsigned int)v21 >= 3 * (int)v27 )
    {
LABEL_46:
      v154 = v28;
      v145 = v27;
      v41 = (((((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v27 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v27 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v27 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v27 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1);
      v42 = ((v41 >> 16) | v41) + 1;
      if ( (unsigned int)v42 < 0x40 )
        LODWORD(v42) = 64;
      *(_DWORD *)(v26 + 80) = v42;
      v43 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v42, 8, v27, v28, v20, v21);
      v44 = v154;
      v45 = v43;
      *(_QWORD *)(v26 + 64) = v43;
      if ( v154 )
      {
        *(_QWORD *)(v26 + 72) = 0;
        v155 = 2LL * v145;
        v46 = &v44[v155];
        v47 = *(unsigned int *)(v26 + 80);
        for ( ii = &v43[2 * v47]; ii != v43; v43 += 2 )
          *v43 = -4096;
        v49 = v44;
        for ( jj = v47 - 1; v46 != v49; v49 += 2 )
        {
          v50 = *v49;
          if ( *v49 != -4096 && v50 != -8192 )
          {
            if ( !(_DWORD)v47 )
            {
              *(_QWORD *)&dword_0 = *v49;
              BUG();
            }
            v51 = jj & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
            v52 = &v45[2 * v51];
            v53 = *v52;
            if ( v50 != *v52 && v53 != -4096 )
            {
              v166 = 1;
              v164 = nullptr;
              while ( 1 )
              {
                if ( !v164 )
                {
                  if ( v53 != -8192 )
                    v52 = nullptr;
                  v164 = v52;
                }
                v51 = jj & (v166 + v51);
                ++v166;
                v52 = &v45[2 * v51];
                v53 = *v52;
                if ( v50 == *v52 )
                  break;
                if ( v53 == -4096 )
                {
                  if ( v164 )
                    v52 = v164;
                  break;
                }
              }
            }
            *v52 = v50;
            v52[1] = v49[1];
            ++*(_DWORD *)(v26 + 72);
          }
        }
        operator delete(v44, v155 * 8, 8);
        v45 = *(_QWORD **)(v26 + 64);
        v54 = *(_DWORD *)(v26 + 80);
        v55 = *(_DWORD *)(v26 + 72) + 1;
      }
      else
      {
        v128 = *(unsigned int *)(v26 + 80);
        *(_QWORD *)(v26 + 72) = 0;
        v54 = v128;
        for ( kk = &v43[2 * v128]; kk != v43; v43 += 2 )
          *v43 = -4096;
        v55 = 1;
      }
      if ( !v54 )
        goto LABEL_256;
      v56 = v54 - 1;
      v57 = v56 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v30 = &v45[2 * v57];
      v58 = *v30;
      if ( *v30 == v9 )
      {
        v58 = v9;
        goto LABEL_75;
      }
      if ( v58 != -4096 )
      {
        v133 = &v45[2 * (v56 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))];
        v134 = 1;
        v30 = nullptr;
        while ( 1 )
        {
          if ( v58 == -8192 && !v30 )
            v30 = v133;
          v57 = v56 & (v134 + v57);
          v133 = &v45[2 * v57];
          v58 = *v133;
          if ( v9 == *v133 )
          {
            v30 = &v45[2 * v57];
            goto LABEL_75;
          }
          if ( v58 == -4096 )
            break;
          ++v134;
        }
        if ( v30 )
          goto LABEL_74;
        v30 = &v45[2 * v57];
      }
      goto LABEL_111;
    }
    v66 = (unsigned int)v27 >> 3;
    if ( (int)v27 - *(_DWORD *)(v26 + 76) - v55 > (unsigned int)v66 )
      goto LABEL_74;
    v157 = v27;
    v149 = v28;
    v86 = (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2);
    v87 = v86 >> 4;
    v88 = (((((v87 | v86) >> 8) | v87 | v86) >> 16) | ((v87 | v86) >> 8) | v87 | v86) + 1;
    if ( (unsigned int)v88 < 0x40 )
      LODWORD(v88) = 64;
    *(_DWORD *)(v26 + 80) = v88;
    v89 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v88, 8, v27, v28, v87, v66);
    v90 = v149;
    v91 = v157;
    v92 = v89;
    *(_QWORD *)(v26 + 64) = v89;
    v93 = ((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4);
    if ( v149 )
    {
      *(_QWORD *)(v26 + 72) = 0;
      v158 = 16LL * v157;
      v94 = &v149[2 * v91];
      v95 = *(unsigned int *)(v26 + 80);
      for ( mm = &v89[2 * v95]; mm != v89; v89 += 2 )
        *v89 = -4096;
      v162 = v9;
      v97 = v149;
      v150 = v95 - 1;
      do
      {
        v98 = *v97;
        if ( *v97 != -4096 && v98 != -8192 )
        {
          if ( !(_DWORD)v95 )
          {
            *(_QWORD *)&dword_0 = *v97;
            BUG();
          }
          v99 = v150 & (((unsigned int)v98 >> 9) ^ ((unsigned int)v98 >> 4));
          v100 = &v92[2 * v99];
          v101 = *v100;
          if ( *v100 != v98 && v101 != -4096 )
          {
            v169 = 1;
            v167 = nullptr;
            while ( 1 )
            {
              if ( !v167 )
              {
                if ( v101 != -8192 )
                  v100 = nullptr;
                v167 = v100;
              }
              v99 = v150 & (v169 + v99);
              ++v169;
              v100 = &v92[2 * v99];
              v101 = *v100;
              if ( v98 == *v100 )
                break;
              if ( v101 == -4096 )
              {
                if ( v167 )
                  v100 = v167;
                break;
              }
            }
          }
          *v100 = v98;
          v100[1] = v97[1];
          ++*(_DWORD *)(v26 + 72);
        }
        v97 += 2;
      }
      while ( v94 != v97 );
      v151 = v93;
      v9 = v162;
      operator delete(v90, v158, 8);
      v92 = *(_QWORD **)(v26 + 64);
      v102 = *(_DWORD *)(v26 + 80);
      v93 = v151;
      v55 = *(_DWORD *)(v26 + 72) + 1;
    }
    else
    {
      v130 = *(unsigned int *)(v26 + 80);
      *(_QWORD *)(v26 + 72) = 0;
      v102 = v130;
      for ( nn = &v89[2 * v130]; nn != v89; v89 += 2 )
        *v89 = -4096;
      v55 = 1;
    }
    if ( !v102 )
    {
LABEL_256:
      ++*(_DWORD *)(v26 + 72);
      BUG();
    }
    v103 = v102 - 1;
    v104 = v103 & v93;
    v30 = &v92[2 * (v103 & v93)];
    v58 = *v30;
    if ( v9 == *v30 )
      goto LABEL_75;
    if ( v58 != -4096 )
    {
      v135 = &v92[2 * (v103 & v93)];
      v136 = 1;
      v30 = nullptr;
      while ( 1 )
      {
        if ( v58 == -8192 && !v30 )
          v30 = v135;
        v104 = v103 & (v136 + v104);
        v135 = &v92[2 * v104];
        v58 = *v135;
        if ( v9 == *v135 )
        {
          v30 = &v92[2 * v104];
          goto LABEL_75;
        }
        if ( v58 == -4096 )
          break;
        ++v136;
      }
      if ( v30 )
      {
LABEL_74:
        v58 = *v30;
LABEL_75:
        *(_DWORD *)(v26 + 72) = v55;
        if ( v58 != -4096 )
          --*(_DWORD *)(v26 + 76);
        goto LABEL_77;
      }
      v30 = &v92[2 * v104];
    }
LABEL_111:
    *(_DWORD *)(v26 + 72) = v55;
LABEL_77:
    *v30 = v9;
    v30[1] = 0;
LABEL_25:
    *(_QWORD *)(a3 + 16) -= v25;
    if ( ++v8 == v141 )
      break;
LABEL_16:
    if ( *(char *)(v5 + 28) < 0 )
      return v143;
  }
  v32 = *(unsigned int *)(a3 + 56);
  if ( a5 != v32 )
  {
    if ( a5 >= v32 )
    {
      if ( a5 > (unsigned __int64)*(unsigned int *)(a3 + 60) )
      {
        sub_2237220(a3 + 48, a3 + 64, a5, 8);
        v32 = *(unsigned int *)(a3 + 56);
      }
      v33 = *(_QWORD *)(a3 + 48);
      v34 = (char *)(v33 + 8 * v32);
      v35 = (char *)(v33 + 8LL * a5);
      if ( v34 != v35 )
      {
        v36 = v35 - 8;
        v37 = v34;
        v38 = ((unsigned __int64)(v36 - v34) >> 3) + 1;
        if ( v34 == v36 )
          goto LABEL_34;
        do
        {
          *(_OWORD *)v37 = 0;
          v37 += 16;
        }
        while ( v37 != &v34[16 * (v38 >> 1)] );
        v34 += 8 * (v38 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v38 & 0xFFFFFFFFFFFFFFFELL) != v38 )
LABEL_34:
          *(_QWORD *)v34 = 0;
      }
    }
    *(_DWORD *)(a3 + 56) = a5;
  }
  return 1;
}
