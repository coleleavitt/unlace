__int64 __fastcall std::find<std::_List_iterator<google_breakpad::AppMemory>,void *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = __gnu_cxx::__ops::__iter_equals_val<void * const>(a3);
  return std::__find_if<std::_List_iterator<google_breakpad::AppMemory>,__gnu_cxx::__ops::_Iter_equals_val<void * const>>(
           a1,
           a2,
           v3);
}

