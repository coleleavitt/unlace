__int64 __fastcall dyld4::APIs::_dyld_find_protocol_conformance(dyld4::APIs *this, char *a2, char *a3, char *a4)
{
  _QWORD *v4; // x8
  dyld4::objc_headeropt_rw_t *v5; // x20
  __int64 v6; // x25
  bool v7; // zf
  __int64 v11; // x26
  __int64 v12; // x27
  unsigned int Potential; // w0
  unsigned int v14; // w23
  unsigned __int64 v15; // t1
  char isLoaded; // w0
  __int64 v17; // x24
  __int64 v18; // x25
  unsigned int v19; // w0
  unsigned int v21; // w21
  unsigned __int64 v22; // t1
  char v23; // w0
  __int64 i; // x23
  char v25; // w0
  __int64 j; // x21
  char v27; // w0
  char *v28; // [xsp+0h] [xbp-60h] BYREF
  char *v29; // [xsp+8h] [xbp-58h]

  v4 = *((_QWORD **)this + 1);
  v5 = (dyld4::objc_headeropt_rw_t *)v4[30];
  v6 = v4[36];
  if ( v5 )
    v7 = v6 == 0;
  else
    v7 = 1;
  if ( v7 || *(_DWORD *)v6 != 1 )
    return 2;
  if ( !a4 )
    goto LABEL_11;
  v11 = *(_QWORD *)(v6 + 8);
  if ( !v11 )
    goto LABEL_11;
  v12 = v4[25];
  v28 = &a4[-v12];
  v29 = &a2[-v12];
  Potential = SwiftHashTable::getPotentialTarget<SwiftTypeProtocolConformanceLocationKey,SwiftTypeProtocolConformanceLocationKey>(
                v12 + v11,
                &v28,
                0);
  if ( Potential == *(_DWORD *)(v12 + v11 + 16) )
    goto LABEL_11;
  v14 = Potential;
  v15 = *(_QWORD *)(v12 + v11 + Potential + 16);
  isLoaded = dyld4::objc_headeropt_rw_t::isLoaded(v5, HIWORD(v15));
  if ( (v15 & 1) != 0 )
  {
    if ( (isLoaded & 1) == 0 )
    {
      for ( i = v11 + v14 + v12 + 40; (*(_BYTE *)(i - 24) & 1) != 0; i += 24 )
      {
        v25 = dyld4::objc_headeropt_rw_t::isLoaded(v5, *(unsigned __int16 *)(i + 6));
        if ( (v25 & 1) != 0 )
          return 0;
      }
      goto LABEL_11;
    }
    return 0;
  }
  if ( (isLoaded & 1) != 0 )
    return 0;
LABEL_11:
  if ( !a3 )
    return 2;
  v17 = *(_QWORD *)(v6 + 16);
  if ( !v17 )
    return 2;
  v18 = *(_QWORD *)(*((_QWORD *)this + 1) + 200LL);
  v28 = &a3[-v18];
  v29 = &a2[-v18];
  v19 = SwiftHashTable::getPotentialTarget<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>(
          v18 + v17,
          &v28,
          0);
  if ( v19 == *(_DWORD *)(v18 + v17 + 16) )
    return 2;
  v21 = v19;
  v22 = *(_QWORD *)(v18 + v17 + v19 + 16);
  v23 = dyld4::objc_headeropt_rw_t::isLoaded(v5, HIWORD(v22));
  if ( (v22 & 1) != 0 )
  {
    if ( (v23 & 1) == 0 )
    {
      for ( j = v17 + v21 + v18 + 40; (*(_BYTE *)(j - 24) & 1) != 0; j += 24 )
      {
        v27 = dyld4::objc_headeropt_rw_t::isLoaded(v5, *(unsigned __int16 *)(j + 6));
        if ( (v27 & 1) != 0 )
          return 0;
      }
      return 2;
    }
  }
  else if ( (v23 & 1) == 0 )
  {
    return 2;
  }
  return 0;
}
