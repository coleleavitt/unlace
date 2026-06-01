__int64 __fastcall __gnu_cxx::operator-<int *,std::vector<int,google_breakpad::PageStdAllocator<int>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<int *,std::vector<int,google_breakpad::PageStdAllocator<int>>>::base(a1);
  return (v2
        - *(_QWORD *)__gnu_cxx::__normal_iterator<int *,std::vector<int,google_breakpad::PageStdAllocator<int>>>::base(a2)) >> 2;
}

