dyld3::MachOAnalyzer *__fastcall dyld4::SyscallDelegate::mapFileReadOnly(
        int a1,
        Diagnostics *a2,
        dyld3 *this,
        size_t *a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  int v13; // w3
  int v14; // w0
  int v15; // w20
  dyld3::MachOAnalyzer *v16; // x0
  dyld3::MachOAnalyzer *v17; // x22
  __int64 v18; // x9
  __int64 v19; // x10
  const void *v20; // x1
  int v21; // w8
  __int64 v22; // x0
  __int64 v23; // x0
  size_t v25; // x21
  int *v26; // x0
  __int64 isFatFile; // x0
  _QWORD v28[6]; // [xsp+18h] [xbp-108h] BYREF
  int v29; // [xsp+48h] [xbp-D8h]
  char v30[4]; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v31; // [xsp+58h] [xbp-C8h]
  __int64 v32; // [xsp+80h] [xbp-A0h]
  size_t v33; // [xsp+B0h] [xbp-70h]

  if ( (unsigned int)dyld3::stat(this, v30, (stat *)this) == -1 )
  {
    v21 = *__error();
    if ( v21 == 2 )
    {
      Diagnostics::error(a2, "no such file");
    }
    else if ( v21 == 1 && (v22 = __getpid(), (int)sandbox_check(v22, "file-read-metadata", 1073741825) >= 1) )
    {
      Diagnostics::error(a2, "file system sandbox blocked stat()", this);
    }
    else
    {
      __error();
      Diagnostics::error(a2, "stat() failed with errno=%d");
    }
    return nullptr;
  }
  if ( !v33 )
    return nullptr;
  v14 = dyld3::open(this, nullptr, 0, v13);
  if ( v14 < 0 )
  {
    if ( *__error() == 1 && (v23 = __getpid(), (int)sandbox_check(v23, "file-read-data", 1073741825) >= 1) )
      Diagnostics::error(a2, "file system sandbox blocked open()", this);
    else
      Diagnostics::error(a2, "open() failed with errno=%d");
    return nullptr;
  }
  v15 = v14;
  v16 = (dyld3::MachOAnalyzer *)mmap(nullptr, v33, 1, 2, v14, 0);
  if ( v16 == (dyld3::MachOAnalyzer *)-1LL )
  {
    v25 = v33;
    v26 = __error();
    Diagnostics::error(a2, "mmap(size=0x%0lX) failed with errno=%d", v25, *v26);
    close(v15);
    return nullptr;
  }
  v17 = v16;
  if ( a4 )
    *a4 = v33;
  if ( a5 )
  {
    v18 = v32;
    v19 = *(int *)v30;
    *(_QWORD *)a5 = v31;
    *(_QWORD *)(a5 + 8) = v19;
    *(_QWORD *)(a5 + 16) = v18;
    *(_BYTE *)(a5 + 24) = 1;
  }
  if ( a7 )
    fcntl(v15, 50, a7);
  if ( a6 )
  {
    *a6 = 0;
    if ( dyld3::MachOFile::hasMachOMagic(v17) )
    {
      if ( *((_DWORD *)v17 + 1) == 16777228
        && (*((_DWORD *)v17 + 2) & 0xFFFFFF) == 2
        && (unsigned int)dyld3::MachOAnalyzer::isOSBinary(v17, v15, 0, v33) )
      {
        *a6 = 1;
      }
    }
    else
    {
      isFatFile = dyld3::FatFile::isFatFile(v17, v20);
      if ( isFatFile )
      {
        v28[0] = _NSConcreteStackBlock;
        v28[1] = 0x40000000;
        v28[2] = ___ZNK5dyld415SyscallDelegate15mapFileReadOnlyER11DiagnosticsPKcPmPNS_6FileIDEPbPc_block_invoke;
        v28[3] = &__block_descriptor_tmp_14;
        v29 = v15;
        v28[4] = v17;
        v28[5] = a6;
        dyld3::FatFile::forEachSlice(isFatFile, a2, v33, v28);
      }
    }
  }
  close(v15);
  return v17;
}
