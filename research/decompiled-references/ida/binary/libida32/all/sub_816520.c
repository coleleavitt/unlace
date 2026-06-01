_BYTE *__fastcall sub_816520(_BYTE *a1, unsigned __int64 a2)
{
  char v2; // bl
  _BYTE *v4; // rdi

  v2 = a2 & 1;
  if ( a2 >> 1 )
  {
    if ( a2 >> 2 )
    {
      if ( a2 >> 3 )
        a1 = (_BYTE *)sub_816520();
      *a1++ = ((a2 & 4) != 0) + 48;
    }
    v4 = a1 + 1;
    *(v4 - 1) = ((a2 & 2) != 0) + 48;
    *v4 = v2 + 48;
    return v4 + 1;
  }
  else
  {
    *a1 = v2 + 48;
    return a1 + 1;
  }
}

