int __fastcall std::string::compare(_QWORD *a1, unsigned __int64 a2, size_t a3, const void *a4, size_t a5)
{
  unsigned __int64 v5; // rbx
  size_t v6; // rbx
  size_t v8; // rdx
  int result; // eax
  __int64 v10; // rbx

  v5 = a1[1];
  if ( a2 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      a1[1]);
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  v8 = a5;
  if ( v6 <= a5 )
    v8 = v6;
  if ( !v8 || (result = memcmp((const void *)(*a1 + a2), a4, v8)) == 0 )
  {
    v10 = v6 - a5;
    result = 0x7FFFFFFF;
    if ( v10 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
        return v10;
    }
  }
  return result;
}

