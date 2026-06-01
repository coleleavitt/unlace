__int64 __fastcall __gnu_cxx::new_allocator<std::_List_node<google_breakpad::MappingEntry>>::construct<google_breakpad::MappingEntry,google_breakpad::MappingEntry const&>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  const void *v3; // rbx
  void *v4; // rdx

  v3 = (const void *)std::forward<google_breakpad::MappingEntry const&>(a3);
  v4 = (void *)operator new(0x138u, a2);
  qmemcpy(v4, v3, 0x138u);
  return 39;
}

