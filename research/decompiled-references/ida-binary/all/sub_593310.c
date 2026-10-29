_DWORD *__fastcall sub_593310(_DWORD *a1)
{
  if ( !sub_5932B2(a1) )
    __assert_fail(
      "IsMicrodumpOnConsole()",
      "./src/client/linux/handler/minidump_descriptor.h",
      0x8Au,
      "google_breakpad::MicrodumpExtraInfo* google_breakpad::MinidumpDescriptor::microdump_extra_info()");
  return a1 + 14;
}
