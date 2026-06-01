__int64 __fastcall google_breakpad::CrashGenerationServer::ThreadMain(
        google_breakpad::CrashGenerationServer *this,
        void *a2)
{
  google_breakpad::CrashGenerationServer::Run(this);
  return 0;
}

