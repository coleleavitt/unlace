__int64 __fastcall dyld4::PrebuiltLoader::loadAddress(dyld4::PrebuiltLoader *this, dyld4::RuntimeState *a2)
{
  int v2; // w9

  v2 = *((__int16 *)this + 3);
  if ( v2 < 0 )
    return dyld4::RuntimeState::appLoadAddress(a2, v2 & 0x7FFF);
  else
    return dyld4::RuntimeState::cachedDylibLoadAddress(a2, v2);
}
