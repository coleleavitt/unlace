__int64 __fastcall sub_BD8A70(_QWORD *a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 *v10; // r13
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rsi

  do
  {
    v6 = a2;
    v7 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v7 != a2 );
  v8 = *(_QWORD *)(a1[32] + 8 * v6);
  v9 = *(__int64 **)v8;
  if ( *(_QWORD *)v8 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    while ( v10 != v9 )
    {
      v11 = *v9++;
      sub_BD8400((__int64)a1, v11, a3, a4, a5);
    }
  }
  result = a1[33];
  if ( !*(_BYTE *)(result + 16) && *(_BYTE *)(v8 + 24) )
  {
    do
    {
      v13 = a2;
      v14 = a2;
      a2 = *(_DWORD *)(a1[43] + 4LL * a2);
    }
    while ( v14 != a2 );
    v15 = *(_QWORD *)(a1[32] + 8 * v13);
    result = *(_QWORD *)(v15 + 16);
    if ( result )
    {
      v16 = 0;
      do
      {
        if ( v16 >= *(_DWORD *)(result - 4) )
          break;
        v17 = *(_QWORD *)(result + 8LL * v16);
        if ( !*(_BYTE *)(a1[33] + 17LL) || v17 == *(_QWORD *)(v17 + 24) )
        {
          sub_BD8400((__int64)a1, v17, a3, a4, a5);
          result = *(_QWORD *)(v15 + 16);
        }
        ++v16;
      }
      while ( result );
    }
  }
  return result;
}

