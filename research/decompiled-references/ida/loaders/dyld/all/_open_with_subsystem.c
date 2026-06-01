__int64 __fastcall open_with_subsystem(const char *a1, int a2)
{
  __int64 v4; // x19
  int *v5; // x0
  char *v6; // x1
  __int64 next_subsystem_root_path; // x22
  char __dst[1024]; // [xsp+8h] [xbp-438h] BYREF

  if ( (a2 & 0x200) != 0 )
  {
    *__error() = 22;
    return 0xFFFFFFFFLL;
  }
  else
  {
    v4 = open(a1, a2);
    if ( (v4 & 0x80000000) != 0 )
    {
      v5 = __error();
      v6 = (char *)subsystem_root_path;
      if ( *v5 == 2 && subsystem_root_path != 0 )
      {
        while ( 1 )
        {
          next_subsystem_root_path = extract_next_subsystem_root_path((int)__dst, v6);
          if ( strlcat(__dst, a1, 0x400u) > 0x3FF )
            break;
          v4 = open(__dst, a2);
          if ( (v4 & 0x80000000) == 0 )
            return v4;
          __error();
          if ( !next_subsystem_root_path )
            return v4;
          v6 = (char *)next_subsystem_root_path;
        }
        *__error() = 63;
      }
    }
  }
  return v4;
}
