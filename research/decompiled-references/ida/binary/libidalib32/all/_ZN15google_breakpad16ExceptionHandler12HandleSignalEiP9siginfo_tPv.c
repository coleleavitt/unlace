__int64 __fastcall google_breakpad::ExceptionHandler::HandleSignal(
        google_breakpad::ExceptionHandler *this,
        int a2,
        siginfo_t *a3,
        char *a4)
{
  bool v6; // al
  int v7; // ebx
  __int64 v9; // rdx
  char *v10; // rsi

  if ( *(_QWORD *)this && (*(unsigned __int8 (__fastcall **)(_QWORD))this)(*((_QWORD *)this + 2)) != 1 )
    return 0;
  v6 = !a3->si_code || a3->si_code == -6;
  if ( a3->si_code > 0 || v6 && (v7 = a3->_sifields._pad[0], v7 == getpid()) )
    sub_1A484E(4, 1u, 0, 0);
  memset(&unk_256380, 0, 0x630u);
  memcpy(&unk_256380, a3, 0x80u);
  v9 = 117;
  qmemcpy(&unk_256408, a4, 0x3A8u);
  v10 = a4 + 936;
  if ( *((_QWORD *)a4 + 28) )
  {
    v10 = *((char **)a4 + 28);
    memcpy(&unk_2567B0, v10, 0x200u);
  }
  dword_256400 = syscall(186, v10, v9);
  if ( *((_QWORD *)this + 15)
    && (*((unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))this + 15))(
         &unk_256380,
         1584,
         *((_QWORD *)this + 2)) )
  {
    return 1;
  }
  else
  {
    return google_breakpad::ExceptionHandler::GenerateDump(this, &unk_256380);
  }
}

