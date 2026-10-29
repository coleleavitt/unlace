__int64 __fastcall google_breakpad::ExceptionHandler::SendContinueSignalToChild(
        google_breakpad::ExceptionHandler *this)
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
  __int64 v10; // [rsp+18h] [rbp-18h]

  do
    v10 = sub_1A55DD(*((_DWORD *)this + 33), "a", 1u);
  while ( v10 == -1 && *__errno_location() == 4 );
  result = v10;
  if ( (_DWORD)v10 == -1 )
  {
    logger::write(
      (logger *)"ExceptionHandler::SendContinueSignalToChild sys_write failed:",
      (const char *)&word_3C + 1,
      v1);
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

