_BYTE *__fastcall std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::_S_construct<unsigned char>(
        __int64 a1,
        void *a2)
{
  _BYTE *result; // rax

  result = (_BYTE *)operator new(1u, a2);
  *result = 0;
  return result;
}

