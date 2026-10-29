__int64 __fastcall sub_229FE00(void *s1, char *n)
{
  char **v2; // rbx
  char **v3; // r12
  char **v5; // rax

  if ( n )
  {
    v2 = &off_2BED300;
    while ( 1 )
    {
      v3 = v2;
      if ( v2[1] == n && !memcmp(s1, *v2, (size_t)n) )
        break;
      v2 += 4;
      if ( v2 == (char **)&off_2BEDEE0 )
        return 0;
    }
  }
  else
  {
    v5 = &off_2BED300;
    while ( 1 )
    {
      v3 = v5;
      if ( !v5[1] )
        break;
      v5 += 4;
      if ( v5 == (char **)&off_2BEDEE0 )
        return 0;
    }
  }
  return *((unsigned int *)v3 + 4);
}
