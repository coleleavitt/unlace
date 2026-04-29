_QWORD *__fastcall std::string::append(_QWORD *a1, __int64 *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi

  v5 = a2[1];
  v6 = *a2;
  if ( v5 - a3 <= a4 )
    a4 = v5 - a3;
  if ( a3 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::append",
      a3,
      v5);
  return std::string::_M_append(a1, (_BYTE *)(a3 + v6), a4);
}
