__int64 __fastcall dyld4::APIs::_dyld_find_foreign_type_protocol_conformance(
        dyld4::APIs *this,
        char *a2,
        const char *a3,
        __int64 a4)
{
  _QWORD *v4; // x8
  dyld4::objc_headeropt_rw_t *v5; // x20
  __int64 v6; // x9
  bool v7; // zf
  __int64 v8; // x24
  __int64 v9; // x21
  unsigned int v10; // w0
  unsigned int v12; // w22
  unsigned __int64 v13; // t1
  char isLoaded; // w0
  __int64 i; // x21
  char v16; // w0
  _QWORD v17[3]; // [xsp+8h] [xbp-58h] BYREF

  v4 = *((_QWORD **)this + 1);
  v5 = (dyld4::objc_headeropt_rw_t *)v4[30];
  v6 = v4[36];
  if ( v5 )
    v7 = v6 == 0;
  else
    v7 = 1;
  if ( v7 )
    return 2;
  if ( *(_DWORD *)v6 != 1 )
    return 2;
  v8 = *(_QWORD *)(v6 + 24);
  if ( !v8 )
    return 2;
  v9 = v4[25];
  v17[0] = a3;
  v17[1] = a4;
  v17[2] = &a2[-v9];
  v10 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))SwiftHashTable::getPotentialTarget<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>)(
          v9 + v8,
          v17,
          v9);
  if ( v10 == *(_DWORD *)(v9 + v8 + 16) )
    return 2;
  v12 = v10;
  v13 = *(_QWORD *)(v9 + v8 + v10 + 16);
  isLoaded = dyld4::objc_headeropt_rw_t::isLoaded(v5, HIWORD(v13));
  if ( (v13 & 1) != 0 )
  {
    if ( (isLoaded & 1) == 0 )
    {
      for ( i = v8 + v12 + v9 + 40; (*(_BYTE *)(i - 24) & 1) != 0; i += 24 )
      {
        v16 = dyld4::objc_headeropt_rw_t::isLoaded(v5, *(unsigned __int16 *)(i + 6));
        if ( (v16 & 1) != 0 )
          return 0;
      }
      return 2;
    }
  }
  else if ( (isLoaded & 1) == 0 )
  {
    return 2;
  }
  return 0;
}
