__int64 __fastcall std::__find_if<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__ops::_Iter_equals_val<google_breakpad::ExceptionHandler * const>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+18h] [rbp-18h] BYREF

  v5 = a1;
  std::__iterator_category<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(&v5);
  return std::__find_if<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__ops::_Iter_equals_val<google_breakpad::ExceptionHandler * const>>(
           v5,
           a2,
           a3);
}

