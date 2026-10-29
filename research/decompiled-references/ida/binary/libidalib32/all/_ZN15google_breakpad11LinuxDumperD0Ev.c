void __fastcall google_breakpad::LinuxDumper::~LinuxDumper(google_breakpad::LinuxDumper *this)
{
  google_breakpad::LinuxDumper::~LinuxDumper(this);
  operator delete(this, 0x100u);
}

