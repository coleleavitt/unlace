size_t __fastcall dyld4::Loader::validateFile(
        Diagnostics *a1,
        __int64 a2,
        int a3,
        const char *a4,
        unsigned int *a5,
        __int64 a6)
{
  int v12; // w21
  size_t v13; // x24
  dyld3::FatFile *v14; // x0
  dyld3::FatFile *v15; // x23
  dyld3::FatFile *v16; // x0
  dyld3::FatFile *v17; // x25
  __int64 v18; // x2
  char *v19; // x1
  _QWORD v21[6]; // [xsp+20h] [xbp-120h] BYREF
  __int64 v22; // [xsp+50h] [xbp-F0h] BYREF
  __int64 *v23; // [xsp+58h] [xbp-E8h]
  __int64 v24; // [xsp+60h] [xbp-E0h]
  char v25; // [xsp+68h] [xbp-D8h]
  stat v26; // [xsp+70h] [xbp-D0h] BYREF

  if ( (unsigned int)dyld4::SyscallDelegate::fstat(*(dyld4::SyscallDelegate **)(a2 + 8), a3, &v26) )
  {
    v12 = *__error();
    if ( v12 == 2 )
    {
      Diagnostics::error(a1, "no such file");
    }
    else if ( v12 == 1
           && (unsigned int)dyld4::SyscallDelegate::sandboxBlockedStat(*(dyld4::SyscallDelegate **)(a2 + 8), a4) )
    {
      Diagnostics::error(a1, "file system sandbox blocked stat(\"%s\")");
    }
    else
    {
      Diagnostics::error(a1, "stat(\"%s\") failed with errno=%d");
    }
    return -1;
  }
  if ( *(_BYTE *)(a6 + 60) )
  {
    if ( v26.st_ino != *(_QWORD *)(a6 + 8) )
    {
      Diagnostics::error(a1, "file inode changed from 0x%llX to 0x%llX since PrebuiltLoader was built for '%s'");
      return -1;
    }
    if ( v26.st_mtimespec.tv_sec != *(_QWORD *)(a6 + 16) )
    {
      Diagnostics::error(a1, "file mtime changed from 0x%llX to 0x%lX since PrebuiltLoader was built for '%s'");
      return -1;
    }
    v13 = *(_QWORD *)a6;
    if ( v26.st_size < *(_QWORD *)a6 )
    {
      Diagnostics::error(a1, "file too small for slice offset '%s'");
      return -1;
    }
  }
  else
  {
    if ( !a5[1] )
      return -1;
    v14 = (dyld3::FatFile *)dyld4::SyscallDelegate::mmap(
                              *(dyld4::SyscallDelegate **)(a2 + 8),
                              nullptr,
                              v26.st_size,
                              1,
                              2,
                              a3,
                              0);
    if ( v14 == (dyld3::FatFile *)-1LL )
    {
      Diagnostics::error(a1, "could not mmap() '%s'");
      return -1;
    }
    v15 = v14;
    v16 = dyld3::MachOFile::compatibleSlice(
            a1,
            v14,
            v26.st_size,
            a4,
            *(unsigned int *)(*(_QWORD *)(a2 + 8) + 68LL),
            0,
            *(dyld3::GradedArchs **)(*(_QWORD *)(a2 + 8) + 144LL));
    if ( v16 )
    {
      v17 = v16;
      v22 = 0;
      v23 = &v22;
      v24 = 0x2000000000LL;
      v25 = 0;
      v18 = a5[1];
      v19 = (char *)v16 + *a5;
      v21[0] = _NSConcreteStackBlock;
      v21[1] = 0x40000000;
      v21[2] = ___ZN5dyld46Loader12validateFileER11DiagnosticsRKNS_12RuntimeStateEiPKcRKNS0_19CodeSignatureInFileERKNS0_18FileValidationInfoE_block_invoke;
      v21[3] = &unk_95AE8;
      v21[4] = &v22;
      v21[5] = a6;
      dyld3::MachOFile::forEachCDHashOfCodeSignature(v16, v19, v18, v21);
      if ( *((_BYTE *)v23 + 24) )
      {
        v13 = v17 - v15;
      }
      else
      {
        Diagnostics::error(a1, "file cdHash not as expected '%s'", a4);
        v13 = -1;
      }
      _Block_object_dispose(&v22, 8);
    }
    else
    {
      v13 = -1;
    }
    dyld4::SyscallDelegate::munmap(*(dyld4::SyscallDelegate **)(a2 + 8), v15, *(_QWORD *)a6);
  }
  return v13;
}
