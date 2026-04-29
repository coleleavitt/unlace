__int64 __fastcall dyld3::MachOFile::hasLoadCommand(dyld3::MachOFile *this, int a2)
{
  __int64 v4; // x19
  _QWORD v6[5]; // [xsp+8h] [xbp-78h] BYREF
  int v7; // [xsp+30h] [xbp-50h]
  vm_address_t v8; // [xsp+38h] [xbp-48h] BYREF
  __int64 v9; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v10; // [xsp+48h] [xbp-38h]
  __int64 v11; // [xsp+50h] [xbp-30h]
  char v12; // [xsp+58h] [xbp-28h]

  v9 = 0;
  v10 = &v9;
  v11 = 0x2000000000LL;
  v12 = 0;
  Diagnostics::Diagnostics((Diagnostics *)&v8);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZNK5dyld39MachOFile14hasLoadCommandEj_block_invoke;
  v6[3] = &unk_97508;
  v7 = a2;
  v6[4] = &v9;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v8, (__int64)v6);
  v4 = *((unsigned __int8 *)v10 + 24);
  Diagnostics::~Diagnostics(&v8);
  _Block_object_dispose(&v9, 8);
  return v4;
}
