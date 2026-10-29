_BYTE *__fastcall sub_839960(_BYTE *a1, unsigned int a2)
{
  _BYTE *result; // rax
  char v3; // bl
  _BYTE *v4; // rax
  _BYTE *v5; // rdx

  result = a1;
  if ( a2 )
  {
    v3 = a2 & 7;
    if ( a2 >> 3 )
    {
      if ( a2 >> 6 )
      {
        v5 = (_BYTE *)sub_839960(a1, a2 >> 9);
        result = v5 + 1;
        *v5 = ((a2 >> 6) & 7) + 48;
      }
      v4 = result + 1;
      *(v4 - 1) = ((a2 >> 3) & 7) + 48;
      *v4 = v3 + 48;
      return v4 + 1;
    }
    else
    {
      *a1 = v3 + 48;
      return a1 + 1;
    }
  }
  return result;
}
