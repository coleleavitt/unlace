_QWORD *__fastcall sub_20C3520(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 k)
{
  __int64 **v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 *v15; // rdx
  unsigned int i; // eax
  _QWORD *v17; // rcx
  __int64 **v18; // r15
  unsigned int v19; // eax
  _QWORD *result; // rax
  _QWORD *v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r10d
  _QWORD *v31; // r9
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  int v35; // ebp
  __int64 v36; // rsi
  __int64 v37; // r8
  int v38; // r14d
  __int64 *v39; // r13
  unsigned int j; // edx
  __int64 *v41; // rdi
  __int64 v42; // r11
  unsigned int v43; // edx
  int v44; // r8d
  int v45; // r13d
  __int64 *v46; // r11
  int v47; // r10d
  unsigned int v48; // r9d
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  int v53; // r10d
  _QWORD *v54; // rcx
  _QWORD *m; // rdx
  _QWORD *v56; // rcx
  int v57; // r15d
  _QWORD *v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // r8
  int v61; // r14d
  __int64 *v62; // r13
  unsigned int n; // edx
  __int64 *v64; // rdi
  __int64 v65; // r11
  unsigned int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  _QWORD *v71; // rdx
  __int64 v72; // rdx
  _QWORD *ii; // rdx
  __int64 v74; // [rsp+8h] [rbp-70h]
  __int64 v75; // [rsp+8h] [rbp-70h]
  _QWORD *v76; // [rsp+10h] [rbp-68h]
  _QWORD *v77; // [rsp+10h] [rbp-68h]
  __int64 **v78; // [rsp+18h] [rbp-60h]
  __int64 **v79; // [rsp+18h] [rbp-60h]
  __int64 *v80; // [rsp+28h] [rbp-50h] BYREF
  __int64 **v81; // [rsp+30h] [rbp-48h] BYREF
  __int64 v82; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = **a1;
  v81 = a1;
  v82 = a2;
  v9 = *(unsigned int *)(v8 + 2576);
  v10 = *(_QWORD **)(v8 + 2560);
  if ( !(_DWORD)v9 )
  {
    v80 = nullptr;
    goto LABEL_29;
  }
  v11 = ((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4);
  v12 = 1;
  v13 = (unsigned int)((0xBF58476D1CE4E5B9LL * a2) >> 31) ^ (484763065 * (_DWORD)a2);
  v14 = (unsigned int)(v9 - 1);
  LODWORD(v11) = ((0xBF58476D1CE4E5B9LL * (v13 | (v11 << 32))) >> 31) ^ (484763065 * v13);
  v15 = nullptr;
  for ( i = v14 & v11; ; i = v14 & v19 )
  {
    v17 = &v10[3 * i];
    v18 = (__int64 **)*v17;
    if ( v7 == (__int64 **)*v17 && a2 == v17[1] )
    {
      result = (_QWORD *)v17[2];
      v21 = v17 + 2;
      if ( result )
        return result;
      goto LABEL_22;
    }
    if ( v18 == (__int64 **)-4096LL )
      break;
    if ( v18 == (__int64 **)-8192LL && v17[1] == -2 && !v15 )
      v15 = &v10[3 * i];
LABEL_9:
    v19 = v12 + i;
    ++v12;
  }
  if ( v17[1] != -1 )
    goto LABEL_9;
  if ( !v15 )
    v15 = &v10[3 * i];
  a4 = (unsigned int)(*(_DWORD *)(v8 + 2568) + 1);
  v80 = v15;
  if ( 4 * (int)a4 >= (unsigned int)(3 * v9) )
  {
LABEL_29:
    v26 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v27 = ((v26 >> 16) | v26) + 1;
    if ( (unsigned int)v27 < 0x40 )
      LODWORD(v27) = 64;
    *(_DWORD *)(v8 + 2576) = v27;
    v28 = sub_22300B0(24LL * (unsigned int)v27, 8, 64, a4, a5, k);
    *(_QWORD *)(v8 + 2560) = v28;
    if ( v10 )
    {
      v29 = *(unsigned int *)(v8 + 2576);
      *(_QWORD *)(v8 + 2568) = 0;
      v30 = v29;
      v74 = 24 * v9;
      v31 = &v10[3 * v9];
      v32 = (_QWORD *)(v28 + 24 * v29);
      v33 = (_QWORD *)v28;
      if ( (_QWORD *)v28 != v32 )
      {
        do
        {
          *v33 = -4096;
          v33 += 3;
          *(v33 - 2) = -1;
        }
        while ( v32 != v33 );
      }
      v34 = v10;
      if ( v10 != v31 )
      {
        v76 = v10;
        v78 = v7;
        v35 = v30 - 1;
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 == -4096 )
          {
            if ( v34[1] == -1 )
              goto LABEL_48;
          }
          else if ( v36 == -8192 && v34[1] == -2 )
          {
            goto LABEL_48;
          }
          if ( !v30 )
          {
            *(_QWORD *)&dword_0 = *v34;
            BUG();
          }
          v37 = v34[1];
          v38 = 1;
          v39 = nullptr;
          for ( j = v35
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)((0xBF58476D1CE4E5B9LL * v37) >> 31) ^ (484763065 * *((_DWORD *)v34 + 2))
                      | ((unsigned __int64)(((unsigned int)v36 >> 4) ^ ((unsigned int)v36 >> 9)) << 32))) >> 31)
                   ^ (484763065 * (((0xBF58476D1CE4E5B9LL * v37) >> 31) ^ (484763065 * *((_DWORD *)v34 + 2)))));
                ;
                j = v35 & v43 )
          {
            v41 = (__int64 *)(v28 + 24LL * j);
            v42 = *v41;
            if ( v36 == *v41 && v37 == v41[1] )
              goto LABEL_86;
            if ( v42 == -4096 )
              break;
            if ( v42 == -8192 && v41[1] == -2 && !v39 )
              v39 = (__int64 *)(v28 + 24LL * j);
LABEL_46:
            v43 = v38 + j;
            ++v38;
          }
          if ( v41[1] != -1 )
            goto LABEL_46;
          if ( v39 )
            v41 = v39;
