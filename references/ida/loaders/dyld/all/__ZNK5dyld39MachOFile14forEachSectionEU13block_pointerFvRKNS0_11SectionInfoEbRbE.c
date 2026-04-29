void __fastcall dyld3::MachOFile::forEachSection(int a1)
{
  _QWORD v2[3]; // [xsp+48h] [xbp-58h] BYREF
  int v3; // [xsp+60h] [xbp-40h]
  _BYTE v4[12]; // [xsp+68h] [xbp-38h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)v4);
  v2[0] = 0;
  v2[1] = v2;
  v2[2] = 0x2000000000LL;
  v3 = 0;
  dyld3::MachOFile::forEachLoadCommand(a1, (Diagnostics *)v4);
  Diagnostics::assertNoError((Diagnostics *)v4);
  _Block_object_dispose(v2, 8);
  Diagnostics::~Diagnostics((Diagnostics *)v4);
}
