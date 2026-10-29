_QWORD *__fastcall sub_20BDB50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  _QWORD *i; // rdx
  __int64 j; // r13
  _QWORD *v16; // rdi
  _QWORD *v17; // r15
  _QWORD *v18; // r11
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  _QWORD *k; // rdx
  __int64 v22; // [rsp+8h] [rbp-50h]
  _QWORD *v23; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_22300B0(40LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v22 = 40 * v8;
    v13 = v9 + 40 * v8;
    for ( i = &result[5 * v12]; i != result; result += 5 )
      *result = -4096;
    for ( j = v9; v13 != j; j += 40 )
    {
      if ( *(_QWORD *)j != -8192 && *(_QWORD *)j != -4096 )
      {
        sub_20A15A0((__int64 *)a1, (__int64 *)j, &v23);
        v16 = v23;
        *v23 = *(_QWORD *)j;
        v16[1] = v16 + 3;
        v16[2] = 0x100000000LL;
        if ( *(_DWORD *)(j + 16) )
          sub_20BD860((__int64)(v16 + 1), (__int64 *)(j + 8));
        ++*(_DWORD *)(a1 + 8);
        v17 = *(_QWORD **)(j + 8);
        v18 = &v17[2 * *(unsigned int *)(j + 16)];
        if ( v17 != v18 )
        {
          do
          {
            while ( 1 )
            {
              v18 -= 2;
              v19 = (_QWORD *)v18[1];
              if ( !v19 )
                break;
              sub_20A0850((__int64)(v18 + 1), v19);
              if ( v17 == v18 )
                goto LABEL_14;
            }
          }
          while ( v17 != v18 );
LABEL_14:
          v18 = *(_QWORD **)(j + 8);
        }
        if ( v18 != (_QWORD *)(j + 24) )
          free(v18);
      }
    }
    return (_QWORD *)operator delete(v9, v22, 8);
  }
  else
  {
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[5 * v20]; k != result; result += 5 )
      *result = -4096;
  }
  return result;
}
