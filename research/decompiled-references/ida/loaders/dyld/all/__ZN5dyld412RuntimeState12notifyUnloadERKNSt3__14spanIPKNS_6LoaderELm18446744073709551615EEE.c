__int64 __fastcall dyld4::RuntimeState::notifyUnload(__int64 a1, dyld4::Loader ***a2)
{
  dyld4::Loader **v4; // x8
  dyld4::Loader **v5; // x24
  __int64 v6; // x25
  dyld4::Loader *v7; // x22
  void (__fastcall *v8)(__int64, __int64); // x26
  __int64 v9; // x23
  __int64 Address; // x0
  const void *v11; // x23
  const char *v12; // x0
  dyld4::Loader **v13; // x8
  dyld4::Loader **v14; // x25
  __int64 v15; // x26
  dyld4::Loader *v16; // x21
  dyld4::Loader *v17; // t1
  dyld3::MachOFile *v18; // x0
  dyld3 *v19; // x0
  stat *v20; // x2
  int v21; // w0
  const unsigned __int8 *v22; // x22
  fsobj_id v23; // x23
  unsigned int v24; // w24
  fsid v25; // x0
  const mach_header *v26; // x6
  dyld4::Loader **v27; // x8
  dyld4::Loader **v28; // x21
  __int64 v29; // x22
  __int64 v30; // x25
  __int64 v31; // x8
  dyld4::Loader *v32; // x24
  _OWORD *v33; // x23
  __int64 v34; // x8
  _OWORD *v35; // x26
  __int64 v36; // x27
  __int64 v37; // x0
  __int64 v38; // x21
  unsigned __int64 StatusReg; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  dyld4::Loader **v42; // x8
  const dyld4::Loader **v43; // x23
  __int64 v44; // x24
  const dyld4::Loader *v45; // x1
  __int64 v46; // x8
  const dyld4::Loader **v47; // x9
  __int64 v48; // x11
  const dyld4::Loader **v49; // x10
  const dyld4::Loader **v50; // x12
  const dyld4::Loader *v51; // t1
  __int64 v52; // x11
  unsigned __int64 i; // x12
  const dyld4::Loader **v54; // x13
  dyld4::Loader **v55; // x8
  const dyld4::Loader **v56; // x23
  __int64 v57; // x24
  const dyld4::Loader *v58; // x1
  __int64 v59; // x8
  const dyld4::Loader **v60; // x9
  __int64 v61; // x11
  const dyld4::Loader **v62; // x10
  const dyld4::Loader **v63; // x12
  const dyld4::Loader *v64; // t1
  __int64 v65; // x11
  unsigned __int64 j; // x12
  const dyld4::Loader **v67; // x13
  __int64 v68; // x8
  unsigned __int64 v69; // x9
  __int64 v70; // x8
  dyld4::Loader **v71; // x23
  __int64 v72; // x24
  const mach_header **v73; // x21
  __int64 v74; // x12
  char *v75; // x22
  dyld4::Loader **v76; // x26
  dyld4::Loader **v77; // x25
  dyld4::Loader *v78; // x20
  __int64 v79; // x0
  __int64 v80; // x0
  const char **v81; // x4
  char v82; // w1
  __int64 v84; // x8
  __int64 v85; // [xsp+10h] [xbp-130h] BYREF
  _QWORD *v86; // [xsp+18h] [xbp-128h] BYREF
  _QWORD v87[17]; // [xsp+20h] [xbp-120h] BYREF
  _QWORD v88[6]; // [xsp+A8h] [xbp-98h] BYREF
  char v89[8]; // [xsp+D8h] [xbp-68h] BYREF
  __int64 v90; // [xsp+E0h] [xbp-60h]

  v88[0] = _NSConcreteStackBlock;
  v88[1] = 0x40000000;
  v88[2] = ___ZN5dyld412RuntimeState12notifyUnloadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke;
  v88[3] = &__block_descriptor_tmp_74_0;
  v88[4] = a1;
  v88[5] = a2;
  dyld4::RuntimeState::withNotifiersReadLock(a1, (__int64)v88);
  if ( *(_QWORD *)(a1 + 376) )
  {
    v4 = a2[1];
    if ( v4 )
    {
      v5 = *a2;
      v6 = 8LL * (_QWORD)v4;
      do
      {
        v7 = *v5;
        if ( (*((_WORD *)*v5 + 2) & 4) != 0 )
        {
          v8 = *(void (__fastcall **)(__int64, __int64))(a1 + 376);
          v9 = dyld4::Loader::path(*v5);
          Address = dyld4::Loader::loadAddress(v7, (dyld4::RuntimeState *)a1);
          v8(v9, Address);
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 185LL) )
          {
            v11 = (const void *)dyld4::Loader::loadAddress(v7, (dyld4::RuntimeState *)a1);
            v12 = (const char *)dyld4::Loader::path(v7);
            dyld4::RuntimeState::log(
              (dyld4::RuntimeState *)a1,
              "objc-unmapped-notifier called with image %p %s\n",
              v11,
              v12);
          }
        }
        ++v5;
        v6 -= 8;
      }
      while ( v6 );
    }
  }
  if ( kdebug_is_enabled(0x1F050000u) )
  {
    v13 = a2[1];
    if ( v13 )
    {
      v14 = *a2;
      v15 = 8LL * (_QWORD)v13;
      do
      {
        v17 = *v14++;
        v16 = v17;
        *(_QWORD *)v89 = 0;
        v90 = 0;
        v18 = (dyld3::MachOFile *)dyld4::Loader::loadAddress(v17, (dyld4::RuntimeState *)a1);
        dyld3::MachOFile::getUuid(v18, (unsigned __int8 *)v89);
        v19 = (dyld3 *)dyld4::Loader::path(v17);
        v21 = dyld3::stat(v19, (const char *)&v86, v20);
        if ( v21 )
          v22 = nullptr;
        else
          v22 = (const unsigned __int8 *)v87[0];
        if ( v21 )
          v23 = 0;
        else
          v23 = (fsobj_id)(unsigned int)v86;
        v24 = dyld4::Loader::path(v16);
        v25 = (fsid)dyld4::Loader::loadAddress(v16, (dyld4::RuntimeState *)a1);
        dyld3::kdebug_trace_dyld_image(
          (dyld3 *)((char *)&dword_4 + 1),
          v24,
          v89,
          (const unsigned __int8 (*)[16])v22,
          v23,
          v25,
          v26);
        v15 -= 8;
      }
      while ( v15 );
    }
  }
  if ( (unsigned int)dyld4::SyscallDelegate::dtraceUserProbesEnabled(*(dyld4::SyscallDelegate **)(a1 + 8)) )
  {
    v27 = a2[1];
    if ( v27 )
    {
      v28 = *a2;
      v29 = (__int64)&(*a2)[(_QWORD)v27];
      v30 = *(_QWORD *)(a1 + 568);
      v31 = *(_QWORD *)(a1 + 576);
      do
      {
        v32 = *v28;
        v33 = (_OWORD *)(v30 + 16 * v31);
        if ( v31 )
        {
          v34 = 16 * v31;
          while ( *(dyld4::Loader **)v30 != v32 )
          {
            v30 += 16;
            v34 -= 16;
            if ( !v34 )
            {
              v35 = v33;
              goto LABEL_34;
            }
          }
          dyld4::SyscallDelegate::dtraceUnregisterUserProbe(*(dyld4::SyscallDelegate **)(a1 + 8), *(_DWORD *)(v30 + 8));
        }
        v35 = v33;
        if ( (_OWORD *)v30 != v33 )
        {
          v36 = v30 + 16;
          v35 = (_OWORD *)v30;
          while ( (_OWORD *)v36 != v33 )
          {
            if ( *(dyld4::Loader **)v36 == v32 )
              dyld4::SyscallDelegate::dtraceUnregisterUserProbe(
                *(dyld4::SyscallDelegate **)(a1 + 8),
                *(_DWORD *)(v36 + 8));
            else
              *v35++ = *(_OWORD *)v36;
            v36 += 16;
          }
        }
LABEL_34:
        v30 = *(_QWORD *)(a1 + 568);
        v31 = *(_QWORD *)(a1 + 576) - ((v30 + 16LL * *(_QWORD *)(a1 + 576) - (__int64)v35) >> 4);
        *(_QWORD *)(a1 + 576) = v31;
        ++v28;
      }
      while ( v28 != (dyld4::Loader **)v29 );
    }
  }
  v37 = dyld4::RuntimeState::removeMissingFlatLazySymbols(a1, (__int64)a2);
  v38 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v38 + 33) )
  {
    if ( !MEMORY[0xFFFFFC10C] )
      goto LABEL_102;
    if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
      goto LABEL_102;
    StatusReg = _ReadStatusReg(SPRR_UPERM_EL0);
    v87[0] = (StatusReg >> 36) & 1;
    v86 = v87;
    if ( (StatusReg & 0x1000000000LL) == 0 )
    {
      if ( !MEMORY[0xFFFFFC10C] )
        goto LABEL_102;
      if ( (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_102;
      v37 = MEMORY[0xFFFFFC0D0];
      _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
      __isb(0xFu);
      v40 = MEMORY[0xFFFFFC0D0];
      if ( v40 != _ReadStatusReg(SPRR_UPERM_EL0) )
        goto LABEL_102;
    }
  }
  else if ( !*(_BYTE *)(v38 + 32) )
  {
    v87[0] = 1;
    v86 = v87;
    lsl::MemoryManager::lockGuard((__int64 *)v89, (lsl::MemoryManager *)v38);
    v41 = *(_QWORD *)(v38 + 24);
    if ( !v41 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v38, 0);
      v41 = *(_QWORD *)(v38 + 24);
    }
    *(_QWORD *)(v38 + 24) = v41 + 1;
    lsl::Lock::unlock(*(lsl::Lock **)v89);
  }
  v37 = *(_QWORD *)(a1 + 120);
  if ( v37 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 104LL))(v37, *(_QWORD *)(a1 + 104), 0);
    v42 = a2[1];
    if ( v42 )
    {
      v43 = *a2;
      v44 = (__int64)&(*a2)[(_QWORD)v42];
      do
      {
        v45 = *v43;
        v46 = *(_QWORD *)(a1 + 48);
        if ( v46 )
        {
          v47 = *(const dyld4::Loader ***)(a1 + 40);
          v48 = 8 * v46;
          v49 = v47;
          v50 = v47;
          while ( 1 )
          {
            v51 = *v50++;
            if ( v51 == v45 )
              break;
            ++v47;
            v49 = v50;
            v48 -= 8;
            if ( !v48 )
              goto LABEL_59;
          }
          v52 = v48 - 8;
          if ( v52 )
          {
            for ( i = 0; i != v52; i += 8LL )
            {
              v54 = &v49[i / 8];
              *v54 = v49[i / 8 + 1];
              v54[1] = nullptr;
            }
          }
          *(_QWORD *)(a1 + 48) = v46 - 1;
        }
LABEL_59:
        dyld4::RuntimeState::removeDynamicDependencies((dyld4::RuntimeState *)a1, v45);
        ++v43;
      }
      while ( v43 != (const dyld4::Loader **)v44 );
    }
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 120) + 112LL))(
            *(_QWORD *)(a1 + 120),
            *(_QWORD *)(a1 + 104));
  }
  else
  {
    v55 = a2[1];
    if ( v55 )
    {
      v56 = *a2;
      v57 = (__int64)&(*a2)[(_QWORD)v55];
      do
      {
        v58 = *v56;
        v59 = *(_QWORD *)(a1 + 48);
        if ( v59 )
        {
          v60 = *(const dyld4::Loader ***)(a1 + 40);
          v61 = 8 * v59;
          v62 = v60;
          v63 = v60;
          while ( 1 )
          {
            v64 = *v63++;
            if ( v64 == v58 )
              break;
            ++v60;
            v62 = v63;
            v61 -= 8;
            if ( !v61 )
              goto LABEL_72;
          }
          v65 = v61 - 8;
          if ( v65 )
          {
            for ( j = 0; j != v65; j += 8LL )
            {
              v67 = &v62[j / 8];
              *v67 = v62[j / 8 + 1];
              v67[1] = nullptr;
            }
          }
          *(_QWORD *)(a1 + 48) = v59 - 1;
        }
LABEL_72:
        v37 = dyld4::RuntimeState::removeDynamicDependencies((dyld4::RuntimeState *)a1, v58);
        ++v56;
      }
      while ( v56 != (const dyld4::Loader **)v57 );
    }
  }
  if ( *(_BYTE *)(v38 + 33) )
  {
    if ( v86 == v87 )
    {
      if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
        goto LABEL_102;
      if ( v87[0] == ((_ReadStatusReg(SPRR_UPERM_EL0) >> 36) & 1) )
        goto LABEL_93;
      if ( v87[0] )
      {
        if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
          goto LABEL_102;
        v37 = MEMORY[0xFFFFFC0D0];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D0]);
        __isb(0xFu);
        v68 = MEMORY[0xFFFFFC0D0];
        v69 = _ReadStatusReg(SPRR_UPERM_EL0);
      }
      else
      {
        if ( !MEMORY[0xFFFFFC10C] || (MEMORY[0xFFFFFC10C] & 0xFE) != 2 )
          goto LABEL_102;
        v37 = MEMORY[0xFFFFFC0D8];
        _WriteStatusReg(SPRR_UPERM_EL0, MEMORY[0xFFFFFC0D8]);
        __isb(0xFu);
        v68 = MEMORY[0xFFFFFC0D8];
        v69 = _ReadStatusReg(SPRR_UPERM_EL0);
      }
      if ( v68 == v69 )
        goto LABEL_93;
