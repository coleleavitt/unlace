bool __fastcall sub_595D46(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  bool result; // al

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  std::string::string((std::string *)(a1 + 8), (const std::string *)(a2 + 8));
  std::string::string((std::string *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  *(_BYTE *)(a1 + 49) = *(_BYTE *)(a2 + 49);
  v2 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = v2;
  v3 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = v3;
  result = std::string::empty((std::string *)(a2 + 16));
  if ( !result )
    __assert_fail(
      "descriptor.path_.empty()",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x3Cu,
      "google_breakpad::MinidumpDescriptor::MinidumpDescriptor(const google_breakpad::MinidumpDescriptor&)");
  return result;
}
