__int64 __fastcall append_snprintf(char *s, __int64 a2)
{
  char *v2; // rdi
  __int64 result; // rax

  v2 = &s[strlen(s)];
  result = 0;
  if ( a2 - (__int64)v2 > 0 )
    return qvsnprintf(v2);
  return result;
}
