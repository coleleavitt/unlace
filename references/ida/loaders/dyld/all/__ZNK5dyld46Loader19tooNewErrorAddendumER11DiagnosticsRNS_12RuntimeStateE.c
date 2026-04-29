void __fastcall dyld4::Loader::tooNewErrorAddendum(dyld4::Loader *this, Diagnostics *a2, dyld4::RuntimeState *a3)
{
  _DWORD *v6; // x0
  _QWORD v7[7]; // [xsp+8h] [xbp-E8h] BYREF
  _QWORD v8[6]; // [xsp+40h] [xbp-B0h] BYREF
  _QWORD v9[3]; // [xsp+70h] [xbp-80h] BYREF
  int v10; // [xsp+88h] [xbp-68h]
  _QWORD v11[3]; // [xsp+90h] [xbp-60h] BYREF
  int v12; // [xsp+A8h] [xbp-48h]

  v11[0] = 0;
  v11[1] = v11;
  v11[2] = 0x2000000000LL;
  v12 = 0;
  v9[0] = 0;
  v9[1] = v9;
  v9[2] = 0x2000000000LL;
  v10 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZNK5dyld46Loader19tooNewErrorAddendumER11DiagnosticsRNS_12RuntimeStateE_block_invoke;
  v8[3] = &unk_95D30;
  v8[4] = v11;
  v8[5] = v9;
  dyld3::MachOFile::forEachSupportedPlatform(&dword_0, (__int64)v8);
  v6 = (_DWORD *)dyld4::Loader::mf(this, a3);
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld46Loader19tooNewErrorAddendumER11DiagnosticsRNS_12RuntimeStateE_block_invoke_2;
  v7[3] = &unk_95D58;
  v7[4] = v11;
  v7[5] = v9;
  v7[6] = a2;
  dyld3::MachOFile::forEachSupportedPlatform(v6, (__int64)v7);
  _Block_object_dispose(v9, 8);
  _Block_object_dispose(v11, 8);
}
