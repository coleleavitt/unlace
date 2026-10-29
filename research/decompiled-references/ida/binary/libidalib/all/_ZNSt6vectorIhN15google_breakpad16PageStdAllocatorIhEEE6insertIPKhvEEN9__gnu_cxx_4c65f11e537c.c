__int64 __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::insert<unsigned char const*,void>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v8; // [rsp+10h] [rbp-40h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]

  v9 = a1;
  v8 = a2;
  v10 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::cbegin(a1);
  v13 = __gnu_cxx::operator-<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>(
          &v8,
          &v10);
  v11 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::begin(v9);
  v4 = __gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::operator+(
         &v11,
         v13);
  std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_insert_dispatch<unsigned char const*>(
    v9,
    v4,
    a3,
    a4);
  v12 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::begin(v9);
  return __gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::operator+(
           &v12,
           v13);
}

