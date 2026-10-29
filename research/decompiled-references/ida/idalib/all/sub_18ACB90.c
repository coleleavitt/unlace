_QWORD *__fastcall sub_18ACB90(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // r15
  _QWORD *i; // rdx
  _QWORD *v16; // r13
  int v17; // r14d
  unsigned int v18; // eax
  __int64 *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *j; // rdx
  int v24; // r8d
  __int64 *v25; // r9
  _QWORD *v26; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD **)a1;
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
    v13 = 16 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = &v9[(unsigned __int64)v13 / 8];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -1;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        while ( (unsigned __int64)(*v16 + 2LL) <= 1 )
        {
          v16 += 2;
          if ( v14 == v16 )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
        v17 = *(_DWORD *)(a1 + 16);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *v16;
          BUG();
        }
        v26 = *(_QWORD **)a1;
        v18 = (v17 - 1) & sub_FDE780(*v16);
        v19 = &v26[2 * v18];
        v20 = *v19;
        if ( *v16 != *v19 )
        {
          v24 = 1;
          v25 = nullptr;
          if ( v20 != -1 )
          {
            while ( 1 )
            {
              if ( !v25 && v20 == -2 )
                v25 = v19;
              v18 = (v17 - 1) & (v24 + v18);
              v19 = &v26[2 * v18];
              v20 = *v19;
              if ( *v16 == *v19 )
                break;
              if ( v20 == -1 )
              {
                if ( v25 )
                  v19 = v25;
                break;
              }
              ++v24;
            }
          }
        }
        v21 = *v16;
        v16 += 2;
        *v19 = v21;
        *((_DWORD *)v19 + 2) = *((_DWORD *)v16 - 2);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v22 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v22]; j != result; result += 2 )
      *result = -1;
  }
  return result;
}
