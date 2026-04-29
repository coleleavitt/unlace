int __fastcall sub_37FAF0(char **a1)
{
  char *v2; // rbx
  char *v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = *a1;
  while ( 1 )
  {
    v3 = (char *)tag_skipcodes(v2);
    v4 = *v3;
    v2 = v3;
    if ( v4 > 0x7F )
      break;
    LODWORD(v3) = isspace(v4);
    if ( !(_DWORD)v3 )
      break;
    do
      v5 = *++v2;
    while ( v5 <= 0x7F && isspace(v5) );
  }
  *a1 = v2;
  return (int)v3;
}
