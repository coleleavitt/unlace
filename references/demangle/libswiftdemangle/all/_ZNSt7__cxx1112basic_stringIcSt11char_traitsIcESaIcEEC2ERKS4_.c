// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_'
unsigned __int64 __fastcall std::string::basic_string(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 8);
  *a1 = (__int64)(a1 + 2);
  return std::string::_M_construct<char *>(a1, *(_BYTE **)a2, *(_QWORD *)a2 + v2);
}
