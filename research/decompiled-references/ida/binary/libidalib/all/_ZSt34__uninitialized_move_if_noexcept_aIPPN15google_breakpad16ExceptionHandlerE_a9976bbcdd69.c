__int64 __fastcall std::__uninitialized_move_if_noexcept_a<google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **,std::allocator<google_breakpad::ExceptionHandler *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = std::__make_move_if_noexcept_iterator<google_breakpad::ExceptionHandler *,std::move_iterator<google_breakpad::ExceptionHandler **>>(a2);
  v5 = std::__make_move_if_noexcept_iterator<google_breakpad::ExceptionHandler *,std::move_iterator<google_breakpad::ExceptionHandler **>>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<google_breakpad::ExceptionHandler **>,google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler *>(
           v5,
           v4,
           a3,
           a4);
}

