__int64 __fastcall sub_22BE180(void *s2, char *n, char a3)
{
  char **v4; // rbx

  v4 = off_2BF7B80;
  while ( *((_BYTE *)v4 + 49) || n != v4[1] || n && memcmp(*v4, s2, (size_t)n) || (*((_BYTE *)v4 + 29) & 2) == 0 && a3 )
  {
    v4 += 7;
    if ( v4 == (char **)&unk_2BF97F0 )
      return 0;
  }
  return *((unsigned int *)v4 + 4);
}
