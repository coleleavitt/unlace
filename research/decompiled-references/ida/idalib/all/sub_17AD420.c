__int64 *__fastcall sub_17AD420(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // r13
  __int64 *i; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rax
  int v18; // edx
  int v19; // edi
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rsi
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 *j; // rdx
  int v26; // r9d
  __int64 v27; // r10

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  result = (__int64 *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 24 * v8;
    v14 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (__int64)&(*a1)[3 * v20];
          v22 = *(_QWORD *)v21;
          if ( v17 != *(_QWORD *)v21 )
          {
            v26 = 1;
            v27 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v27 )
                  v27 = v21;
                v20 = v19 & (v26 + v20);
                v21 = (__int64)&(*a1)[3 * v20];
                v22 = *(_QWORD *)v21;
                if ( v17 == *(_QWORD *)v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v27 )
                    v21 = v27;
                  break;
                }
                ++v26;
              }
            }
          }
          *(_QWORD *)v21 = v17;
          *(_DWORD *)(v21 + 16) = *((_DWORD *)v16 + 4);
          *(_QWORD *)(v21 + 8) = v16[1];
          *((_DWORD *)v16 + 4) = 0;
          ++*((_DWORD *)a1 + 2);
          if ( *((_DWORD *)v16 + 4) > 0x40u )
          {
            v23 = (void *)v16[1];
            if ( v23 )
              operator delete[](v23);
          }
        }
        v16 += 3;
      }
      while ( v14 != v16 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[3 * v24]; j != result; result += 3 )
      *result = -4096;
  }
  return result;
}
