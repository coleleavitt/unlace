int __fastcall std::string::compare(__int64 a1, const char *a2)
{
  size_t v2; // rbx
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rdx
  int result; // eax
  __int64 v7; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = strlen(a2);
  v4 = v3;
  v5 = v2;
  if ( v3 <= v2 )
    v5 = v3;
  if ( !v5 || (result = memcmp(*(const void **)a1, a2, v5)) == 0 )
  {
    v7 = v2 - v4;
    result = 0x7FFFFFFF;
    if ( v7 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v7 >= (__int64)0xFFFFFFFF80000000LL )
        return v7;
    }
  }
  return result;
}

