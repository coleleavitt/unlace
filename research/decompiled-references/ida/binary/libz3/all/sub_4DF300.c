__int64 __fastcall sub_4DF300(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v5; // esi

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v5 = *(_DWORD *)(a1 + 72);
  if ( v5 >= *(_DWORD *)(v2 - 4) || !*(_QWORD *)(v2 + 8LL * v5) )
    return 1;
  sub_4DF0F0(a2, v5, nullptr);
  return 1;
}

