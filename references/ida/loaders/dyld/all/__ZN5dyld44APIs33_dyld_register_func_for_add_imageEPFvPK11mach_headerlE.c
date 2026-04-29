const os_unfair_lock *__fastcall dyld4::APIs::_dyld_register_func_for_add_image(
        dyld4::APIs *this,
        void (__fastcall *a2)(const mach_header *, __int64))
{
  __int64 v4; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x0
  const os_unfair_lock *result; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD v15[2]; // [xsp+10h] [xbp-B0h] BYREF
  __int64 (__fastcall *v16)(); // [xsp+20h] [xbp-A0h]
  void *v17; // [xsp+28h] [xbp-98h]
  dyld4::APIs *v18; // [xsp+30h] [xbp-90h]
  __int64 ImageContaining; // [xsp+38h] [xbp-88h]
  void (__fastcall *v20)(const mach_header *, __int64); // [xsp+40h] [xbp-80h]
  _QWORD v21[6]; // [xsp+48h] [xbp-78h] BYREF
  __int64 *v22; // [xsp+78h] [xbp-48h]
  __int64 v23; // [xsp+80h] [xbp-40h] BYREF
  lsl::Lock *v24; // [xsp+88h] [xbp-38h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_register_func_for_add_image(%p)\n", a2);
  v21[0] = _NSConcreteStackBlock;
  v21[1] = 0x40000000;
  v21[2] = ___ZN5dyld44APIs33_dyld_register_func_for_add_imageEPFvPK11mach_headerlE_block_invoke;
  v21[3] = &__block_descriptor_tmp_43;
  v21[4] = this;
  v21[5] = a2;
  dyld4::RuntimeState::withLoadersReadLock((__int64)this, (__int64)v21);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 0x40000000;
  v16 = ___ZN5dyld44APIs33_dyld_register_func_for_add_imageEPFvPK11mach_headerlE_block_invoke_2;
  v17 = &__block_descriptor_tmp_44;
  v18 = this;
  ImageContaining = dyld4::APIs::findImageContaining(this, a2);
  v20 = a2;
  v4 = *((_QWORD *)this + 12);
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_42;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_42;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v22 = &v23;
    v23 = (StatusReg >> 36) & 1;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_42;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_42;
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v6 = MEMORY[0xFFFFFC0D0];
      if ( v6 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_42;
    }
  }
  else if ( !*(_BYTE *)(v4 + 32) )
  {
    v22 = &v23;
    v23 = 1;
    lsl::MemoryManager::lockGuard(&v24, (lsl::Lock *)v4);
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
    {
      lsl::MemoryManager::writeProtect(v4, 0);
      v7 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v7 + 1;
    lsl::Lock::unlock(v24);
  }
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, *((_QWORD *)this + 13) + 8LL, 0);
    ((void (__fastcall *)(_QWORD *))v16)(v15);
    result = (const os_unfair_lock *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 112LL))(
                                       *((_QWORD *)this + 15),
                                       *((_QWORD *)this + 13) + 8LL);
  }
  else
  {
    result = (const os_unfair_lock *)((__int64 (__fastcall *)(_QWORD *))v16)(v15);
  }
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( v22 != &v23 )
      goto LABEL_43;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_42;
    v10 = v23;
    if ( v23 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      return result;
    if ( v10 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        result = (const os_unfair_lock *)MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v11 = MEMORY[0xFFFFFC0D0];
        v12 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_37;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      result = (const os_unfair_lock *)MEMORY[0xFFFFFC0D8];
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
      __isb(0xFu);
      v11 = MEMORY[0xFFFFFC0D8];
      v12 = _ReadStatusReg(SPRR_UPERM_EL0);
LABEL_37:
      if ( v11 == v12 )
        return result;
    }
LABEL_42:
    __break(1u);
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v4 + 32) )
    return result;
  if ( v22 != &v23 )
LABEL_43:
    abort();
  lsl::MemoryManager::lockGuard(&v24, (lsl::Lock *)v4);
  if ( v23 == 1 )
  {
    v14 = *(_QWORD *)(v4 + 24) - 1LL;
    *(_QWORD *)(v4 + 24) = v14;
    if ( !v14 )
      lsl::MemoryManager::writeProtect(v4, 1);
  }
  else if ( v23 == -1 )
  {
    v13 = *(_QWORD *)(v4 + 24);
    if ( !v13 )
    {
      lsl::MemoryManager::writeProtect(v4, 0);
      v13 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v13 + 1;
  }
  return lsl::Lock::unlock(v24);
}
