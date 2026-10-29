bool __fastcall sub_640880(_BYTE *a1, _BYTE *a2)
{
  bool result; // al
  int utf8_char; // eax
  unsigned __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v4[0] = (unsigned __int64)a1;
  if ( a1 >= a2 )
  {
LABEL_4:
    result = 0;
    if ( a2 == a1 )
      return *a2 == 2;
  }
  else
  {
    do
    {
      while ( (unsigned __int8)(*a1 - 1) <= 3u )
      {
        v4[0] = tag_skipcode(a1);
        a1 = (_BYTE *)v4[0];
        if ( v4[0] >= (unsigned __int64)a2 )
          goto LABEL_4;
      }
      utf8_char = get_utf8_char(v4);
      a1 = (_BYTE *)v4[0];
      if ( utf8_char == -1 )
        a1 = (_BYTE *)++v4[0];
    }
    while ( a1 < a2 );
    result = 0;
    if ( a2 == a1 )
      return *a2 == 2;
  }
  return result;
}

