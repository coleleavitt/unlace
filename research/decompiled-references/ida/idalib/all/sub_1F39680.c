_QWORD *__fastcall sub_1F39680(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // r8d
  __int64 *v16; // rdi
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  int v19; // r11d
  __int64 v20; // r9
  unsigned int v21; // r10d
  _QWORD *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rdx
  _QWORD *i; // rdx
  int v28; // r13d
  _QWORD *v29; // r14

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
    *(_QWORD *)(a1 + 8) = 0;
    v14 = 16LL * v8;
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
          *(_QWORD *)&dword_0 = *v18;
          BUG();
        }
        v21 = v19 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v22 = &result[2 * v21];
        v23 = *v22;
        if ( v20 != *v22 )
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
              v22 = &result[2 * v21];
              v23 = *v22;
              if ( v20 == *v22 )
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
        v24 = *v18;
        v18 += 2;
        *v22 = v24;
        v25 = *(v18 - 1);
        ++*(_DWORD *)(a1 + 8);
        v22[1] = v25;
      }
      while ( v16 != v18 );
    }
    return (_QWORD *)operator delete(v9, v14, 8);
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( i = &result[2 * v26]; i != result; result += 2 )
      *result = -1;
  }
  return result;
}
