_DWORD *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<int>>::_S_construct<int,int const&>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  int v3; // ebx
  _DWORD *result; // rax

  v3 = *(_DWORD *)std::forward<int const&>(a3);
  result = (_DWORD *)operator new(4u, a2);
  *result = v3;
  return result;
}

