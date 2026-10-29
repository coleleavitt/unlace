_QWORD *__fastcall sub_18988F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // r15
  _QWORD *i; // rdx
  _QWORD *v15; // rbx
  int v16; // r14d
  _QWORD *v17; // r13
  int v18; // r14d
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *j; // rdx
  int v25; // r8d
  _QWORD *v26; // r9

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD **)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(40LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 40 * v7;
    v13 = &v8[5 * v7];
    for ( i = &result[5 * v11]; i != result; result += 5 )
      *result = -1;
    if ( v13 != v8 )
    {
      v15 = v8;
      do
      {
        while ( (unsigned __int64)(*v15 + 2LL) <= 1 )
        {
          v15 += 5;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
        v16 = *(_DWORD *)(a1 + 16);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *v15;
          BUG();
        }
        v17 = *(_QWORD **)a1;
        v18 = v16 - 1;
        v19 = v18 & sub_FDE780(*v15);
        v20 = &v17[5 * v19];
        v21 = *v20;
        if ( *v15 != *v20 )
        {
          v25 = 1;
          v26 = nullptr;
          if ( v21 != -1 )
          {
            while ( 1 )
            {
              if ( !v26 && v21 == -2 )
                v26 = v20;
              v19 = v18 & (v25 + v19);
              v20 = &v17[5 * v19];
              v21 = *v20;
              if ( *v15 == *v20 )
                break;
              if ( v21 == -1 )
              {
                if ( v26 )
                  v20 = v26;
                break;
              }
              ++v25;
            }
          }
        }
        v22 = *v15;
        v15 += 5;
        *v20 = v22;
        v20[1] = *(v15 - 4);
        v20[2] = *(v15 - 3);
        v20[3] = *(v15 - 2);
        v20[4] = *(v15 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete(v8, v12, 8);
  }
  else
  {
    v23 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[5 * v23]; j != result; result += 5 )
      *result = -1;
  }
  return result;
}
