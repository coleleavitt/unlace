__int64 __fastcall sub_14597B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v9; // r15d
  __int64 *v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int v14; // r14d
  unsigned int v15; // ecx
  __int64 *v16; // rdx
  __int64 result; // rax
  int v18; // edi
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rsi
  int v25; // r10d
  __int64 *v26; // r9
  _QWORD *v27; // rcx
  __int64 *v28; // rdx
  int i; // r14d
  __int64 v30; // rcx
  unsigned int v31; // r8d
  _QWORD *v32; // rdi
  __int64 v33; // r11
  __int64 v34; // rcx
  int v35; // esi
  int v36; // r8d
  unsigned int v37; // edi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  int v42; // r9d
  __int64 v43; // r15
  _QWORD *v44; // rcx
  __int64 *v45; // rdx
  int v46; // r11d
  __int64 v47; // rcx
  unsigned int v48; // edi
  _QWORD *v49; // rsi
  __int64 v50; // r10
  __int64 v51; // rcx
  int v52; // esi
  int v53; // edi
  unsigned int v54; // r14d
  __int64 *v55; // r8
  int v56; // r9d
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // rdx
  _QWORD *v63; // r15
  __int64 *v64; // r9
  int v65; // r10d
  int v66; // [rsp+8h] [rbp-50h]
  _QWORD *v67; // [rsp+8h] [rbp-50h]
  int v68; // [rsp+10h] [rbp-48h]

  v9 = *(_DWORD *)(a1 + 208);
  v10 = *(__int64 **)(a1 + 192);
  if ( !v9 )
    goto LABEL_20;
  v11 = a2;
  v12 = a2;
  v13 = v9 - 1;
  v14 = (v12 >> 9) ^ (v11 >> 4);
  v15 = v13 & v14;
  v16 = &v10[2 * ((unsigned int)v13 & v14)];
  result = *v16;
  if ( a2 != *v16 )
  {
    v18 = 1;
    a5 = nullptr;
    if ( result != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && result == -8192 )
          a5 = v16;
        a6 = (unsigned int)(v18 + 1);
        v15 = v13 & (v18 + v15);
        v16 = &v10[2 * v15];
        result = *v16;
        if ( a2 == *v16 )
          goto LABEL_3;
        if ( result == -4096 )
          break;
        ++v18;
      }
      if ( a5 )
        v16 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 200) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      result = v9 - *(_DWORD *)(a1 + 204) - (unsigned int)a4;
      if ( (unsigned int)result > v9 >> 3 )
      {
LABEL_7:
        v19 = *v16;
        goto LABEL_8;
      }
      v38 = (((((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4) | (v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 8)
          | (((v13 >> 1) | v13 | (((v13 >> 1) | v13) >> 2)) >> 4)
          | (v13 >> 1)
          | v13
          | (((v13 >> 1) | v13) >> 2);
      v39 = ((v38 >> 16) | v38) + 1;
      if ( (unsigned int)v39 < 0x40 )
        LODWORD(v39) = 64;
      *(_DWORD *)(a1 + 208) = v39;
      result = sub_22300B0(16LL * (unsigned int)v39, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 192) = result;
      if ( v10 )
      {
        v40 = *(unsigned int *)(a1 + 208);
        v41 = (_QWORD *)result;
        *(_QWORD *)(a1 + 200) = 0;
        v42 = v40;
        v43 = 2LL * v9;
        v44 = (_QWORD *)(result + 16 * v40);
        if ( (_QWORD *)result != v44 )
        {
          do
          {
            *v41 = -4096;
            v41 += 2;
          }
          while ( v44 != v41 );
        }
        v45 = v10;
        v46 = v42 - 1;
        do
        {
          v47 = *v45;
          if ( *v45 != -4096 && v47 != -8192 )
          {
            if ( !v42 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = v46 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = (_QWORD *)(result + 16LL * v48);
            v50 = *v49;
            if ( v47 != *v49 && v50 != -4096 )
            {
              v68 = 1;
              v67 = nullptr;
              while ( 1 )
              {
                if ( v50 == -8192 )
                {
                  if ( v67 )
                    v49 = v67;
                  v67 = v49;
                }
                v48 = v46 & (v68 + v48);
                v49 = (_QWORD *)(result + 16LL * v48);
                v50 = *v49;
                if ( v47 == *v49 )
                  break;
                if ( v50 == -4096 )
                {
                  if ( v67 )
                    v49 = v67;
                  break;
                }
                ++v68;
              }
            }
            *v49 = v47;
            v51 = v45[1];
            ++*(_DWORD *)(a1 + 200);
            v49[1] = v51;
          }
          v45 += 2;
        }
        while ( &v10[v43] != v45 );
        operator delete(v10, v43 * 8, 8);
        result = *(_QWORD *)(a1 + 192);
        v52 = *(_DWORD *)(a1 + 208);
        LODWORD(a4) = *(_DWORD *)(a1 + 200) + 1;
      }
      else
      {
        v60 = *(unsigned int *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = 0;
        v52 = v60;
        v61 = (_QWORD *)(result + 16 * v60);
        if ( (_QWORD *)result != v61 )
        {
          v62 = (_QWORD *)result;
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v61 != v62 );
        }
        LODWORD(a4) = 1;
      }
      if ( v52 )
      {
        v53 = v52 - 1;
        v54 = (v52 - 1) & v14;
        v16 = (__int64 *)(result + 16LL * v54);
        v19 = *v16;
        if ( a2 != *v16 )
        {
          if ( v19 != -4096 )
          {
            v55 = (__int64 *)(result + 16LL * v54);
            v56 = 1;
            v16 = nullptr;
            while ( 1 )
            {
              if ( v19 == -8192 && !v16 )
                v16 = v55;
              v54 = v53 & (v56 + v54);
              v55 = (__int64 *)(result + 16LL * v54);
              v19 = *v55;
              if ( a2 == *v55 )
              {
                v16 = (__int64 *)(result + 16LL * v54);
                goto LABEL_8;
              }
              if ( v19 == -4096 )
                break;
              ++v56;
            }
            if ( v16 )
              goto LABEL_7;
            v16 = (__int64 *)(result + 16LL * v54);
          }
LABEL_36:
          *(_DWORD *)(a1 + 200) = a4;
LABEL_10:
          *v16 = a2;
          v16[1] = 0;
          goto LABEL_3;
        }
        goto LABEL_8;
      }
      goto LABEL_106;
    }
LABEL_20:
    v20 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
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
    v21 = ((v20 >> 16) | v20) + 1;
    if ( (unsigned int)v21 < 0x40 )
      LODWORD(v21) = 64;
    *(_DWORD *)(a1 + 208) = v21;
    result = sub_22300B0(16LL * (unsigned int)v21, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 192) = result;
    if ( v10 )
    {
      v22 = *(unsigned int *)(a1 + 208);
      v23 = (_QWORD *)result;
      *(_QWORD *)(a1 + 200) = 0;
      v24 = 2LL * v9;
      v25 = v22;
      v26 = &v10[v24];
      v27 = (_QWORD *)(result + 16 * v22);
      if ( (_QWORD *)result != v27 )
      {
        do
        {
          *v23 = -4096;
          v23 += 2;
        }
        while ( v27 != v23 );
      }
      v28 = v10;
      for ( i = v25 - 1; v26 != v28; v28 += 2 )
      {
        v30 = *v28;
        if ( *v28 != -8192 && v30 != -4096 )
        {
          if ( !v25 )
          {
            *(_QWORD *)&dword_0 = *v28;
            BUG();
          }
          v31 = i & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v32 = (_QWORD *)(result + 16LL * v31);
          v33 = *v32;
          if ( *v32 != v30 && v33 != -4096 )
          {
            v66 = 1;
            v63 = nullptr;
            while ( 1 )
            {
              if ( v33 == -8192 && !v63 )
                v63 = v32;
              v31 = i & (v66 + v31);
              v32 = (_QWORD *)(result + 16LL * v31);
              v33 = *v32;
              if ( v30 == *v32 )
                break;
              if ( v33 == -4096 )
              {
                if ( v63 )
                  v32 = v63;
                break;
              }
              ++v66;
            }
          }
          *v32 = v30;
          v34 = v28[1];
          ++*(_DWORD *)(a1 + 200);
          v32[1] = v34;
        }
      }
      operator delete(v10, v24 * 8, 8);
      result = *(_QWORD *)(a1 + 192);
      v35 = *(_DWORD *)(a1 + 208);
      LODWORD(a4) = *(_DWORD *)(a1 + 200) + 1;
    }
    else
    {
      v57 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 200) = 0;
      v35 = v57;
      v58 = (_QWORD *)(result + 16 * v57);
      if ( (_QWORD *)result != v58 )
      {
        v59 = (_QWORD *)result;
        do
        {
          *v59 = -4096;
          v59 += 2;
        }
        while ( v58 != v59 );
      }
      LODWORD(a4) = 1;
    }
    if ( v35 )
    {
      v36 = v35 - 1;
      v37 = (v35 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v16 = (__int64 *)(result + 16LL * v37);
      v19 = *v16;
      if ( a2 != *v16 )
      {
        if ( v19 != -4096 )
        {
          v64 = (__int64 *)(result + 16LL * (v36 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4))));
          v65 = 1;
          v16 = nullptr;
          while ( 1 )
          {
            if ( v19 == -8192 && !v16 )
              v16 = v64;
            v37 = v36 & (v65 + v37);
            v64 = (__int64 *)(result + 16LL * v37);
            v19 = *v64;
            if ( a2 == *v64 )
            {
              v16 = (__int64 *)(result + 16LL * v37);
              goto LABEL_8;
            }
            if ( v19 == -4096 )
              break;
            ++v65;
          }
          if ( v16 )
            goto LABEL_7;
          v16 = (__int64 *)(result + 16LL * v37);
        }
        goto LABEL_36;
      }
LABEL_8:
      *(_DWORD *)(a1 + 200) = a4;
      if ( v19 != -4096 )
        --*(_DWORD *)(a1 + 204);
      goto LABEL_10;
    }
LABEL_106:
    ++*(_DWORD *)(a1 + 200);
    BUG();
  }
LABEL_3:
  v16[1] = a3;
  return result;
}
