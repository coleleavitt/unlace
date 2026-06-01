__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::erase(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+8h] [rbp-28h]
  __int64 v7; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+18h] [rbp-18h] BYREF

  v6 = a1;
  v5 = a2;
  v7 = std::vector<google_breakpad::ExceptionHandler *>::cbegin(a1);
  v2 = __gnu_cxx::operator-<google_breakpad::ExceptionHandler * const*,std::vector<google_breakpad::ExceptionHandler *>>(
         &v5,
         &v7);
  v8[0] = std::vector<google_breakpad::ExceptionHandler *>::begin(v6);
  v3 = __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator+(
         v8,
         v2);
  return std::vector<google_breakpad::ExceptionHandler *>::_M_erase(v6, v3);
}

