_DWORD *__fastcall sub_A02040(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  int *v13; // r15
  _DWORD *i; // rdx
  int *v15; // r13
  int *v16; // rsi
  _DWORD *v17; // rax
  _DWORD *j; // rdx
  _DWORD *v19; // [rsp+8h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_220C370(8LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = (int *)(v9 + 8 * v8);
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -1;
    if ( v13 != (int *)v9 )
    {
      v15 = (int *)v9;
      do
      {
        while ( (unsigned int)(*v15 + 2) <= 1 )
        {
          v15 += 2;
          if ( v13 == v15 )
            return (_DWORD *)operator delete();
        }
        v16 = v15;
        v15 += 2;
        sub_9FD930((__int64 *)a1, v16, &v19);
        v17 = v19;
        *v19 = *(v15 - 2);
        v17[1] = *(v15 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v13 != v15 );
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * *(unsigned int *)(a1 + 16)]; j != result; result += 2 )
      *result = -1;
  }
  return result;
}

