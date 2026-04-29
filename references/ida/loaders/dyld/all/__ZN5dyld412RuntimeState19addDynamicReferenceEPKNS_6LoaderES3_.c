_QWORD *__fastcall dyld4::RuntimeState::addDynamicReference(
        _QWORD *this,
        const dyld4::Loader *a2,
        const dyld4::Loader *a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  const dyld4::Loader **v11; // x9
  __int64 v12; // x10
  __int64 v13; // x8
  __int64 v14; // x9
  _QWORD *v15; // x8
  __int64 v16; // x8
  const dyld4::Loader **v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  __int64 v20; // x9
  _QWORD *v21; // x8
  __int64 v22; // x8
  unsigned __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 *v26; // [xsp+8h] [xbp-48h]
  __int64 v27; // [xsp+10h] [xbp-40h] BYREF
  lsl::Lock *v28; // [xsp+18h] [xbp-38h] BYREF

  if ( (*((_WORD *)a3 + 2) & 0x20) == 0 )
  {
    v5 = this;
    v6 = *(this + 12);
    if ( *(_BYTE *)(v6 + 33) )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_52;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_52;
      StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
      v26 = &v27;
      v27 = (StatusReg >> 36) & 1;
      if ( (StatusReg & 0x1000000000LL) == 0 )
      {
        if ( !MEMORY[0xFFFFFC10C] )
          goto LABEL_52;
        if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
          goto LABEL_52;
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v8 = MEMORY[0xFFFFFC0D0];
        if ( v8 != _ReadStatusReg(SPRR_UPERM_EL0) )
          goto LABEL_52;
      }
    }
    else if ( !*(_BYTE *)(v6 + 32) )
    {
      v26 = &v27;
      v27 = 1;
      lsl::MemoryManager::lockGuard((__int64 *)&v28, (lsl::MemoryManager *)v6);
      v9 = *(_QWORD *)(v6 + 24);
      if ( !v9 )
      {
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v6, 0);
        v9 = *(_QWORD *)(v6 + 24);
      }
      *(_QWORD *)(v6 + 24) = v9 + 1;
      lsl::Lock::unlock(v28);
    }
    this = (_QWORD *)v5[15];
    if ( this )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*this + 104LL))(this, v5[13], 0);
      v10 = v5[80];
      if ( v10 )
      {
        v11 = (const dyld4::Loader **)(v5[79] + 8LL);
        v12 = 16 * v10;
        while ( *(v11 - 1) != a2 || *v11 != a3 )
        {
          v11 += 2;
          v12 -= 16;
          if ( !v12 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        lsl::Vector<dyld4::RuntimeState::DynamicReference>::reserve(v5 + 78, v10 + 1);
        v13 = v5[79];
        v14 = v5[80];
        v5[80] = v14 + 1;
        v15 = (_QWORD *)(v13 + 16 * v14);
        *v15 = a2;
        v15[1] = a3;
      }
      this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[15] + 112LL))(v5[15], v5[13]);
    }
    else
    {
      v16 = v5[80];
      if ( v16 )
      {
        v17 = (const dyld4::Loader **)(v5[79] + 8LL);
        v18 = 16 * v16;
        while ( *(v17 - 1) != a2 || *v17 != a3 )
        {
          v17 += 2;
          v18 -= 16;
          if ( !v18 )
            goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        this = (_QWORD *)lsl::Vector<dyld4::RuntimeState::DynamicReference>::reserve(v5 + 78, v16 + 1);
        v19 = v5[79];
        v20 = v5[80];
        v5[80] = v20 + 1;
        v21 = (_QWORD *)(v19 + 16 * v20);
        *v21 = a2;
        v21[1] = a3;
      }
    }
    if ( *(_BYTE *)(v6 + 33) )
    {
      if ( v26 != &v27 )
        goto LABEL_53;
      if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_52;
      if ( v27 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
        return this;
      if ( v27 )
      {
        if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
        {
          this = (_QWORD *)MEMORY[0xFFFFFC0D0];
          _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
          __isb(0xFu);
          v22 = MEMORY[0xFFFFFC0D0];
          v23 = _ReadStatusReg(SPRR_UPERM_EL0);
          goto LABEL_47;
        }
      }
      else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        this = (_QWORD *)MEMORY[0xFFFFFC0D8];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
        __isb(0xFu);
        v22 = MEMORY[0xFFFFFC0D8];
        v23 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_47:
        if ( v22 == v23 )
          return this;
      }
LABEL_52:
      __break(1u);
      goto LABEL_53;
    }
    if ( *(_BYTE *)(v6 + 32) )
      return this;
    if ( v26 != &v27 )
LABEL_53:
      abort();
    lsl::MemoryManager::lockGuard((__int64 *)&v28, (lsl::MemoryManager *)v6);
    if ( v27 == 1 )
    {
      v25 = *(_QWORD *)(v6 + 24) - 1LL;
      *(_QWORD *)(v6 + 24) = v25;
      if ( !v25 )
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v6, 1);
    }
    else if ( v27 == -1 )
    {
      v24 = *(_QWORD *)(v6 + 24);
      if ( !v24 )
      {
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v6, 0);
        v24 = *(_QWORD *)(v6 + 24);
      }
      *(_QWORD *)(v6 + 24) = v24 + 1;
    }
    return (_QWORD *)lsl::Lock::unlock(v28);
  }
  return this;
}
