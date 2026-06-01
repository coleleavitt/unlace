__int64 __fastcall google_breakpad::CrashGenerationServer::CreateReportChannel(
        google_breakpad::CrashGenerationServer *this,
        int *a2,
        int *a3)
{
  int fds[2]; // [rsp+18h] [rbp-8h] BYREF

  if ( socketpair(1, 5, 0, fds) )
    return 0;
  if ( setsockopt(fds[1], 1, 16, &unk_1D7EF0, 4u) )
    return 0;
  if ( fcntl(fds[1], 4, 2048) )
    return 0;
  if ( fcntl(fds[1], 2, 1) )
    return 0;
  *a2 = fds[0];
  *(_DWORD *)this = fds[1];
  return 1;
}

