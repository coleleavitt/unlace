_BYTE *__fastcall sub_839E80(_BYTE *a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  char v3; // al
  unsigned __int8 v5; // bp
  char v6; // al
  unsigned __int8 v7; // r12
  __int64 v8; // rsi
  char v9; // al

  v2 = a2 & 0xF;
  if ( a2 >> 4 )
  {
    v5 = (a2 >> 4) & 0xF;
    if ( a2 >> 8 )
    {
      v7 = BYTE1(a2) & 0xF;
      v8 = a2 >> 12;
      if ( (_DWORD)v8 )
        a1 = (_BYTE *)sub_839E80(a1, v8);
      v9 = v7 + 48;
      if ( v7 >= 0xAu )
        v9 = v7 + 55;
      *a1++ = v9;
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
