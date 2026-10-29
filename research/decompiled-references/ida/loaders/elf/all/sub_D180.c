bool __fastcall sub_D180(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)(a2 + 4) == 1 )
    return (*(_WORD *)(a2 + 8) & 0x407) != 0;
  return result;
}

