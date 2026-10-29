__int64 __fastcall std::allocator_traits<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::construct<google_breakpad::AppMemory,google_breakpad::AppMemory const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<google_breakpad::AppMemory const&>(a3);
  return __gnu_cxx::new_allocator<std::_List_node<google_breakpad::AppMemory>>::construct<google_breakpad::AppMemory,google_breakpad::AppMemory const&>(
           a1,
           a2,
           v3);
}

