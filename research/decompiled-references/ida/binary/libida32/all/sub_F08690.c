void __fastcall sub_F08690(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a2 & 0x200000) == 0 )
      return;
LABEL_5:
    sub_F074F0(
      a1,
      *(_QWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32));
    return;
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " adl");
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    goto LABEL_5;
}

