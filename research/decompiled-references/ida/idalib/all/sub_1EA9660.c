__int64 __fastcall sub_1EA9660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // r15
  _QWORD *m; // rax
  __int64 *n; // r14
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rdi
  int v23; // ebp
  __int64 result; // rax
  __int64 *v25; // rdx
  __int64 v26; // rcx
  int v27; // ebp
  int v28; // ebp
  __int64 v29; // rsi
  __int64 v30; // rdx
  _QWORD *ii; // rdx
  int v32; // edi
  __int64 *v33; // rsi
  __int64 *v34; // r14
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 *v40; // r15
  _QWORD *i; // rax
  __int64 *j; // r13
  unsigned int v43; // eax
  __int64 *v44; // rsi
  __int64 v45; // rdi
  int v46; // ebp
  int v47; // ebp
  __int64 v48; // rsi
  int v49; // r8d
  __int64 *v50; // rdi
  __int64 v51; // rdx
  _QWORD *k; // rdx
  int v53; // r10d
  __int64 *v54; // r9
  int v55; // r10d
  __int64 *v56; // r9
  int v57; // r8d
  int v58; // [rsp+4h] [rbp-44h]
  int v59; // [rsp+4h] [rbp-44h]
  __int64 v60; // [rsp+8h] [rbp-40h]
  __int64 v61; // [rsp+8h] [rbp-40h]

  v8 = *(unsigned int *)(a1 + 4960);
  v9 = *(__int64 **)(a1 + 4944);
  if ( !(_DWORD)v8 )
    goto LABEL_2;
  v23 = v8 - 1;
  result = v23 & (unsigned int)sub_FDE780(a2);
  v25 = &v9[2 * (unsigned int)result];
  v26 = *v25;
  if ( a2 != *v25 )
  {
    v32 = 1;
    v33 = nullptr;
    if ( v26 != -1 )
    {
      while ( 1 )
      {
        if ( !v33 && v26 == -2 )
          v33 = v25;
        a5 = (unsigned int)(v32 + 1);
        result = v23 & (unsigned int)(v32 + result);
        v25 = &v9[2 * (unsigned int)result];
        v26 = *v25;
        if ( a2 == *v25 )
          goto LABEL_15;
        if ( v26 == -1 )
          break;
        ++v32;
      }
      if ( v33 )
        v25 = v33;
    }
    v8 = *(unsigned int *)(a1 + 4960);
    a4 = (unsigned int)(*(_DWORD *)(a1 + 4952) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v8) )
    {
      result = (unsigned int)(v8 - *(_DWORD *)(a1 + 4956) - a4);
      if ( (unsigned int)result > (unsigned int)v8 >> 3 )
        goto LABEL_21;
      v34 = *(__int64 **)(a1 + 4944);
      v35 = ((((((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
                 | (unsigned int)(v8 - 1)
                 | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
               | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
               | (unsigned int)(v8 - 1)
               | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
               | (unsigned int)(v8 - 1)
               | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
             | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
               | (unsigned int)(v8 - 1)
               | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
             | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
           | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
           | (unsigned int)(v8 - 1)
           | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1))
          + 1;
      if ( (unsigned int)v35 < 0x40 )
        LODWORD(v35) = 64;
      *(_DWORD *)(a1 + 4960) = v35;
      v36 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v35, 8, 64, a4, a5, a6);
      v37 = v36;
      *(_QWORD *)(a1 + 4944) = v36;
      if ( v34 )
      {
        v38 = *(unsigned int *)(a1 + 4960);
        v39 = 2 * v8;
        *(_QWORD *)(a1 + 4952) = 0;
        v40 = &v34[v39];
        for ( i = &v37[2 * v38]; i != v37; v37 += 2 )
          *v37 = -1;
        for ( j = v34; v40 != j; j += 2 )
        {
          v19 = *j;
          if ( (unsigned __int64)(*j + 2) > 1 )
          {
            v59 = *(_DWORD *)(a1 + 4960);
            if ( !v59 )
            {
LABEL_96:
              *(_QWORD *)&dword_0 = v19;
              BUG();
            }
            v61 = *(_QWORD *)(a1 + 4944);
            v43 = (v59 - 1) & sub_FDE780(v19);
            v44 = (__int64 *)(v61 + 16LL * v43);
            v45 = *v44;
            if ( *j != *v44 )
            {
              v55 = 1;
              v56 = nullptr;
              if ( v45 != -1 )
              {
                while ( 1 )
                {
                  if ( !v56 && v45 == -2 )
                    v56 = v44;
                  v43 = (v59 - 1) & (v55 + v43);
                  v44 = (__int64 *)(v61 + 16LL * v43);
                  v45 = *v44;
                  if ( *j == *v44 )
                    break;
                  if ( v45 == -1 )
                  {
                    if ( v56 )
                      v44 = v56;
                    break;
                  }
                  ++v55;
                }
              }
            }
            *v44 = *j;
            *((_BYTE *)v44 + 8) = *((_BYTE *)j + 8);
            ++*(_DWORD *)(a1 + 4952);
          }
        }
        operator delete(v34, v39 * 8, 8);
        v37 = *(_QWORD **)(a1 + 4944);
        v46 = *(_DWORD *)(a1 + 4960);
      }
      else
      {
        v51 = *(unsigned int *)(a1 + 4960);
        *(_QWORD *)(a1 + 4952) = 0;
        v46 = v51;
        for ( k = &v36[2 * v51]; k != v36; v36 += 2 )
          *v36 = -1;
      }
      if ( v46 )
      {
        v47 = v46 - 1;
        result = v47 & (unsigned int)sub_FDE780(a2);
        v25 = &v37[2 * (unsigned int)result];
        v48 = *v25;
        if ( a2 != *v25 )
        {
          v49 = 1;
          v50 = nullptr;
          LODWORD(a4) = *(_DWORD *)(a1 + 4952) + 1;
          if ( v48 != -1 )
          {
            while ( 1 )
            {
              if ( !v50 && v48 == -2 )
                v50 = v25;
              result = v47 & (unsigned int)(v49 + result);
              v25 = &v37[2 * (unsigned int)result];
              v48 = *v25;
              if ( a2 == *v25 )
                break;
              if ( v48 == -1 )
              {
LABEL_52:
                if ( v50 )
                  v25 = v50;
                goto LABEL_21;
              }
              ++v49;
            }
          }
          goto LABEL_21;
        }
LABEL_20:
        result = *(unsigned int *)(a1 + 4952);
        LODWORD(a4) = result + 1;
LABEL_21:
        *(_DWORD *)(a1 + 4952) = a4;
        if ( *v25 != -1 )
          --*(_DWORD *)(a1 + 4956);
        *v25 = a2;
        *((_BYTE *)v25 + 8) = 0;
        return result;
      }
LABEL_97:
      ++*(_DWORD *)(a1 + 4952);
      BUG();
    }
    v9 = *(__int64 **)(a1 + 4944);
LABEL_2:
    v10 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v11 = ((v10 >> 16) | v10) + 1;
    if ( (unsigned int)v11 < 0x40 )
      LODWORD(v11) = 64;
    *(_DWORD *)(a1 + 4960) = v11;
    v12 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v11, 8, 64, a4, a5, a6);
    v13 = v12;
    *(_QWORD *)(a1 + 4944) = v12;
    if ( v9 )
    {
      v14 = *(unsigned int *)(a1 + 4960);
      v15 = 2 * v8;
      *(_QWORD *)(a1 + 4952) = 0;
      v16 = &v9[v15];
      for ( m = &v13[2 * v14]; m != v13; v13 += 2 )
        *v13 = -1;
      for ( n = v9; v16 != n; n += 2 )
      {
        v19 = *n;
        if ( (unsigned __int64)(*n + 2) > 1 )
        {
          v58 = *(_DWORD *)(a1 + 4960);
          if ( !v58 )
            goto LABEL_96;
          v60 = *(_QWORD *)(a1 + 4944);
          v20 = (v58 - 1) & sub_FDE780(v19);
          v21 = (__int64 *)(v60 + 16LL * v20);
          v22 = *v21;
          if ( *n != *v21 )
          {
            v53 = 1;
            v54 = nullptr;
            if ( v22 != -1 )
            {
              while ( 1 )
              {
                if ( v22 == -2 && !v54 )
                  v54 = v21;
                v20 = (v58 - 1) & (v53 + v20);
                v21 = (__int64 *)(v60 + 16LL * v20);
                v22 = *v21;
                if ( *n == *v21 )
                  break;
                if ( v22 == -1 )
                {
                  if ( v54 )
                    v21 = v54;
                  break;
                }
                ++v53;
              }
            }
          }
          *v21 = *n;
          *((_BYTE *)v21 + 8) = *((_BYTE *)n + 8);
          ++*(_DWORD *)(a1 + 4952);
        }
      }
      operator delete(v9, v15 * 8, 8);
      v13 = *(_QWORD **)(a1 + 4944);
      v27 = *(_DWORD *)(a1 + 4960);
    }
    else
    {
      v30 = *(unsigned int *)(a1 + 4960);
      *(_QWORD *)(a1 + 4952) = 0;
      v27 = v30;
      for ( ii = &v12[2 * v30]; ii != v12; v12 += 2 )
        *v12 = -1;
    }
    if ( v27 )
    {
      v28 = v27 - 1;
      result = v28 & (unsigned int)sub_FDE780(a2);
      v25 = &v13[2 * (unsigned int)result];
      v29 = *v25;
      if ( a2 != *v25 )
      {
        v57 = 1;
        v50 = nullptr;
        LODWORD(a4) = *(_DWORD *)(a1 + 4952) + 1;
        if ( v29 != -1 )
        {
          while ( 1 )
          {
            if ( !v50 && v29 == -2 )
              v50 = v25;
            result = v28 & (unsigned int)(v57 + result);
            v25 = &v13[2 * (unsigned int)result];
            v29 = *v25;
            if ( a2 == *v25 )
              break;
            if ( v29 == -1 )
              goto LABEL_52;
            ++v57;
          }
        }
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    goto LABEL_97;
  }
LABEL_15:
  if ( *((_BYTE *)v25 + 8) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 24) + 232LL))(a1 - 24, a2);
  return result;
}
