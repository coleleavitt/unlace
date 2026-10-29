_DWORD *__fastcall sub_1E61FD0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  int *v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // r9d
  int *v16; // r8
  _DWORD *v17; // rcx
  int *v18; // rdx
  int i; // ebx
  int v20; // edi
  unsigned int v21; // r11d
  int *v22; // rcx
  int v23; // r10d
  int v24; // edi
  int v25; // edi
  _DWORD *j; // rdx
  int v27; // r13d
  int *v28; // r14

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
  result = (_DWORD *)sub_22300B0(16LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = result;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = 16LL * v8;
    v15 = v12;
    v16 = &v9[(unsigned __int64)v14 / 4];
    v17 = &result[4 * v12];
    if ( result != v17 )
    {
      do
      {
        *v13 = 0;
        v13 += 4;
      }
      while ( v17 != v13 );
    }
    v18 = v9;
    for ( i = v15 - 1; v16 != v18; v22[3] = v25 )
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( (unsigned int)(*v18 + 1) > 1 )
          break;
        v18 += 4;
        if ( v16 == v18 )
          return (_DWORD *)operator delete(v9, v14, 4);
      }
      if ( !v15 )
      {
        dword_0 = *v18;
        BUG();
      }
      v21 = i & v20;
      v22 = &result[4 * (i & v20)];
      v23 = *v22;
      if ( v20 != *v22 )
      {
        v27 = 1;
        v28 = nullptr;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( v23 == -1 && !v28 )
              v28 = v22;
            v21 = i & (v27 + v21);
            v22 = &result[4 * v21];
            v23 = *v22;
            if ( v20 == *v22 )
              break;
            if ( !v23 )
            {
              if ( v28 )
                v22 = v28;
              break;
            }
            ++v27;
          }
        }
      }
      v24 = *v18;
      v18 += 4;
      *v22 = v24;
      *(_QWORD *)(v22 + 1) = *(_QWORD *)(v18 - 3);
      v25 = *(v18 - 1);
      ++*(_DWORD *)(a1 + 8);
    }
    return (_DWORD *)operator delete(v9, v14, 4);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[4 * *(unsigned int *)(a1 + 16)]; j != result; result += 4 )
      *result = 0;
  }
  return result;
}
