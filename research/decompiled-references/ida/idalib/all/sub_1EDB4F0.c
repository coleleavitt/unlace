__int64 *__fastcall sub_1EDB4F0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // r13
  __int64 *i; // rdx
  char ***v16; // rbp
  char **v17; // rax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 *v23; // rdi
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
  result = (__int64 *)sub_22300B0(40LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 40 * v8;
    v14 = &v9[5 * v8];
    for ( i = &result[5 * v12]; i != result; result += 5 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = (char ***)v9;
      do
      {
        v17 = *v16;
        if ( *v16 != (char **)-8192LL && v17 != (char **)-4096LL )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (__int64)&(*a1)[5 * v20];
          v22 = *(_QWORD *)v21;
          if ( v17 != *(char ***)v21 )
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
                v21 = (__int64)&(*a1)[5 * v20];
                v22 = *(_QWORD *)v21;
                if ( v17 == *(char ***)v21 )
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
          *(_QWORD *)(v21 + 8) = v21 + 24;
          *(_QWORD *)(v21 + 16) = 0x200000000LL;
          if ( *((_DWORD *)v16 + 4) )
            sub_1EB3E90((char ***)(v21 + 8), v16 + 1);
          v23 = (__int64 *)v16[1];
          ++*((_DWORD *)a1 + 2);
          if ( v23 != (__int64 *)(v16 + 3) )
            free(v23);
        }
        v16 += 5;
      }
      while ( v14 != (__int64 *)v16 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[5 * v24]; j != result; result += 5 )
      *result = -4096;
  }
  return result;
}
