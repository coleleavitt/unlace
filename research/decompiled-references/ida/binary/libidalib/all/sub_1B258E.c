__int64 __fastcall sub_1B258E(unsigned int a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-18h]

  v2 = sys_close(a1);
  if ( v2 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v2;
    return -1;
  }
  return v2;
}

