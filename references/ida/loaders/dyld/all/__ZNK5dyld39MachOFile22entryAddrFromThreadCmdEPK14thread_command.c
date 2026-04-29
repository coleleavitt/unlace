thread_command __fastcall dyld3::MachOFile::entryAddrFromThreadCmd(dyld3::MachOFile *this, const thread_command *a2)
{
  __int64 v2; // x8
  int v3; // w9
  __int64 v5; // x19
  const thread_command *v6; // x20

  if ( a2->cmd != 5 )
    dyld3::MachOFile::entryAddrFromThreadCmd(this);
  v2 = 0;
  v3 = *((_DWORD *)this + 1);
  if ( v3 <= 16777222 )
  {
    if ( v3 == 7 )
    {
      v5 = 10;
    }
    else
    {
      if ( v3 != 12 )
        return (thread_command)v2;
      v5 = 15;
    }
  }
  else if ( v3 == 33554444 || v3 == 16777228 )
  {
    v5 = 32;
  }
  else
  {
    if ( v3 != 16777223 )
      return (thread_command)v2;
    v5 = 16;
  }
  v6 = a2 + 2;
  if ( *(_DWORD *)this == -17958193 || dyld3::MachOFile::isArch(this, "arm64_32") )
    return v6[v5];
  else
    return (thread_command)*(&v6->cmd + v5);
}
