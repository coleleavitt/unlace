char __fastcall sub_987320(__int64 a1, _WORD *a2)
{
  _WORD *v3; // rbx
  __int64 v4; // rax
  unsigned int *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // r12d
  _WORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rbp
  unsigned int v22; // r15d
  __int64 *v23; // r13
  unsigned __int64 v24; // rsi
  unsigned int v25; // ecx
  unsigned int *v26; // rdx
  int v27; // edi
  unsigned int *v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int *v32; // rdx
  int v33; // r10d
  __int64 *v34; // r9
  unsigned int *v35; // rcx
  __int64 *v36; // rdx
  int i; // r15d
  __int64 v38; // rcx
  unsigned int v39; // r8d
  unsigned int *v40; // rdi
  __int64 v41; // r11
  int v42; // esi
  int v43; // r8d
  unsigned int v44; // edi
  int v45; // r10d
  unsigned int *v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int *v50; // rdx
  int v51; // r9d
  unsigned int *v52; // rcx
  __int64 *v53; // rdx
  int v54; // r11d
  __int64 v55; // rcx
  unsigned int v56; // r10d
  unsigned int *v57; // rsi
  __int64 v58; // rdi
  int v59; // esi
  int v60; // edi
  unsigned int v61; // r14d
  int v62; // r9d
  unsigned int *v63; // r8
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int *v66; // rcx
  unsigned int *v67; // rdx
  __int64 v68; // rcx
  unsigned int *v69; // rcx
  unsigned int *v70; // rdx
  unsigned int *v71; // r14
  int v73; // [rsp+8h] [rbp-60h]
  unsigned int *v74; // [rsp+8h] [rbp-60h]
  int v75; // [rsp+10h] [rbp-58h]
  __int64 v76; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v77[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a2;
  v76 = *((_QWORD *)a2 + 6);
  if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v4 = sub_B68690(a2);
  v7 = *(_QWORD *)v4;
  v8 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( v7 >= v8 )
  {
    if ( v7 == v8 )
      goto LABEL_8;
    v9 = *(_QWORD *)v8;
    if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 326 )
    {
      v10 = (unsigned __int64 *)(v8 + 8);
      while ( (unsigned __int64 *)v7 != v10 )
      {
        v9 = *v10++;
        if ( *(_WORD *)(v9 + 36) == 326 )
          goto LABEL_17;
      }
      goto LABEL_8;
    }
LABEL_17:
    v18 = *(_WORD **)v7;
    if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 326 )
    {
      v19 = (_QWORD *)(v7 + 8);
      do
        v18 = (_WORD *)*v19++;
      while ( v18[18] != 326 );
    }
    v20 = *((unsigned int *)v18 + 10);
    v13 = dword_23B6E18;
    v17 = dword_23B6E18[v20];
    goto LABEL_21;
  }
  v9 = v7;
  a2 = *(_WORD **)v7;
  if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 326 )
  {
LABEL_16:
    if ( v8 == v9 )
      goto LABEL_8;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v9 += 8LL;
    if ( v8 == v9 )
      break;
    a2 = *(_WORD **)v9;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) == 326 )
      goto LABEL_16;
  }
