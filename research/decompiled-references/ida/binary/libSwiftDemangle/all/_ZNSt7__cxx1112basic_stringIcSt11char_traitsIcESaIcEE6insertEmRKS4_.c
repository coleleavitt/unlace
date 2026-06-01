_QWORD *__fastcall std::string::insert(_QWORD *a1, size_t a2, __int64 a3)
{
  size_t v3; // rcx

  v3 = a1[1];
  if ( a2 > v3 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      v3);
  return std::string::_M_replace(a1, a2, 0, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
}

