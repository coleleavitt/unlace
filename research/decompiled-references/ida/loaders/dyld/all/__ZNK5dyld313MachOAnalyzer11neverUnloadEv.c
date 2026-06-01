bool __fastcall dyld3::MachOAnalyzer::neverUnload(dyld3::MachOAnalyzer *this)
{
  _BOOL8 v2; // x19
  _QWORD v4[5]; // [xsp+8h] [xbp-68h] BYREF
  _BYTE v5[8]; // [xsp+30h] [xbp-40h] BYREF
  __int64 v6; // [xsp+38h] [xbp-38h] BYREF
  __int64 *v7; // [xsp+40h] [xbp-30h]
  __int64 v8; // [xsp+48h] [xbp-28h]
  char v9; // [xsp+50h] [xbp-20h]
  bool v10; // [xsp+5Fh] [xbp-11h] BYREF

  v10 = 0;
  if ( (unsigned int)dyld3::MachOAnalyzer::hasSwiftOrObjC(this, &v10)
    && (v10 || !(unsigned int)dyld3::MachOFile::isBundle(this))
    || (dyld3::MachOFile::hasThreadLocalVariables(this) & 1) != 0 )
  {
    return 1;
  }
  v6 = 0;
  v7 = &v6;
  v8 = 0x2000000000LL;
  v9 = 0;
  Diagnostics::Diagnostics((Diagnostics *)v5);
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld313MachOAnalyzer11neverUnloadEv_block_invoke;
  v4[3] = &unk_97FD8;
  v4[4] = &v6;
  dyld3::MachOFile::forEachDOFSection(this, v5, v4);
  v2 = (unsigned int)Diagnostics::noError((Diagnostics *)v5) && *((_BYTE *)v7 + 24);
  Diagnostics::~Diagnostics((Diagnostics *)v5);
  _Block_object_dispose(&v6, 8);
  return v2;
}
