bool __fastcall ___ZN5dyld413PrebuiltSwift24findProtocolConformancesER11DiagnosticsRNS_12PrebuiltObjCERNS_12RuntimeStateE_block_invoke(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v4; // x0
  char v5; // w1
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  if ( *a2 )
    return 0;
  v4 = metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)(a2 + 8));
  if ( !v5 )
    std::__throw_bad_optional_access[abi:v15006]();
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v4 - *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 48) == 8 )
    v8 = *(_QWORD *)(v6 + v7);
  else
    v8 = *(unsigned int *)(v6 + v7);
  return v8 == 0;
}
