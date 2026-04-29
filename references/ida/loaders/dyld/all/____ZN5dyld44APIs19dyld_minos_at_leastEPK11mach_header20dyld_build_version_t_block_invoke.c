__int64 __fastcall ___ZN5dyld44APIs19dyld_minos_at_leastEPK11mach_header20dyld_build_version_t_block_invoke(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4)
{
  int v7; // w22
  __int64 result; // x0

  v7 = dyld3::MachOFile::basePlatform(a2);
  result = dyld3::MachOFile::basePlatform(*(_DWORD *)(a1 + 40));
  if ( v7 == (_DWORD)result )
  {
    result = dyld3::MachOFile::basePlatform(a2);
    if ( (_DWORD)result )
    {
      if ( *(_DWORD *)(a1 + 44) <= a4 )
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
    }
  }
  return result;
}
