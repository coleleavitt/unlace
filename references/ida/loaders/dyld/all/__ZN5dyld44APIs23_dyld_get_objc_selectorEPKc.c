dyld4::PrebuiltLoaderSet *__fastcall dyld4::APIs::_dyld_get_objc_selector(dyld4::APIs *this, const char *__s)
{
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 Index; // x0
  dyld4::PrebuiltLoaderSet *result; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)(v4 + 248);
  if ( v5 )
  {
    Index = objc::StringHashTable::tryGetIndex(*(objc::StringHashTable **)(v4 + 248), __s);
    if ( (Index & 0xFF00000000LL) != 0 )
      return (dyld4::PrebuiltLoaderSet *)(v5
                                        + *(int *)(v5
                                                 + (unsigned int)(*(_DWORD *)(v5 + 16) + 1)
                                                 + *(unsigned int *)(v5 + 4)
                                                 + 4LL * (unsigned int)Index
                                                 + 1056));
  }
  result = *((dyld4::PrebuiltLoaderSet **)this + 85);
  if ( result )
  {
    result = (dyld4::PrebuiltLoaderSet *)dyld4::PrebuiltLoaderSet::objcSelectorOpt(result);
    if ( result )
    {
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (dyld4::PrebuiltLoaderSet *)dyld4::ObjCStringTable::getString(result, __s, this);
    }
  }
  return result;
}
