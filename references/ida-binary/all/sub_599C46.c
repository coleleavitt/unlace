__int64 sub_599C46()
{
  unsigned __int64 v1; // [rsp+8h] [rbp-18h]

  v1 = sys_getpid();
  if ( v1 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v1;
    return -1;
  }
  return v1;
}
