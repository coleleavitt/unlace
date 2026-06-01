_BYTE *__fastcall my_strrchr(_BYTE *a1, char a2)
{
  _BYTE *v4; // [rsp+14h] [rbp-8h]

  v4 = nullptr;
  while ( *a1 )
  {
    if ( a2 == *a1 )
      v4 = a1;
    ++a1;
  }
  return v4;
}

