_DWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<int>>::_S_construct<int,int>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *result; // rax

  v3 = *(_DWORD *)std::forward<int>(a3);
  result = (_DWORD *)operator new(4u, a2);
  *result = v3;
  return result;
}

