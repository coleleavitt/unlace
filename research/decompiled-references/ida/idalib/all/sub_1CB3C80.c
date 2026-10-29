__int64 __fastcall sub_1CB3C80(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 i; // rax
  __int64 v5; // rax
  __int64 j; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v13; // eax

  v3 = 0;
  for ( i = *(_QWORD *)(a2 + 64); i; i = *(_QWORD *)(*(_QWORD *)i + 64LL) )
    ++v3;
  v5 = 8LL * *(unsigned int *)(a1 + 80) + *(_QWORD *)(a1 + 32);
  for ( j = *(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40); j != v5; v5 += 8 )
  {
    v7 = *(_QWORD *)v5;
    if ( (*(_BYTE *)(*(_QWORD *)v5 + 8LL) & 7) == 2 )
    {
      if ( *(_DWORD *)(v7 + 1544) )
      {
        if ( v3 < *(_DWORD *)(v7 + 1532) + 1 )
          v3 = *(_DWORD *)(v7 + 1532) + 1;
        break;
      }
      v8 = *(_QWORD *)(v7 + 1656);
      if ( v8 )
      {
        v13 = sub_BBD7B0(v8) + 1;
        if ( v3 < v13 )
          v3 = v13;
        break;
      }
    }
  }
  v9 = 56LL * *(unsigned int *)(a1 + 2632) + *(_QWORD *)(a1 + 3680);
  v10 = *(_QWORD *)(a1 + 3680) + 56LL * *(unsigned int *)(a1 + 3688);
  if ( v10 == v9 )
    return v3;
  v11 = v9 + 56;
  if ( !*(_DWORD *)(v9 + 16) )
  {
    do
    {
      v9 = v11;
      if ( v11 == v10 )
        return v3;
      v11 += 56;
    }
    while ( !*(_DWORD *)(v11 - 40) );
  }
  if ( v3 < *(_DWORD *)(v9 + 4) + 1 )
    return (unsigned int)(*(_DWORD *)(v9 + 4) + 1);
  return v3;
}
