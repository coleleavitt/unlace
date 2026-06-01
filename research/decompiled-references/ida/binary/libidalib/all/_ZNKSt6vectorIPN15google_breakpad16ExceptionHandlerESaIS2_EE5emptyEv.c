__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::empty(__int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v2 = std::vector<google_breakpad::ExceptionHandler *>::end(a1);
  v3 = std::vector<google_breakpad::ExceptionHandler *>::begin(a1);
  return __gnu_cxx::operator==<google_breakpad::ExceptionHandler * const*,std::vector<google_breakpad::ExceptionHandler *>>(
           &v3,
           &v2);
}

