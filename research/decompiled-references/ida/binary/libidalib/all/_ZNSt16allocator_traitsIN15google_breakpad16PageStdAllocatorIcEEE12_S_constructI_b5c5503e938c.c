_BYTE *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<char>>::_S_construct<char,char>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  char v3; // bl
  _BYTE *result; // rax

  v3 = *(_BYTE *)std::forward<char>(a3);
  result = (_BYTE *)operator new(1u, a2);
  *result = v3;
  return result;
}

