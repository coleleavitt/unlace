// Alternative name is '_ZN15google_breakpad18MinidumpDescriptorC2ERKSs'
__int64 __fastcall google_breakpad::MinidumpDescriptor::MinidumpDescriptor(
        google_breakpad::MinidumpDescriptor *this,
        const std::string *a2)
{
  __int64 result; // rax

  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = -1;
  std::string::string((google_breakpad::MinidumpDescriptor *)((char *)this + 8), a2);
  std::string::string((google_breakpad::MinidumpDescriptor *)((char *)this + 16));
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = -1;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_BYTE *)this + 49) = 0;
  google_breakpad::MicrodumpExtraInfo::MicrodumpExtraInfo((google_breakpad::MinidumpDescriptor *)((char *)this + 56));
  result = (unsigned int)std::string::empty(a2) ^ 1;
  if ( !(_BYTE)result )
    __assert_fail(
      "!directory.empty()",
      "./src/client/linux/handler/minidump_descriptor.h",
      0x45u,
      "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const string&)");
  return result;
}

