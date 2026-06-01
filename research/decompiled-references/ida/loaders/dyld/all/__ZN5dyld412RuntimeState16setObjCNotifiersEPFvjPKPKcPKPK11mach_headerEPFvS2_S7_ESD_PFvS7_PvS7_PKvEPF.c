__int64 __fastcall dyld4::RuntimeState::setObjCNotifiers(
        lsl::Lock *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v12; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 result; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 *v21; // [xsp+8h] [xbp-78h]
  __int64 v22; // [xsp+10h] [xbp-70h] BYREF
  lsl::Lock *v23[5]; // [xsp+18h] [xbp-68h] BYREF

  v12 = *((_QWORD *)a1 + 12);
  if ( *(_BYTE *)(v12 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_37;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v21 = &v22;
    v22 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_37;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_37;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v14 = MEMORY[0xFFFFFC0D0];
      if ( v14 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_37;
    }
  }
  else if ( !*(_BYTE *)(v12 + 32) )
  {
    v21 = &v22;
    v22 = 1;
    lsl::MemoryManager::lockGuard((__int64 *)v23, (lsl::MemoryManager *)v12);
    v15 = *(_QWORD *)(v12 + 24);
    if ( !v15 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v12, 0);
      v15 = *(_QWORD *)(v12 + 24);
    }
    *(_QWORD *)(v12 + 24) = v15 + 1;
    lsl::Lock::unlock(v23[0]);
  }
  *((_QWORD *)a1 + 45) = a2;
  *((_QWORD *)a1 + 46) = a3;
  *((_QWORD *)a1 + 47) = a4;
  *((_QWORD *)a1 + 48) = a5;
  *((_QWORD *)a1 + 49) = a6;
  v23[0] = (lsl::Lock *)_NSConcreteStackBlock;
  v23[1] = (lsl::Lock *)0x40000000;
  v23[2] = (lsl::Lock *)___ZZN5dyld412RuntimeState16setObjCNotifiersEPFvjPKPKcPKPK11mach_headerEPFvS2_S7_ESD_PFvS7_PvS7_PKvEPFvjPK29_dyld_objc_notify_mapped_infoEENK3__8clEv_block_invoke;
  v23[3] = (lsl::Lock *)&__block_descriptor_tmp_129;
  v23[4] = a1;
  result = dyld4::RuntimeState::withLoadersReadLock((__int64)a1, (__int64)v23);
  if ( *(_BYTE *)(v12 + 33) )
  {
    if ( v21 != &v22 )
      goto LABEL_38;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    if ( v22 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      return result;
    if ( v22 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        result = MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v17 = MEMORY[0xFFFFFC0D0];
        v18 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_32;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      result = MEMORY[0xFFFFFC0D8];
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v17 = MEMORY[0xFFFFFC0D8];
      v18 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_32:
      if ( v17 == v18 )
        return result;
    }
LABEL_37:
    __break(1u);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v12 + 32) )
    return result;
  if ( v21 != &v22 )
LABEL_38:
    abort();
  lsl::MemoryManager::lockGuard((__int64 *)v23, (lsl::MemoryManager *)v12);
  if ( v22 == 1 )
  {
    v20 = *(_QWORD *)(v12 + 24) - 1LL;
    *(_QWORD *)(v12 + 24) = v20;
    if ( !v20 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v12, 1);
  }
  else if ( v22 == -1 )
  {
    v19 = *(_QWORD *)(v12 + 24);
    if ( !v19 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v12, 0);
      v19 = *(_QWORD *)(v12 + 24);
    }
    *(_QWORD *)(v12 + 24) = v19 + 1;
  }
  return lsl::Lock::unlock(v23[0]);
}
