__int64 __fastcall dyld4::APIs::_dyld_register_func_for_remove_image(
        dyld4::APIs *this,
        void (__fastcall *a2)(const mach_header *, __int64))
{
  __int64 v4; // x19
  unsigned __int64 StatusReg; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 result; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD v15[2]; // [xsp+10h] [xbp-70h] BYREF
  __int64 (__fastcall *v16)(); // [xsp+20h] [xbp-60h]
  void *v17; // [xsp+28h] [xbp-58h]
  dyld4::APIs *v18; // [xsp+30h] [xbp-50h]
  __int64 ImageContaining; // [xsp+38h] [xbp-48h]
  void (__fastcall *v20)(const mach_header *, __int64); // [xsp+40h] [xbp-40h]
  __int64 *v21; // [xsp+48h] [xbp-38h]
  __int64 v22; // [xsp+50h] [xbp-30h] BYREF
  lsl::Lock *v23; // [xsp+58h] [xbp-28h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_register_func_for_remove_image(%p)\n", a2);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 0x40000000;
  v16 = ___ZN5dyld44APIs36_dyld_register_func_for_remove_imageEPFvPK11mach_headerlE_block_invoke;
  v17 = &__block_descriptor_tmp_46_0;
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
    v21 = &v22;
    v22 = (StatusReg >> 36) & 1;
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
    v21 = &v22;
    v22 = 1;
    lsl::MemoryManager::lockGuard((__int64 *)&v23, (lsl::MemoryManager *)v4);
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
      v7 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v7 + 1;
    lsl::Lock::unlock(v23);
  }
  v8 = *((_QWORD *)this + 15);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, *((_QWORD *)this + 13) + 8LL, 0);
    ((void (__fastcall *)(_QWORD *))v16)(v15);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 112LL))(
               *((_QWORD *)this + 15),
               *((_QWORD *)this + 13) + 8LL);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD *))v16)(v15);
  }
  if ( *(_BYTE *)(v4 + 33) )
  {
    if ( v21 != &v22 )
      goto LABEL_43;
    if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_42;
    v10 = v22;
    if ( v22 == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
      return result;
    if ( v10 )
    {
      if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
      {
        result = MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v11 = MEMORY[0xFFFFFC0D0];
        v12 = _ReadStatusReg(SPRR_UPERM_EL0);
        goto LABEL_37;
      }
    }
    else if ( MEMORY[0xFFFFFC10C] && (MEMORY[0xFFFFFC10C] & 0xFE) == 2 )
    {
      result = MEMORY[0xFFFFFC0D8];
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
  if ( v21 != &v22 )
LABEL_43:
    abort();
  lsl::MemoryManager::lockGuard((__int64 *)&v23, (lsl::MemoryManager *)v4);
  if ( v22 == 1 )
  {
    v14 = *(_QWORD *)(v4 + 24) - 1LL;
    *(_QWORD *)(v4 + 24) = v14;
    if ( !v14 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 1);
  }
  else if ( v22 == -1 )
  {
    v13 = *(_QWORD *)(v4 + 24);
    if ( !v13 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v4, 0);
      v13 = *(_QWORD *)(v4 + 24);
    }
    *(_QWORD *)(v4 + 24) = v13 + 1;
  }
  return lsl::Lock::unlock(v23);
}
