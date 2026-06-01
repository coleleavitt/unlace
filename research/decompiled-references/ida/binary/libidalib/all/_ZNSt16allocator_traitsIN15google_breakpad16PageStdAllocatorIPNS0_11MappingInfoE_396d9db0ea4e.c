_QWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::_S_construct<google_breakpad::MappingInfo *,google_breakpad::MappingInfo * const&>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax

  v3 = *(_QWORD *)std::forward<google_breakpad::MappingInfo * const&>(a3);
  result = (_QWORD *)operator new(8u, a2);
  *result = v3;
  return result;
}

