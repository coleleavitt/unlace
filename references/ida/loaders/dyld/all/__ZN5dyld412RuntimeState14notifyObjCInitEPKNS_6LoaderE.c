dyld4::RuntimeState *__fastcall dyld4::RuntimeState::notifyObjCInit(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  __int64 v3; // x19
  const void *Address; // x20
  const char *v5; // x21
  int v6; // [xsp+10h] [xbp-90h] BYREF
  const void *v7; // [xsp+18h] [xbp-88h]
  __int128 v8; // [xsp+20h] [xbp-80h]
  __int128 v9; // [xsp+30h] [xbp-70h]
  __int128 v10; // [xsp+40h] [xbp-60h]
  __int128 v11; // [xsp+50h] [xbp-50h]
  __int128 v12; // [xsp+60h] [xbp-40h]
  __int128 v13; // [xsp+70h] [xbp-30h]

  if ( *((_QWORD *)this + 46) && (*((_WORD *)a2 + 2) & 8) != 0 )
  {
    v3 = (__int64)this;
    Address = (const void *)dyld4::Loader::loadAddress(a2, this);
    v5 = (const char *)dyld4::Loader::path(a2);
    v6 = 520552480;
    v7 = Address;
    v8 = 0u;
    v9 = 0u;
    v10 = 0u;
    v11 = 0u;
    v12 = 0u;
    v13 = 0u;
    dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v6);
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 185LL) )
      dyld4::RuntimeState::log(
        (dyld4::RuntimeState *)v3,
        "objc-init-notifier called with mh=%p, path=%s\n",
        Address,
        v5);
    (*(void (__fastcall **)(const char *, const void *))(v3 + 368))(v5, Address);
    return (dyld4::RuntimeState *)dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v6);
  }
  return this;
}
