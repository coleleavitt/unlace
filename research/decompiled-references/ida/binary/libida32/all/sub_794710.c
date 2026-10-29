__int64 __fastcall sub_794710(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4)
{
  __int16 v5; // ax

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x100) != 0 && unk_2CAA7A8 )
    a3 = unk_2CAA7A8(a3);
  *(_BYTE *)(a1 + 52) = a4;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  if ( (a4 & 0x800) != 0 )
  {
    *(_BYTE *)(a1 + 53) = a3;
    v5 = 7;
  }
  else
  {
    v5 = 10;
    *(_DWORD *)(a1 + 53) = _byteswap_ulong(a3);
  }
  *(_WORD *)(a1 + 45) = v5;
  return sub_7928A0(a1, a4, a2, 1);
}

