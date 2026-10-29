_DWORD *__fastcall sub_FFFAB0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  int *v9; // rbp
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // rdx
  int v13; // r9d
  int *v14; // r8
  _DWORD *v15; // rcx
  _DWORD *i; // rdx
  int *v17; // rdx
  int j; // ebx
  int v19; // ecx
  unsigned int v20; // r11d
  int *v21; // rdi
  int v22; // r10d
  int v23; // ecx
  __int64 v24; // rcx
  _DWORD *k; // rdx
  int v26; // r13d
  int *v27; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
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
  result = (_DWORD *)sub_220C370(12LL * v10, 4, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v12;
    v14 = &v9[3 * v8];
    v15 = &result[3 * v12];
    for ( i = result; v15 != i; i += 3 )
      *i = 0;
    v17 = v9;
    for ( j = v13 - 1; v14 != v17; *(_QWORD *)(v21 + 1) = v24 )
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( (unsigned int)(*v17 + 1) > 1 )
          break;
        v17 += 3;
        if ( v14 == v17 )
          return (_DWORD *)operator delete();
      }
      if ( !v13 )
      {
        dword_0 = *v17;
        BUG();
      }
      v20 = j & v19;
      v21 = &result[3 * (j & v19)];
      v22 = *v21;
      if ( v19 != *v21 )
      {
        v26 = 1;
        v27 = nullptr;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( !v27 && v22 == -1 )
              v27 = v21;
            v20 = j & (v26 + v20);
            v21 = &result[3 * v20];
            v22 = *v21;
            if ( v19 == *v21 )
              break;
            if ( !v22 )
            {
              if ( v27 )
                v21 = v27;
              break;
            }
            ++v26;
          }
        }
      }
      v23 = *v17;
      v17 += 3;
      *v21 = v23;
      v24 = *((_QWORD *)v17 - 1);
      ++*(_DWORD *)(a1 + 8);
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[3 * *(unsigned int *)(a1 + 16)]; k != result; result += 3 )
      *result = 0;
  }
  return result;
}

