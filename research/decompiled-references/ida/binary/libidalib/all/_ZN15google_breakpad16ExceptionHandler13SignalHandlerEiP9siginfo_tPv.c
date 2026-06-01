int __fastcall google_breakpad::ExceptionHandler::SignalHandler(
        google_breakpad::ExceptionHandler *this,
        siginfo_t *a2,
        siginfo_t *a3,
        void *a4)
{
  int result; // eax
  google_breakpad::ExceptionHandler *v6; // rdi
  pid_t v7; // ebx
  pid_t v8; // eax
  int sig; // [rsp+1Ch] [rbp-B4h]
  struct sigaction oact; // [rsp+20h] [rbp-B0h] BYREF
  int i; // [rsp+B8h] [rbp-18h]
  char v13; // [rsp+BFh] [rbp-11h]

  sig = (int)this;
  result = qword_257B70 && (unsigned __int8)qword_257B70((unsigned int)this, a2, a3);
  if ( !(_BYTE)result )
  {
    pthread_mutex_lock(&mutex);
    if ( !sigaction((int)this, nullptr, &oact)
      && (__int64 (__fastcall *)(google_breakpad::ExceptionHandler *__hidden, int, siginfo_t *, void *))oact.sa_handler == google_breakpad::ExceptionHandler::SignalHandler
      && (oact.sa_flags & 4) == 0 )
    {
      sigemptyset(&oact.sa_mask);
      sigaddset(&oact.sa_mask, (int)this);
      oact.sa_handler = (__sighandler_t)google_breakpad::ExceptionHandler::SignalHandler;
      oact.sa_flags = 134217732;
      if ( sigaction((int)this, &oact, nullptr) == -1 )
        sub_1A596E((int)this);
      return pthread_mutex_unlock(&mutex);
    }
    else
    {
      v13 = 0;
      v6 = qword_2574E0;
      for ( i = std::vector<google_breakpad::ExceptionHandler *>::size(qword_2574E0) - 1; !v13 && i >= 0; --i )
      {
        v6 = *(google_breakpad::ExceptionHandler **)std::vector<google_breakpad::ExceptionHandler *>::operator[](
                                                      qword_2574E0,
                                                      i);
        v13 = google_breakpad::ExceptionHandler::HandleSignal(v6, sig, a2, a3);
      }
      if ( v13 )
        sub_1A596E(sig);
      else
        google_breakpad::ExceptionHandler::RestoreHandlersLocked(v6);
      pthread_mutex_unlock(&mutex);
      result = a2->si_code;
      if ( result <= 0 || sig == 6 )
      {
        v7 = syscall(186);
        v8 = getpid();
        result = (unsigned int)sub_1A557E(v8, v7, sig) >> 31;
        if ( (_BYTE)result )
          _exit(1);
      }
    }
  }
  return result;
}

