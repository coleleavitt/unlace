bool __fastcall sub_778FB0(const char *s2, void *s1, __int64 a3)
{
  size_t v4; // rdx
  bool result; // al

  v4 = strlen(s2);
  result = 0;
  if ( v4 == a3 )
  {
    result = 1;
    if ( v4 )
      return memcmp(s1, s2, v4) == 0;
  }
  return result;
}

