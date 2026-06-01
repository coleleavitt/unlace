_QWORD *__fastcall std::string::replace(_QWORD *a1, size_t a2, unsigned __int64 a3, size_t a4, char a5)
{
  size_t v5; // r9
  __int64 v7; // rdx

  v5 = a1[1];
  v7 = v5 - a2;
  if ( v5 - a2 > a3 )
    v7 = a3;
  if ( a2 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      v5);
  return std::string::_M_replace_aux(a1, a2, v7, a4, a5);
}

