__int64 __fastcall sub_72B650(char *s1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = a3;
  LOBYTE(v3) = (strcasecmp(s1, "deflate") == 0) & a3;
  if ( (_BYTE)v3 )
  {
    *a2 = 2;
    return 1;
  }
  if ( !strcasecmp(s1, "zstd") )
  {
    *a2 = 3;
    return 1;
  }
  return v3;
}
