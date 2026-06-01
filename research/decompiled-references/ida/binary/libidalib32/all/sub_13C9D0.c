__int64 __fastcall sub_13C9D0(double a1)
{
  if ( (unsigned int)sub_13BE00(0, 0, 0) == -1 )
    return 1;
  if ( (get_aflags() & 0x80u) != 0LL )
  {
    clr_abits();
    sub_8F660((__int64)"%a: don't force zero offsets in structures\n", a1);
    return 1;
  }
  set_abits();
  sub_8F660((__int64)"%a: force zero offsets in structures\n", a1);
  return 1;
}

