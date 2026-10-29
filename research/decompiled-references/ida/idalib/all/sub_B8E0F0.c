__int64 __fastcall sub_B8E0F0(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rdi

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 8 )
    return a1 - 40;
  v1 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
  if ( (v1 & 4) != 0 )
    goto LABEL_6;
LABEL_3:
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    return 0;
  while ( (*(_BYTE *)(v2 + 8) & 0x7F) != 8 )
  {
    v1 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
    if ( (v1 & 4) == 0 )
      goto LABEL_3;
LABEL_6:
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v2 )
      return 0;
  }
  return v2 - 40;
}
