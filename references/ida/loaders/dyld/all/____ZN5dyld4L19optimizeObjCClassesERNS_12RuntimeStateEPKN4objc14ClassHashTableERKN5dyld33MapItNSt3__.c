__int64 __fastcall ___ZN5dyld4L19optimizeObjCClassesERNS_12RuntimeStateEPKN4objc14ClassHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERKNS7_IPKcNSB_10BindTargetENS6_11HashCStringENS6_12EqualCStringEEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke(
        __int64 a1,
        objc_visitor::Class *a2)
{
  char v4; // w1
  __int64 VMAddress; // x21
  char v6; // w1
  char v7; // w24
  __int64 NameVMAddr; // x22
  char v9; // w1
  char v10; // w23
  const char *v11; // x0
  const char *Name; // x20
  dyld4::JustInTimeLoader **v14; // x19
  const char *v15; // x0
  _QWORD v16[3]; // [xsp+18h] [xbp-48h] BYREF

  if ( (objc_visitor::Class::isRootClass(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL) & 1) == 0 )
  {
    objc_visitor::Class::getSuperclassField(v16, a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
    metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v16);
    if ( !v4 )
      goto LABEL_11;
    if ( !*(_QWORD *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v16) )
    {
      Name = (const char *)objc_visitor::Class::getName(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
      v14 = *(dyld4::JustInTimeLoader ***)(a1 + 40);
      v15 = (const char *)dyld4::JustInTimeLoader::path(*v14);
      return Diagnostics::error((Diagnostics *)(v14 + 4), "Missing weak superclass of class %s in %s", Name, v15);
    }
  }
  if ( (unsigned int)objc_visitor::Class::isUnfixedBackwardDeployingStableSwift(
                       a2,
                       *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL) )
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 544LL) = 1;
  VMAddress = objc_visitor::Class::getVMAddress(a2);
  v7 = v6;
  NameVMAddr = objc_visitor::Class::getNameVMAddr(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
  v10 = v9;
  v11 = (const char *)objc_visitor::Class::getName(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
  if ( !v7 || !v10 )
LABEL_11:
    std::__throw_bad_optional_access[abi:v15006]();
  return dyld4::PrebuiltObjC::ObjCOptimizerImage::visitClass(
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           *(unsigned int **)(a1 + 64),
           *(_QWORD *)(a1 + 72),
           *(_QWORD *)(a1 + 80),
           VMAddress,
           1,
           NameVMAddr,
           1,
           v11);
}
