__int64 __fastcall sub_D510(__int64 a1)
{
  __int16 v1; // ax
  int v3; // eax
  unsigned __int8 v4; // si

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 == 14 )
  {
    if ( *(_BYTE *)(a1 + 57) != 7 )
      return 0;
  }
  else if ( v1 != 17 || *(_BYTE *)(a1 + 57) != 4 )
  {
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 44);
  v4 = v3 & 0x1F;
  if ( (unsigned __int8)((*(_BYTE *)(a1 + 44) & 0x1F) - 1) > 0xEu )
    return 0;
  if ( (v3 & 0x10) != 0 )
    v4 = 16;
  return sub_D300(a1, v4, *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16));
}
