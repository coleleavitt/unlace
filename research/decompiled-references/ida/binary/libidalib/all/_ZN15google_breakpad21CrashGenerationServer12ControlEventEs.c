__int64 __fastcall google_breakpad::CrashGenerationServer::ControlEvent(
        google_breakpad::CrashGenerationServer *this,
        char a2)
{
  char buf; // [rsp+1Fh] [rbp-1h] BYREF

  if ( (a2 & 0x10) != 0 )
    return 0;
  if ( (a2 & 1) == 0 )
    __assert_fail(
      "0x001 & revents",
      "src/client/linux/crash_generation/crash_generation_server.cc",
      0x127u,
      "bool google_breakpad::CrashGenerationServer::ControlEvent(short int)");
  if ( read(*((_DWORD *)this + 18), &buf, 1u) )
    return 0;
  if ( buf != 120 )
    __assert_fail(
      "0",
      "src/client/linux/crash_generation/crash_generation_server.cc",
      0x131u,
      "bool google_breakpad::CrashGenerationServer::ControlEvent(short int)");
  return 0;
}

