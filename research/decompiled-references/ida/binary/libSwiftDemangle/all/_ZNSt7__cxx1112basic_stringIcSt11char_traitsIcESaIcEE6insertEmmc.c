_QWORD *__fastcall std::string::insert(_QWORD *a1, size_t a2, size_t a3, char a4)
{
  size_t v5; // rcx

  v5 = a1[1];
  if ( a2 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      v5);
  return std::string::_M_replace_aux(a1, a2, 0, a3, a4);
}

