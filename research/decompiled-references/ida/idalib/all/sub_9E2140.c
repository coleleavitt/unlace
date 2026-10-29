unsigned __int64 __fastcall sub_9E2140(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int16 v6; // dx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int v15; // r14d
  __int64 *v16; // r12
  unsigned __int64 v17; // rsi
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  __int64 *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  int v28; // r10d
  __int64 *v29; // r9
  _QWORD *v30; // rcx
  __int64 *v31; // rdx
  int i; // r13d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rdi
  __int64 v36; // r11
  int v37; // ecx
  int v38; // esi
  int v39; // r8d
  unsigned int v40; // edi
  __int64 v41; // rsi
  __int64 *v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  int v48; // r9d
  __int64 v49; // r15
  _QWORD *v50; // rcx
  __int64 *v51; // rdx
  int v52; // r14d
  __int64 v53; // rcx
  unsigned int v54; // edi
  __int64 v55; // rsi
  __int64 v56; // r10
  int v57; // ecx
  int v58; // esi
  int v59; // edi
  unsigned int v60; // r13d
  int v61; // r9d
  __int64 *v62; // r8
  __int64 v63; // rcx
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  int v69; // r15d
  __int64 v70; // r14
  __int64 v71; // r11
  int v72; // r10d
  __int64 *v73; // r9
  int v74; // [rsp+4h] [rbp-54h]

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = sub_BFB9F0(a2);
          v5 = (_QWORD *)v4;
          v6 = *(_WORD *)v4 & 0x1FF;
          if ( v6 != 128 )
            break;
          sub_9E2140(a1, *(_QWORD *)(v4 + 32));
          a2 = v5[5];
        }
        if ( v6 != 129 )
          break;
        a2 = *(_QWORD *)(v4 + 48);
      }
      if ( v6 == 26 )
        goto LABEL_6;
      if ( v6 != 46 )
        break;
      v7 = *(_QWORD *)(v4 + 24);
      result = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( (unsigned int)(unsigned __int8)result - 40 > 6 )
        return result;
      if ( (_BYTE)result != 43 )
      {
        v9 = (_BYTE *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
        {
          result = (*(_BYTE *)(*(_QWORD *)v9 + 8LL) + 70) & 0x7F;
          if ( (unsigned __int8)result <= 3u )
            return result;
        }
        else
        {
          result = (v9[8] + 70) & 0x7F;
          if ( (unsigned __int8)result <= 3u )
            return result;
        }
      }
LABEL_6:
      a2 = v5[2];
    }
    if ( ((v6 + 394) & 0x1FFu) > 1 )
      break;
    result = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
    if ( (unsigned __int8)result <= 1u )
      goto LABEL_6;
    if ( (_BYTE)result != 32 )
      return result;
    a2 = v5[3];
  }
  result = sub_9E2060(v4, *(_QWORD **)a1);
  v14 = v10;
  if ( !v10 )
    return result;
  v15 = *(_DWORD *)(a1 + 24);
  v16 = *(__int64 **)(a1 + 8);
  if ( !v15 )
    goto LABEL_25;
  v17 = v15 - 1;
  v18 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
  v19 = v17 & v18;
  v20 = &v16[2 * ((unsigned int)v17 & v18)];
  v21 = *v20;
  if ( v14 != *v20 )
  {
    v12 = 1;
    v42 = nullptr;
    if ( v21 != -4096 )
    {
      while ( 1 )
      {
        if ( v21 == -8192 && !v42 )
          v42 = v20;
        v13 = (unsigned int)(v12 + 1);
        v19 = v17 & (v12 + v19);
        v20 = &v16[2 * v19];
        v21 = *v20;
        if ( v14 == *v20 )
          goto LABEL_17;
        if ( v21 == -4096 )
          break;
        v12 = (unsigned int)v13;
      }
      if ( v42 )
        v20 = v42;
    }
    v11 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    if ( 4 * (int)v11 < 3 * v15 )
    {
      if ( v15 - *(_DWORD *)(a1 + 20) - (unsigned int)v11 > v15 >> 3 )
      {
        v41 = *v20;
        goto LABEL_40;
      }
      v43 = (((v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2)) >> 4) | (v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2);
      v44 = ((((v43 >> 8) | v43) >> 16) | (v43 >> 8) | v43) + 1;
      if ( (unsigned int)v44 < 0x40 )
        LODWORD(v44) = 64;
      *(_DWORD *)(a1 + 24) = v44;
      v45 = sub_22300B0(16LL * (unsigned int)v44, 8, 64, v11, v12, v13);
      *(_QWORD *)(a1 + 8) = v45;
      if ( v16 )
      {
        v46 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v47 = (_QWORD *)v45;
        v48 = v46;
        v49 = 2LL * v15;
        v50 = (_QWORD *)(v45 + 16 * v46);
        if ( (_QWORD *)v45 != v50 )
        {
          do
          {
            *v47 = -4096;
            v47 += 2;
          }
          while ( v50 != v47 );
        }
        v51 = v16;
        v52 = v48 - 1;
        do
        {
          v53 = *v51;
          if ( *v51 != -8192 && v53 != -4096 )
          {
            if ( !v48 )
            {
              *(_QWORD *)&dword_0 = *v51;
              BUG();
            }
            v54 = v52 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v55 = v45 + 16LL * v54;
            v56 = *(_QWORD *)v55;
            if ( *(_QWORD *)v55 != v53 && v56 != -4096 )
            {
              v74 = 1;
              v71 = 0;
              while ( 1 )
              {
                if ( v56 == -8192 && !v71 )
                  v71 = v55;
                v54 = v52 & (v74 + v54);
                v55 = v45 + 16LL * v54;
                v56 = *(_QWORD *)v55;
                if ( v53 == *(_QWORD *)v55 )
                  break;
                if ( v56 == -4096 )
                {
                  if ( v71 )
                    v55 = v71;
                  break;
                }
                ++v74;
              }
            }
            *(_QWORD *)v55 = v53;
            v57 = *((_DWORD *)v51 + 2);
            ++*(_DWORD *)(a1 + 16);
            *(_DWORD *)(v55 + 8) = v57;
          }
          v51 += 2;
        }
        while ( &v16[v49] != v51 );
        operator delete(v16, v49 * 8, 8);
        v45 = *(_QWORD *)(a1 + 8);
        v58 = *(_DWORD *)(a1 + 24);
        LODWORD(v11) = *(_DWORD *)(a1 + 16) + 1;
      }
      else
      {
        v66 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v58 = v66;
        v67 = (_QWORD *)(v45 + 16 * v66);
        if ( v67 != (_QWORD *)v45 )
        {
          v68 = (_QWORD *)v45;
          do
          {
            *v68 = -4096;
            v68 += 2;
          }
          while ( v67 != v68 );
        }
        LODWORD(v11) = 1;
      }
      if ( v58 )
      {
        v59 = v58 - 1;
        v60 = (v58 - 1) & v18;
        v20 = (__int64 *)(v45 + 16LL * v60);
        v41 = *v20;
        if ( v14 == *v20 )
        {
LABEL_40:
          *(_DWORD *)(a1 + 16) = v11;
          if ( v41 != -4096 )
            --*(_DWORD *)(a1 + 20);
          goto LABEL_42;
        }
        v61 = 1;
        v62 = nullptr;
        if ( v41 != -4096 )
        {
          while ( 1 )
          {
            if ( v41 == -8192 && !v62 )
              v62 = v20;
            v60 = v59 & (v61 + v60);
            v20 = (__int64 *)(v45 + 16LL * v60);
            v41 = *v20;
            if ( v14 == *v20 )
              goto LABEL_40;
            if ( v41 == -4096 )
            {
              if ( !v62 )
                break;
              v41 = *v62;
              v20 = v62;
              goto LABEL_40;
            }
            ++v61;
          }
        }
LABEL_63:
        *(_DWORD *)(a1 + 16) = v11;
LABEL_42:
        *v20 = v14;
        *((_DWORD *)v20 + 2) = 0;
        *((_DWORD *)v20 + 2) = 1;
        return 1;
      }
      goto LABEL_122;
    }
LABEL_25:
    v22 = (((((((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
            | (2 * v15 - 1)
            | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 4)
          | (((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
          | (2 * v15 - 1)
          | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 8)
        | (((((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
          | (2 * v15 - 1)
          | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 4)
        | (((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
        | (2 * v15 - 1)
        | ((unsigned __int64)(2 * v15 - 1) >> 1);
    v23 = ((v22 >> 16) | v22) + 1;
    if ( (unsigned int)v23 < 0x40 )
      LODWORD(v23) = 64;
    *(_DWORD *)(a1 + 24) = v23;
    v24 = sub_22300B0(16LL * (unsigned int)v23, 8, 64, v11, v12, v13);
    *(_QWORD *)(a1 + 8) = v24;
    if ( v16 )
    {
      v25 = *(unsigned int *)(a1 + 24);
      v26 = (_QWORD *)v24;
      v27 = 2LL * v15;
      *(_QWORD *)(a1 + 16) = 0;
      v28 = v25;
      v29 = &v16[v27];
      v30 = (_QWORD *)(v24 + 16 * v25);
      if ( (_QWORD *)v24 != v30 )
      {
        do
        {
          *v26 = -4096;
          v26 += 2;
        }
        while ( v30 != v26 );
      }
      v31 = v16;
      for ( i = v28 - 1; v29 != v31; v31 += 2 )
      {
        v33 = *v31;
        if ( *v31 != -4096 && v33 != -8192 )
        {
          if ( !v28 )
          {
            *(_QWORD *)&dword_0 = *v31;
            BUG();
          }
          v34 = i & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v35 = v24 + 16LL * v34;
          v36 = *(_QWORD *)v35;
          if ( v33 != *(_QWORD *)v35 )
          {
            v69 = 1;
            v70 = 0;
            if ( v36 != -4096 )
            {
              while ( 1 )
              {
                if ( v36 == -8192 && !v70 )
                  v70 = v35;
                v34 = i & (v69 + v34);
                v35 = v24 + 16LL * v34;
                v36 = *(_QWORD *)v35;
                if ( v33 == *(_QWORD *)v35 )
                  break;
                if ( v36 == -4096 )
                {
                  if ( v70 )
                    v35 = v70;
                  break;
                }
                ++v69;
              }
            }
          }
          *(_QWORD *)v35 = v33;
          v37 = *((_DWORD *)v31 + 2);
          ++*(_DWORD *)(a1 + 16);
          *(_DWORD *)(v35 + 8) = v37;
        }
      }
      operator delete(v16, v27 * 8, 8);
      v24 = *(_QWORD *)(a1 + 8);
      v38 = *(_DWORD *)(a1 + 24);
      LODWORD(v11) = *(_DWORD *)(a1 + 16) + 1;
    }
    else
    {
      v63 = *(unsigned int *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v38 = v63;
      v64 = (_QWORD *)(v24 + 16 * v63);
      if ( v64 != (_QWORD *)v24 )
      {
        v65 = (_QWORD *)v24;
        do
        {
          *v65 = -4096;
          v65 += 2;
        }
        while ( v64 != v65 );
      }
      LODWORD(v11) = 1;
    }
    if ( v38 )
    {
      v39 = v38 - 1;
      v40 = (v38 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v20 = (__int64 *)(v24 + 16LL * v40);
      v41 = *v20;
      if ( v14 == *v20 )
        goto LABEL_40;
      v72 = 1;
      v73 = nullptr;
      if ( v41 != -4096 )
      {
        while ( 1 )
        {
          if ( !v73 && v41 == -8192 )
            v73 = v20;
          v40 = v39 & (v72 + v40);
          v20 = (__int64 *)(v24 + 16LL * v40);
          v41 = *v20;
          if ( v14 == *v20 )
            goto LABEL_40;
          if ( v41 == -4096 )
          {
            if ( !v73 )
              goto LABEL_63;
            v41 = *v73;
            v20 = v73;
            goto LABEL_40;
          }
          ++v72;
        }
      }
      goto LABEL_63;
    }
LABEL_122:
    ++*(_DWORD *)(a1 + 16);
    BUG();
  }
LABEL_17:
  result = *((unsigned int *)v20 + 2);
  if ( (int)result <= 0 )
    result = 1;
  *((_DWORD *)v20 + 2) = result;
  return result;
}
