__int64 __fastcall google_breakpad::CrashGenerationServer::Start(google_breakpad::CrashGenerationServer *this)
{
  int pipedes[2]; // [rsp+18h] [rbp-8h] BYREF

  if ( *((_BYTE *)this + 56) || *(int *)this < 0 )
    return 0;
  if ( pipe(pipedes) )
    return 0;
  if ( fcntl(pipedes[0], 2, 1) )
    return 0;
  if ( fcntl(pipedes[1], 2, 1) )
    return 0;
  if ( fcntl(pipedes[0], 4, 2048) )
    return 0;
  *((_DWORD *)this + 18) = pipedes[0];
  *((_DWORD *)this + 19) = pipedes[1];
  if ( pthread_create(
         (pthread_t *)this + 8,
         nullptr,
         (void *(*)(void *))google_breakpad::CrashGenerationServer::ThreadMain,
         this) )
  {
    return 0;
  }
  *((_BYTE *)this + 56) = 1;
  return 1;
}

