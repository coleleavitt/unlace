const char *__fastcall sub_690520(const char *src, size_t n)
{
  const char *result; // rax
  void *v3; // rcx

  result = src;
  if ( src )
  {
    if ( n )
    {
      if ( src[n] )
      {
        v3 = malloc(n + 1);
        if ( !v3 && (n != -1 || (v3 = malloc(1u)) == nullptr) )
          sub_25AA9F0("Allocation failed");
        result = (const char *)memcpy(v3, src, n);
        result[n] = 0;
      }
    }
    else
    {
      return &byte_3B9466E;
    }
  }
  return result;
}

