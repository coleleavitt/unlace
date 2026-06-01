unsigned __int64 __fastcall sub_B68580(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0 )
    return v2 - 40;
  do
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(sub_B68470(v2) + 16);
      if ( (v3 & 4) != 0 )
        break;
      v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0 )
        return v2 - 40;
    }
    v2 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( (*(_BYTE *)(v2 + 8) & 0x7F) != 0 );
  return v2 - 40;
}

