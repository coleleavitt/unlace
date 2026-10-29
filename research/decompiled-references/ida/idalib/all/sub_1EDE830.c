char *__fastcall sub_1EDE830(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // edi
  char *v11; // rax
  char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 *v15; // r13
  int v16; // r14d
  size_t v17; // rdx
  __int64 *v18; // rax
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // edx
  char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  char *result; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  int v28; // r11d
  char *v29; // r15

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
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
  v11 = (char *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  v12 = v11;
  *(_QWORD *)a1 = v11;
  if ( v9 )
  {
    v13 = *(unsigned int *)(a1 + 16);
    v14 = 8 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v15 = &v9[(unsigned __int64)v14 / 8];
    v16 = v13;
    v17 = 8 * v13;
    if ( v11 != &v11[v17] )
      v12 = (char *)memset(v11, 255, v17);
    if ( v15 != v9 )
    {
      v18 = v9;
      v19 = v16 - 1;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( (unsigned __int64)(*v18 + 2) > 1 )
            break;
          if ( v15 == ++v18 )
            return (char *)operator delete(v9, v14, 8);
        }
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *v18;
          BUG();
        }
        v21 = v19 & (((0xBF58476D1CE4E5B9LL * v20) >> 31) ^ (484763065 * v20));
        v22 = &v12[8 * v21];
        v23 = *(_QWORD *)v22;
        if ( v20 != *(_QWORD *)v22 )
        {
          v28 = 1;
          v29 = nullptr;
          if ( v23 != -1 )
          {
            while ( 1 )
            {
              if ( !v29 && v23 == -2 )
                v29 = v22;
              v21 = v19 & (v28 + v21);
              v22 = &v12[8 * v21];
              v23 = *(_QWORD *)v22;
              if ( v20 == *(_QWORD *)v22 )
                break;
              if ( v23 == -1 )
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
        *(_QWORD *)v22 = v24;
      }
      while ( v15 != v18 );
    }
    return (char *)operator delete(v9, v14, 8);
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v27 = 8 * v26;
    result = &v11[v27];
    if ( v12 != result )
      return (char *)memset(v12, 255, v27);
  }
  return result;
}
