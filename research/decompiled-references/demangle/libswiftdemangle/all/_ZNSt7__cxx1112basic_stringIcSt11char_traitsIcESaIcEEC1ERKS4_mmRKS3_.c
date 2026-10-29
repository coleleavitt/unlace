// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mmRKS3_'
unsigned __int64 __fastcall std::string::basic_string(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8

  v4 = a2[1];
  *a1 = (__int64)(a1 + 2);
  if ( a3 > v4 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", "string::string", a3, v4);
  v5 = v4 - a3;
  if ( v5 > a4 )
    v5 = a4;
  return std::string::_M_construct<char const*>(a1, (_BYTE *)(*a2 + a3), *a2 + a3 + v5);
}
