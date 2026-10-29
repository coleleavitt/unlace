int __fastcall std::string::compare(
        _QWORD *a1,
        unsigned __int64 a2,
        size_t a3,
        _QWORD *a4,
        unsigned __int64 a5,
        size_t a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  size_t v8; // rbx
  size_t v9; // rbp
  size_t v10; // rdx
  __int64 v11; // rbx
  int result; // eax

  v6 = a1[1];
  if ( a2 > v6 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  v7 = a4[1];
  if ( a5 > v7 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  v8 = v6 - a2;
  if ( v8 > a3 )
    v8 = a3;
  v9 = v7 - a5;
  v10 = v8;
  if ( v9 > a6 )
    v9 = a6;
  if ( v9 <= v8 )
    v10 = v9;
  if ( !v10 || (result = memcmp((const void *)(*a1 + a2), (const void *)(*a4 + a5), v10)) == 0 )
  {
    v11 = v8 - v9;
    result = 0x7FFFFFFF;
    if ( v11 <= 0x7FFFFFFF )
    {
      result = 0x80000000;
      if ( v11 >= (__int64)0xFFFFFFFF80000000LL )
        return v11;
    }
  }
  return result;
}

