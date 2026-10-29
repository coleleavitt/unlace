google_breakpad::LinuxDumper *__fastcall google_breakpad::LinuxDumper::set_crash_address(
        google_breakpad::LinuxDumper *this,
        __int64 a2)
{
  *((_QWORD *)this + 3) = a2;
  return this;
}

