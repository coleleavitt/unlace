// Alternative name is '_ZN9__gnu_cxx17__normal_iteratorIPKhSt6vectorIhN15google_breakpad16PageStdAllocatorIhEEEEC1IPhEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE'
_QWORD *__fastcall __gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator<unsigned char *>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(a2);
  *a1 = v2;
  return a1;
}

