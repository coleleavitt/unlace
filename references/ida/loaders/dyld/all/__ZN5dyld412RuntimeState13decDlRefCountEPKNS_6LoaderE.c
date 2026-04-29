void __fastcall dyld4::RuntimeState::decDlRefCount(dyld4::RuntimeState *this, const dyld4::Loader *a2)
{
  __int64 v4; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x8
  size_t v10; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 *v16; // [xsp+8h] [xbp-38h]
  __int64 v17; // [xsp+10h] [xbp-30h] BYREF
  lsl::Lock *v18; // [xsp+18h] [xbp-28h] BYREF

  if ( (*((_WORD *)a2 + 2) & 0x20) == 0 )
  {
    v4 = *((_QWORD *)this + 12);
    if ( *(_BYTE *)(v4 + 33) )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_47;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_47;
      StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
      v16 = &v17;
      v17 = (StatusReg >> 36) & 1;
      if ( (StatusReg & 0x1000000000LL) == 0 )
      {
        if ( !MEMORY[0xFFFFFC10C] )
          goto LABEL_47;
        if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
          goto LABEL_47;
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v6 = MEMORY[0xFFFFFC0D0];
        if ( v6 != _ReadStatusReg(SPRR_UPERM_EL0) )
          goto LABEL_47;
      }
    }
    else if ( !*(_BYTE *)(v4 + 32) )
    {
      v16 = &v17;
      v17 = 1;
      lsl::MemoryManager::lockGuard((__int64 *)&v18, (lsl::MemoryManager *)v4);
      v7 = *(_QWORD *)(v4 + 24);
      if ( !v7 )
      {
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
        v7 = *(_QWORD *)(v4 + 24);
      }
      *(_QWORD *)(v4 + 24) = v7 + 1;
      lsl::Lock::unlock(v18);
    }
    v8 = *((_QWORD *)this + 93);
    if ( v8 )
    {
      v9 = (_QWORD *)(*((_QWORD *)this + 92) + 8LL);
      v10 = 16 * v8 - 16;
      while ( (const dyld4::Loader *)*(v9 - 1) != a2 )
      {
        v9 += 2;
        v10 -= 16LL;
        if ( v10 == -16 )
          goto LABEL_23;
      }
      if ( (*v9)-- == 1 )
      {
        _platform_memmove(v9 - 1, v9 + 1, v10);
        --*((_QWORD *)this + 93);
        if ( !atomic_fetch_add_explicit((atomic_uint *volatile)this + 198, 1u, memory_order_relaxed) )
        {
          do
            dyld4::RuntimeState::garbageCollectInner(this);
          while ( (int)atomic_fetch_add_explicit((atomic_uint *volatile)this + 198, 0xFFFFFFFF, memory_order_relaxed) > 1 );
        }
      }
    }
LABEL_23:
    if ( *(_BYTE *)(v4 + 33) )
    {
      if ( v16 != &v17 )
        goto LABEL_48;
      if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_47;
      if ( v17 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
        return;
      if ( v17 )
      {
        if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
        {
          _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
          __isb(0xFu);
          v12 = MEMORY[0xFFFFFC0D0];
          v13 = _ReadStatusReg(SPRR_UPERM_EL0);
          goto LABEL_42;
        }
      }
      else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
        __isb(0xFu);
        v12 = MEMORY[0xFFFFFC0D8];
        v13 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_42:
        if ( v12 == v13 )
          return;
      }
LABEL_47:
      __break(1u);
      goto LABEL_48;
    }
    if ( *(_BYTE *)(v4 + 32) )
      return;
    if ( v16 != &v17 )
LABEL_48:
      abort();
    lsl::MemoryManager::lockGuard((__int64 *)&v18, (lsl::MemoryManager *)v4);
    if ( v17 == 1 )
    {
      v15 = *(_QWORD *)(v4 + 24) - 1LL;
      *(_QWORD *)(v4 + 24) = v15;
      if ( !v15 )
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 1);
    }
    else if ( v17 == -1 )
    {
      v14 = *(_QWORD *)(v4 + 24);
      if ( !v14 )
      {
        lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
        v14 = *(_QWORD *)(v4 + 24);
      }
      *(_QWORD *)(v4 + 24) = v14 + 1;
    }
    lsl::Lock::unlock(v18);
  }
}
