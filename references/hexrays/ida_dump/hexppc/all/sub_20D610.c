__int64 __fastcall sub_20D610(_BYTE *a1, char a2)
{
  unsigned int v2; // edx
  char v3; // al
  _BYTE *v4; // rdi

  v2 = 0;
  if ( *a1 != a2 )
    return v2;
  v3 = a1[1];
  if ( !v3 )
    return v2;
  v4 = a1 + 1;
  while ( (unsigned __int8)(v3 - 48) <= 9u )
  {
    v3 = *++v4;
    if ( !v3 )
      return 1;
  }
  return 0;
}
