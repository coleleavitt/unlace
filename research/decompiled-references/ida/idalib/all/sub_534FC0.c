bool __fastcall sub_534FC0(__int64 a1)
{
  __int16 v1; // dx
  bool result; // al
  char v3; // dl

  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  v1 = *(_WORD *)(a1 + 68);
  if ( (v1 & 0x200) == 0 || (result = 1, (v1 & 0x40) != 0) )
  {
    v3 = *(_BYTE *)(a1 + 70);
    result = 0;
    if ( v3 )
      return (v3 & 0xFu) <= 0xC;
  }
  return result;
}
