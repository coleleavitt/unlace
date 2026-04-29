bool __fastcall dyld4::RuntimeState::inPrebuiltLoader(dyld4::RuntimeState *this, const void *a2, unsigned __int64 a3)
{
  dyld4::PrebuiltLoaderSet *v6; // x0
  dyld4::PrebuiltLoaderSet *v7; // x0
  _BOOL8 result; // x0

  v6 = *((dyld4::PrebuiltLoaderSet **)this + 82);
  result = true;
  if ( !v6 || (dyld4::PrebuiltLoaderSet::contains(v6, a2, a3) & 1) == 0 )
  {
    v7 = *((dyld4::PrebuiltLoaderSet **)this + 85);
    if ( !v7 || (dyld4::PrebuiltLoaderSet::contains(v7, a2, a3) & 1) == 0 )
      return false;
  }
  return result;
}
