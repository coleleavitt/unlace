__int64 __fastcall google_breakpad::ExceptionHandler::ThreadEntry(google_breakpad::ExceptionHandler *this, void *a2)
{
  sub_1A531C(*(_DWORD *)(*((_QWORD *)this + 2) + 132LL));
  google_breakpad::ExceptionHandler::WaitForContinueSignal(*((google_breakpad::ExceptionHandler **)this + 2));
  sub_1A531C(*(_DWORD *)(*((_QWORD *)this + 2) + 128LL));
  return (unsigned __int8)google_breakpad::ExceptionHandler::DoDump(
                            *((google_breakpad::ExceptionHandler **)this + 2),
                            *(_DWORD *)this,
                            *((const void **)this + 3),
                            *((_QWORD *)this + 4))
       ^ 1u;
}

