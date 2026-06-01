__int64 __fastcall google_breakpad::ExceptionHandler::SimulateSignalDelivery(
        google_breakpad::ExceptionHandler *this,
        int a2)
{
  ucontext_t ucp; // [rsp+10h] [rbp-430h] BYREF
  siginfo_t v4; // [rsp+3C0h] [rbp-80h] BYREF

  memset(&v4, 0, sizeof(v4));
  v4.si_code = 0;
  v4._sifields._pad[0] = getpid();
  getcontext(&ucp);
  return google_breakpad::ExceptionHandler::HandleSignal(this, a2, &v4, &ucp);
}

