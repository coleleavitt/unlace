__int64 __fastcall sub_590178(__int64 a1, char a2)
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
  if ( read(*(_DWORD *)(a1 + 72), &buf, 1u) )
    return 0;
  if ( buf != 120 )
    __assert_fail(
      "0",
      "src/client/linux/crash_generation/crash_generation_server.cc",
      0x131u,
      "bool google_breakpad::CrashGenerationServer::ControlEvent(short int)");
  return 0;
}
