__int64 __fastcall dyld4::Atlas::Image::Image(
        __int64 a1,
        dyld4::RuntimeState *a2,
        lsl::Allocator *a3,
        __int64 a4,
        dyld4::Loader *a5)
{
  dyld4::FileRecord *v9; // x20
  __int64 Address; // x0
  const dyld4::FileManager *v11; // x23
  _BYTE *v12; // x0
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9
  const char *v15; // x0
  unsigned __int64 v17[4]; // [xsp+8h] [xbp-C8h] BYREF
  __int64 v18[4]; // [xsp+28h] [xbp-A8h] BYREF
  __int64 v19[10]; // [xsp+48h] [xbp-88h] BYREF

  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 8) = 0u;
  v9 = (dyld4::FileRecord *)(a1 + 8);
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_QWORD *)(a1 + 72) = 0x1FFFFFFFFLL;
  *(_WORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 82) = 1;
  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(a1 + 88, a4);
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 96) = 0u;
  *(_OWORD *)(a1 + 112) = 0u;
  *(_OWORD *)(a1 + 121) = 0u;
  Address = dyld4::Loader::loadAddress(a5, a2);
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 160) = Address;
  *(_DWORD *)(a1 + 183) = 0;
  v11 = (dyld4::RuntimeState *)((char *)a2 + 336);
  dyld4::Loader::fileID(v18, a5, v11);
  if ( !v18[0] || !v18[1] )
    goto LABEL_8;
  dyld4::Loader::fileID((__int64 *)v17, a5, v11);
  dyld4::FileManager::fileRecordForFileID(v11, v17, (dyld4::FileRecord *)v19);
  dyld4::FileRecord::operator=(v9, (dyld4::FileRecord *)v19);
  dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v19);
  v12 = (_BYTE *)dyld4::FileRecord::volume(v9);
  if ( !*v12 )
  {
    v13 = 0;
    do
    {
      v14 = v13;
      if ( v13 == 15 )
        break;
      ++v13;
    }
    while ( !v12[v14 + 1] );
    if ( v14 >= 0xF )
    {
LABEL_8:
      v15 = (const char *)dyld4::Loader::path(a5);
      dyld4::FileManager::fileRecordForPath(v19, v11, a3, v15);
      dyld4::FileRecord::operator=(v9, (dyld4::FileRecord *)v19);
      dyld4::FileRecord::~FileRecord((dyld4::FileRecord *)v19);
    }
  }
  return a1;
}
