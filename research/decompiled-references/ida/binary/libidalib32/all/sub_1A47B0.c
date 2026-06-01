__int64 sub_1A47B0()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-18h]

  v1 = sys_gettid();
  if ( v1 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v1;
    return -1;
  }
  return v1;
}

