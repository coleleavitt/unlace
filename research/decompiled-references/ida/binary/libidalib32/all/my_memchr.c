unsigned __int8 *__fastcall my_memchr(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned __int8 *i; // [rsp+20h] [rbp-8h]

  for ( i = a1; i < &a1[a3]; ++i )
  {
    if ( a2 == *i )
      return i;
  }
  return nullptr;
}

