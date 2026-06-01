__int64 __fastcall std::string::copy(_QWORD *a1, _BYTE *a2, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r12
  size_t v7; // r12
  _BYTE *v8; // rsi

  v6 = a1[1];
  if ( a4 > v6 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::copy",
      a4,
      a1[1]);
  v7 = v6 - a4;
  if ( v7 > a3 )
    v7 = a3;
  if ( !v7 )
    return v7;
  v8 = (_BYTE *)(*a1 + a4);
  if ( v7 != 1 )
  {
    memcpy(a2, v8, v7);
    return v7;
  }
  *a2 = *v8;
  return 1;
}
