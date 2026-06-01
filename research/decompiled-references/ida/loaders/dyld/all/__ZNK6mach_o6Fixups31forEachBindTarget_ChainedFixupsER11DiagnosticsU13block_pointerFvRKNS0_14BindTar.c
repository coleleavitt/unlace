void __fastcall mach_o::Fixups::forEachBindTarget_ChainedFixups(dyld3::MachOFile ***a1, Diagnostics *a2, __int64 a3)
{
  _QWORD v6[12]; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v7[3]; // [xsp+60h] [xbp-50h] BYREF
  int v8; // [xsp+78h] [xbp-38h]

  v7[0] = 0;
  v7[1] = v7;
  v7[2] = 0x2000000000LL;
  v8 = 0;
  v6[6] = _NSConcreteStackBlock;
  v6[7] = 0x40000000;
  v6[8] = ___ZNK6mach_o6Fixups31forEachBindTarget_ChainedFixupsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke;
  v6[9] = &unk_97B48;
  v6[10] = a3;
  v6[11] = v7;
  mach_o::Fixups::forEachChainedFixupTarget((int)a1, a2);
  if ( Diagnostics::noError(a2)
    && dyld3::MachOFile::isMainExecutable(**a1)
    && (unsigned int)dyld3::MachOFile::hasWeakDefs(**a1) )
  {
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 0x40000000;
    v6[2] = ___ZNK6mach_o6Fixups31forEachBindTarget_ChainedFixupsER11DiagnosticsU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke_2;
    v6[3] = &unk_97B70;
    v6[4] = a3;
    v6[5] = v7;
    dyld3::MachOFile::forEachTreatAsWeakDef((__int64)v6);
  }
  _Block_object_dispose(v7, 8);
}
