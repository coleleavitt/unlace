// Alternative name is '_ZN15google_breakpad21CrashGenerationServerC1EiPFvPvPKNS_10ClientInfoEPKSsES1_PFvS1_S4_ES1_bS6_'
__int64 __fastcall google_breakpad::CrashGenerationServer::CrashGenerationServer(
        google_breakpad::CrashGenerationServer *this,
        int a2,
        void (*a3)(void *, const google_breakpad::ClientInfo *, const std::string *),
        void *a4,
        void (*a5)(void *, const google_breakpad::ClientInfo *),
        void *a6,
        bool a7,
        const std::string *a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  *(_DWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_BYTE *)this + 40) = a7;
  std::string::string((google_breakpad::CrashGenerationServer *)((char *)this + 48));
  *((_BYTE *)this + 56) = 0;
  if ( a8 )
    return std::string::operator=((char *)this + 48, a8, (char *)this + 48, v9, v10, v11, a6, a5, a4, a3, a7);
  else
    return std::string::operator=((char *)this + 48, "/tmp", v8, v9, v10, v11, a6, a5, a4, a3, a7);
}

