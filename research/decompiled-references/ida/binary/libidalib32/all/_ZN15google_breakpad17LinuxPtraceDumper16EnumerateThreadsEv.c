__int64 __fastcall google_breakpad::LinuxPtraceDumper::EnumerateThreads(google_breakpad::LinuxPtraceDumper *this)
{
  google_breakpad::DirectoryReader *v2; // rbx
  int v5; // [rsp+14h] [rbp-12Ch] BYREF
  char *v6; // [rsp+18h] [rbp-128h] BYREF
  char v7[256]; // [rsp+20h] [rbp-120h] BYREF
  google_breakpad::DirectoryReader *v8; // [rsp+120h] [rbp-20h]
  int v9; // [rsp+128h] [rbp-18h]
  int v10; // [rsp+12Ch] [rbp-14h]

  if ( (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxPtraceDumper *, char *, _QWORD, const char *))(*(_QWORD *)this + 72LL))(
         this,
         v7,
         *((unsigned int *)this + 2),
         "task") != 1 )
    return 0;
  v9 = sub_1B1A3F(v7, 0x10000, 0);
  if ( v9 < 0 )
    return 0;
  v2 = (google_breakpad::DirectoryReader *)operator new(
                                             0x224u,
                                             (google_breakpad::LinuxPtraceDumper *)((char *)this + 72));
  google_breakpad::DirectoryReader::DirectoryReader(v2, v9);
  v8 = v2;
  v10 = -1;
  while ( (unsigned __int8)google_breakpad::DirectoryReader::GetNextEntry(v8, (const char **)&v6) )
  {
    if ( (unsigned int)my_strcmp(v6, ".") && (unsigned int)my_strcmp(v6, "..") )
    {
      v5 = 0;
      if ( (unsigned __int8)my_strtoui(&v5, v6) && v10 != v5 )
      {
        v10 = v5;
        std::vector<int,google_breakpad::PageStdAllocator<int>>::push_back((char *)this + 112, &v5);
      }
    }
    google_breakpad::DirectoryReader::PopEntry(v8);
  }
  sub_1B198E(v9);
  return 1;
}

