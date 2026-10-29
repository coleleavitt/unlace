kern_return_t __cdecl mach_timebase_info(mach_timebase_info_t info)
{
  uint32_t v2; // w8
  uint32_t v3; // w9
  bool v4; // zf
  kern_return_t result; // w0

  v2 = mach_timebase_info_cached_info;
  v3 = dword_9CFE0;
  if ( mach_timebase_info_cached_info )
    v4 = dword_9CFE0 == 0;
  else
    v4 = 1;
  if ( v4 )
  {
    result = mach_timebase_info_trap((mach_timebase_info *)&mach_timebase_info_cached_info);
    if ( result )
      return result;
    v2 = mach_timebase_info_cached_info;
    v3 = dword_9CFE0;
  }
  info->numer = v2;
  info->denom = v3;
  return 0;
}
