__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::cbegin(__int64 *a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = *a1;
  __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler * const*,std::vector<google_breakpad::ExceptionHandler *>>::__normal_iterator(
    &v2,
    &v3);
  return v2;
}

