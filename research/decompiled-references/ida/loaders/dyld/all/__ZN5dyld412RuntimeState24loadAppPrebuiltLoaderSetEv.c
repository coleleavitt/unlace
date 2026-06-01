void __fastcall dyld4::RuntimeState::loadAppPrebuiltLoaderSet(dyld4::RuntimeState *this)
{
  unsigned int *Only; // x0
  vm_address_t v3; // [xsp+0h] [xbp-C0h] BYREF
  char *v4; // [xsp+8h] [xbp-B8h] BYREF
  __int128 v5; // [xsp+10h] [xbp-B0h]
  char v6; // [xsp+20h] [xbp-A0h] BYREF

  if ( (unsigned int)dyld4::SyscallDelegate::fileExists(*((_QWORD *)this + 1), *((dyld3 **)this + 84)) )
  {
    v4 = &v6;
    v5 = xmmword_7BEF0;
    if ( (dyld4::RuntimeState::buildBootToken(this, &v4) & 1) != 0 )
    {
      if ( (dyld4::RuntimeState::fileAlreadyHasBootToken(this) & 1) != 0 )
      {
        Diagnostics::Diagnostics((Diagnostics *)&v3);
        Only = (unsigned int *)dyld4::SyscallDelegate::mapFileReadOnly(
                                 *((_QWORD *)this + 1),
                                 (Diagnostics *)&v3,
                                 *((dyld3 **)this + 84),
                                 nullptr,
                                 0,
                                 nullptr,
                                 0);
        *((_QWORD *)this + 85) = Only;
        if ( Only )
        {
          dyld4::RuntimeState::allocateProcessArrays(this, Only[3]);
          **((_QWORD **)this + 87) = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
          Only = *((unsigned int **)this + 85);
        }
        if ( Only )
        {
          if ( (dyld4::PrebuiltLoaderSet::isValid((dyld4::PrebuiltLoaderSet *)Only, this) & 1) == 0 )
          {
            dyld4::SyscallDelegate::unmapFile(
              *((dyld4::SyscallDelegate **)this + 1),
              *((const void **)this + 85),
              *(unsigned int *)(*((_QWORD *)this + 85) + 8LL));
            *((_QWORD *)this + 85) = 0;
          }
        }
        Diagnostics::~Diagnostics(&v3);
      }
      else if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
      {
        dyld4::RuntimeState::log(this, "existing PrebuiltLoaderSet file not used because boot-token differs\n");
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
    {
      dyld4::RuntimeState::log(
        this,
        "did not look for saved PrebuiltLoaderSet because main executable is not codesigned\n");
    }
  }
}
