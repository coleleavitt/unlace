__int64 __fastcall std::__find_if<std::_List_iterator<google_breakpad::AppMemory>,__gnu_cxx::__ops::_Iter_equals_val<void * const>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+18h] [rbp-28h] BYREF

  v5[0] = a1;
  std::__iterator_category<std::_List_iterator<google_breakpad::AppMemory>>(v5);
  return std::__find_if<std::_List_iterator<google_breakpad::AppMemory>,__gnu_cxx::__ops::_Iter_equals_val<void * const>>(
           v5[0],
           a2,
           a3);
}

