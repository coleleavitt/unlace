_QWORD *__fastcall sub_1364E60(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // r14
  _QWORD *i; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  void *v27; // rdi
  __int64 v28; // rdx
  _QWORD *j; // rdx
  int v30; // r9d
  _QWORD *v31; // r10

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
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
  result = (_QWORD *)sub_22300B0(40LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 40 * v8;
    v14 = &v9[5 * v8];
    for ( i = &result[5 * v12]; i != result; result += 5 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *(_DWORD *)(a1 + 16);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (_QWORD *)(*(_QWORD *)a1 + 40LL * v20);
          v22 = *v21;
          if ( v17 != *v21 )
          {
            v30 = 1;
            v31 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v31 )
                  v31 = v21;
                v20 = v19 & (v30 + v20);
                v21 = (_QWORD *)(*(_QWORD *)a1 + 40LL * v20);
                v22 = *v21;
                if ( v17 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v31 )
                    v21 = v31;
                  break;
                }
                ++v30;
              }
            }
          }
          v21[2] = 0;
          v21[3] = 0;
          v21[1] = 0;
          *v21 = v17;
          v21[1] = v16[1];
          v23 = v16[2];
          v16[1] = 0;
          v24 = v21[2];
          v21[2] = v23;
          v25 = v16[3];
          v16[2] = v24;
          v26 = v21[3];
          v21[3] = v25;
          v27 = (void *)v16[1];
          v16[3] = v26;
          v21[4] = v16[4];
          ++*(_DWORD *)(a1 + 8);
          if ( v27 )
            operator delete(v27);
        }
        v16 += 5;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v28 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[5 * v28]; j != result; result += 5 )
      *result = -4096;
  }
  return result;
}
