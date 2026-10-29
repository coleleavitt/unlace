void __fastcall dyld3::MachOLoaded::getLinkEditLoadCommands(_DWORD *a1, Diagnostics *a2, __int64 a3)
{
  _QWORD v5[10]; // [xsp+0h] [xbp-C0h] BYREF
  _QWORD v6[3]; // [xsp+50h] [xbp-70h] BYREF
  char v7; // [xsp+68h] [xbp-58h]
  _QWORD v8[3]; // [xsp+70h] [xbp-50h] BYREF
  char v9; // [xsp+88h] [xbp-38h]
  _QWORD v10[3]; // [xsp+90h] [xbp-30h] BYREF
  char v11; // [xsp+A8h] [xbp-18h]

  *(_QWORD *)(a3 + 64) = 0;
  *(_OWORD *)(a3 + 32) = 0u;
  *(_OWORD *)(a3 + 48) = 0u;
  *(_OWORD *)a3 = 0u;
  *(_OWORD *)(a3 + 16) = 0u;
  v10[0] = 0;
  v10[1] = v10;
  v10[2] = 0x2000000000LL;
  v11 = 0;
  v8[0] = 0;
  v8[1] = v8;
  v8[2] = 0x2000000000LL;
  v9 = 0;
  v6[0] = 0;
  v6[1] = v6;
  v6[2] = 0x2000000000LL;
  v7 = 0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 0x40000000;
  v5[2] = ___ZNK5dyld311MachOLoaded23getLinkEditLoadCommandsER11DiagnosticsRNS0_12LinkEditInfoE_block_invoke;
  v5[3] = &unk_97980;
  v5[8] = a2;
  v5[9] = a3;
  v5[4] = v10;
  v5[5] = v8;
  v5[6] = v6;
  v5[7] = a1;
  dyld3::MachOFile::forEachLoadCommand(a1, a2, (__int64)v5);
  if ( Diagnostics::noError(a2) && *(_QWORD *)(a3 + 32) && !*(_QWORD *)(a3 + 24) )
    Diagnostics::error(a2, "LC_DYSYMTAB but no LC_SYMTAB load command");
  _Block_object_dispose(v6, 8);
  _Block_object_dispose(v8, 8);
  _Block_object_dispose(v10, 8);
}
