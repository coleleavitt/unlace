char __fastcall sub_E16190(char *a1, size_t a2, const void *a3, __int64 a4)
{
  char result; // al

  if ( a3 == (const void *)-1LL )
    return a1 + 1 == nullptr;
  if ( a3 == (const void *)-2LL )
    return a1 + 2 == nullptr;
  result = 0;
  if ( a2 == a4 )
  {
    result = 1;
    if ( a2 )
      return memcmp(a1, a3, a2) == 0;
  }
  return result;
}

