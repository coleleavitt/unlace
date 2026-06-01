__int64 __fastcall sub_D0E9C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  v4 = sub_E21C70(a1);
  if ( !(_BYTE)v4 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_DC7D30(a3) )
      return v5;
  }
  if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x20) != 0 )
  {
    v5 = 1;
    *(_BYTE *)sub_D0E7B0(a3) = 1;
    return v5;
  }
  return sub_CFEE20(a1, a2);
}
