__int64 __fastcall ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5)
{
  __int64 (*v5)(void); // x6
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( !a3 || !a5 )
    std::__throw_bad_optional_access[abi:v15006]();
  v5 = *(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v5();
}
