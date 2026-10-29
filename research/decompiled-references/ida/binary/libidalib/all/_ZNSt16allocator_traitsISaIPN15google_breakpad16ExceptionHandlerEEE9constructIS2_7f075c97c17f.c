__int64 __fastcall std::allocator_traits<std::allocator<google_breakpad::ExceptionHandler *>>::construct<google_breakpad::ExceptionHandler *,google_breakpad::ExceptionHandler *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<google_breakpad::ExceptionHandler *>(a3);
  return __gnu_cxx::new_allocator<google_breakpad::ExceptionHandler *>::construct<google_breakpad::ExceptionHandler *,google_breakpad::ExceptionHandler *>(
           a1,
           a2,
           v3);
}

