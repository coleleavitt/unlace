void __fastcall dyld3::MachOFile::forEachSegment(_DWORD *a1, __int64 a2)
{
  bool v4; // w8
  _QWORD v5[7]; // [xsp+8h] [xbp-78h] BYREF
  bool v6; // [xsp+40h] [xbp-40h]
  _QWORD v7[3]; // [xsp+48h] [xbp-38h] BYREF
  int v8; // [xsp+60h] [xbp-20h]
  _BYTE v9[8]; // [xsp+68h] [xbp-18h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)v9);
  v4 = a1[1] == 7;
  v7[0] = 0;
  v7[1] = v7;
  v7[2] = 0x2000000000LL;
  v8 = 0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld39MachOFile14forEachSegmentEU13block_pointerFvRKNS0_11SegmentInfoERbE_block_invoke;
  v5[3] = &unk_97418;
  v5[5] = v7;
  v5[6] = a1;
  v5[4] = a2;
  v6 = v4;
  dyld3::MachOFile::forEachLoadCommand(a1, (Diagnostics *)v9, (__int64)v5);
  Diagnostics::assertNoError((Diagnostics *)v9);
  _Block_object_dispose(v7, 8);
  Diagnostics::~Diagnostics((Diagnostics *)v9);
}
