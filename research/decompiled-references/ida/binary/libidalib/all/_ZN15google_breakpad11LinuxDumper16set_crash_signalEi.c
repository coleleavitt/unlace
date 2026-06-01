google_breakpad::LinuxDumper *__fastcall google_breakpad::LinuxDumper::set_crash_signal(
        google_breakpad::LinuxDumper *this,
        int a2)
{
  *((_DWORD *)this + 8) = a2;
  return this;
}

