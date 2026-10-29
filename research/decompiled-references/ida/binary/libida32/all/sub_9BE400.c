unsigned __int64 __fastcall sub_9BE400(__int64 a1, __int64 a2)
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
  int v27; // r10d
  __int64 *v28; // r9
  _QWORD *v29; // rcx
  __int64 *v30; // rdx
  int i; // r13d
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rdi
  __int64 v35; // r11
  int v36; // ecx
  int v37; // esi
  int v38; // r8d
  unsigned int v39; // edi
  __int64 v40; // rsi
  __int64 *v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  int v47; // r9d
  __int64 *v48; // r8
  _QWORD *v49; // rcx
  __int64 *v50; // rdx
  int v51; // r14d
  __int64 v52; // rcx
  unsigned int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // r10
  int v56; // ecx
  int v57; // esi
  int v58; // edi
  unsigned int v59; // r13d
  int v60; // r9d
  __int64 *v61; // r8
  __int64 v62; // rcx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  int v68; // r15d
  __int64 v69; // r14
  __int64 v70; // r11
  int v71; // r10d
  __int64 *v72; // r9
  int v73; // [rsp+4h] [rbp-54h]

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = sub_BD7CB0(a2);
          v5 = (_QWORD *)v4;
          v6 = *(_WORD *)v4 & 0x1FF;
          if ( v6 != 128 )
            break;
          sub_9BE400(a1, *(_QWORD *)(v4 + 32));
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
  result = sub_9BE320(v4, *(_QWORD **)a1);
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
    v41 = nullptr;
    if ( v21 != -4096 )
    {
      while ( 1 )
      {
        if ( v21 == -8192 && !v41 )
          v41 = v20;
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
      if ( v41 )
        v20 = v41;
    }
    v11 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    if ( 4 * (int)v11 < 3 * v15 )
    {
      if ( v15 - *(_DWORD *)(a1 + 20) - (unsigned int)v11 > v15 >> 3 )
      {
        v40 = *v20;
        goto LABEL_40;
      }
      v42 = (((v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2)) >> 4) | (v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2);
      v43 = ((((v42 >> 8) | v42) >> 16) | (v42 >> 8) | v42) + 1;
      if ( (unsigned int)v43 < 0x40 )
        LODWORD(v43) = 64;
      *(_DWORD *)(a1 + 24) = v43;
      v44 = sub_220C370(16LL * (unsigned int)v43, 8, 64, v11, v12, v13);
      *(_QWORD *)(a1 + 8) = v44;
      if ( v16 )
      {
        v45 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v46 = (_QWORD *)v44;
        v47 = v45;
        v48 = &v16[2 * v15];
        v49 = (_QWORD *)(v44 + 16 * v45);
        if ( (_QWORD *)v44 != v49 )
        {
          do
          {
            *v46 = -4096;
            v46 += 2;
          }
          while ( v49 != v46 );
        }
        v50 = v16;
        v51 = v47 - 1;
        do
        {
          v52 = *v50;
          if ( *v50 != -8192 && v52 != -4096 )
          {
            if ( !v47 )
            {
              *(_QWORD *)&dword_0 = *v50;
              BUG();
            }
            v53 = v51 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
            v54 = v44 + 16LL * v53;
            v55 = *(_QWORD *)v54;
            if ( *(_QWORD *)v54 != v52 && v55 != -4096 )
            {
              v73 = 1;
              v70 = 0;
              while ( 1 )
              {
                if ( v55 == -8192 && !v70 )
                  v70 = v54;
                v53 = v51 & (v73 + v53);
                v54 = v44 + 16LL * v53;
                v55 = *(_QWORD *)v54;
                if ( v52 == *(_QWORD *)v54 )
                  break;
                if ( v55 == -4096 )
                {
                  if ( v70 )
                    v54 = v70;
                  break;
                }
                ++v73;
              }
            }
            *(_QWORD *)v54 = v52;
            v56 = *((_DWORD *)v50 + 2);
            ++*(_DWORD *)(a1 + 16);
            *(_DWORD *)(v54 + 8) = v56;
          }
          v50 += 2;
        }
        while ( v48 != v50 );
        operator delete();
        v44 = *(_QWORD *)(a1 + 8);
        v57 = *(_DWORD *)(a1 + 24);
        LODWORD(v11) = *(_DWORD *)(a1 + 16) + 1;
      }
      else
      {
        v65 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v57 = v65;
        v66 = (_QWORD *)(v44 + 16 * v65);
        if ( v66 != (_QWORD *)v44 )
        {
          v67 = (_QWORD *)v44;
          do
          {
            *v67 = -4096;
            v67 += 2;
          }
          while ( v66 != v67 );
        }
        LODWORD(v11) = 1;
      }
      if ( v57 )
      {
        v58 = v57 - 1;
        v59 = (v57 - 1) & v18;
        v20 = (__int64 *)(v44 + 16LL * v59);
        v40 = *v20;
        if ( v14 == *v20 )
        {
LABEL_40:
          *(_DWORD *)(a1 + 16) = v11;
          if ( v40 != -4096 )
            --*(_DWORD *)(a1 + 20);
          goto LABEL_42;
        }
        v60 = 1;
        v61 = nullptr;
        if ( v40 != -4096 )
        {
          while ( 1 )
          {
            if ( v40 == -8192 && !v61 )
              v61 = v20;
            v59 = v58 & (v60 + v59);
            v20 = (__int64 *)(v44 + 16LL * v59);
            v40 = *v20;
            if ( v14 == *v20 )
              goto LABEL_40;
            if ( v40 == -4096 )
            {
              if ( !v61 )
                break;
              v40 = *v61;
              v20 = v61;
              goto LABEL_40;
            }
            ++v60;
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
    v24 = sub_220C370(16LL * (unsigned int)v23, 8, 64, v11, v12, v13);
    *(_QWORD *)(a1 + 8) = v24;
    if ( v16 )
    {
      v25 = *(unsigned int *)(a1 + 24);
      v26 = (_QWORD *)v24;
      *(_QWORD *)(a1 + 16) = 0;
      v27 = v25;
      v28 = &v16[2 * v15];
      v29 = (_QWORD *)(v24 + 16 * v25);
      if ( (_QWORD *)v24 != v29 )
      {
        do
        {
          *v26 = -4096;
          v26 += 2;
        }
        while ( v29 != v26 );
      }
      v30 = v16;
      for ( i = v27 - 1; v28 != v30; v30 += 2 )
      {
        v32 = *v30;
        if ( *v30 != -4096 && v32 != -8192 )
        {
          if ( !v27 )
          {
            *(_QWORD *)&dword_0 = *v30;
            BUG();
          }
          v33 = i & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v34 = v24 + 16LL * v33;
          v35 = *(_QWORD *)v34;
          if ( v32 != *(_QWORD *)v34 )
          {
            v68 = 1;
            v69 = 0;
            if ( v35 != -4096 )
            {
              while ( 1 )
              {
                if ( v35 == -8192 && !v69 )
                  v69 = v34;
                v33 = i & (v68 + v33);
                v34 = v24 + 16LL * v33;
                v35 = *(_QWORD *)v34;
                if ( v32 == *(_QWORD *)v34 )
                  break;
                if ( v35 == -4096 )
                {
                  if ( v69 )
                    v34 = v69;
                  break;
                }
                ++v68;
              }
            }
          }
          *(_QWORD *)v34 = v32;
          v36 = *((_DWORD *)v30 + 2);
          ++*(_DWORD *)(a1 + 16);
          *(_DWORD *)(v34 + 8) = v36;
        }
      }
      operator delete();
      v24 = *(_QWORD *)(a1 + 8);
      v37 = *(_DWORD *)(a1 + 24);
      LODWORD(v11) = *(_DWORD *)(a1 + 16) + 1;
    }
    else
    {
      v62 = *(unsigned int *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = 0;
      v37 = v62;
      v63 = (_QWORD *)(v24 + 16 * v62);
      if ( v63 != (_QWORD *)v24 )
      {
        v64 = (_QWORD *)v24;
        do
        {
          *v64 = -4096;
          v64 += 2;
        }
        while ( v63 != v64 );
      }
      LODWORD(v11) = 1;
    }
    if ( v37 )
    {
      v38 = v37 - 1;
      v39 = (v37 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v20 = (__int64 *)(v24 + 16LL * v39);
      v40 = *v20;
      if ( v14 == *v20 )
        goto LABEL_40;
      v71 = 1;
      v72 = nullptr;
      if ( v40 != -4096 )
      {
        while ( 1 )
        {
          if ( !v72 && v40 == -8192 )
            v72 = v20;
          v39 = v38 & (v71 + v39);
          v20 = (__int64 *)(v24 + 16LL * v39);
          v40 = *v20;
          if ( v14 == *v20 )
            goto LABEL_40;
          if ( v40 == -4096 )
          {
            if ( !v72 )
              goto LABEL_63;
            v40 = *v72;
            v20 = v72;
            goto LABEL_40;
          }
          ++v71;
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

