_QWORD *__fastcall std::string::insert(_QWORD *a1, size_t a2, _QWORD *a3, unsigned __int64 a4, size_t a5)
{
  _BYTE *v5; // rcx

  if ( a3[1] - a4 <= a5 )
    a5 = a3[1] - a4;
  if ( a4 > a3[1] )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a4,
      a3[1]);
  v5 = (_BYTE *)(a4 + *a3);
  if ( a2 > a1[1] )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      a1[1]);
  return std::string::_M_replace(a1, a2, 0, v5, a5);
}

