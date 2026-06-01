__int64 __fastcall sub_7946D0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 52) = a3;
  *(_WORD *)(a1 + 45) = 6;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  return sub_7928A0(a1, a3, a2, 1);
}

