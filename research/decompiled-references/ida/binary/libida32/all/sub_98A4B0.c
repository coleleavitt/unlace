void __fastcall sub_98A4B0(__int64 a1, __int64 a2)
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
  _QWORD *ii; // rax
  int v38; // edx
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *kk; // rax
  int v43; // r10d
  _QWORD *v44; // r14
  int v45; // ecx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  __int64 *v51; // r11
  __int64 v52; // r10
  _QWORD *i; // rdx
  __int64 *v54; // rax
  __int64 v55; // rsi
  unsigned int v56; // ecx
  _QWORD *v57; // rdx
  __int64 v58; // rdi
  int v59; // ecx
  __int64 v60; // r11
  __int64 v61; // rdi
  int v62; // r11d
  unsigned int v63; // r8d
  int v64; // edx
  _QWORD *v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // r14
  __int64 *v69; // r11
  __int64 v70; // r10
  _QWORD *m; // rdx
  __int64 *v72; // rax
  __int64 v73; // rdx
  unsigned int v74; // esi
  _QWORD *v75; // rcx
  __int64 v76; // rdi
  int v77; // edx
  __int64 v78; // r11
  int v79; // r11d
  unsigned int v80; // r8d
  __int64 v81; // rax
  unsigned int v82; // edx
  _QWORD *k; // rdx
  _QWORD *n; // rdx
  __int64 v85; // rax
  unsigned int v86; // ecx
  int v87; // r9d
  _QWORD *v88; // r8
  int v89; // r9d
  _QWORD *v90; // r8
  int v91; // r9d
  _QWORD *v92; // rdi
  unsigned int v93; // edx
  int v94; // ebx
  _QWORD *v95; // rax
  unsigned int v96; // edx
  int v97; // ebx
  _QWORD *v98; // rax
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *jj; // rdx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  __int64 v111; // rdx
  _QWORD *mm; // rdx
  unsigned __int64 v113; // [rsp+8h] [rbp-70h]
  unsigned int v114; // [rsp+10h] [rbp-68h]
  int j; // [rsp+10h] [rbp-68h]
  __int64 *v116; // [rsp+10h] [rbp-68h]
  int v117; // [rsp+10h] [rbp-68h]
  __int64 *v118; // [rsp+18h] [rbp-60h]
  unsigned int v119; // [rsp+18h] [rbp-60h]
  __m128 v120[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 || v4 != *(_QWORD *)(a2 + 8) || *(_BYTE *)a2 )
  {
    v5 = *(_QWORD **)(a2 + 16);
    if ( *(_DWORD *)(a2 + 24) )
      sub_98A090(v120, v5, &v5[2 * *(unsigned int *)(a2 + 32)], a2 + 16, 0);
    else
      sub_98A090(v120, &v5[2 * *(unsigned int *)(a2 + 32)], &v5[2 * *(unsigned int *)(a2 + 32)], a2 + 16, 1);
    v7 = v120[0].m128_u64[1];
    v6 = v120[0].m128_u64[0];
    v8 = (_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * *(unsigned int *)(a2 + 32));
    sub_98A090(v120, v8, v8, a2 + 16, 1);
    v113 = v120[0].m128_u64[0];
    if ( v120[0].m128_u64[0] == v6 )
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
      sub_98A090(v120, v13, (_QWORD *)(16 * v9 + v11), a1 + 16, 1);
      v15 = v120[0].m128_u64[0];
LABEL_9:
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * *(unsigned int *)(a1 + 32));
      sub_98A090(v120, v16, v16, a1 + 16, 1);
      if ( v120[0].m128_u64[0] == v15 )
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
          v118 = *(__int64 **)(a1 + 16);
          v114 = *(_DWORD *)(a1 + 32);
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
          v49 = (_QWORD *)sub_220C370(16LL * (unsigned int)v48, 8, v19, 64, v20, v17);
          v50 = v49;
          *(_QWORD *)(a1 + 16) = v49;
          if ( v118 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v51 = &v118[2 * v114];
            v52 = *(unsigned int *)(a1 + 32);
            for ( i = &v49[2 * v52]; i != v49; v49 += 2 )
              *v49 = -4096;
            v54 = v118;
            for ( j = v52 - 1; v51 != v54; v54 += 2 )
            {
              v55 = *v54;
              if ( *v54 != -4096 && v55 != -8192 )
              {
                if ( !(_DWORD)v52 )
                {
                  *(_QWORD *)&dword_0 = *v54;
                  BUG();
                }
                v56 = j & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
                v57 = &v50[2 * v56];
                v58 = *v57;
                if ( v55 != *v57 )
                {
                  v89 = 1;
                  v90 = nullptr;
                  if ( v58 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v58 == -8192 && !v90 )
                        v90 = v57;
                      v56 = j & (v89 + v56);
                      v57 = &v50[2 * v56];
                      v58 = *v57;
                      if ( v55 == *v57 )
                        break;
                      if ( v58 == -4096 )
                      {
                        if ( v90 )
                          v57 = v90;
                        break;
                      }
                      ++v89;
                    }
                  }
                }
                v59 = *((_DWORD *)v54 + 2);
                ++*(_DWORD *)(a1 + 24);
                *v57 = v55;
                *((_DWORD *)v57 + 2) = v59;
              }
            }
            operator delete();
            v50 = *(_QWORD **)(a1 + 16);
            LODWORD(v60) = *(_DWORD *)(a1 + 32);
            v45 = *(_DWORD *)(a1 + 24) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = 0;
            v60 = *(unsigned int *)(a1 + 32);
            for ( k = &v49[2 * v60]; k != v49; v49 += 2 )
              *v49 = -4096;
            v45 = 1;
          }
          if ( !(_DWORD)v60 )
          {
LABEL_173:
            ++*(_DWORD *)(a1 + 24);
            BUG();
          }
          v61 = *(_QWORD *)v6;
          v62 = v60 - 1;
          v63 = v62 & (((unsigned int)*(_QWORD *)v6 >> 9) ^ ((unsigned int)*(_QWORD *)v6 >> 4));
          v23 = &v50[2 * v63];
          v21 = *v23;
          v46 = *v23;
          if ( *(_QWORD *)v6 == *v23 )
            goto LABEL_52;
          v64 = 1;
          v65 = nullptr;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v65 )
                v65 = v23;
              v63 = v62 & (v64 + v63);
              v23 = &v50[2 * v63];
              v21 = *v23;
              if ( v61 == *v23 )
              {
                v46 = *v23;
                goto LABEL_52;
              }
              if ( v21 == -4096 )
                break;
              ++v64;
            }
            if ( v65 )
            {
              v46 = *v65;
              v21 = *(_QWORD *)v6;
              v23 = v65;
              goto LABEL_52;
            }
          }
