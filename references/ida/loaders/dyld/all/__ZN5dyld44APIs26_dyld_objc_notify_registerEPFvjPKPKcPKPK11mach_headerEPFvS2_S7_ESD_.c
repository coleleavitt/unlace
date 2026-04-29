dyld4::PrebuiltLoaderSet *__fastcall dyld4::APIs::_dyld_objc_notify_register(
        dyld4::PrebuiltLoaderSet **this,
        void (__fastcall *a2)(unsigned int, const char *const *, const mach_header *const *),
        void (__fastcall *a3)(const char *, const mach_header *),
        void (__fastcall *a4)(const char *, const mach_header *))
{
  dyld4::PrebuiltLoaderSet *result; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( *((_BYTE *)*(this + 1) + 184) )
    dyld4::RuntimeState::log((dyld4::RuntimeState *)this, "_dyld_objc_notify_register(%p, %p, %p)\n", a2, a3, a4);
  dyld4::RuntimeState::setObjCNotifiers(this, a2, a3, a4, 0, 0);
  result = *(this + 85);
  if ( result )
  {
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (dyld4::PrebuiltLoaderSet *)dyld4::PrebuiltLoaderSet::logDuplicateObjCClasses(
                                         result,
                                         (dyld4::RuntimeState *)this);
  }
  return result;
}
