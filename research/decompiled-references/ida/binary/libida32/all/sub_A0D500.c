_DWORD *__fastcall sub_A0D500(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  _DWORD *i; // rdx
  __int64 j; // rbp
  int *v16; // rdi
  _BYTE *v17; // r14
  __int64 v18; // rax
  _BYTE *v19; // r15
  __int64 v20; // rdx
  _DWORD *k; // rdx
  int *v22; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_220C370(344LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v9 + 344 * v8;
    for ( i = &result[86 * v12]; i != result; *(result - 85) = -1 )
    {
      *result = -1;
      result += 86;
    }
    for ( j = v9; v13 != j; j += 344 )
    {
      if ( *(_DWORD *)j == -1 )
      {
        if ( *(_DWORD *)(j + 4) != -1 )
          goto LABEL_9;
      }
      else if ( *(_DWORD *)j != -2 || *(_DWORD *)(j + 4) != -2 )
      {
LABEL_9:
        sub_9FEB80((__int64 *)a1, (__int64 *)j, &v22);
        v16 = v22;
        *(_QWORD *)v22 = *(_QWORD *)j;
        *((_QWORD *)v16 + 1) = v16 + 6;
        *((_QWORD *)v16 + 2) = 0x100000000LL;
        if ( *(_DWORD *)(j + 16) )
          sub_9F7940((__int64)(v16 + 2), j + 8);
        ++*(_DWORD *)(a1 + 8);
        v17 = *(_BYTE **)(j + 8);
        v18 = 320LL * *(unsigned int *)(j + 16);
        v19 = &v17[v18];
        if ( v17 != &v17[v18] )
        {
          do
          {
            while ( 1 )
            {
              v19 -= 320;
              if ( v19[312] )
                break;
              sub_9E5FF0((__int64)(v19 + 16));
              if ( v17 == v19 )
                goto LABEL_14;
            }
            sub_9E5FA0((__int64)(v19 + 192));
            sub_9E5FF0((__int64)(v19 + 16));
          }
          while ( v17 != v19 );
LABEL_14:
          v19 = *(_BYTE **)(j + 8);
        }
        if ( v19 != (_BYTE *)(j + 24) )
          free(v19);
      }
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[86 * v20]; k != result; *(result - 85) = -1 )
    {
      *result = -1;
      result += 86;
    }
  }
  return result;
}

