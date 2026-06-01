_QWORD *__fastcall std::string::replace(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // rcx
  size_t v9; // rsi
  unsigned __int64 v10; // rdx

  v6 = a3 - a2;
  v7 = strlen(a4);
  v8 = a1[1];
  v9 = a2 - *a1;
  v10 = v6;
  if ( v6 > v8 - v9 )
    v10 = a1[1] - v9;
  if ( v9 > v8 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2 - *a1,
      v8);
  return std::string::_M_replace(a1, v9, v10, a4, v7);
}

