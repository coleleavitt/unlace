__int64 __fastcall sub_1A497E(pid_t a1, pid_t a2, int a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = sys_tgkill(a1, a2, a3);
  if ( v4 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v4;
    return -1;
  }
  return v4;
}

