int __fastcall sub_592028(unsigned int a1, __int64 a2, __int64 a3)
{
  int result; // eax
  _QWORD *v5; // rax
  pid_t v6; // ebx
  pid_t v7; // eax
  struct sigaction oact; // [rsp+20h] [rbp-B0h] BYREF
  int i; // [rsp+B8h] [rbp-18h]
  char v11; // [rsp+BFh] [rbp-11h]

  result = qword_8D3070 && (unsigned __int8)qword_8D3070(a1, a2, a3);
  if ( !(_BYTE)result )
  {
    pthread_mutex_lock(&mutex);
    if ( !sigaction(a1, nullptr, &oact)
      && (__int64 (__fastcall *)())oact.sa_handler == sub_592028
      && (oact.sa_flags & 4) == 0 )
    {
      sigemptyset(&oact.sa_mask);
      sigaddset(&oact.sa_mask, a1);
      oact.sa_handler = (__sighandler_t)sub_592028;
      oact.sa_flags = 134217732;
      if ( sigaction(a1, &oact, nullptr) == -1 )
        sub_591AB4(a1);
      return pthread_mutex_unlock(&mutex);
    }
    else
    {
      v11 = 0;
      for ( i = sub_593B4E(qword_8D29E0) - 1; !v11 && i >= 0; --i )
      {
        v5 = (_QWORD *)sub_593B74(qword_8D29E0, i);
        v11 = sub_5922D0(*v5, a1, a2, a3);
      }
      if ( v11 )
        sub_591AB4(a1);
      else
        sub_591F7C();
      pthread_mutex_unlock(&mutex);
      result = *(_DWORD *)(a2 + 8);
      if ( result <= 0 || a1 == 6 )
      {
        v6 = syscall(186);
        v7 = getpid();
        result = (unsigned int)sub_5916C4(v7, v6, a1) >> 31;
        if ( (_BYTE)result )
          _exit(1);
      }
    }
  }
  return result;
}
