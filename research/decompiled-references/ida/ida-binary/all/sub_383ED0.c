__int64 __fastcall sub_383ED0(char *s2)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v4; // rbp
  const char *v5; // rdi

  v1 = (__int64 *)qword_8CF2A0;
  v2 = (__int64 *)(qword_8CF2A0 + 8 * xmmword_8CF2A8);
  if ( v2 == (__int64 *)qword_8CF2A0 )
    return 0;
  while ( 1 )
  {
    v4 = *v1;
    if ( *v1 )
    {
      v5 = &s1;
      if ( *(_QWORD *)(v4 + 64) )
        v5 = *(const char **)(v4 + 56);
      if ( !strcmp(v5, s2) )
        break;
    }
    if ( v2 == ++v1 )
      return 0;
  }
  return v4;
}
