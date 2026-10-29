_QWORD *__fastcall sub_22C3F60(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // edi
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r14
  _QWORD *i; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *j; // rdx
  _QWORD *v16; // [rsp+8h] [rbp-40h] BYREF

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
    v10 = v5 + v9;
    for ( i = &result[2 * v8]; i != result; result += 2 )
      *result = -4096;
    if ( v10 != v5 )
    {
      v12 = v5;
      do
      {
        if ( *(_QWORD *)v12 != -8192 && *(_QWORD *)v12 != -4096 )
        {
          sub_22C0BA0((__int64 *)a1, (__int64 *)v12, &v16);
          v13 = v16;
          *v16 = *(_QWORD *)v12;
          *((_DWORD *)v13 + 2) = *(_DWORD *)(v12 + 8);
          ++*(_DWORD *)(a1 + 8);
        }
        v12 += 16;
      }
      while ( v10 != v12 );
    }
    return (_QWORD *)operator delete(v5, v9, 8);
  }
  else
  {
    v14 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v14]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
