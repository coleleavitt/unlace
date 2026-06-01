_BYTE *__fastcall sub_839BD0(_BYTE *a1, unsigned int a2)
{
  char v2; // bl
  bool v4; // bp
  _BYTE *v5; // rdi
  bool v6; // r12
  __int64 v7; // rsi

  v2 = a2 & 1;
  if ( a2 >> 1 )
  {
    v4 = (a2 & 2) != 0;
    if ( a2 >> 2 )
    {
      v6 = (a2 & 4) != 0;
      v7 = a2 >> 3;
      if ( (_DWORD)v7 )
        a1 = (_BYTE *)sub_839BD0(a1, v7);
      *a1++ = v6 + 48;
    }
    v5 = a1 + 1;
    *(v5 - 1) = v4 + 48;
    *v5 = v2 + 48;
    return v5 + 1;
  }
  else
  {
    *a1 = v2 + 48;
    return a1 + 1;
  }
}
