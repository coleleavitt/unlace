__int64 __fastcall dyld4::PrebuiltLoader::setLoadAddress(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w8
  __int64 _8; // [xsp+8h] [xbp+8h]

  v3 = *(__int16 *)(a1 + 6);
  if ( (v3 & 0x80000000) == 0 )
    dyld4::PrebuiltLoader::setLoadAddress();
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::RuntimeState::setAppLoadAddress(a2, v3 & 0x7FFF, a3);
}
