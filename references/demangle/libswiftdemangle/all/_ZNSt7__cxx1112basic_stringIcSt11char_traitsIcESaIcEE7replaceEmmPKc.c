_QWORD *__fastcall std::string::replace(_QWORD *a1, size_t a2, unsigned __int64 a3, char *a4)
{
  size_t v6; // rax
  size_t v7; // rcx
  unsigned __int64 v8; // rdx

  v6 = strlen(a4);
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
  return std::string::_M_replace(a1, a2, v8, a4, v6);
}
