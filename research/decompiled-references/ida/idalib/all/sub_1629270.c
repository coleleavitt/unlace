__int64 __fastcall sub_1629270(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_BYTE *)(a1 + 19);
  result = 0;
  if ( (v1 & 0x40) != 0 )
  {
    v3 = (a1 + ((v1 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v3 + 1) & 4) != 0 )
      return *(_WORD *)(v3 + 8) & 0x1FF;
  }
  return result;
}
