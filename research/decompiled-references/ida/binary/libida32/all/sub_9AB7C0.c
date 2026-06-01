_QWORD *__fastcall sub_9AB7C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  _QWORD *i; // rdx
  __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *j; // rdx
  _QWORD *v19; // [rsp+8h] [rbp-40h] BYREF

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
    v13 = v9 + 16 * v8;
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        if ( *(_QWORD *)v15 != -8192 && *(_QWORD *)v15 != -4096 )
        {
          sub_9A6AE0((__int64 *)a1, (__int64 *)v15, &v19);
          v16 = v19;
          *v19 = *(_QWORD *)v15;
          *((_BYTE *)v16 + 8) = *(_BYTE *)(v15 + 8);
          ++*(_DWORD *)(a1 + 8);
        }
        v15 += 16;
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v17 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v17]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}

