__int64 __fastcall sub_BD89C0(_QWORD *a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  __int64 v11; // rsi

  do
  {
    v5 = a2;
    v6 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v6 != a2 );
  v7 = *(_QWORD *)(a1[32] + 8 * v5);
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 )
    return 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v9 >= *(_DWORD *)(v8 - 4) )
      break;
    v11 = *(_QWORD *)(v8 + 8LL * v9);
    if ( !*(_BYTE *)(a1[33] + 17LL) || v11 == *(_QWORD *)(v11 + 24) )
    {
      v10 |= sub_BD8400((__int64)a1, v11, a3, a4, a5);
      v8 = *(_QWORD *)(v7 + 16);
    }
    ++v9;
  }
  while ( v8 );
  return v10;
}

