__int64 __fastcall google_breakpad::MinidumpDescriptor::microdump_extra_info(google_breakpad::MinidumpDescriptor *this)
{
  if ( !(unsigned __int8)google_breakpad::MinidumpDescriptor::IsMicrodumpOnConsole(this) )
    __assert_fail(
      "IsMicrodumpOnConsole()",
      "./src/client/linux/handler/minidump_descriptor.h",
      0x8Au,
      "google_breakpad::MicrodumpExtraInfo* google_breakpad::MinidumpDescriptor::microdump_extra_info()");
  return (__int64)this + 56;
}

