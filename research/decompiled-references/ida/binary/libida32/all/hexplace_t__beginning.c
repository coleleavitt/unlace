__int64 __fastcall hexplace_t__beginning(__int64 a1)
{
  int addr; // eax
  unsigned int v2; // edx

  addr = prev_addr(*(unsigned int *)(a1 + 16));
  v2 = 1;
  if ( addr != -1 )
    LOBYTE(v2) = *(_DWORD *)(a1 + 16) == addr;
  return v2;
}

