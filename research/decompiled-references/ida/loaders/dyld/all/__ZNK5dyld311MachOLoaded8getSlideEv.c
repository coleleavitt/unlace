__int64 __fastcall dyld3::MachOLoaded::getSlide(dyld3::MachOLoaded *this)
{
  int v1; // w19
  __int64 v2; // x19
  __int64 v4; // [xsp+38h] [xbp-38h] BYREF
  __int64 *v5; // [xsp+40h] [xbp-30h]
  __int64 v6; // [xsp+48h] [xbp-28h]
  __int64 v7; // [xsp+50h] [xbp-20h]
  _BYTE v8[8]; // [xsp+58h] [xbp-18h] BYREF

  v1 = (int)this;
  Diagnostics::Diagnostics((Diagnostics *)v8);
  v4 = 0;
  v5 = &v4;
  v6 = 0x2000000000LL;
  v7 = 0;
  dyld3::MachOFile::forEachLoadCommand(v1, (Diagnostics *)v8);
  Diagnostics::assertNoError((Diagnostics *)v8);
  v2 = v5[3];
  _Block_object_dispose(&v4, 8);
  Diagnostics::~Diagnostics((Diagnostics *)v8);
  return v2;
}
