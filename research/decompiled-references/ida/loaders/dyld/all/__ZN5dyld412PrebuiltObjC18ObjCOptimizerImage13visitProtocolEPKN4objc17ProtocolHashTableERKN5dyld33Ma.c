void __fastcall dyld4::PrebuiltObjC::ObjCOptimizerImage::visitProtocol(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        char a7,
        const char *a8)
{
  __int64 v16; // x27
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  const char *v20; // x21
  void **v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  const char **v24; // x8
  void **v25; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v26; // [xsp+8h] [xbp-98h]
  __int64 (__fastcall *v27)(); // [xsp+10h] [xbp-90h]
  void *v28; // [xsp+18h] [xbp-88h]
  __int64 *v29; // [xsp+20h] [xbp-80h]
  __int64 v30; // [xsp+28h] [xbp-78h]
  __int64 v31; // [xsp+30h] [xbp-70h] BYREF
  __int64 *v32; // [xsp+38h] [xbp-68h]
  __int64 v33; // [xsp+40h] [xbp-60h]
  char v34; // [xsp+48h] [xbp-58h]

  v16 = *(_QWORD *)(a1 + 136);
  dyld3::OverflowSafeArray<bool,4294967295ul>::verifySpace(a1 + 120, 1);
  v17 = *(_QWORD *)(a1 + 120);
  v18 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v18 + 1;
  *(_BYTE *)(v17 + v18) = 0;
  v31 = 0;
  v32 = &v31;
  v33 = 0x2000000000LL;
  v34 = 0;
  v25 = _NSConcreteStackBlock;
  v26 = 0x40000000;
  v27 = ___ZN5dyld4L23protocolIsInSharedCacheEPKcPKN4objc17ProtocolHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEE_block_invoke;
  v28 = &unk_96C60;
  v29 = &v31;
  v30 = a3;
  objc::ObjectHashTable::forEachObject(a2, a8, (__int64)&v25);
  LODWORD(a3) = *((unsigned __int8 *)v32 + 24);
  _Block_object_dispose(&v31, 8);
  if ( !(_DWORD)a3 )
  {
    if ( !a7 || !*(_BYTE *)(a1 + 24) || !a5 )
      std::__throw_bad_optional_access[abi:v15006]();
    v19 = *(_QWORD *)(a1 + 16);
    v20 = (const char *)(a6 - v19);
    v21 = (void **)(a4 - v19);
    dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCOptimizerImage::ObjCObject,4294967295ul>::verifySpace(a1 + 80, 1);
    v22 = *(_QWORD *)(a1 + 80);
    v23 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v23 + 1;
    v24 = (const char **)(v22 + 40 * v23);
    *v24 = a8;
    v24[1] = v20;
    v24[2] = (_BYTE *)(&dword_0 + 1);
    v24[3] = (const char *)v21;
    v24[4] = (_BYTE *)(&dword_0 + 1);
    v25 = v21;
    v26 = 1;
    LODWORD(v27) = 0;
    *(_DWORD *)(dyld3::Map<VMOffset,unsigned int,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetHash,dyld4::PrebuiltObjC::ObjCOptimizerImage::VMOffsetEqual>::insert(
                  a1 + 256,
                  &v25)
              + 16) = v16;
  }
}
