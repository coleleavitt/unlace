char *__fastcall sub_1F8D710(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  int *v9; // r12
  unsigned int v10; // edi
  char *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  int *v15; // r13
  int v16; // r14d
  size_t v17; // rdx
  int *v18; // rax
  int i; // r9d
  int v20; // edx
  unsigned int v21; // r8d
  char *v22; // rsi
  int v23; // edi
  int v24; // edx
  char *result; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  int v28; // r10d
  char *v29; // r11

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
  v11 = (char *)sub_22300B0(4LL * v10, 4, a3, a4, a5, a6);
  v12 = v11;
  *(_QWORD *)a1 = v11;
  if ( v9 )
  {
    v13 = *(unsigned int *)(a1 + 16);
    v14 = 4 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v15 = &v9[(unsigned __int64)v14 / 4];
    v16 = v13;
    v17 = 4 * v13;
    if ( v11 != &v11[v17] )
      v12 = (char *)memset(v11, 0, v17);
    v18 = v9;
    for ( i = v16 - 1; v15 != v18; *(_DWORD *)v22 = v24 )
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( (unsigned int)(*v18 + 1) > 1 )
          break;
        if ( v15 == ++v18 )
          return (char *)operator delete(v9, v14, 4);
      }
      if ( !v16 )
      {
        dword_0 = *v18;
        BUG();
      }
      v21 = i & v20;
      v22 = &v12[4 * (i & v20)];
      v23 = *(_DWORD *)v22;
      if ( v20 != *(_DWORD *)v22 )
      {
        v28 = 1;
        v29 = nullptr;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( !v29 && v23 == -1 )
              v29 = v22;
            v21 = i & (v28 + v21);
            v22 = &v12[4 * v21];
            v23 = *(_DWORD *)v22;
            if ( v20 == *(_DWORD *)v22 )
              break;
            if ( !v23 )
            {
              if ( v29 )
                v22 = v29;
              break;
            }
            ++v28;
          }
        }
      }
      v24 = *v18++;
      ++*(_DWORD *)(a1 + 8);
    }
    return (char *)operator delete(v9, v14, 4);
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v27 = 4 * v26;
    result = &v11[v27];
    if ( v12 != result )
      return (char *)memset(v12, 0, v27);
  }
  return result;
}
