const char *__fastcall sub_22AFC60(void *s2, char *n)
{
  char **v2; // rbx

  v2 = &off_2BF4CA0;
  while ( v2[1] != n || n && memcmp(*v2, s2, (size_t)n) )
  {
    v2 += 8;
    if ( &off_2BF5820 == v2 )
      return &byte_22F0C30;
  }
  return v2[2];
}
