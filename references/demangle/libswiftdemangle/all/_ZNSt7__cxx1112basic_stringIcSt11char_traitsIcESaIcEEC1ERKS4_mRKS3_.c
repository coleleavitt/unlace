// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mRKS3_'
unsigned __int64 __fastcall std::string::basic_string(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8

  v3 = a2[1];
  *a1 = (__int64)(a1 + 2);
  if ( a3 > v3 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      a3,
      v3);
  return std::string::_M_construct<char const*>(a1, (_BYTE *)(*a2 + a3), *a2 + v3);
}
