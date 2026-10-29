bool __fastcall __gnu_cxx::operator==<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(a1);
  return v2 == *(_QWORD *)__gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::base(a2);
}

