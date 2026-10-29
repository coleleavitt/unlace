__int64 __fastcall std::copy<unsigned char const*,__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = std::__miter_base<unsigned char const*>(a2);
  v4 = std::__miter_base<unsigned char const*>(a1);
  return std::__copy_move_a2<false,unsigned char const*,__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>>(
           v4,
           v3,
           a3);
}

