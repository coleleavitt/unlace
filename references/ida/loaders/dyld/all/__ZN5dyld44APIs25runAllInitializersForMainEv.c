void __fastcall dyld4::APIs::runAllInitializersForMain(dyld4::APIs *this)
{
  __int64 v2; // x0
  __int64 v3; // x22
  dyld4::Loader *v4; // x16
  dyld4::Loader *v5; // x21
  dyld3::MachOFile *v6; // x0
  dyld3::MachOFile *v7; // x0
  char *v8; // x0
  __int64 v9; // x21
  dyld4::Loader *v10; // x20
  dyld3::MachOFile *v11; // x0

  v2 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v2 + 168) || *(_DWORD *)(v2 + 164) != 3 )
    dyld4::SyscallDelegate::disablePageInLinking((dyld4::SyscallDelegate *)v2);
  dyld4::Loader::beginInitializers(*((dyld4::Loader **)this + 8), this);
  dyld4::Loader::runInitializers(*((dyld4::Loader **)this + 8), this);
  *((_BYTE *)gProcessInfo + 25) = 1;
  dyld4::RuntimeState::notifyObjCInit(this, *((const dyld4::Loader **)this + 8));
  if ( *((_QWORD *)this + 6) )
  {
    v3 = 0;
    do
    {
      v4 = *(dyld4::Loader **)(*((_QWORD *)this + 5) + 8 * v3);
      v5 = v4;
      if ( (*((_WORD *)v4 + 2) & 2) != 0
        || (v6 = (dyld3::MachOFile *)dyld4::Loader::analyzer(v4, this), dyld3::MachOFile::isDylib(v6)) )
      {
        v7 = (dyld3::MachOFile *)dyld4::Loader::analyzer(v5, this);
        v8 = dyld3::MachOFile::installName(v7);
        if ( !_platform_strncmp(v8, "/usr/lib/system/lib", 0x13u) )
        {
          dyld4::Loader::beginInitializers(v5, this);
          dyld4::RuntimeState::notifyObjCInit(this, v5);
          dyld4::Loader::runInitializers(v5, this);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( *((_QWORD *)this + 6) != v3 );
    if ( v3 )
    {
      v9 = 0;
      do
      {
        v10 = *(dyld4::Loader **)(*((_QWORD *)this + 5) + 8 * v9);
        dyld4::Loader::runInitializersBottomUpPlusUpwardLinks(v10, this);
        v11 = (dyld3::MachOFile *)dyld4::Loader::analyzer(v10, this);
        if ( (unsigned int)dyld3::MachOFile::isMainExecutable(v11) )
          break;
        v9 = (unsigned int)(v9 + 1);
      }
      while ( *((_QWORD *)this + 6) != v9 );
    }
  }
}
