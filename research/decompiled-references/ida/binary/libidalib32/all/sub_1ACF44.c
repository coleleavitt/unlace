__int64 __fastcall sub_1ACF44(unsigned __int64 a1, size_t a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]

  v3 = sys_munmap(a1, a2);
  if ( v3 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v3;
    return -1;
  }
  return v3;
}

