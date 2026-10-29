bool __fastcall sub_10B1E80(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  int v4; // eax

  result = 0;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 != 25460 || (v4 = 0, *(_BYTE *)(a2 + 2) != 101) )
      v4 = 1;
    return v4 == 0;
  }
  return result;
}
