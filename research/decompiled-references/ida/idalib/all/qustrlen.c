__int64 __fastcall qustrlen(_BYTE *a1)
{
  __int64 v1; // rbx
  int utf8_char; // edx
  _BYTE *v3; // rax
  _BYTE *v5; // [rsp+8h] [rbp-20h] BYREF

  v1 = 0;
  v5 = a1;
  if ( *a1 )
  {
    do
    {
      utf8_char = get_utf8_char(&v5);
      v3 = v5;
      if ( utf8_char == -1 )
        v3 = ++v5;
      ++v1;
    }
    while ( *v3 );
  }
  return v1;
}
