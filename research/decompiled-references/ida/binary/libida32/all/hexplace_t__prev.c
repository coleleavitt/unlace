__int64 __fastcall hexplace_t__prev(__int64 a1, __int64 a2)
{
  unsigned int addr; // esi
  __int64 result; // rax

  addr = prev_addr(*(unsigned int *)(a1 + 16));
  result = 0;
  if ( addr != -1 && addr != *(_DWORD *)(a1 + 16) )
  {
    sub_4116C0(a1, addr, a2);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 16);
    return 1;
  }
  return result;
}

