__int64 __fastcall remove_superfluous_points(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // edi
  int v8; // esi
  int v9; // eax

  v3 = *(_QWORD *)(a3 + 24);
  if ( (int)v3 - 1 <= 1 )
    return 0;
  v5 = 1;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a3 + 16);
      v7 = v5 + 1;
      v8 = *(_DWORD *)(v6 + 8LL * v5);
      if ( *(_DWORD *)(v6 + 8LL * (v5 - 1)) == v8 && v8 == *(_DWORD *)(v6 + 8LL * v7) )
        break;
      v3 = *(_QWORD *)(a3 + 24);
      ++v5;
      if ( (int)v3 - 1 <= v7 )
        return 0;
    }
    memmove((void *)(v6 + 8LL * v5), (const void *)(v6 + 8LL * v7), 8 * (v3 - v5) - 8);
    v3 = *(_QWORD *)(a3 + 24) - 1LL;
    v9 = *(_DWORD *)(a3 + 24) - 2;
    *(_QWORD *)(a3 + 24) = v3;
  }
  while ( v9 > v5 );
  return 0;
}
