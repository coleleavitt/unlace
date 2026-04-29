__int64 *__fastcall std::string::erase(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = a1[1];
  if ( a2 > v3 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::erase",
      a2,
      v3);
  result = a1;
  if ( a3 == -1 )
  {
    v6 = *a1;
    a1[1] = a2;
    *(_BYTE *)(v6 + a2) = 0;
  }
  else if ( a3 )
  {
    v5 = v3 - a2;
    if ( v5 <= a3 )
      a3 = v5;
    std::string::_M_erase(a1, a2, a3);
    return a1;
  }
  return result;
}
