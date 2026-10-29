_QWORD *__fastcall sub_22C11D0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // edi
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // r15
  _QWORD *i; // rdx
  __int64 *v12; // r13
  __int64 *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *j; // rdx
  _QWORD *v17; // [rsp+8h] [rbp-40h] BYREF

  v2 = (unsigned int)(a2 - 1);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  v6 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v6 < 0x40 )
    v6 = 64;
  *(_DWORD *)(a1 + 16) = v6;
  result = (_QWORD *)sub_22300B0(16LL * v6, 8);
  *(_QWORD *)a1 = result;
  if ( v5 )
  {
    v8 = *(unsigned int *)(a1 + 16);
    v9 = 16 * v4;
    *(_QWORD *)(a1 + 8) = 0;
    v10 = (__int64 *)(v5 + v9);
    for ( i = &result[2 * v8]; i != result; result += 2 )
      *result = -1;
    if ( v10 != (__int64 *)v5 )
    {
      v12 = (__int64 *)v5;
      do
      {
        while ( *v12 == -2 || *v12 == -1 )
        {
          v12 += 2;
          if ( v10 == v12 )
            return (_QWORD *)operator delete(v5, v9, 8);
        }
        v13 = v12;
        v12 += 2;
        sub_22C0550((__int64 *)a1, v13, &v17);
        v14 = v17;
        *v17 = *(v12 - 2);
        v14[1] = *(v12 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v10 != v12 );
    }
    return (_QWORD *)operator delete(v5, v9, 8);
  }
  else
  {
    v15 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v15]; j != result; result += 2 )
      *result = -1;
  }
  return result;
}
