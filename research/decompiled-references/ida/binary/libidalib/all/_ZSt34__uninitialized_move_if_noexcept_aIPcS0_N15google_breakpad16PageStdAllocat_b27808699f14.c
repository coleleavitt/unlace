__int64 __fastcall std::__uninitialized_move_if_noexcept_a<char *,char *,google_breakpad::PageStdAllocator<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = std::__make_move_if_noexcept_iterator<char,std::move_iterator<char *>>(a2);
  v5 = std::__make_move_if_noexcept_iterator<char,std::move_iterator<char *>>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<char *>,char *,google_breakpad::PageStdAllocator<char>>(
           v5,
           v4,
           a3,
           a4);
}

