bool __fastcall sub_3DF350(__int64 a1, int a2)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)(a1 + 444) != a2 )
    return *(_DWORD *)(a1 + 524) == a2;
  return result;
}
