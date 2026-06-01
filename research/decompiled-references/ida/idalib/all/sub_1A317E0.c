_DWORD *__fastcall sub_1A317E0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  int *v9; // rbp
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r10d
  int *v15; // r9
  _DWORD *v16; // rcx
  _DWORD *i; // rdx
  int *v18; // rdx
  int j; // ebx
  int v20; // ecx
  unsigned int v21; // r8d
  _DWORD *v22; // rdi
  int v23; // r11d
  __int64 v24; // rcx
  _DWORD *k; // rdx
  int v26; // r13d
  _DWORD *v27; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = (int *)*a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = (_DWORD *)sub_22300B0(12LL * v10, 4, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 12 * v8;
    v14 = v12;
    v15 = &v9[3 * v8];
    v16 = &result[3 * v12];
    for ( i = result; v16 != i; i += 3 )
      *i = -1;
    v18 = v9;
    for ( j = v14 - 1; v15 != v18; *(_QWORD *)(v22 + 1) = v24 )
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( (unsigned int)(*v18 + 2) > 1 )
          break;
        v18 += 3;
        if ( v15 == v18 )
          return (_DWORD *)operator delete(v9, v13, 4);
      }
      if ( !v14 )
      {
        dword_0 = 0;
        BUG();
      }
      v21 = j & (37 * v20);
      v22 = &result[3 * v21];
      v23 = *v22;
      if ( v20 != *v22 )
      {
        v26 = 1;
        v27 = nullptr;
        if ( v23 != -1 )
        {
          while ( 1 )
          {
            if ( !v27 && v23 == -2 )
              v27 = v22;
            v21 = j & (v26 + v21);
            v22 = &result[3 * v21];
            v23 = *v22;
            if ( v20 == *v22 )
              break;
            if ( v23 == -1 )
            {
              if ( v27 )
                v22 = v27;
              break;
            }
            ++v26;
          }
        }
      }
      *v22 = v20;
      v24 = *(_QWORD *)(v18 + 1);
      v18 += 3;
      ++*((_DWORD *)a1 + 2);
    }
    return (_DWORD *)operator delete(v9, v13, 4);
  }
  else
  {
    a1[1] = 0;
    for ( k = &result[3 * *((unsigned int *)a1 + 4)]; k != result; result += 3 )
      *result = -1;
  }
  return result;
}
