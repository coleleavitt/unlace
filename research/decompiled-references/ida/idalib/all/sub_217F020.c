bool __fastcall sub_217F020(__int64 a1, __int64 a2)
{
  int v2; // edx
  bool result; // al

  v2 = *(_DWORD *)(a2 + 8);
  result = 0;
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    return *(_DWORD *)(a2 + 4) != 8;
  return result;
}
