bool __fastcall google_breakpad::LinuxPtraceDumper::ThreadsSuspend(google_breakpad::LinuxPtraceDumper *this)
{
  int *v2; // rax
  size_t v3; // rbx
  const void *v4; // r12
  void *v5; // rax
  __int64 v6; // rax
  unsigned __int64 i; // [rsp+18h] [rbp-18h]

  if ( *((_BYTE *)this + 256) )
    return 1;
  for ( i = 0; i < std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112); ++i )
  {
    v2 = (int *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[]((char *)this + 112, i);
    if ( (unsigned __int8)sub_1B1C97(*v2) != 1 )
    {
      if ( i < std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112) - 1 )
      {
        v3 = 4 * (std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112) - i) - 4;
        v4 = (const void *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[](
                             (char *)this + 112,
                             i + 1);
        v5 = (void *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[]((char *)this + 112, i);
        memmove(v5, v4, v3);
      }
      v6 = std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112);
      std::vector<int,google_breakpad::PageStdAllocator<int>>::resize((char *)this + 112, v6 - 1);
      --i;
    }
  }
  *((_BYTE *)this + 256) = 1;
  return std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112) != 0;
}

