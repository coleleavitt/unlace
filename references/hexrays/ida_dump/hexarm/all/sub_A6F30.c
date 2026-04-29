bool __fastcall sub_A6F30(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a1 == 55 && *(_BYTE *)(a1 + 32) == 7 )
    return *(_DWORD *)(a2 + 72) + 1 == *(_DWORD *)(a1 + 40);
  return result;
}
