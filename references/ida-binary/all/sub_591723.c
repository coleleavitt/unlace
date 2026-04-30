__int64 __fastcall sub_591723(unsigned int a1, const char *a2, size_t a3)
{
  unsigned __int64 v4; // [rsp+28h] [rbp-18h]

  v4 = sys_write(a1, a2, a3);
  if ( v4 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v4;
    return -1;
  }
  return v4;
}