LABEL_102:
      __break(1u);
LABEL_103:
      dyld4::RuntimeState::notifyUnload(v37);
    }
LABEL_104:
    abort();
  }
  if ( *(_BYTE *)(v38 + 32) )
    goto LABEL_93;
  if ( v86 != v87 )
    goto LABEL_104;
  lsl::MemoryManager::lockGuard((__int64 *)v89, (lsl::MemoryManager *)v38);
  if ( v87[0] == 1 )
  {
    v84 = *(_QWORD *)(v38 + 24) - 1LL;
    *(_QWORD *)(v38 + 24) = v84;
    if ( !v84 )
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v38, 1);
  }
  else if ( v87[0] == -1 )
  {
    v70 = *(_QWORD *)(v38 + 24);
    if ( !v70 )
    {
      lsl::MemoryManager::writeProtect((lsl::MemoryManager *)v38, 0);
      v70 = *(_QWORD *)(v38 + 24);
    }
    *(_QWORD *)(v38 + 24) = v70 + 1;
  }
  lsl::Lock::unlock(*(lsl::Lock **)v89);
LABEL_93:
  dyld4::RuntimeState::notifyDebuggerUnload(a1, a2);
  v71 = a2[1];
  v72 = 8LL * (_QWORD)v71;
  __chkstk_darwin();
  v73 = (const mach_header **)((char *)&v85 - ((8LL * (_QWORD)v71 + 23) & 0xFFFFFFFFFFFFFFF0LL));
  v37 = __chkstk_darwin();
  v75 = (char *)&v85 - v74;
  if ( !v71 )
    goto LABEL_103;
  v76 = nullptr;
  v77 = *a2;
  do
  {
    v78 = v77[(_QWORD)v76];
    v79 = dyld4::Loader::path(v78);
    if ( v71 == v76 )
      dyld4::RuntimeState::notifyUnload(v79);
    v73[(_QWORD)v76] = (const mach_header *)v79;
    v80 = dyld4::Loader::loadAddress(v78, (dyld4::RuntimeState *)a1);
    v82 = (_BYTE)v76 + 1;
    *(_QWORD *)&v75[8 * (_QWORD)v76] = v80;
    v76 = (dyld4::Loader **)((char *)v76 + 1);
    v72 -= 8;
  }
  while ( v72 );
  return dyld4::notifyMonitoringDyld((dyld4 *)((char *)&dword_0 + 1), v82, (unsigned int)v75, v73, v81);
}
