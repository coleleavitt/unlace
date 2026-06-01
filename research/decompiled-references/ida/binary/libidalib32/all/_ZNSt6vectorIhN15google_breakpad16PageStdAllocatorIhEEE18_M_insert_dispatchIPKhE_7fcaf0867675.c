__int64 __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_insert_dispatch<unsigned char const*>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // [rsp+8h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-30h]
  __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = a1;
  v7 = a2;
  v6 = a3;
  std::__iterator_category<unsigned char const*>(&v6);
  return std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_range_insert<unsigned char const*>(
           v8,
           v7,
           v6,
           a4);
}

