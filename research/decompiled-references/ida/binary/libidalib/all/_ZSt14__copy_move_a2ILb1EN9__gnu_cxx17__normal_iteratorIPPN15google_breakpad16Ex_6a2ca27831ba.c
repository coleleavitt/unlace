__int64 __fastcall std::__copy_move_a2<true,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+28h] [rbp-18h] BYREF

  v3 = std::__niter_base<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>(a3);
  v4 = std::__niter_base<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>(a2);
  v5 = std::__niter_base<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>(a1);
  v8[0] = std::__copy_move_a<true,google_breakpad::ExceptionHandler **,google_breakpad::ExceptionHandler **>(v5, v4, v3);
  __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::__normal_iterator(
    &v7,
    v8);
  return v7;
}

