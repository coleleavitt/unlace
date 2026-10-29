__int64 __fastcall google_breakpad::ExceptionHandler::InstallHandlersLocked(google_breakpad::ExceptionHandler *this)
{
  struct sigaction s; // [rsp+0h] [rbp-B0h] BYREF
  int k; // [rsp+A4h] [rbp-Ch]
  int j; // [rsp+A8h] [rbp-8h]
  int i; // [rsp+ACh] [rbp-4h]

  if ( byte_2562D0 )
    return 0;
  for ( i = 0; i <= 5; ++i )
  {
    if ( sigaction(dword_1D8150[i], nullptr, (struct sigaction *)&unk_255F40 + i) == -1 )
      return 0;
  }
  memset(&s, 0, sizeof(s));
  sigemptyset(&s.sa_mask);
  for ( j = 0; j <= 5; ++j )
    sigaddset(&s.sa_mask, dword_1D8150[j]);
  s.sa_handler = (__sighandler_t)google_breakpad::ExceptionHandler::SignalHandler;
  s.sa_flags = 134217732;
  for ( k = 0; k <= 5; ++k )
    sigaction(dword_1D8150[k], &s, nullptr);
  byte_2562D0 = 1;
  return 1;
}

