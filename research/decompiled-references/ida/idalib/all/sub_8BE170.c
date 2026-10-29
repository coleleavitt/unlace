__int64 __fastcall sub_8BE170(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx

  v1 = *(unsigned __int8 *)(a1 + 312);
  if ( (((_BYTE)v1 - 79) & 0xFD) != 0 )
  {
    if ( (unsigned __int8)(v1 - 58) > 0x2Eu || (v2 = 0x400000155001LL, !_bittest64(&v2, (unsigned int)(v1 - 58))) )
      sub_378C70((__int64)"Wrong file request %d from the vault server", (unsigned __int8)v1);
  }
  return 0;
}
