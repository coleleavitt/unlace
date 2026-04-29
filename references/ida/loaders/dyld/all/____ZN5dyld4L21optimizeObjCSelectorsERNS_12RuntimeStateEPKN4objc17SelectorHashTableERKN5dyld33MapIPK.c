__int64 __fastcall ___ZN5dyld4L21optimizeObjCSelectorsERNS_12RuntimeStateEPKN4objc17SelectorHashTableERKN5dyld33MapIPKcNS_6Loader10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke_2(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 result; // x0
  char v6; // w1
  __int64 v7; // x8
  unsigned __int64 v8; // x9

  result = objc_visitor::Method::getNameSelRefVMAddr(a2, *(_QWORD *)(a1[4] + 8LL) + 40LL);
  v7 = a1[5];
  if ( !*(_BYTE *)(v7 + 24) || !v6 )
    std::__throw_bad_optional_access[abi:v15006](result);
  v8 = result - *(_QWORD *)(v7 + 16);
  if ( v8 < a1[6] || v8 >= a1[7] )
  {
    result = Diagnostics::error(
               (Diagnostics *)(v7 + 32),
               "Cannot handle relative method list pointing outside of __objc_selrefs");
    *a3 = 1;
  }
  return result;
}
