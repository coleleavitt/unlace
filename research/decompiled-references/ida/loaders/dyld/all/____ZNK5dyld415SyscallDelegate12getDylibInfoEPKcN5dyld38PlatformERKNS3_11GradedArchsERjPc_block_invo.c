__int64 __fastcall ___ZNK5dyld415SyscallDelegate12getDylibInfoEPKcN5dyld38PlatformERKNS3_11GradedArchsERjPc_block_invoke(
        __int64 a1,
        dyld3::FatFile *this,
        unsigned __int64 a3)
{
  dyld3::MachOFile *v3; // x20
  __int64 result; // x0
  unsigned int v6[2]; // [xsp+8h] [xbp-38h] BYREF
  char *__source; // [xsp+10h] [xbp-30h] BYREF
  unsigned __int64 v8; // [xsp+18h] [xbp-28h] BYREF
  unsigned __int64 v9; // [xsp+20h] [xbp-20h] BYREF
  bool v10; // [xsp+2Fh] [xbp-11h] BYREF

  v3 = this;
  v10 = 0;
  v8 = a3;
  v9 = 0;
  if ( (unsigned int)dyld3::FatFile::isFatFileWithSlice(
                       this,
                       (Diagnostics *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL),
                       a3,
                       *(const dyld3::GradedArchs **)(a1 + 48),
                       1,
                       &v9,
                       &v8,
                       &v10) )
  {
    v3 = (dyld3::MachOFile *)((char *)v3 + v9);
  }
  else
  {
    result = dyld3::MachOFile::isMachO(v3, (Diagnostics *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL), v8);
    if ( !(_DWORD)result )
      return result;
  }
  result = dyld3::MachOFile::isDylib(v3);
  if ( (_DWORD)result )
  {
    result = dyld3::MachOFile::loadableIntoProcess((__int64)v3, *(unsigned int *)(a1 + 80), *(const char **)(a1 + 56));
    if ( (_DWORD)result )
    {
      *(_QWORD *)v6 = 0;
      __source = nullptr;
      result = dyld3::MachOFile::getDylibInstallName(v3, (const char **)&__source, &v6[1], v6);
      if ( (_DWORD)result )
      {
        **(_DWORD **)(a1 + 64) = v6[0];
        result = strlcpy(*(char **)(a1 + 72), __source, 0x400u);
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) = 1;
      }
    }
  }
  return result;
}
