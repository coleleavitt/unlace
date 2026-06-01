int __fastcall std::string::compare(_QWORD *a1, unsigned __int64 a2, size_t a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rbx
  size_t v6; // rbp
  size_t v7; // rdx
  __int64 v8; // rbx
  int result; // eax

  v4 = a1[1];
  if ( a2 > v4 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  v5 = v4 - a2;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v5 > a3 )
    v5 = a3;
  v7 = v5;
  if ( v6 <= v5 )
    v7 = *(_QWORD *)(a4 + 8);
  if ( !v7 || (result = memcmp((const void *)(*a1 + a2), *(const void **)a4, v7)) == 0 )
  {
    v8 = v5 - v6;
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

