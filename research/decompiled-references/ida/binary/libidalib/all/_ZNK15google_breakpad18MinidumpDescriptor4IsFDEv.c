bool __fastcall google_breakpad::MinidumpDescriptor::IsFD(google_breakpad::MinidumpDescriptor *this)
{
  return *(_DWORD *)this == 2;
}

