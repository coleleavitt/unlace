__int64 *__fastcall sub_984EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 *v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  int v13; // r12d
  unsigned int v14; // ecx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rsi
  int v25; // edx
  __int64 *v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 *v31; // r15
  __int64 *j; // rdx
  __int64 *k; // r14
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  unsigned int v37; // esi
  _QWORD *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  void *v41; // rdi
  void (*v42)(void); // rax
  int v43; // r8d
  __int64 v44; // rdx
  unsigned int v45; // edi
  __int64 v46; // r9
  int v47; // edi
  __int64 *v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 *i; // rdx
  __int64 *v53; // r14
  __int64 v54; // rax
  int v55; // edx
  int v56; // ecx
  unsigned int v57; // esi
  _QWORD *v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  void *v61; // rdi
  void (*v62)(void); // rax
  __int64 *v63; // rsi
  int v64; // edx
  int v65; // edi
  unsigned int v66; // r12d
  __int64 v67; // r8
  __int64 *v68; // r9
  int v69; // edx
  __int64 v70; // rsi
  int v71; // r10d
  _QWORD *v72; // r9
  int v73; // r10d
  _QWORD *v74; // r9
  __int64 *v75; // r10
  int v76; // edx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 248);
  if ( !v7 )
  {
    v18 = operator new(0x18u);
    *(_QWORD *)(a1 + 248) = v18;
    v7 = v18;
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 16) = 64;
    v23 = (__int64 *)sub_22300B0(1024, 8, v19, v20, v21, v22);
    *(_QWORD *)v7 = v23;
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(v7 + 16);
  v9 = *(__int64 **)v7;
  if ( !v8 )
  {
    v27 = 64;
    v28 = 1024;
    goto LABEL_10;
  }
  v10 = a2;
  v11 = a2;
  v12 = v8 - 1;
  v13 = (v11 >> 9) ^ (v10 >> 4);
  v14 = v12 & v13;
  v15 = &v9[2 * ((unsigned int)v12 & v13)];
  v16 = *v15;
  if ( *v15 != a2 )
  {
    v47 = 1;
    v48 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( v16 == -8192 && !v48 )
          v48 = v15;
        a6 = (unsigned int)(v47 + 1);
        v14 = v12 & (v47 + v14);
        v15 = &v9[2 * v14];
        v16 = *v15;
        if ( *v15 == a2 )
          return v15 + 1;
        if ( v16 == -4096 )
          break;
        ++v47;
      }
      if ( v48 )
        v15 = v48;
    }
    a4 = (unsigned int)(*(_DWORD *)(v7 + 8) + 1);
    a5 = (unsigned int)(4 * a4);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(v7 + 12) - (unsigned int)a4 > v8 >> 3 )
      {
LABEL_30:
        v44 = *v15;
        goto LABEL_31;
      }
      v49 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v50 = ((v49 >> 16) | v49) + 1;
      if ( (unsigned int)v50 < 0x40 )
        LODWORD(v50) = 64;
      *(_DWORD *)(v7 + 16) = v50;
      v51 = (__int64 *)sub_22300B0(16LL * (unsigned int)v50, 8, 64, a4, a5, a6);
      *(_QWORD *)v7 = v51;
      if ( v9 )
      {
        *(_QWORD *)(v7 + 8) = 0;
        v80 = 2LL * v8;
        for ( i = &v51[2 * *(unsigned int *)(v7 + 16)]; i != v51; v51 += 2 )
          *v51 = -4096;
        v53 = v9;
        do
        {
          v54 = *v53;
          if ( *v53 != -8192 && v54 != -4096 )
          {
            v55 = *(_DWORD *)(v7 + 16);
            if ( !v55 )
            {
              *(_QWORD *)&dword_0 = *v53;
              BUG();
            }
            v56 = v55 - 1;
            v57 = (v55 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
            v58 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v57);
            v59 = *v58;
            if ( *v58 != v54 )
            {
              v73 = 1;
              v74 = nullptr;
              if ( v59 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v74 && v59 == -8192 )
                    v74 = v58;
                  v57 = v56 & (v73 + v57);
                  v58 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v57);
                  v59 = *v58;
                  if ( v54 == *v58 )
                    break;
                  if ( v59 == -4096 )
                  {
                    if ( v74 )
                      v58 = v74;
                    break;
                  }
                  ++v73;
                }
              }
            }
            *v58 = v54;
            v60 = v53[1];
            v53[1] = 0;
            v58[1] = v60;
            v61 = (void *)v53[1];
            ++*(_DWORD *)(v7 + 8);
            if ( v61 )
            {
              v62 = *(void (**)(void))(*(_QWORD *)v61 + 8LL);
              if ( (char *)v62 == (char *)sub_984430 )
                operator delete(v61, 8u);
              else
                v62();
            }
          }
          v53 += 2;
        }
        while ( &v9[v80] != v53 );
        operator delete(v9, v80 * 8, 8);
        v63 = *(__int64 **)v7;
        v64 = *(_DWORD *)(v7 + 16);
        LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
      }
      else
      {
        v70 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v64 = v70;
        v63 = &v51[2 * v70];
        if ( v51 == v63 )
        {
          LODWORD(a4) = 1;
        }
        else
        {
          do
          {
            *v51 = -4096;
            v51 += 2;
          }
          while ( v63 != v51 );
          v63 = *(__int64 **)v7;
          LODWORD(a4) = 1;
        }
      }
      if ( v64 )
      {
        v65 = v64 - 1;
        v44 = a2;
        v66 = v65 & v13;
        v15 = &v63[2 * v66];
        v67 = *v15;
        if ( *v15 == a2 )
        {
LABEL_31:
          *(_DWORD *)(v7 + 8) = a4;
          if ( v44 != -4096 )
            --*(_DWORD *)(v7 + 12);
          goto LABEL_33;
        }
        if ( v67 != -4096 )
        {
          v68 = &v63[2 * v66];
          v69 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v67 == -8192 && !v15 )
              v15 = v68;
            v66 = v65 & (v69 + v66);
            v68 = &v63[2 * v66];
            v67 = *v68;
            if ( *v68 == a2 )
            {
              v44 = a2;
              v15 = &v63[2 * v66];
              goto LABEL_31;
            }
            if ( v67 == -4096 )
              break;
            ++v69;
          }
          if ( v15 )
            goto LABEL_30;
          v15 = &v63[2 * v66];
        }
