__int64 *__fastcall sub_1EDAD80(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r13
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 *v14; // r15
  __int64 *i; // rdx
  char ***v16; // rbx
  char **v17; // rdx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rsi
  char **v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rcx
  __int64 *j; // rdx
  int v27; // r10d
  __int64 v28; // r11

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
  result = (__int64 *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 56 * v8;
    v14 = &v9[7 * v8];
    for ( i = &result[7 * v12]; i != result; result += 7 )
      *result = -1;
    if ( v14 != v9 )
    {
      v16 = (char ***)v9;
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( (unsigned __int64)*v16 + 2 > 1 )
          {
            v18 = *((_DWORD *)a1 + 4);
            if ( !v18 )
            {
              *(_QWORD *)&dword_0 = *v16;
              BUG();
            }
            v19 = v18 - 1;
            v20 = v19 & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v17) >> 31) ^ (484763065 * (_DWORD)v17));
            v21 = (__int64)&(*a1)[7 * v20];
            v22 = *(_QWORD *)v21;
            if ( v17 != *(char ***)v21 )
            {
              v27 = 1;
              v28 = 0;
              if ( v22 != -1 )
              {
                while ( 1 )
                {
                  if ( !v28 && v22 == -2 )
                    v28 = v21;
                  v20 = v19 & (v27 + v20);
                  v21 = (__int64)&(*a1)[7 * v20];
                  v22 = *(_QWORD *)v21;
                  if ( v17 == *(char ***)v21 )
                    break;
                  if ( v22 == -1 )
                  {
                    if ( v28 )
                      v21 = v28;
                    break;
                  }
                  ++v27;
                }
              }
            }
            v23 = *v16;
            *(_QWORD *)(v21 + 16) = 0x400000000LL;
            *(_QWORD *)v21 = v23;
            *(_QWORD *)(v21 + 8) = v21 + 24;
            if ( *((_DWORD *)v16 + 4) )
              sub_1EB3E90((char ***)(v21 + 8), v16 + 1);
            v24 = (__int64 *)v16[1];
            ++*((_DWORD *)a1 + 2);
            if ( v24 != (__int64 *)(v16 + 3) )
              break;
          }
          v16 += 7;
          if ( v14 == (__int64 *)v16 )
            return (__int64 *)operator delete(v9, v13, 8);
        }
        free(v24);
        v16 += 7;
      }
      while ( v14 != (__int64 *)v16 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v25 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[7 * v25]; j != result; result += 7 )
      *result = -1;
  }
  return result;
}
