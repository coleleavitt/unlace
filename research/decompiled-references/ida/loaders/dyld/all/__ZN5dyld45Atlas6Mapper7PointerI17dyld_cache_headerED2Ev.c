__int64 __fastcall dyld4::Atlas::Mapper::Pointer<dyld_cache_header>::~Pointer(__int64 a1)
{
  const void *v2; // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = *(const void **)(a1 + 16);
  if ( v2 && *(_BYTE *)(a1 + 24) )
    dyld4::Atlas::Mapper::unmap(*(dyld4::Atlas::Mapper **)a1, v2, *(_QWORD *)(a1 + 8));
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr(a1);
}
