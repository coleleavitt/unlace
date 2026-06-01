// Alternative name is '_ZN15google_breakpad17LinuxPtraceDumperD2Ev'
void __fastcall google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper(google_breakpad::LinuxPtraceDumper *this)
{
  *(_QWORD *)this = off_240630;
  google_breakpad::LinuxDumper::~LinuxDumper(this);
}

