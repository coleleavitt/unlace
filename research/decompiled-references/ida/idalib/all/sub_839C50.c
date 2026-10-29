_BYTE *__fastcall sub_839C50(_BYTE *a1, unsigned __int64 a2)
{
  unsigned __int8 v2; // bl
  char v3; // al
  unsigned __int8 v5; // bp
  char v6; // al
  unsigned __int8 v7; // r12
  char v8; // al

  v2 = a2 & 0xF;
  if ( a2 >> 4 )
  {
    v5 = (a2 >> 4) & 0xF;
    if ( a2 >> 8 )
    {
      v7 = BYTE1(a2) & 0xF;
      if ( a2 >> 12 )
        a1 = (_BYTE *)sub_839C50();
      v8 = v7 + 48;
      if ( v7 >= 0xAu )
        v8 = v7 + 55;
      *a1++ = v8;
    }
    v6 = v5 + 48;
    if ( v5 >= 0xAu )
      v6 = v5 + 55;
    *a1++ = v6;
  }
  v3 = v2 + 48;
  if ( v2 >= 0xAu )
    v3 = v2 + 55;
  *a1 = v3;
  return a1 + 1;
}
