__int64 __fastcall sub_591594(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // [rsp+38h] [rbp-18h]

  v5 = sys_prctl(a1, a2, a3, a4);
  if ( v5 > 0xFFFFFFFFFFFFF000LL )
  {
    *__errno_location() = -(int)v5;
    return -1;
  }
  return v5;
}
