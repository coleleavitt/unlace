bool __fastcall sub_22AF9B0(void *s2, char *n)
{
  char **v2; // rbx

  v2 = &off_2BF4CA0;
  while ( v2[1] != n || n && memcmp(*v2, s2, (size_t)n) )
  {
    v2 += 8;
    if ( v2 == &off_2BF5820 )
      return 0;
  }
  if ( !*((_DWORD *)v2 + 10) || !v2[6] )
    return 0;
  return v2[7] != nullptr;
}
