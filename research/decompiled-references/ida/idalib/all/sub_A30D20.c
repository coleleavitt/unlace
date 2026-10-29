_BYTE *__fastcall sub_A30D20(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // eax
  _BYTE *result; // rax
  __int64 v12; // r12
  _BYTE *i; // rdx
  __int64 j; // r15
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  char *v18; // r13
  char *v19; // r14
  __int64 v20; // rdx
  _BYTE *k; // rdx
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
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
  result = (_BYTE *)sub_22300B0(168LL * v10, 8, 5LL * v10, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v22 = 168 * v8;
    v12 = v9 + 168 * v8;
    for ( i = &result[168 * *(unsigned int *)(a1 + 16)]; i != result; *((_DWORD *)result - 40) = -1 )
    {
      *result = -1;
      result += 168;
      *((_DWORD *)result - 41) = -1;
    }
    for ( j = v9; v12 != j; j += 168 )
    {
      v15 = *(_DWORD *)(j + 8);
      if ( v15 == -1 )
      {
        if ( *(_DWORD *)(j + 4) != -1 || *(_BYTE *)j != 0xFF )
        {
LABEL_10:
          sub_A21710((__int64 *)a1, (char *)j, v23);
          v16 = v23[0];
          *(_DWORD *)(v23[0] + 8) = *(_DWORD *)(j + 8);
          *(_DWORD *)(v16 + 4) = *(_DWORD *)(j + 4);
          *(_BYTE *)v16 = *(_BYTE *)j;
          v17 = v23[0];
          *(_QWORD *)(v23[0] + 16) = v23[0] + 32;
          *(_QWORD *)(v17 + 24) = 0x100000000LL;
          if ( *(_DWORD *)(j + 24) )
            sub_A15880(v17 + 16, j + 16);
          ++*(_DWORD *)(a1 + 8);
          v18 = *(char **)(j + 16);
          v19 = &v18[136 * *(unsigned int *)(j + 24)];
          if ( v18 != v19 )
          {
            do
            {
              v19 -= 136;
              sub_A09CE0((__int64)(v19 + 16));
            }
            while ( v18 != v19 );
            v19 = *(char **)(j + 16);
          }
          if ( v19 != (char *)(j + 32) )
            free(v19);
        }
      }
      else if ( v15 != -2 || *(_DWORD *)(j + 4) != -2 || *(_BYTE *)j != 0xFE )
      {
        goto LABEL_10;
      }
    }
    return (_BYTE *)operator delete(v9, v22, 8);
  }
  else
  {
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[168 * v20]; k != result; *((_DWORD *)result - 40) = -1 )
    {
      *result = -1;
      result += 168;
      *((_DWORD *)result - 41) = -1;
    }
  }
  return result;
}
