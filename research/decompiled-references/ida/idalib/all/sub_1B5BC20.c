_QWORD *__fastcall sub_1B5BC20(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 *v12; // r12
  _QWORD *i; // rdx
  __int64 *j; // r13
  __int64 v15; // rcx
  int v16; // eax
  int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  void **v21; // r14
  void **v22; // rbx
  __int64 v23; // rdx
  _QWORD *k; // rdx
  int v25; // r9d
  __int64 v26; // r10
  __int64 v27; // [rsp+8h] [rbp-40h]

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
  result = (_QWORD *)sub_22300B0(1184LL * v10, 8, 9LL * v10, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    a1[1] = 0;
    v27 = 1184 * v8;
    v12 = &v9[148 * v8];
    for ( i = &result[148 * *((unsigned int *)a1 + 4)]; i != result; result += 148 )
      *result = -4096;
    for ( j = v9; v12 != j; j += 148 )
    {
      v15 = *j;
      if ( *j != -8192 && v15 != -4096 )
      {
        v16 = *((_DWORD *)a1 + 4);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = *a1 + 1184LL * v18;
        v20 = *(_QWORD *)v19;
        if ( v15 != *(_QWORD *)v19 )
        {
          v25 = 1;
          v26 = 0;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v26 )
                v26 = v19;
              v18 = v17 & (v25 + v18);
              v19 = *a1 + 1184LL * v18;
              v20 = *(_QWORD *)v19;
              if ( v15 == *(_QWORD *)v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v26 )
                  v19 = v26;
                break;
              }
              ++v25;
            }
          }
        }
        *(_QWORD *)v19 = v15;
        *(_QWORD *)(v19 + 8) = v19 + 24;
        *(_QWORD *)(v19 + 16) = 0x800000000LL;
        if ( *((_DWORD *)j + 4) )
          sub_1B5B8F0(v19 + 8, (__int64)(j + 1));
        v21 = (void **)j[1];
        *(_DWORD *)(v19 + 1176) = *((_DWORD *)j + 294);
        ++*((_DWORD *)a1 + 2);
        v22 = &v21[18 * *((unsigned int *)j + 4)];
        if ( v21 != v22 )
        {
          do
          {
            while ( 1 )
            {
              v22 -= 18;
              if ( *v22 == v22 + 2 )
                break;
              free(*v22);
              if ( v21 == v22 )
                goto LABEL_16;
            }
          }
          while ( v21 != v22 );
LABEL_16:
          v22 = (void **)j[1];
        }
        if ( v22 != (void **)(j + 3) )
          free(v22);
      }
    }
    return (_QWORD *)operator delete(v9, v27, 8);
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( k = &result[148 * v23]; k != result; result += 148 )
      *result = -4096;
  }
  return result;
}
