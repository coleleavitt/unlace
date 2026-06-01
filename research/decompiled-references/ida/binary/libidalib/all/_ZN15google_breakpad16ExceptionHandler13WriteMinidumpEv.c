__int64 __fastcall google_breakpad::ExceptionHandler::WriteMinidump(google_breakpad::ExceptionHandler *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD s[4]; // [rsp+10h] [rbp-640h] BYREF
  greg_t v6; // [rsp+20h] [rbp-630h]
  int v7; // [rsp+90h] [rbp-5C0h]
  ucontext_t v8; // [rsp+98h] [rbp-5B8h] BYREF
  __int64 v9; // [rsp+440h] [rbp-210h] BYREF
  int v10; // [rsp+648h] [rbp-8h] BYREF

  if ( (unsigned __int8)google_breakpad::ExceptionHandler::IsOutOfProcess(this) != 1
    && (unsigned __int8)google_breakpad::MinidumpDescriptor::IsFD((google_breakpad::ExceptionHandler *)((char *)this + 32)) != 1
    && (unsigned __int8)google_breakpad::MinidumpDescriptor::IsMicrodumpOnConsole((google_breakpad::ExceptionHandler *)((char *)this + 32)) != 1 )
  {
    google_breakpad::MinidumpDescriptor::UpdatePath((google_breakpad::ExceptionHandler *)((char *)this + 32));
  }
  else if ( (unsigned __int8)google_breakpad::MinidumpDescriptor::IsFD((google_breakpad::ExceptionHandler *)((char *)this + 32)) )
  {
    v2 = google_breakpad::MinidumpDescriptor::fd((google_breakpad::ExceptionHandler *)((char *)this + 32));
    lseek(v2, 0, 0);
    v3 = google_breakpad::MinidumpDescriptor::fd((google_breakpad::ExceptionHandler *)((char *)this + 32));
    v10 = ftruncate(v3, 0);
    google_breakpad::ignore_result<int>(&v10);
  }
  sub_1A544E(4, 1u, 0, 0);
  if ( getcontext(&v8) )
    return 0;
  memcpy(&v9, v8.uc_mcontext.fpregs, 0x200u);
  v7 = sub_1A578D();
  memset(s, 0, 0x80u);
  s[0] = -1;
  v6 = v8.uc_mcontext.gregs[16];
  return google_breakpad::ExceptionHandler::GenerateDump(this, s);
}

