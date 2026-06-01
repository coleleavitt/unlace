const char *__fastcall ZSTD_getErrorName(unsigned __int64 a1)
{
  unsigned int v1; // eax
  bool v2; // cc
  __int64 v3; // rdi

  v1 = -(int)a1;
  v2 = a1 <= 0xFFFFFFFFFFFFFF88LL;
  v3 = 0;
  if ( !v2 )
    v3 = v1;
  return ZSTD_getErrorString_0(v3);
}

