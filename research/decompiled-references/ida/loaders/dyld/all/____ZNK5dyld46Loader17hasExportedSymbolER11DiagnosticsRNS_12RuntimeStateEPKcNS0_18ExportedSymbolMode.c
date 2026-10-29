__int64 __fastcall ___ZNK5dyld46Loader17hasExportedSymbolER11DiagnosticsRNS_12RuntimeStateEPKcNS0_18ExportedSymbolModeEPNS0_14ResolvedSymbolEPN5dyld35ArrayIPKS0_EE_block_invoke(
        __int64 a1,
        const mach_o::Layout *a2)
{
  __int64 v3; // x20
  __int64 v4; // x1
  _QWORD v6[6]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v7; // [xsp+30h] [xbp-30h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  _BYTE v9[8]; // [xsp+48h] [xbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  mach_o::SymbolTable::SymbolTable((mach_o::SymbolTable *)v9, a2);
  v4 = *(_QWORD *)(a1 + 48);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 0x40000000;
  v6[2] = ___ZNK5dyld46Loader17hasExportedSymbolER11DiagnosticsRNS_12RuntimeStateEPKcNS0_18ExportedSymbolModeEPNS0_14ResolvedSymbolEPN5dyld35ArrayIPKS0_EE_block_invoke_2;
  v6[3] = &unk_95D80;
  v7 = *(_OWORD *)(a1 + 56);
  v8 = *(_QWORD *)(a1 + 72);
  v6[4] = *(_QWORD *)(a1 + 32);
  v6[5] = v3;
  return mach_o::SymbolTable::forEachGlobalSymbol(v9, v4, v6);
}
