void __fastcall sub_9AE1F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 *v13; // rsi
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rsi
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // esi
  int v30; // r9d
  __int64 v31; // r10
  int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  _QWORD *n; // rax
  int v38; // edx
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *jj; // rax
  int v43; // r10d
  _QWORD *v44; // r14
  int v45; // ecx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 *v50; // r8
  _QWORD *v51; // r14
  __int64 *v52; // r11
  __int64 v53; // r10
  _QWORD *i; // rdx
  __int64 *v55; // rax
  __int64 v56; // rsi
  unsigned int v57; // ecx
  _QWORD *v58; // rdx
  __int64 v59; // rdi
  int v60; // ecx
  __int64 v61; // r11
  __int64 v62; // rdi
  int v63; // r11d
  unsigned int v64; // r8d
  int v65; // edx
  _QWORD *v66; // r9
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r14
  __int64 *v71; // r11
  __int64 v72; // r10
  _QWORD *k; // rdx
  __int64 *v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // esi
  _QWORD *v77; // rcx
  __int64 v78; // rdi
  int v79; // edx
  __int64 v80; // r11
  int v81; // r11d
  unsigned int v82; // r8d
  __int64 v83; // rax
  unsigned int v84; // edx
  _QWORD *j; // rdx
  _QWORD *m; // rdx
  __int64 v87; // rax
  unsigned int v88; // ecx
  int v89; // r9d
  _QWORD *v90; // r8
  int v91; // r9d
  _QWORD *v92; // r8
  int v93; // r9d
  _QWORD *v94; // rdi
  unsigned int v95; // edx
  int v96; // ebx
  _QWORD *v97; // rax
  unsigned int v98; // edx
  int v99; // ebx
  _QWORD *v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // r9
  _QWORD *v105; // rax
  __int64 v106; // rdx
  _QWORD *ii; // rdx
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *kk; // rdx
  unsigned __int64 v115; // [rsp+8h] [rbp-70h]
  unsigned int v116; // [rsp+10h] [rbp-68h]
  int v117; // [rsp+10h] [rbp-68h]
  __int64 *v118; // [rsp+10h] [rbp-68h]
  int v119; // [rsp+10h] [rbp-68h]
  __int64 *v120; // [rsp+18h] [rbp-60h]
  __int64 v121; // [rsp+18h] [rbp-60h]
  unsigned int v122; // [rsp+18h] [rbp-60h]
  __int64 v123; // [rsp+18h] [rbp-60h]
  __int64 *v124; // [rsp+28h] [rbp-50h]
  __int64 *v125; // [rsp+28h] [rbp-50h]
  __m128 v126[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 || v4 != *(_QWORD *)(a2 + 8) || *(_BYTE *)a2 )
  {
    v5 = *(_QWORD **)(a2 + 16);
    if ( *(_DWORD *)(a2 + 24) )
      sub_9ADDD0(v126, v5, &v5[2 * *(unsigned int *)(a2 + 32)], a2 + 16, 0);
    else
      sub_9ADDD0(v126, &v5[2 * *(unsigned int *)(a2 + 32)], &v5[2 * *(unsigned int *)(a2 + 32)], a2 + 16, 1);
    v7 = v126[0].m128_u64[1];
    v6 = v126[0].m128_u64[0];
    v8 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * *(unsigned int *)(a2 + 32));
    sub_9ADDD0(v126, v8, v8, a2 + 16, 1);
    v115 = v126[0].m128_u64[0];
    if ( v126[0].m128_u64[0] == v6 )
      return;
    while ( 1 )
    {
      v9 = *(unsigned int *)(a1 + 32);
      v10 = *(_QWORD *)v6;
      v11 = *(_QWORD *)(a1 + 16);
      if ( !(_DWORD)v9 )
        break;
      v12 = (v9 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v13 = (__int64 *)(v11 + 16LL * v12);
      v14 = *v13;
      if ( v10 != *v13 )
      {
        v29 = 1;
        if ( v14 == -4096 )
          break;
        while ( 1 )
        {
          v30 = v29 + 1;
          v12 = (v9 - 1) & (v12 + v29);
          v13 = (__int64 *)(v11 + 16LL * v12);
          v31 = *v13;
          if ( v10 == *v13 )
            break;
          v29 = v30;
          if ( v31 == -4096 )
            goto LABEL_30;
        }
      }
      sub_9ADDD0(v126, v13, (_QWORD *)(16 * v9 + v11), a1 + 16, 1);
      v15 = v126[0].m128_u64[0];
LABEL_9:
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * *(unsigned int *)(a1 + 32));
      sub_9ADDD0(v126, v16, v16, a1 + 16, 1);
      if ( v126[0].m128_u64[0] == v15 )
        goto LABEL_15;
      v18 = *(_DWORD *)(v15 + 8);
      if ( !v18 || *(_DWORD *)(v6 + 8) == v18 )
        goto LABEL_15;
      v19 = *(unsigned int *)(a1 + 32);
      v20 = *(_QWORD *)(a1 + 16);
      if ( !(_DWORD)v19 )
        goto LABEL_55;
      v21 = *(_QWORD *)v6;
      v17 = (unsigned int)(v19 - 1);
      v22 = v17 & (((unsigned int)*(_QWORD *)v6 >> 9) ^ ((unsigned int)*(_QWORD *)v6 >> 4));
      v23 = (_QWORD *)(v20 + 16LL * v22);
      v24 = *v23;
      if ( *(_QWORD *)v6 != *v23 )
      {
        v43 = 1;
        v44 = nullptr;
        if ( v24 != -4096 )
        {
          while ( 1 )
          {
            if ( v24 == -8192 && !v44 )
              v44 = v23;
            v22 = v17 & (v43 + v22);
            v23 = (_QWORD *)(v20 + 16LL * v22);
            v24 = *v23;
            if ( v21 == *v23 )
              goto LABEL_14;
            if ( v24 == -4096 )
              break;
            ++v43;
          }
          if ( v44 )
            v23 = v44;
        }
        v45 = *(_DWORD *)(a1 + 24) + 1;
        if ( 4 * v45 >= (unsigned int)(3 * v19) )
        {
LABEL_55:
          v120 = *(__int64 **)(a1 + 16);
          v116 = *(_DWORD *)(a1 + 32);
          v47 = (((((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v19 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v19 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v19 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v19 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1);
          v48 = ((v47 >> 16) | v47) + 1;
          if ( (unsigned int)v48 < 0x40 )
            LODWORD(v48) = 64;
          *(_DWORD *)(a1 + 32) = v48;
          v49 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v48, 8, v19, 64, v20, v17);
          v50 = v120;
          v51 = v49;
          *(_QWORD *)(a1 + 16) = v49;
          if ( v120 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v121 = 2LL * v116;
            v52 = &v50[v121];
            v53 = *(unsigned int *)(a1 + 32);
            for ( i = &v49[2 * v53]; i != v49; v49 += 2 )
              *v49 = -4096;
            v55 = v50;
            v117 = v53 - 1;
            if ( v50 != v52 )
            {
              v124 = v50;
              do
              {
                v56 = *v55;
                if ( *v55 != -4096 && v56 != -8192 )
                {
                  if ( !(_DWORD)v53 )
                  {
                    *(_QWORD *)&dword_0 = *v55;
                    BUG();
                  }
                  v57 = v117 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
                  v58 = &v51[2 * v57];
                  v59 = *v58;
                  if ( v56 != *v58 )
                  {
                    v91 = 1;
                    v92 = nullptr;
                    if ( v59 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v59 == -8192 && !v92 )
                          v92 = v58;
                        v57 = v117 & (v91 + v57);
                        v58 = &v51[2 * v57];
                        v59 = *v58;
                        if ( v56 == *v58 )
                          break;
                        if ( v59 == -4096 )
                        {
                          if ( v92 )
                            v58 = v92;
                          break;
                        }
                        ++v91;
                      }
                    }
                  }
                  v60 = *((_DWORD *)v55 + 2);
                  ++*(_DWORD *)(a1 + 24);
                  *v58 = v56;
                  *((_DWORD *)v58 + 2) = v60;
                }
                v55 += 2;
              }
              while ( v52 != v55 );
              v50 = v124;
            }
            operator delete(v50, v121 * 8, 8);
            v51 = *(_QWORD **)(a1 + 16);
            LODWORD(v61) = *(_DWORD *)(a1 + 32);
            v45 = *(_DWORD *)(a1 + 24) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = 0;
            v61 = *(unsigned int *)(a1 + 32);
            for ( j = &v49[2 * v61]; j != v49; v49 += 2 )
              *v49 = -4096;
            v45 = 1;
          }
          if ( !(_DWORD)v61 )
          {
LABEL_175:
            ++*(_DWORD *)(a1 + 24);
            BUG();
          }
          v62 = *(_QWORD *)v6;
          v63 = v61 - 1;
          v64 = v63 & (((unsigned int)*(_QWORD *)v6 >> 9) ^ ((unsigned int)*(_QWORD *)v6 >> 4));
          v23 = &v51[2 * v64];
          v21 = *v23;
          v46 = *v23;
          if ( *(_QWORD *)v6 == *v23 )
            goto LABEL_52;
          v65 = 1;
          v66 = nullptr;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v66 )
                v66 = v23;
              v64 = v63 & (v65 + v64);
              v23 = &v51[2 * v64];
              v21 = *v23;
              if ( v62 == *v23 )
              {
                v46 = *v23;
                goto LABEL_52;
              }
              if ( v21 == -4096 )
                break;
              ++v65;
            }
            if ( v66 )
            {
              v46 = *v66;
              v21 = *(_QWORD *)v6;
              v23 = v66;
              goto LABEL_52;
            }
          }
LABEL_94:
          *(_DWORD *)(a1 + 24) = v45;
          v21 = v62;
        }
        else
        {
          if ( (int)v19 - *(_DWORD *)(a1 + 28) - v45 > (unsigned int)v19 >> 3 )
          {
            v46 = *v23;
            goto LABEL_52;
          }
          v122 = *(_DWORD *)(a1 + 32);
          v118 = *(__int64 **)(a1 + 16);
          v67 = (((((((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4) | ((v17 | (v17 >> 1)) >> 2)
                                                                           | v17
                                                                           | (v17 >> 1)) >> 8)
                 | ((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4)
                 | ((v17 | (v17 >> 1)) >> 2)
                 | v17
                 | (v17 >> 1)) >> 16)
               | ((((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4) | ((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 8)
               | ((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4)
               | ((v17 | (v17 >> 1)) >> 2)
               | v17
               | (v17 >> 1))
              + 1;
          if ( (unsigned int)v67 < 0x40 )
            LODWORD(v67) = 64;
          *(_DWORD *)(a1 + 32) = v67;
          v68 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v67, 8, v19, 64, v20, v17);
          v69 = v122;
          v70 = v68;
          *(_QWORD *)(a1 + 16) = v68;
          if ( v118 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v123 = 16LL * v122;
            v71 = &v118[2 * v69];
            v72 = *(unsigned int *)(a1 + 32);
            for ( k = &v68[2 * v72]; k != v68; v68 += 2 )
              *v68 = -4096;
            v125 = v118;
            v74 = v118;
            v119 = v72 - 1;
            do
            {
              v75 = *v74;
              if ( *v74 != -8192 && v75 != -4096 )
              {
                if ( !(_DWORD)v72 )
                {
                  *(_QWORD *)&dword_0 = *v74;
                  BUG();
                }
                v76 = v119 & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
                v77 = &v70[2 * v76];
                v78 = *v77;
                if ( v75 != *v77 )
                {
                  v89 = 1;
                  v90 = nullptr;
                  if ( v78 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( !v90 && v78 == -8192 )
                        v90 = v77;
                      v76 = v119 & (v89 + v76);
                      v77 = &v70[2 * v76];
                      v78 = *v77;
                      if ( v75 == *v77 )
                        break;
                      if ( v78 == -4096 )
                      {
                        if ( v90 )
                          v77 = v90;
                        break;
                      }
                      ++v89;
                    }
                  }
                }
                *v77 = v75;
                v79 = *((_DWORD *)v74 + 2);
                ++*(_DWORD *)(a1 + 24);
                *((_DWORD *)v77 + 2) = v79;
              }
              v74 += 2;
            }
            while ( v71 != v74 );
            operator delete(v125, v123, 8);
            v70 = *(_QWORD **)(a1 + 16);
            LODWORD(v80) = *(_DWORD *)(a1 + 32);
            v45 = *(_DWORD *)(a1 + 24) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = 0;
            v80 = *(unsigned int *)(a1 + 32);
            for ( m = &v68[2 * v80]; m != v68; v68 += 2 )
              *v68 = -4096;
            v45 = 1;
          }
          if ( !(_DWORD)v80 )
            goto LABEL_175;
          v21 = *(_QWORD *)v6;
          v81 = v80 - 1;
          v82 = v81 & (((unsigned int)*(_QWORD *)v6 >> 9) ^ ((unsigned int)*(_QWORD *)v6 >> 4));
          v23 = &v70[2 * v82];
          v46 = *v23;
          if ( *v23 != *(_QWORD *)v6 )
          {
            v62 = *(_QWORD *)v6;
            if ( v46 == -4096 )
              goto LABEL_94;
            v93 = 1;
            v94 = nullptr;
            while ( 1 )
            {
              if ( v46 == -8192 && !v94 )
                v94 = v23;
              v82 = v81 & (v93 + v82);
              v23 = &v70[2 * v82];
              v46 = *v23;
              if ( v21 == *v23 )
                break;
              if ( v46 == -4096 )
              {
                if ( v94 )
                {
                  v46 = *v94;
                  v23 = v94;
                  break;
                }
                v62 = *(_QWORD *)v6;
                goto LABEL_94;
              }
              ++v93;
            }
          }
LABEL_52:
          *(_DWORD *)(a1 + 24) = v45;
          if ( v46 != -4096 )
            --*(_DWORD *)(a1 + 28);
        }
        *v23 = v21;
        *((_DWORD *)v23 + 2) = 0;
      }
LABEL_14:
      *((_DWORD *)v23 + 2) = 1;
LABEL_15:
      v25 = v6 + 16;
      if ( v6 + 16 == v7 )
      {
LABEL_25:
        v6 = v7;
        if ( v115 == v7 )
          return;
      }
      else
      {
        v26 = *(_QWORD *)(v6 + 16);
        if ( v26 == -8192 || v26 == -4096 )
        {
          v27 = (__int64 *)(v6 + 32);
          do
          {
            v6 = (unsigned __int64)v27;
            if ( v27 == (__int64 *)v7 )
              goto LABEL_25;
            v28 = *v27;
            v27 += 2;
          }
          while ( v28 == -8192 || v28 == -4096 );
          if ( v115 == v6 )
            return;
        }
        else
        {
          v6 += 16LL;
          if ( v115 == v25 )
            return;
        }
      }
    }
LABEL_30:
    sub_9ADDD0(v126, (_QWORD *)(v11 + 16LL * (unsigned int)v9), (_QWORD *)(v11 + 16LL * (unsigned int)v9), a1 + 16, 1);
    v15 = v126[0].m128_u64[0];
    goto LABEL_9;
  }
  v32 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)a1 = 0;
  if ( !v32 )
  {
    if ( !*(_DWORD *)(a1 + 28) )
      goto LABEL_42;
    v83 = *(unsigned int *)(a1 + 32);
    v35 = *(_QWORD **)(a1 + 16);
    v84 = v83;
    v36 = 2 * v83;
    if ( v84 > 0x40 )
    {
      operator delete(v35, v36 * 8, 8);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      goto LABEL_42;
    }
    goto LABEL_39;
  }
  v33 = 4 * v32;
  v34 = *(unsigned int *)(a1 + 32);
  v35 = *(_QWORD **)(a1 + 16);
  if ( (unsigned int)(4 * v32) < 0x40 )
    v33 = 64;
  if ( (unsigned int)v34 <= v33 )
  {
    v36 = 2 * v34;
LABEL_39:
    for ( n = &v35[v36]; n != v35; v35 += 2 )
      *v35 = -4096;
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_42;
  }
  v95 = v32 - 1;
  if ( v95 )
  {
    _BitScanReverse(&v95, v95);
    v96 = 1 << (33 - (v95 ^ 0x1F));
    if ( v96 < 64 )
      v96 = 64;
    if ( v96 == (_DWORD)v34 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v97 = &v35[2 * (unsigned int)v96];
      do
      {
        *v35 = -4096;
        v35 += 2;
      }
      while ( v97 != v35 );
      goto LABEL_42;
    }
  }
  else
  {
    v96 = 64;
  }
  operator delete(v35, 16 * v34, 8);
  v101 = ((((((((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
            | (4 * v96 / 3u + 1)
            | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 4)
          | (((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
          | (4 * v96 / 3u + 1)
          | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
          | (4 * v96 / 3u + 1)
          | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 4)
        | (((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
        | (4 * v96 / 3u + 1)
        | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 16;
  v102 = (v101
        | (((((((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
            | (4 * v96 / 3u + 1)
            | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 4)
          | (((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
          | (4 * v96 / 3u + 1)
          | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
          | (4 * v96 / 3u + 1)
          | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 4)
        | (((4 * v96 / 3u + 1) | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1)) >> 2)
        | (4 * v96 / 3u + 1)
        | ((unsigned __int64)(4 * v96 / 3u + 1) >> 1))
       + 1;
  *(_DWORD *)(a1 + 32) = v102;
  v105 = (_QWORD *)sub_22300B0(16 * v102, 8, v101, 2863311531LL, v103, v104);
  v106 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v105;
  for ( ii = &v105[2 * v106]; ii != v105; v105 += 2 )
    *v105 = -4096;
LABEL_42:
  v38 = *(_DWORD *)(a1 + 48);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(a1 + 52) )
      return;
    v39 = *(_QWORD **)(a1 + 40);
    v40 = *(unsigned int *)(a1 + 56);
    v41 = 2 * v40;
    if ( (unsigned int)v40 > 0x40 )
    {
      operator delete(v39, v41 * 8, 8);
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      return;
    }
    goto LABEL_45;
  }
  v87 = *(unsigned int *)(a1 + 56);
  v39 = *(_QWORD **)(a1 + 40);
  v88 = 4 * v38;
  if ( (unsigned int)(4 * v38) < 0x40 )
    v88 = 64;
  if ( (unsigned int)v87 <= v88 )
  {
    v41 = 2 * v87;
LABEL_45:
    for ( jj = &v39[v41]; jj != v39; v39 += 2 )
      *v39 = -4096;
    *(_QWORD *)(a1 + 48) = 0;
    return;
  }
  v98 = v38 - 1;
  if ( v98 )
  {
    _BitScanReverse(&v98, v98);
    v99 = 1 << (33 - (v98 ^ 0x1F));
    if ( v99 < 64 )
      v99 = 64;
    if ( v99 == (_DWORD)v87 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v100 = &v39[2 * (unsigned int)v99];
      do
      {
        *v39 = -4096;
        v39 += 2;
      }
      while ( v100 != v39 );
      return;
    }
  }
  else
  {
    v99 = 64;
  }
  operator delete(v39, 16 * v87, 8);
  v108 = ((((((((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
            | (4 * v99 / 3u + 1)
            | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 4)
          | (((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
          | (4 * v99 / 3u + 1)
          | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
          | (4 * v99 / 3u + 1)
          | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 4)
        | (((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
        | (4 * v99 / 3u + 1)
        | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 16;
  v109 = (v108
        | (((((((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
            | (4 * v99 / 3u + 1)
            | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 4)
          | (((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
          | (4 * v99 / 3u + 1)
          | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
          | (4 * v99 / 3u + 1)
          | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 4)
        | (((4 * v99 / 3u + 1) | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1)) >> 2)
        | (4 * v99 / 3u + 1)
        | ((unsigned __int64)(4 * v99 / 3u + 1) >> 1))
       + 1;
  *(_DWORD *)(a1 + 56) = v109;
  v112 = (_QWORD *)sub_22300B0(16 * v109, 8, v108, 2863311531LL, v110, v111);
  v113 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = v112;
  for ( kk = &v112[2 * v113]; kk != v112; v112 += 2 )
    *v112 = -4096;
}
