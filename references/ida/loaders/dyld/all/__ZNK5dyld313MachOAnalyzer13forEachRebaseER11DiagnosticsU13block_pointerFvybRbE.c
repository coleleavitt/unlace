void __fastcall dyld3::MachOAnalyzer::forEachRebase(int a1)
{
  _QWORD v1[4]; // [xsp+A0h] [xbp-120h] BYREF
  _QWORD v2[4]; // [xsp+C0h] [xbp-100h] BYREF
  _QWORD v3[4]; // [xsp+E0h] [xbp-E0h] BYREF
  _QWORD v4[4]; // [xsp+100h] [xbp-C0h] BYREF
  _QWORD v5[4]; // [xsp+120h] [xbp-A0h] BYREF
  _QWORD v6[3]; // [xsp+140h] [xbp-80h] BYREF
  char v7; // [xsp+158h] [xbp-68h]

  v6[0] = 0;
  v6[1] = v6;
  v6[2] = 0x2000000000LL;
  v7 = 0;
  v5[0] = 0;
  v5[1] = v5;
  v5[2] = 0x2000000000LL;
  v5[3] = 0;
  v4[0] = 0;
  v4[1] = v4;
  v4[2] = 0x2000000000LL;
  v4[3] = 0;
  v3[0] = 0;
  v3[1] = v3;
  v3[2] = 0x2000000000LL;
  v3[3] = 0;
  v2[0] = 0;
  v2[1] = v2;
  v2[2] = 0x2000000000LL;
  v2[3] = 0;
  v1[0] = 0;
  v1[1] = v1;
  v1[2] = 0x2000000000LL;
  v1[3] = 0;
  dyld3::MachOFile::forEachSection(a1);
  dyld3::MachOAnalyzer::forEachRebase();
  _Block_object_dispose(v1, 8);
  _Block_object_dispose(v2, 8);
  _Block_object_dispose(v3, 8);
  _Block_object_dispose(v4, 8);
  _Block_object_dispose(v5, 8);
  _Block_object_dispose(v6, 8);
}
