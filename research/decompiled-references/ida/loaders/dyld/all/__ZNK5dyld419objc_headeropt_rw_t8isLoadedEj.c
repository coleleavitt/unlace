__int64 __fastcall dyld4::objc_headeropt_rw_t::isLoaded(dyld4::objc_headeropt_rw_t *this, unsigned int a2)
{
  if ( *(_DWORD *)this <= a2 )
    dyld4::objc_headeropt_rw_t::isLoaded();
  return *(_DWORD *)((_BYTE *)this + *((_DWORD *)this + 1) * a2 + 8) & 1;
}
