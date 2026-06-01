bool __fastcall sub_37F350(__int64 a1, int a2)
{
  bool result; // al
  int v3; // edx

  result = 0;
  if ( *(_DWORD *)(a1 + 196) != *(_DWORD *)(a1 + 16) && (a2 & 0x600) != 0x200 )
  {
    v3 = sub_4167A0(*(_QWORD *)(qword_2CA1698 + 1480));
    result = 1;
    if ( (*(_BYTE *)(a1 + 144) & 8) != 0 && ((*(_DWORD *)(a1 + 528) | a2) & 0x400) == 0 )
      return (*(_DWORD *)(a1 + 196) & (v3 - 1)) == 0;
  }
  return result;
}

