__int64 __fastcall sub_2234AA0(char a1)
{
  __int64 result; // rax
  _BYTE *v2; // rax
  signed __int64 v3; // rax

  result = 1;
  if ( a1 != 101 )
  {
    result = 0;
    if ( a1 != 105 )
    {
      v2 = memchr("mafdqlcbkjtpvnh", a1, 0xFu);
      if ( !v2 )
        return (unsigned int)(a1 - 80);
      v3 = v2 - "mafdqlcbkjtpvnh";
      if ( v3 == -1 )
        return (unsigned int)(a1 - 80);
      else
        return (unsigned int)(v3 + 2);
    }
  }
  return result;
}
