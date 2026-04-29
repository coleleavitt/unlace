__int64 __fastcall dyld4::RuntimeState::rebindMissingFlatLazySymbols(std::span<dyld4::Loader const*,18446744073709551615ul> const&)::$_0::operator()(
        dyld4::Loader ****a1,
        __int64 a2)
{
  dyld4::RuntimeState *v2; // x19
  dyld4::Loader **v3; // x8
  dyld4::Loader **v6; // x23
  __int64 v7; // x24
  dyld4::Loader *v8; // x22
  __int64 v10; // x21
  __int64 v11; // x23
  const char *v12; // x0
  dyld4::Loader *v13[2]; // [xsp+20h] [xbp-50h] BYREF
  __int128 v14; // [xsp+30h] [xbp-40h]

  v2 = (dyld4::RuntimeState *)a1[2];
  *(_OWORD *)v13 = 0u;
  v14 = 0u;
  v13[1] = *(dyld4::Loader **)(a2 + 8);
  DWORD2(v14) = 2;
  BYTE13(v14) = 0;
  v3 = (*a1)[1];
  if ( !v3 )
    return 0;
  v6 = **a1;
  v7 = 8LL * (_QWORD)v3;
  while ( 1 )
  {
    v8 = *v6;
    if ( (dyld4::Loader::hiddenFromFlat(*v6, 0) & 1) == 0 )
    {
      if ( (unsigned int)dyld4::Loader::hasExportedSymbol(
                           v8,
                           (dyld3::MachOFile *)a1[1],
                           v2,
                           *(const unsigned __int8 **)(a2 + 8),
                           1,
                           v13,
                           0) )
        break;
    }
    ++v6;
    v7 -= 8;
    if ( !v7 )
      return 0;
  }
  v10 = dyld4::Loader::resolvedAddress(v2);
  if ( *(_BYTE *)(*((_QWORD *)v2 + 1) + 182LL) )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = (const char *)dyld4::Loader::leafName(v8);
    dyld4::RuntimeState::log(v2, "fixup: *0x%012lX = 0x%012lX <%s>\n", v11, v10, v12);
  }
  **(_QWORD **)(a2 + 16) = v10;
  dyld4::RuntimeState::addDynamicReference(v2, *(const dyld4::Loader **)a2, v13[0]);
  return 1;
}
