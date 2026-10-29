__int64 __fastcall std::__miter_base<google_breakpad::ExceptionHandler **>(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-8h] BYREF

  v3 = a1;
  v1 = std::move_iterator<google_breakpad::ExceptionHandler **>::base(&v3);
  return std::__miter_base<google_breakpad::ExceptionHandler **>(v1);
}

