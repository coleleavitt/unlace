__int64 __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::begin(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  __gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator(
    &v2,
    &v3);
  return v2;
}

