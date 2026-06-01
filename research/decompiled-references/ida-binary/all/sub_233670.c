__int64 __fastcall sub_233670(char *s2)
{
  char *v1; // rbx
  char *v2; // r13
  __int64 v3; // rbp

  if ( !s2 )
    return 0;
  v1 = (char *)qword_8CC450;
  v2 = (char *)qword_8CC450 + 8 * xmmword_8CC458;
  if ( v2 == qword_8CC450 )
    return 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)v1;
    if ( !strcmp(*(const char **)(*(_QWORD *)v1 + 24LL), s2) )
      break;
    v1 += 8;
    if ( v1 == v2 )
      return 0;
  }
  return v3;
}
