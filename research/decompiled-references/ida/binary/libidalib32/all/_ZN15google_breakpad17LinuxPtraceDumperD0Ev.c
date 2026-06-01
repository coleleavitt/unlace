void __fastcall google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper(google_breakpad::LinuxPtraceDumper *this)
{
  google_breakpad::LinuxPtraceDumper::~LinuxPtraceDumper(this);
  operator delete(this, 0x108u);
}

