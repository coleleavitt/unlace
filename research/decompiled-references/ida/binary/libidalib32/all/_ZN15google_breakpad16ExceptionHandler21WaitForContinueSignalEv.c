__int64 __fastcall google_breakpad::ExceptionHandler::WaitForContinueSignal(google_breakpad::ExceptionHandler *this)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  int *v3; // rax
  char *v4; // rax
  const char *v5; // rbx
  int *v6; // rax
  char *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // [rsp+13h] [rbp-1Dh] BYREF
  int v11; // [rsp+14h] [rbp-1Ch]
  __int64 v12; // [rsp+18h] [rbp-18h]

  do
    v12 = sub_1A48C1(*((_DWORD *)this + 32), &v10, 1u);
  while ( v12 == -1 && *__errno_location() == 4 );
  result = v12;
  v11 = v12;
  if ( (_DWORD)v12 == -1 )
  {
    logger::write((logger *)"ExceptionHandler::WaitForContinueSignal sys_read failed:", word_38, v1);
    v3 = __errno_location();
    v4 = strerror(*v3);
    v5 = (const char *)strlen(v4);
    v6 = __errno_location();
    v7 = strerror(*v6);
    logger::write((logger *)v7, v5, v8);
    return logger::write((logger *)"\n", (const char *)&dword_0 + 1, v9);
  }
  return result;
}

