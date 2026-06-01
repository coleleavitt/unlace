__int64 __fastcall sub_984800(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  int v19; // r10d
  __int64 *v20; // r9
  _QWORD *v21; // rcx
  __int64 *v22; // rdx
  int i; // r12d
  __int64 v24; // rcx
  unsigned int v25; // r8d
  _QWORD *v26; // rdi
  __int64 v27; // r11
  int v28; // esi
  int v29; // r8d
  __int64 v30; // rsi
  unsigned int v31; // edi
  __int64 v32; // r9
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // rsi
  int v41; // r10d
  _QWORD *v42; // rcx
  __int64 *v43; // rdx
  int v44; // r15d
  __int64 v45; // rcx
  unsigned int v46; // r8d
  _QWORD *v47; // rdi
  __int64 v48; // r11
  int v49; // esi
  int v50; // edi
  unsigned int v51; // r12d
  __int64 v52; // r8
  __int64 *v53; // r9
  int v54; // esi
  __int64 v55; // rcx
  _QWORD *v56; // rcx
  _QWORD *v57; // rdx
  int v58; // r15d
  _QWORD *v59; // r14
  _QWORD *v60; // r14
  __int64 *v61; // r10
  int v62; // esi
  int v63; // [rsp+4h] [rbp-44h]

  v6 = (__int64)a2;
  v7 = *(_QWORD *)(a1 + 112);
  if ( !v7 )
  {
    v8 = nullptr;
    v9 = 0;
    v7 = operator new(0x18u);
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(a1 + 112) = v7;
    if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
    {
      v8 = nullptr;
      v9 = 0;
      v6 = sub_BFB9F0(a2);
    }
    goto LABEL_9;
  }
  v8 = *(__int64 **)v7;
  v9 = *(_DWORD *)(v7 + 16);
  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
    v6 = sub_BFB9F0(a2);
  if ( !v9 )
    goto LABEL_9;
  v10 = v9 - 1;
  v11 = v10 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v12 = &v8[2 * v11];
  result = *v12;
  if ( *v12 != v6 )
  {
    a5 = 1;
    a6 = nullptr;
    if ( result != -4096 )
    {
      while ( 1 )
      {
        if ( a6 || result != -8192 )
          v12 = a6;
        a6 = (__int64 *)(unsigned int)(a5 + 1);
        v11 = v10 & (a5 + v11);
        result = v8[2 * v11];
        if ( result == v6 )
          return result;
        if ( result == -4096 )
          break;
        a5 = (unsigned int)a6;
        a6 = v12;
        v12 = &v8[2 * v11];
      }
      if ( !v12 )
        v12 = &v8[2 * v11];
    }
    a4 = (unsigned int)(*(_DWORD *)(v7 + 8) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      result = v9 - *(_DWORD *)(v7 + 12) - (unsigned int)a4;
      if ( (unsigned int)result > v9 >> 3 )
      {
LABEL_29:
        v30 = *v12;
        goto LABEL_30;
      }
      v36 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v37 = ((v36 >> 16) | v36) + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      *(_DWORD *)(v7 + 16) = v37;
      result = sub_22300B0(16LL * (unsigned int)v37, 8, 64, a4, a5, a6);
      *(_QWORD *)v7 = result;
      if ( v8 )
      {
        v38 = *(unsigned int *)(v7 + 16);
        v39 = (_QWORD *)result;
        v40 = 2LL * v9;
        *(_QWORD *)(v7 + 8) = 0;
        v41 = v38;
        v42 = (_QWORD *)(result + 16 * v38);
        if ( (_QWORD *)result != v42 )
        {
          do
          {
            *v39 = -4096;
            v39 += 2;
          }
          while ( v42 != v39 );
        }
        v43 = v8;
        v44 = v41 - 1;
        do
        {
          v45 = *v43;
          if ( *v43 != -8192 && v45 != -4096 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v43;
              BUG();
            }
            v46 = v44 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
            v47 = (_QWORD *)(result + 16LL * v46);
            v48 = *v47;
            if ( *v47 != v45 && v48 != -4096 )
            {
              v63 = 1;
              v60 = nullptr;
              while ( 1 )
              {
                if ( !v60 && v48 == -8192 )
                  v60 = v47;
                v46 = v44 & (v63 + v46);
                v47 = (_QWORD *)(result + 16LL * v46);
                v48 = *v47;
                if ( v45 == *v47 )
                  break;
                if ( v48 == -4096 )
                {
                  if ( v60 )
                    v47 = v60;
                  break;
                }
                ++v63;
              }
            }
            *v47 = v45;
            v47[1] = v43[1];
            ++*(_DWORD *)(v7 + 8);
          }
          v43 += 2;
        }
        while ( &v8[v40] != v43 );
        operator delete(v8, v40 * 8, 8);
        result = *(_QWORD *)v7;
        v49 = *(_DWORD *)(v7 + 16);
        LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
      }
      else
      {
        v55 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v49 = v55;
        v56 = (_QWORD *)(result + 16 * v55);
        if ( (_QWORD *)result != v56 )
        {
          v57 = (_QWORD *)result;
          do
          {
            *v57 = -4096;
            v57 += 2;
          }
          while ( v56 != v57 );
        }
        LODWORD(a4) = 1;
      }
      if ( v49 )
      {
        v50 = v49 - 1;
        v30 = v6;
        v51 = v50 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
        v12 = (__int64 *)(result + 16LL * v51);
        v52 = *v12;
        if ( *v12 == v6 )
        {
LABEL_30:
          *(_DWORD *)(v7 + 8) = a4;
          if ( v30 != -4096 )
            --*(_DWORD *)(v7 + 12);
          goto LABEL_32;
        }
        if ( v52 != -4096 )
        {
          v53 = (__int64 *)(result + 16LL * v51);
          v54 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v52 == -8192 )
              v12 = v53;
            v51 = v50 & (v54 + v51);
            v53 = (__int64 *)(result + 16LL * v51);
            v52 = *v53;
            if ( *v53 == v6 )
            {
              v30 = v6;
              v12 = (__int64 *)(result + 16LL * v51);
              goto LABEL_30;
            }
            if ( v52 == -4096 )
              break;
            ++v54;
          }
          if ( v12 )
            goto LABEL_29;
          v12 = (__int64 *)(result + 16LL * v51);
        }
LABEL_25:
        *(_DWORD *)(v7 + 8) = a4;
LABEL_32:
        *v12 = v6;
        v12[1] = 0;
        return result;
      }
      goto LABEL_109;
    }
