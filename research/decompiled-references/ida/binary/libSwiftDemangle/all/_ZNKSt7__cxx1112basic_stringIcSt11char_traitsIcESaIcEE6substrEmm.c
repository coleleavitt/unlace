__int64 *__fastcall std::string::substr(__int64 *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8

  v4 = a2[1];
  if ( a3 > v4 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      a3,
      a2[1]);
  v5 = v4 - a3;
  *a1 = (__int64)(a1 + 2);
  if ( v5 > a4 )
    v5 = a4;
  std::string::_M_construct<char const*>(a1, (_BYTE *)(a3 + *a2), a3 + *a2 + v5);
  return a1;
}

