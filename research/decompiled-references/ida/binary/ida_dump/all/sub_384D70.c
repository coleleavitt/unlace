int __fastcall sub_384D70(_QWORD *a1)
{
  char *v2; // rax
  unsigned int v3; // edi
  char *v4; // rbx
  unsigned int v5; // edi

  while ( 1 )
  {
    v2 = (char *)tag_skipcodes();
    v3 = *v2;
    v4 = v2;
    if ( v3 > 0x7F )
      break;
    LODWORD(v2) = isspace(v3);
    if ( !(_DWORD)v2 )
      break;
    do
      v5 = *++v4;
    while ( v5 <= 0x7F && isspace(v5) );
  }
  *a1 = v4;
  return (int)v2;
}
