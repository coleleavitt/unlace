void __fastcall dyld3::MachOAnalyzer::forEachBindLocation_Opcodes(_DWORD *a1, Diagnostics *a2, __int64 a3, __int64 a4)
{
  _QWORD v4[5]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v5[5]; // [xsp+28h] [xbp-28h] BYREF

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld313MachOAnalyzer27forEachBindLocation_OpcodesER11DiagnosticsU13block_pointerFvyjRbES5__block_invoke;
  v5[3] = &unk_98298;
  v5[4] = a3;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld313MachOAnalyzer27forEachBindLocation_OpcodesER11DiagnosticsU13block_pointerFvyjRbES5__block_invoke_2;
  v4[3] = &unk_982C0;
  v4[4] = a4;
  dyld3::MachOAnalyzer::forEachBindUnified_Opcodes(a1, a2, 0, (__int64)v5, (__int64)v4);
}
