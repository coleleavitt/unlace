void __fastcall dyld4::PrebuiltLoader::invalidateInIsolation(
        dyld4::PrebuiltLoader *this,
        const dyld4::RuntimeState *a2)
{
  __int16 v2; // w8
  char *v3; // x9
  __int64 v4; // x23
  __int64 v5; // x24
  dyld3 *v8; // x1
  const char *v9; // x1
  char *v10; // x0
  __int64 v11; // x8
  dyld4::ProcessConfig::DyldCache *v12; // x0
  dyld4::Utils *v13; // x1
  unsigned int v14; // w2
  char *v15; // x0
  const char *v16; // x1
  dyld3 *v17; // x21
  const char **v18; // x22
  int v19; // w0
  const char *v20; // x1
  int v21; // w22
  char *v22; // x5
  const char *v23; // x1
  __int128 v24; // [xsp+10h] [xbp-B0h] BYREF
  __int128 v25; // [xsp+20h] [xbp-A0h]
  _QWORD v26[7]; // [xsp+38h] [xbp-88h] BYREF
  __int64 v27; // [xsp+70h] [xbp-50h] BYREF
  __int64 *v28; // [xsp+78h] [xbp-48h]
  __int64 v29; // [xsp+80h] [xbp-40h]
  char v30; // [xsp+88h] [xbp-38h]

  v2 = *((_WORD *)this + 3);
  if ( v2 >= 0 )
    v3 = (char *)a2 + 664;
  else
    v3 = (char *)a2 + 688;
  v4 = *(_QWORD *)v3;
  v5 = v2 & 0x7FFF;
  if ( *(unsigned __int8 *)(*(_QWORD *)v3 + v5) > 1u )
    return;
  if ( (*((_WORD *)this + 2) & 2) != 0 )
  {
    v11 = *((_QWORD *)a2 + 1);
    if ( !*(_QWORD *)(v11 + 200) )
    {
      *(_BYTE *)(v4 + v5) = -1;
      return;
    }
    if ( (*((_WORD *)this + 10) & 2) != 0 )
    {
      if ( !*(_BYTE *)(v11 + 340) )
      {
        if ( *((_WORD *)this + 4) )
          v12 = (dyld4::PrebuiltLoader *)((char *)this + *((unsigned __int16 *)this + 4));
        else
          v12 = nullptr;
        if ( !dyld4::ProcessConfig::DyldCache::isAlwaysOverridablePath(v12, (const char *)a2) )
          return;
        v11 = *((_QWORD *)a2 + 1);
      }
      v27 = 0;
      v28 = &v27;
      v29 = 0x2000000000LL;
      v30 = 0;
      LOBYTE(v24) = 0;
      if ( *((_WORD *)this + 4) )
        v13 = (dyld4::PrebuiltLoader *)((char *)this + *((unsigned __int16 *)this + 4));
      else
        v13 = nullptr;
      v14 = *(_DWORD *)(v11 + 68);
      v26[0] = _NSConcreteStackBlock;
      v26[1] = 0x40000000;
      v26[2] = ___ZNK5dyld414PrebuiltLoader21invalidateInIsolationERKNS_12RuntimeStateE_block_invoke;
      v26[3] = &unk_96268;
      v26[5] = this;
      v26[6] = a2;
      v26[4] = &v27;
      dyld4::ProcessConfig::PathOverrides::forEachPathVariant(v11 + 344, v13, v14, 0, 1, &v24, (__int64)v26);
      if ( *((_BYTE *)v28 + 24) )
      {
        if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
        {
          v15 = dyld4::Loader::leafName(this);
          dyld4::console(
            (dyld4 *)"PrebuiltLoader %p '%s' not used because a file was found that overrides it\n",
            v16,
            this,
            v15,
            (_QWORD)v24);
        }
        *(_BYTE *)(v4 + v5) = -1;
      }
      _Block_object_dispose(&v27, 8);
    }
  }
  else
  {
    dyld4::PrebuiltLoader::fileID(&v27, this, (const dyld4::RuntimeState *)((char *)a2 + 336));
    if ( v30 )
    {
      v24 = 0u;
      v25 = 0u;
      if ( *((_WORD *)this + 4) )
        v8 = (dyld4::PrebuiltLoader *)((char *)this + *((unsigned __int16 *)this + 4));
      else
        v8 = nullptr;
      if ( !(unsigned int)dyld4::SyscallDelegate::fileExists(*((_QWORD *)a2 + 1), v8) )
      {
        *(_BYTE *)(v4 + v5) = -1;
        if ( !*(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
          return;
        v10 = "PrebuiltLoader %p not used because file missing\n";
        goto LABEL_49;
      }
      if ( *((__int64 **)&v24 + 1) != v28 || !BYTE8(v25) || (_QWORD)v24 != v27 || (_QWORD)v25 != v29 )
      {
        *(_BYTE *)(v4 + v5) = -1;
        if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
        {
          v10 = "PrebuiltLoader %p not used because file inode/mtime does not match\n";
LABEL_49:
          dyld4::console((dyld4 *)v10, v9, this);
        }
      }
    }
    else
    {
      if ( *((_WORD *)this + 4) )
        v17 = (dyld4::PrebuiltLoader *)((char *)this + *((unsigned __int16 *)this + 4));
      else
        v17 = nullptr;
      v18 = *((const char ***)a2 + 1);
      if ( _platform_strcmp((const char *)v17, v18[2]) )
      {
        v19 = dyld4::SyscallDelegate::open((dyld4::SyscallDelegate *)v18, v17, nullptr, 0);
        if ( v19 == -1 )
        {
          *(_BYTE *)(v4 + v5) = -1;
          if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
            dyld4::console((dyld4 *)"PrebuiltLoader %p not used because file '%s' cannot be opened\n", v20, this, v17);
        }
        else
        {
          v21 = v19;
          Diagnostics::Diagnostics((Diagnostics *)&v24);
          if ( *((_WORD *)this + 9) )
            v22 = (char *)this + *((unsigned __int16 *)this + 9);
          else
            v22 = nullptr;
          if ( dyld4::Loader::validateFile(
                 (Diagnostics *)&v24,
                 (__int64)a2,
                 v21,
                 (const char *)v17,
                 (unsigned int *)this + 14,
                 (__int64)v22) == -1 )
          {
            *(_BYTE *)(v4 + v5) = -1;
            if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
              dyld4::console((dyld4 *)"PrebuiltLoader %p not used because file '%s' cdHash changed\n", v23, this, v17);
          }
          dyld4::SyscallDelegate::close(*((dyld4::SyscallDelegate **)a2 + 1), v21);
          Diagnostics::~Diagnostics((vm_address_t *)&v24);
        }
      }
    }
  }
}
