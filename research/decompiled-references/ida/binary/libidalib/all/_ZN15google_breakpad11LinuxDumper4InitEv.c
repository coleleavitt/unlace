_BOOL8 __fastcall google_breakpad::LinuxDumper::Init(google_breakpad::LinuxDumper *this)
{
  return (unsigned __int8)google_breakpad::LinuxDumper::ReadAuxv(this)
      && (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxDumper *))(*(_QWORD *)this + 88LL))(this)
      && (*(unsigned __int8 (__fastcall **)(google_breakpad::LinuxDumper *))(*(_QWORD *)this + 80LL))(this);
}

