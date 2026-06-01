__int64 __fastcall __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator-(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-10h] BYREF
  __int64 v4; // [rsp+18h] [rbp-8h] BYREF

  v4 = -8 * a2 + *a1;
  __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::__normal_iterator(
    &v3,
    &v4);
  return v3;
}

