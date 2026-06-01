unsigned __int64 __fastcall sub_B8DFE0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  char v3; // dl
  __int64 v4; // rax
  char v5; // dl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  v3 = *(_BYTE *)(v2 + 8) & 0x7F;
  if ( v3 == 62 )
  {
    if ( *(char *)(v2 + 12) >= 0 )
      goto LABEL_6;
    return v2;
  }
  if ( (*(_BYTE *)(v2 + 8) & 0x7D) != 4 && v3 != 25 )
    return v2;
  do
  {
    while ( 1 )
    {
LABEL_6:
      v4 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
      v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v4 & 4) != 0 )
        v2 = *(_QWORD *)v2;
      v5 = *(_BYTE *)(v2 + 8) & 0x7F;
      if ( v5 == 62 )
        break;
      if ( (*(_BYTE *)(v2 + 8) & 0x7D) != 4 && v5 != 25 )
        return v2;
    }
  }
  while ( *(char *)(v2 + 12) >= 0 );
  return v2;
}
