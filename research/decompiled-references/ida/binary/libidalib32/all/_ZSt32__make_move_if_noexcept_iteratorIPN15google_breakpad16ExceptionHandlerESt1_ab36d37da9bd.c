__int64 __fastcall std::__make_move_if_noexcept_iterator<google_breakpad::ExceptionHandler *,std::move_iterator<google_breakpad::ExceptionHandler **>>(
        __int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h] BYREF

  std::move_iterator<google_breakpad::ExceptionHandler **>::move_iterator(&v2, a1);
  return v2;
}

