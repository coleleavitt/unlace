char __fastcall sub_241710(__int64 a1, double a2)
{
  char result; // al
  __int64 v3; // rax
  __int64 v4; // rdx

  result = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      return *(_BYTE *)(a1 + 376);
    }
    else
    {
      v3 = sub_241540((unsigned int *)a1, a2);
      v4 = getseg(v3);
      result = 1;
      if ( v4 )
        result = (*(_WORD *)(v4 + 44) & 0x18) == 8;
      *(_DWORD *)(a1 + 4) |= 4u;
      *(_BYTE *)(a1 + 376) = result;
    }
  }
  return result;
}
