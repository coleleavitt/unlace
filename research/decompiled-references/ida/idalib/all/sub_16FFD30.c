_QWORD *__fastcall sub_16FFD30(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // r15
  _QWORD *i; // rdx
  __int64 *j; // rbx
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  void **v25; // rdi
  void **v26; // r13
  void **v27; // rdi
  __int64 v28; // rdx
  _QWORD *k; // rdx
  int v30; // r9d
  __int64 v31; // r10

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
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
  result = (_QWORD *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 24 * v8;
    v14 = &v9[3 * v8];
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -1;
    for ( j = v9; v14 != j; j += 3 )
    {
      while ( 1 )
      {
        v17 = *j;
        if ( (unsigned __int64)(*j + 2) > 1 )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = *a1 + 24LL * v20;
          v22 = *(_QWORD *)v21;
          if ( v17 != *(_QWORD *)v21 )
          {
            v30 = 1;
            v31 = 0;
            if ( v22 != -1 )
            {
              while ( 1 )
              {
                if ( !v31 && v22 == -2 )
                  v31 = v21;
                v20 = v19 & (v30 + v20);
                v21 = *a1 + 24LL * v20;
                v22 = *(_QWORD *)v21;
                if ( v17 == *(_QWORD *)v21 )
                  break;
                if ( v22 == -1 )
                {
                  if ( v31 )
                    v21 = v31;
                  break;
                }
                ++v30;
              }
            }
          }
          v23 = *j;
          *(_QWORD *)(v21 + 8) = 0;
          *(_DWORD *)(v21 + 16) = 0;
          *(_QWORD *)v21 = v23;
          *(_DWORD *)(v21 + 16) = *((_DWORD *)j + 4);
          *(_QWORD *)(v21 + 8) = j[1];
          j[1] = 0;
          ++*((_DWORD *)a1 + 2);
          v24 = j[1];
          if ( v24 )
          {
            if ( (v24 & 4) != 0 )
            {
              v25 = (void **)(v24 & 0xFFFFFFFFFFFFFFF8LL);
              v26 = v25;
              if ( v25 )
                break;
            }
          }
        }
        j += 3;
        if ( v14 == j )
          return (_QWORD *)operator delete(v9, v13, 8);
      }
      v27 = (void **)*v25;
      if ( v27 != v26 + 2 )
        free(v27);
      operator delete(v26, 0x50u);
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v28 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( k = &result[3 * v28]; k != result; result += 3 )
      *result = -1;
  }
  return result;
}
