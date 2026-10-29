__int64 __fastcall std::__copy_move_a2<true,google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax

  v3 = std::__niter_base<google_breakpad::ExceptionHandler **>(a3);
  v4 = std::__niter_base<google_breakpad::ExceptionHandler **>(a2);
  v5 = std::__niter_base<google_breakpad::ExceptionHandler **>(a1);
  return std::__copy_move_a<true,google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **>(v5, v4, v3);
}

