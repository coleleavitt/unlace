void __fastcall dyld4::JustInTimeLoader::withRegions(dyld3::MachOFile *a1, __int64 a2)
{
  int v4; // w21
  __int64 v5; // x0
  __int64 v6; // x12
  __int64 v7; // x8
  _QWORD v8[6]; // [xsp+0h] [xbp-A0h] BYREF
  int v9; // [xsp+30h] [xbp-70h]
  __int64 v10; // [xsp+38h] [xbp-68h] BYREF
  __int64 *v11; // [xsp+40h] [xbp-60h]
  __int64 v12; // [xsp+48h] [xbp-58h]
  __int64 (__fastcall *v13)(); // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v14)(); // [xsp+58h] [xbp-48h]
  char *v15; // [xsp+60h] [xbp-40h]
  __int64 v16; // [xsp+68h] [xbp-38h]
  __int64 v17; // [xsp+70h] [xbp-30h]

  v4 = dyld3::MachOFile::segmentCount(a1);
  dyld3::MachOFile::preferredLoadAddress(a1);
  v5 = __chkstk_darwin();
  v10 = 0;
  v11 = &v10;
  v12 = 0x4002000000LL;
  v13 = __Block_byref_object_copy__56_0;
  v14 = __Block_byref_object_dispose__57_0;
  v15 = (char *)v8 - (v6 & 0xFFFFFFFE0LL | 0x10);
  v16 = v7;
  v17 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZN5dyld416JustInTimeLoader11withRegionsEPKN5dyld39MachOFileEU13block_pointerFvRKNS1_5ArrayINS_6Loader6RegionEEEE_block_invoke;
  v8[3] = &unk_96130;
  v9 = v4;
  v8[4] = &v10;
  v8[5] = v5;
  dyld3::MachOFile::forEachSegment(a1, (__int64)v8);
  (*(void (__fastcall **)(__int64, __int64 *))(a2 + 16))(a2, v11 + 5);
  _Block_object_dispose(&v10, 8);
}
