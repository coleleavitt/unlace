__int64 *__fastcall sub_9611A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v30; // r15
  __int64 *j; // rdx
  __int64 *k; // r14
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // esi
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  void *v40; // rdi
  void (*v41)(void); // rax
  int v42; // r8d
  __int64 v43; // rdx
  unsigned int v44; // edi
  __int64 v45; // r9
  int v46; // edi
  __int64 *v47; // r8
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // rax
  __int64 *i; // rdx
  __int64 *v52; // r14
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // esi
  _QWORD *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  void *v60; // rdi
  void (*v61)(void); // rax
  __int64 *v62; // rsi
  int v63; // edx
  int v64; // edi
  unsigned int v65; // r12d
  __int64 v66; // r8
  __int64 *v67; // r9
  int v68; // edx
  __int64 v69; // rsi
  int v70; // r10d
  _QWORD *v71; // r9
  int v72; // r10d
  _QWORD *v73; // r9
  __int64 *v74; // r10
  int v75; // edx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 248);
  if ( !v7 )
  {
    v18 = operator new(0x18u);
    *(_QWORD *)(a1 + 248) = v18;
    v7 = v18;
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 16) = 64;
    v23 = (__int64 *)sub_220C370(1024, 8, v19, v20, v21, v22);
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
    v46 = 1;
    v47 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( v16 == -8192 && !v47 )
          v47 = v15;
        a6 = (unsigned int)(v46 + 1);
        v14 = v12 & (v46 + v14);
        v15 = &v9[2 * v14];
        v16 = *v15;
        if ( *v15 == a2 )
          return v15 + 1;
        if ( v16 == -4096 )
          break;
        ++v46;
      }
      if ( v47 )
        v15 = v47;
    }
    a4 = (unsigned int)(*(_DWORD *)(v7 + 8) + 1);
    a5 = (unsigned int)(4 * a4);
    if ( (unsigned int)a5 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(v7 + 12) - (unsigned int)a4 > v8 >> 3 )
      {
LABEL_30:
        v43 = *v15;
        goto LABEL_31;
      }
      v48 = (((((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 8)
          | (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4)
          | (v12 >> 1)
          | v12
          | (((v12 >> 1) | v12) >> 2);
      v49 = ((v48 >> 16) | v48) + 1;
      if ( (unsigned int)v49 < 0x40 )
        LODWORD(v49) = 64;
      *(_DWORD *)(v7 + 16) = v49;
      v50 = (__int64 *)sub_220C370(16LL * (unsigned int)v49, 8, 64, a4, a5, a6);
      *(_QWORD *)v7 = v50;
      if ( v9 )
      {
        *(_QWORD *)(v7 + 8) = 0;
        v79 = 2LL * v8;
        for ( i = &v50[2 * *(unsigned int *)(v7 + 16)]; i != v50; v50 += 2 )
          *v50 = -4096;
        v52 = v9;
        do
        {
          v53 = *v52;
          if ( *v52 != -8192 && v53 != -4096 )
          {
            v54 = *(_DWORD *)(v7 + 16);
            if ( !v54 )
            {
              *(_QWORD *)&dword_0 = *v52;
              BUG();
            }
            v55 = v54 - 1;
            v56 = (v54 - 1) & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v57 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v56);
            v58 = *v57;
            if ( *v57 != v53 )
            {
              v72 = 1;
              v73 = nullptr;
              if ( v58 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v73 && v58 == -8192 )
                    v73 = v57;
                  v56 = v55 & (v72 + v56);
                  v57 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v56);
                  v58 = *v57;
                  if ( v53 == *v57 )
                    break;
                  if ( v58 == -4096 )
                  {
                    if ( v73 )
                      v57 = v73;
                    break;
                  }
                  ++v72;
                }
              }
            }
            *v57 = v53;
            v59 = v52[1];
            v52[1] = 0;
            v57[1] = v59;
            v60 = (void *)v52[1];
            ++*(_DWORD *)(v7 + 8);
            if ( v60 )
            {
              v61 = *(void (**)(void))(*(_QWORD *)v60 + 8LL);
              if ( (char *)v61 == (char *)sub_9606F0 )
                operator delete(v60, 8u);
              else
                v61();
            }
          }
          v52 += 2;
        }
        while ( &v9[v79] != v52 );
        operator delete();
        v62 = *(__int64 **)v7;
        v63 = *(_DWORD *)(v7 + 16);
        LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
      }
      else
      {
        v69 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v63 = v69;
        v62 = &v50[2 * v69];
        if ( v50 == v62 )
        {
          LODWORD(a4) = 1;
        }
        else
        {
          do
          {
            *v50 = -4096;
            v50 += 2;
          }
          while ( v62 != v50 );
          v62 = *(__int64 **)v7;
          LODWORD(a4) = 1;
        }
      }
      if ( v63 )
      {
        v64 = v63 - 1;
        v43 = a2;
        v65 = v64 & v13;
        v15 = &v62[2 * v65];
        v66 = *v15;
        if ( *v15 == a2 )
        {
LABEL_31:
          *(_DWORD *)(v7 + 8) = a4;
          if ( v43 != -4096 )
            --*(_DWORD *)(v7 + 12);
          goto LABEL_33;
        }
        if ( v66 != -4096 )
        {
          v67 = &v62[2 * v65];
          v68 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v66 == -8192 && !v15 )
              v15 = v67;
            v65 = v64 & (v68 + v65);
            v67 = &v62[2 * v65];
            v66 = *v67;
            if ( *v67 == a2 )
            {
              v43 = a2;
              v15 = &v62[2 * v65];
              goto LABEL_31;
            }
            if ( v66 == -4096 )
              break;
            ++v68;
          }
          if ( v15 )
            goto LABEL_30;
          v15 = &v62[2 * v65];
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
    v76 = ((unsigned __int64)(2 * v8 - 1) >> 1) | (2 * v8 - 1);
    v77 = v76 | (v76 >> 2) | ((v76 | (v76 >> 2)) >> 4);
    v78 = (v77 >> 8) | v77 | (((v77 >> 8) | v77) >> 16);
    a3 = 64;
    v27 = v78 + 1;
    if ( v27 < 0x40 )
      v27 = 64;
    v28 = 16LL * v27;
