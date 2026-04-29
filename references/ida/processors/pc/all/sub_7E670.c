__int64 __fastcall sub_7E670(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  int v4; // edx

  v1 = 130;
  if ( *(_WORD *)(a1 + 24) != 92 )
    v1 = 642;
  if ( (unsigned __int8)is_stroff() )
    return v1 | 0x50u;
  v3 = *(_DWORD *)(a1 + 28);
  v4 = 80;
  if ( (v3 & 0x1018) != 0x1010 )
  {
    if ( (v3 & 0x1008) == 0 || (v4 = 32, (v3 & 0x1018) == 0x1008) )
      v4 = 64;
  }
  return v4 | v1 | 4u;
}
