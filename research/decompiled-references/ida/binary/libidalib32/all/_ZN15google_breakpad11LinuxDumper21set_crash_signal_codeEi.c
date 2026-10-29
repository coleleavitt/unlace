google_breakpad::LinuxDumper *__fastcall google_breakpad::LinuxDumper::set_crash_signal_code(
        google_breakpad::LinuxDumper *this,
        int a2)
{
  *((_DWORD *)this + 9) = a2;
  return this;
}

