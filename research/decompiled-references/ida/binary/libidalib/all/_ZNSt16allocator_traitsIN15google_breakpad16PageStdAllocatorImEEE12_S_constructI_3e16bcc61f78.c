_QWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::_S_construct<unsigned long>(
        __int64 a1,
        void *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)operator new(8u, a2);
  *result = 0;
  return result;
}

