google_breakpad::LinuxDumper *__fastcall google_breakpad::LinuxDumper::set_crash_thread(
        google_breakpad::LinuxDumper *this,
        int a2)
{
  *((_DWORD *)this + 16) = a2;
  return this;
}

