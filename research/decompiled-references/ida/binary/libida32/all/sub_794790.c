__int64 __fastcall sub_794790(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4)
{
  __int16 v5; // bx
  unsigned __int32 v6; // eax
  unsigned int v7; // edi

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  v5 = a4;
  if ( (a4 & 0x100) != 0 )
  {
    HIBYTE(v5) = HIBYTE(a4) & 0xFE;
    if ( unk_2CAA7A8 )
      a3 = unk_2CAA7A8(a3);
  }
  v6 = _byteswap_ulong(a2);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 48) = v6;
    v7 = a3 - 1;
    *(_BYTE *)(a1 + 52) = v5;
    if ( (v5 & 0x800) != 0 )
    {
      *(_BYTE *)(a1 + 53) = v7;
      *(_WORD *)(a1 + 45) = 7;
    }
    else
    {
      *(_DWORD *)(a1 + 53) = _byteswap_ulong(v7);
      *(_WORD *)(a1 + 45) = 10;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v6;
    *(_WORD *)(a1 + 45) = 6;
    *(_BYTE *)(a1 + 52) = v5;
  }
  return sub_7928A0(a1, v5, a2, 1);
}

