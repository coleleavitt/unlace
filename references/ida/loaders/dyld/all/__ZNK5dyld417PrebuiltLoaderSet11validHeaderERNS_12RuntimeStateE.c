__int64 __fastcall dyld4::PrebuiltLoaderSet::validHeader(dyld4::PrebuiltLoaderSet *this, dyld4::RuntimeState *a2)
{
  if ( *(_DWORD *)this == 1936733284 )
  {
    if ( *((_DWORD *)this + 1) == 1294698055 )
      return 1;
    if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
      dyld4::console(
        (dyld4 *)"not using PrebuiltLoaderSet %p because versionHash (0x%08X) does not match dyld (0x%08X)\n",
        (const char *)a2,
        this,
        *((unsigned int *)this + 1),
        1294698055);
  }
  else if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 187LL) )
  {
    dyld4::console(
      (dyld4 *)"not using PrebuiltLoaderSet %p because magic at start does not match\n",
      (const char *)a2,
      this);
  }
  return 0;
}
