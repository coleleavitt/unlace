bool __fastcall sub_105CF30(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  int v4; // eax

  result = 0;
  if ( a3 == 7 )
  {
    if ( *(_DWORD *)a2 != 1701996900 || *(_WORD *)(a2 + 4) != 29795 || (v4 = 0, *(_BYTE *)(a2 + 6) != 120) )
      v4 = 1;
    return v4 == 0;
  }
  return result;
}

