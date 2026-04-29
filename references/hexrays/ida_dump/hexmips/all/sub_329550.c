__int64 __fastcall sub_329550(char *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // rbx

  v2 = *a1;
  if ( (_BYTE)v2 != 95 )
  {
    v3 = 0;
    if ( v2 > 0x7F || !isalpha(v2) )
      return v3;
  }
  v4 = a1[1];
  v5 = a1 + 1;
  if ( !a1[1] )
    return 1;
  while ( (_BYTE)v4 == 95 || v4 <= 0x7F && isalnum(v4) )
  {
    v4 = *++v5;
    if ( !(_BYTE)v4 )
      return 1;
  }
  return 0;
}
