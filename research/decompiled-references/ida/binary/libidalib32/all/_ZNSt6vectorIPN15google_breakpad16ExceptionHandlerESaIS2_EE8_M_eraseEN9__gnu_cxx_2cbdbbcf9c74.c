__int64 __fastcall std::vector<google_breakpad::ExceptionHandler *>::_M_erase(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+8h] [rbp-28h]
  __int64 v7; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+18h] [rbp-18h] BYREF

  v6 = a1;
  v5 = a2;
  v7 = std::vector<google_breakpad::ExceptionHandler *>::end(a1);
  v8[0] = __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator+(
            &v5,
            1);
  if ( (unsigned __int8)__gnu_cxx::operator!=<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>(
                          v8,
                          &v7) )
  {
    v2 = std::vector<google_breakpad::ExceptionHandler *>::end(v6);
    v3 = __gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator+(
           &v5,
           1);
    std::move<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>,__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(
      v3,
      v2,
      v5);
  }
  *(_QWORD *)(v6 + 8) -= 8LL;
  std::allocator_traits<std::allocator<google_breakpad::ExceptionHandler *>>::destroy<google_breakpad::ExceptionHandler *>(
    v6,
    *(_QWORD *)(v6 + 8));
  return v5;
}

