_QWORD *__fastcall sub_AB1D50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // r8
  _QWORD *i; // rdx
  __int64 *v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r9d
  unsigned int v20; // edi
  _QWORD *v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rdx
  _QWORD *j; // rdx
  int v25; // r14d
  _QWORD *v26; // rbx

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
    v14 = &v9[v13];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *(_DWORD *)(a1 + 16);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
          v22 = *v21;
          if ( v17 != *v21 )
          {
            v25 = 1;
            v26 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v26 )
                  v26 = v21;
                v20 = v19 & (v25 + v20);
                v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
                v22 = *v21;
                if ( v17 == *v21 )
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
          *v21 = v17;
          v21[1] = v16[1];
          ++*(_DWORD *)(a1 + 8);
        }
        v16 += 2;
      }
      while ( v14 != v16 );
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
