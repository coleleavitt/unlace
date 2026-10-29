_QWORD *__fastcall sub_9AB060(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r14
  _QWORD *i; // rdx
  __int64 *v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rdx
  void **v18; // rax
  __int64 v19; // rdx
  _QWORD *j; // rdx
  void **v21; // [rsp+8h] [rbp-50h]
  __int64 *v22; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = (__int64 *)(v9 + 16 * v8);
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v13 != (__int64 *)v9 )
    {
      v15 = (__int64 *)v9;
      do
      {
        if ( *v15 != -8192 && *v15 != -4096 )
        {
          sub_9A6A20((__int64 *)a1, v15, &v22);
          v16 = v22;
          *v22 = *v15;
          v17 = v15[1];
          v15[1] = 0;
          v16[1] = v17;
          v18 = (void **)v15[1];
          ++*(_DWORD *)(a1 + 8);
          if ( v18 )
          {
            if ( *v18 != v18 + 2 )
            {
              v21 = v18;
              free(*v18);
              v18 = v21;
            }
            operator delete(v18, 0x38u);
          }
        }
        v15 += 2;
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v19]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}

