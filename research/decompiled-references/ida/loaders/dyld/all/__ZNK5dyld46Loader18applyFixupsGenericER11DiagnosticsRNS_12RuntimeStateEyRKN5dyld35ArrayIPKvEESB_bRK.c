void __fastcall dyld4::Loader::applyFixupsGeneric(
        dyld4::Loader *a1,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  dyld3::MachOLoaded *Address; // x20
  __int64 Slide; // x24
  _BOOL4 hasError; // w23
  __int64 v18; // x0
  _QWORD v19[8]; // [xsp+0h] [xbp-1E0h] BYREF
  _QWORD v20[7]; // [xsp+40h] [xbp-1A0h] BYREF
  _QWORD v21[8]; // [xsp+78h] [xbp-168h] BYREF
  _QWORD v22[9]; // [xsp+B8h] [xbp-128h] BYREF
  _QWORD v23[7]; // [xsp+100h] [xbp-E0h] BYREF
  _QWORD v24[9]; // [xsp+138h] [xbp-A8h] BYREF

  Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(a1, a3);
  Slide = dyld3::MachOLoaded::getSlide(Address);
  if ( (unsigned int)dyld3::MachOFile::hasChainedFixups(Address) )
  {
    if ( !*(_DWORD *)(*((_QWORD *)a3 + 1) + 164LL)
      || !(unsigned int)dyld3::MachOFile::hasChainedFixupsLoadCommand(Address)
      || *(_QWORD *)(a5 + 16) >> 4 > 0x270u
      || (dyld4::Loader::setUpPageInLinking(a1, a2, (__int64)a3, Slide, a4, a5),
          hasError = Diagnostics::hasError(a2),
          Diagnostics::clearError((vm_address_t *)a2),
          hasError) )
    {
      v18 = dyld3::MachOAnalyzer::chainStartsOffset(Address);
      v24[0] = _NSConcreteStackBlock;
      v24[1] = 0x40000000;
      v24[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke;
      v24[3] = &__block_descriptor_tmp_79;
      v24[4] = Address;
      v24[5] = a2;
      v24[6] = Slide;
      v24[7] = a5;
      v24[8] = a3;
      dyld3::MachOAnalyzer::withChainStarts(Address, a2, v18, (__int64)v24);
    }
  }
  else if ( (unsigned int)dyld3::MachOFile::hasOpcodeFixups(Address) )
  {
    v23[0] = _NSConcreteStackBlock;
    v23[1] = 0x40000000;
    v23[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke_3;
    v23[3] = &__block_descriptor_tmp_82;
    v23[4] = Address;
    v23[5] = Slide;
    v23[6] = a3;
    dyld3::MachOAnalyzer::forEachRebaseLocation_Opcodes(Address, a2, v23);
    if ( !Diagnostics::hasError(a2) )
    {
      v22[0] = _NSConcreteStackBlock;
      v22[1] = 0x40000000;
      v22[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke_4;
      v22[3] = &__block_descriptor_tmp_85_0;
      v22[4] = a1;
      v22[5] = Address;
      v22[6] = a5;
      v22[7] = a3;
      v22[8] = a8;
      v21[0] = _NSConcreteStackBlock;
      v21[1] = 0x40000000;
      v21[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke_5;
      v21[3] = &__block_descriptor_tmp_88_0;
      v21[4] = a1;
      v21[5] = Address;
      v21[6] = a6;
      v21[7] = a3;
      dyld3::MachOAnalyzer::forEachBindLocation_Opcodes(Address, a2, v22, v21);
    }
  }
  else
  {
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 0x40000000;
    v20[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke_6;
    v20[3] = &__block_descriptor_tmp_89_0;
    v20[4] = Address;
    v20[5] = Slide;
    v20[6] = a3;
    dyld3::MachOAnalyzer::forEachRebaseLocation_Relocations(Address, a2, v20);
    if ( !Diagnostics::hasError(a2) )
    {
      v19[0] = _NSConcreteStackBlock;
      v19[1] = 0x40000000;
      v19[2] = ___ZNK5dyld46Loader18applyFixupsGenericER11DiagnosticsRNS_12RuntimeStateEyRKN5dyld35ArrayIPKvEESB_bRKNS6_INS0_21MissingFlatLazySymbolEEE_block_invoke_7;
      v19[3] = &__block_descriptor_tmp_90;
      v19[4] = a1;
      v19[5] = Address;
      v19[6] = a5;
      v19[7] = a3;
      dyld3::MachOAnalyzer::forEachBindLocation_Relocations(Address, a2, v19);
    }
  }
}
