__int64 __fastcall sub_229D040(__int64 a1, __int64 a2)
{
  char *v2; // rax
  size_t v3; // rdx
  const void **v4; // rbx
  char *v5; // r14
  size_t v6; // rbp
  char **v7; // r12
  char **v9; // rax

  v2 = sub_229CCC0(a1, a2);
  if ( v3 )
  {
    v4 = (const void **)&off_2BED000;
    v5 = v2;
    v6 = v3;
    while ( 1 )
    {
      v7 = (char **)v4;
      if ( v4[1] == (const void *)v6 && !memcmp(v5, *v4, v6) )
        break;
      v4 += 4;
      if ( v4 == (const void **)&off_2BED300 )
        return 0;
    }
  }
  else
  {
    v9 = (char **)&off_2BED000;
    while ( 1 )
    {
      v7 = v9;
      if ( !v9[1] )
        break;
      v9 += 4;
      if ( v9 == &off_2BED300 )
        return 0;
    }
  }
  return *((unsigned int *)v7 + 4);
}
