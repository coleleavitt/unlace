__int64 *__fastcall sub_10CF1C0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 *v9; // rbx
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r13
  __int64 *i; // rdx
  char ***v15; // rbp
  char **v16; // rax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 *j; // rdx
  int v25; // r9d
  __int64 v26; // r10

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
  result = (__int64 *)sub_220C370(72LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[9 * v8];
    for ( i = &result[9 * v12]; i != result; result += 9 )
      *result = -4096;
    if ( v13 != v9 )
    {
      v15 = (char ***)v9;
      do
      {
        v16 = *v15;
        if ( *v15 != (char **)-8192LL && v16 != (char **)-4096LL )
        {
          v17 = *((_DWORD *)a1 + 4);
          if ( !v17 )
          {
            *(_QWORD *)&dword_0 = *v15;
            BUG();
          }
          v18 = v17 - 1;
          v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v20 = (__int64)&(*a1)[9 * v19];
          v21 = *(_QWORD *)v20;
          if ( v16 != *(char ***)v20 )
          {
            v25 = 1;
            v26 = 0;
            if ( v21 != -4096 )
            {
              while ( 1 )
              {
                if ( v21 == -8192 && !v26 )
                  v26 = v20;
                v19 = v18 & (v25 + v19);
                v20 = (__int64)&(*a1)[9 * v19];
                v21 = *(_QWORD *)v20;
                if ( v16 == *(char ***)v20 )
                  break;
                if ( v21 == -4096 )
                {
                  if ( v26 )
                    v20 = v26;
                  break;
                }
                ++v25;
              }
            }
          }
          *(_QWORD *)v20 = v16;
          *(_QWORD *)(v20 + 8) = v20 + 24;
          *(_QWORD *)(v20 + 16) = 0x300000000LL;
          if ( *((_DWORD *)v15 + 4) )
            sub_10BCC70((char ***)(v20 + 8), v15 + 1);
          v22 = (__int64 *)v15[1];
          ++*((_DWORD *)a1 + 2);
          if ( v22 != (__int64 *)(v15 + 3) )
            free(v22);
        }
        v15 += 9;
      }
      while ( v13 != (__int64 *)v15 );
    }
    return (__int64 *)operator delete();
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[9 * v23]; j != result; result += 9 )
      *result = -4096;
  }
  return result;
}

