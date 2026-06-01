_QWORD *__fastcall std::string::insert(_QWORD *a1, __int64 a2, _BYTE *a3, size_t a4)
{
  size_t v5; // rcx
  size_t v6; // rsi

  v5 = a1[1];
  v6 = a2 - *a1;
  if ( v6 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      v6,
      v5);
  return std::string::_M_replace(a1, v6, 0, a3, a4);
}
