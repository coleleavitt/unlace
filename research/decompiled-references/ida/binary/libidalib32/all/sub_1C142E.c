__int64 __fastcall sub_1C142E(unsigned int a1, struct stat *a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]

  v3 = sys_fstat(a1, a2);
  if ( v3 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v3;
    return -1;
  }
  return v3;
}

