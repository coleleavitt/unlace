__int64 sub_13A270()
{
  if ( (get_aflags() & 0x40) != 0 )
    clr_abits();
  else
    set_abits();
  return 1;
}

