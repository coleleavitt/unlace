google_breakpad::CrashGenerationClient *__fastcall google_breakpad::CrashGenerationClient::TryCreate(
        google_breakpad::CrashGenerationClient *this)
{
  google_breakpad::CrashGenerationClient *v2; // rbx

  if ( (int)this < 0 )
    return nullptr;
  v2 = (google_breakpad::CrashGenerationClient *)operator new(0x10u);
  sub_1C266A(v2, (int)this);
  return v2;
}

