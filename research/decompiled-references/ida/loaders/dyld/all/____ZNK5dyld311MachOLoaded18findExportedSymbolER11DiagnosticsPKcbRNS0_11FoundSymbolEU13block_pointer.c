__int64 __fastcall ___ZNK5dyld311MachOLoaded18findExportedSymbolER11DiagnosticsPKcbRNS0_11FoundSymbolEU13block_pointerFPKS0_S8_jE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v8; // x19

  v8 = result;
  if ( a4 )
  {
    result = *(_QWORD *)(result + 32);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(result + 16))(
                 result,
                 *(_QWORD *)(v8 + 56),
                 *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 8LL) + 24LL));
      if ( result )
      {
        result = dyld3::MachOLoaded::findExportedSymbol(
                   (dyld3::MachOFile *)result,
                   *(Diagnostics **)(v8 + 64),
                   *(const unsigned __int8 **)(v8 + 72),
                   *(unsigned __int8 *)(v8 + 88),
                   *(_QWORD *)(v8 + 80),
                   *(_QWORD *)(v8 + 32));
        if ( (_DWORD)result )
        {
          *a8 = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL) + 24LL) = 1;
        }
      }
    }
  }
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 8LL) + 24LL);
  return result;
}
