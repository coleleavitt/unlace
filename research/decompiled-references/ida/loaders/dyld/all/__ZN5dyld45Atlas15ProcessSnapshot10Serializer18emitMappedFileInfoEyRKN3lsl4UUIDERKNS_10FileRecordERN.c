__int64 __fastcall dyld4::Atlas::ProcessSnapshot::Serializer::emitMappedFileInfo(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        dyld4::FileRecord *this,
        __int64 a5)
{
  __int64 v10; // x8
  int v11; // w9
  bool v12; // zf
  unsigned __int64 v13; // x22
  __int64 result; // x0
  __int64 i; // x24
  char v16; // w8
  __int64 v17; // x9
  __int64 v18; // x10
  __int64 v19; // x23
  unsigned __int64 v20; // x24
  __int64 v21; // x0
  __int64 v22; // x9
  unsigned __int64 v23; // x8
  __int64 v24; // x10
  unsigned int v25; // w11
  unsigned int v26; // w12
  __int64 v28; // x0
  __int64 v29; // x8
  int v30; // w9
  int v31; // w10
  unsigned __int64 v33; // x0
  __int64 Path; // x1
  __int64 _38; // [xsp+38h] [xbp+8h]

  v10 = 0;
  do
  {
    v11 = *(unsigned __int8 *)(a3 + v10);
    if ( *(_BYTE *)(a3 + v10) )
      v12 = 1;
    else
      v12 = v10 == 15;
    ++v10;
  }
  while ( !v12 );
  v13 = 4LL * (v11 != 0);
  if ( dyld4::FileRecord::persistent(this) )
  {
    v13 |= 1u;
  }
  else if ( dyld4::FileRecord::getPath(this) )
  {
    v13 |= 2u;
  }
  lsl::emitPVLEUInt64(v13, a5);
  result = lsl::emitPVLEUInt64(a2, a5);
  if ( (v13 & 4) != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      result = lsl::Vector<std::byte>::reserve(a5, *(_QWORD *)(a5 + 16) + 1LL);
      v16 = *(_BYTE *)(a3 + i);
      v17 = *(_QWORD *)(a5 + 8);
      v18 = *(_QWORD *)(a5 + 16);
      *(_QWORD *)(a5 + 16) = v18 + 1;
      *(_BYTE *)(v17 + v18) = v16;
    }
  }
  if ( (v13 & 1) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 56);
    v20 = *(_QWORD *)(a1 + 64);
    v21 = dyld4::FileRecord::volume(this);
    if ( v20 )
    {
      do
      {
        v22 = 0;
        v23 = v20 >> 1;
        v24 = v19 + 16 * (v20 >> 1);
        while ( 1 )
        {
          v25 = *(unsigned __int8 *)(v24 + v22);
          v26 = *(unsigned __int8 *)(v21 + v22);
          if ( v25 < v26 )
            break;
          if ( v26 < v25 || v22++ == 15 )
            goto LABEL_25;
        }
        v19 = v24 + 16;
        v23 = v20 + ~v23;
LABEL_25:
        v20 = v23;
      }
      while ( v23 );
    }
    if ( v19 == *(_QWORD *)(a1 + 56) + 16LL * *(_QWORD *)(a1 + 64) )
      dyld4::Atlas::ProcessSnapshot::Serializer::emitMappedFileInfo();
    v28 = dyld4::FileRecord::volume(this);
    v29 = 0;
    do
    {
      v30 = *(unsigned __int8 *)(v19 + v29);
      v31 = *(unsigned __int8 *)(v28 + v29);
    }
    while ( v30 == v31 && v29++ != 15 );
    if ( v30 != v31 )
      dyld4::Atlas::ProcessSnapshot::Serializer::emitMappedFileInfo();
    lsl::emitPVLEUInt64((unsigned __int16)((unsigned __int64)(unsigned int)(v19 - *(_DWORD *)(a1 + 56)) >> 4), a5);
    v33 = dyld4::FileRecord::objectID(this);
    result = lsl::emitPVLEUInt64(v33, a5);
  }
  if ( (v13 & 2) != 0 )
  {
    Path = dyld4::FileRecord::getPath(this);
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::Atlas::ProcessSnapshot::Serializer::emitStringRef(a1, Path, a5);
  }
  return result;
}
