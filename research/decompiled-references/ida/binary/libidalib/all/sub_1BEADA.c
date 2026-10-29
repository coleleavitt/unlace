__int64 __fastcall sub_1BEADA(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int a5, unsigned __int64 a6)
{
  unsigned __int64 v7; // [rsp+38h] [rbp-28h]

  v7 = sys_mmap(a1, a2, a3, a4, a5, a6);
  if ( v7 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v7;
    return -1;
  }
  return v7;
}

