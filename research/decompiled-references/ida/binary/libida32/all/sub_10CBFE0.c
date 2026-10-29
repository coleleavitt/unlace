__int64 __fastcall sub_10CBFE0(__int64 a1, __int64 a2, int a3, int a4, unsigned int **a5)
{
  __int64 v5; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v9; // r8

  if ( !*(_BYTE *)(a1 + 168) )
    return 1;
  v5 = *(unsigned int *)(a1 + 128);
  if ( !(_DWORD)v5 )
    return 0;
  if ( *(_BYTE *)(a1 + 69) || a3 == 3 )
    return sub_10CB3B0(a1, a2, a3, a4, a5);
  if ( a3 > 3 )
    return 0;
  v7 = *(__int64 **)(a1 + 120);
  v8 = &v7[v5];
  do
  {
    v9 = *v7++;
    *(v7 - 1) = sub_10C80E0(**(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 48), a3, v9);
  }
  while ( v8 != v7 );
  return 0;
}

