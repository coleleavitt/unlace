__int64 __fastcall std::string::assign(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( a3 > *(_QWORD *)(a2 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  return std::string::_M_replace();
}

