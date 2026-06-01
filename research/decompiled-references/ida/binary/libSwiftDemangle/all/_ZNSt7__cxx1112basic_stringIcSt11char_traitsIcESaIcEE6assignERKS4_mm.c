_QWORD *__fastcall std::string::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // r9
  size_t v5; // r8

  v4 = a2[1];
  v5 = v4 - a3;
  if ( v4 - a3 > a4 )
    v5 = a4;
  if ( a3 > v4 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::assign",
      a3,
      v4);
  return std::string::_M_replace(a1, 0, a1[1], (_BYTE *)(a3 + *a2), v5);
}

