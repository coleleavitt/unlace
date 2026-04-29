void __fastcall dyld4::CacheFinder::~CacheFinder(dyld4::SyscallDelegate **this)
{
  char *v1; // [xsp+8h] [xbp-18h] BYREF

  if ( *((_BYTE *)this + 48) )
  {
    v1 = (char *)(this + 2);
    jettison(&v1);
  }
  else if ( *(_DWORD *)this != -1 )
  {
    dyld4::SyscallDelegate::close(*(this + 1), *(_DWORD *)this);
  }
}
