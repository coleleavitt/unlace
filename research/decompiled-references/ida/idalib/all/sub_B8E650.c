unsigned __int64 __fastcall sub_B8E650(unsigned __int64 a1)
{
  char v1; // dl
  __int64 v2; // rax
  char v3; // dl

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v1 == 62 )
  {
    if ( *(char *)(a1 + 12) >= 0 )
      goto LABEL_4;
    return a1;
  }
  if ( (*(_BYTE *)(a1 + 8) & 0x7D) != 4 && v1 != 25 )
    return a1;
  do
  {
    while ( 1 )
    {
LABEL_4:
      v2 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
      a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v2 & 4) != 0 )
        a1 = *(_QWORD *)a1;
      v3 = *(_BYTE *)(a1 + 8) & 0x7F;
      if ( v3 == 62 )
        break;
      if ( (*(_BYTE *)(a1 + 8) & 0x7D) != 4 && v3 != 25 )
        return a1;
    }
  }
  while ( *(char *)(a1 + 12) >= 0 );
  return a1;
}
