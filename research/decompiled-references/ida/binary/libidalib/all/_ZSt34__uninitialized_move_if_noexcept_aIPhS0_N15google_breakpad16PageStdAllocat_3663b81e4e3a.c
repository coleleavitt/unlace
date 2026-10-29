__int64 __fastcall std::__uninitialized_move_if_noexcept_a<unsigned char *,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = std::__make_move_if_noexcept_iterator<unsigned char,std::move_iterator<unsigned char *>>(a2);
  v5 = std::__make_move_if_noexcept_iterator<unsigned char,std::move_iterator<unsigned char *>>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<unsigned char *>,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
           v5,
           v4,
           a3,
           a4);
}

