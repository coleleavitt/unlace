__int64 __fastcall google_breakpad::LinuxDumper::crash_signal_code(google_breakpad::LinuxDumper *this)
{
  return *((unsigned int *)this + 9);
}

