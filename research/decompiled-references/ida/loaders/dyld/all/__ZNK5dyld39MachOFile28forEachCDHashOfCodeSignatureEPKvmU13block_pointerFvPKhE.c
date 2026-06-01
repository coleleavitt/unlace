__int64 __fastcall dyld3::MachOFile::forEachCDHashOfCodeSignature(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  _QWORD v5[5]; // [xsp+8h] [xbp-28h] BYREF

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld39MachOFile28forEachCDHashOfCodeSignatureEPKvmU13block_pointerFvPKhE_block_invoke;
  v5[3] = &unk_977F8;
  v5[4] = a4;
  return dyld3::MachOFile::forEachCodeDirectoryBlob(a1, a2, a3, (__int64)v5);
}
