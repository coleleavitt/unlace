__int64 __fastcall sub_58FAF0(__int64 a1)
{
  __int64 result; // rax
  void *thread_return; // [rsp+10h] [rbp-10h] BYREF
  ssize_t v3; // [rsp+18h] [rbp-8h]

  if ( pthread_self() == *(_QWORD *)(a1 + 64) )
    __assert_fail(
      "pthread_self() != thread_",
      "src/client/linux/crash_generation/crash_generation_server.cc",
      0x77u,
      "void google_breakpad::CrashGenerationServer::Stop()");
  result = *(unsigned __int8 *)(a1 + 56) ^ 1u;
  if ( *(_BYTE *)(a1 + 56) == 1 )
  {
    do
      v3 = write(*(_DWORD *)(a1 + 76), "x/tmp", 1u);
    while ( v3 == -1 && *__errno_location() == 4 );
    pthread_join(*(_QWORD *)(a1 + 64), &thread_return);
    close(*(_DWORD *)(a1 + 72));
    close(*(_DWORD *)(a1 + 76));
    *(_BYTE *)(a1 + 56) = 0;
    return a1;
  }
  return result;
}
