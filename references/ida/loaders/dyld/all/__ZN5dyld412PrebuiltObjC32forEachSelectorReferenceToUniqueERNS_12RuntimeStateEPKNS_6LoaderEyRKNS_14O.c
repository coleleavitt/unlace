void __fastcall dyld4::PrebuiltObjC::forEachSelectorReferenceToUnique(
        dyld4::RuntimeState *a1,
        dyld4::Loader *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  const dyld3::MachOAnalyzer *v10; // x0
  _QWORD v11[6]; // [xsp+8h] [xbp-1C8h] BYREF
  _QWORD v12[6]; // [xsp+38h] [xbp-198h] BYREF
  _QWORD v13[6]; // [xsp+68h] [xbp-168h] BYREF
  _QWORD v14[6]; // [xsp+98h] [xbp-138h] BYREF
  _QWORD v15[7]; // [xsp+C8h] [xbp-108h] BYREF
  _QWORD v16[6]; // [xsp+100h] [xbp-D0h] BYREF
  __int64 v17; // [xsp+130h] [xbp-A0h] BYREF
  __int64 *v18; // [xsp+138h] [xbp-98h]
  __int64 v19; // [xsp+140h] [xbp-90h]
  __int64 (__fastcall *v20)(); // [xsp+148h] [xbp-88h]
  __int64 (__fastcall *v21)(); // [xsp+150h] [xbp-80h]
  __int64 v22; // [xsp+158h] [xbp-78h] BYREF
  vm_address_t v23; // [xsp+178h] [xbp-58h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v23);
  v17 = 0;
  v18 = &v17;
  v19 = 0x4802000000LL;
  v20 = __Block_byref_object_copy__8_0;
  v21 = __Block_byref_object_dispose__9_0;
  v10 = (const dyld3::MachOAnalyzer *)dyld4::Loader::analyzer(a2, a1);
  metadata_visitor::Visitor::Visitor((metadata_visitor::Visitor *)&v22, v10);
  if ( Diagnostics::hasError((Diagnostics *)&v23) )
    dyld4::PrebuiltObjC::forEachSelectorReferenceToUnique();
  if ( *(_DWORD *)(a4 + 40) )
  {
    v16[0] = _NSConcreteStackBlock;
    v16[1] = 0x40000000;
    v16[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke;
    v16[3] = &unk_96B30;
    v16[4] = a5;
    v16[5] = a3;
    objc_visitor::Visitor::forEachSelectorReference(v18 + 5, v16);
  }
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 0x40000000;
  v15[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke_2;
  v15[3] = &unk_96B58;
  v15[5] = &v17;
  v15[6] = a3;
  v15[4] = a5;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 0x40000000;
  v14[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke_3;
  v14[3] = &unk_96B80;
  v14[4] = v15;
  v14[5] = &v17;
  if ( *(_BYTE *)(a4 + 60) && *(_DWORD *)(a4 + 44) )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke_4;
    v13[3] = &unk_96BA8;
    v13[4] = v14;
    v13[5] = &v17;
    objc_visitor::Visitor::forEachClassAndMetaClass(v18 + 5, v13);
  }
  if ( *(_BYTE *)(a4 + 61) && *(_DWORD *)(a4 + 48) )
  {
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 0x40000000;
    v12[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke_5;
    v12[3] = &unk_96BD0;
    v12[4] = v14;
    v12[5] = &v17;
    objc_visitor::Visitor::forEachCategory(v18 + 5, v12);
  }
  if ( *(_BYTE *)(a4 + 62) && *(_DWORD *)(a4 + 52) )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 0x40000000;
    v11[2] = ___ZN5dyld412PrebuiltObjC32forEachSelectorReferenceToUniqueERNS_12RuntimeStateEPKNS_6LoaderEyRKNS_14ObjCBinaryInfoEU13block_pointerFvyyPKcE_block_invoke_6;
    v11[3] = &unk_96BF8;
    v11[4] = v14;
    v11[5] = &v17;
    objc_visitor::Visitor::forEachProtocol(v18 + 5, v11);
  }
  _Block_object_dispose(&v17, 8);
  Diagnostics::~Diagnostics(&v23);
}