LABEL_9:
    v14 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
            | (2 * v9 - 1)
            | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
          | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 8)
        | (((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
        | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
        | (2 * v9 - 1)
        | ((unsigned __int64)(2 * v9 - 1) >> 1);
    v15 = ((v14 >> 16) | v14) + 1;
    if ( (unsigned int)v15 < 0x40 )
      LODWORD(v15) = 64;
    *(_DWORD *)(v7 + 16) = v15;
    result = sub_22300B0(16LL * (unsigned int)v15, 8, 64, a4, a5, a6);
    *(_QWORD *)v7 = result;
    if ( v8 )
    {
      v16 = *(unsigned int *)(v7 + 16);
      v17 = (_QWORD *)result;
      v18 = 2LL * v9;
      *(_QWORD *)(v7 + 8) = 0;
      v19 = v16;
      v20 = &v8[v18];
      v21 = (_QWORD *)(result + 16 * v16);
      if ( (_QWORD *)result != v21 )
      {
        do
        {
          *v17 = -4096;
          v17 += 2;
        }
        while ( v21 != v17 );
      }
      v22 = v8;
      for ( i = v19 - 1; v20 != v22; v22 += 2 )
      {
        v24 = *v22;
        if ( *v22 != -8192 && v24 != -4096 )
        {
          if ( !v19 )
          {
            *(_QWORD *)&dword_0 = *v22;
            BUG();
          }
          v25 = i & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
          v26 = (_QWORD *)(result + 16LL * v25);
          v27 = *v26;
          if ( v24 != *v26 )
          {
            v58 = 1;
            v59 = nullptr;
            if ( v27 != -4096 )
            {
              while ( 1 )
              {
                if ( !v59 && v27 == -8192 )
                  v59 = v26;
                v25 = i & (v58 + v25);
                v26 = (_QWORD *)(result + 16LL * v25);
                v27 = *v26;
                if ( v24 == *v26 )
                  break;
                if ( v27 == -4096 )
                {
                  if ( v59 )
                    v26 = v59;
                  break;
                }
                ++v58;
              }
            }
          }
          *v26 = v24;
          v26[1] = v22[1];
          ++*(_DWORD *)(v7 + 8);
        }
      }
      operator delete(v8, v18 * 8, 8);
      result = *(_QWORD *)v7;
      v28 = *(_DWORD *)(v7 + 16);
      LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
    }
    else
    {
      v33 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v28 = v33;
      v34 = (_QWORD *)(result + 16 * v33);
      if ( (_QWORD *)result != v34 )
      {
        v35 = (_QWORD *)result;
        do
        {
          *v35 = -4096;
          v35 += 2;
        }
        while ( v34 != v35 );
      }
      LODWORD(a4) = 1;
    }
    if ( v28 )
    {
      v29 = v28 - 1;
      v30 = v6;
      v31 = v29 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v12 = (__int64 *)(result + 16LL * v31);
      v32 = *v12;
      if ( *v12 == v6 )
        goto LABEL_30;
      if ( v32 != -4096 )
      {
        v61 = (__int64 *)(result + 16LL * (v29 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4))));
        v62 = 1;
        v12 = nullptr;
        while ( 1 )
        {
          if ( !v12 && v32 == -8192 )
            v12 = v61;
          v31 = v29 & (v62 + v31);
          v61 = (__int64 *)(result + 16LL * v31);
          v32 = *v61;
          if ( *v61 == v6 )
          {
            v30 = v6;
            v12 = (__int64 *)(result + 16LL * v31);
            goto LABEL_30;
          }
          if ( v32 == -4096 )
            break;
          ++v62;
        }
        if ( v12 )
          goto LABEL_29;
        v12 = (__int64 *)(result + 16LL * v31);
      }
      goto LABEL_25;
    }
LABEL_109:
    ++*(_DWORD *)(v7 + 8);
    BUG();
  }
  return result;
}
