__int64 __fastcall sub_B69870(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)(v2 + 8);
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 6 )
    return 1;
  do
  {
    v3 = *(_QWORD *)(sub_B68470(v2) + 16);
    if ( (v3 & 4) != 0 )
    {
      v2 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v2 )
        return 0;
    }
    else
    {
      v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v2 )
        return 0;
    }
  }
  while ( (*(_BYTE *)(v2 + 8) & 0x7F) != 6 );
  return 1;
}

