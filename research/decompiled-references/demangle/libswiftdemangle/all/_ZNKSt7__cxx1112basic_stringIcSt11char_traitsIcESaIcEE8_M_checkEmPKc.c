unsigned __int64 __fastcall std::string::_M_check(__int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  result = a2;
  if ( a2 > v3 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return result;
}