LABEL_8:
  if ( sub_986590(&v76) )
  {
    LODWORD(v13) = sub_986220(v76);
    v17 = (unsigned int)v13;
    goto LABEL_21;
  }
  v13 = (unsigned int *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 44 )
  {
    v77[0] = sub_F44710(v14, a2, v15, v11, v12);
    if ( !sub_986590(v77) )
    {
      v13 = (unsigned int *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_10;
    }
    v64 = sub_F44710(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v11, v12);
    LODWORD(v13) = sub_986220(v64);
    v17 = (unsigned int)v13;
LABEL_21:
    if ( !v17 )
      return (char)v13;
    goto LABEL_22;
  }
LABEL_10:
  v16 = *(_QWORD *)v13;
  LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v13 <= 1 )
  {
    v17 = 1;
    v77[0] = sub_F44710(v16, a2, v15, v11, v12);
    LOBYTE(v13) = sub_986590(v77);
    if ( (_BYTE)v13 )
    {
LABEL_22:
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_DWORD *)(v21 + 32);
      v23 = *(__int64 **)(v21 + 16);
      if ( !v22 )
        goto LABEL_36;
      v24 = v22 - 1;
      v25 = v24 & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
      v26 = (unsigned int *)&v23[2 * v25];
      v13 = *(unsigned int **)v26;
      if ( v3 == *(_WORD **)v26 )
      {
LABEL_24:
        v26[2] = v17;
        return (char)v13;
      }
      v27 = 1;
      v5 = nullptr;
      if ( v13 != (unsigned int *)-4096LL )
      {
        while ( 1 )
        {
          if ( !v5 && v13 == (unsigned int *)-8192LL )
            v5 = v26;
          v6 = (unsigned int)(v27 + 1);
          v25 = v24 & (v27 + v25);
          v26 = (unsigned int *)&v23[2 * v25];
          v13 = *(unsigned int **)v26;
          if ( v3 == *(_WORD **)v26 )
            goto LABEL_24;
          if ( v13 == (unsigned int *)-4096LL )
            break;
          ++v27;
        }
        if ( v5 )
          v26 = v5;
      }
      v9 = (unsigned int)(*(_DWORD *)(v21 + 24) + 1);
      if ( 4 * (int)v9 < 3 * v22 )
      {
        LODWORD(v13) = v22 - *(_DWORD *)(v21 + 28) - v9;
        if ( (unsigned int)v13 > v22 >> 3 )
        {
          v28 = *(unsigned int **)v26;
          goto LABEL_31;
        }
        v47 = (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2);
        v48 = ((((v47 >> 8) | v47) >> 16) | (v47 >> 8) | v47) + 1;
        if ( (unsigned int)v48 < 0x40 )
          LODWORD(v48) = 64;
        *(_DWORD *)(v21 + 32) = v48;
        v13 = (unsigned int *)sub_220C370(16LL * (unsigned int)v48, 8, 64, v9, v5, v6);
        *(_QWORD *)(v21 + 16) = v13;
        if ( v23 )
        {
          v49 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v50 = v13;
          v51 = v49;
          v52 = &v13[4 * v49];
          if ( v13 != v52 )
          {
            do
            {
              *(_QWORD *)v50 = -4096;
              v50 += 4;
            }
            while ( v52 != v50 );
          }
          v53 = v23;
          v54 = v51 - 1;
          do
          {
            v55 = *v53;
            if ( *v53 != -4096 && v55 != -8192 )
            {
              if ( !v51 )
              {
                *(_QWORD *)&dword_0 = *v53;
                BUG();
              }
              v56 = v54 & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
              v57 = &v13[4 * v56];
              v58 = *(_QWORD *)v57;
              if ( v55 != *(_QWORD *)v57 && v58 != -4096 )
              {
                v75 = 1;
                v74 = nullptr;
                while ( 1 )
                {
                  if ( v58 == -8192 )
                  {
                    if ( v74 )
                      v57 = v74;
                    v74 = v57;
                  }
                  v56 = v54 & (v75 + v56);
                  v57 = &v13[4 * v56];
                  v58 = *(_QWORD *)v57;
                  if ( v55 == *(_QWORD *)v57 )
                    break;
                  if ( v58 == -4096 )
                  {
                    if ( v74 )
                      v57 = v74;
                    break;
                  }
                  ++v75;
                }
              }
              *(_QWORD *)v57 = v55;
              v57[2] = *((_DWORD *)v53 + 2);
              ++*(_DWORD *)(v21 + 24);
            }
            v53 += 2;
          }
          while ( &v23[2 * v22] != v53 );
          operator delete();
          v13 = *(unsigned int **)(v21 + 16);
          v59 = *(_DWORD *)(v21 + 32);
          LODWORD(v9) = *(_DWORD *)(v21 + 24) + 1;
        }
        else
        {
          v68 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v59 = v68;
          v69 = &v13[4 * v68];
          if ( v13 != v69 )
          {
            v70 = v13;
            do
            {
              *(_QWORD *)v70 = -4096;
              v70 += 4;
            }
            while ( v69 != v70 );
          }
          LODWORD(v9) = 1;
        }
        if ( v59 )
        {
          v60 = v59 - 1;
          v61 = (v59 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
          v26 = &v13[4 * v61];
          v28 = *(unsigned int **)v26;
          if ( v3 != *(_WORD **)v26 )
          {
            v62 = 1;
            v63 = nullptr;
            if ( v28 != (unsigned int *)-4096LL )
            {
              while ( 1 )
              {
                if ( v28 == (unsigned int *)-8192LL && !v63 )
                  v63 = v26;
                v61 = v60 & (v62 + v61);
                v26 = &v13[4 * v61];
                v28 = *(unsigned int **)v26;
                if ( v3 == *(_WORD **)v26 )
                  goto LABEL_31;
                if ( v28 == (unsigned int *)-4096LL )
                {
                  if ( !v63 )
                    break;
                  v28 = *(unsigned int **)v63;
                  v26 = v63;
                  goto LABEL_31;
                }
                ++v62;
              }
            }
LABEL_52:
            *(_DWORD *)(v21 + 24) = v9;
LABEL_33:
            *(_QWORD *)v26 = v3;
            v26[2] = 0;
            goto LABEL_24;
          }
          goto LABEL_31;
        }
      }
      else
      {
LABEL_36:
        v29 = (((((((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
                | (2 * v22 - 1)
                | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 4)
              | (((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
              | (2 * v22 - 1)
              | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 8)
            | (((((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
              | (2 * v22 - 1)
              | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 4)
            | (((2 * v22 - 1) | ((unsigned __int64)(2 * v22 - 1) >> 1)) >> 2)
            | (2 * v22 - 1)
            | ((unsigned __int64)(2 * v22 - 1) >> 1);
        v30 = ((v29 >> 16) | v29) + 1;
        if ( (unsigned int)v30 < 0x40 )
          LODWORD(v30) = 64;
        *(_DWORD *)(v21 + 32) = v30;
        v13 = (unsigned int *)sub_220C370(16LL * (unsigned int)v30, 8, 64, v9, v5, v6);
        *(_QWORD *)(v21 + 16) = v13;
        if ( v23 )
        {
          v31 = *(unsigned int *)(v21 + 32);
          v32 = v13;
          *(_QWORD *)(v21 + 24) = 0;
          v33 = v31;
          v34 = &v23[2 * v22];
          v35 = &v13[4 * v31];
          if ( v13 != v35 )
          {
            do
            {
              *(_QWORD *)v32 = -4096;
              v32 += 4;
            }
            while ( v35 != v32 );
          }
          v36 = v23;
          for ( i = v33 - 1; v34 != v36; v36 += 2 )
          {
            v38 = *v36;
            if ( *v36 != -8192 && v38 != -4096 )
            {
              if ( !v33 )
              {
                *(_QWORD *)&dword_0 = *v36;
                BUG();
              }
              v39 = i & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
              v40 = &v13[4 * v39];
              v41 = *(_QWORD *)v40;
              if ( *(_QWORD *)v40 != v38 && v41 != -4096 )
              {
                v73 = 1;
                v71 = nullptr;
                while ( 1 )
                {
                  if ( !v71 && v41 == -8192 )
                    v71 = v40;
                  v39 = i & (v73 + v39);
                  v40 = &v13[4 * v39];
                  v41 = *(_QWORD *)v40;
                  if ( v38 == *(_QWORD *)v40 )
                    break;
                  if ( v41 == -4096 )
                  {
                    if ( v71 )
                      v40 = v71;
                    break;
                  }
                  ++v73;
                }
              }
              *(_QWORD *)v40 = v38;
              v40[2] = *((_DWORD *)v36 + 2);
              ++*(_DWORD *)(v21 + 24);
            }
          }
          operator delete();
          v13 = *(unsigned int **)(v21 + 16);
          v42 = *(_DWORD *)(v21 + 32);
          LODWORD(v9) = *(_DWORD *)(v21 + 24) + 1;
        }
        else
        {
          v65 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v42 = v65;
          v66 = &v13[4 * v65];
          if ( v13 != v66 )
          {
            v67 = v13;
            do
            {
              *(_QWORD *)v67 = -4096;
              v67 += 4;
            }
            while ( v66 != v67 );
          }
          LODWORD(v9) = 1;
        }
        if ( v42 )
        {
          v43 = v42 - 1;
          v44 = (v42 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
          v26 = &v13[4 * v44];
          v28 = *(unsigned int **)v26;
          if ( v3 != *(_WORD **)v26 )
          {
            v45 = 1;
            v46 = nullptr;
            if ( v28 != (unsigned int *)-4096LL )
            {
              while ( 1 )
              {
                if ( !v46 && v28 == (unsigned int *)-8192LL )
                  v46 = v26;
                v44 = v43 & (v45 + v44);
                v26 = &v13[4 * v44];
                v28 = *(unsigned int **)v26;
                if ( v3 == *(_WORD **)v26 )
                  goto LABEL_31;
                if ( v28 == (unsigned int *)-4096LL )
                {
                  if ( !v46 )
                    goto LABEL_52;
                  v28 = *(unsigned int **)v46;
                  v26 = v46;
                  goto LABEL_31;
                }
                ++v45;
              }
            }
            goto LABEL_52;
          }
LABEL_31:
          *(_DWORD *)(v21 + 24) = v9;
          if ( v28 != (unsigned int *)-4096LL )
            --*(_DWORD *)(v21 + 28);
          goto LABEL_33;
        }
      }
      ++*(_DWORD *)(v21 + 24);
      BUG();
    }
  }
  return (char)v13;
}