LABEL_92:
          *(_DWORD *)(a1 + 24) = v45;
          v21 = v61;
        }
        else
        {
          if ( (int)v19 - *(_DWORD *)(a1 + 28) - v45 > (unsigned int)v19 >> 3 )
          {
            v46 = *v23;
            goto LABEL_52;
          }
          v119 = *(_DWORD *)(a1 + 32);
          v116 = *(__int64 **)(a1 + 16);
          v66 = (((((((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4) | ((v17 | (v17 >> 1)) >> 2)
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
          if ( (unsigned int)v66 < 0x40 )
            LODWORD(v66) = 64;
          *(_DWORD *)(a1 + 32) = v66;
          v67 = (_QWORD *)sub_220C370(16LL * (unsigned int)v66, 8, v19, 64, v20, v17);
          v68 = v67;
          *(_QWORD *)(a1 + 16) = v67;
          if ( v116 )
          {
            *(_QWORD *)(a1 + 24) = 0;
            v69 = &v116[2 * v119];
            v70 = *(unsigned int *)(a1 + 32);
            for ( m = &v67[2 * v70]; m != v67; v67 += 2 )
              *v67 = -4096;
            v72 = v116;
            v117 = v70 - 1;
            do
            {
              v73 = *v72;
              if ( *v72 != -8192 && v73 != -4096 )
              {
                if ( !(_DWORD)v70 )
                {
                  *(_QWORD *)&dword_0 = *v72;
                  BUG();
                }
                v74 = v117 & (((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4));
                v75 = &v68[2 * v74];
                v76 = *v75;
                if ( v73 != *v75 )
                {
                  v87 = 1;
                  v88 = nullptr;
                  if ( v76 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( !v88 && v76 == -8192 )
                        v88 = v75;
                      v74 = v117 & (v87 + v74);
                      v75 = &v68[2 * v74];
                      v76 = *v75;
                      if ( v73 == *v75 )
                        break;
                      if ( v76 == -4096 )
                      {
                        if ( v88 )
                          v75 = v88;
                        break;
                      }
                      ++v87;
                    }
                  }
                }
                *v75 = v73;
                v77 = *((_DWORD *)v72 + 2);
                ++*(_DWORD *)(a1 + 24);
                *((_DWORD *)v75 + 2) = v77;
              }
              v72 += 2;
            }
            while ( v69 != v72 );
            operator delete();
            v68 = *(_QWORD **)(a1 + 16);
            LODWORD(v78) = *(_DWORD *)(a1 + 32);
            v45 = *(_DWORD *)(a1 + 24) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = 0;
            v78 = *(unsigned int *)(a1 + 32);
            for ( n = &v67[2 * v78]; n != v67; v67 += 2 )
              *v67 = -4096;
            v45 = 1;
          }
          if ( !(_DWORD)v78 )
            goto LABEL_173;
          v21 = *(_QWORD *)v6;
          v79 = v78 - 1;
          v80 = v79 & (((unsigned int)*(_QWORD *)v6 >> 9) ^ ((unsigned int)*(_QWORD *)v6 >> 4));
          v23 = &v68[2 * v80];
          v46 = *v23;
          if ( *v23 != *(_QWORD *)v6 )
          {
            v61 = *(_QWORD *)v6;
            if ( v46 == -4096 )
              goto LABEL_92;
            v91 = 1;
            v92 = nullptr;
            while ( 1 )
            {
              if ( v46 == -8192 && !v92 )
                v92 = v23;
              v80 = v79 & (v91 + v80);
              v23 = &v68[2 * v80];
              v46 = *v23;
              if ( v21 == *v23 )
                break;
              if ( v46 == -4096 )
              {
                if ( v92 )
                {
                  v46 = *v92;
                  v23 = v92;
                  break;
                }
                v61 = *(_QWORD *)v6;
                goto LABEL_92;
              }
              ++v91;
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
        if ( v113 == v7 )
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
          if ( v113 == v6 )
            return;
        }
        else
        {
          v6 += 16LL;
          if ( v113 == v25 )
            return;
        }
      }
    }
LABEL_30:
    sub_98A090(v120, (_QWORD *)(v11 + 16LL * (unsigned int)v9), (_QWORD *)(v11 + 16LL * (unsigned int)v9), a1 + 16, 1);
    v15 = v120[0].m128_u64[0];
    goto LABEL_9;
  }
  v32 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)a1 = 0;
  if ( !v32 )
  {
    if ( !*(_DWORD *)(a1 + 28) )
      goto LABEL_42;
    v81 = *(unsigned int *)(a1 + 32);
    v35 = *(_QWORD **)(a1 + 16);
    v82 = v81;
    v36 = 2 * v81;
    if ( v82 > 0x40 )
    {
      operator delete();
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
    for ( ii = &v35[v36]; ii != v35; v35 += 2 )
      *v35 = -4096;
    *(_QWORD *)(a1 + 24) = 0;
    goto LABEL_42;
  }
  v93 = v32 - 1;
  if ( v93 )
  {
    _BitScanReverse(&v93, v93);
    v94 = 1 << (33 - (v93 ^ 0x1F));
    if ( v94 < 64 )
      v94 = 64;
    if ( v94 == (_DWORD)v34 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v95 = &v35[2 * (unsigned int)v94];
      do
      {
        *v35 = -4096;
        v35 += 2;
      }
      while ( v95 != v35 );
      goto LABEL_42;
    }
  }
  else
  {
    v94 = 64;
  }
  operator delete();
  v99 = ((((((((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
           | (4 * v94 / 3u + 1)
           | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 4)
         | (((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
         | (4 * v94 / 3u + 1)
         | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 8)
       | (((((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
         | (4 * v94 / 3u + 1)
         | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 4)
       | (((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
       | (4 * v94 / 3u + 1)
       | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 16;
  v100 = (v99
        | (((((((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
            | (4 * v94 / 3u + 1)
            | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 4)
          | (((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
          | (4 * v94 / 3u + 1)
          | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
          | (4 * v94 / 3u + 1)
          | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 4)
        | (((4 * v94 / 3u + 1) | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1)) >> 2)
        | (4 * v94 / 3u + 1)
        | ((unsigned __int64)(4 * v94 / 3u + 1) >> 1))
       + 1;
  *(_DWORD *)(a1 + 32) = v100;
  v103 = (_QWORD *)sub_220C370(16 * v100, 8, v99, 2863311531LL, v101, v102);
  v104 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v103;
  for ( jj = &v103[2 * v104]; jj != v103; v103 += 2 )
    *v103 = -4096;
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
      operator delete();
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      return;
    }
    goto LABEL_45;
  }
  v85 = *(unsigned int *)(a1 + 56);
  v39 = *(_QWORD **)(a1 + 40);
  v86 = 4 * v38;
  if ( (unsigned int)(4 * v38) < 0x40 )
    v86 = 64;
  if ( (unsigned int)v85 <= v86 )
  {
    v41 = 2 * v85;
LABEL_45:
    for ( kk = &v39[v41]; kk != v39; v39 += 2 )
      *v39 = -4096;
    *(_QWORD *)(a1 + 48) = 0;
    return;
  }
  v96 = v38 - 1;
  if ( v96 )
  {
    _BitScanReverse(&v96, v96);
    v97 = 1 << (33 - (v96 ^ 0x1F));
    if ( v97 < 64 )
      v97 = 64;
    if ( v97 == (_DWORD)v85 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v98 = &v39[2 * (unsigned int)v97];
      do
      {
        *v39 = -4096;
        v39 += 2;
      }
      while ( v98 != v39 );
      return;
    }
  }
  else
  {
    v97 = 64;
  }
  operator delete();
  v106 = ((((((((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
            | (4 * v97 / 3u + 1)
            | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 4)
          | (((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
          | (4 * v97 / 3u + 1)
          | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
          | (4 * v97 / 3u + 1)
          | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 4)
        | (((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
        | (4 * v97 / 3u + 1)
        | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 16;
  v107 = (v106
        | (((((((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
            | (4 * v97 / 3u + 1)
            | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 4)
          | (((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
          | (4 * v97 / 3u + 1)
          | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 8)
        | (((((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
          | (4 * v97 / 3u + 1)
          | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 4)
        | (((4 * v97 / 3u + 1) | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1)) >> 2)
        | (4 * v97 / 3u + 1)
        | ((unsigned __int64)(4 * v97 / 3u + 1) >> 1))
       + 1;
  *(_DWORD *)(a1 + 56) = v107;
  v110 = (_QWORD *)sub_220C370(16 * v107, 8, v106, 2863311531LL, v108, v109);
  v111 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = v110;
  for ( mm = &v110[2 * v111]; mm != v110; v110 += 2 )
    *v110 = -4096;
}

