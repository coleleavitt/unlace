// Alternative name is '_ZN15google_breakpad11LinuxDumperD2Ev'
void __fastcall google_breakpad::LinuxDumper::~LinuxDumper(google_breakpad::LinuxDumper *this)
{
  *(_QWORD *)this = algn_2405B0;
  google_breakpad::wasteful_vector<unsigned long>::~wasteful_vector((char *)this + 208);
  google_breakpad::wasteful_vector<google_breakpad::MappingInfo *>::~wasteful_vector((char *)this + 160);
  google_breakpad::wasteful_vector<int>::~wasteful_vector((char *)this + 112);
  google_breakpad::PageAllocator::~PageAllocator((google_breakpad::LinuxDumper *)((char *)this + 72));
  std::vector<unsigned long>::~vector((char *)this + 40);
}

