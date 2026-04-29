_QWORD *__fastcall std::string::replace(
        _QWORD *a1,
        size_t a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        size_t a6)
{
  unsigned __int64 v6; // r10
  __int64 v9; // rcx
  size_t v10; // r8
  _BYTE *v11; // rcx
  unsigned __int64 v12; // rdx

  v6 = a4[1];
  v9 = *a4;
  v10 = v6 - a5;
  if ( v10 > a6 )
    v10 = a6;
  if ( a5 > v6 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a5,
      v6);
  v11 = (_BYTE *)(a5 + v9);
  v12 = a1[1] - a2;
  if ( v12 > a3 )
    v12 = a3;
  if ( a2 > a1[1] )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      a2,
      a1[1]);
  return std::string::_M_replace(a1, a2, v12, v11, v10);
}
