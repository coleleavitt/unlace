__int64 __fastcall sub_B4E980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rax

  v4 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a1 + 82) & 0x40) != 0 && (v4 & 0x2000000) == 0 )
    return 1;
  if ( (v4 & 0x2000000) != 0
    || (*(_BYTE *)(a1 + 83) & 8) == 0 && ((*(_BYTE *)(a1 + 128) & 1) != 0 || *(_QWORD *)(a1 + 128)) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 83) & 0x40) != 0 )
    return 1;
  v6 = HIDWORD(v4);
  if ( (v6 & 0x20) != 0 || (v6 & 0x40) != 0 )
    return 1;
  else
    return sub_B69240(a1, a2, *(_BYTE *)(a1 + 83) & 0x40, a4);
}

