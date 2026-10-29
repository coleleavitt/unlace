void __fastcall dyld4::APIs::dyld_get_image_versions(dyld4::RuntimeState *this, unsigned int *a2, const void *a3)
{
  __int64 _38; // [xsp+38h] [xbp+8h]

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_get_image_versions(%p, %p)\n", a2, a3);
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  dyld4::APIs::forEachImageVersion((__int64)this, a2, (__int64)a3);
}
