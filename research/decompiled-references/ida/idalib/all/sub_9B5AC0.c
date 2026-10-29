_QWORD *__fastcall sub_9B5AC0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  _QWORD *i; // rdx
  __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *j; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 16 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        if ( *(_QWORD *)v16 != -8192 && *(_QWORD *)v16 != -4096 )
        {
          sub_9B5390((__int64 *)a1, (__int64 *)v16, &v20);
          v17 = v20;
          *v20 = *(_QWORD *)v16;
          *((_DWORD *)v17 + 2) = *(_DWORD *)(v16 + 8);
          ++*(_DWORD *)(a1 + 8);
        }
        v16 += 16;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v18]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
