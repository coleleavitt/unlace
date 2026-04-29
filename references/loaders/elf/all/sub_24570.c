__int64 __fastcall sub_24570(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  char byte; // al
  unsigned int v8; // edx

  v4 = a3 - 2;
  byte = get_byte(a3 - 2);
  if ( byte == -117 )
  {
    if ( (*(_BYTE *)(a1 + 346) & 0x10) != 0 && a2 != 9 )
    {
      sub_24230(a1, a2, a3, a4);
    }
    else
    {
      put_byte(v4, 141);
      sub_42050(a1, a3, a4, a4 - 4 - a3, 0, 4, 0, 0, 0);
    }
    return 1;
  }
  v8 = 0;
  if ( a2 != 9 )
  {
    if ( byte == -1 )
    {
      sub_24340(a1, a3, a4);
      return 1;
    }
    if ( (*(_BYTE *)(a1 + 346) & 0x10) != 0 )
    {
      sub_24400(a1, a2, a3, a4, byte);
      return 1;
    }
  }
  return v8;
}
