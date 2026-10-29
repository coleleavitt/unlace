__int64 __fastcall std::string::replace(_QWORD *a1, __int64 a2, __int64 a3, const char *a4)
{
  strlen(a4);
  if ( (unsigned __int64)(a2 - *a1) > a1[1] )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  return std::string::_M_replace();
}

