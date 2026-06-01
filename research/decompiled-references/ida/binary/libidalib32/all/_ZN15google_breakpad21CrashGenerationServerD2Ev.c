// Alternative name is '_ZN15google_breakpad21CrashGenerationServerD1Ev'
void __fastcall google_breakpad::CrashGenerationServer::~CrashGenerationServer(
        google_breakpad::CrashGenerationServer *this)
{
  if ( *((_BYTE *)this + 56) )
    google_breakpad::CrashGenerationServer::Stop(this);
  std::string::~string((google_breakpad::CrashGenerationServer *)((char *)this + 48));
}

