__int64 __fastcall std::__find_if<std::_List_iterator<google_breakpad::AppMemory>,__gnu_cxx::__ops::_Iter_equals_val<void * const>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+8h] [rbp-18h] BYREF
  __int64 v6; // [rsp+10h] [rbp-10h] BYREF
  __int64 v7; // [rsp+18h] [rbp-8h] BYREF

  v7 = a1;
  v6 = a2;
  v5 = a3;
  while ( (unsigned __int8)std::_List_iterator<google_breakpad::AppMemory>::operator!=(&v7, &v6)
       && (unsigned __int8)__gnu_cxx::__ops::_Iter_equals_val<void * const>::operator()<std::_List_iterator<google_breakpad::AppMemory>>(
                             &v5,
                             v7) != 1 )
    std::_List_iterator<google_breakpad::AppMemory>::operator++(&v7);
  return v7;
}

