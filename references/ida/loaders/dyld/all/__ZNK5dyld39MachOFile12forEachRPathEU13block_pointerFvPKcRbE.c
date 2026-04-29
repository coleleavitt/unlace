void __fastcall dyld3::MachOFile::forEachRPath(_DWORD *a1, __int64 a2)
{
  _QWORD v4[5]; // [xsp+0h] [xbp-40h] BYREF
  vm_address_t v5; // [xsp+28h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v5);
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld39MachOFile12forEachRPathEU13block_pointerFvPKcRbE_block_invoke;
  v4[3] = &unk_97580;
  v4[4] = a2;
  dyld3::MachOFile::forEachLoadCommand(a1, (Diagnostics *)&v5, (__int64)v4);
  Diagnostics::assertNoError((Diagnostics *)&v5);
  Diagnostics::~Diagnostics(&v5);
}
