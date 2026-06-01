__int64 __fastcall sub_C03020(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
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
  _QWORD *v44; // r11
  __int64 *v45; // r9
  __int64 v46; // r10
  _QWORD *ii; // rdx
  __int64 *v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // edi
  _QWORD *v51; // rsi
  __int64 v52; // r8
  int v53; // edx
  int v54; // esi
  int v55; // edx
  unsigned int v56; // edi
  __int64 v57; // rcx
  int v58; // r10d
  _QWORD *v59; // r11
  int v60; // esi
  __int64 v61; // r9
  __int64 v62; // rdx
  int v63; // r9d
  __int64 *v64; // r11
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // r11
  __int64 *v70; // r15
  __int64 v71; // r9
  _QWORD *k; // rdx
  __int64 *v73; // rax
  int m; // r10d
  __int64 v75; // rcx
  unsigned int v76; // edx
  _QWORD *v77; // rsi
  __int64 v78; // rdi
  __m128i v79; // xmm1
  __int64 v80; // rcx
  int v81; // ecx
  unsigned int v82; // edi
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r8
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // r11
  unsigned int v88; // r10d
  __int64 *v89; // r9
  __int64 v90; // r8
  _QWORD *mm; // rdx
  __int64 *v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // edi
  _QWORD *v95; // rsi
  __int64 v96; // rbp
  int v97; // edi
  int v98; // edi
  unsigned int v99; // edx
  unsigned int v100; // eax
  _QWORD *v101; // rax
  _QWORD *v102; // r11
  __int64 *v103; // r9
  __int64 v104; // r10
  _QWORD *i; // rdx
  __int64 *v106; // rax
  __int64 v107; // rdx
  unsigned int v108; // ecx
  _QWORD *v109; // rsi
  __int64 v110; // rdi
  __m128i v111; // xmm2
  __int64 v112; // rcx
  int v113; // ecx
  unsigned int v114; // r15d
  _QWORD *v115; // rdi
  int v116; // r9d
  int v117; // r8d
  unsigned int v118; // r9d
  unsigned __int8 **v119; // rax
  _QWORD *n; // rdx
  __int64 v121; // rcx
  _QWORD *kk; // rcx
  __int64 v123; // rdx
  _QWORD *nn; // rdx
  _QWORD *j; // rdx
  __int64 *v126; // r10
  int v127; // r9d
  __int64 *v128; // r9
  int v129; // r10d
  _QWORD *v130; // r10
  int v131; // r8d
  int v132; // r9d
  unsigned int v133; // r8d
  int v134; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v136; // [rsp+1Bh] [rbp-6Dh]
  unsigned int v138; // [rsp+20h] [rbp-68h]
  int jj; // [rsp+20h] [rbp-68h]
  unsigned int v140; // [rsp+20h] [rbp-68h]
  __int64 *v141; // [rsp+20h] [rbp-68h]
  int v142; // [rsp+20h] [rbp-68h]
  unsigned int v143; // [rsp+20h] [rbp-68h]
  __int64 *v144; // [rsp+20h] [rbp-68h]
  int v145; // [rsp+20h] [rbp-68h]
  __int64 *v146; // [rsp+28h] [rbp-60h]
  __int64 *v147; // [rsp+28h] [rbp-60h]
  unsigned int v148; // [rsp+28h] [rbp-60h]
  unsigned int v149; // [rsp+28h] [rbp-60h]
  _QWORD *v150; // [rsp+28h] [rbp-60h]
  __int64 v151; // [rsp+30h] [rbp-58h]
  int v152; // [rsp+30h] [rbp-58h]
  _QWORD *v153; // [rsp+30h] [rbp-58h]
  _QWORD *v154; // [rsp+30h] [rbp-58h]
  int v155; // [rsp+38h] [rbp-50h]
  _QWORD *v156; // [rsp+38h] [rbp-50h]
  int v157; // [rsp+38h] [rbp-50h]
  int v158; // [rsp+40h] [rbp-48h]

  v5 = a4;
  v134 = *(_DWORD *)(a3 + 56);
  if ( a5 == v134 )
    return 1;
  v6 = *(_BYTE *)(a3 + 24);
  if ( (v6 & 1) != 0 )
    return 0;
  v136 = *(_BYTE *)(a3 + 128) & 1;
  if ( v136 )
  {
    v40 = (unsigned __int8 **)sub_E0FF50(a1, a2, 2461, 0);
    if ( v40 )
      sub_BED5E0(v40, 1);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    return 0;
  }
  if ( (v6 & 2) != 0
    || (v134 != 1 || (v6 & 4) == 0)
    && (v6 & 8) != 0
    && *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) == *(_QWORD *)(a3 + 32) )
  {
    v119 = (unsigned __int8 **)sub_E0FF50(a1, a2, 2466, 0);
    if ( v119 )
      sub_BED5E0(v119, 1);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    return v136;
  }
  v8 = a5;
  if ( *(char *)(a4 + 28) < 0 )
    return v136;
  while ( 1 )
  {
    v18 = sub_EBA840(*(_QWORD *)(a1 + 16), v5);
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
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104), v22, v19, v20, v21),
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
      v58 = 1;
      v59 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( v16 == -8192 && !v59 )
            v59 = v15;
          v14 = (unsigned int)v13 & ((_DWORD)v14 + v58);
          v15 = (_QWORD *)(v12 + 24 * v14);
          v16 = *v15;
          if ( v9 == *v15 )
            goto LABEL_14;
          if ( v16 == -4096 )
            break;
          ++v58;
        }
        if ( v59 )
          v15 = v59;
      }
      v60 = *(_DWORD *)(v10 + 96) + 1;
      v21 = (unsigned int)(4 * v60);
      if ( (unsigned int)v21 < 3 * (int)v11 )
      {
        v61 = (unsigned int)v11 >> 3;
        if ( (int)v11 - *(_DWORD *)(v10 + 100) - v60 > (unsigned int)v61 )
        {
LABEL_67:
          v62 = *v15;
LABEL_68:
          *(_DWORD *)(v10 + 96) = v60;
          if ( v62 != -4096 )
            --*(_DWORD *)(v10 + 100);
          goto LABEL_70;
        }
        v149 = *(_DWORD *)(v10 + 104);
        v144 = *(__int64 **)(v10 + 88);
        v100 = ((((((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
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
        if ( v100 < 0x40 )
          v100 = 64;
        *(_DWORD *)(v10 + 104) = v100;
        v101 = (_QWORD *)sub_220C370(24LL * v100, 8, v11, 64, v12, v61);
        v102 = v101;
        *(_QWORD *)(v10 + 88) = v101;
        if ( v144 )
        {
          *(_QWORD *)(v10 + 96) = 0;
          v103 = &v144[3 * v149];
          v104 = *(unsigned int *)(v10 + 104);
          for ( i = &v101[3 * v104]; i != v101; v101 += 3 )
            *v101 = -4096;
          v106 = v144;
          v145 = v104 - 1;
          do
          {
            v107 = *v106;
            if ( *v106 != -8192 && v107 != -4096 )
            {
              if ( !(_DWORD)v104 )
              {
                *(_QWORD *)&dword_0 = *v106;
                BUG();
              }
              v108 = v145 & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
              v109 = &v102[3 * v108];
              v110 = *v109;
              if ( *v109 != v107 && v110 != -4096 )
              {
                v157 = 1;
                v154 = nullptr;
                while ( 1 )
                {
                  if ( !v154 )
                  {
                    if ( v110 != -8192 )
                      v109 = nullptr;
                    v154 = v109;
                  }
                  v108 = v145 & (v157 + v108);
                  ++v157;
                  v109 = &v102[3 * v108];
                  v110 = *v109;
                  if ( v107 == *v109 )
                    break;
                  if ( v110 == -4096 )
                  {
                    if ( v154 )
                      v109 = v154;
                    break;
                  }
                }
              }
              v111 = _mm_loadu_si128((const __m128i *)(v106 + 1));
              *v109 = v107;
              *(__m128i *)(v109 + 1) = v111;
              ++*(_DWORD *)(v10 + 96);
            }
            v106 += 3;
          }
          while ( v103 != v106 );
          operator delete();
          v102 = *(_QWORD **)(v10 + 88);
          LODWORD(v112) = *(_DWORD *)(v10 + 104);
          v60 = *(_DWORD *)(v10 + 96) + 1;
        }
        else
        {
          *(_QWORD *)(v10 + 96) = 0;
          v112 = *(unsigned int *)(v10 + 104);
          for ( j = &v101[3 * v112]; j != v101; v101 += 3 )
            *v101 = -4096;
          v60 = 1;
        }
        if ( !(_DWORD)v112 )
          goto LABEL_255;
        v113 = v112 - 1;
        v114 = v113 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v15 = &v102[3 * v114];
        v62 = *v15;
        if ( v9 == *v15 )
          goto LABEL_68;
        if ( v62 != -4096 )
        {
          v115 = &v102[3 * v114];
          v116 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v62 == -8192 && !v15 )
              v15 = v115;
            v117 = v116 + 1;
            v118 = v113 & (v114 + v116);
            v114 = v118;
            v115 = &v102[3 * v118];
            v62 = *v115;
            if ( v9 == *v115 )
            {
              v15 = &v102[3 * v118];
              goto LABEL_68;
            }
            if ( v62 == -4096 )
              break;
            v116 = v117;
          }
          if ( v15 )
            goto LABEL_67;
          v15 = &v102[3 * v118];
        }
      }
      else
      {
LABEL_78:
        v147 = *(__int64 **)(v10 + 88);
        v140 = *(_DWORD *)(v10 + 104);
        v66 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
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
        v67 = ((v66 >> 16) | v66) + 1;
        if ( (unsigned int)v67 < 0x40 )
          LODWORD(v67) = 64;
        *(_DWORD *)(v10 + 104) = v67;
        v68 = (_QWORD *)sub_220C370(24LL * (unsigned int)v67, 8, v11, 64, v12, v21);
        v69 = v68;
        *(_QWORD *)(v10 + 88) = v68;
        if ( v147 )
        {
          *(_QWORD *)(v10 + 96) = 0;
          v70 = &v147[3 * v140];
          v71 = *(unsigned int *)(v10 + 104);
          for ( k = &v68[3 * v71]; k != v68; v68 += 3 )
            *v68 = -4096;
          v73 = v147;
          for ( m = v71 - 1; v70 != v73; v73 += 3 )
          {
            v75 = *v73;
            if ( *v73 != -4096 && v75 != -8192 )
            {
              if ( !(_DWORD)v71 )
              {
                *(_QWORD *)&dword_0 = *v73;
                BUG();
              }
              v76 = m & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
              v77 = &v69[3 * v76];
              v78 = *v77;
              if ( v75 != *v77 && v78 != -4096 )
              {
                v152 = 1;
                v150 = nullptr;
                while ( 1 )
                {
                  if ( v78 == -8192 )
                  {
                    if ( v150 )
                      v77 = v150;
                    v150 = v77;
                  }
                  v76 = m & (v152 + v76);
                  v77 = &v69[3 * v76];
                  v78 = *v77;
                  if ( v75 == *v77 )
                    break;
                  if ( v78 == -4096 )
                  {
                    if ( v150 )
                      v77 = v150;
                    break;
                  }
                  ++v152;
                }
              }
              v79 = _mm_loadu_si128((const __m128i *)(v73 + 1));
              *v77 = v75;
              *(__m128i *)(v77 + 1) = v79;
              ++*(_DWORD *)(v10 + 96);
            }
          }
          operator delete();
          v69 = *(_QWORD **)(v10 + 88);
          LODWORD(v80) = *(_DWORD *)(v10 + 104);
          v60 = *(_DWORD *)(v10 + 96) + 1;
        }
        else
        {
          *(_QWORD *)(v10 + 96) = 0;
          v80 = *(unsigned int *)(v10 + 104);
          for ( n = &v68[3 * v80]; n != v68; v68 += 3 )
            *v68 = -4096;
          v60 = 1;
        }
        if ( !(_DWORD)v80 )
        {
LABEL_255:
          ++*(_DWORD *)(v10 + 96);
          BUG();
        }
        v81 = v80 - 1;
        v82 = v81 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v15 = &v69[3 * v82];
        v62 = *v15;
        if ( v9 == *v15 )
          goto LABEL_68;
        if ( v62 != -4096 )
        {
          v130 = &v69[3 * (v81 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))];
          v131 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v62 == -8192 && !v15 )
              v15 = v130;
            v132 = v131 + 1;
            v133 = v82 + v131;
            v82 = v81 & v133;
            v130 = &v69[3 * (v81 & v133)];
            v62 = *v130;
            if ( v9 == *v130 )
            {
              v15 = &v69[3 * (v81 & v133)];
              goto LABEL_68;
            }
            if ( v62 == -4096 )
              break;
            v131 = v132;
          }
          if ( v15 )
            goto LABEL_67;
          v15 = &v69[3 * (v81 & v133)];
        }
      }
      *(_DWORD *)(v10 + 96) = v60;
LABEL_70:
      *v15 = v9;
      v15[1] = 0;
      *((_BYTE *)v15 + 16) = 0;
      v17 = 0;
LABEL_15:
      *(_QWORD *)(a3 + 16) -= v17;
      if ( ++v8 == v134 )
        break;
      goto LABEL_16;
    }
    if ( v9
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104), v22, v19, v20, v21),
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
    v63 = 1;
    v64 = nullptr;
    if ( v31 != -4096 )
    {
      while ( 1 )
      {
        if ( v31 == -8192 && !v64 )
          v64 = v30;
        v29 = v20 & (v63 + v29);
        v30 = &v28[2 * v29];
        v31 = *v30;
        if ( v9 == *v30 )
          goto LABEL_24;
        if ( v31 == -4096 )
          break;
        ++v63;
      }
      if ( v64 )
        v30 = v64;
    }
    v54 = *(_DWORD *)(v26 + 72) + 1;
    v21 = (unsigned int)(4 * v54);
    if ( (unsigned int)v21 >= 3 * (int)v27 )
    {
LABEL_46:
      v146 = v28;
      v138 = v27;
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
      v43 = (_QWORD *)sub_220C370(16LL * (unsigned int)v42, 8, v27, v28, v20, v21);
      v44 = v43;
      *(_QWORD *)(v26 + 64) = v43;
      if ( v146 )
      {
        *(_QWORD *)(v26 + 72) = 0;
        v45 = &v146[2 * v138];
        v46 = *(unsigned int *)(v26 + 80);
        for ( ii = &v43[2 * v46]; ii != v43; v43 += 2 )
          *v43 = -4096;
        v48 = v146;
        for ( jj = v46 - 1; v45 != v48; v48 += 2 )
        {
          v49 = *v48;
          if ( *v48 != -4096 && v49 != -8192 )
          {
            if ( !(_DWORD)v46 )
            {
              *(_QWORD *)&dword_0 = *v48;
              BUG();
            }
            v50 = jj & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
            v51 = &v44[2 * v50];
            v52 = *v51;
            if ( v49 != *v51 && v52 != -4096 )
            {
              v155 = 1;
              v153 = nullptr;
              while ( 1 )
              {
                if ( !v153 )
                {
                  if ( v52 != -8192 )
                    v51 = nullptr;
                  v153 = v51;
                }
                v50 = jj & (v155 + v50);
                ++v155;
                v51 = &v44[2 * v50];
                v52 = *v51;
                if ( v49 == *v51 )
                  break;
                if ( v52 == -4096 )
                {
                  if ( v153 )
                    v51 = v153;
                  break;
                }
              }
            }
            *v51 = v49;
            v51[1] = v48[1];
            ++*(_DWORD *)(v26 + 72);
          }
        }
        operator delete();
        v44 = *(_QWORD **)(v26 + 64);
        v53 = *(_DWORD *)(v26 + 80);
        v54 = *(_DWORD *)(v26 + 72) + 1;
      }
      else
      {
        v121 = *(unsigned int *)(v26 + 80);
        *(_QWORD *)(v26 + 72) = 0;
        v53 = v121;
        for ( kk = &v43[2 * v121]; kk != v43; v43 += 2 )
          *v43 = -4096;
        v54 = 1;
      }
      if ( !v53 )
        goto LABEL_256;
      v55 = v53 - 1;
      v56 = v55 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v30 = &v44[2 * v56];
      v57 = *v30;
      if ( *v30 == v9 )
      {
        v57 = v9;
        goto LABEL_75;
      }
      if ( v57 != -4096 )
      {
        v126 = &v44[2 * (v55 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))];
        v127 = 1;
        v30 = nullptr;
        while ( 1 )
        {
          if ( v57 == -8192 && !v30 )
            v30 = v126;
          v56 = v55 & (v127 + v56);
          v126 = &v44[2 * v56];
          v57 = *v126;
          if ( v9 == *v126 )
          {
            v30 = &v44[2 * v56];
            goto LABEL_75;
          }
          if ( v57 == -4096 )
            break;
          ++v127;
        }
        if ( v30 )
          goto LABEL_74;
        v30 = &v44[2 * v56];
      }
      goto LABEL_111;
    }
    v65 = (unsigned int)v27 >> 3;
    if ( (int)v27 - *(_DWORD *)(v26 + 76) - v54 > (unsigned int)v65 )
      goto LABEL_74;
    v148 = v27;
    v141 = v28;
    v83 = (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2);
    v84 = v83 >> 4;
    v85 = (((((v84 | v83) >> 8) | v84 | v83) >> 16) | ((v84 | v83) >> 8) | v84 | v83) + 1;
    if ( (unsigned int)v85 < 0x40 )
      LODWORD(v85) = 64;
    *(_DWORD *)(v26 + 80) = v85;
    v86 = (_QWORD *)sub_220C370(16LL * (unsigned int)v85, 8, v27, v28, v84, v65);
    v87 = v86;
    *(_QWORD *)(v26 + 64) = v86;
    v88 = ((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4);
    if ( v141 )
    {
      *(_QWORD *)(v26 + 72) = 0;
      v89 = &v141[2 * v148];
      v90 = *(unsigned int *)(v26 + 80);
      for ( mm = &v86[2 * v90]; mm != v86; v86 += 2 )
        *v86 = -4096;
      v151 = v9;
      v92 = v141;
      v142 = v90 - 1;
      do
      {
        v93 = *v92;
        if ( *v92 != -4096 && v93 != -8192 )
        {
          if ( !(_DWORD)v90 )
          {
            *(_QWORD *)&dword_0 = *v92;
            BUG();
          }
          v94 = v142 & (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4));
          v95 = &v87[2 * v94];
          v96 = *v95;
          if ( *v95 != v93 && v96 != -4096 )
          {
            v158 = 1;
            v156 = nullptr;
            while ( 1 )
            {
              if ( !v156 )
              {
                if ( v96 != -8192 )
                  v95 = nullptr;
                v156 = v95;
              }
              v94 = v142 & (v158 + v94);
              ++v158;
              v95 = &v87[2 * v94];
              v96 = *v95;
              if ( v93 == *v95 )
                break;
              if ( v96 == -4096 )
              {
                if ( v156 )
                  v95 = v156;
                break;
              }
            }
          }
          *v95 = v93;
          v95[1] = v92[1];
          ++*(_DWORD *)(v26 + 72);
        }
        v92 += 2;
      }
      while ( v89 != v92 );
      v143 = v88;
      v9 = v151;
      operator delete();
      v87 = *(_QWORD **)(v26 + 64);
      v97 = *(_DWORD *)(v26 + 80);
      v88 = v143;
      v54 = *(_DWORD *)(v26 + 72) + 1;
    }
    else
    {
      v123 = *(unsigned int *)(v26 + 80);
      *(_QWORD *)(v26 + 72) = 0;
      v97 = v123;
      for ( nn = &v86[2 * v123]; nn != v86; v86 += 2 )
        *v86 = -4096;
      v54 = 1;
    }
    if ( !v97 )
    {
LABEL_256:
      ++*(_DWORD *)(v26 + 72);
      BUG();
    }
    v98 = v97 - 1;
    v99 = v98 & v88;
    v30 = &v87[2 * (v98 & v88)];
    v57 = *v30;
    if ( v9 == *v30 )
      goto LABEL_75;
    if ( v57 != -4096 )
    {
      v128 = &v87[2 * (v98 & v88)];
      v129 = 1;
      v30 = nullptr;
      while ( 1 )
      {
        if ( v57 == -8192 && !v30 )
          v30 = v128;
        v99 = v98 & (v129 + v99);
        v128 = &v87[2 * v99];
        v57 = *v128;
        if ( v9 == *v128 )
        {
          v30 = &v87[2 * v99];
          goto LABEL_75;
        }
        if ( v57 == -4096 )
          break;
        ++v129;
      }
      if ( v30 )
      {
LABEL_74:
        v57 = *v30;
LABEL_75:
        *(_DWORD *)(v26 + 72) = v54;
        if ( v57 != -4096 )
          --*(_DWORD *)(v26 + 76);
        goto LABEL_77;
      }
      v30 = &v87[2 * v99];
    }
LABEL_111:
    *(_DWORD *)(v26 + 72) = v54;
LABEL_77:
    *v30 = v9;
    v30[1] = 0;
LABEL_25:
    *(_QWORD *)(a3 + 16) -= v25;
    if ( ++v8 == v134 )
      break;
LABEL_16:
    if ( *(char *)(v5 + 28) < 0 )
      return v136;
  }
  v32 = *(unsigned int *)(a3 + 56);
  if ( a5 != v32 )
  {
    if ( a5 >= v32 )
    {
      if ( a5 > (unsigned __int64)*(unsigned int *)(a3 + 60) )
      {
        sub_22134E0(a3 + 48, a3 + 64, a5, 8);
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

