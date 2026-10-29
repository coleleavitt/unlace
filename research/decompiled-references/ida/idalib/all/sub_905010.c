__int64 __fastcall sub_905010(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int i; // ecx
  int v5; // r9d
  bool v6; // r10

  if ( a3 < 0 )
    return 1;
  v3 = 0;
  for ( i = 0; i <= a3; ++i )
  {
    v5 = *(_DWORD *)(a2 + 4LL * i);
    v6 = *(_BYTE *)(a1 + 8LL * i + 8) == 0;
    v3 |= v6 && v5 != 0;
  }
  return v3 ^ 1u;
}
