__int64 __fastcall google_breakpad::LinuxPtraceDumper::GetThreadInfoByIndex(
        google_breakpad::LinuxPtraceDumper *this,
        unsigned __int64 a2,
        google_breakpad::ThreadInfo *a3)
{
  google_breakpad::LineReader *v4; // rbx
  unsigned int v6; // [rsp+34h] [rbp-13Ch] BYREF
  char *v7; // [rsp+38h] [rbp-138h] BYREF
  char v8[264]; // [rsp+40h] [rbp-130h] BYREF
  google_breakpad::LineReader *v9; // [rsp+148h] [rbp-28h]
  int v10; // [rsp+154h] [rbp-1Ch]
  int v11; // [rsp+158h] [rbp-18h]
  unsigned int i; // [rsp+15Ch] [rbp-14h]

  if ( a2 >= std::vector<int,google_breakpad::PageStdAllocator<int>>::size((char *)this + 112) )
    return 0;
  v11 = *(_DWORD *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[]((char *)this + 112, a2);
  if ( !a3 )
    __assert_fail(
      "info != __null",
      "src/client/linux/minidump_writer/linux_ptrace_dumper.cc",
      0x11Bu,
      "virtual bool google_breakpad::LinuxPtraceDumper::GetThreadInfoByIndex(size_t, google_breakpad::ThreadInfo*)");
  if ( (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxPtraceDumper *, char *, _QWORD, const char *))(*(_QWORD *)this + 72LL))(
         this,
         v8,
         (unsigned int)v11,
         "status") != 1 )
    return 0;
  v10 = sub_1B263F(v8, 0, 0);
  if ( v10 < 0 )
    return 0;
  v4 = (google_breakpad::LineReader *)operator new(0x20Cu, (google_breakpad::LinuxPtraceDumper *)((char *)this + 72));
  google_breakpad::LineReader::LineReader(v4, v10);
  v9 = v4;
  *(_DWORD *)a3 = -1;
  *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
  while ( (unsigned __int8)google_breakpad::LineReader::GetNextLine(v9, (const char **)&v7, &v6) )
  {
    if ( (unsigned int)my_strncmp("Tgid:\t", v7, 6) )
    {
      if ( !(unsigned int)my_strncmp("PPid:\t", v7, 6) )
        my_strtoui((char *)a3 + 4, v7 + 6);
    }
    else
    {
      my_strtoui(a3, v7 + 6);
    }
    google_breakpad::LineReader::PopLine(v9, v6);
  }
  sub_1B258E(v10);
  if ( *((_DWORD *)a3 + 1) == -1 || *(_DWORD *)a3 == -1 )
    return 0;
  if ( (unsigned __int8)google_breakpad::LinuxPtraceDumper::ReadRegisterSet(this, a3, v11) != 1
    && (unsigned __int8)google_breakpad::LinuxPtraceDumper::ReadRegisters(this, a3, v11) != 1 )
  {
    return 0;
  }
  for ( i = 0; i <= 7; ++i )
  {
    if ( sub_1B26A0(3, v11, 8 * (i + 106LL), (unsigned __int64)a3 + 8 * i + 744) == -1 )
      return 0;
  }
  *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 21);
  return 1;
}

