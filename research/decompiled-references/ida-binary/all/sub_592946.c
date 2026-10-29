__int64 __fastcall sub_592946(__int64 a1)
{
  __int64 result; // rax
  int *v2; // rax
  char *v3; // rax
  size_t v4; // rbx
  int *v5; // rax
  char *v6; // rax
  char v7; // [rsp+13h] [rbp-1Dh] BYREF
  int v8; // [rsp+14h] [rbp-1Ch]
  __int64 v9; // [rsp+18h] [rbp-18h]

  do
    v9 = sub_591607(*(_DWORD *)(a1 + 128), &v7, 1u);
  while ( v9 == -1 && *__errno_location() == 4 );
  result = v9;
  v8 = v9;
  if ( (_DWORD)v9 == -1 )
  {
    sub_596CDD("ExceptionHandler::WaitForContinueSignal sys_read failed:", 56);
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
