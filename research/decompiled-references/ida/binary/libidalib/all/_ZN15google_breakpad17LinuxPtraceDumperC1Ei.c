// Alternative name is '_ZN15google_breakpad17LinuxPtraceDumperC2Ei'
google_breakpad::LinuxPtraceDumper *__fastcall google_breakpad::LinuxPtraceDumper::LinuxPtraceDumper(
        google_breakpad::LinuxPtraceDumper *this,
        int a2)
{
  google_breakpad::LinuxDumper::LinuxDumper(this, a2, &byte_1D9F28);
  *(_QWORD *)this = off_240630;
  *((_BYTE *)this + 256) = 0;
  return this;
}

