int __fastcall sub_715B00(unsigned __int16 *a1, unsigned __int16 *a2)
{
  size_t v2; // rdx
  unsigned __int16 v3; // ax
  int result; // eax

  v2 = *a1;
  v3 = *a2;
  if ( (_WORD)v2 == *a2 )
  {
    result = memcmp(a1 + 1, a2 + 1, v2);
    if ( result )
      return (result >> 31) | 1;
  }
  else if ( (unsigned __int16)v2 < v3 )
  {
    return 2 * (memcmp(a1 + 1, a2 + 1, v2) > 0) - 1;
  }
  else
  {
    return 2 * (memcmp(a2 + 1, a1 + 1, v3) <= 0) - 1;
  }
  return result;
}

