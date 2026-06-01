char *__fastcall dyld3::FatFile::archNames(dyld3::FatFile *this, char *a2, unsigned __int64 a3)
{
  _QWORD v7[6]; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v8[3]; // [xsp+38h] [xbp-48h] BYREF
  char v9; // [xsp+50h] [xbp-30h]
  vm_address_t v10; // [xsp+58h] [xbp-28h] BYREF

  *a2 = 0;
  Diagnostics::Diagnostics((Diagnostics *)&v10);
  v8[0] = 0;
  v8[1] = v8;
  v8[2] = 0x2000000000LL;
  v9 = 0;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld37FatFile9archNamesEPcy_block_invoke;
  v7[3] = &unk_97088;
  v7[4] = v8;
  v7[5] = a2;
  dyld3::FatFile::forEachSlice(this, (Diagnostics *)&v10, a3, 0, (__int64)v7);
  _Block_object_dispose(v8, 8);
  Diagnostics::~Diagnostics(&v10);
  return a2;
}
