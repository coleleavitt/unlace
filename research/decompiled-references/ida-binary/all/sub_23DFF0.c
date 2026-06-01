__int64 __fastcall sub_23DFF0(double a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  char *v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  char *v9; // rcx

  v3 = dword_8CC5E8;
  if ( dword_8CC5E8 )
  {
    byte_8CC5EC = 0;
    return 1;
  }
  if ( dword_8CC5F0 <= 0 )
    return v3;
  if ( !qword_8CC108 )
  {
    v7 = (_QWORD *)operator new(0x10u);
    v7[1] = 0;
    *v7 = plain_suspend_req_t___vtable;
    if ( (int)sub_23DBF0(v7, a1, a3, v8, v9) <= 0 )
      return v3;
    sub_30A040("Suspending...");
    return 1;
  }
  if ( (unsigned int)sub_1698A0(
                       1,
                       (int)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
    return 1;
  return sub_23DCD0(
           a1,
           1,
           (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?",
           v4,
           v5);
}
