_DWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<int>>::_S_construct<int>(
        __int64 a1,
        void *a2)
{
  _DWORD *result; // rax

  result = (_DWORD *)operator new(4u, a2);
  *result = 0;
  return result;
}

