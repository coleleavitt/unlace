unsigned __int64 __fastcall sub_B8EE90(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi

  if ( ((*(_BYTE *)(a1 + 8) + 70) & 0x7Fu) > 3 )
    return 0;
  do
  {
    v2 = a1 - 64;
    v3 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
    if ( (v3 & 4) != 0 )
      a1 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    else
      a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( ((*(_BYTE *)(a1 + 8) + 70) & 0x7Fu) <= 3 );
  return v2;
}
