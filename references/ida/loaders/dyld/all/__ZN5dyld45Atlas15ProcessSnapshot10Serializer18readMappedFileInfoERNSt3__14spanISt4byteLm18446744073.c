void __fastcall dyld4::Atlas::ProcessSnapshot::Serializer::readMappedFileInfo(
        __int64 a1,
        unsigned __int8 **a2,
        __int64 *a3,
        _OWORD *a4,
        dyld4::FileRecord *a5)
{
  char PVLEUInt64; // w22
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15[10]; // [xsp+8h] [xbp-88h] BYREF

  PVLEUInt64 = lsl::readPVLEUInt64(a2);
  *a3 = lsl::readPVLEUInt64(a2);
  if ( (PVLEUInt64 & 4) != 0 )
  {
    *a4 = *(_OWORD *)*a2;
    v12 = (__int64)(a2[1] - 16);
    *a2 += 16;
    a2[1] = (unsigned __int8 *)v12;
    if ( (PVLEUInt64 & 1) == 0 )
    {
LABEL_3:
      if ( (PVLEUInt64 & 2) == 0 )
        return;
      goto LABEL_4;
    }
  }
  else if ( (PVLEUInt64 & 1) == 0 )
  {
    goto LABEL_3;
  }
  v13 = lsl::readPVLEUInt64(a2);
  v14 = lsl::readPVLEUInt64(a2);
  dyld4::FileManager::fileRecordForVolumeUUIDAndObjID(
    *(dyld4::FileManager **)(a1 + 16),
    (const UUID *)(*(_QWORD *)(a1 + 56) + 16 * v13),
    v14,
    (__int64)v15);
  dyld4::FileRecord::operator=(a5, (dyld4::FileRecord *)v15);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v15);
  if ( (PVLEUInt64 & 2) == 0 )
    return;
LABEL_4:
  v11 = lsl::readPVLEUInt64(a2);
  dyld4::FileManager::fileRecordForPath(
    v15,
    *(dyld4::FileManager **)(a1 + 16),
    *(lsl::Allocator **)(a1 + 8),
    (const char *)(*(_QWORD *)(a1 + 120) + v11));
  dyld4::FileRecord::operator=(a5, (dyld4::FileRecord *)v15);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v15);
}
