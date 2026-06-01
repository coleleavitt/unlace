_QWORD *__fastcall sub_1F84FE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rsi
  __int64 *v13; // rdi
  _QWORD *i; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r8d
  unsigned int v19; // r9d
  _QWORD *v20; // rdx
  __int64 v21; // r11
  __int64 v22; // rcx
  _QWORD *j; // rdx
  int v24; // ebx
  _QWORD *v25; // r13

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
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 16LL * v8;
    v13 = &v9[(unsigned __int64)v12 / 8];
    for ( i = &result[2 * *(unsigned int *)(a1 + 16)]; i != result; result += 2 )
      *result = 1;
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (unsigned __int64)(*v15 - 1) > 1 )
            break;
          v15 += 2;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v9, v12, 8);
        }
        v17 = *(_DWORD *)(a1 + 16);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *v15;
          BUG();
        }
        v18 = v17 - 1;
        v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
        v21 = *v20;
        if ( v16 != *v20 )
        {
          v24 = 1;
          v25 = nullptr;
          if ( v21 != 1 )
          {
            while ( 1 )
            {
              if ( !v25 && v21 == 2 )
                v25 = v20;
              v19 = v18 & (v24 + v19);
              v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v19);
              v21 = *v20;
              if ( v16 == *v20 )
                break;
              if ( v21 == 1 )
              {
                if ( v25 )
                  v20 = v25;
                break;
              }
              ++v24;
            }
          }
        }
        v22 = *v15;
        v15 += 2;
        *v20 = v22;
        v20[1] = *(v15 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete(v9, v12, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * *(unsigned int *)(a1 + 16)]; j != result; result += 2 )
      *result = 1;
  }
  return result;
}
