__int64 __fastcall sub_9E2CF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int16 v6; // dx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int v15; // r14d
  __int64 *v16; // r12
  unsigned int v17; // r13d
  unsigned int v18; // edi
  __int64 *v19; // rax
  __int64 v20; // rsi
  _DWORD *v21; // rdx
  int v22; // esi
  __int64 *v23; // rdx
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  int v31; // r11d
  _QWORD *v32; // rcx
  __int64 *v33; // rdx
  __int64 v34; // rcx
  int v35; // r14d
  _QWORD *v36; // r9
  unsigned int v37; // r8d
  _QWORD *v38; // rdi
  __int64 v39; // r15
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // esi
  __int64 *v44; // rcx
  unsigned int j; // r13d
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  int v53; // r14d
  __int64 *v54; // r10
  _QWORD *v55; // rcx
  __int64 *v56; // rdx
  int k; // r15d
  __int64 v58; // rdi
  unsigned int v59; // r8d
  _QWORD *v60; // rcx
  __int64 v61; // r9
  int v62; // edi
  int v63; // esi
  int v64; // esi
  int v65; // edi
  unsigned int n; // eax
  __int64 v67; // r8
  __int64 v68; // rdx
  _QWORD *m; // rdx
  __int64 v70; // rdx
  _QWORD *i; // rdx
  int v72; // r13d
  _QWORD *v73; // r11
  unsigned int v74; // eax
  unsigned int v75; // r13d
  int v76; // [rsp+8h] [rbp-40h]

  v4 = sub_BFB9F0(a2);
  v5 = (_QWORD *)v4;
  v6 = *(_WORD *)v4 & 0x1FF;
  switch ( v6 )
  {
    case 128:
      sub_9E2CF0(a1, *(_QWORD *)(v4 + 32), a3);
      return sub_9E2CF0(a1, v5[5], a3);
    case 129:
      return sub_9E2CF0(a1, *(_QWORD *)(v4 + 48), a3);
    case 26:
      return sub_9E2CF0(a1, v5[2], a3);
    case 46:
      v8 = *(_QWORD *)(v4 + 24);
      result = *(_BYTE *)(v8 + 28) & 0x7F;
      if ( (unsigned int)(unsigned __int8)result - 40 <= 6 )
      {
        if ( (_BYTE)result == 43 )
          return sub_9E2CF0(a1, v5[2], a3);
        v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v9 = *(_QWORD *)v9;
        result = (*(_BYTE *)(v9 + 8) + 70) & 0x7F;
        if ( (unsigned __int8)result > 3u )
          return sub_9E2CF0(a1, v5[2], a3);
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
      goto LABEL_51;
    v11 = v15 - 1;
    v17 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
    v18 = v11 & v17;
    v19 = &v16[2 * ((unsigned int)v11 & v17)];
    v20 = *v19;
    if ( v10 == *v19 )
    {
LABEL_19:
      v21 = v19 + 1;
      result = *((unsigned int *)v19 + 2);
      v22 = result;
LABEL_20:
      if ( (int)a3 > v22 )
        result = a3;
      *v21 = result;
      return result;
    }
    v12 = 1;
    v23 = nullptr;
    if ( v20 == -4096 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( v20 == -8192 && !v23 )
        v23 = v19;
      v13 = (unsigned int)(v12 + 1);
      v18 = v11 & (v12 + v18);
      v19 = &v16[2 * v18];
      v20 = *v19;
      if ( v14 == *v19 )
        goto LABEL_19;
      if ( v20 == -4096 )
        break;
      v12 = (unsigned int)v13;
    }
    if ( !v23 )
LABEL_27:
      v23 = v19;
    v24 = *(_DWORD *)(a1 + 16) + 1;
    if ( 4 * v24 < 3 * v15 )
    {
      if ( v15 - *(_DWORD *)(a1 + 20) - v24 > v15 >> 3 )
      {
LABEL_30:
        v25 = *v23 == -4096;
        *(_DWORD *)(a1 + 16) = v24;
        if ( !v25 )
          --*(_DWORD *)(a1 + 20);
        *v23 = v14;
        v22 = 0;
        v21 = v23 + 1;
        result = 0;
        *v21 = 0;
        goto LABEL_20;
      }
      v26 = (((((((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 8)
             | ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4)
             | ((v11 | (v11 >> 1)) >> 2)
             | v11
             | (v11 >> 1)) >> 16)
           | ((((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 8)
           | ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4)
           | ((v11 | (v11 >> 1)) >> 2)
           | v11
           | (v11 >> 1))
          + 1;
      if ( (unsigned int)v26 < 0x40 )
        LODWORD(v26) = 64;
      *(_DWORD *)(a1 + 24) = v26;
      v27 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v26, 8, 64, v11, v12, v13);
      *(_QWORD *)(a1 + 8) = v27;
      if ( v16 )
      {
        v28 = *(unsigned int *)(a1 + 24);
        v29 = v27;
        v30 = 2LL * v15;
        *(_QWORD *)(a1 + 16) = 0;
        v31 = v28;
        v32 = &v27[2 * v28];
        if ( v27 != v32 )
        {
          do
          {
            *v29 = -4096;
            v29 += 2;
          }
          while ( v32 != v29 );
        }
        v33 = v16;
        v76 = v31 - 1;
        do
        {
          v34 = *v33;
          if ( *v33 != -4096 && v34 != -8192 )
          {
            if ( !v31 )
            {
              *(_QWORD *)&dword_0 = *v33;
              BUG();
            }
            v35 = 1;
            v36 = nullptr;
            v37 = v76 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            while ( 1 )
            {
              v38 = &v27[2 * v37];
              v39 = *v38;
              if ( v34 == *v38 )
                break;
              if ( v39 == -4096 )
              {
                if ( v36 )
                  v38 = v36;
                break;
              }
              if ( v39 != -8192 || v36 )
                v38 = v36;
              v36 = v38;
              v37 = v76 & (v35 + v37);
              ++v35;
            }
            *v38 = v34;
            v40 = *((_DWORD *)v33 + 2);
            ++*(_DWORD *)(a1 + 16);
            *((_DWORD *)v38 + 2) = v40;
          }
          v33 += 2;
        }
        while ( &v16[v30] != v33 );
        operator delete(v16, v30 * 8, 8);
      }
      else
      {
        v70 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        for ( i = &v27[2 * v70]; i != v27; v27 += 2 )
          *v27 = -4096;
      }
      v41 = *(_DWORD *)(a1 + 24);
      if ( v41 )
      {
        v42 = v41 - 1;
        v43 = 1;
        v44 = nullptr;
        for ( j = v42 & v17; ; j = v42 & v75 )
        {
          v23 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * j);
          v46 = *v23;
          if ( v14 == *v23 )
            break;
          if ( v46 == -4096 )
            goto LABEL_68;
          if ( v46 != -8192 || v44 )
            v23 = v44;
          v75 = v43 + j;
          v44 = v23;
          ++v43;
        }
LABEL_50:
        v24 = *(_DWORD *)(a1 + 16) + 1;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_51:
      v47 = (((((((2 * v15 - 1) | ((unsigned __int64)(2 * v15 - 1) >> 1)) >> 2)
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
      v48 = ((v47 >> 16) | v47) + 1;
      if ( (unsigned int)v48 < 0x40 )
        LODWORD(v48) = 64;
      *(_DWORD *)(a1 + 24) = v48;
      v49 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v48, 8, 64, v11, v12, v13);
      *(_QWORD *)(a1 + 8) = v49;
      if ( v16 )
      {
        v50 = *(unsigned int *)(a1 + 24);
        v51 = v49;
        v52 = 2LL * v15;
        *(_QWORD *)(a1 + 16) = 0;
        v53 = v50;
        v54 = &v16[v52];
        v55 = &v49[2 * v50];
        if ( v49 != v55 )
        {
          do
          {
            *v51 = -4096;
            v51 += 2;
          }
          while ( v55 != v51 );
        }
        v56 = v16;
        for ( k = v53 - 1; v54 != v56; v56 += 2 )
        {
          v58 = *v56;
          if ( *v56 != -4096 && v58 != -8192 )
          {
            if ( !v53 )
            {
              *(_QWORD *)&dword_0 = *v56;
              BUG();
            }
            v59 = k & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
            v60 = &v49[2 * v59];
            v61 = *v60;
            if ( *v60 != v58 )
            {
              v72 = 1;
              v73 = nullptr;
              if ( v61 != -4096 )
              {
                while ( 1 )
                {
                  if ( v61 == -8192 && !v73 )
                    v73 = v60;
                  v59 = k & (v72 + v59);
                  v60 = &v49[2 * v59];
                  v61 = *v60;
                  if ( v58 == *v60 )
                    break;
                  if ( v61 == -4096 )
                  {
                    if ( v73 )
                      v60 = v73;
                    break;
                  }
                  ++v72;
                }
              }
            }
            *v60 = v58;
            v62 = *((_DWORD *)v56 + 2);
            ++*(_DWORD *)(a1 + 16);
            *((_DWORD *)v60 + 2) = v62;
          }
        }
        operator delete(v16, v52 * 8, 8);
      }
      else
      {
        v68 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        for ( m = &v49[2 * v68]; m != v49; v49 += 2 )
          *v49 = -4096;
      }
      v63 = *(_DWORD *)(a1 + 24);
      if ( v63 )
      {
        v64 = v63 - 1;
        v65 = 1;
        v44 = nullptr;
        for ( n = v64 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4)); ; n = v64 & v74 )
        {
          v23 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * n);
          v67 = *v23;
          if ( v14 == *v23 )
            break;
          if ( v67 == -4096 )
          {
LABEL_68:
            v24 = *(_DWORD *)(a1 + 16) + 1;
            if ( v44 )
              v23 = v44;
            goto LABEL_30;
          }
          if ( v67 != -8192 || v44 )
            v23 = v44;
          v74 = v65 + n;
          v44 = v23;
          ++v65;
        }
        goto LABEL_50;
      }
    }
    ++*(_DWORD *)(a1 + 16);
    BUG();
  }
  result = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
  if ( (unsigned __int8)result <= 1u )
    return sub_9E2CF0(a1, v5[2], a3);
  if ( (_BYTE)result == 32 )
    return sub_9E2CF0(a1, v5[3], a3);
  return result;
}
