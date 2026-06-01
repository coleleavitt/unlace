_DWORD *__fastcall sub_FABD70(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  int v8; // ebx
  int *v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  _DWORD *v12; // rcx
  int v13; // r10d
  int *v14; // r9
  _DWORD *i; // rdx
  int *v16; // rdx
  int j; // ebx
  int v18; // ecx
  unsigned int v19; // r8d
  _DWORD *v20; // rdi
  int v21; // r11d
  int v22; // ecx
  _DWORD *k; // rdx
  int v24; // r13d
  _DWORD *v25; // r14

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
  result = (_DWORD *)sub_220C370(8LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = &result[2 * *(unsigned int *)(a1 + 16)];
    v13 = *(_DWORD *)(a1 + 16);
    v14 = &v9[2 * v8];
    for ( i = result; v12 != i; i += 2 )
      *i = -1;
    v16 = v9;
    for ( j = v13 - 1; v14 != v16; v20[1] = v22 )
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( (unsigned int)(*v16 + 2) > 1 )
          break;
        v16 += 2;
        if ( v14 == v16 )
          return (_DWORD *)operator delete();
      }
      if ( !v13 )
      {
        dword_0 = 0;
        BUG();
      }
      v19 = j & (37 * v18);
      v20 = &result[2 * v19];
      v21 = *v20;
      if ( v18 != *v20 )
      {
        v24 = 1;
        v25 = nullptr;
        if ( v21 != -1 )
        {
          while ( 1 )
          {
            if ( !v25 && v21 == -2 )
              v25 = v20;
            v19 = j & (v24 + v19);
            v20 = &result[2 * v19];
            v21 = *v20;
            if ( v18 == *v20 )
              break;
            if ( v21 == -1 )
            {
              if ( v25 )
                v20 = v25;
              break;
            }
            ++v24;
          }
        }
      }
      *v20 = v18;
      v22 = v16[1];
      v16 += 2;
      ++*(_DWORD *)(a1 + 8);
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * *(unsigned int *)(a1 + 16)]; k != result; result += 2 )
      *result = -1;
  }
  return result;
}

