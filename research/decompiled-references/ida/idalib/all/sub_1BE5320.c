char *__fastcall sub_1BE5320(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // edi
  char *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r13
  size_t v15; // rdx
  __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // ecx
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  size_t v25; // rdx
  int v26; // r10d
  _QWORD *v27; // r11

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
  result = (char *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 8 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = &v9[(unsigned __int64)v13 / 8];
    v15 = 8 * v12;
    if ( result != &result[v15] )
      memset(result, 0, v15);
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( (unsigned __int64)(*v16 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            break;
          if ( v14 == ++v16 )
            return (char *)operator delete(v9, v13, 8);
        }
        v18 = *(_DWORD *)(a1 + 16);
        if ( !v18 )
        {
          *(_QWORD *)&dword_0 = *v16;
          BUG();
        }
        v19 = v18 - 1;
        v20 = (v18 - 1) & (v17 ^ (v17 >> 9));
        v21 = (_QWORD *)(*(_QWORD *)a1 + 8LL * v20);
        v22 = *v21;
        if ( v17 != *v21 )
        {
          v26 = 1;
          v27 = nullptr;
          if ( v22 )
          {
            while ( 1 )
            {
              if ( !v27 && v22 == -1 )
                v27 = v21;
              v20 = v19 & (v26 + v20);
              v21 = (_QWORD *)(*(_QWORD *)a1 + 8LL * v20);
              v22 = *v21;
              if ( v17 == *v21 )
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
        v23 = *v16++;
        *v21 = v23;
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v14 != v16 );
    }
    return (char *)operator delete(v9, v13, 8);
  }
  else
  {
    v24 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v25 = 8 * v24;
    if ( result != &result[v25] )
      return (char *)memset(result, 0, v25);
  }
  return result;
}
