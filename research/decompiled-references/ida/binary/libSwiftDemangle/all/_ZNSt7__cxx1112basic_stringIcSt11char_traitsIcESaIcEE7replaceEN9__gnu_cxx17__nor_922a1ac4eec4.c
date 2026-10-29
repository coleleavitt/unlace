_QWORD *__fastcall std::string::replace(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  size_t v8; // r8

  v5 = a1[1];
  v6 = a2 - *a1;
  v7 = a3 - a2;
  v8 = a5 - (_QWORD)a4;
  if ( v7 > v5 - v6 )
    v7 = a1[1] - v6;
  if ( v6 > v5 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      v6,
      v5);
  return std::string::_M_replace(a1, a2 - *a1, v7, a4, v8);
}