LABEL_10:
    *(_DWORD *)(v7 + 16) = v27;
    v23 = (__int64 *)sub_220C370(v28, 8, a3, a4, a5, a6);
    *(_QWORD *)v7 = v23;
    if ( v9 )
    {
      v29 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v30 = &v9[2 * v8];
      for ( j = &v23[2 * v29]; j != v23; v23 += 2 )
        *v23 = -4096;
      for ( k = v9; v30 != k; k += 2 )
      {
        v33 = *k;
        if ( *k != -8192 && v33 != -4096 )
        {
          v34 = *(_DWORD *)(v7 + 16);
          if ( !v34 )
          {
            *(_QWORD *)&dword_0 = *k;
            BUG();
          }
          v35 = v34 - 1;
          v36 = (v34 - 1) & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v37 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v36);
          v38 = *v37;
          if ( v33 != *v37 )
          {
            v70 = 1;
            v71 = nullptr;
            if ( v38 != -4096 )
            {
              while ( 1 )
              {
                if ( v38 == -8192 && !v71 )
                  v71 = v37;
                v36 = v35 & (v70 + v36);
                v37 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v36);
                v38 = *v37;
                if ( v33 == *v37 )
                  break;
                if ( v38 == -4096 )
                {
                  if ( v71 )
                    v37 = v71;
                  break;
                }
                ++v70;
              }
            }
          }
          *v37 = v33;
          v39 = k[1];
          k[1] = 0;
          v37[1] = v39;
          v40 = (void *)k[1];
          ++*(_DWORD *)(v7 + 8);
          if ( v40 )
          {
            v41 = *(void (**)(void))(*(_QWORD *)v40 + 8LL);
            if ( (char *)v41 == (char *)sub_9606F0 )
              operator delete(v40, 8u);
            else
              v41();
          }
        }
      }
      operator delete();
      v26 = *(__int64 **)v7;
      v25 = *(_DWORD *)(v7 + 16);
      LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
LABEL_23:
      if ( v25 )
      {
        v42 = v25 - 1;
        v43 = a2;
        v44 = v42 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v15 = &v26[2 * v44];
        v45 = *v15;
        if ( *v15 == a2 )
          goto LABEL_31;
        if ( v45 != -4096 )
        {
          v74 = &v26[2 * (v42 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
          v75 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v45 == -8192 && !v15 )
              v15 = v74;
            v44 = v42 & (v75 + v44);
            v74 = &v26[2 * v44];
            v45 = *v74;
            if ( *v74 == a2 )
            {
              v43 = a2;
              v15 = &v26[2 * v44];
              goto LABEL_31;
            }
            if ( v45 == -4096 )
              break;
            ++v75;
          }
          if ( v15 )
            goto LABEL_30;
          v15 = &v26[2 * v44];
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

