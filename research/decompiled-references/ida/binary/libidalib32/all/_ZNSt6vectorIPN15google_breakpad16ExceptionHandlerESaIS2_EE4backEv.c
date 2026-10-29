__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::back(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = std::vector<google_breakpad::ExceptionHandler *>::end(a1);
  v2 = __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator-(
         &v3,
         1);
  return __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator*(&v2);
}

