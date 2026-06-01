int __fastcall std::string::compare(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  size_t v3; // rbp
  size_t v4; // rdx
  int result; // eax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = v2;
  if ( v3 <= v2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 || (result = memcmp(*(const void **)a1, *(const void **)a2, v4)) == 0 )
  {
    v6 = v2 - v3;
    result = 0x7FFFFFFF;
    if ( v6 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v6 >= (__int64)0xFFFFFFFF80000000LL )
        return v6;
    }
  }
  return result;
}
