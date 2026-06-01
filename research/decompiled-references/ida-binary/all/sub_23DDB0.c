bool __fastcall sub_23DDB0(double a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  char *v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  char *v8; // rcx

  if ( dword_8CC5E8 )
  {
    byte_8CC5EC = 0;
    return 1;
  }
  else if ( dword_8CC5F0 <= 0 )
  {
    return 0;
  }
  else if ( qword_8CC108 )
  {
    if ( (unsigned int)sub_1698A0(
                         1,
                         (int)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
      return 1;
    return sub_23DCD0(
             a1,
             1,
             (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?",
             v3,
             v4);
  }
  else
  {
    v6 = (_QWORD *)operator new(0x10u);
    v6[1] = 0;
    *v6 = plain_suspend_req_t___vtable;
    if ( (int)sub_23DBF0(v6, a1, a3, v7, v8) > 0 )
    {
      sub_30A040("Suspending...");
      return 1;
    }
    return 0;
  }
}
