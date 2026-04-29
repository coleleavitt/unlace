__int64 __fastcall dyld3::MachOAnalyzer::getLinkeditLayout(
        _DWORD *a1,
        Diagnostics *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v6[8]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+40h] [xbp-10h] BYREF
  __int64 v8; // [xsp+48h] [xbp-8h] BYREF

  v7 = a4;
  v8 = a3;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZNK5dyld313MachOAnalyzer17getLinkeditLayoutER11DiagnosticsyPKhRN6mach_o14LinkeditLayoutE_block_invoke;
  v6[3] = &__block_descriptor_tmp_294;
  v6[4] = a1;
  v6[5] = a5;
  v6[6] = &v8;
  v6[7] = &v7;
  dyld3::MachOFile::forEachLoadCommand(a1, a2, (__int64)v6);
  return 1;
}
