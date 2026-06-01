__int64 __fastcall sub_595F5E(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE v4[48]; // [rsp+10h] [rbp-70h] BYREF
  _BYTE v5[24]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v6[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+68h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1 || std::string::empty((std::string *)(a1 + 8)) )
    __assert_fail(
      "mode_ == kWriteMinidumpToFile && !directory_.empty()",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x57u,
      "void google_breakpad::MinidumpDescriptor::UpdatePath()");
  if ( (unsigned __int8)sub_5AD7A6(v5) != 1 || (unsigned __int8)sub_5AD7C0(v5, v4, 37) != 1 )
    __assert_fail(
      "false",
      "src/client/linux/handler/minidump_descriptor.cc",
      0x5Cu,
      "void google_breakpad::MinidumpDescriptor::UpdatePath()");
  std::string::clear((std::string *)(a1 + 16));
  sub_5961AC(v8, a1 + 8, "/");
  sub_59620E(v7, v8, v4);
  sub_59620E(v6, v7, ".dmp");
  std::string::operator=(a1 + 16, v6);
  std::string::~string((std::string *)v6);
  std::string::~string((std::string *)v7);
  std::string::~string((std::string *)v8);
  v2 = std::string::c_str((std::string *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}
