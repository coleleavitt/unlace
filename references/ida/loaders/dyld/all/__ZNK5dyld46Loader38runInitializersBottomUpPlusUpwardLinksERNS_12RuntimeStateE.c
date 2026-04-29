__int64 __fastcall dyld4::Loader::runInitializersBottomUpPlusUpwardLinks(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  __int64 v2; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 result; // x0
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 *v11; // [xsp+8h] [xbp-38h]
  __int64 v12; // [xsp+10h] [xbp-30h] BYREF
  _QWORD v13[2]; // [xsp+18h] [xbp-28h] BYREF
  lsl::Lock *v14; // [xsp+28h] [xbp-18h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  v13[0] = a2;
  v13[1] = this;
  if ( *(_BYTE *)(v2 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_37;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v11 = &v12;
    v12 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_37;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_37;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v4 = MEMORY[0xFFFFFC0D0];
      if ( v4 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_37;
    }
  }
  else if ( !*(_BYTE *)(v2 + 32) )
  {
    v11 = &v12;
    v12 = 1;
    lsl::MemoryManager::lockGuard((__int64 *)&v14, (lsl::MemoryManager *)v2);
    v5 = *(_QWORD *)(v2 + 24);
    if ( !v5 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v2, 0);
      v5 = *(_QWORD *)(v2 + 24);
    }
    *(_QWORD *)(v2 + 24) = v5 + 1;
    lsl::Lock::unlock(v14);
  }
  result = dyld4::Loader::runInitializersBottomUpPlusUpwardLinks(dyld4::RuntimeState &)const::$_1::operator()(v13);
  if ( *(_BYTE *)(v2 + 33) )
  {
    if ( v11 != &v12 )
      goto LABEL_38;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_37;
    if ( v12 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      return result;
    if ( v12 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        result = MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v7 = MEMORY[0xFFFFFC0D0];
        v8 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_32;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      result = MEMORY[0xFFFFFC0D8];
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v7 = MEMORY[0xFFFFFC0D8];
      v8 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_32:
      if ( v7 == v8 )
        return result;
    }
LABEL_37:
    __break(1u);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v2 + 32) )
    return result;
  if ( v11 != &v12 )
LABEL_38:
    abort();
  lsl::MemoryManager::lockGuard((__int64 *)&v14, (lsl::MemoryManager *)v2);
  if ( v12 == 1 )
  {
    v10 = *(_QWORD *)(v2 + 24) - 1LL;
    *(_QWORD *)(v2 + 24) = v10;
    if ( !v10 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v2, 1);
  }
  else if ( v12 == -1 )
  {
    v9 = *(_QWORD *)(v2 + 24);
    if ( !v9 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v2, 0);
      v9 = *(_QWORD *)(v2 + 24);
    }
    *(_QWORD *)(v2 + 24) = v9 + 1;
  }
  return lsl::Lock::unlock(v14);
}
