_BYTE *__fastcall tag_advance(_BYTE *a1, int a2)
{
  int i; // ebx
  int utf8_char; // eax
  _BYTE *v5; // [rsp+8h] [rbp-20h] BYREF

  v5 = a1;
  if ( a1 && a2 > 0 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v5 = (_BYTE *)tag_skipcodes();
      a1 = v5;
      if ( !*v5 )
        break;
      utf8_char = get_utf8_char(&v5);
      a1 = v5;
      if ( utf8_char == -1 )
        a1 = ++v5;
    }
  }
  return a1;
}

