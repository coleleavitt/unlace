int __fastcall sub_FD4B10(__int64 a1, size_t a2, const void *a3)
{
  size_t v5; // rdx
  size_t v6; // rbx
  int result; // eax
  __int64 v8; // rbx

  v5 = a2;
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= a2 )
    v5 = *(_QWORD *)a1;
  if ( !v5 || (result = memcmp(*(const void **)(a1 + 8), a3, v5)) == 0 )
  {
    v8 = v6 - a2;
    result = 0x7FFFFFFF;
    if ( v8 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return v8;
    }
  }
  return result;
}
