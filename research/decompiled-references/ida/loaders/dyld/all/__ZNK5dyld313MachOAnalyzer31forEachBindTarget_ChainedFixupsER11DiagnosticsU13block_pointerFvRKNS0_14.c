void __fastcall dyld3::MachOAnalyzer::forEachBindTarget_ChainedFixups(
        dyld3::MachOFile *a1,
        Diagnostics *a2,
        __int64 a3)
{
  _QWORD v6[6]; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v7[6]; // [xsp+30h] [xbp-80h] BYREF
  _QWORD v8[3]; // [xsp+60h] [xbp-50h] BYREF
  int v9; // [xsp+78h] [xbp-38h]

  v8[0] = 0;
  v8[1] = v8;
  v8[2] = 0x2000000000LL;
  v9 = 0;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld313MachOAnalyzer31forEachBindTarget_ChainedFixupsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke;
  v7[3] = &unk_981D0;
  v7[4] = a3;
  v7[5] = v8;
  dyld3::MachOAnalyzer::forEachChainedFixupTarget((__int64)a1, a2, (__int64)v7);
  if ( Diagnostics::noError(a2)
    && dyld3::MachOFile::isMainExecutable(a1)
    && (unsigned int)dyld3::MachOFile::hasWeakDefs(a1) )
  {
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 0x40000000;
    v6[2] = ___ZNK5dyld313MachOAnalyzer31forEachBindTarget_ChainedFixupsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke_2;
    v6[3] = &unk_981F8;
    v6[4] = a3;
    v6[5] = v8;
    dyld3::MachOFile::forEachTreatAsWeakDef((__int64)v6);
  }
  _Block_object_dispose(v8, 8);
}
