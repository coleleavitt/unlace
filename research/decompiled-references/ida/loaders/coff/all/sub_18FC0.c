char *__fastcall sub_18FC0(const char *a1)
{
  char *result; // rax

  result = strchr(a1, 61);
  if ( result && a1 != result && result[1] )
  {
    *result = 0;
    result = (char *)get_name_ea(-1, result + 1);
    if ( result != (char *)-1LL )
      return (char *)sub_5740((__int64)result, 1u, (__int64)"\nAlias: %s\n", a1);
  }
  return result;
}

