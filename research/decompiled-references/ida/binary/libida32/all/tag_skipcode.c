char *__fastcall tag_skipcode(char *a1)
{
  char v1; // al
  char v2; // al
  _BYTE *v3; // rdx
  char *result; // rax
  bool v5; // zf

  if ( !a1 )
    return nullptr;
  v1 = *a1;
  if ( *a1 > 3 )
  {
    v5 = v1 == 4;
    result = a1;
    if ( v5 )
      return a1 + 1;
    return result;
  }
  if ( v1 > 1 )
  {
    v2 = a1[1];
    return &a1[-(v2 == 0) + 2];
  }
  if ( v1 != 1 )
    return a1;
  v2 = a1[1];
  if ( v2 != 40 )
    return &a1[-(v2 == 0) + 2];
  v3 = a1 + 2;
  result = a1 + 10;
  while ( *v3 )
  {
    if ( ++v3 == result )
      return result;
  }
  return v3;
}

