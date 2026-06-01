__int64 __fastcall sub_20FF460(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 k; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v18; // rbx
  int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  _DWORD *v23; // rax
  int v24; // edi
  _DWORD *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdi
  _DWORD *v33; // r10
  int v34; // edi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rax
  int *v38; // rcx
  _DWORD *v39; // r10
  __int64 v40; // rdx
  int *v41; // r9
  _DWORD *i; // rdx
  int *v43; // rax
  int v44; // edx
  int v45; // esi
  int v46; // ecx
  unsigned int v47; // edi
  _DWORD *v48; // rsi
  int v49; // r8d
  unsigned int v50; // eax
  _DWORD *v51; // rax
  int *v52; // rcx
  _DWORD *v53; // r10
  __int64 v54; // rdx
  int *v55; // r9
  _DWORD *m; // rdx
  int *v57; // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  unsigned int v61; // esi
  _DWORD *v62; // rcx
  int v63; // edi
  int v64; // edx
  int v65; // edx
  unsigned int v66; // esi
  int v67; // ecx
  int *v68; // rcx
  int v69; // edx
  int v70; // edx
  unsigned int v71; // esi
  int v72; // ecx
  int v73; // eax
  __int64 v74; // rdx
  _DWORD *j; // rdx
  __int64 v76; // rdx
  _DWORD *n; // rdx
  __int64 v78; // [rsp+8h] [rbp-60h]
  __int64 v79; // [rsp+8h] [rbp-60h]
  __int64 v80; // [rsp+10h] [rbp-58h]
  unsigned int v81; // [rsp+10h] [rbp-58h]
  __int64 v82; // [rsp+10h] [rbp-58h]
  int *v83; // [rsp+10h] [rbp-58h]
  __int64 v84; // [rsp+10h] [rbp-58h]
  _DWORD *v85; // [rsp+10h] [rbp-58h]
  int *v87; // [rsp+18h] [rbp-50h]
  unsigned int v88; // [rsp+18h] [rbp-50h]
  int *v89; // [rsp+18h] [rbp-50h]
  int v90; // [rsp+18h] [rbp-50h]
  int v91; // [rsp+18h] [rbp-50h]
  unsigned int v92; // [rsp+20h] [rbp-48h]
  int v93; // [rsp+20h] [rbp-48h]
  int v94; // [rsp+20h] [rbp-48h]
  _DWORD *v95; // [rsp+20h] [rbp-48h]
  _DWORD *v96; // [rsp+20h] [rbp-48h]
  int v97; // [rsp+28h] [rbp-40h]
  int v98; // [rsp+28h] [rbp-40h]

  v7 = a2;
  v8 = a6;
  v11 = a1;
  v12 = a3;
  k = *(_QWORD *)(a1 + 288);
  v14 = *(_QWORD *)(a1 + 280);
  v15 = 0xAAAAAAAAAAAAAAABLL * ((k - v14) >> 4);
  if ( a2 >= v15 )
  {
    v28 = a2 + 1;
    if ( v28 > v15 )
    {
      v79 = v7;
      sub_20FF1F0((void **)(a1 + 280), v28 - v15);
      v14 = *(_QWORD *)(a1 + 280);
      v7 = v79;
    }
    else if ( v28 < v15 )
    {
      v78 = v14 + 48 * v28;
      if ( k != v78 )
      {
        v80 = v7;
        v29 = *(_QWORD *)(a1 + 288);
        v92 = v12;
        v30 = v14 + 48 * v28;
        do
        {
          v31 = *(unsigned int *)(v30 + 40);
          v32 = *(_QWORD *)(v30 + 24);
          v30 += 48;
          operator delete(v32, 16 * v31, 4);
        }
        while ( v29 != v30 );
        v11 = a1;
        v7 = v80;
        v12 = v92;
        *(_QWORD *)(a1 + 288) = v78;
        v14 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  v16 = (_DWORD *)(v14 + 48 * v7);
  if ( !*v16 )
  {
    v16[1] = a4;
    *v16 = v12 + 1;
    v16[2] = a5;
    v16[3] = v8;
    if ( (unsigned int)v12 > 0xFFFFFFFD )
      return 1;
    if ( 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(v11 + 288) - v14) >> 4) <= v12 || (v18 = v14 + 48 * v12, !*(_DWORD *)v18) )
LABEL_118:
      BUG();
    v19 = 37 * a2;
    while ( 1 )
    {
      v20 = *(unsigned int *)(v18 + 40);
      v21 = *(_QWORD *)(v18 + 24);
      if ( !(_DWORD)v20 )
        goto LABEL_28;
      v22 = (unsigned int)(v20 - 1);
      k = (unsigned int)v22 & v19;
      v23 = (_DWORD *)(v21 + 16 * k);
      v24 = *v23;
      if ( a2 != *v23 )
        break;
LABEL_10:
      v25 = v23 + 1;
      *v25 = a4;
      v25[1] = a5;
      v25[2] = v8;
      v26 = (unsigned int)(*(_DWORD *)v18 - 1);
      if ( (unsigned int)v26 > 0xFFFFFFFD )
        return 1;
      v27 = *(_QWORD *)(v11 + 280);
      a5 = *(_DWORD *)(v18 + 8);
      v8 = *(_DWORD *)(v18 + 12);
      a4 = *(_DWORD *)(v18 + 4);
      if ( v26 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(v11 + 288) - v27) >> 4) )
      {
        v18 = v27 + 48 * v26;
        if ( *(_DWORD *)v18 )
          continue;
      }
      goto LABEL_118;
    }
    a6 = 1;
    v33 = nullptr;
    if ( v24 != -1 )
    {
      while ( 1 )
      {
        if ( !v33 && v24 == -2 )
          v33 = v23;
        k = (unsigned int)v22 & ((_DWORD)a6 + (_DWORD)k);
        v23 = (_DWORD *)(v21 + 16LL * (unsigned int)k);
        v24 = *v23;
        if ( *v23 == a2 )
          goto LABEL_10;
        if ( v24 == -1 )
          break;
        a6 = (unsigned int)(a6 + 1);
      }
      if ( v33 )
        v23 = v33;
    }
    k = (unsigned int)(3 * v20);
    v34 = *(_DWORD *)(v18 + 32) + 1;
    a6 = (unsigned int)(4 * v34);
    if ( (unsigned int)a6 >= (unsigned int)k )
    {
LABEL_28:
      v93 = v19;
      v87 = *(int **)(v18 + 24);
      v81 = *(_DWORD *)(v18 + 40);
      v35 = (((((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v20 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v20 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v20 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v20 - 1) | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v20 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v20 - 1) >> 1);
      v36 = ((v35 >> 16) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(v18 + 40) = v36;
      v37 = (_DWORD *)sub_22300B0(16LL * (unsigned int)v36, 4, v20, v21, k, a6);
      v38 = v87;
      v39 = v37;
      *(_QWORD *)(v18 + 24) = v37;
      v19 = v93;
      if ( v87 )
      {
        v40 = *(unsigned int *)(v18 + 40);
        *(_QWORD *)(v18 + 32) = 0;
        v82 = 4LL * v81;
        v41 = &v87[v82];
        for ( i = &v37[4 * v40]; i != v37; v37 += 4 )
          *v37 = -1;
        v43 = v87;
        if ( v87 != v41 )
        {
          do
          {
            v44 = *v43;
            if ( (unsigned int)(*v43 + 2) > 1 )
            {
              v45 = *(_DWORD *)(v18 + 40);
              if ( !v45 )
              {
                dword_0 = 0;
                BUG();
              }
              v46 = v45 - 1;
              v47 = (v45 - 1) & (37 * v44);
              v48 = &v39[4 * v47];
              v49 = *v48;
              if ( v44 != *v48 && v49 != -1 )
              {
                v97 = 1;
                v95 = nullptr;
                while ( 1 )
                {
                  if ( v49 == -2 )
                  {
                    if ( v95 )
                      v48 = v95;
                    v95 = v48;
                  }
                  v47 = v46 & (v97 + v47);
                  v48 = &v39[4 * v47];
                  v49 = *v48;
                  if ( v44 == *v48 )
                    break;
                  if ( v49 == -1 )
                  {
                    if ( v95 )
                      v48 = v95;
                    break;
                  }
                  ++v97;
                }
              }
              *v48 = v44;
              *(_QWORD *)(v48 + 1) = *(_QWORD *)(v43 + 1);
              v48[3] = v43[3];
              ++*(_DWORD *)(v18 + 32);
            }
            v43 += 4;
          }
          while ( v41 != v43 );
          v38 = v87;
        }
        v90 = v19;
        operator delete(v38, v82 * 4, 4);
        v39 = *(_DWORD **)(v18 + 24);
        v19 = v90;
      }
      else
      {
        v74 = *(unsigned int *)(v18 + 40);
        *(_QWORD *)(v18 + 32) = 0;
        for ( j = &v37[4 * v74]; j != v37; v37 += 4 )
          *v37 = -1;
      }
      v64 = *(_DWORD *)(v18 + 40);
      v34 = *(_DWORD *)(v18 + 32) + 1;
      if ( !v64 )
      {
LABEL_119:
        ++*(_DWORD *)(v18 + 32);
        BUG();
      }
      v65 = v64 - 1;
      v66 = v65 & v19;
      v23 = &v39[4 * (v65 & v19)];
      v67 = *v23;
      if ( *v23 != a2 && v67 != -1 )
      {
        v85 = nullptr;
        for ( k = 1; ; k = (unsigned int)a6 )
        {
          if ( !v85 )
          {
            if ( v67 != -2 )
              v23 = nullptr;
            v85 = v23;
          }
          a6 = (unsigned int)(k + 1);
          v66 = v65 & (k + v66);
          v23 = &v39[4 * v66];
          v67 = *v23;
          if ( *v23 == a2 )
            break;
          if ( v67 == -1 )
          {
            if ( v85 )
              v23 = v85;
            break;
          }
        }
      }
    }
    else
    {
      k = (unsigned int)(v20 - *(_DWORD *)(v18 + 36) - v34);
      a6 = (unsigned int)v20 >> 3;
      if ( (unsigned int)k <= (unsigned int)a6 )
      {
        v94 = v19;
        v88 = *(_DWORD *)(v18 + 40);
        v83 = *(int **)(v18 + 24);
        v50 = ((((((((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4) | (v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 8)
               | (((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4)
               | (v22 >> 1)
               | v22
               | (((v22 >> 1) | v22) >> 2)) >> 16)
             | (((((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4) | (v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 8)
             | (((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4)
             | (v22 >> 1)
             | v22
             | (((v22 >> 1) | v22) >> 2))
            + 1;
        if ( v50 < 0x40 )
          v50 = 64;
        *(_DWORD *)(v18 + 40) = v50;
        v51 = (_DWORD *)sub_22300B0(16LL * v50, 4, v20, v21, k, a6);
        v52 = v83;
        v53 = v51;
        *(_QWORD *)(v18 + 24) = v51;
        v19 = v94;
        if ( v83 )
        {
          v54 = *(unsigned int *)(v18 + 40);
          *(_QWORD *)(v18 + 32) = 0;
          v84 = 4LL * v88;
          v55 = &v52[v84];
          for ( m = &v51[4 * v54]; m != v51; v51 += 4 )
            *v51 = -1;
          v57 = v52;
          v89 = v52;
          do
          {
            v58 = *v57;
            if ( (unsigned int)(*v57 + 2) > 1 )
            {
              v59 = *(_DWORD *)(v18 + 40);
              if ( !v59 )
              {
                dword_0 = 0;
                BUG();
              }
              v60 = v59 - 1;
              v61 = (v59 - 1) & (37 * v58);
              v62 = &v53[4 * v61];
              v63 = *v62;
              if ( v58 != *v62 && v63 != -1 )
              {
                v98 = 1;
                v96 = nullptr;
                while ( 1 )
                {
                  if ( !v96 )
                  {
                    if ( v63 != -2 )
                      v62 = nullptr;
                    v96 = v62;
                  }
                  v61 = v60 & (v98 + v61);
                  v62 = &v53[4 * v61];
                  v63 = *v62;
                  if ( v58 == *v62 )
                    break;
                  if ( v63 == -1 )
                  {
                    if ( v96 )
                      v62 = v96;
                    break;
                  }
                  ++v98;
                }
              }
              *v62 = v58;
              *(_QWORD *)(v62 + 1) = *(_QWORD *)(v57 + 1);
              v62[3] = v57[3];
              ++*(_DWORD *)(v18 + 32);
            }
            v57 += 4;
          }
          while ( v55 != v57 );
          v68 = v89;
          v91 = v19;
          operator delete(v68, v84 * 4, 4);
          v53 = *(_DWORD **)(v18 + 24);
          v19 = v91;
        }
        else
        {
          v76 = *(unsigned int *)(v18 + 40);
          *(_QWORD *)(v18 + 32) = 0;
          for ( n = &v51[4 * v76]; n != v51; v51 += 4 )
            *v51 = -1;
        }
        v69 = *(_DWORD *)(v18 + 40);
        v34 = *(_DWORD *)(v18 + 32) + 1;
        if ( !v69 )
          goto LABEL_119;
        v70 = v69 - 1;
        v71 = v70 & v19;
        v23 = &v53[4 * (v70 & v19)];
        v72 = *v23;
        if ( *v23 != a2 )
        {
          a6 = 1;
          k = 0;
          if ( v72 != -1 )
          {
            while ( 1 )
            {
              if ( !k && v72 == -2 )
                k = (__int64)v23;
              v73 = a6;
              a6 = (unsigned int)(a6 + 1);
              v71 = v70 & (v73 + v71);
              v23 = &v53[4 * v71];
              v72 = *v23;
              if ( *v23 == a2 )
                break;
              if ( v72 == -1 )
              {
                if ( k )
                  v23 = (_DWORD *)k;
                break;
              }
            }
          }
        }
      }
    }
    *(_DWORD *)(v18 + 32) = v34;
    if ( *v23 != -1 )
      --*(_DWORD *)(v18 + 36);
    *v23 = a2;
    *(_QWORD *)(v23 + 1) = 0;
    v23[3] = 0;
    goto LABEL_10;
  }
  return 0;
}
