// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcRKS3_'
unsigned __int64 __fastcall std::string::basic_string(__int64 *a1, char *a2)
{
  __int64 v2; // rdx

  v2 = 1;
  *a1 = (__int64)(a1 + 2);
  if ( a2 )
    v2 = (__int64)&a2[strlen(a2)];
  return std::string::_M_construct<char const*>(a1, a2, v2);
}
