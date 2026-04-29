char *__fastcall sub_18F60(char *s, _BYTE *a2)
{
  const char *v2; // rbx
  char *result; // rax

  v2 = s;
  if ( *a2 )
  {
    *(s - 1) = 95;
    v2 = s - 1;
  }
  result = strchr(v2, 44);
  if ( result )
  {
    if ( v2 == result )
      return result;
    *result = 0;
  }
  result = (char *)get_name_ea(-1, v2);
  if ( result != (char *)-1LL )
    return (char *)sub_5740((__int64)result, 1u, (__int64)"\nExported entry\n");
  return result;
}
