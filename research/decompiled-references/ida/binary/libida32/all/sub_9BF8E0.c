__int64 __fastcall sub_9BF8E0(__int64 a1, __int64 a2)
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
  int v32; // r10d
  _QWORD *v33; // rdx
  _QWORD *i; // rcx
  __int64 *v35; // r8
  int v36; // r15d
  __int64 v37; // rdi
  int v38; // r11d
  _QWORD *v39; // r9
  unsigned int j; // ecx
  _QWORD *v41; // rdx
  __int64 v42; // r14
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // ecx
  __int64 *v47; // rdi
  unsigned int k; // r12d
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  int v55; // r8d
  __int64 *v56; // r10
  _QWORD *v57; // rdx
  __int64 *v58; // r12
  int m; // r14d
  __int64 v60; // r11
  int v61; // r9d
  _QWORD *v62; // rdi
  unsigned int n; // ecx
  _QWORD *v64; // rdx
  __int64 v65; // r15
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // esi
  unsigned int ii; // edx
  __int64 v71; // r8
  __int64 v72; // rdx
  _QWORD *v73; // rdx
  __int64 v74; // rdx
  _QWORD *v75; // rdx
  unsigned int v76; // edx
  unsigned int v77; // r12d
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  __int64 *v80; // [rsp+0h] [rbp-50h]

  result = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(result - 22) <= 9 )
    return sub_9BE400(a1, *(_QWORD *)(a2 + 16));
  if ( (_DWORD)result == 21 || (_DWORD)result == 32 )
  {
    v4 = sub_BD7CB0(*(_QWORD *)(a2 + 16));
    v5 = (_QWORD *)v4;
    v6 = *(_WORD *)v4 & 0x1FF;
    switch ( v6 )
    {
      case 128:
        sub_9BEFB0(a1, *(_QWORD *)(v4 + 32), 5u);
        v7 = v5[5];
        return sub_9BEFB0(a1, v7, 5u);
      case 129:
        v7 = *(_QWORD *)(v4 + 48);
        return sub_9BEFB0(a1, v7, 5u);
      case 26:
LABEL_11:
        v7 = v5[2];
        return sub_9BEFB0(a1, v7, 5u);
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
      result = sub_9BE320(v4, *(_QWORD **)a1);
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
        v30 = (_QWORD *)sub_220C370(16LL * (unsigned int)v29, 8, 64, 5, v26, v27);
        *(_QWORD *)(a1 + 8) = v30;
        if ( v16 )
        {
          v31 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v32 = v31;
          v33 = &v30[2 * v31];
          v80 = &v16[2 * v15];
          for ( i = v30; v33 != i; i += 2 )
            *i = -4096;
          v35 = v16;
          v36 = v32 - 1;
          do
          {
            v37 = *v35;
            if ( *v35 != -4096 && v37 != -8192 )
            {
              if ( !v32 )
              {
                *(_QWORD *)&dword_0 = *v35;
                BUG();
              }
              v38 = 1;
              v39 = nullptr;
              for ( j = v36 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4)); ; j = v36 & v79 )
              {
                v41 = &v30[2 * j];
                v42 = *v41;
                if ( v37 == *v41 )
                  break;
                if ( v42 == -4096 )
                {
                  if ( v39 )
                    v41 = v39;
                  break;
                }
                if ( v42 != -8192 || v39 )
                  v41 = v39;
                v79 = v38 + j;
                v39 = v41;
                ++v38;
              }
              v43 = *((_DWORD *)v35 + 2);
              ++*(_DWORD *)(a1 + 16);
              *v41 = v37;
              *((_DWORD *)v41 + 2) = v43;
            }
            v35 += 2;
          }
          while ( v80 != v35 );
          operator delete();
        }
        else
        {
          v74 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v75 = &v30[2 * v74];
          while ( v75 != v30 )
          {
            *v30 = -4096;
            v30 += 2;
          }
        }
        v44 = *(_DWORD *)(a1 + 24);
        if ( v44 )
        {
          v45 = v44 - 1;
          v46 = 1;
          v47 = nullptr;
          for ( k = v45 & v18; ; k = v45 & v77 )
          {
            v24 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * k);
            v49 = *v24;
            if ( v14 == *v24 )
              break;
            if ( v49 == -4096 )
              goto LABEL_73;
            if ( v49 != -8192 || v47 )
              v24 = v47;
            v77 = v46 + k;
            v47 = v24;
            ++v46;
          }
LABEL_54:
          v25 = *(_DWORD *)(a1 + 16) + 1;
          goto LABEL_34;
        }
      }
      else
      {
LABEL_55:
        v50 = (((((((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
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
        v51 = ((v50 >> 16) | v50) + 1;
        if ( (unsigned int)v51 < 0x40 )
          LODWORD(v51) = 64;
        *(_DWORD *)(a1 + 24) = v51;
        v52 = (_QWORD *)sub_220C370(16LL * (unsigned int)v51, 8, 64, v11, v12, v13);
        *(_QWORD *)(a1 + 8) = v52;
        if ( v16 )
        {
          v53 = *(unsigned int *)(a1 + 24);
          v54 = v52;
          *(_QWORD *)(a1 + 16) = 0;
          v55 = v53;
          v56 = &v16[2 * v15];
          v57 = &v52[2 * v53];
          if ( v52 != v57 )
          {
            do
            {
              *v54 = -4096;
              v54 += 2;
            }
            while ( v57 != v54 );
          }
          v58 = v16;
          for ( m = v55 - 1; v56 != v58; v58 += 2 )
          {
            v60 = *v58;
            if ( *v58 != -4096 && v60 != -8192 )
            {
              if ( !v55 )
              {
                *(_QWORD *)&dword_0 = *v58;
                BUG();
              }
              v61 = 1;
              v62 = nullptr;
              for ( n = m & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4)); ; n = m & v78 )
              {
                v64 = &v52[2 * n];
                v65 = *v64;
                if ( v60 == *v64 )
                  break;
                if ( v65 == -4096 )
                {
                  if ( v62 )
                    v64 = v62;
                  break;
                }
                if ( v62 || v65 != -8192 )
                  v64 = v62;
                v78 = v61 + n;
                v62 = v64;
                ++v61;
              }
              v66 = *((_DWORD *)v58 + 2);
              ++*(_DWORD *)(a1 + 16);
              *v64 = v60;
              *((_DWORD *)v64 + 2) = v66;
            }
          }
          operator delete();
        }
        else
        {
          v72 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v73 = &v52[2 * v72];
          while ( v73 != v52 )
          {
            *v52 = -4096;
            v52 += 2;
          }
        }
        v67 = *(_DWORD *)(a1 + 24);
        if ( v67 )
        {
          v68 = v67 - 1;
          v69 = 1;
          v47 = nullptr;
          for ( ii = v68 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4)); ; ii = v68 & v76 )
          {
            v24 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * ii);
            v71 = *v24;
            if ( v14 == *v24 )
              break;
            if ( v71 == -4096 )
            {
LABEL_73:
              if ( v47 )
                v24 = v47;
              v25 = *(_DWORD *)(a1 + 16) + 1;
              goto LABEL_34;
            }
            if ( v71 != -8192 || v47 )
              v24 = v47;
            v76 = v69 + ii;
            v47 = v24;
            ++v69;
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
      return sub_9BEFB0(a1, v7, 5u);
    }
  }
  return result;
}

