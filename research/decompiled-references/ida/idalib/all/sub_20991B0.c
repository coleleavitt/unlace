__int64 *__fastcall sub_20991B0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 *v8; // rbx
  unsigned int v9; // eax
  __int64 *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 *v13; // r13
  __int64 *i; // rdx
  __int64 *v15; // rbp
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *j; // rdx
  int v24; // r9d
  __int64 *v25; // r10

  v6 = (unsigned int)(a2 - 1);
  v7 = *((unsigned int *)a1 + 4);
  v8 = *a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v9 < 0x40 )
    v9 = 64;
  *((_DWORD *)a1 + 4) = v9;
  result = (__int64 *)sub_22300B0(96LL * v9, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v8 )
  {
    v11 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v12 = 96 * v7;
    v13 = &v8[12 * v7];
    for ( i = &result[12 * v11]; i != result; result += 12 )
      *result = -4096;
    if ( v13 != v8 )
    {
      v15 = v8;
      do
      {
        v16 = *v15;
        if ( *v15 != -8192 && v16 != -4096 )
        {
          v17 = *((_DWORD *)a1 + 4);
          if ( !v17 )
          {
            *(_QWORD *)&dword_0 = *v15;
            BUG();
          }
          v18 = v17 - 1;
          v19 = v18 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v20 = &(*a1)[12 * v19];
          v21 = *v20;
          if ( v16 != *v20 )
          {
            v24 = 1;
            v25 = nullptr;
            if ( v21 != -4096 )
            {
              while ( 1 )
              {
                if ( v21 == -8192 && !v25 )
                  v25 = v20;
                v19 = v18 & (v24 + v19);
                v20 = &(*a1)[12 * v19];
                v21 = *v20;
                if ( v16 == *v20 )
                  break;
                if ( v21 == -4096 )
                {
                  if ( v25 )
                    v20 = v25;
                  break;
                }
                ++v24;
              }
            }
          }
          *v20 = v16;
          sub_2236950(v20 + 1, v20 + 4, 8, v15 + 4, v15 + 1);
          ++*((_DWORD *)a1 + 2);
          if ( !*((_BYTE *)v15 + 28) )
            free((void *)v15[1]);
        }
        v15 += 12;
      }
      while ( v13 != v15 );
    }
    return (__int64 *)operator delete(v8, v12, 8);
  }
  else
  {
    v22 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[12 * v22]; j != result; result += 12 )
      *result = -4096;
  }
  return result;
}
