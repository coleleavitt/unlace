__int64 __fastcall std::__copy_move_a2<false,unsigned char const*,__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+28h] [rbp-18h] BYREF

  v3 = std::__niter_base<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>(a3);
  v4 = std::__niter_base<unsigned char const*>(a2);
  v5 = std::__niter_base<unsigned char const*>(a1);
  v8[0] = std::__copy_move_a<false,unsigned char const*,unsigned char *>(v5, v4, v3);
  __gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator(
    &v7,
    v8);
  return v7;
}

