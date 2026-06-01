// Alternative name is '_ZNSsC1IN9__gnu_cxx17__normal_iteratorIPcSsEEEET_S4_RKSaIcE'
__int64 __fastcall std::string::string<__gnu_cxx::__normal_iterator<char *,std::string>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax

  v4 = std::string::_S_construct<__gnu_cxx::__normal_iterator<char *,std::string>>(a2, a3, a4);
  return std::string::_Alloc_hider::_Alloc_hider(a1, v4, a4);
}

