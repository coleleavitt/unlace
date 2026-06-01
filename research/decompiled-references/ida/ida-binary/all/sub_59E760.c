__int64 __fastcall sub_59E760(int a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = sys_ptrace(a1, a2, a3, a4);
  if ( v5 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v5;
    return -1;
  }
  return v5;
}
