__int64 __fastcall sub_19330(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char byte; // al
  __int16 v7; // dx
  unsigned int v8; // ecx

  byte = get_byte(a2 - 2);
  if ( byte == -1 )
  {
    sub_19010(a1, a2, a3);
    return 1;
  }
  v7 = *(_WORD *)(a1 + 346) & 0x10;
  if ( byte != -117 )
  {
    v8 = 0;
    if ( !v7 )
      return v8;
    if ( byte == -123 )
      sub_19170(a1, a2, a3);
    else
      sub_19200(a1, a2, a3, byte);
    return 1;
  }
  if ( v7 )
  {
    sub_190E0(a1, a2, a3);
    return 1;
  }
  return sub_192A0(a1, a2, a3, a4);
}

