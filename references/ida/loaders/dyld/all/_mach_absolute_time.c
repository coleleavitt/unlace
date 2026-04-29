uint64_t mach_absolute_time(void)
{
  __int64 v1; // x1
  unsigned __int64 v2; // x0
  __int64 v3; // x1
  unsigned __int64 StatusReg; // x0
  __int64 v5; // x1
  unsigned __int64 v6; // x0

  if ( !MEMORY[0xFFFFFC090] )
    return mach_absolute_time_kernel();
  if ( MEMORY[0xFFFFFC090] == 2 )
  {
    do
    {
      v3 = MEMORY[0xFFFFFC088];
      StatusReg = _ReadStatusReg(CNTVCTSS_EL0);
    }
    while ( v3 != MEMORY[0xFFFFFC088] );
    return StatusReg + v3;
  }
  else if ( MEMORY[0xFFFFFC090] == 3 )
  {
    do
    {
      v5 = MEMORY[0xFFFFFC088];
      v6 = _ReadStatusReg(ACNTVCT_EL0);
    }
    while ( v5 != MEMORY[0xFFFFFC088] );
    return v6 + v5;
  }
  else
  {
    __isb(0xFu);
    do
    {
      v1 = MEMORY[0xFFFFFC088];
      v2 = _ReadStatusReg(CNTVCT_EL0);
    }
    while ( v1 != MEMORY[0xFFFFFC088] );
    return v2 + v1;
  }
}
