bool __fastcall sub_6AA8B0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 1;
  if ( *(_WORD *)(a2 + 4) == 2 )
  {
    result = 0;
    if ( !*(_DWORD *)(a2 + 72) )
      return *(_DWORD *)(a2 + 76) == 0;
  }
  return result;
}

