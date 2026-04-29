__int64 __fastcall dyld4::RuntimeState::cachedDylibLoadAddress(dyld4::RuntimeState *this, unsigned int a2)
{
  __int64 v2; // x8
  unsigned __int64 v4; // [xsp+0h] [xbp-10h] BYREF
  unsigned __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v2 + 336) <= a2 )
    dyld4::RuntimeState::cachedDylibLoadAddress(this, a2);
  v4 = 0;
  v5 = 0;
  return DyldSharedCache::getIndexedImageEntry(*(DyldSharedCache **)(v2 + 200), a2, &v5, &v4);
}
