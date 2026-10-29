_QWORD *__fastcall sub_2099750(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r9d
  __int64 *v15; // r8
  _QWORD *i; // rdx
  __int64 *v17; // rdx
  int v18; // r11d
  __int64 v19; // rax
  unsigned int v20; // edi
  _QWORD *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  _QWORD *j; // rdx
  int v25; // r13d
  _QWORD *v26; // r14

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
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 2LL * v8;
    v14 = v12;
    v15 = &v9[v13];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v15 != v9 )
    {
      v17 = v9;
      v18 = v14 - 1;
      do
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
        {
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v20 = v18 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
          v22 = *v21;
          if ( v19 != *v21 )
          {
            v25 = 1;
            v26 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v26 )
                  v26 = v21;
                v20 = v18 & (v25 + v20);
                v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
                v22 = *v21;
                if ( v19 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v26 )
                    v21 = v26;
                  break;
                }
                ++v25;
              }
            }
          }
          *v21 = v19;
          v21[1] = v17[1];
          ++*(_DWORD *)(a1 + 8);
        }
        v17 += 2;
      }
      while ( v15 != v17 );
    }
    return (_QWORD *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v23 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v23]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
