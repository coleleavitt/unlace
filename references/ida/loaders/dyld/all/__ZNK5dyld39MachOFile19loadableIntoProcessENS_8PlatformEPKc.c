__int64 __fastcall dyld3::MachOFile::loadableIntoProcess(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v4; // w20
  __int64 v6; // x20
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  v4 = a2;
  if ( (dyld3::MachOFile::builtForPlatform(a1, a2, 0) & 1) == 0 )
  {
    if ( v4 <= 0xC && ((1 << v4) & 0x1380) != 0 )
    {
      if ( (unsigned int)dyld3::MachOFile::builtForPlatform(a1, 1, 0) )
      {
        v7 = 0;
        while ( _platform_strcmp(
                  dyld3::MachOFile::loadableIntoProcess(dyld3::Platform,char const*)const::macOSHost[v7],
                  a3) )
        {
          if ( ++v7 == 6 )
            goto LABEL_9;
        }
        return 1;
      }
    }
    else
    {
LABEL_9:
      if ( v4 == 1 && *(_DWORD *)(a1 + 12) == 2 )
      {
        v6 = 1;
        v8 = a1;
        v9 = 6;
      }
      else
      {
        if ( v4 != 6 )
          return 0;
        v6 = 1;
        v8 = a1;
        v9 = 1;
      }
      if ( (dyld3::MachOFile::builtForPlatform(v8, v9, 1) & 1) != 0 )
        return v6;
    }
    return 0;
  }
  return 1;
}
