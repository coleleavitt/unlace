_QWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::_S_construct<unsigned long,unsigned long>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax

  v3 = *(_QWORD *)std::forward<unsigned long>(a3);
  result = (_QWORD *)operator new(8u, a2);
  *result = v3;
  return result;
}

