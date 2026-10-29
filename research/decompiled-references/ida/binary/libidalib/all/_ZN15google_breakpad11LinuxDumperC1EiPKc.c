// Alternative name is '_ZN15google_breakpad11LinuxDumperC2EiPKc'
__int64 __fastcall google_breakpad::LinuxDumper::LinuxDumper(
        google_breakpad::LinuxDumper *this,
        int a2,
        const char *a3)
{
  *(_QWORD *)this = algn_2405B0;
  *((_DWORD *)this + 2) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  std::vector<unsigned long>::vector((char *)this + 40);
  *((_DWORD *)this + 16) = a2;
  google_breakpad::PageAllocator::PageAllocator((google_breakpad::LinuxDumper *)((char *)this + 72));
  google_breakpad::wasteful_vector<int>::wasteful_vector((char *)this + 112, (char *)this + 72, 8);
  google_breakpad::wasteful_vector<google_breakpad::MappingInfo *>::wasteful_vector(
    (char *)this + 160,
    (char *)this + 72,
    16);
  google_breakpad::wasteful_vector<unsigned long>::wasteful_vector((char *)this + 208, (char *)this + 72, 34);
  if ( !*((_QWORD *)this + 2) || (unsigned __int64)my_strlen(*((_QWORD *)this + 2)) > 0xFFF )
    __assert_fail(
      "root_prefix_ && my_strlen(root_prefix_) < 4096",
      "src/client/linux/minidump_writer/linux_dumper.cc",
      0x128u,
      "google_breakpad::LinuxDumper::LinuxDumper(pid_t, const char*)");
  return std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::resize((char *)this + 208, 34);
}

