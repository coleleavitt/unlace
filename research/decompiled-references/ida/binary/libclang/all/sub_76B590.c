__int64 __fastcall sub_76B590(__int64 a1)
{
  int v2; // esi

  if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
    return (**(_DWORD **)(a1 + 32) >> 14) & 0x1F
         | (**(_DWORD **)(a1 + 24) >> 14) & 0x1F
         | (**(_DWORD **)(a1 + 16) >> 14) & 0x1F
         | 0xEu;
  if ( *(_BYTE *)(a1 + 48) )
    v2 = (**(_DWORD **)(a1 + 24) >> 14) & 0xC;
  else
    v2 = (**(_DWORD **)(a1 + 32) >> 14) & 0xC;
  return v2
       | (**(_DWORD **)(a1 + 16) >> 14) & 0x13
       | (**(_DWORD **)(a1 + 32) >> 14) & 0x13
       | (**(_DWORD **)(a1 + 24) >> 14) & 0x13u;
}

