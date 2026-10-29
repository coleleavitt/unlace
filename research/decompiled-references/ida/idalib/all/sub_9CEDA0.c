_QWORD *__fastcall sub_9CEDA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r14
  _QWORD *i; // rdx
  __int64 *v16; // r13
  __int64 *v17; // rax
  __int64 v18; // rdx
  void **v19; // rax
  __int64 v20; // rdx
  _QWORD *j; // rdx
  void **v22; // [rsp+8h] [rbp-50h]
  __int64 *v23; // [rsp+18h] [rbp-40h] BYREF

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
    v14 = (__int64 *)(v9 + v13);
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v14 != (__int64 *)v9 )
    {
      v16 = (__int64 *)v9;
      do
      {
        if ( *v16 != -8192 && *v16 != -4096 )
        {
          sub_9CA760((__int64 *)a1, v16, &v23);
          v17 = v23;
          *v23 = *v16;
          v18 = v16[1];
          v16[1] = 0;
          v17[1] = v18;
          v19 = (void **)v16[1];
          ++*(_DWORD *)(a1 + 8);
          if ( v19 )
          {
            if ( *v19 != v19 + 2 )
            {
              v22 = v19;
              free(*v19);
              v19 = v22;
            }
            operator delete(v19, 0x38u);
          }
        }
        v16 += 2;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v20]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
