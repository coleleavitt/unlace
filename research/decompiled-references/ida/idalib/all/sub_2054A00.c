int *__fastcall sub_2054A00(int **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  int *v9; // rbp
  unsigned int v10; // edi
  int *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int *v14; // r14
  int *i; // rdx
  int *v16; // r13
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r15
  void *v25; // rdi
  int *j; // rdx
  int v27; // r11d
  __int64 v28; // r9

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
  result = (int *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = 16 * v8;
    a1[1] = nullptr;
    v14 = &v9[(unsigned __int64)v13 / 4];
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -1;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( (unsigned int)(*v16 + 2) > 1 )
          {
            v18 = *((_DWORD *)a1 + 4);
            if ( !v18 )
            {
              dword_0 = 0;
              BUG();
            }
            v19 = v18 - 1;
            v20 = (v18 - 1) & (37 * v17);
            v21 = (__int64)&(*a1)[4 * v20];
            v22 = *(_DWORD *)v21;
            if ( v17 != *(_DWORD *)v21 )
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
                  v21 = (__int64)&(*a1)[4 * v20];
                  v22 = *(_DWORD *)v21;
                  if ( v17 == *(_DWORD *)v21 )
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
            *(_DWORD *)v21 = v17;
            v23 = *((_QWORD *)v16 + 1);
            *((_QWORD *)v16 + 1) = 0;
            *(_QWORD *)(v21 + 8) = v23;
            v24 = *((_QWORD *)v16 + 1);
            ++*((_DWORD *)a1 + 2);
            if ( v24 )
              break;
          }
          v16 += 4;
          if ( v14 == v16 )
            return (int *)operator delete(v9, v13, 8);
        }
        if ( *(_DWORD *)(v24 + 32) > 0x40u )
        {
          v25 = *(void **)(v24 + 24);
          if ( v25 )
            operator delete[](v25);
        }
        v16 += 4;
        sub_20CC0C0(v24);
        sub_20C9BF0(v24);
      }
      while ( v14 != v16 );
    }
    return (int *)operator delete(v9, v13, 8);
  }
  else
  {
    a1[1] = nullptr;
    for ( j = &result[4 * *((unsigned int *)a1 + 4)]; j != result; result += 4 )
      *result = -1;
  }
  return result;
}