LABEL_26:
        *(_DWORD *)(v7 + 8) = a4;
LABEL_33:
        *v15 = a2;
        v15[1] = 0;
        return v15 + 1;
      }
      goto LABEL_113;
    }
    v77 = ((unsigned __int64)(2 * v8 - 1) >> 1) | (2 * v8 - 1);
    v78 = v77 | (v77 >> 2) | ((v77 | (v77 >> 2)) >> 4);
    v79 = (v78 >> 8) | v78 | (((v78 >> 8) | v78) >> 16);
    a3 = 64;
    v27 = v79 + 1;
    if ( v27 < 0x40 )
      v27 = 64;
    v28 = 16LL * v27;
LABEL_10:
    *(_DWORD *)(v7 + 16) = v27;
    v23 = (__int64 *)sub_22300B0(v28, 8, a3, a4, a5, a6);
    *(_QWORD *)v7 = v23;
    if ( v9 )
    {
      v29 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v30 = 2LL * v8;
      v31 = &v9[v30];
      for ( j = &v23[2 * v29]; j != v23; v23 += 2 )
        *v23 = -4096;
      for ( k = v9; v31 != k; k += 2 )
      {
        v34 = *k;
        if ( *k != -8192 && v34 != -4096 )
        {
          v35 = *(_DWORD *)(v7 + 16);
          if ( !v35 )
          {
            *(_QWORD *)&dword_0 = *k;
            BUG();
          }
          v36 = v35 - 1;
          v37 = (v35 - 1) & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v38 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v37);
          v39 = *v38;
          if ( v34 != *v38 )
          {
            v71 = 1;
            v72 = nullptr;
            if ( v39 != -4096 )
            {
              while ( 1 )
              {
                if ( v39 == -8192 && !v72 )
                  v72 = v38;
                v37 = v36 & (v71 + v37);
                v38 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v37);
                v39 = *v38;
                if ( v34 == *v38 )
                  break;
                if ( v39 == -4096 )
                {
                  if ( v72 )
                    v38 = v72;
                  break;
                }
                ++v71;
              }
            }
          }
          *v38 = v34;
          v40 = k[1];
          k[1] = 0;
          v38[1] = v40;
          v41 = (void *)k[1];
          ++*(_DWORD *)(v7 + 8);
          if ( v41 )
          {
            v42 = *(void (**)(void))(*(_QWORD *)v41 + 8LL);
            if ( (char *)v42 == (char *)sub_984430 )
              operator delete(v41, 8u);
            else
              v42();
          }
        }
      }
      operator delete(v9, v30 * 8, 8);
      v26 = *(__int64 **)v7;
      v25 = *(_DWORD *)(v7 + 16);
      LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
LABEL_23:
      if ( v25 )
      {
        v43 = v25 - 1;
        v44 = a2;
        v45 = v43 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v15 = &v26[2 * v45];
        v46 = *v15;
        if ( *v15 == a2 )
          goto LABEL_31;
        if ( v46 != -4096 )
        {
          v75 = &v26[2 * (v43 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v76 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v46 == -8192 && !v15 )
              v15 = v75;
            v45 = v43 & (v76 + v45);
            v75 = &v26[2 * v45];
            v46 = *v75;
            if ( *v75 == a2 )
            {
              v44 = a2;
              v15 = &v26[2 * v45];
              goto LABEL_31;
            }
            if ( v46 == -4096 )
              break;
            ++v76;
          }
          if ( v15 )
            goto LABEL_30;
          v15 = &v26[2 * v45];
        }
        goto LABEL_26;
      }
LABEL_113:
      ++*(_DWORD *)(v7 + 8);
      BUG();
    }
LABEL_6:
    v24 = *(unsigned int *)(v7 + 16);
    *(_QWORD *)(v7 + 8) = 0;
    v25 = v24;
    v26 = &v23[2 * v24];
    if ( v26 == v23 )
    {
      LODWORD(a4) = 1;
    }
    else
    {
      do
      {
        *v23 = -4096;
        v23 += 2;
      }
      while ( v26 != v23 );
      v26 = *(__int64 **)v7;
      LODWORD(a4) = 1;
    }
    goto LABEL_23;
  }
  return v15 + 1;
}
