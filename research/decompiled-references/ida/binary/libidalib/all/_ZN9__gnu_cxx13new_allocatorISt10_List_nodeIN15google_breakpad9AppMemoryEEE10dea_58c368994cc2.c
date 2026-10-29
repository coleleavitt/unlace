void __fastcall __gnu_cxx::new_allocator<std::_List_node<google_breakpad::AppMemory>>::deallocate(__int64 a1, void *a2)
{
  operator delete(a2);
}

