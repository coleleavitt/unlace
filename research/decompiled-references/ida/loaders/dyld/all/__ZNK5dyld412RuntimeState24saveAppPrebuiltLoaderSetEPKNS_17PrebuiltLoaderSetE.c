__int64 __fastcall dyld4::RuntimeState::saveAppPrebuiltLoaderSet(
        dyld4::RuntimeState *this,
        const dyld4::PrebuiltLoaderSet *a2)
{
  unsigned int *Only; // x0
  unsigned int *v5; // x21
  size_t v6; // x22
  __int64 v7; // x20
  int HasBootToken; // w8
  dyld4::SyscallDelegate *v10; // x0
  char v11; // w22
  vm_address_t v12; // [xsp+18h] [xbp-E8h] BYREF
  vm_address_t v13; // [xsp+20h] [xbp-E0h] BYREF
  char *v14; // [xsp+28h] [xbp-D8h] BYREF
  __int128 v15; // [xsp+30h] [xbp-D0h]
  char v16; // [xsp+40h] [xbp-C0h] BYREF

  v14 = &v16;
  v15 = xmmword_7BEF0;
  if ( (dyld4::RuntimeState::buildBootToken(this, &v14) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 84) )
    {
      Diagnostics::Diagnostics((Diagnostics *)&v13);
      Only = (unsigned int *)dyld4::SyscallDelegate::mapFileReadOnly(
                               *((_QWORD *)this + 1),
                               (Diagnostics *)&v13,
                               *((dyld3 **)this + 84),
                               nullptr,
                               0,
                               nullptr,
                               0);
      if ( !Only )
      {
LABEL_9:
        Diagnostics::Diagnostics((Diagnostics *)&v12);
        v7 = dyld4::SyscallDelegate::saveFileWithAttribute(*((_QWORD *)this + 1), (int)&v12, *((char **)this + 84));
        if ( (_DWORD)v7 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
            dyld4::RuntimeState::log(this, "wrote PrebuiltLoaderSet to file '%s'\n");
        }
        else if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
        {
          Diagnostics::errorMessage((Diagnostics *)&v12);
          dyld4::RuntimeState::log(this, "tried but failed (%s) to write PrebuiltLoaderSet to file '%s'\n");
        }
        Diagnostics::~Diagnostics(&v12);
        goto LABEL_20;
      }
      v5 = Only;
      v6 = Only[2];
      if ( (_DWORD)v6 != *((_DWORD *)a2 + 2) || _platform_memcmp(Only, a2, Only[2]) )
      {
        dyld4::SyscallDelegate::unmapFile(*((dyld4::SyscallDelegate **)this + 1), v5, v6);
LABEL_7:
        dyld4::SyscallDelegate::unlink(*((dyld4::SyscallDelegate **)this + 1), *((const char **)this + 84));
        if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
          dyld4::RuntimeState::log(
            this,
            "deleting existing out of date PrebuiltLoaderSet file '%s'\n",
            *((const char **)this + 84));
        goto LABEL_9;
      }
      HasBootToken = dyld4::RuntimeState::fileAlreadyHasBootToken(this);
      v10 = *((dyld4::SyscallDelegate **)this + 1);
      if ( HasBootToken )
      {
        if ( *((_BYTE *)v10 + 187) )
        {
          dyld4::RuntimeState::log(this, "PrebuiltLoaderSet already saved as file '%s'\n", *((const char **)this + 84));
          v10 = *((dyld4::SyscallDelegate **)this + 1);
        }
        dyld4::SyscallDelegate::unmapFile(v10, v5, v5[2]);
      }
      else
      {
        if ( *((_BYTE *)v10 + 187) )
        {
          dyld4::RuntimeState::log(
            this,
            "updating boot attribute on existing PrebuiltLoaderSet file '%s'\n",
            *((const char **)this + 84));
          v10 = *((dyld4::SyscallDelegate **)this + 1);
        }
        v11 = dyld4::SyscallDelegate::setFileAttribute((int)v10, *((char **)this + 84));
        dyld4::SyscallDelegate::unmapFile(*((dyld4::SyscallDelegate **)this + 1), v5, v5[2]);
        if ( (v11 & 1) == 0 )
          goto LABEL_7;
      }
      v7 = 1;
LABEL_20:
      Diagnostics::~Diagnostics(&v13);
      return v7;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      dyld4::RuntimeState::log(this, "no path to save PrebuiltLoaderSet file\n");
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
  {
    dyld4::RuntimeState::log(this, "could not save PrebuiltLoaderSet because main executable is not codesigned\n");
  }
  return 0;
}
