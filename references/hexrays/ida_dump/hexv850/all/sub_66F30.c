bool __fastcall sub_66F30(__int64 a1, int a2, int a3)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 28) == a2 )
    return *(_DWORD *)(a1 + 32) == a3;
  return result;
}
