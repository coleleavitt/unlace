void __fastcall dyld4::Loader::findAndRunAllInitializers(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  __int64 v4; // x21
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x8
  _BYTE v12[24]; // [xsp+40h] [xbp-A0h] BYREF
  dyld3::MachOFile *Address; // [xsp+58h] [xbp-88h] BYREF
  vm_address_t v14; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v15; // [xsp+68h] [xbp-78h]
  __int64 v16; // [xsp+70h] [xbp-70h] BYREF
  lsl::Lock *v17[7]; // [xsp+78h] [xbp-68h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v14);
  Address = (dyld3::MachOFile *)dyld4::Loader::loadAddress(this, a2);
  dyld3::MachOAnalyzer::makeVMAddrConverter(Address, 1, (__int64)v12);
  v4 = *((_QWORD *)a2 + 12);
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_39;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_39;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v15 = &v16;
    v16 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) != 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_39;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_39;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v6 = MEMORY[0xFFFFFC0D8];
      if ( v6 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_39;
    }
  }
  else if ( !*(_BYTE *)(v4 + 32) )
  {
    v15 = &v16;
    v16 = -1;
    lsl::MemoryManager::lockGuard((__int64 *)v17, (lsl::MemoryManager *)v4);
    v7 = *(_QWORD *)(v4 + 24) - 1LL;
    *(_QWORD *)(v4 + 24) = v7;
    if ( !v7 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 1);
    lsl::Lock::unlock(v17[0]);
  }
  v17[0] = (lsl::Lock *)_NSConcreteStackBlock;
  v17[1] = (lsl::Lock *)0x40000000;
  v17[2] = (lsl::Lock *)___ZZNK5dyld46Loader25findAndRunAllInitializersERNS_12RuntimeStateEENK3__0clEv_block_invoke;
  v17[3] = (lsl::Lock *)&__block_descriptor_tmp_166;
  v17[4] = this;
  v17[5] = (lsl::Lock *)&Address;
  v17[6] = a2;
  dyld3::MachOAnalyzer::forEachInitializer(Address, &v14, v12, v17, 0);
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( v15 != &v16 )
      goto LABEL_40;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_39;
    if ( v16 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      goto LABEL_33;
    if ( v16 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v8 = MEMORY[0xFFFFFC0D0];
        v9 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_32;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v8 = MEMORY[0xFFFFFC0D8];
      v9 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_32:
      if ( v8 == v9 )
        goto LABEL_33;
    }
LABEL_39:
    __break(1u);
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v4 + 32) )
    goto LABEL_33;
  if ( v15 != &v16 )
LABEL_40:
    abort();
  lsl::MemoryManager::lockGuard((__int64 *)v17, (lsl::MemoryManager *)v4);
  if ( v16 == 1 )
  {
    v11 = *(_QWORD *)(v4 + 24) - 1LL;
    *(_QWORD *)(v4 + 24) = v11;
    if ( !v11 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 1);
  }
  else if ( v16 == -1 )
  {
    v10 = *(_QWORD *)(v4 + 24);
    if ( !v10 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
      v10 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v10 + 1;
  }
  lsl::Lock::unlock(v17[0]);
LABEL_33:
  if ( (dyld3::MachOFile::isArch(Address, "arm64e") & 1) == 0 )
    dyld3::MachOAnalyzer::forEachTerminator();
  Diagnostics::~Diagnostics(&v14);
}
