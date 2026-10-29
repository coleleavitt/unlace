__int64 __fastcall sub_9A8610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r15d
  int *v12; // r13
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  int *v15; // rdx
  int v16; // eax
  _DWORD *v17; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  _DWORD *i; // rdx
  int *j; // r14
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // rdx
  int *v29; // r15
  int v30; // esi
  void *v31; // rax
  void *v32; // r9
  unsigned int v33; // r10d
  void *v34; // rdi
  int v35; // edi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  _DWORD *k; // rdx
  int *v40; // r15
  int v41; // eax
  int v42; // edx
  int v43; // edx
  __int64 v44; // rdi
  unsigned int v45; // ecx
  int *v46; // r8
  int v47; // esi
  void *v48; // rax
  void *v49; // r10
  unsigned int v50; // r11d
  void *v51; // rsi
  int v52; // esi
  int v53; // esi
  unsigned int v54; // edi
  int v55; // r8d
  int v56; // r10d
  int *v57; // r9
  int v58; // eax
  int v59; // eax
  int v60; // esi
  int v61; // esi
  unsigned int v62; // r14d
  int v63; // edi
  int v64; // r9d
  int *v65; // r8
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  _DWORD *v69; // rcx
  _DWORD *v70; // rdx
  __int64 v71; // rdx
  _DWORD *v72; // rcx
  _DWORD *v73; // rdx
  size_t v74; // rdx
  size_t v75; // rcx
  int v76; // r10d
  int *v77; // r9
  int v78; // r9d
  int *v79; // r10
  __int64 v80; // [rsp+0h] [rbp-58h]
  __int64 v81; // [rsp+0h] [rbp-58h]
  unsigned int v82; // [rsp+Ch] [rbp-4Ch]
  unsigned int v83; // [rsp+Ch] [rbp-4Ch]
  unsigned int v84; // [rsp+Ch] [rbp-4Ch]
  unsigned int v85; // [rsp+Ch] [rbp-4Ch]
  void *v86; // [rsp+10h] [rbp-48h]
  int *v87; // [rsp+10h] [rbp-48h]
  int *v88; // [rsp+10h] [rbp-48h]
  void *v89; // [rsp+18h] [rbp-40h]

  v8 = *(_DWORD *)(a3 + 48);
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v8 >> 6));
  if ( _bittest64(&v10, v8 & 0x3F) )
  {
    v11 = *(_DWORD *)(a1 + 88);
    v12 = *(int **)(a1 + 72);
    if ( !v11 )
      goto LABEL_7;
  }
  else
  {
    sub_9A7A10(a1, a3, a3, v9, a5, a6);
    v11 = *(_DWORD *)(a1 + 88);
    v9 = v8 & 0x3F;
    v12 = *(int **)(a1 + 72);
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v8 >> 6)) |= 1LL << v9;
    if ( !v11 )
      goto LABEL_7;
  }
  v13 = v11 - 1;
  LODWORD(v14) = v13 & (37 * v8);
  v15 = &v12[20 * (unsigned int)v14];
  v16 = *v15;
  if ( v8 == *v15 )
  {
LABEL_4:
    v17 = *((_DWORD **)v15 + 1);
    return (*(_QWORD *)&v17[2 * (*(_DWORD *)(a2 + 48) >> 6)] >> *(_DWORD *)(a2 + 48)) & 1LL;
  }
  v35 = 1;
  a5 = 0;
  if ( v16 != -1 )
  {
    while ( 1 )
    {
      if ( !a5 && v16 == -2 )
        a5 = (__int64)v15;
      a6 = (unsigned int)(v35 + 1);
      v14 = (unsigned int)v13 & ((_DWORD)v14 + v35);
      v15 = &v12[20 * v14];
      v16 = *v15;
      if ( v8 == *v15 )
        goto LABEL_4;
      if ( v16 == -1 )
        break;
      ++v35;
    }
    if ( a5 )
      v15 = (int *)a5;
  }
  v9 = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
  if ( 4 * (int)v9 >= 3 * v11 )
  {
LABEL_7:
    v19 = (((((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
            | (2 * v11 - 1)
            | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
          | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
          | (2 * v11 - 1)
          | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 8)
        | (((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
          | (2 * v11 - 1)
          | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
        | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
        | (2 * v11 - 1)
        | ((unsigned __int64)(2 * v11 - 1) >> 1);
    v20 = ((v19 >> 16) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(a1 + 88) = v20;
    v21 = (_DWORD *)sub_22300B0(80LL * (unsigned int)v20, 8, 64, v9, a5, a6);
    *(_QWORD *)(a1 + 72) = v21;
    if ( v12 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      v80 = 20LL * v11;
      for ( i = &v21[20 * *(unsigned int *)(a1 + 88)]; i != v21; v21 += 20 )
        *v21 = -1;
      for ( j = v12; &v12[v80] != j; j += 20 )
      {
        v24 = *j;
        if ( (unsigned int)(*j + 2) > 1 )
        {
          v25 = *(_DWORD *)(a1 + 88);
          if ( !v25 )
          {
            dword_0 = 0;
            BUG();
          }
          v26 = v25 - 1;
          v27 = *(_QWORD *)(a1 + 72);
          LODWORD(v28) = (v25 - 1) & (37 * v24);
          v29 = (int *)(v27 + 80LL * (unsigned int)v28);
          v30 = *v29;
          if ( *v29 != v24 )
          {
            v76 = 1;
            v77 = nullptr;
            if ( v30 != -1 )
            {
              while ( 1 )
              {
                if ( v30 == -2 && !v77 )
                  v77 = v29;
                v28 = v26 & (unsigned int)(v28 + v76);
                v29 = (int *)(v27 + 80 * v28);
                v30 = *v29;
                if ( v24 == *v29 )
                  break;
                if ( v30 == -1 )
                {
                  if ( v77 )
                    v29 = v77;
                  break;
                }
                ++v76;
              }
            }
          }
          *v29 = v24;
          v31 = v29 + 6;
          v32 = j + 6;
          *((_QWORD *)v29 + 2) = 0x600000000LL;
          v33 = j[4];
          *((_QWORD *)v29 + 1) = v29 + 6;
          if ( !v33 )
          {
            v34 = *((void **)j + 1);
LABEL_20:
            v29[18] = j[18];
            ++*(_DWORD *)(a1 + 80);
            if ( v34 != v32 )
              free(v34);
            continue;
          }
          v34 = *((void **)j + 1);
          if ( v29 + 2 == j + 2 )
            goto LABEL_20;
          if ( v34 == v32 )
          {
            v74 = 8LL * v33;
            if ( v33 <= 6uLL
              || (v84 = v33,
                  sub_2237220(v29 + 2, v29 + 6, v33, 8),
                  v31 = *((void **)v29 + 1),
                  v34 = *((void **)j + 1),
                  v33 = v84,
                  v74 = 8LL * (unsigned int)j[4],
                  v32 = j + 6,
                  v74) )
            {
              v86 = v32;
              v82 = v33;
              memcpy(v31, v34, v74);
              v34 = *((void **)j + 1);
              v32 = v86;
              v33 = v82;
            }
            v29[4] = v33;
            j[4] = 0;
            goto LABEL_20;
          }
          v29[4] = v33;
          v58 = j[5];
          *((_QWORD *)v29 + 1) = v34;
          v29[5] = v58;
          v59 = j[18];
          *((_QWORD *)j + 1) = v32;
          j[5] = 0;
          j[4] = 0;
          v29[18] = v59;
          ++*(_DWORD *)(a1 + 80);
        }
      }
      operator delete(v12, v80 * 4, 8);
      v21 = *(_DWORD **)(a1 + 72);
      v52 = *(_DWORD *)(a1 + 88);
      LODWORD(v9) = *(_DWORD *)(a1 + 80) + 1;
    }
    else
    {
      v68 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v52 = v68;
      v69 = &v21[20 * v68];
      if ( v21 != v69 )
      {
        v70 = v21;
        do
        {
          *v70 = -1;
          v70 += 20;
        }
        while ( v69 != v70 );
      }
      LODWORD(v9) = 1;
    }
    if ( v52 )
    {
      v53 = v52 - 1;
      v54 = v53 & (37 * v8);
      v15 = &v21[20 * v54];
      v55 = *v15;
      if ( v8 != *v15 )
      {
        v56 = 1;
        v57 = nullptr;
        if ( v55 != -1 )
        {
          while ( 1 )
          {
            if ( v55 == -2 && !v57 )
              v57 = v15;
            v54 = v53 & (v56 + v54);
            v15 = &v21[20 * v54];
            v55 = *v15;
            if ( v8 == *v15 )
              break;
            if ( v55 == -1 )
            {
              if ( v57 )
                v15 = v57;
              goto LABEL_25;
            }
            ++v56;
          }
        }
      }
      goto LABEL_25;
    }
    goto LABEL_122;
  }
  if ( v11 - *(_DWORD *)(a1 + 84) - (unsigned int)v9 <= v11 >> 3 )
  {
    v36 = (((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
        | (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4)
        | (v13 >> 1)
        | v13
        | (((v13 >> 1) | v13) >> 2);
    v37 = ((v36 >> 16) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(a1 + 88) = v37;
    v38 = (_DWORD *)sub_22300B0(80LL * (unsigned int)v37, 8, 64, v9, a5, a6);
    *(_QWORD *)(a1 + 72) = v38;
    if ( v12 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      v81 = 20LL * v11;
      for ( k = &v38[20 * *(unsigned int *)(a1 + 88)]; k != v38; v38 += 20 )
        *v38 = -1;
      v40 = v12;
      while ( 1 )
      {
        v41 = *v40;
        if ( (unsigned int)(*v40 + 2) > 1 )
        {
          v42 = *(_DWORD *)(a1 + 88);
          if ( !v42 )
          {
            dword_0 = 0;
            BUG();
          }
          v43 = v42 - 1;
          v44 = *(_QWORD *)(a1 + 72);
          v45 = v43 & (37 * v41);
          v46 = (int *)(v44 + 80LL * v45);
          v47 = *v46;
          if ( v41 != *v46 )
          {
            v78 = 1;
            v79 = nullptr;
            if ( v47 != -1 )
            {
              while ( 1 )
              {
                if ( !v79 && v47 == -2 )
                  v79 = v46;
                v45 = v43 & (v78 + v45);
                v46 = (int *)(v44 + 80LL * v45);
                v47 = *v46;
                if ( v41 == *v46 )
                  break;
                if ( v47 == -1 )
                {
                  if ( v79 )
                    v46 = v79;
                  break;
                }
                ++v78;
              }
            }
          }
          *v46 = v41;
          v48 = v46 + 6;
          v49 = v40 + 6;
          *((_QWORD *)v46 + 2) = 0x600000000LL;
          v50 = v40[4];
          *((_QWORD *)v46 + 1) = v46 + 6;
          if ( !v50 )
          {
            v51 = *((void **)v40 + 1);
LABEL_49:
            v46[18] = v40[18];
            ++*(_DWORD *)(a1 + 80);
            if ( v49 != v51 )
              free(v51);
            goto LABEL_43;
          }
          v51 = *((void **)v40 + 1);
          if ( v46 + 2 == v40 + 2 )
            goto LABEL_49;
          if ( v49 == v51 )
          {
            v75 = 8LL * v50;
            if ( v50 <= 6uLL
              || (v88 = v46,
                  v85 = v50,
                  sub_2237220(v46 + 2, v46 + 6, v50, 8),
                  v46 = v88,
                  v51 = *((void **)v40 + 1),
                  v50 = v85,
                  v75 = 8LL * (unsigned int)v40[4],
                  v48 = *((void **)v88 + 1),
                  v49 = v40 + 6,
                  v75) )
            {
              v89 = v49;
              v87 = v46;
              v83 = v50;
              memcpy(v48, v51, v75);
              v51 = *((void **)v40 + 1);
              v49 = v89;
              v46 = v87;
              v50 = v83;
            }
            v46[4] = v50;
            v40[4] = 0;
            goto LABEL_49;
          }
          v46[4] = v50;
          v66 = v40[5];
          *((_QWORD *)v46 + 1) = v51;
          v46[5] = v66;
          v67 = v40[18];
          *((_QWORD *)v40 + 1) = v49;
          v40[5] = 0;
          v40[4] = 0;
          v46[18] = v67;
          ++*(_DWORD *)(a1 + 80);
        }
LABEL_43:
        v40 += 20;
        if ( &v12[v81] == v40 )
        {
          operator delete(v12, v81 * 4, 8);
          v38 = *(_DWORD **)(a1 + 72);
          v60 = *(_DWORD *)(a1 + 88);
          LODWORD(v9) = *(_DWORD *)(a1 + 80) + 1;
          goto LABEL_67;
        }
      }
    }
    v71 = *(unsigned int *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = 0;
    v60 = v71;
    v72 = &v38[20 * v71];
    if ( v38 != v72 )
    {
      v73 = v38;
      do
      {
        *v73 = -1;
        v73 += 20;
      }
      while ( v72 != v73 );
    }
    LODWORD(v9) = 1;
LABEL_67:
    if ( v60 )
    {
      v61 = v60 - 1;
      v62 = v61 & (37 * v8);
      v15 = &v38[20 * v62];
      v63 = *v15;
      if ( v8 != *v15 )
      {
        v64 = 1;
        v65 = nullptr;
        if ( v63 != -1 )
        {
          while ( 1 )
          {
            if ( !v65 && v63 == -2 )
              v65 = v15;
            v62 = v61 & (v64 + v62);
            v15 = &v38[20 * v62];
            v63 = *v15;
            if ( v8 == *v15 )
              break;
            if ( v63 == -1 )
            {
              if ( v65 )
                v15 = v65;
              goto LABEL_25;
            }
            ++v64;
          }
        }
      }
      goto LABEL_25;
    }
LABEL_122:
    ++*(_DWORD *)(a1 + 80);
    BUG();
  }
LABEL_25:
  *(_DWORD *)(a1 + 80) = v9;
  if ( *v15 != -1 )
    --*(_DWORD *)(a1 + 84);
  v17 = v15 + 6;
  *v15 = v8;
  *(_OWORD *)(v15 + 6) = 0;
  *(_OWORD *)(v15 + 10) = 0;
  *(_OWORD *)(v15 + 14) = 0;
  *((_QWORD *)v15 + 9) = 0;
  *((_QWORD *)v15 + 1) = v15 + 6;
  *((_QWORD *)v15 + 2) = 0x600000000LL;
  return (*(_QWORD *)&v17[2 * (*(_DWORD *)(a2 + 48) >> 6)] >> *(_DWORD *)(a2 + 48)) & 1LL;
}
