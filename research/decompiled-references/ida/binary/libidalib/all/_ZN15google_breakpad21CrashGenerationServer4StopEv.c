__int64 __fastcall google_breakpad::CrashGenerationServer::Stop(google_breakpad::CrashGenerationServer *this)
{
  __int64 result; // rax
  void *thread_return; // [rsp+10h] [rbp-10h] BYREF
  ssize_t v3; // [rsp+18h] [rbp-8h]

  if ( pthread_self() == *((_QWORD *)this + 8) )
    __assert_fail(
      "pthread_self() != thread_",
      "src/client/linux/crash_generation/crash_generation_server.cc",
      0x77u,
      "void google_breakpad::CrashGenerationServer::Stop()");
  result = *((unsigned __int8 *)this + 56) ^ 1u;
  if ( *((_BYTE *)this + 56) == 1 )
  {
    do
      v3 = write(*((_DWORD *)this + 19), "x/tmp", 1u);
    while ( v3 == -1 && *__errno_location() == 4 );
    pthread_join(*((_QWORD *)this + 8), &thread_return);
    close(*((_DWORD *)this + 18));
    close(*((_DWORD *)this + 19));
    *((_BYTE *)this + 56) = 0;
    return (__int64)this;
  }
  return result;
}

