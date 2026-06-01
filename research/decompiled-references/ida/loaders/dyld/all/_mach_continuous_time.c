uint64_t mach_continuous_time(void)
{
  unsigned __int64 StatusReg; // x8
  __int64 v1; // x9
  uint64_t v3; // [xsp+8h] [xbp-28h]
  __int64 v4; // [xsp+18h] [xbp-18h]

  if ( MEMORY[0xFFFFFC091] )
  {
    if ( MEMORY[0xFFFFFC090] == 3 )
    {
      StatusReg = _ReadStatusReg(ACNTVCT_EL0);
    }
    else if ( MEMORY[0xFFFFFC090] == 2 )
    {
      StatusReg = _ReadStatusReg(CNTVCTSS_EL0);
    }
    else
    {
      __isb(0xFu);
      StatusReg = _ReadStatusReg(CNTVCT_EL0);
    }
    v1 = MEMORY[0xFFFFFC0A8];
  }
  else
  {
    do
    {
      v4 = MEMORY[0xFFFFFC098];
      v3 = mach_absolute_time();
    }
    while ( v4 != MEMORY[0xFFFFFC098] );
    StatusReg = v3;
    v1 = v4;
  }
  return v1 + StatusReg;
}
