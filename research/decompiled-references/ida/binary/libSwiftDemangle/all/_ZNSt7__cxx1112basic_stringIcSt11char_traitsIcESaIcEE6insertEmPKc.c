_QWORD *__fastcall std::string::insert(_QWORD *a1, size_t a2, char *a3)
{
  size_t v4; // rax
  size_t v5; // rcx

  v4 = strlen(a3);
  v5 = a1[1];
  if ( a2 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      v5);
  return std::string::_M_replace(a1, a2, 0, a3, v4);
}

