__int64 sub_139CE0()
{
  if ( (get_aflags() & 0x40) != 0 )
    clr_abits();
  else
    set_abits();
  return 1;
}

