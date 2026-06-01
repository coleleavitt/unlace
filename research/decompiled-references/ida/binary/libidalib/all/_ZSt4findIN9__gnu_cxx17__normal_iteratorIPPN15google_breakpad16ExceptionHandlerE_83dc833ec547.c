__int64 __fastcall std::find<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,google_breakpad::ExceptionHandler *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = __gnu_cxx::__ops::__iter_equals_val<google_breakpad::ExceptionHandler * const>(a3);
  return std::__find_if<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__ops::_Iter_equals_val<google_breakpad::ExceptionHandler * const>>(
           a1,
           a2,
           v3);
}

