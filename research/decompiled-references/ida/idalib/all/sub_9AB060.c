char __fastcall sub_9AB060(__int64 a1, _WORD *a2)
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
  __int64 v33; // rsi
  int v34; // r10d
  __int64 *v35; // r9
  unsigned int *v36; // rcx
  __int64 *v37; // rdx
  int i; // r15d
  __int64 v39; // rcx
  unsigned int v40; // r8d
  unsigned int *v41; // rdi
  __int64 v42; // r11
  int v43; // esi
  int v44; // r8d
  unsigned int v45; // edi
  int v46; // r10d
  unsigned int *v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int *v51; // rdx
  int v52; // r9d
  __int64 v53; // r15
  unsigned int *v54; // rcx
  __int64 *v55; // rdx
  int v56; // r11d
  __int64 v57; // rcx
  unsigned int v58; // r10d
  unsigned int *v59; // rsi
  __int64 v60; // rdi
  int v61; // esi
  int v62; // edi
  unsigned int v63; // r14d
  int v64; // r9d
  unsigned int *v65; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned int *v68; // rcx
  unsigned int *v69; // rdx
  __int64 v70; // rcx
  unsigned int *v71; // rcx
  unsigned int *v72; // rdx
  unsigned int *v73; // r14
  int v75; // [rsp+8h] [rbp-60h]
  unsigned int *v76; // [rsp+8h] [rbp-60h]
  int v77; // [rsp+10h] [rbp-58h]
  __int64 v78; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v79[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a2;
  v78 = *((_QWORD *)a2 + 6);
  if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v4 = sub_B8C3D0(a2);
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
    v13 = dword_23DAF78;
    v17 = dword_23DAF78[v20];
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
  if ( sub_9AA2D0(&v78) )
  {
    LODWORD(v13) = sub_9A9F60(v78);
    v17 = (unsigned int)v13;
    goto LABEL_21;
  }
  v13 = (unsigned int *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 44 )
  {
    v79[0] = sub_F68450(v14, a2, v15, v11, v12);
    if ( !sub_9AA2D0(v79) )
    {
      v13 = (unsigned int *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_10;
    }
    v66 = sub_F68450(*(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v11, v12);
    LODWORD(v13) = sub_9A9F60(v66);
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
    v79[0] = sub_F68450(v16, a2, v15, v11, v12);
    LOBYTE(v13) = sub_9AA2D0(v79);
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
        v48 = (((v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2)) >> 4) | (v24 >> 1) | v24 | (((v24 >> 1) | v24) >> 2);
        v49 = ((((v48 >> 8) | v48) >> 16) | (v48 >> 8) | v48) + 1;
        if ( (unsigned int)v49 < 0x40 )
          LODWORD(v49) = 64;
        *(_DWORD *)(v21 + 32) = v49;
        v13 = (unsigned int *)sub_22300B0(16LL * (unsigned int)v49, 8, 64, v9, v5, v6);
        *(_QWORD *)(v21 + 16) = v13;
        if ( v23 )
        {
          v50 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v51 = v13;
          v52 = v50;
          v53 = 2LL * v22;
          v54 = &v13[4 * v50];
          if ( v13 != v54 )
          {
            do
            {
              *(_QWORD *)v51 = -4096;
              v51 += 4;
            }
            while ( v54 != v51 );
          }
          v55 = v23;
          v56 = v52 - 1;
          do
          {
            v57 = *v55;
            if ( *v55 != -4096 && v57 != -8192 )
            {
              if ( !v52 )
              {
                *(_QWORD *)&dword_0 = *v55;
                BUG();
              }
              v58 = v56 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
              v59 = &v13[4 * v58];
              v60 = *(_QWORD *)v59;
              if ( v57 != *(_QWORD *)v59 && v60 != -4096 )
              {
                v77 = 1;
                v76 = nullptr;
                while ( 1 )
                {
                  if ( v60 == -8192 )
                  {
                    if ( v76 )
                      v59 = v76;
                    v76 = v59;
                  }
                  v58 = v56 & (v77 + v58);
                  v59 = &v13[4 * v58];
                  v60 = *(_QWORD *)v59;
                  if ( v57 == *(_QWORD *)v59 )
                    break;
                  if ( v60 == -4096 )
                  {
                    if ( v76 )
                      v59 = v76;
                    break;
                  }
                  ++v77;
                }
              }
              *(_QWORD *)v59 = v57;
              v59[2] = *((_DWORD *)v55 + 2);
              ++*(_DWORD *)(v21 + 24);
            }
            v55 += 2;
          }
          while ( &v23[v53] != v55 );
          operator delete(v23, v53 * 8, 8);
          v13 = *(unsigned int **)(v21 + 16);
          v61 = *(_DWORD *)(v21 + 32);
          LODWORD(v9) = *(_DWORD *)(v21 + 24) + 1;
        }
        else
        {
          v70 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v61 = v70;
          v71 = &v13[4 * v70];
          if ( v13 != v71 )
          {
            v72 = v13;
            do
            {
              *(_QWORD *)v72 = -4096;
              v72 += 4;
            }
            while ( v71 != v72 );
          }
          LODWORD(v9) = 1;
        }
        if ( v61 )
        {
          v62 = v61 - 1;
          v63 = (v61 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
          v26 = &v13[4 * v63];
          v28 = *(unsigned int **)v26;
          if ( v3 != *(_WORD **)v26 )
          {
            v64 = 1;
            v65 = nullptr;
            if ( v28 != (unsigned int *)-4096LL )
            {
              while ( 1 )
              {
                if ( v28 == (unsigned int *)-8192LL && !v65 )
                  v65 = v26;
                v63 = v62 & (v64 + v63);
                v26 = &v13[4 * v63];
                v28 = *(unsigned int **)v26;
                if ( v3 == *(_WORD **)v26 )
                  goto LABEL_31;
                if ( v28 == (unsigned int *)-4096LL )
                {
                  if ( !v65 )
                    break;
                  v28 = *(unsigned int **)v65;
                  v26 = v65;
                  goto LABEL_31;
                }
                ++v64;
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
        v13 = (unsigned int *)sub_22300B0(16LL * (unsigned int)v30, 8, 64, v9, v5, v6);
        *(_QWORD *)(v21 + 16) = v13;
        if ( v23 )
        {
          v31 = *(unsigned int *)(v21 + 32);
          v32 = v13;
          v33 = 2LL * v22;
          *(_QWORD *)(v21 + 24) = 0;
          v34 = v31;
          v35 = &v23[v33];
          v36 = &v13[4 * v31];
          if ( v13 != v36 )
          {
            do
            {
              *(_QWORD *)v32 = -4096;
              v32 += 4;
            }
            while ( v36 != v32 );
          }
          v37 = v23;
          for ( i = v34 - 1; v35 != v37; v37 += 2 )
          {
            v39 = *v37;
            if ( *v37 != -8192 && v39 != -4096 )
            {
              if ( !v34 )
              {
                *(_QWORD *)&dword_0 = *v37;
                BUG();
              }
              v40 = i & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
              v41 = &v13[4 * v40];
              v42 = *(_QWORD *)v41;
              if ( *(_QWORD *)v41 != v39 && v42 != -4096 )
              {
                v75 = 1;
                v73 = nullptr;
                while ( 1 )
                {
                  if ( !v73 && v42 == -8192 )
                    v73 = v41;
                  v40 = i & (v75 + v40);
                  v41 = &v13[4 * v40];
                  v42 = *(_QWORD *)v41;
                  if ( v39 == *(_QWORD *)v41 )
                    break;
                  if ( v42 == -4096 )
                  {
                    if ( v73 )
                      v41 = v73;
                    break;
                  }
                  ++v75;
                }
              }
              *(_QWORD *)v41 = v39;
              v41[2] = *((_DWORD *)v37 + 2);
              ++*(_DWORD *)(v21 + 24);
            }
          }
          operator delete(v23, v33 * 8, 8);
          v13 = *(unsigned int **)(v21 + 16);
          v43 = *(_DWORD *)(v21 + 32);
          LODWORD(v9) = *(_DWORD *)(v21 + 24) + 1;
        }
        else
        {
          v67 = *(unsigned int *)(v21 + 32);
          *(_QWORD *)(v21 + 24) = 0;
          v43 = v67;
          v68 = &v13[4 * v67];
          if ( v13 != v68 )
          {
            v69 = v13;
            do
            {
              *(_QWORD *)v69 = -4096;
              v69 += 4;
            }
            while ( v68 != v69 );
          }
          LODWORD(v9) = 1;
        }
        if ( v43 )
        {
          v44 = v43 - 1;
          v45 = (v43 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
          v26 = &v13[4 * v45];
          v28 = *(unsigned int **)v26;
          if ( v3 != *(_WORD **)v26 )
          {
            v46 = 1;
            v47 = nullptr;
            if ( v28 != (unsigned int *)-4096LL )
            {
              while ( 1 )
              {
                if ( !v47 && v28 == (unsigned int *)-8192LL )
                  v47 = v26;
                v45 = v44 & (v46 + v45);
                v26 = &v13[4 * v45];
                v28 = *(unsigned int **)v26;
                if ( v3 == *(_WORD **)v26 )
                  goto LABEL_31;
                if ( v28 == (unsigned int *)-4096LL )
                {
                  if ( !v47 )
                    goto LABEL_52;
                  v28 = *(unsigned int **)v47;
                  v26 = v47;
                  goto LABEL_31;
                }
                ++v46;
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
