bool __fastcall __gnu_cxx::__ops::_Iter_equals_val<google_breakpad::ExceptionHandler * const>::operator()<__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>>(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-10h] BYREF
  _QWORD **v5; // [rsp+8h] [rbp-8h]

  v5 = a1;
  v4 = a2;
  v2 = (_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ExceptionHandler **,std::vector<google_breakpad::ExceptionHandler *>>::operator*(&v4);
  return *v2 == **v5;
}

