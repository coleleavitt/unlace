void __fastcall dyld3::MachOFile::forEachSupportedPlatform(_DWORD *a1, __int64 a2)
{
  _QWORD v4[7]; // [xsp+0h] [xbp-70h] BYREF
  _QWORD v5[3]; // [xsp+38h] [xbp-38h] BYREF
  char v6; // [xsp+50h] [xbp-20h]
  vm_address_t v7; // [xsp+58h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v7);
  v5[0] = 0;
  v5[1] = v5;
  v5[2] = 0x2000000000LL;
  v6 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld39MachOFile24forEachSupportedPlatformEU13block_pointerFvNS_8PlatformEjjE_block_invoke;
  v4[3] = &unk_972A0;
  v4[5] = v5;
  v4[6] = a1;
  v4[4] = a2;
  dyld3::MachOFile::forEachLoadCommand(a1, (Diagnostics *)&v7, (__int64)v4);
  Diagnostics::assertNoError((Diagnostics *)&v7);
  _Block_object_dispose(v5, 8);
  Diagnostics::~Diagnostics(&v7);
}
