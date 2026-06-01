void __fastcall mach_o::Fixups::forEachBindTarget_Opcodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v5[6]; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD v6[6]; // [xsp+30h] [xbp-70h] BYREF
  _QWORD v7[3]; // [xsp+60h] [xbp-40h] BYREF
  int v8; // [xsp+78h] [xbp-28h]
  _QWORD v9[3]; // [xsp+80h] [xbp-20h] BYREF
  int v10; // [xsp+98h] [xbp-8h]

  v9[0] = 0;
  v9[1] = v9;
  v9[2] = 0x2000000000LL;
  v10 = -1;
  v7[0] = 0;
  v7[1] = v7;
  v7[2] = 0x2000000000LL;
  v8 = -1;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZNK6mach_o6Fixups25forEachBindTarget_OpcodesER11DiagnosticsbU13block_pointerFvRKNS0_14BindTargetInfoERbES8__block_invoke;
  v6[3] = &unk_97C50;
  v6[4] = a4;
  v6[5] = v9;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK6mach_o6Fixups25forEachBindTarget_OpcodesER11DiagnosticsbU13block_pointerFvRKNS0_14BindTargetInfoERbES8__block_invoke_2;
  v5[3] = &unk_97C78;
  v5[4] = a5;
  v5[5] = v7;
  mach_o::Fixups::forEachBindUnified_Opcodes(a1, a2, a3, v6, v5);
  _Block_object_dispose(v7, 8);
  _Block_object_dispose(v9, 8);
}
