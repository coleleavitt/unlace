__int64 __fastcall cstrlen(char *a1)
{
  char v1; // al
  unsigned int i; // edx

  v1 = *a1;
  for ( i = 0; *a1; v1 = *a1 )
  {
    ++a1;
    i += v1 != 126;
  }
  return i;
}

