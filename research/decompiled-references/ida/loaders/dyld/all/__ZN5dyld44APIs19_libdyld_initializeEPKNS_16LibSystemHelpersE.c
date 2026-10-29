__int64 __fastcall dyld4::APIs::_libdyld_initialize(dyld4::RuntimeState *this, __int64 a2)
{
  __int64 v4; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 result; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 *v13; // [xsp+8h] [xbp-38h]
  __int64 v14; // [xsp+10h] [xbp-30h] BYREF
  lsl::Lock *v15; // [xsp+18h] [xbp-28h] BYREF

  v4 = *((_QWORD *)this + 12);
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_37;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v13 = &v14;
    v14 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_37;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_37;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v6 = MEMORY[0xFFFFFC0D0];
      if ( v6 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_37;
    }
  }
  else if ( !*(_BYTE *)(v4 + 32) )
  {
    v13 = &v14;
    v14 = 1;
    lsl::MemoryManager::lockGuard((__int64 *)&v15, (lsl::MemoryManager *)v4);
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
      v7 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v7 + 1;
    lsl::Lock::unlock(v15);
  }
  *((_QWORD *)this + 15) = a2;
  result = dyld4::RuntimeState::initialize(this);
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( v13 != &v14 )
      goto LABEL_38;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    if ( v14 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      return result;
    if ( v14 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        result = MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v9 = MEMORY[0xFFFFFC0D0];
        v10 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_32;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      result = MEMORY[0xFFFFFC0D8];
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v9 = MEMORY[0xFFFFFC0D8];
      v10 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_32:
      if ( v9 == v10 )
        return result;
    }
LABEL_37:
    __break(1u);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v4 + 32) )
    return result;
  if ( v13 != &v14 )
LABEL_38:
    abort();
  lsl::MemoryManager::lockGuard((__int64 *)&v15, (lsl::MemoryManager *)v4);
  if ( v14 == 1 )
  {
    v12 = *(_QWORD *)(v4 + 24) - 1LL;
    *(_QWORD *)(v4 + 24) = v12;
    if ( !v12 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 1);
  }
  else if ( v14 == -1 )
  {
    v11 = *(_QWORD *)(v4 + 24);
    if ( !v11 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
      v11 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v11 + 1;
  }
  return lsl::Lock::unlock(v15);
}
