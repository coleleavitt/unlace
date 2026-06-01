__int64 __fastcall ___ZNK5dyld46Loader13resolveSymbolER11DiagnosticsRNS_12RuntimeStateEiPKcbbU13block_pointerFvjjRKNS0_14ResolvedSymbolEEb_block_invoke(
        __int64 result)
{
  __int64 v1; // x9
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader *v4; // x21
  dyld4::Loader **v5; // x22
  __int64 v6; // x23
  dyld4::Loader **v7; // x24
  dyld4::Loader *v8; // x20

  v1 = *(_QWORD *)(result + 56);
  v2 = *(_QWORD *)(v1 + 48);
  if ( v2 )
  {
    v3 = result;
    v4 = *(dyld4::Loader **)(result + 48);
    v5 = *(dyld4::Loader ***)(v1 + 40);
    v6 = 8 * v2;
    v7 = v5;
    while ( 1 )
    {
      v8 = *v7;
      result = dyld4::Loader::hiddenFromFlat(*v7, 0);
      if ( !(_DWORD)result || v4 == v8 )
      {
        result = dyld4::Loader::hasExportedSymbol(
                   v8,
                   *(dyld3::MachOFile **)(v3 + 64),
                   *(dyld4::RuntimeState **)(v3 + 56),
                   *(const unsigned __int8 **)(v3 + 72),
                   1,
                   (dyld4::Loader **)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 40LL),
                   0);
        if ( (_DWORD)result )
          break;
      }
      ++v7;
      ++v5;
      v6 -= 8;
      if ( !v6 )
        return result;
    }
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) + 24LL) = 1;
  }
  return result;
}
