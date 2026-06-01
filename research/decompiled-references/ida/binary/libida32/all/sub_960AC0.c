__int64 __fastcall sub_960AC0(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
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
  int v18; // r10d
  __int64 *v19; // r9
  _QWORD *v20; // rcx
  __int64 *v21; // rdx
  int i; // r12d
  __int64 v23; // rcx
  unsigned int v24; // r8d
  _QWORD *v25; // rdi
  __int64 v26; // r11
  int v27; // esi
  int v28; // r8d
  __int64 v29; // rsi
  unsigned int v30; // edi
  __int64 v31; // r9
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  int v39; // r10d
  __int64 *v40; // r9
  _QWORD *v41; // rcx
  __int64 *v42; // rdx
  int v43; // r15d
  __int64 v44; // rcx
  unsigned int v45; // r8d
  _QWORD *v46; // rdi
  __int64 v47; // r11
  int v48; // esi
  int v49; // edi
  unsigned int v50; // r12d
  __int64 v51; // r8
  __int64 *v52; // r9
  int v53; // esi
  __int64 v54; // rcx
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  int v57; // r15d
  _QWORD *v58; // r14
  _QWORD *v59; // r14
  __int64 *v60; // r10
  int v61; // esi
  int v62; // [rsp+4h] [rbp-44h]

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
      v6 = sub_BD7CB0(a2);
    }
    goto LABEL_9;
  }
  v8 = *(__int64 **)v7;
  v9 = *(_DWORD *)(v7 + 16);
  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
    v6 = sub_BD7CB0(a2);
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
        v29 = *v12;
        goto LABEL_30;
      }
      v35 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v36 = ((v35 >> 16) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      *(_DWORD *)(v7 + 16) = v36;
      result = sub_220C370(16LL * (unsigned int)v36, 8, 64, a4, a5, a6);
      *(_QWORD *)v7 = result;
      if ( v8 )
      {
        v37 = *(unsigned int *)(v7 + 16);
        v38 = (_QWORD *)result;
        *(_QWORD *)(v7 + 8) = 0;
        v39 = v37;
        v40 = &v8[2 * v9];
        v41 = (_QWORD *)(result + 16 * v37);
        if ( (_QWORD *)result != v41 )
        {
          do
          {
            *v38 = -4096;
            v38 += 2;
          }
          while ( v41 != v38 );
        }
        v42 = v8;
        v43 = v39 - 1;
        do
        {
          v44 = *v42;
          if ( *v42 != -8192 && v44 != -4096 )
          {
            if ( !v39 )
            {
              *(_QWORD *)&dword_0 = *v42;
              BUG();
            }
            v45 = v43 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
            v46 = (_QWORD *)(result + 16LL * v45);
            v47 = *v46;
            if ( *v46 != v44 && v47 != -4096 )
            {
              v62 = 1;
              v59 = nullptr;
              while ( 1 )
              {
                if ( !v59 && v47 == -8192 )
                  v59 = v46;
                v45 = v43 & (v62 + v45);
                v46 = (_QWORD *)(result + 16LL * v45);
                v47 = *v46;
                if ( v44 == *v46 )
                  break;
                if ( v47 == -4096 )
                {
                  if ( v59 )
                    v46 = v59;
                  break;
                }
                ++v62;
              }
            }
            *v46 = v44;
            v46[1] = v42[1];
            ++*(_DWORD *)(v7 + 8);
          }
          v42 += 2;
        }
        while ( v40 != v42 );
        operator delete();
        result = *(_QWORD *)v7;
        v48 = *(_DWORD *)(v7 + 16);
        LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
      }
      else
      {
        v54 = *(unsigned int *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = 0;
        v48 = v54;
        v55 = (_QWORD *)(result + 16 * v54);
        if ( (_QWORD *)result != v55 )
        {
          v56 = (_QWORD *)result;
          do
          {
            *v56 = -4096;
            v56 += 2;
          }
          while ( v55 != v56 );
        }
        LODWORD(a4) = 1;
      }
      if ( v48 )
      {
        v49 = v48 - 1;
        v29 = v6;
        v50 = v49 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
        v12 = (__int64 *)(result + 16LL * v50);
        v51 = *v12;
        if ( *v12 == v6 )
        {
LABEL_30:
          *(_DWORD *)(v7 + 8) = a4;
          if ( v29 != -4096 )
            --*(_DWORD *)(v7 + 12);
          goto LABEL_32;
        }
        if ( v51 != -4096 )
        {
          v52 = (__int64 *)(result + 16LL * v50);
          v53 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v51 == -8192 )
              v12 = v52;
            v50 = v49 & (v53 + v50);
            v52 = (__int64 *)(result + 16LL * v50);
            v51 = *v52;
            if ( *v52 == v6 )
            {
              v29 = v6;
              v12 = (__int64 *)(result + 16LL * v50);
              goto LABEL_30;
            }
            if ( v51 == -4096 )
              break;
            ++v53;
          }
          if ( v12 )
            goto LABEL_29;
          v12 = (__int64 *)(result + 16LL * v50);
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
    result = sub_220C370(16LL * (unsigned int)v15, 8, 64, a4, a5, a6);
    *(_QWORD *)v7 = result;
    if ( v8 )
    {
      v16 = *(unsigned int *)(v7 + 16);
      v17 = (_QWORD *)result;
      *(_QWORD *)(v7 + 8) = 0;
      v18 = v16;
      v19 = &v8[2 * v9];
      v20 = (_QWORD *)(result + 16 * v16);
      if ( (_QWORD *)result != v20 )
      {
        do
        {
          *v17 = -4096;
          v17 += 2;
        }
        while ( v20 != v17 );
      }
      v21 = v8;
      for ( i = v18 - 1; v19 != v21; v21 += 2 )
      {
        v23 = *v21;
        if ( *v21 != -8192 && v23 != -4096 )
        {
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v21;
            BUG();
          }
          v24 = i & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
          v25 = (_QWORD *)(result + 16LL * v24);
          v26 = *v25;
          if ( v23 != *v25 )
          {
            v57 = 1;
            v58 = nullptr;
            if ( v26 != -4096 )
            {
              while ( 1 )
              {
                if ( !v58 && v26 == -8192 )
                  v58 = v25;
                v24 = i & (v57 + v24);
                v25 = (_QWORD *)(result + 16LL * v24);
                v26 = *v25;
                if ( v23 == *v25 )
                  break;
                if ( v26 == -4096 )
                {
                  if ( v58 )
                    v25 = v58;
                  break;
                }
                ++v57;
              }
            }
          }
          *v25 = v23;
          v25[1] = v21[1];
          ++*(_DWORD *)(v7 + 8);
        }
      }
      operator delete();
      result = *(_QWORD *)v7;
      v27 = *(_DWORD *)(v7 + 16);
      LODWORD(a4) = *(_DWORD *)(v7 + 8) + 1;
    }
    else
    {
      v32 = *(unsigned int *)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0;
      v27 = v32;
      v33 = (_QWORD *)(result + 16 * v32);
      if ( (_QWORD *)result != v33 )
      {
        v34 = (_QWORD *)result;
        do
        {
          *v34 = -4096;
          v34 += 2;
        }
        while ( v33 != v34 );
      }
      LODWORD(a4) = 1;
    }
    if ( v27 )
    {
      v28 = v27 - 1;
      v29 = v6;
      v30 = v28 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v12 = (__int64 *)(result + 16LL * v30);
      v31 = *v12;
      if ( *v12 == v6 )
        goto LABEL_30;
      if ( v31 != -4096 )
      {
        v60 = (__int64 *)(result + 16LL * (v28 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4))));
        v61 = 1;
        v12 = nullptr;
        while ( 1 )
        {
          if ( !v12 && v31 == -8192 )
            v12 = v60;
          v30 = v28 & (v61 + v30);
          v60 = (__int64 *)(result + 16LL * v30);
          v31 = *v60;
          if ( *v60 == v6 )
          {
            v29 = v6;
            v12 = (__int64 *)(result + 16LL * v30);
            goto LABEL_30;
          }
          if ( v31 == -4096 )
            break;
          ++v61;
        }
        if ( v12 )
          goto LABEL_29;
        v12 = (__int64 *)(result + 16LL * v30);
      }
      goto LABEL_25;
    }
LABEL_109:
    ++*(_DWORD *)(v7 + 8);
    BUG();
  }
  return result;
}

