_BOOL8 __fastcall sub_1091EC0(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result; // rax

  if ( a3 == 3 )
    return *(_WORD *)a2 == 29808 && *(_BYTE *)(a2 + 2) == 120;
  result = 0;
  if ( a3 != 5 )
    return result;
  return *(_DWORD *)a2 == 1953527406 && *(_BYTE *)(a2 + 4) == 120;
}
