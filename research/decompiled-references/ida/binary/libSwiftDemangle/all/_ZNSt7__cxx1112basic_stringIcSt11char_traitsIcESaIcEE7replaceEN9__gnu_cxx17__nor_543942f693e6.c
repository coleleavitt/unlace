_QWORD *__fastcall std::string::replace(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v4; // r8
  _BYTE *v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9

  v4 = *(_QWORD *)(a4 + 8);
  v5 = *(_BYTE **)a4;
  v6 = a3 - a2;
  v7 = a1[1];
  v8 = a2 - *a1;
  if ( v6 > v7 - v8 )
    v6 = a1[1] - v8;
  if ( v8 > v7 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::replace",
      v8,
      v7);
  return std::string::_M_replace(a1, a2 - *a1, v6, v5, v4);
}

