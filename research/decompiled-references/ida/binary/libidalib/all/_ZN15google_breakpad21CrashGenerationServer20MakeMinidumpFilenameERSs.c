__int64 __fastcall google_breakpad::CrashGenerationServer::MakeMinidumpFilename(
        google_breakpad::CrashGenerationServer *this,
        std::string *a2)
{
  const char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char s[4096]; // [rsp+10h] [rbp-1040h] BYREF
  char v9[48]; // [rsp+1010h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+1040h] [rbp-10h] BYREF

  if ( (unsigned __int8)CreateGUID(v10) != 1 || (unsigned __int8)GUIDToString(v10, v9, 37) != 1 )
    return 0;
  v4 = (const char *)std::string::c_str((google_breakpad::CrashGenerationServer *)((char *)this + 48));
  snprintf(s, 0x1000u, "%s/%s.dmp", v4, v9);
  ((void (__fastcall *)(std::string *, char *, char *, __int64, __int64, __int64, std::string *, google_breakpad::CrashGenerationServer *))std::string::operator=)(
    a2,
    s,
    s,
    v5,
    v6,
    v7,
    a2,
    this);
  return 1;
}

