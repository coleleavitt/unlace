vm_address_t __fastcall dyld4::Loader::mapSegments(
        Diagnostics *a1,
        dyld4::SyscallDelegate **a2,
        dyld3 *a3,
        vm_size_t a4,
        unsigned int *a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        off_t *a10)
{
  __int64 v17; // x0
  dyld4::RuntimeState *v18; // x20
  off_t v19; // x24
  int v20; // w20
  __int64 v21; // x8
  vm_address_t *v22; // x9
  char *v23; // x4
  int v24; // w8
  char *v25; // x4
  vm_address_t v26; // x19
  __int64 v28; // x8
  unsigned int v29; // w26
  unsigned int *v30; // x25
  __int64 v31; // x28
  unsigned __int64 v32; // x8
  size_t v33; // x2
  dyld3::MachOFile *v35; // x27
  int *v36; // x0
  Diagnostics *v37; // x24
  vm_size_t v38; // x21
  vm_size_t v39; // x23
  const char *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  vm_address_t v45; // x22
  vm_size_t v46; // [xsp+28h] [xbp-358h]
  int v47; // [xsp+34h] [xbp-34Ch]
  int v48; // [xsp+38h] [xbp-348h] BYREF
  __int64 v49; // [xsp+40h] [xbp-340h]
  dyld3 *v50; // [xsp+48h] [xbp-338h]
  __int128 v51; // [xsp+50h] [xbp-330h]
  __int128 v52; // [xsp+60h] [xbp-320h]
  __int128 v53; // [xsp+70h] [xbp-310h]
  __int128 v54; // [xsp+80h] [xbp-300h]
  __int128 v55; // [xsp+90h] [xbp-2F0h]
  __int64 v56; // [xsp+A0h] [xbp-2E0h]
  vm_address_t address; // [xsp+A8h] [xbp-2D8h] BYREF
  __int128 v58; // [xsp+B0h] [xbp-2D0h]
  __int128 v59; // [xsp+C0h] [xbp-2C0h]
  __int128 v60; // [xsp+D0h] [xbp-2B0h]
  __int128 v61; // [xsp+E0h] [xbp-2A0h]
  __int128 v62; // [xsp+F0h] [xbp-290h]
  __int128 v63; // [xsp+100h] [xbp-280h]
  __int64 v64; // [xsp+110h] [xbp-270h]
  unsigned int v65[16]; // [xsp+2A8h] [xbp-D8h] BYREF
  unsigned int v66[2]; // [xsp+2E8h] [xbp-98h] BYREF
  __int64 v67; // [xsp+2F0h] [xbp-90h]
  vm_address_t *p_address; // [xsp+2F8h] [xbp-88h]

  v48 = 520552456;
  v49 = 0;
  v50 = a3;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  v56 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v48);
  v17 = dyld4::SyscallDelegate::open(a2[1], a3, nullptr, 0);
  if ( (_DWORD)v17 == -1 )
  {
    v20 = *__error();
    if ( v20 == 2 )
    {
      Diagnostics::error(a1, "no such file");
    }
    else if ( v20 == 1 && (unsigned int)dyld4::SyscallDelegate::sandboxBlockedOpen(a2[1], (const char *)a3) )
    {
      Diagnostics::error(a1, "file system sandbox blocked open(\"%s\", O_RDONLY)");
    }
    else
    {
      Diagnostics::error(a1, "open(\"%s\", O_RDONLY) failed with errno=%d");
    }
    goto LABEL_26;
  }
  v18 = (dyld4::RuntimeState *)v17;
  if ( a9 )
  {
    v19 = dyld4::Loader::validateFile(a1, (__int64)a2, v17, (const char *)a3, a5, (__int64)a10);
    if ( Diagnostics::hasError(a1) )
      goto LABEL_25;
    if ( !a6 )
      goto LABEL_21;
  }
  else
  {
    v19 = *a10;
    if ( !a6 )
      goto LABEL_21;
  }
  if ( a5[1] )
  {
    LODWORD(address) = 520552464;
    v58 = 0u;
    v59 = 0u;
    v60 = 0u;
    v61 = 0u;
    v62 = 0u;
    v63 = 0u;
    v64 = 0;
    dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&address);
    v21 = *a5;
    v22 = (vm_address_t *)a5[1];
    *(_QWORD *)v66 = v19;
    v67 = v21;
    p_address = v22;
    if ( (unsigned int)dyld4::SyscallDelegate::fcntl(a2[1], (int)v18, 97, v66) == -1 )
    {
      dyld4::getUuidFromFd((dyld4 *)a2, v18, v19, (unsigned __int64)v65, v23);
      v24 = *__error();
      if ( v24 == 85 || v24 == 1 )
        Diagnostics::error(
          a1,
          "code signature invalid in <%s> '%s' (errno=%d) sliceOffset=0x%08llX, codeBlobOffset=0x%08X, codeBlobSize=0x%08X");
      else
        Diagnostics::error(
          a1,
          "fcntl(fd, F_ADDFILESIGS_RETURN) failed with errno=%d in <%s> '%s', sliceOffset=0x%08llX, codeBlobOffset=0x%08X"
          ", codeBlobSize=0x%08X");
      goto LABEL_60;
    }
    if ( *(_QWORD *)v66 < (unsigned __int64)*a5 )
    {
      dyld4::getUuidFromFd((dyld4 *)a2, v18, v19, (unsigned __int64)v65, v23);
      Diagnostics::error(
        a1,
        "code signature does not cover entire file up to signature in <%s> '%s' (signed 0x%08llX, expected 0x%08X) for '%s'");
LABEL_60:
      dyld4::SyscallDelegate::close(a2[1], (int)v18);
      dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&address);
      goto LABEL_26;
    }
    dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&address);
  }
