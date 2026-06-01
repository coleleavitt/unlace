__int64 __fastcall std::string::append(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  unsigned __int64 v6; // rax

  v4 = a2[1];
  v5 = *a2;
  v6 = v4 - a3;
  if ( v4 - a3 > a4 )
    v6 = a4;
  if ( a3 > v4 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  return std::string::_M_append(a1, a3 + v5, v6);
}

