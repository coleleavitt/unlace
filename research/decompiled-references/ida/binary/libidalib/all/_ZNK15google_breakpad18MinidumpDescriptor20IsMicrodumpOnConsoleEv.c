bool __fastcall google_breakpad::MinidumpDescriptor::IsMicrodumpOnConsole(google_breakpad::MinidumpDescriptor *this)
{
  return *(_DWORD *)this == 3;
}

