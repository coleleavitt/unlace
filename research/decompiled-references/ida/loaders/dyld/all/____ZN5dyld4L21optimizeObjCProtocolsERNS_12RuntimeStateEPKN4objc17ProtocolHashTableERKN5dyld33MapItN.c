void __fastcall ___ZN5dyld4L21optimizeObjCProtocolsERNS_12RuntimeStateEPKN4objc17ProtocolHashTableERKN5dyld33MapItNSt3__14pairI9VMAddressPKNS_6LoaderEEENS_10HashUInt16ENS_11EqualUInt16EEERNS_12PrebuiltObjC18ObjCOptimizerImageE_block_invoke(
        __int64 a1,
        objc_visitor::Protocol *a2,
        _BYTE *a3)
{
  __int64 VMAddress; // x20
  char v7; // w1
  char v8; // w24
  __int64 NameVMAddr; // x21
  char v10; // w1
  char v11; // w23
  const char *Name; // x0
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF
  char v14; // [xsp+18h] [xbp-38h]

  objc_visitor::Protocol::getISAVMAddr(&v13, a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
  if ( v14 )
  {
    Diagnostics::error((Diagnostics *)(*(_QWORD *)(a1 + 40) + 32LL), "Protocol ISA must be null");
    *a3 = 1;
  }
  else
  {
    VMAddress = objc_visitor::Protocol::getVMAddress(a2);
    v8 = v7;
    NameVMAddr = objc_visitor::Protocol::getNameVMAddr(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
    v11 = v10;
    Name = (const char *)objc_visitor::Protocol::getName(a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL);
    if ( !v8 || !v11 )
      std::__throw_bad_optional_access[abi:v15006]();
    dyld4::PrebuiltObjC::ObjCOptimizerImage::visitProtocol(
      *(_QWORD *)(a1 + 40),
      *(unsigned int **)(a1 + 48),
      *(_QWORD *)(a1 + 56),
      VMAddress,
      1,
      NameVMAddr,
      1,
      Name);
  }
}
