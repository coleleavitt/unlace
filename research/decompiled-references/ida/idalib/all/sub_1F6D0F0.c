_DWORD *__fastcall sub_1F6D0F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  int *v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rsi
  _DWORD *v13; // rcx
  int v14; // r9d
  int *v15; // r8
  _DWORD *i; // rdx
  int *v17; // rdx
  int j; // ebx
  int v19; // ecx
  unsigned int v20; // r11d
  int *v21; // rdi
  int v22; // r10d
  int v23; // ecx
  _DWORD *k; // rdx
  int v25; // r13d
  int *v26; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(int **)a1;
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
  result = (_DWORD *)sub_22300B0(8LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 8LL * v8;
    v13 = &result[2 * *(unsigned int *)(a1 + 16)];
    v14 = *(_DWORD *)(a1 + 16);
    v15 = &v9[(unsigned __int64)v12 / 4];
    for ( i = result; v13 != i; i += 2 )
      *i = 0;
    v17 = v9;
    for ( j = v14 - 1; v15 != v17; *((_BYTE *)v21 + 4) = v23 )
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( (unsigned int)(*v17 + 1) > 1 )
          break;
        v17 += 2;
        if ( v15 == v17 )
          return (_DWORD *)operator delete(v9, v12, 4);
      }
      if ( !v14 )
      {
        dword_0 = *v17;
        BUG();
      }
      v20 = j & v19;
      v21 = &result[2 * (j & v19)];
      v22 = *v21;
      if ( v19 != *v21 )
      {
        v25 = 1;
        v26 = nullptr;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( !v26 && v22 == -1 )
              v26 = v21;
            v20 = j & (v25 + v20);
            v21 = &result[2 * v20];
            v22 = *v21;
            if ( v19 == *v21 )
              break;
            if ( !v22 )
            {
              if ( v26 )
                v21 = v26;
              break;
            }
            ++v25;
          }
        }
      }
      v23 = *v17;
      v17 += 2;
      *v21 = v23;
      LOBYTE(v23) = *((_BYTE *)v17 - 4);
      ++*(_DWORD *)(a1 + 8);
    }
    return (_DWORD *)operator delete(v9, v12, 4);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * *(unsigned int *)(a1 + 16)]; k != result; result += 2 )
      *result = 0;
  }
  return result;
}
