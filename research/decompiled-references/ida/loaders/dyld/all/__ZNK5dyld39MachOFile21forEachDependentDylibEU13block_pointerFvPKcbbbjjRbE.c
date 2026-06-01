void __fastcall dyld3::MachOFile::forEachDependentDylib(dyld3::MachOFile *a1, __int64 a2)
{
  int v4; // w0
  int v5; // w8
  char *v6; // x0
  const char *v7; // x1
  char *v8; // x0
  _QWORD v9[7]; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v10; // [xsp+38h] [xbp-68h] BYREF
  __int64 *v11; // [xsp+40h] [xbp-60h]
  __int64 v12; // [xsp+48h] [xbp-58h]
  char v13; // [xsp+50h] [xbp-50h]
  __int64 v14; // [xsp+58h] [xbp-48h] BYREF
  __int64 *v15; // [xsp+60h] [xbp-40h]
  __int64 v16; // [xsp+68h] [xbp-38h]
  int v17; // [xsp+70h] [xbp-30h]
  _BYTE v18[8]; // [xsp+78h] [xbp-28h] BYREF
  unsigned int v19[2]; // [xsp+80h] [xbp-20h] BYREF
  char *v20; // [xsp+88h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)v18);
  v14 = 0;
  v15 = &v14;
  v16 = 0x2000000000LL;
  v17 = 0;
  v10 = 0;
  v11 = &v10;
  v12 = 0x2000000000LL;
  v13 = 0;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 0x40000000;
  v9[2] = ___ZNK5dyld39MachOFile21forEachDependentDylibEU13block_pointerFvPKcbbbjjRbE_block_invoke;
  v9[3] = &unk_973A8;
  v9[4] = a2;
  v9[5] = &v14;
  v9[6] = &v10;
  dyld3::MachOFile::forEachLoadCommand(a1, (Diagnostics *)v18, (__int64)v9);
  if ( !*((_DWORD *)v15 + 6) && !*((_BYTE *)v11 + 24) )
  {
    v4 = dyld3::MachOFile::builtForPlatform(a1, 10, 1);
    v5 = *((_DWORD *)a1 + 3);
    if ( v4 )
    {
      if ( v5 != 6
        || ((*(_QWORD *)v19 = 0,
             v20 = nullptr,
             !(unsigned int)dyld3::MachOFile::getDylibInstallName(a1, (const char **)&v20, &v19[1], v19))
          ? (v6 = nullptr)
          : (v6 = v20),
            _platform_strncmp(v6, "/System/DriverKit/usr/lib/system/", 0x21u)) )
      {
        v7 = "/System/DriverKit/usr/lib/libSystem.B.dylib";
LABEL_16:
        (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64 *))(a2 + 16))(
          a2,
          v7,
          0,
          0,
          0,
          0x10000,
          0x10000,
          v11 + 3);
      }
    }
    else if ( v5 != 6
           || ((*(_QWORD *)v19 = 0,
                v20 = nullptr,
                !(unsigned int)dyld3::MachOFile::getDylibInstallName(a1, (const char **)&v20, &v19[1], v19))
             ? (v8 = nullptr)
             : (v8 = v20),
               _platform_strncmp(v8, "/usr/lib/system/", 0x10u)) )
    {
      v7 = "/usr/lib/libSystem.B.dylib";
      goto LABEL_16;
    }
  }
  Diagnostics::assertNoError((Diagnostics *)v18);
  _Block_object_dispose(&v10, 8);
  _Block_object_dispose(&v14, 8);
  Diagnostics::~Diagnostics((Diagnostics *)v18);
}
