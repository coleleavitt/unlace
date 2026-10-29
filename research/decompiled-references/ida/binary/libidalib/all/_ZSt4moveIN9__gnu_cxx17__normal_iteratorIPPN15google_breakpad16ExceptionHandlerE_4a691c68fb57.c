__int64 __fastcall std::move<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = std::__miter_base<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(a2);
  v4 = std::__miter_base<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(a1);
  return std::__copy_move_a2<true,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(
           v4,
           v3,
           a3);
}

