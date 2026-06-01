__int64 __fastcall google_breakpad::LinuxPtraceDumper::ThreadsResume(google_breakpad::LinuxPtraceDumper *this)
{
  int *v2; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-10h]
  unsigned __int8 v4; // [rsp+1Fh] [rbp-1h]

  if ( *((_BYTE *)this + 256) != 1 )
    return 0;
  v4 = 1;
  for ( i = 0; i < std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112); ++i )
  {
    v2 = (int *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[]((char *)this + 112, i);
    v4 &= sub_1B29B0(*v2);
  }
  *((_BYTE *)this + 256) = 0;
  return v4;
}