LABEL_86:
          v67 = v34[2];
          *v41 = v36;
          v41[1] = v37;
          v41[2] = v67;
          ++*(_DWORD *)(v8 + 2568);
LABEL_48:
          v34 += 3;
          if ( v31 == v34 )
          {
            v10 = v76;
            v7 = v78;
            break;
          }
        }
      }
      operator delete(v10, v74, 8);
      v28 = *(_QWORD *)(v8 + 2560);
      v44 = *(_DWORD *)(v8 + 2576);
      LODWORD(a4) = *(_DWORD *)(v8 + 2568) + 1;
    }
    else
    {
      v69 = *(unsigned int *)(v8 + 2576);
      *(_QWORD *)(v8 + 2568) = 0;
      v44 = v69;
      v70 = (_QWORD *)(v28 + 24 * v69);
      if ( (_QWORD *)v28 != v70 )
      {
        v71 = (_QWORD *)v28;
        do
        {
          *v71 = -4096;
          v71 += 3;
          *(v71 - 2) = -1;
        }
        while ( v70 != v71 );
      }
      LODWORD(a4) = 1;
    }
    v22 = v82;
    v23 = (__int64)v81;
    if ( !v44 )
    {
      v80 = nullptr;
      a5 = 0x10102464C457FLL;
      v15 = nullptr;
      goto LABEL_19;
    }
    v45 = 1;
    v46 = nullptr;
    v47 = v44 - 1;
    for ( k = (v44 - 1)
            & ((unsigned int)((0xBF58476D1CE4E5B9LL
                             * ((unsigned int)((0xBF58476D1CE4E5B9LL * v82) >> 31) ^ (484763065 * (_DWORD)v82)
                              | ((unsigned __int64)(((unsigned int)v81 >> 9) ^ ((unsigned int)v81 >> 4)) << 32))) >> 31)
             ^ (484763065 * ((unsigned int)((0xBF58476D1CE4E5B9LL * v82) >> 31) ^ (484763065 * (_DWORD)v82))));
          ;
          k = v47 & v48 )
    {
      v15 = (__int64 *)(v28 + 24LL * (unsigned int)k);
      a5 = *v15;
      if ( (__int64 **)*v15 == v81 && v15[1] == v82 )
      {
        v80 = (__int64 *)(v28 + 24LL * (unsigned int)k);
        goto LABEL_19;
      }
      if ( a5 == -4096 )
      {
        if ( v15[1] == -1 )
        {
          if ( v46 )
            v15 = v46;
          v80 = v15;
          a5 = *v15;
          goto LABEL_19;
        }
      }
      else if ( a5 == -8192 && v15[1] == -2 && !v46 )
      {
        v46 = (__int64 *)(v28 + 24LL * (unsigned int)k);
      }
      v48 = v45 + k;
      ++v45;
    }
  }
  if ( (int)v9 - *(_DWORD *)(v8 + 2572) - (int)a4 > (unsigned int)v9 >> 3 )
  {
    a5 = *v15;
    v22 = a2;
    v23 = (__int64)v7;
    goto LABEL_19;
  }
  v49 = (((((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4) | (v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 8)
      | (((v14 >> 1) | v14 | (((v14 >> 1) | v14) >> 2)) >> 4)
      | (v14 >> 1)
      | v14
      | (((v14 >> 1) | v14) >> 2);
  v50 = ((v49 >> 16) | v49) + 1;
  if ( (unsigned int)v50 < 0x40 )
    LODWORD(v50) = 64;
  *(_DWORD *)(v8 + 2576) = v50;
  v51 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v50, 8, 64, a4, a5, k);
  *(_QWORD *)(v8 + 2560) = v51;
  if ( v10 )
  {
    v52 = *(unsigned int *)(v8 + 2576);
    *(_QWORD *)(v8 + 2568) = 0;
    v53 = v52;
    v75 = 24 * v9;
    v54 = &v51[3 * v52];
    for ( m = v51; v54 != m; *(m - 2) = -1 )
    {
      *m = -4096;
      m += 3;
    }
    v77 = v10;
    v56 = v10;
    v57 = v53 - 1;
    v79 = v7;
    v58 = &v10[3 * v9];
    while ( 1 )
    {
      v59 = *v56;
      if ( *v56 == -4096 )
      {
        if ( v56[1] != -1 )
          goto LABEL_70;
      }
      else if ( v59 != -8192 || v56[1] != -2 )
      {
LABEL_70:
        if ( !v53 )
        {
          *(_QWORD *)&dword_0 = *v56;
          BUG();
        }
        v60 = v56[1];
        v61 = 1;
        v62 = nullptr;
        for ( n = v57
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)((0xBF58476D1CE4E5B9LL * v60) >> 31) ^ (484763065 * *((_DWORD *)v56 + 2))
                    | ((unsigned __int64)(((unsigned int)v59 >> 4) ^ ((unsigned int)v59 >> 9)) << 32))) >> 31)
                 ^ (484763065 * (((0xBF58476D1CE4E5B9LL * v60) >> 31) ^ (484763065 * *((_DWORD *)v56 + 2)))));
              ;
              n = v57 & v66 )
        {
          v64 = &v51[3 * n];
          v65 = *v64;
          if ( v59 == *v64 && v60 == v64[1] )
            break;
          if ( v65 == -4096 )
          {
            if ( v64[1] == -1 )
            {
              if ( v62 )
                v64 = v62;
              break;
            }
          }
          else if ( v65 == -8192 && v64[1] == -2 && !v62 )
          {
            v62 = &v51[3 * n];
          }
          v66 = v61 + n;
          ++v61;
        }
        v68 = v56[2];
        *v64 = v59;
        v64[1] = v60;
        v64[2] = v68;
        ++*(_DWORD *)(v8 + 2568);
      }
      v56 += 3;
      if ( v58 == v56 )
      {
        v7 = v79;
        operator delete(v77, v75, 8);
        goto LABEL_82;
      }
    }
  }
  v72 = *(unsigned int *)(v8 + 2576);
  *(_QWORD *)(v8 + 2568) = 0;
  for ( ii = &v51[3 * v72]; ii != v51; *(v51 - 2) = -1 )
  {
    *v51 = -4096;
    v51 += 3;
  }
LABEL_82:
  sub_20C3330((__int64 *)(v8 + 2560), (__int64 *)&v81, &v80);
  v15 = v80;
  v23 = (__int64)v81;
  v22 = v82;
  LODWORD(a4) = *(_DWORD *)(v8 + 2568) + 1;
  a5 = *v80;
LABEL_19:
  *(_DWORD *)(v8 + 2568) = a4;
  if ( a5 != -4096 || v15[1] != -1 )
    --*(_DWORD *)(v8 + 2572);
  *v15 = v23;
  v21 = v15 + 2;
  v15[1] = v22;
  v15[2] = 0;
LABEL_22:
  v24 = *(_QWORD *)(v8 + 2208);
  *(_QWORD *)(v8 + 2288) += 40LL;
  result = (_QWORD *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v8 + 2216) >= (unsigned __int64)(result + 5) && v24 )
    *(_QWORD *)(v8 + 2208) = result + 5;
  else
    result = (_QWORD *)sub_986170(v8 + 2208, 40, 40, 4, a5, k);
  v25 = *v7;
  result[3] = v7;
  result[4] = a2;
  *result = v25;
  result[2] = result + 3;
  result[1] = 0x100000010LL;
  *v21 = result;
  return result;
}
