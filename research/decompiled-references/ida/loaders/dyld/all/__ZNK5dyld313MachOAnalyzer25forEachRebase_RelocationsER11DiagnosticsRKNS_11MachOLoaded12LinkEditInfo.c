bool dyld3::MachOAnalyzer::forEachRebase_Relocations()
{
  dyld3::MachOFile *v0; // x0
  __int64 v1; // x4
  __int64 v2; // x21
  __int64 v3; // x3
  __int64 v4; // x22
  __int64 v5; // x2
  __int64 v6; // x23
  Diagnostics *v7; // x1
  Diagnostics *v8; // x19
  dyld3::MachOFile *v9; // x20
  __int64 v10; // x24
  unsigned __int64 LinkEditContent; // x26
  unsigned __int64 v12; // x28
  _BOOL4 v13; // w27
  _QWORD *v14; // x0
  unsigned __int8 v15; // w24
  int v16; // w25
  const char *v17; // x27
  unsigned int v18; // w8
  __int64 v19; // x9
  __int64 v20; // t1
  unsigned int *v21; // x28
  __int64 v22; // x3
  unsigned __int64 v23; // x9
  __int64 v24; // x8
  unsigned __int64 v25; // x12
  bool v26; // w13
  _BYTE *v27; // x10
  unsigned __int64 v28; // x14
  int v29; // w9
  int v30; // w19
  unsigned int *v32; // [xsp+10h] [xbp-4100h]
  __int64 v33; // [xsp+20h] [xbp-40F0h]
  _QWORD v34[2]; // [xsp+78h] [xbp-4098h] BYREF
  __int64 v35; // [xsp+88h] [xbp-4088h]
  vm_address_t address; // [xsp+90h] [xbp-4080h]
  vm_size_t size; // [xsp+98h] [xbp-4078h]
  unsigned __int8 v38; // [xsp+A7h] [xbp-4069h] BYREF
  char v39; // [xsp+A8h] [xbp-4068h] BYREF

  v0 = (dyld3::MachOFile *)__chkstk_darwin();
  v2 = v1;
  v4 = v3;
  v6 = v5;
  v8 = v7;
  v9 = v0;
  v10 = v5 + 72;
  v33 = dyld3::MachOAnalyzer::localRelocBaseAddress(v0, v3, *(_DWORD *)(v5 + 104));
  LinkEditContent = dyld3::MachOLoaded::getLinkEditContent((__int64)v9, v10, *(_DWORD *)(*(_QWORD *)(v6 + 32) + 72LL));
  v12 = LinkEditContent + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 32) + 76LL);
  v13 = dyld3::MachOFile::is64(v9);
  v14 = (_QWORD *)dyld3::MachOFile::pointerSize(v9);
  v15 = (unsigned __int8)v14;
  v38 = 0;
  v34[0] = &v39;
  v34[1] = 2048;
  address = 0;
  size = 0;
  v35 = 0;
  if ( v12 > LinkEditContent )
  {
    if ( v13 )
      v16 = 3;
    else
      v16 = 2;
    v17 = "local relocation has wrong r_length";
    while ( 1 )
    {
      v18 = *(_DWORD *)(LinkEditContent + 4);
      if ( ((v18 >> 25) & 3) != v16 )
        break;
      if ( v18 >> 28 )
      {
        v17 = "local relocation has wrong r_type";
        break;
      }
      v14 = dyld3::OverflowSafeArray<relocation_info,4294967295ul>::verifySpace(v34, 1);
      v19 = v35++;
      v20 = *(_QWORD *)LinkEditContent;
      LinkEditContent += 8LL;
      *(_QWORD *)(v34[0] + 8 * v19) = v20;
      if ( LinkEditContent >= v12 )
        goto LABEL_12;
    }
    v14 = (_QWORD *)Diagnostics::error(v8, v17);
  }
LABEL_12:
  if ( v35 )
  {
    dyld3::MachOAnalyzer::sortRelocations((__int64)v14, v34);
    if ( v35 )
    {
      v21 = (unsigned int *)v34[0];
      v22 = v34[0] + 8 * v35;
      while ( 1 )
      {
        v23 = *(unsigned int *)(v6 + 104);
        if ( !(_DWORD)v23 )
          break;
        v24 = 0;
        v25 = v33 + *v21;
        v26 = 1;
        v27 = (_BYTE *)(v4 + 52);
        while ( 1 )
        {
          v28 = *(_QWORD *)(v27 - 36);
          if ( v25 >= v28 && *(_QWORD *)(v27 - 28) + v28 > v25 )
            break;
          v26 = ++v24 < v23;
          v27 += 64;
          if ( v23 == v24 )
            goto LABEL_30;
        }
        if ( !v26 )
          break;
        v32 = (unsigned int *)v22;
        if ( (v21[1] & 0x6000000) == 0x4000000 )
          v29 = 1;
        else
          v29 = 2;
        if ( *((_DWORD *)v9 + 1) == 7 && (*v27 & 4) != 0 )
          v29 = 4;
        (*(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64, _QWORD, _QWORD, unsigned __int64, int, unsigned __int8 *))(v2 + 16))(
          v2,
          "local relocation",
          v6,
          v4,
          1,
          v15,
          (unsigned __int8)v24,
          v25 - v28,
          v29,
          &v38);
        v21 += 2;
        v22 = (__int64)v32;
        if ( v21 == v32 )
          goto LABEL_31;
      }
LABEL_30:
      Diagnostics::error(v8, "local relocation has out of range r_address", &v38, v22);
    }
  }
LABEL_31:
  dyld3::MachOFile::is64(v9);
  dyld3::MachOAnalyzer::forEachIndirectPointer(v9, v8);
  v30 = v38;
  v35 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
  return v30 != 0;
}
