__int64 __fastcall sub_59289A(__int64 a1)
{
  __int64 result; // rax
  int *v2; // rax
  char *v3; // rax
  size_t v4; // rbx
  int *v5; // rax
  char *v6; // rax
  __int64 v7; // [rsp+18h] [rbp-18h]

  do
    v7 = sub_591723(*(_DWORD *)(a1 + 132), (const char *)&off_75968F + 2, 1u);
  while ( v7 == -1 && *__errno_location() == 4 );
  result = v7;
  if ( (_DWORD)v7 == -1 )
  {
    sub_596CDD("ExceptionHandler::SendContinueSignalToChild sys_write failed:", 61);
    v2 = __errno_location();
    v3 = strerror(*v2);
    v4 = strlen(v3);
    v5 = __errno_location();
    v6 = strerror(*v5);
    sub_596CDD(v6, v4);
    return sub_596CDD(&off_75968F, 1);
  }
  return result;
}
