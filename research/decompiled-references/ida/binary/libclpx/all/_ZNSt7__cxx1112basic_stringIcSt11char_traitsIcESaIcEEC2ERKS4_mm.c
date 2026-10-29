// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_mm'
__int64 __fastcall std::string::basic_string(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  *a1 = a1 + 2;
  if ( a3 > *(_QWORD *)(a2 + 8) )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  return std::string::_M_construct<char const*>();
}

