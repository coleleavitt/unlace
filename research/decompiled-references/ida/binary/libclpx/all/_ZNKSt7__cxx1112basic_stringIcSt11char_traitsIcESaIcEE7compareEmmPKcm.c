int __fastcall std::string::compare(_QWORD *a1, unsigned __int64 a2, size_t a3, const void *a4, size_t a5)
{
  unsigned __int64 v5; // rbx
  size_t v6; // rbx
  size_t v7; // rdx
  __int64 v8; // rbx
  int result; // eax
  size_t v10; // [rsp+8h] [rbp-10h]

  v5 = a1[1];
  if ( a2 > v5 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  v7 = a5;
  if ( v6 <= a5 )
    v7 = v6;
  if ( !v7 || (v10 = a5, result = memcmp((const void *)(*a1 + a2), a4, v7), a5 = v10, !result) )
  {
    v8 = v6 - a5;
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

