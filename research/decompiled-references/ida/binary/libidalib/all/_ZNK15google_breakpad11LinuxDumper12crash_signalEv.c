__int64 __fastcall google_breakpad::LinuxDumper::crash_signal(google_breakpad::LinuxDumper *this)
{
  return *((unsigned int *)this + 8);
}

