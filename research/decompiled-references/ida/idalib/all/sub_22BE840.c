__int64 __fastcall sub_22BE840(void *s2, char *n)
{
  char **v2; // rbx

  v2 = off_2BF7B80;
  do
  {
    if ( v2[1] == n && (!n || !memcmp(*v2, s2, (size_t)n)) )
      return *((unsigned __int8 *)v2 + 48);
    if ( v2[8] == n && (!n || !memcmp(v2[7], s2, (size_t)n)) )
      return *((unsigned __int8 *)v2 + 104);
    if ( v2[15] == n && (!n || !memcmp(v2[14], s2, (size_t)n)) )
      return *((unsigned __int8 *)v2 + 160);
    if ( v2[22] == n && (!n || !memcmp(v2[21], s2, (size_t)n)) )
      return *((unsigned __int8 *)v2 + 216);
    v2 += 28;
  }
  while ( v2 != &off_2BF9780 );
  return 0;
}
