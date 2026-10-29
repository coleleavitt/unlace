_QWORD *__fastcall sub_1F63100(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r12d
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // r10d
  __int64 *v16; // r9
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  int v19; // r12d
  __int64 v20; // rdi
  unsigned int v21; // r8d
  _QWORD *v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rdi
  __int64 v25; // rdx
  _QWORD *i; // rdx
  int v27; // r14d
  _QWORD *v28; // r15

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(__int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = result;
    v14 = 16LL * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v15 = v12;
    v16 = &v9[(unsigned __int64)v14 / 8];
    v17 = &result[2 * v12];
    if ( result != v17 )
    {
      do
      {
        *v13 = -1;
        v13 += 2;
      }
      while ( v17 != v13 );
    }
    if ( v16 != v9 )
    {
      v18 = v9;
      v19 = v15 - 1;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( (unsigned __int64)(*v18 + 2) > 1 )
            break;
          v18 += 2;
          if ( v16 == v18 )
            return (_QWORD *)operator delete(v9, v14, 8);
        }
        if ( !v15 )
        {
          *(_QWORD *)&dword_0 = 0;
          BUG();
        }
        v21 = v19 & (((0xBF58476D1CE4E5B9LL * v20) >> 31) ^ (484763065 * v20));
        v22 = &result[2 * v21];
        v23 = *v22;
        if ( v20 != *v22 )
        {
          v27 = 1;
          v28 = nullptr;
          if ( v23 != -1 )
          {
            while ( 1 )
            {
              if ( !v28 && v23 == -2 )
                v28 = v22;
              v21 = v19 & (v27 + v21);
              v22 = &result[2 * v21];
              v23 = *v22;
              if ( v20 == *v22 )
                break;
              if ( v23 == -1 )
              {
                if ( v28 )
                  v22 = v28;
                break;
              }
              ++v27;
            }
          }
        }
        *v22 = v20;
        v24 = v18[1];
        v18 += 2;
        ++*(_DWORD *)(a1 + 8);
        v22[1] = v24;
      }
      while ( v16 != v18 );
    }
    return (_QWORD *)operator delete(v9, v14, 8);
  }
  else
  {
    v25 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( i = &result[2 * v25]; i != result; result += 2 )
      *result = -1;
  }
  return result;
}
