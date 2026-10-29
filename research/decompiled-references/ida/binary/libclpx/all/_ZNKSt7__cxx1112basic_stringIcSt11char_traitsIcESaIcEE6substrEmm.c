_QWORD *__fastcall std::string::substr(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a3 > *(_QWORD *)(a2 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  *a1 = a1 + 2;
  if ( a3 > *(_QWORD *)(a2 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  std::string::_M_construct<char const*>();
  return a1;
}

