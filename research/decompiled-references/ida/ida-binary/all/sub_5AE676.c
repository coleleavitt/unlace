__int64 __fastcall sub_5AE676(int a1, struct msghdr *a2, unsigned int a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = sys_sendmsg(a1, a2, a3);
  if ( v4 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v4;
    return -1;
  }
  return v4;
}
