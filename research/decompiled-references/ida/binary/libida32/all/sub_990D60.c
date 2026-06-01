int __fastcall sub_990D60(__int64 a1, const char *a2)
{
  size_t v2; // rbx
  size_t v3; // rdx
  size_t v4; // rbp
  int result; // eax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = strlen(a2);
  v4 = v3;
  if ( v2 <= v3 )
    v3 = v2;
  if ( !v3 || (result = memcmp(*(const void **)a1, a2, v3)) == 0 )
  {
    v6 = v2 - v4;
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

