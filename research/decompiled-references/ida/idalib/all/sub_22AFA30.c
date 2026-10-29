bool __fastcall sub_22AFA30(void *s2, char *n, char a3)
{
  char **v4; // rbx
  char v6; // al

  v4 = &off_2BF4CA0;
  while ( v4[1] != n || n && memcmp(*v4, s2, (size_t)n) )
  {
    v4 += 8;
    if ( v4 == &off_2BF5820 )
      return 0;
  }
  v6 = 0;
  if ( (unsigned __int64)v4[3] > 3 )
    v6 = *(_DWORD *)v4[2] == 875984498;
  return a3 == v6;
}
