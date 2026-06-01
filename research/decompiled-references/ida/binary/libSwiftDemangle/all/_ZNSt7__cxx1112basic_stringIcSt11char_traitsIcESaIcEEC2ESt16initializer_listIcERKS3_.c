// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ESt16initializer_listIcERKS3_'
unsigned __int64 __fastcall std::string::basic_string(__int64 *a1, _BYTE *a2, __int64 a3)
{
  *a1 = (__int64)(a1 + 2);
  return std::string::_M_construct<char const*>(a1, a2, (__int64)&a2[a3]);
}

