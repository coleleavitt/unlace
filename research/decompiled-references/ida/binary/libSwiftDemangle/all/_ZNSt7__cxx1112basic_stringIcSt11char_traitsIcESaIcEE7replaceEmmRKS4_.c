_QWORD *__fastcall std::string::replace(_QWORD *a1, size_t a2, unsigned __int64 a3, __int64 a4)
{
  size_t v4; // r8
  _BYTE *v5; // r10
  size_t v7; // rcx
  unsigned __int64 v8; // rdx

  v4 = *(_QWORD *)(a4 + 8);
  v5 = *(_BYTE **)a4;
  v7 = a1[1];
  v8 = v7 - a2;
  if ( v7 - a2 > a3 )
    v8 = a3;
  if ( a2 > v7 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      v7);
  return std::string::_M_replace(a1, a2, v8, v5, v4);
}

