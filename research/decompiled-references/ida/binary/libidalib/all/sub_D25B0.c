char __fastcall sub_D25B0(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      return *(_BYTE *)(a1 + 376);
    }
    else
    {
      sub_D2300(a1);
      v2 = getseg();
      result = 1;
      if ( v2 )
        result = (*(_WORD *)(v2 + 44) & 0x18) == 8;
      *(_DWORD *)(a1 + 4) |= 4u;
      *(_BYTE *)(a1 + 376) = result;
    }
  }
  return result;
}

