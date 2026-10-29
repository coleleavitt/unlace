char *__fastcall sub_F722A0(__int64 a1, __int64 a2)
{
  if ( a2 != 7 )
  {
    if ( a2 == 6 && *(_DWORD *)a1 == 1634485087 && *(_WORD *)(a1 + 4) == 26478 )
      return "clang";
    return (char *)a1;
  }
  if ( *(_DWORD *)a1 != 1852268383 || *(_WORD *)(a1 + 4) != 24437 || *(_BYTE *)(a1 + 6) != 95 )
    return (char *)a1;
  return "gnu";
}

