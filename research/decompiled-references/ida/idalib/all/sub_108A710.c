bool __fastcall sub_108A710(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  int v4; // eax

  result = 0;
  if ( a3 == 6 )
  {
    if ( *(_DWORD *)a2 != 879784813 || (v4 = 0, *(_WORD *)(a2 + 4) != 12339) )
      v4 = 1;
    return v4 == 0;
  }
  return result;
}
