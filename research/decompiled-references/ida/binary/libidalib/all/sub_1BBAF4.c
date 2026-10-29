__int64 __fastcall sub_1BBAF4(unsigned int a1, off_t a2, unsigned int a3)
{
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = sys_lseek(a1, a2, a3);
  if ( v4 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v4;
    return -1;
  }
  return v4;
}

