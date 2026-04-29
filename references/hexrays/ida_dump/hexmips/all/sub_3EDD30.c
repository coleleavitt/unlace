__int64 __fastcall sub_3EDD30(__int64 a1, int a2, unsigned int a3, double a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi

  v5 = a1;
  v6 = a3;
  if ( a3 > 7 )
  {
    if ( (*(_BYTE *)(a1 + 40LL * (int)a3 + 65) & 0xF7) == 1 )
      return sub_3ED570(v5, v6, 0, a4);
    return 0xFFFFFFFFLL;
  }
  if ( (dword_411780[a3] & a2) != 0 || (*(_BYTE *)(a1 + 40LL * (int)a3 + 65) & 0xF7) == 1 )
    return sub_3ED570(v5, v6, 0, a4);
  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  if ( sub_3EA630(*(unsigned __int16 *)(a1 + 48)) )
    return sub_3ED570(v5, v6, 0, a4);
  return 0xFFFFFFFFLL;
}
