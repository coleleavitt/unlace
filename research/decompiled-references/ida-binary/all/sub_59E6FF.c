__int64 __fastcall sub_59E6FF(const char *a1, int a2, int a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = sys_open(a1, a2, a3);
  if ( v4 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v4;
    return -1;
  }
  return v4;
}
