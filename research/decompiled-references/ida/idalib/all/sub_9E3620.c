__int64 __fastcall sub_9E3620(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int16 v6; // dx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int v15; // r14d
  __int64 *v16; // r13
  unsigned __int64 v17; // rdi
  unsigned int v18; // r12d
  unsigned int v19; // esi
  __int64 *v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // edi
  __int64 *v24; // rax
  int v25; // edx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // r10d
  _QWORD *v34; // rdx
  _QWORD *i; // rcx
  __int64 *v36; // r8
  int v37; // r15d
  __int64 v38; // rdi
  int v39; // r11d
  _QWORD *v40; // r9
  unsigned int j; // ecx
  _QWORD *v42; // rdx
  __int64 v43; // r14
  int v44; // ecx
  int v45; // edx
  int v46; // edx
  int v47; // ecx
  __int64 *v48; // rdi
  unsigned int k; // r12d
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rsi
  int v57; // r8d
  __int64 *v58; // r10
  _QWORD *v59; // rdx
  __int64 *v60; // r12
  int m; // r14d
  __int64 v62; // r11
  int v63; // r9d
  _QWORD *v64; // rdi
  unsigned int n; // ecx
  _QWORD *v66; // rdx
  __int64 v67; // r15
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // esi
  unsigned int ii; // edx
  __int64 v73; // r8
  __int64 v74; // rdx
  _QWORD *v75; // rdx
  __int64 v76; // rdx
  _QWORD *v77; // rdx
  unsigned int v78; // edx
  unsigned int v79; // r12d
  unsigned int v80; // ecx
  unsigned int v81; // ecx

  result = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(result - 22) <= 9 )
    return sub_9E2140(a1, *(_QWORD *)(a2 + 16));
  if ( (_DWORD)result == 21 || (_DWORD)result == 32 )
  {
    v4 = sub_BFB9F0(*(_QWORD *)(a2 + 16));
    v5 = (_QWORD *)v4;
    v6 = *(_WORD *)v4 & 0x1FF;
    switch ( v6 )
    {
      case 128:
        sub_9E2CF0(a1, *(_QWORD *)(v4 + 32), 5u);
        v7 = v5[5];
        return sub_9E2CF0(a1, v7, 5u);
      case 129:
        v7 = *(_QWORD *)(v4 + 48);
        return sub_9E2CF0(a1, v7, 5u);
      case 26:
LABEL_11:
        v7 = v5[2];
        return sub_9E2CF0(a1, v7, 5u);
      case 46:
        v8 = *(_QWORD *)(v4 + 24);
        result = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( (unsigned int)(unsigned __int8)result - 40 <= 6 )
        {
          if ( (_BYTE)result == 43 )
            goto LABEL_11;
          v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
            v9 = *(_QWORD *)v9;
          result = (*(_BYTE *)(v9 + 8) + 70) & 0x7F;
          if ( (unsigned __int8)result > 3u )
            goto LABEL_11;
        }
        return result;
    }
    if ( ((v6 + 394) & 0x1FFu) > 1 )
    {
      result = sub_9E2060(v4, *(_QWORD **)a1);
      v14 = v10;
      if ( !v10 )
        return result;
      v15 = *(_DWORD *)(a1 + 24);
      v16 = *(__int64 **)(a1 + 8);
      if ( !v15 )
        goto LABEL_55;
      v17 = v15 - 1;
      v18 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
      v19 = v17 & v18;
      v20 = &v16[2 * ((unsigned int)v17 & v18)];
      v21 = *v20;
      if ( v14 == *v20 )
      {
LABEL_23:
        result = (__int64)(v20 + 1);
        v22 = *((_DWORD *)v20 + 2);
        v23 = v22;
LABEL_24:
        if ( v23 < 5 )
          v22 = 5;
        *(_DWORD *)result = v22;
        return result;
      }
      v12 = 1;
      v24 = nullptr;
      if ( v21 == -4096 )
        goto LABEL_31;
      while ( 1 )
      {
        if ( v21 == -8192 && !v24 )
          v24 = v20;
        v13 = (unsigned int)(v12 + 1);
        v19 = v17 & (v12 + v19);
        v20 = &v16[2 * v19];
        v21 = *v20;
        if ( v14 == *v20 )
          goto LABEL_23;
        if ( v21 == -4096 )
          break;
        v12 = (unsigned int)v13;
      }
      if ( !v24 )
LABEL_31:
        v24 = v20;
      v25 = *(_DWORD *)(a1 + 16) + 1;
      v11 = 3 * v15;
      if ( 4 * v25 < (unsigned int)v11 )
      {
        v26 = v15 - *(_DWORD *)(a1 + 20) - v25;
        v27 = v15 >> 3;
        if ( (unsigned int)v26 > (unsigned int)v27 )
        {
LABEL_34:
          v28 = *v24 == -4096;
          *(_DWORD *)(a1 + 16) = v25;
          if ( !v28 )
            --*(_DWORD *)(a1 + 20);
          *v24 = v14;
          v23 = 0;
          result = (__int64)(v24 + 1);
          v22 = 0;
          *(_DWORD *)result = 0;
          goto LABEL_24;
        }
        v29 = (((((((((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 4) | ((v17 | (v17 >> 1)) >> 2) | v17 | (v17 >> 1)) >> 8)
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
        if ( (unsigned int)v29 < 0x40 )
          LODWORD(v29) = 64;
        *(_DWORD *)(a1 + 24) = v29;
        v30 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v29, 8, 64, 5, v26, v27);
        *(_QWORD *)(a1 + 8) = v30;
        if ( v16 )
        {
          v31 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v32 = 2LL * v15;
          v33 = v31;
          v34 = &v30[2 * v31];
          for ( i = v30; v34 != i; i += 2 )
            *i = -4096;
          v36 = v16;
          v37 = v33 - 1;
          do
          {
            v38 = *v36;
            if ( *v36 != -4096 && v38 != -8192 )
            {
              if ( !v33 )
              {
                *(_QWORD *)&dword_0 = *v36;
                BUG();
              }
              v39 = 1;
              v40 = nullptr;
              for ( j = v37 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4)); ; j = v37 & v81 )
              {
                v42 = &v30[2 * j];
                v43 = *v42;
                if ( v38 == *v42 )
                  break;
                if ( v43 == -4096 )
                {
                  if ( v40 )
                    v42 = v40;
                  break;
                }
                if ( v43 != -8192 || v40 )
                  v42 = v40;
                v81 = v39 + j;
                v40 = v42;
                ++v39;
              }
              v44 = *((_DWORD *)v36 + 2);
              ++*(_DWORD *)(a1 + 16);
              *v42 = v38;
              *((_DWORD *)v42 + 2) = v44;
            }
            v36 += 2;
          }
          while ( &v16[v32] != v36 );
          operator delete(v16, v32 * 8, 8);
        }
        else
        {
          v76 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v77 = &v30[2 * v76];
          while ( v77 != v30 )
          {
            *v30 = -4096;
            v30 += 2;
          }
        }
        v45 = *(_DWORD *)(a1 + 24);
        if ( v45 )
        {
          v46 = v45 - 1;
          v47 = 1;
          v48 = nullptr;
          for ( k = v46 & v18; ; k = v46 & v79 )
          {
            v24 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * k);
            v50 = *v24;
            if ( v14 == *v24 )
              break;
            if ( v50 == -4096 )
              goto LABEL_73;
            if ( v50 != -8192 || v48 )
              v24 = v48;
            v79 = v47 + k;
            v48 = v24;
            ++v47;
          }
LABEL_54:
          v25 = *(_DWORD *)(a1 + 16) + 1;
          goto LABEL_34;
        }
      }
      else
      {
LABEL_55:
        v51 = (((((((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
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
        v52 = ((v51 >> 16) | v51) + 1;
        if ( (unsigned int)v52 < 0x40 )
          LODWORD(v52) = 64;
        *(_DWORD *)(a1 + 24) = v52;
        v53 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v52, 8, 64, v11, v12, v13);
        *(_QWORD *)(a1 + 8) = v53;
        if ( v16 )
        {
          v54 = *(unsigned int *)(a1 + 24);
          v55 = v53;
          v56 = 2LL * v15;
          *(_QWORD *)(a1 + 16) = 0;
          v57 = v54;
          v58 = &v16[v56];
          v59 = &v53[2 * v54];
          if ( v53 != v59 )
          {
            do
            {
              *v55 = -4096;
              v55 += 2;
            }
            while ( v59 != v55 );
          }
          v60 = v16;
          for ( m = v57 - 1; v58 != v60; v60 += 2 )
          {
            v62 = *v60;
            if ( *v60 != -4096 && v62 != -8192 )
            {
              if ( !v57 )
              {
                *(_QWORD *)&dword_0 = *v60;
                BUG();
              }
              v63 = 1;
              v64 = nullptr;
              for ( n = m & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4)); ; n = m & v80 )
              {
                v66 = &v53[2 * n];
                v67 = *v66;
                if ( v62 == *v66 )
                  break;
                if ( v67 == -4096 )
                {
                  if ( v64 )
                    v66 = v64;
                  break;
                }
                if ( v64 || v67 != -8192 )
                  v66 = v64;
                v80 = v63 + n;
                v64 = v66;
                ++v63;
              }
              v68 = *((_DWORD *)v60 + 2);
              ++*(_DWORD *)(a1 + 16);
              *v66 = v62;
              *((_DWORD *)v66 + 2) = v68;
            }
          }
          operator delete(v16, v56 * 8, 8);
        }
        else
        {
          v74 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v75 = &v53[2 * v74];
          while ( v75 != v53 )
          {
            *v53 = -4096;
            v53 += 2;
          }
        }
        v69 = *(_DWORD *)(a1 + 24);
        if ( v69 )
        {
          v70 = v69 - 1;
          v71 = 1;
          v48 = nullptr;
          for ( ii = v70 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4)); ; ii = v70 & v78 )
          {
            v24 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * ii);
            v73 = *v24;
            if ( v14 == *v24 )
              break;
            if ( v73 == -4096 )
            {
LABEL_73:
              if ( v48 )
                v24 = v48;
              v25 = *(_DWORD *)(a1 + 16) + 1;
              goto LABEL_34;
            }
            if ( v73 != -8192 || v48 )
              v24 = v48;
            v78 = v71 + ii;
            v48 = v24;
            ++v71;
          }
          goto LABEL_54;
        }
      }
      ++*(_DWORD *)(a1 + 16);
      BUG();
    }
    result = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
    if ( (unsigned __int8)result <= 1u )
      goto LABEL_11;
    if ( (_BYTE)result == 32 )
    {
      v7 = v5[3];
      return sub_9E2CF0(a1, v7, 5u);
    }
  }
  return result;
}
