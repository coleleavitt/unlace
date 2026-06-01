__int64 __fastcall sub_22AF940(void *s2, char *n)
{
  char **v2; // rbx

  v2 = &off_2BF4CA0;
  while ( v2[1] != n || n && memcmp(*v2, s2, (size_t)n) )
  {
    v2 += 8;
    if ( v2 == &off_2BF5820 )
      return 0;
  }
  return *((unsigned __int8 *)v2 + 33);
}
