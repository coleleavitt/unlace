__int64 __fastcall sub_5931B2(__int64 a1, const std::string *a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = -1;
  std::string::string((std::string *)(a1 + 8), a2);
  std::string::string((std::string *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 49) = 0;
  sub_593178((_QWORD *)(a1 + 56));
  result = (unsigned int)std::string::empty(a2) ^ 1;
  if ( !(_BYTE)result )
    __assert_fail(
      "!directory.empty()",
      "./src/client/linux/handler/minidump_descriptor.h",
      0x45u,
      "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const string&)");
  return result;
}
