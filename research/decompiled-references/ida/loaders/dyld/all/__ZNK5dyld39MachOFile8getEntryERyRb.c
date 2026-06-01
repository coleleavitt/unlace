bool __fastcall dyld3::MachOFile::getEntry(dyld3::MachOFile *this, unsigned __int64 *a2, bool *a3)
{
  _BOOL8 v6; // x19
  _QWORD v8[7]; // [xsp+0h] [xbp-60h] BYREF
  vm_address_t v9; // [xsp+38h] [xbp-28h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v9);
  *a2 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZNK5dyld39MachOFile8getEntryERyRb_block_invoke;
  v8[3] = &__block_descriptor_tmp_86;
  v8[4] = this;
  v8[5] = a3;
  v8[6] = a2;
  dyld3::MachOFile::forEachLoadCommand(this, (Diagnostics *)&v9, (__int64)v8);
  v6 = *a2 != 0;
  Diagnostics::~Diagnostics(&v9);
  return v6;
}
