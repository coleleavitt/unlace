__int64 __fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::visitClass(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        char a10,
        const char *a11)
{
  __int64 v14; // x9
  const char *v15; // x22
  const char *v16; // x21
  __int64 result; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  const char **v20; // x8
  _QWORD v21[10]; // [xsp+0h] [xbp-80h] BYREF

  v21[0] = _NSConcreteStackBlock;
  v21[1] = 0x40000000;
  v21[2] = ___ZN5dyld4L22checkForDuplicateClassE9VMAddressPKcPKN4objc14ClassHashTableERKN5dyld33MapItNSt3__14pairIS0_PKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERKNS8_IS2_NSB_10BindTargetENS7_11HashCStringENS7_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke;
  v21[3] = &__block_descriptor_tmp_32_4;
  v21[4] = a5;
  v21[5] = a6;
  v21[6] = a11;
  v21[7] = a2;
  v21[8] = a3;
  v21[9] = a1;
  objc::ObjectHashTable::forEachObject(a4, a11, (__int64)v21);
  if ( !a10 || !*(_BYTE *)(a1 + 24) || !a8 )
    std::__throw_bad_optional_access[abi:v15006]();
  v14 = *(_QWORD *)(a1 + 16);
  v15 = (const char *)(a9 - v14);
  v16 = (const char *)(a7 - v14);
  result = dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCOptimizerImage::ObjCObject,4294967295ul>::verifySpace(
             a1 + 40,
             1);
  v18 = *(_QWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v19 + 1;
  v20 = (const char **)(v18 + 40 * v19);
  *v20 = a11;
  v20[1] = v15;
  v20[2] = (_BYTE *)(&dword_0 + 1);
  v20[3] = v16;
  v20[4] = (_BYTE *)(&dword_0 + 1);
  return result;
}