LABEL_21:
  LOBYTE(address) = 0;
  *(_QWORD *)v66 = v19;
  v67 = 512;
  p_address = &address;
  if ( (unsigned int)dyld4::SyscallDelegate::fcntl(a2[1], (int)v18, 98, v66) == -1 )
  {
    dyld4::getUuidFromFd((dyld4 *)a2, v18, v19, (unsigned __int64)v65, v25);
    Diagnostics::error(a1, "code signature in <%s> '%s' not valid for use in process: %s");
    goto LABEL_25;
  }
  address = 0;
  if ( vm_allocate(mach_task_self_, &address, a4, 1) )
  {
    Diagnostics::error(a1, "vm_allocate(size=0x%0llX) failed with result=%d");
    goto LABEL_25;
  }
  if ( *((_BYTE *)a2[1] + 181) )
  {
    if ( v19 )
      dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "Mapping %s (slice offset=0x%llX)\n");
    else
      dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "Mapping %s\n");
  }
  v28 = a7[2];
  if ( !v28 )
  {
LABEL_54:
    v65[0] = 0;
    v66[0] = 0;
    v45 = address;
    if ( (unsigned int)dyld3::MachOFile::isFairPlayEncrypted((dyld3::MachOFile *)address, v65, v66)
      && (unsigned int)dyld4::SyscallDelegate::mremap_encrypted(
                         a2[1],
                         (void *)(address + v65[0]),
                         v66[0],
                         1u,
                         *(_DWORD *)(v45 + 4),
                         *(_DWORD *)(v45 + 8)) )
    {
      Diagnostics::error(a1, "could not register fairplay decryption, mremap_encrypted() => %d");
      goto LABEL_57;
    }
    dyld4::SyscallDelegate::close(a2[1], (int)v18);
    v26 = address;
    goto LABEL_27;
  }
  v29 = 0;
  v30 = (unsigned int *)(*a7 + 12LL);
  v31 = 16 * v28;
  v47 = (int)v18;
  while ( 1 )
  {
    v32 = *(_QWORD *)(v30 - 3);
    if ( (v32 & 0x4000000000000000LL) != 0 )
      goto LABEL_53;
    v33 = *v30;
    if ( !(_DWORD)v33 )
      goto LABEL_53;
    if ( (v32 & 0x7FFFFFFFFFFFFFFLL) == 0 && v29 != 0 )
      goto LABEL_53;
    v35 = (dyld3::MachOFile *)dyld4::SyscallDelegate::mmap(
                                a2[1],
                                (void *)(address + (v32 & 0x7FFFFFFFFFFFFFFLL)),
                                v33,
                                (v32 >> 59) & 7,
                                18,
                                (int)v18,
                                v19 + *(v30 - 1));
    v36 = __error();
    if ( v35 == (dyld3::MachOFile *)-1LL )
      break;
    if ( !v29 && !dyld3::MachOFile::isMachO(v35, a1, *v30) )
      goto LABEL_57;
    if ( *((_BYTE *)a2[1] + 181) )
    {
      v18 = (dyld4::RuntimeState *)v19;
      v37 = a1;
      v38 = a4;
      v39 = (vm_size_t)v35 + ((vm_page_size + *v30 - 1) & -(__int64)vm_page_size);
      v40 = (const char *)dyld3::MachOLoaded::segmentName((dyld3::MachOLoaded *)address, v29);
      v41 = *(_QWORD *)(v30 - 3) >> 59;
      v46 = v39;
      a4 = v38;
      a1 = v37;
      v19 = (off_t)v18;
      LODWORD(v18) = v47;
      v42 = 120;
      if ( (v41 & 4) == 0 )
        v42 = 46;
      v43 = 119;
      if ( (v41 & 2) == 0 )
        v43 = 46;
      v44 = 114;
      if ( (*(_QWORD *)(v30 - 3) & 0x800000000000000LL) == 0 )
        v44 = 46;
      dyld4::RuntimeState::log(
        (dyld4::RuntimeState *)a2,
        "%14s (%c%c%c) 0x%012lX->0x%012lX\n",
        v40,
        v44,
        v43,
        v42,
        v35,
        v46);
    }
    ++v29;
LABEL_53:
    v30 += 4;
    v31 -= 16;
    if ( !v31 )
      goto LABEL_54;
  }
  if ( *v36 == 1 )
  {
    if ( (unsigned int)dyld4::SyscallDelegate::sandboxBlockedMmap(a2[1], (const char *)a3) )
      Diagnostics::error(a1, "file system sandbox blocked mmap() of '%s'");
    else
      Diagnostics::error(a1, "code signing blocked mmap() of '%s'");
  }
  else
  {
    Diagnostics::error(a1, "mmap(addr=0x%0llX, size=0x%08X) failed with errno=%d for %s");
  }
LABEL_57:
  vm_deallocate(mach_task_self_, address, a4);
LABEL_25:
  dyld4::SyscallDelegate::close(a2[1], (int)v18);
LABEL_26:
  v26 = 0;
LABEL_27:
  dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v48);
  return v26;
}
