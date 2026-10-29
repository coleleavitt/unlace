__int64 __fastcall sub_72B5D0(char *s2)
{
  const char **v1; // rbp
  unsigned int v2; // ebx

  v1 = (const char **)&off_2B38440;
  v2 = 0;
  while ( strcasecmp(*v1, s2) )
  {
    ++v2;
    v1 += 2;
    if ( v2 == 6 )
      return 6;
  }
  return v2;
}
