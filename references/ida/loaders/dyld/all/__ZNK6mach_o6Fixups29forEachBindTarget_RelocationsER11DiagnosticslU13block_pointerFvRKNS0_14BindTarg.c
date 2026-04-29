void __fastcall mach_o::Fixups::forEachBindTarget_Relocations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v4[6]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v5[3]; // [xsp+30h] [xbp-20h] BYREF
  int v6; // [xsp+48h] [xbp-8h]

  v5[0] = 0;
  v5[1] = v5;
  v5[2] = 0x2000000000LL;
  v6 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK6mach_o6Fixups29forEachBindTarget_RelocationsER11DiagnosticslU13block_pointerFvRKNS0_14BindTargetInfoERbE_block_invoke;
  v4[3] = &unk_97CA0;
  v4[4] = a4;
  v4[5] = v5;
  mach_o::Fixups::forEachBind_Relocations(a1, a2, 1, a3, v4);
  _Block_object_dispose(v5, 8);
}
