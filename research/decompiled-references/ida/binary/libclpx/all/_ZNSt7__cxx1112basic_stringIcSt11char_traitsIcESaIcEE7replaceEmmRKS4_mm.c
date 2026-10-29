__int64 __fastcall std::string::replace(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  if ( a5 > *(_QWORD *)(a4 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  if ( a2 > *(_QWORD *)(a1 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  return std::string::_M_replace();
}

