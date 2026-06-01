void __fastcall dyld3::MachOAnalyzer::forEachBind(dyld3::MachOFile *a1, Diagnostics *a2, __int64 a3, __int64 a4)
{
  _QWORD v4[5]; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD v5[7]; // [xsp+28h] [xbp-78h] BYREF
  _QWORD v6[4]; // [xsp+60h] [xbp-40h] BYREF
  _QWORD v7[3]; // [xsp+80h] [xbp-20h] BYREF
  char v8; // [xsp+98h] [xbp-8h]

  v7[0] = 0;
  v7[1] = v7;
  v7[2] = 0x2000000000LL;
  v8 = 0;
  v6[0] = 0;
  v6[1] = v6;
  v6[2] = 0x2000000000LL;
  v6[3] = 0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld313MachOAnalyzer11forEachBindER11DiagnosticsU13block_pointerFvyihPKcbbyRbEU13block_pointerFvS4_E_block_invoke;
  v5[3] = &unk_97E20;
  v5[5] = v7;
  v5[6] = v6;
  v5[4] = a3;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZNK5dyld313MachOAnalyzer11forEachBindER11DiagnosticsU13block_pointerFvyihPKcbbyRbEU13block_pointerFvS4_E_block_invoke_2;
  v4[3] = &unk_97E48;
  v4[4] = a4;
  dyld3::MachOAnalyzer::forEachBind(a1, a2, (__int64)v5, (__int64)v4);
  _Block_object_dispose(v6, 8);
  _Block_object_dispose(v7, 8);
}
