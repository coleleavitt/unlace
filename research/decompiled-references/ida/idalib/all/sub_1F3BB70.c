_QWORD *__fastcall sub_1F3BB70(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  _QWORD *j; // rdx
  int v25; // r13d
  __int64 v26; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (__int64 *)*a1;
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
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
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
          v21 = *a1 + 16LL * v20;
          v22 = *(_QWORD *)v21;
          if ( v19 != *(_QWORD *)v21 )
          {
            v25 = 1;
            v26 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v26 )
                  v26 = v21;
                v20 = v18 & (v25 + v20);
                v21 = *a1 + 16LL * v20;
                v22 = *(_QWORD *)v21;
                if ( v19 == *(_QWORD *)v21 )
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
          *(_QWORD *)v21 = v19;
          *(_DWORD *)(v21 + 8) = *((_DWORD *)v17 + 2);
          ++*((_DWORD *)a1 + 2);
        }
        v17 += 2;
      }
      while ( v15 != v17 );
    }
    return (_QWORD *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( j = &result[2 * v23]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
