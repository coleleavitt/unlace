__int64 __fastcall sub_1B276F(pid_t a1, int *a2, int a3, struct rusage *a4)
{
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = sys_wait4(a1, a2, a3, a4);
  if ( v5 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v5;
    return -1;
  }
  return v5;
}

