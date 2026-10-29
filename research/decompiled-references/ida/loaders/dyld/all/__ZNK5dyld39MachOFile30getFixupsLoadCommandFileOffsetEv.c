__int64 __fastcall dyld3::MachOFile::getFixupsLoadCommandFileOffset(dyld3::MachOFile *this)
{
  __int64 v2; // x19
  _QWORD v4[6]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v5; // [xsp+38h] [xbp-38h] BYREF
  __int64 *v6; // [xsp+40h] [xbp-30h]
  __int64 v7; // [xsp+48h] [xbp-28h]
  int v8; // [xsp+50h] [xbp-20h]
  vm_address_t v9; // [xsp+58h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v9);
  v5 = 0;
  v6 = &v5;
  v7 = 0x2000000000LL;
  v8 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld39MachOFile30getFixupsLoadCommandFileOffsetEv_block_invoke;
  v4[3] = &unk_97620;
  v4[4] = &v5;
  v4[5] = this;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v9, (__int64)v4);
  v2 = 0;
  if ( !Diagnostics::hasError((Diagnostics *)&v9) )
    v2 = *((unsigned int *)v6 + 6);
  _Block_object_dispose(&v5, 8);
  Diagnostics::~Diagnostics(&v9);
  return v2;
}
