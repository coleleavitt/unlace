__int64 __fastcall sub_239CC0(__int64 *a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 i; // r13
  const char *v7; // rsi

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a1;
    v5 = 0;
    if ( a2 )
    {
      for ( i = *a1; ; i = v3 )
      {
        v7 = &s1;
        if ( *(_QWORD *)(v3 + 8) )
          v7 = *(const char **)v3;
        if ( *a2 == 47 )
        {
          if ( !strcmp(a2, v7) )
            return i;
        }
        else if ( !strcasecmp(a2, v7) )
        {
          return i;
        }
        ++v5;
        v3 += 48;
        if ( v2 == v5 )
          return 0;
      }
    }
    do
      ++v5;
    while ( v5 != v2 );
  }
  return 0;
}
