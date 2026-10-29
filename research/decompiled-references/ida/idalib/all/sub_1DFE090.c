unsigned __int64 __fastcall sub_1DFE090(__int64 *a1, __int64 a2)
{
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    return sub_18C69A0(*a1, *(_DWORD *)(a2 + 4), (*(_BYTE *)(a2 + 2) >> 3) & 0xF);
  else
    return a2;
}
