__int64 __fastcall sub_599DA5(const char *a1, struct stat *a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]

  v3 = sys_stat(a1, a2);
  if ( v3 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v3;
    return -1;
  }
  return v3;
}
